
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_2.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::Year()
    :
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "year"; yang_parent_name = "localtime"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Msec()
    :
    localtime(nullptr) // presence node
    , show_timezone(nullptr) // presence node
    , year(nullptr) // presence node
{

    yang_name = "msec"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_data() const
{
    if (is_presence_container) return true;
    return (localtime !=  nullptr && localtime->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(localtime != nullptr)
    {
        _children["localtime"] = localtime;
    }

    if(show_timezone != nullptr)
    {
        _children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        _children["year"] = year;
    }

    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::Localtime()
    :
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{

    yang_name = "localtime"; yang_parent_name = "msec"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_data() const
{
    if (is_presence_container) return true;
    return show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"},
    year{YType::empty, "year"}
{

    yang_name = "show-timezone"; yang_parent_name = "msec"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_data() const
{
    if (is_presence_container) return true;
    return localtime.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::Year()
    :
    localtime{YType::empty, "localtime"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "year"; yang_parent_name = "msec"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Msec::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_data() const
{
    if (is_presence_container) return true;
    return localtime.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/msec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Msec::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Msec::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Msec::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::ShowTimezone()
    :
    localtime(nullptr) // presence node
    , msec(nullptr) // presence node
    , year(nullptr) // presence node
{

    yang_name = "show-timezone"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_data() const
{
    if (is_presence_container) return true;
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(localtime != nullptr)
    {
        _children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        _children["msec"] = msec;
    }

    if(year != nullptr)
    {
        _children["year"] = year;
    }

    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::Localtime()
    :
    msec{YType::empty, "msec"},
    year{YType::empty, "year"}
{

    yang_name = "localtime"; yang_parent_name = "show-timezone"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::Msec()
    :
    localtime{YType::empty, "localtime"},
    year{YType::empty, "year"}
{

    yang_name = "msec"; yang_parent_name = "show-timezone"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_data() const
{
    if (is_presence_container) return true;
    return localtime.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::Year()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"}
{

    yang_name = "year"; yang_parent_name = "show-timezone"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_data() const
{
    if (is_presence_container) return true;
    return localtime.is_set
	|| msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/show-timezone/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::ShowTimezone::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Year()
    :
    localtime(nullptr) // presence node
    , msec(nullptr) // presence node
    , show_timezone(nullptr) // presence node
{

    yang_name = "year"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Year::~Year()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_data() const
{
    if (is_presence_container) return true;
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "year";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Year::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone>();
        }
        return show_timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Year::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(localtime != nullptr)
    {
        _children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        _children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        _children["show-timezone"] = show_timezone;
    }

    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Year::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::Localtime()
    :
    msec{YType::empty, "msec"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "localtime"; yang_parent_name = "year"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Year::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::Msec()
    :
    localtime{YType::empty, "localtime"},
    show_timezone{YType::empty, "show-timezone"}
{

    yang_name = "msec"; yang_parent_name = "year"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Year::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_data() const
{
    if (is_presence_container) return true;
    return localtime.is_set
	|| show_timezone.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(show_timezone.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Year::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "show-timezone")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::ShowTimezone()
    :
    localtime{YType::empty, "localtime"},
    msec{YType::empty, "msec"}
{

    yang_name = "show-timezone"; yang_parent_name = "year"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_data() const
{
    if (is_presence_container) return true;
    return localtime.is_set
	|| msec.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/year/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Year::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec")
        return true;
    return false;
}

Native::Service::Timestamps::Log::Log()
    :
    uptime{YType::empty, "uptime"}
        ,
    datetime(nullptr) // presence node
{

    yang_name = "log"; yang_parent_name = "timestamps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::Timestamps::Log::~Log()
{
}

bool Native::Service::Timestamps::Log::has_data() const
{
    if (is_presence_container) return true;
    return uptime.is_set
	|| (datetime !=  nullptr && datetime->has_data());
}

bool Native::Service::Timestamps::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (datetime !=  nullptr && datetime->has_operation());
}

std::string Native::Service::Timestamps::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datetime")
    {
        if(datetime == nullptr)
        {
            datetime = std::make_shared<Native::Service::Timestamps::Log::Datetime>();
        }
        return datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(datetime != nullptr)
    {
        _children["datetime"] = datetime;
    }

    return _children;
}

void Native::Service::Timestamps::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datetime" || name == "uptime")
        return true;
    return false;
}

Native::Service::Timestamps::Log::Datetime::Datetime()
    :
    msec{YType::empty, "msec"},
    localtime{YType::empty, "localtime"},
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{

    yang_name = "datetime"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Log::Datetime::~Datetime()
{
}

bool Native::Service::Timestamps::Log::Datetime::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set
	|| localtime.is_set
	|| show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Log::Datetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(localtime.yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Log::Datetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Log::Datetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Log::Datetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (localtime.is_set || is_set(localtime.yfilter)) leaf_name_data.push_back(localtime.get_name_leafdata());
    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Log::Datetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Log::Datetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Log::Datetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localtime")
    {
        localtime = value;
        localtime.value_namespace = name_space;
        localtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Log::Datetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "localtime")
    {
        localtime.yfilter = yfilter;
    }
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Log::Datetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "localtime" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Alignment::Alignment()
    :
    detection{YType::empty, "detection"},
    logging{YType::empty, "logging"}
{

    yang_name = "alignment"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::Alignment::~Alignment()
{
}

bool Native::Service::Alignment::has_data() const
{
    if (is_presence_container) return true;
    return detection.is_set
	|| logging.is_set;
}

bool Native::Service::Alignment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Service::Alignment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Alignment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alignment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Alignment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Alignment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Alignment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Alignment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Alignment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Service::Alignment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "logging")
        return true;
    return false;
}

Native::Service::Counters::Counters()
    :
    max(std::make_shared<Native::Service::Counters::Max>())
{
    max->parent = this;

    yang_name = "counters"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::Counters::~Counters()
{
}

bool Native::Service::Counters::has_data() const
{
    if (is_presence_container) return true;
    return (max !=  nullptr && max->has_data());
}

bool Native::Service::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (max !=  nullptr && max->has_operation());
}

std::string Native::Service::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(max != nullptr)
    {
        _children["max"] = max;
    }

    return _children;
}

void Native::Service::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Service::Counters::Max::Max()
    :
    age{YType::uint8, "age"}
{

    yang_name = "max"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::Counters::Max::~Max()
{
}

bool Native::Service::Counters::Max::has_data() const
{
    if (is_presence_container) return true;
    return age.is_set;
}

bool Native::Service::Counters::Max::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter);
}

std::string Native::Service::Counters::Max::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Counters::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Counters::Max::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Counters::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Counters::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Counters::Max::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Counters::Max::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
}

bool Native::Service::Counters::Max::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age")
        return true;
    return false;
}

Native::Service::Heartbeat::Heartbeat()
    :
    fatal_count{YType::uint8, "fatal-count"},
    interrupt_interval{YType::uint8, "interrupt-interval"},
    interrupt_max{YType::uint8, "interrupt-max"},
    transmit_interval{YType::uint8, "transmit-interval"},
    warning_timeout{YType::uint8, "warning-timeout"}
{

    yang_name = "heartbeat"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::Heartbeat::~Heartbeat()
{
}

bool Native::Service::Heartbeat::has_data() const
{
    if (is_presence_container) return true;
    return fatal_count.is_set
	|| interrupt_interval.is_set
	|| interrupt_max.is_set
	|| transmit_interval.is_set
	|| warning_timeout.is_set;
}

bool Native::Service::Heartbeat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fatal_count.yfilter)
	|| ydk::is_set(interrupt_interval.yfilter)
	|| ydk::is_set(interrupt_max.yfilter)
	|| ydk::is_set(transmit_interval.yfilter)
	|| ydk::is_set(warning_timeout.yfilter);
}

std::string Native::Service::Heartbeat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Heartbeat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heartbeat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Heartbeat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fatal_count.is_set || is_set(fatal_count.yfilter)) leaf_name_data.push_back(fatal_count.get_name_leafdata());
    if (interrupt_interval.is_set || is_set(interrupt_interval.yfilter)) leaf_name_data.push_back(interrupt_interval.get_name_leafdata());
    if (interrupt_max.is_set || is_set(interrupt_max.yfilter)) leaf_name_data.push_back(interrupt_max.get_name_leafdata());
    if (transmit_interval.is_set || is_set(transmit_interval.yfilter)) leaf_name_data.push_back(transmit_interval.get_name_leafdata());
    if (warning_timeout.is_set || is_set(warning_timeout.yfilter)) leaf_name_data.push_back(warning_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Heartbeat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Heartbeat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Heartbeat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fatal-count")
    {
        fatal_count = value;
        fatal_count.value_namespace = name_space;
        fatal_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interrupt-interval")
    {
        interrupt_interval = value;
        interrupt_interval.value_namespace = name_space;
        interrupt_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interrupt-max")
    {
        interrupt_max = value;
        interrupt_max.value_namespace = name_space;
        interrupt_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval = value;
        transmit_interval.value_namespace = name_space;
        transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-timeout")
    {
        warning_timeout = value;
        warning_timeout.value_namespace = name_space;
        warning_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Heartbeat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fatal-count")
    {
        fatal_count.yfilter = yfilter;
    }
    if(value_path == "interrupt-interval")
    {
        interrupt_interval.yfilter = yfilter;
    }
    if(value_path == "interrupt-max")
    {
        interrupt_max.yfilter = yfilter;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval.yfilter = yfilter;
    }
    if(value_path == "warning-timeout")
    {
        warning_timeout.yfilter = yfilter;
    }
}

bool Native::Service::Heartbeat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fatal-count" || name == "interrupt-interval" || name == "interrupt-max" || name == "transmit-interval" || name == "warning-timeout")
        return true;
    return false;
}

Native::Service::Prompt::Prompt()
    :
    config{YType::empty, "config"}
{

    yang_name = "prompt"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::Prompt::~Prompt()
{
}

bool Native::Service::Prompt::has_data() const
{
    if (is_presence_container) return true;
    return config.is_set;
}

bool Native::Service::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter);
}

std::string Native::Service::Prompt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
}

bool Native::Service::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Platform::Platform()
    :
    atm_cdvt{YType::boolean, "Cisco-IOS-XE-platform:atm-cdvt"},
    cfm{YType::empty, "Cisco-IOS-XE-platform:cfm"},
    bfd_debug_trace{YType::uint8, "Cisco-IOS-XE-platform:bfd-debug-trace"},
    shell{YType::boolean, "Cisco-IOS-XE-platform:shell"},
    tcam_parity_error{YType::enumeration, "Cisco-IOS-XE-platform:tcam-parity-error"}
        ,
    icmp(std::make_shared<Native::Platform::Icmp>())
    , ip_ports(std::make_shared<Native::Platform::IpPorts>())
    , bfd(std::make_shared<Native::Platform::Bfd>())
    , time_source(std::make_shared<Native::Platform::TimeSource>())
    , console(nullptr) // presence node
    , enable(std::make_shared<Native::Platform::Enable>())
    , external_alarm(std::make_shared<Native::Platform::ExternalAlarm>())
    , hardware(std::make_shared<Native::Platform::Hardware>())
    , ipsec(std::make_shared<Native::Platform::Ipsec>())
    , l2vpn(std::make_shared<Native::Platform::L2vpn>())
    , multicast(std::make_shared<Native::Platform::Multicast>())
    , punt_keepalive(nullptr) // presence node
    , punt_policer(std::make_shared<Native::Platform::PuntPolicer>())
    , qos(std::make_shared<Native::Platform::Qos>())
    , reload(std::make_shared<Native::Platform::Reload>())
    , urpf(std::make_shared<Native::Platform::Urpf>())
    , tcam_threshold(std::make_shared<Native::Platform::TcamThreshold>())
    , trace(std::make_shared<Native::Platform::Trace>())
{
    icmp->parent = this;
    ip_ports->parent = this;
    bfd->parent = this;
    time_source->parent = this;
    enable->parent = this;
    external_alarm->parent = this;
    hardware->parent = this;
    ipsec->parent = this;
    l2vpn->parent = this;
    multicast->parent = this;
    punt_policer->parent = this;
    qos->parent = this;
    reload->parent = this;
    urpf->parent = this;
    tcam_threshold->parent = this;
    trace->parent = this;

    yang_name = "platform"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::~Platform()
{
}

bool Native::Platform::has_data() const
{
    if (is_presence_container) return true;
    return atm_cdvt.is_set
	|| cfm.is_set
	|| bfd_debug_trace.is_set
	|| shell.is_set
	|| tcam_parity_error.is_set
	|| (icmp !=  nullptr && icmp->has_data())
	|| (ip_ports !=  nullptr && ip_ports->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (time_source !=  nullptr && time_source->has_data())
	|| (console !=  nullptr && console->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (external_alarm !=  nullptr && external_alarm->has_data())
	|| (hardware !=  nullptr && hardware->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_data())
	|| (punt_policer !=  nullptr && punt_policer->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reload !=  nullptr && reload->has_data())
	|| (urpf !=  nullptr && urpf->has_data())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_data())
	|| (trace !=  nullptr && trace->has_data());
}

bool Native::Platform::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_cdvt.yfilter)
	|| ydk::is_set(cfm.yfilter)
	|| ydk::is_set(bfd_debug_trace.yfilter)
	|| ydk::is_set(shell.yfilter)
	|| ydk::is_set(tcam_parity_error.yfilter)
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (ip_ports !=  nullptr && ip_ports->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (time_source !=  nullptr && time_source->has_operation())
	|| (console !=  nullptr && console->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (external_alarm !=  nullptr && external_alarm->has_operation())
	|| (hardware !=  nullptr && hardware->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_operation())
	|| (punt_policer !=  nullptr && punt_policer->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reload !=  nullptr && reload->has_operation())
	|| (urpf !=  nullptr && urpf->has_operation())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_operation())
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Native::Platform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_cdvt.is_set || is_set(atm_cdvt.yfilter)) leaf_name_data.push_back(atm_cdvt.get_name_leafdata());
    if (cfm.is_set || is_set(cfm.yfilter)) leaf_name_data.push_back(cfm.get_name_leafdata());
    if (bfd_debug_trace.is_set || is_set(bfd_debug_trace.yfilter)) leaf_name_data.push_back(bfd_debug_trace.get_name_leafdata());
    if (shell.is_set || is_set(shell.yfilter)) leaf_name_data.push_back(shell.get_name_leafdata());
    if (tcam_parity_error.is_set || is_set(tcam_parity_error.yfilter)) leaf_name_data.push_back(tcam_parity_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-platform:icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Platform::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:ip-ports")
    {
        if(ip_ports == nullptr)
        {
            ip_ports = std::make_shared<Native::Platform::IpPorts>();
        }
        return ip_ports;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Platform::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:time-source")
    {
        if(time_source == nullptr)
        {
            time_source = std::make_shared<Native::Platform::TimeSource>();
        }
        return time_source;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Platform::Console>();
        }
        return console;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Platform::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:external-alarm")
    {
        if(external_alarm == nullptr)
        {
            external_alarm = std::make_shared<Native::Platform::ExternalAlarm>();
        }
        return external_alarm;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:hardware")
    {
        if(hardware == nullptr)
        {
            hardware = std::make_shared<Native::Platform::Hardware>();
        }
        return hardware;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Platform::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::Platform::L2vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Platform::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:punt-keepalive")
    {
        if(punt_keepalive == nullptr)
        {
            punt_keepalive = std::make_shared<Native::Platform::PuntKeepalive>();
        }
        return punt_keepalive;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:punt-policer")
    {
        if(punt_policer == nullptr)
        {
            punt_policer = std::make_shared<Native::Platform::PuntPolicer>();
        }
        return punt_policer;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Platform::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:reload")
    {
        if(reload == nullptr)
        {
            reload = std::make_shared<Native::Platform::Reload>();
        }
        return reload;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:urpf")
    {
        if(urpf == nullptr)
        {
            urpf = std::make_shared<Native::Platform::Urpf>();
        }
        return urpf;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:tcam-threshold")
    {
        if(tcam_threshold == nullptr)
        {
            tcam_threshold = std::make_shared<Native::Platform::TcamThreshold>();
        }
        return tcam_threshold;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Platform::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp != nullptr)
    {
        _children["Cisco-IOS-XE-platform:icmp"] = icmp;
    }

    if(ip_ports != nullptr)
    {
        _children["Cisco-IOS-XE-platform:ip-ports"] = ip_ports;
    }

    if(bfd != nullptr)
    {
        _children["Cisco-IOS-XE-platform:bfd"] = bfd;
    }

    if(time_source != nullptr)
    {
        _children["Cisco-IOS-XE-platform:time-source"] = time_source;
    }

    if(console != nullptr)
    {
        _children["Cisco-IOS-XE-platform:console"] = console;
    }

    if(enable != nullptr)
    {
        _children["Cisco-IOS-XE-platform:enable"] = enable;
    }

    if(external_alarm != nullptr)
    {
        _children["Cisco-IOS-XE-platform:external-alarm"] = external_alarm;
    }

    if(hardware != nullptr)
    {
        _children["Cisco-IOS-XE-platform:hardware"] = hardware;
    }

    if(ipsec != nullptr)
    {
        _children["Cisco-IOS-XE-platform:ipsec"] = ipsec;
    }

    if(l2vpn != nullptr)
    {
        _children["Cisco-IOS-XE-platform:l2vpn"] = l2vpn;
    }

    if(multicast != nullptr)
    {
        _children["Cisco-IOS-XE-platform:multicast"] = multicast;
    }

    if(punt_keepalive != nullptr)
    {
        _children["Cisco-IOS-XE-platform:punt-keepalive"] = punt_keepalive;
    }

    if(punt_policer != nullptr)
    {
        _children["Cisco-IOS-XE-platform:punt-policer"] = punt_policer;
    }

    if(qos != nullptr)
    {
        _children["Cisco-IOS-XE-platform:qos"] = qos;
    }

    if(reload != nullptr)
    {
        _children["Cisco-IOS-XE-platform:reload"] = reload;
    }

    if(urpf != nullptr)
    {
        _children["Cisco-IOS-XE-platform:urpf"] = urpf;
    }

    if(tcam_threshold != nullptr)
    {
        _children["Cisco-IOS-XE-platform:tcam-threshold"] = tcam_threshold;
    }

    if(trace != nullptr)
    {
        _children["Cisco-IOS-XE-platform:trace"] = trace;
    }

    return _children;
}

void Native::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-platform:atm-cdvt")
    {
        atm_cdvt = value;
        atm_cdvt.value_namespace = name_space;
        atm_cdvt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-platform:cfm")
    {
        cfm = value;
        cfm.value_namespace = name_space;
        cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-platform:bfd-debug-trace")
    {
        bfd_debug_trace = value;
        bfd_debug_trace.value_namespace = name_space;
        bfd_debug_trace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-platform:shell")
    {
        shell = value;
        shell.value_namespace = name_space;
        shell.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-platform:tcam-parity-error")
    {
        tcam_parity_error = value;
        tcam_parity_error.value_namespace = name_space;
        tcam_parity_error.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-cdvt")
    {
        atm_cdvt.yfilter = yfilter;
    }
    if(value_path == "cfm")
    {
        cfm.yfilter = yfilter;
    }
    if(value_path == "bfd-debug-trace")
    {
        bfd_debug_trace.yfilter = yfilter;
    }
    if(value_path == "shell")
    {
        shell.yfilter = yfilter;
    }
    if(value_path == "tcam-parity-error")
    {
        tcam_parity_error.yfilter = yfilter;
    }
}

bool Native::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp" || name == "ip-ports" || name == "bfd" || name == "time-source" || name == "console" || name == "enable" || name == "external-alarm" || name == "hardware" || name == "ipsec" || name == "l2vpn" || name == "multicast" || name == "punt-keepalive" || name == "punt-policer" || name == "qos" || name == "reload" || name == "urpf" || name == "tcam-threshold" || name == "trace" || name == "atm-cdvt" || name == "cfm" || name == "bfd-debug-trace" || name == "shell" || name == "tcam-parity-error")
        return true;
    return false;
}

Native::Platform::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Platform::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Icmp::~Icmp()
{
}

bool Native::Platform::Icmp::has_data() const
{
    if (is_presence_container) return true;
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Platform::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Platform::Icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate_limit != nullptr)
    {
        _children["rate-limit"] = rate_limit;
    }

    return _children;
}

void Native::Platform::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Platform::Icmp::RateLimit::RateLimit()
    :
    packet{YType::uint32, "packet"},
    duration{YType::uint32, "duration"}
{

    yang_name = "rate-limit"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Platform::Icmp::RateLimit::has_data() const
{
    if (is_presence_container) return true;
    return packet.is_set
	|| duration.is_set;
}

bool Native::Platform::Icmp::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Native::Platform::Icmp::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:icmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Icmp::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Icmp::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Icmp::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Native::Platform::Icmp::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet" || name == "duration")
        return true;
    return false;
}

Native::Platform::IpPorts::IpPorts()
    :
    ephemeral_max{YType::uint16, "ephemeral-max"}
{

    yang_name = "ip-ports"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::IpPorts::~IpPorts()
{
}

bool Native::Platform::IpPorts::has_data() const
{
    if (is_presence_container) return true;
    return ephemeral_max.is_set;
}

bool Native::Platform::IpPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ephemeral_max.yfilter);
}

std::string Native::Platform::IpPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::IpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ip-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::IpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ephemeral_max.is_set || is_set(ephemeral_max.yfilter)) leaf_name_data.push_back(ephemeral_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::IpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::IpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::IpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ephemeral-max")
    {
        ephemeral_max = value;
        ephemeral_max.value_namespace = name_space;
        ephemeral_max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::IpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ephemeral-max")
    {
        ephemeral_max.yfilter = yfilter;
    }
}

bool Native::Platform::IpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ephemeral-max")
        return true;
    return false;
}

Native::Platform::Bfd::Bfd()
    :
    disable_offload{YType::empty, "disable-offload"},
    allow_svi{YType::empty, "allow-svi"},
    enable_offload{YType::empty, "enable-offload"}
{

    yang_name = "bfd"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Bfd::~Bfd()
{
}

bool Native::Platform::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable_offload.is_set
	|| allow_svi.is_set
	|| enable_offload.is_set;
}

bool Native::Platform::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_offload.yfilter)
	|| ydk::is_set(allow_svi.yfilter)
	|| ydk::is_set(enable_offload.yfilter);
}

std::string Native::Platform::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_offload.is_set || is_set(disable_offload.yfilter)) leaf_name_data.push_back(disable_offload.get_name_leafdata());
    if (allow_svi.is_set || is_set(allow_svi.yfilter)) leaf_name_data.push_back(allow_svi.get_name_leafdata());
    if (enable_offload.is_set || is_set(enable_offload.yfilter)) leaf_name_data.push_back(enable_offload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-offload")
    {
        disable_offload = value;
        disable_offload.value_namespace = name_space;
        disable_offload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-svi")
    {
        allow_svi = value;
        allow_svi.value_namespace = name_space;
        allow_svi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-offload")
    {
        enable_offload = value;
        enable_offload.value_namespace = name_space;
        enable_offload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-offload")
    {
        disable_offload.yfilter = yfilter;
    }
    if(value_path == "allow-svi")
    {
        allow_svi.yfilter = yfilter;
    }
    if(value_path == "enable-offload")
    {
        enable_offload.yfilter = yfilter;
    }
}

bool Native::Platform::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-offload" || name == "allow-svi" || name == "enable-offload")
        return true;
    return false;
}

Native::Platform::TimeSource::TimeSource()
    :
    ntp(nullptr) // presence node
{

    yang_name = "time-source"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::TimeSource::~TimeSource()
{
}

bool Native::Platform::TimeSource::has_data() const
{
    if (is_presence_container) return true;
    return (ntp !=  nullptr && ntp->has_data());
}

bool Native::Platform::TimeSource::has_operation() const
{
    return is_set(yfilter)
	|| (ntp !=  nullptr && ntp->has_operation());
}

std::string Native::Platform::TimeSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::TimeSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:time-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::TimeSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::TimeSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Platform::TimeSource::Ntp>();
        }
        return ntp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::TimeSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ntp != nullptr)
    {
        _children["ntp"] = ntp;
    }

    return _children;
}

void Native::Platform::TimeSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::TimeSource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::TimeSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntp")
        return true;
    return false;
}

Native::Platform::TimeSource::Ntp::Ntp()
    :
    time_scale{YType::enumeration, "time-scale"}
{

    yang_name = "ntp"; yang_parent_name = "time-source"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Platform::TimeSource::Ntp::~Ntp()
{
}

bool Native::Platform::TimeSource::Ntp::has_data() const
{
    if (is_presence_container) return true;
    return time_scale.is_set;
}

bool Native::Platform::TimeSource::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_scale.yfilter);
}

std::string Native::Platform::TimeSource::Ntp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:time-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::TimeSource::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::TimeSource::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_scale.is_set || is_set(time_scale.yfilter)) leaf_name_data.push_back(time_scale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::TimeSource::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::TimeSource::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::TimeSource::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-scale")
    {
        time_scale = value;
        time_scale.value_namespace = name_space;
        time_scale.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::TimeSource::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-scale")
    {
        time_scale.yfilter = yfilter;
    }
}

bool Native::Platform::TimeSource::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-scale")
        return true;
    return false;
}

Native::Platform::Console::Console()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "console"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Platform::Console::~Console()
{
}

bool Native::Platform::Console::has_data() const
{
    if (is_presence_container) return true;
    return output.is_set;
}

bool Native::Platform::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Platform::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Platform::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Platform::Enable::Enable()
    :
    controller(this, {"sonet"})
{

    yang_name = "enable"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Enable::~Enable()
{
}

bool Native::Platform::Enable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Enable::has_operation() const
{
    for (std::size_t index=0; index<controller.len(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto ent_ = std::make_shared<Native::Platform::Enable::Controller>();
        ent_->parent = this;
        controller.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controller.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Platform::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Native::Platform::Enable::Controller::Controller()
    :
    sonet{YType::str, "SONET"}
{

    yang_name = "controller"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Enable::Controller::~Controller()
{
}

bool Native::Platform::Enable::Controller::has_data() const
{
    if (is_presence_container) return true;
    return sonet.is_set;
}

bool Native::Platform::Enable::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sonet.yfilter);
}

std::string Native::Platform::Enable::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Enable::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    ADD_KEY_TOKEN(sonet, "SONET");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Enable::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Enable::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Enable::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Enable::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "SONET")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Enable::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "SONET")
    {
        sonet.yfilter = yfilter;
    }
}

bool Native::Platform::Enable::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SONET")
        return true;
    return false;
}

Native::Platform::ExternalAlarm::ExternalAlarm()
    :
    line{YType::uint32, "line"},
    alarm{YType::str, "alarm"}
{

    yang_name = "external-alarm"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::ExternalAlarm::~ExternalAlarm()
{
}

bool Native::Platform::ExternalAlarm::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set
	|| alarm.is_set;
}

bool Native::Platform::ExternalAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(alarm.yfilter);
}

std::string Native::Platform::ExternalAlarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::ExternalAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:external-alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::ExternalAlarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::ExternalAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::ExternalAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::ExternalAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::ExternalAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool Native::Platform::ExternalAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line" || name == "alarm")
        return true;
    return false;
}

Native::Platform::Hardware::Hardware()
    :
    lite(std::make_shared<Native::Platform::Hardware::Lite>())
    , throughput(std::make_shared<Native::Platform::Hardware::Throughput>())
    , crypto_offload(std::make_shared<Native::Platform::Hardware::CryptoOffload>())
{
    lite->parent = this;
    throughput->parent = this;
    crypto_offload->parent = this;

    yang_name = "hardware"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Hardware::~Hardware()
{
}

bool Native::Platform::Hardware::has_data() const
{
    if (is_presence_container) return true;
    return (lite !=  nullptr && lite->has_data())
	|| (throughput !=  nullptr && throughput->has_data())
	|| (crypto_offload !=  nullptr && crypto_offload->has_data());
}

bool Native::Platform::Hardware::has_operation() const
{
    return is_set(yfilter)
	|| (lite !=  nullptr && lite->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation())
	|| (crypto_offload !=  nullptr && crypto_offload->has_operation());
}

std::string Native::Platform::Hardware::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:hardware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "crypto-offload")
    {
        if(crypto_offload == nullptr)
        {
            crypto_offload = std::make_shared<Native::Platform::Hardware::CryptoOffload>();
        }
        return crypto_offload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lite != nullptr)
    {
        _children["lite"] = lite;
    }

    if(throughput != nullptr)
    {
        _children["throughput"] = throughput;
    }

    if(crypto_offload != nullptr)
    {
        _children["crypto-offload"] = crypto_offload;
    }

    return _children;
}

void Native::Platform::Hardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Hardware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Hardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lite" || name == "throughput" || name == "crypto-offload")
        return true;
    return false;
}

Native::Platform::Hardware::Lite::Lite()
    :
    license{YType::enumeration, "license"}
{

    yang_name = "lite"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Hardware::Lite::~Lite()
{
}

bool Native::Platform::Hardware::Lite::has_data() const
{
    if (is_presence_container) return true;
    return license.is_set;
}

bool Native::Platform::Hardware::Lite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(license.yfilter);
}

std::string Native::Platform::Hardware::Lite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::Lite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (license.is_set || is_set(license.yfilter)) leaf_name_data.push_back(license.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Hardware::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Hardware::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Hardware::Lite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "license")
    {
        license = value;
        license.value_namespace = name_space;
        license.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Lite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "license")
    {
        license.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Lite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "license")
        return true;
    return false;
}

Native::Platform::Hardware::Throughput::Throughput()
    :
    disable{YType::enumeration, "disable"}
        ,
    level(std::make_shared<Native::Platform::Hardware::Throughput::Level>())
{
    level->parent = this;

    yang_name = "throughput"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Hardware::Throughput::~Throughput()
{
}

bool Native::Platform::Hardware::Throughput::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| (level !=  nullptr && level->has_data());
}

bool Native::Platform::Hardware::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Platform::Hardware::Throughput::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Hardware::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Hardware::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Platform::Hardware::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "disable")
        return true;
    return false;
}

Native::Platform::Hardware::Throughput::Level::Level()
    :
    kbps{YType::enumeration, "kbps"},
    eval_only{YType::empty, "eval-only"}
{

    yang_name = "level"; yang_parent_name = "throughput"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Hardware::Throughput::Level::~Level()
{
}

bool Native::Platform::Hardware::Throughput::Level::has_data() const
{
    if (is_presence_container) return true;
    return kbps.is_set
	|| eval_only.is_set;
}

bool Native::Platform::Hardware::Throughput::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbps.yfilter)
	|| ydk::is_set(eval_only.yfilter);
}

std::string Native::Platform::Hardware::Throughput::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/throughput/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::Throughput::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::Throughput::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());
    if (eval_only.is_set || is_set(eval_only.yfilter)) leaf_name_data.push_back(eval_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Hardware::Throughput::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Hardware::Throughput::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Hardware::Throughput::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eval-only")
    {
        eval_only = value;
        eval_only.value_namespace = name_space;
        eval_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Throughput::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
    if(value_path == "eval-only")
    {
        eval_only.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Throughput::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbps" || name == "eval-only")
        return true;
    return false;
}

Native::Platform::Hardware::CryptoOffload::CryptoOffload()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "crypto-offload"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Hardware::CryptoOffload::~CryptoOffload()
{
}

bool Native::Platform::Hardware::CryptoOffload::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Platform::Hardware::CryptoOffload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Platform::Hardware::CryptoOffload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::CryptoOffload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-offload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::CryptoOffload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Hardware::CryptoOffload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Hardware::CryptoOffload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Hardware::CryptoOffload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::CryptoOffload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::CryptoOffload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Platform::Ipsec::Ipsec()
    :
    arlog_supress{YType::empty, "arlog-supress"},
    fips_mode{YType::empty, "fips-mode"},
    gdoi{YType::enumeration, "gdoi"},
    flexvpn_bypass_tcam{YType::empty, "flexvpn-bypass-tcam"},
    modexp_throttle_window{YType::uint8, "modexp-throttle-window"},
    control_plane{YType::enumeration, "control-plane"}
        ,
    llq(std::make_shared<Native::Platform::Ipsec::Llq>())
    , reassemble(std::make_shared<Native::Platform::Ipsec::Reassemble>())
{
    llq->parent = this;
    reassemble->parent = this;

    yang_name = "ipsec"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Ipsec::~Ipsec()
{
}

bool Native::Platform::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return arlog_supress.is_set
	|| fips_mode.is_set
	|| gdoi.is_set
	|| flexvpn_bypass_tcam.is_set
	|| modexp_throttle_window.is_set
	|| control_plane.is_set
	|| (llq !=  nullptr && llq->has_data())
	|| (reassemble !=  nullptr && reassemble->has_data());
}

bool Native::Platform::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arlog_supress.yfilter)
	|| ydk::is_set(fips_mode.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(flexvpn_bypass_tcam.yfilter)
	|| ydk::is_set(modexp_throttle_window.yfilter)
	|| ydk::is_set(control_plane.yfilter)
	|| (llq !=  nullptr && llq->has_operation())
	|| (reassemble !=  nullptr && reassemble->has_operation());
}

std::string Native::Platform::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arlog_supress.is_set || is_set(arlog_supress.yfilter)) leaf_name_data.push_back(arlog_supress.get_name_leafdata());
    if (fips_mode.is_set || is_set(fips_mode.yfilter)) leaf_name_data.push_back(fips_mode.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (flexvpn_bypass_tcam.is_set || is_set(flexvpn_bypass_tcam.yfilter)) leaf_name_data.push_back(flexvpn_bypass_tcam.get_name_leafdata());
    if (modexp_throttle_window.is_set || is_set(modexp_throttle_window.yfilter)) leaf_name_data.push_back(modexp_throttle_window.get_name_leafdata());
    if (control_plane.is_set || is_set(control_plane.yfilter)) leaf_name_data.push_back(control_plane.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(llq != nullptr)
    {
        _children["llq"] = llq;
    }

    if(reassemble != nullptr)
    {
        _children["reassemble"] = reassemble;
    }

    return _children;
}

void Native::Platform::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arlog-supress")
    {
        arlog_supress = value;
        arlog_supress.value_namespace = name_space;
        arlog_supress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fips-mode")
    {
        fips_mode = value;
        fips_mode.value_namespace = name_space;
        fips_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flexvpn-bypass-tcam")
    {
        flexvpn_bypass_tcam = value;
        flexvpn_bypass_tcam.value_namespace = name_space;
        flexvpn_bypass_tcam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modexp-throttle-window")
    {
        modexp_throttle_window = value;
        modexp_throttle_window.value_namespace = name_space;
        modexp_throttle_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane")
    {
        control_plane = value;
        control_plane.value_namespace = name_space;
        control_plane.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arlog-supress")
    {
        arlog_supress.yfilter = yfilter;
    }
    if(value_path == "fips-mode")
    {
        fips_mode.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "flexvpn-bypass-tcam")
    {
        flexvpn_bypass_tcam.yfilter = yfilter;
    }
    if(value_path == "modexp-throttle-window")
    {
        modexp_throttle_window.yfilter = yfilter;
    }
    if(value_path == "control-plane")
    {
        control_plane.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "llq" || name == "reassemble" || name == "arlog-supress" || name == "fips-mode" || name == "gdoi" || name == "flexvpn-bypass-tcam" || name == "modexp-throttle-window" || name == "control-plane")
        return true;
    return false;
}

Native::Platform::Ipsec::Llq::Llq()
    :
    qos_group{YType::uint8, "qos-group"}
{

    yang_name = "llq"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Ipsec::Llq::~Llq()
{
}

bool Native::Platform::Ipsec::Llq::has_data() const
{
    if (is_presence_container) return true;
    return qos_group.is_set;
}

bool Native::Platform::Ipsec::Llq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_group.yfilter);
}

std::string Native::Platform::Ipsec::Llq::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Ipsec::Llq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "llq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Ipsec::Llq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Ipsec::Llq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Ipsec::Llq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Ipsec::Llq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::Llq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::Llq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-group")
        return true;
    return false;
}

Native::Platform::Ipsec::Reassemble::Reassemble()
    :
    transit{YType::empty, "transit"}
{

    yang_name = "reassemble"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Ipsec::Reassemble::~Reassemble()
{
}

bool Native::Platform::Ipsec::Reassemble::has_data() const
{
    if (is_presence_container) return true;
    return transit.is_set;
}

bool Native::Platform::Ipsec::Reassemble::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transit.yfilter);
}

std::string Native::Platform::Ipsec::Reassemble::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Ipsec::Reassemble::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reassemble";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Ipsec::Reassemble::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transit.is_set || is_set(transit.yfilter)) leaf_name_data.push_back(transit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Ipsec::Reassemble::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Ipsec::Reassemble::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Ipsec::Reassemble::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transit")
    {
        transit = value;
        transit.value_namespace = name_space;
        transit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::Reassemble::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transit")
    {
        transit.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::Reassemble::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transit")
        return true;
    return false;
}

Native::Platform::L2vpn::L2vpn()
    :
    hdlc_pass_through{YType::empty, "hdlc-pass-through"}
        ,
    statistics(std::make_shared<Native::Platform::L2vpn::Statistics>())
{
    statistics->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::L2vpn::~L2vpn()
{
}

bool Native::Platform::L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return hdlc_pass_through.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Platform::L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hdlc_pass_through.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Platform::L2vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hdlc_pass_through.is_set || is_set(hdlc_pass_through.yfilter)) leaf_name_data.push_back(hdlc_pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Platform::L2vpn::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Native::Platform::L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hdlc-pass-through")
    {
        hdlc_pass_through = value;
        hdlc_pass_through.value_namespace = name_space;
        hdlc_pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hdlc-pass-through")
    {
        hdlc_pass_through.yfilter = yfilter;
    }
}

bool Native::Platform::L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "hdlc-pass-through")
        return true;
    return false;
}

Native::Platform::L2vpn::Statistics::Statistics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "statistics"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::L2vpn::Statistics::~Statistics()
{
}

bool Native::Platform::L2vpn::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Platform::L2vpn::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Platform::L2vpn::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::L2vpn::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::L2vpn::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::L2vpn::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::L2vpn::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::L2vpn::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::L2vpn::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Platform::L2vpn::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Platform::Multicast::Multicast()
    :
    mgre(std::make_shared<Native::Platform::Multicast::Mgre>())
    , oce(std::make_shared<Native::Platform::Multicast::Oce>())
{
    mgre->parent = this;
    oce->parent = this;

    yang_name = "multicast"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Multicast::~Multicast()
{
}

bool Native::Platform::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (mgre !=  nullptr && mgre->has_data())
	|| (oce !=  nullptr && oce->has_data());
}

bool Native::Platform::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (mgre !=  nullptr && mgre->has_operation())
	|| (oce !=  nullptr && oce->has_operation());
}

std::string Native::Platform::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mgre != nullptr)
    {
        _children["mgre"] = mgre;
    }

    if(oce != nullptr)
    {
        _children["oce"] = oce;
    }

    return _children;
}

void Native::Platform::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgre" || name == "oce")
        return true;
    return false;
}

Native::Platform::Multicast::Mgre::Mgre()
    :
    injection{YType::empty, "injection"}
{

    yang_name = "mgre"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Multicast::Mgre::~Mgre()
{
}

bool Native::Platform::Multicast::Mgre::has_data() const
{
    if (is_presence_container) return true;
    return injection.is_set;
}

bool Native::Platform::Multicast::Mgre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(injection.yfilter);
}

std::string Native::Platform::Multicast::Mgre::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::Mgre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::Mgre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (injection.is_set || is_set(injection.yfilter)) leaf_name_data.push_back(injection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Multicast::Mgre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Multicast::Mgre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Multicast::Mgre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "injection")
    {
        injection = value;
        injection.value_namespace = name_space;
        injection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Multicast::Mgre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "injection")
    {
        injection.yfilter = yfilter;
    }
}

bool Native::Platform::Multicast::Mgre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "injection")
        return true;
    return false;
}

Native::Platform::Multicast::Oce::Oce()
    :
    flag(std::make_shared<Native::Platform::Multicast::Oce::Flag>())
{
    flag->parent = this;

    yang_name = "oce"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Multicast::Oce::~Oce()
{
}

bool Native::Platform::Multicast::Oce::has_data() const
{
    if (is_presence_container) return true;
    return (flag !=  nullptr && flag->has_data());
}

bool Native::Platform::Multicast::Oce::has_operation() const
{
    return is_set(yfilter)
	|| (flag !=  nullptr && flag->has_operation());
}

std::string Native::Platform::Multicast::Oce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::Oce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::Oce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Multicast::Oce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Multicast::Oce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flag != nullptr)
    {
        _children["flag"] = flag;
    }

    return _children;
}

void Native::Platform::Multicast::Oce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Multicast::Oce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Multicast::Oce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flag")
        return true;
    return false;
}

Native::Platform::Multicast::Oce::Flag::Flag()
    :
    suppress{YType::empty, "suppress"}
{

    yang_name = "flag"; yang_parent_name = "oce"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Multicast::Oce::Flag::~Flag()
{
}

bool Native::Platform::Multicast::Oce::Flag::has_data() const
{
    if (is_presence_container) return true;
    return suppress.is_set;
}

bool Native::Platform::Multicast::Oce::Flag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(suppress.yfilter);
}

std::string Native::Platform::Multicast::Oce::Flag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/oce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::Oce::Flag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::Oce::Flag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Multicast::Oce::Flag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Multicast::Oce::Flag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Multicast::Oce::Flag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Multicast::Oce::Flag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
}

bool Native::Platform::Multicast::Oce::Flag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Platform::PuntKeepalive::PuntKeepalive()
    :
    disable_kernel_core{YType::boolean, "disable-kernel-core"}
        ,
    settings(std::make_shared<Native::Platform::PuntKeepalive::Settings>())
{
    settings->parent = this;

    yang_name = "punt-keepalive"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Platform::PuntKeepalive::~PuntKeepalive()
{
}

bool Native::Platform::PuntKeepalive::has_data() const
{
    if (is_presence_container) return true;
    return disable_kernel_core.is_set
	|| (settings !=  nullptr && settings->has_data());
}

bool Native::Platform::PuntKeepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_kernel_core.yfilter)
	|| (settings !=  nullptr && settings->has_operation());
}

std::string Native::Platform::PuntKeepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntKeepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:punt-keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntKeepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_kernel_core.is_set || is_set(disable_kernel_core.yfilter)) leaf_name_data.push_back(disable_kernel_core.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::PuntKeepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::PuntKeepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(settings != nullptr)
    {
        _children["settings"] = settings;
    }

    return _children;
}

void Native::Platform::PuntKeepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-kernel-core")
    {
        disable_kernel_core = value;
        disable_kernel_core.value_namespace = name_space;
        disable_kernel_core.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::PuntKeepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-kernel-core")
    {
        disable_kernel_core.yfilter = yfilter;
    }
}

bool Native::Platform::PuntKeepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "settings" || name == "disable-kernel-core")
        return true;
    return false;
}

Native::Platform::PuntKeepalive::Settings::Settings()
    :
    fatal_count{YType::uint16, "fatal-count"},
    transmit_interval{YType::uint16, "transmit-interval"},
    warning_count{YType::uint16, "warning-count"}
{

    yang_name = "settings"; yang_parent_name = "punt-keepalive"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::PuntKeepalive::Settings::~Settings()
{
}

bool Native::Platform::PuntKeepalive::Settings::has_data() const
{
    if (is_presence_container) return true;
    return fatal_count.is_set
	|| transmit_interval.is_set
	|| warning_count.is_set;
}

bool Native::Platform::PuntKeepalive::Settings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fatal_count.yfilter)
	|| ydk::is_set(transmit_interval.yfilter)
	|| ydk::is_set(warning_count.yfilter);
}

std::string Native::Platform::PuntKeepalive::Settings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:punt-keepalive/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntKeepalive::Settings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntKeepalive::Settings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fatal_count.is_set || is_set(fatal_count.yfilter)) leaf_name_data.push_back(fatal_count.get_name_leafdata());
    if (transmit_interval.is_set || is_set(transmit_interval.yfilter)) leaf_name_data.push_back(transmit_interval.get_name_leafdata());
    if (warning_count.is_set || is_set(warning_count.yfilter)) leaf_name_data.push_back(warning_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::PuntKeepalive::Settings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::PuntKeepalive::Settings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::PuntKeepalive::Settings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fatal-count")
    {
        fatal_count = value;
        fatal_count.value_namespace = name_space;
        fatal_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval = value;
        transmit_interval.value_namespace = name_space;
        transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-count")
    {
        warning_count = value;
        warning_count.value_namespace = name_space;
        warning_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::PuntKeepalive::Settings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fatal-count")
    {
        fatal_count.yfilter = yfilter;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval.yfilter = yfilter;
    }
    if(value_path == "warning-count")
    {
        warning_count.yfilter = yfilter;
    }
}

bool Native::Platform::PuntKeepalive::Settings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fatal-count" || name == "transmit-interval" || name == "warning-count")
        return true;
    return false;
}

Native::Platform::PuntPolicer::PuntPolicer()
    :
    punt_num(this, {"cause"})
{

    yang_name = "punt-policer"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::PuntPolicer::~PuntPolicer()
{
}

bool Native::Platform::PuntPolicer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<punt_num.len(); index++)
    {
        if(punt_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::PuntPolicer::has_operation() const
{
    for (std::size_t index=0; index<punt_num.len(); index++)
    {
        if(punt_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::PuntPolicer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntPolicer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:punt-policer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntPolicer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::PuntPolicer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "punt-num")
    {
        auto ent_ = std::make_shared<Native::Platform::PuntPolicer::PuntNum>();
        ent_->parent = this;
        punt_num.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::PuntPolicer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : punt_num.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Platform::PuntPolicer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::PuntPolicer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::PuntPolicer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "punt-num")
        return true;
    return false;
}

Native::Platform::PuntPolicer::PuntNum::PuntNum()
    :
    cause{YType::uint8, "cause"},
    max_rate{YType::uint16, "max-rate"},
    high{YType::empty, "high"}
{

    yang_name = "punt-num"; yang_parent_name = "punt-policer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::PuntPolicer::PuntNum::~PuntNum()
{
}

bool Native::Platform::PuntPolicer::PuntNum::has_data() const
{
    if (is_presence_container) return true;
    return cause.is_set
	|| max_rate.is_set
	|| high.is_set;
}

bool Native::Platform::PuntPolicer::PuntNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cause.yfilter)
	|| ydk::is_set(max_rate.yfilter)
	|| ydk::is_set(high.yfilter);
}

std::string Native::Platform::PuntPolicer::PuntNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:punt-policer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntPolicer::PuntNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt-num";
    ADD_KEY_TOKEN(cause, "cause");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntPolicer::PuntNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cause.is_set || is_set(cause.yfilter)) leaf_name_data.push_back(cause.get_name_leafdata());
    if (max_rate.is_set || is_set(max_rate.yfilter)) leaf_name_data.push_back(max_rate.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::PuntPolicer::PuntNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::PuntPolicer::PuntNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::PuntPolicer::PuntNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cause")
    {
        cause = value;
        cause.value_namespace = name_space;
        cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-rate")
    {
        max_rate = value;
        max_rate.value_namespace = name_space;
        max_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::PuntPolicer::PuntNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cause")
    {
        cause.yfilter = yfilter;
    }
    if(value_path == "max-rate")
    {
        max_rate.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
}

bool Native::Platform::PuntPolicer::PuntNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause" || name == "max-rate" || name == "high")
        return true;
    return false;
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

    yang_name = "qos"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Qos::~Qos()
{
}

bool Native::Platform::Qos::has_data() const
{
    if (is_presence_container) return true;
    return cac_policer.is_set
	|| marker_statistics.is_set
	|| performance_monitor.is_set
	|| punt_path_matching.is_set
	|| (match_statistics !=  nullptr && match_statistics->has_data());
}

bool Native::Platform::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cac_policer.yfilter)
	|| ydk::is_set(marker_statistics.yfilter)
	|| ydk::is_set(performance_monitor.yfilter)
	|| ydk::is_set(punt_path_matching.yfilter)
	|| (match_statistics !=  nullptr && match_statistics->has_operation());
}

std::string Native::Platform::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_policer.is_set || is_set(cac_policer.yfilter)) leaf_name_data.push_back(cac_policer.get_name_leafdata());
    if (marker_statistics.is_set || is_set(marker_statistics.yfilter)) leaf_name_data.push_back(marker_statistics.get_name_leafdata());
    if (performance_monitor.is_set || is_set(performance_monitor.yfilter)) leaf_name_data.push_back(performance_monitor.get_name_leafdata());
    if (punt_path_matching.is_set || is_set(punt_path_matching.yfilter)) leaf_name_data.push_back(punt_path_matching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match_statistics != nullptr)
    {
        _children["match-statistics"] = match_statistics;
    }

    return _children;
}

void Native::Platform::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cac-policer")
    {
        cac_policer = value;
        cac_policer.value_namespace = name_space;
        cac_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-statistics")
    {
        marker_statistics = value;
        marker_statistics.value_namespace = name_space;
        marker_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitor")
    {
        performance_monitor = value;
        performance_monitor.value_namespace = name_space;
        performance_monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punt-path-matching")
    {
        punt_path_matching = value;
        punt_path_matching.value_namespace = name_space;
        punt_path_matching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cac-policer")
    {
        cac_policer.yfilter = yfilter;
    }
    if(value_path == "marker-statistics")
    {
        marker_statistics.yfilter = yfilter;
    }
    if(value_path == "performance-monitor")
    {
        performance_monitor.yfilter = yfilter;
    }
    if(value_path == "punt-path-matching")
    {
        punt_path_matching.yfilter = yfilter;
    }
}

bool Native::Platform::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-statistics" || name == "cac-policer" || name == "marker-statistics" || name == "performance-monitor" || name == "punt-path-matching")
        return true;
    return false;
}

Native::Platform::Qos::MatchStatistics::MatchStatistics()
    :
    per_filter{YType::empty, "per-filter"},
    per_ace{YType::empty, "per-ace"}
{

    yang_name = "match-statistics"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Qos::MatchStatistics::~MatchStatistics()
{
}

bool Native::Platform::Qos::MatchStatistics::has_data() const
{
    if (is_presence_container) return true;
    return per_filter.is_set
	|| per_ace.is_set;
}

bool Native::Platform::Qos::MatchStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_filter.yfilter)
	|| ydk::is_set(per_ace.yfilter);
}

std::string Native::Platform::Qos::MatchStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Qos::MatchStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Qos::MatchStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_filter.is_set || is_set(per_filter.yfilter)) leaf_name_data.push_back(per_filter.get_name_leafdata());
    if (per_ace.is_set || is_set(per_ace.yfilter)) leaf_name_data.push_back(per_ace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Qos::MatchStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Qos::MatchStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Qos::MatchStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-filter")
    {
        per_filter = value;
        per_filter.value_namespace = name_space;
        per_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-ace")
    {
        per_ace = value;
        per_ace.value_namespace = name_space;
        per_ace.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Qos::MatchStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-filter")
    {
        per_filter.yfilter = yfilter;
    }
    if(value_path == "per-ace")
    {
        per_ace.yfilter = yfilter;
    }
}

bool Native::Platform::Qos::MatchStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-filter" || name == "per-ace")
        return true;
    return false;
}

Native::Platform::Reload::Reload()
    :
    immediate{YType::empty, "immediate"}
{

    yang_name = "reload"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Reload::~Reload()
{
}

bool Native::Platform::Reload::has_data() const
{
    if (is_presence_container) return true;
    return immediate.is_set;
}

bool Native::Platform::Reload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate.yfilter);
}

std::string Native::Platform::Reload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate.is_set || is_set(immediate.yfilter)) leaf_name_data.push_back(immediate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate")
    {
        immediate = value;
        immediate.value_namespace = name_space;
        immediate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate")
    {
        immediate.yfilter = yfilter;
    }
}

bool Native::Platform::Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "immediate")
        return true;
    return false;
}

Native::Platform::Urpf::Urpf()
    :
    loose(std::make_shared<Native::Platform::Urpf::Loose>())
{
    loose->parent = this;

    yang_name = "urpf"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Urpf::~Urpf()
{
}

bool Native::Platform::Urpf::has_data() const
{
    if (is_presence_container) return true;
    return (loose !=  nullptr && loose->has_data());
}

bool Native::Platform::Urpf::has_operation() const
{
    return is_set(yfilter)
	|| (loose !=  nullptr && loose->has_operation());
}

std::string Native::Platform::Urpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:urpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Urpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Urpf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(loose != nullptr)
    {
        _children["loose"] = loose;
    }

    return _children;
}

void Native::Platform::Urpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Loose()
    :
    counter(std::make_shared<Native::Platform::Urpf::Loose::Counter>())
{
    counter->parent = this;

    yang_name = "loose"; yang_parent_name = "urpf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Urpf::Loose::~Loose()
{
}

bool Native::Platform::Urpf::Loose::has_data() const
{
    if (is_presence_container) return true;
    return (counter !=  nullptr && counter->has_data());
}

bool Native::Platform::Urpf::Loose::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation());
}

std::string Native::Platform::Urpf::Loose::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Urpf::Loose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Urpf::Loose::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    return _children;
}

void Native::Platform::Urpf::Loose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Counter()
    :
    ipv4(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4>())
    , ipv6(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "counter"; yang_parent_name = "loose"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Urpf::Loose::Counter::~Counter()
{
}

bool Native::Platform::Urpf::Loose::Counter::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Urpf::Loose::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Urpf::Loose::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Platform::Urpf::Loose::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Ipv4()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4::Supress>())
{
    supress->parent = this;

    yang_name = "ipv4"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Urpf::Loose::Counter::Ipv4::~Ipv4()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(supress != nullptr)
    {
        _children["supress"] = supress;
    }

    return _children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supress")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{

    yang_name = "supress"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_data() const
{
    if (is_presence_container) return true;
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asymmetric_only.yfilter);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.yfilter)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
        asymmetric_only.value_namespace = name_space;
        asymmetric_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only.yfilter = yfilter;
    }
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asymmetric_only")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Ipv6()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6::Supress>())
{
    supress->parent = this;

    yang_name = "ipv6"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Urpf::Loose::Counter::Ipv6::~Ipv6()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(supress != nullptr)
    {
        _children["supress"] = supress;
    }

    return _children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supress")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{

    yang_name = "supress"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_data() const
{
    if (is_presence_container) return true;
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asymmetric_only.yfilter);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.yfilter)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
        asymmetric_only.value_namespace = name_space;
        asymmetric_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only.yfilter = yfilter;
    }
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asymmetric_only")
        return true;
    return false;
}

Native::Platform::TcamThreshold::TcamThreshold()
    :
    alarm_frequency{YType::uint32, "alarm-frequency"}
{

    yang_name = "tcam-threshold"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::TcamThreshold::~TcamThreshold()
{
}

bool Native::Platform::TcamThreshold::has_data() const
{
    if (is_presence_container) return true;
    return alarm_frequency.is_set;
}

bool Native::Platform::TcamThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_frequency.yfilter);
}

std::string Native::Platform::TcamThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::TcamThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:tcam-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::TcamThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_frequency.is_set || is_set(alarm_frequency.yfilter)) leaf_name_data.push_back(alarm_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::TcamThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::TcamThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::TcamThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-frequency")
    {
        alarm_frequency = value;
        alarm_frequency.value_namespace = name_space;
        alarm_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::TcamThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-frequency")
    {
        alarm_frequency.yfilter = yfilter;
    }
}

bool Native::Platform::TcamThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-frequency")
        return true;
    return false;
}

Native::Platform::Trace::Trace()
    :
    runtime(this, {"slot", "bay"})
{

    yang_name = "trace"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Trace::~Trace()
{
}

bool Native::Platform::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<runtime.len(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Trace::has_operation() const
{
    for (std::size_t index=0; index<runtime.len(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        auto ent_ = std::make_shared<Native::Platform::Trace::Runtime>();
        ent_->parent = this;
        runtime.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : runtime.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Platform::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime")
        return true;
    return false;
}

Native::Platform::Trace::Runtime::Runtime()
    :
    slot{YType::uint8, "slot"},
    bay{YType::uint8, "bay"},
    process{YType::enumeration, "process"},
    module{YType::enumeration, "module"},
    level{YType::enumeration, "level"}
{

    yang_name = "runtime"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Platform::Trace::Runtime::~Runtime()
{
}

bool Native::Platform::Trace::Runtime::has_data() const
{
    if (is_presence_container) return true;
    return slot.is_set
	|| bay.is_set
	|| process.is_set
	|| module.is_set
	|| level.is_set;
}

bool Native::Platform::Trace::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(bay.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Platform::Trace::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Trace::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    ADD_KEY_TOKEN(slot, "slot");
    ADD_KEY_TOKEN(bay, "bay");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Trace::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (bay.is_set || is_set(bay.yfilter)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Platform::Trace::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Platform::Trace::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Platform::Trace::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bay")
    {
        bay = value;
        bay.value_namespace = name_space;
        bay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Trace::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "bay")
    {
        bay.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Platform::Trace::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot" || name == "bay" || name == "process" || name == "module" || name == "level")
        return true;
    return false;
}

Native::Enable::Enable()
    :
    last_resort{YType::enumeration, "last-resort"},
    use_tacacs{YType::empty, "use-tacacs"}
        ,
    password(std::make_shared<Native::Enable::Password>())
    , secret(std::make_shared<Native::Enable::Secret>())
{
    password->parent = this;
    secret->parent = this;

    yang_name = "enable"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Enable::~Enable()
{
}

bool Native::Enable::has_data() const
{
    if (is_presence_container) return true;
    return last_resort.is_set
	|| use_tacacs.is_set
	|| (password !=  nullptr && password->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_resort.yfilter)
	|| ydk::is_set(use_tacacs.yfilter)
	|| (password !=  nullptr && password->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_resort.is_set || is_set(last_resort.yfilter)) leaf_name_data.push_back(last_resort.get_name_leafdata());
    if (use_tacacs.is_set || is_set(use_tacacs.yfilter)) leaf_name_data.push_back(use_tacacs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(secret != nullptr)
    {
        _children["secret"] = secret;
    }

    return _children;
}

void Native::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-resort")
    {
        last_resort = value;
        last_resort.value_namespace = name_space;
        last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-tacacs")
    {
        use_tacacs = value;
        use_tacacs.value_namespace = name_space;
        use_tacacs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-resort")
    {
        last_resort.yfilter = yfilter;
    }
    if(value_path == "use-tacacs")
    {
        use_tacacs.yfilter = yfilter;
    }
}

bool Native::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "secret" || name == "last-resort" || name == "use-tacacs")
        return true;
    return false;
}

Native::Enable::Password::Password()
    :
    level{YType::uint8, "level"},
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Enable::Password::~Password()
{
}

bool Native::Enable::Password::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set
	|| secret.is_set;
}

bool Native::Enable::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Enable::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Enable::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Enable::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Enable::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Enable::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Enable::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Enable::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type" || name == "secret")
        return true;
    return false;
}

Native::Enable::Secret::Secret()
    :
    level{YType::uint8, "level"},
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "secret"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Enable::Secret::~Secret()
{
}

bool Native::Enable::Secret::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set
	|| secret.is_set;
}

bool Native::Enable::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Enable::Secret::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Enable::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Enable::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Enable::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Enable::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Enable::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Enable::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type" || name == "secret")
        return true;
    return false;
}

Native::Password::Password()
    :
    encryption(std::make_shared<Native::Password::Encryption>())
{
    encryption->parent = this;

    yang_name = "password"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Password::~Password()
{
}

bool Native::Password::has_data() const
{
    if (is_presence_container) return true;
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Password::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encryption != nullptr)
    {
        _children["encryption"] = encryption;
    }

    return _children;
}

void Native::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Password::Encryption::Encryption()
    :
    aes{YType::empty, "aes"}
{

    yang_name = "encryption"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Password::Encryption::~Encryption()
{
}

bool Native::Password::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return aes.is_set;
}

bool Native::Password::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes.yfilter);
}

std::string Native::Password::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Password::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Password::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes.is_set || is_set(aes.yfilter)) leaf_name_data.push_back(aes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Password::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Password::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Password::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes")
    {
        aes = value;
        aes.value_namespace = name_space;
        aes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Password::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes")
    {
        aes.yfilter = yfilter;
    }
}

bool Native::Password::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes")
        return true;
    return false;
}

Native::Eap::Eap()
    :
    profile(this, {"name"})
{

    yang_name = "eap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Eap::~Eap()
{
}

bool Native::Eap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Eap::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Eap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<Native::Eap::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Eap::Profile::Profile()
    :
    name{YType::str, "name"},
    pki_trustpoint{YType::str, "pki-trustpoint"}
        ,
    method(std::make_shared<Native::Eap::Profile::Method>())
{
    method->parent = this;

    yang_name = "profile"; yang_parent_name = "eap"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Eap::Profile::~Profile()
{
}

bool Native::Eap::Profile::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| pki_trustpoint.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Eap::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pki_trustpoint.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Eap::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/eap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Eap::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Eap::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Eap::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Eap::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method != nullptr)
    {
        _children["method"] = method;
    }

    return _children;
}

void Native::Eap::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
        pki_trustpoint.value_namespace = name_space;
        pki_trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Eap::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint.yfilter = yfilter;
    }
}

bool Native::Eap::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "name" || name == "pki-trustpoint")
        return true;
    return false;
}

Native::Eap::Profile::Method::Method()
    :
    fast{YType::empty, "fast"},
    gtc{YType::empty, "gtc"},
    leap{YType::empty, "leap"},
    mschapv2{YType::empty, "mschapv2"},
    peap{YType::empty, "peap"},
    md5{YType::empty, "md5"},
    tls{YType::empty, "tls"}
{

    yang_name = "method"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Eap::Profile::Method::~Method()
{
}

bool Native::Eap::Profile::Method::has_data() const
{
    if (is_presence_container) return true;
    return fast.is_set
	|| gtc.is_set
	|| leap.is_set
	|| mschapv2.is_set
	|| peap.is_set
	|| md5.is_set
	|| tls.is_set;
}

bool Native::Eap::Profile::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast.yfilter)
	|| ydk::is_set(gtc.yfilter)
	|| ydk::is_set(leap.yfilter)
	|| ydk::is_set(mschapv2.yfilter)
	|| ydk::is_set(peap.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(tls.yfilter);
}

std::string Native::Eap::Profile::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Eap::Profile::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast.is_set || is_set(fast.yfilter)) leaf_name_data.push_back(fast.get_name_leafdata());
    if (gtc.is_set || is_set(gtc.yfilter)) leaf_name_data.push_back(gtc.get_name_leafdata());
    if (leap.is_set || is_set(leap.yfilter)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (mschapv2.is_set || is_set(mschapv2.yfilter)) leaf_name_data.push_back(mschapv2.get_name_leafdata());
    if (peap.is_set || is_set(peap.yfilter)) leaf_name_data.push_back(peap.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (tls.is_set || is_set(tls.yfilter)) leaf_name_data.push_back(tls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Eap::Profile::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Eap::Profile::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Eap::Profile::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast")
    {
        fast = value;
        fast.value_namespace = name_space;
        fast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gtc")
    {
        gtc = value;
        gtc.value_namespace = name_space;
        gtc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap")
    {
        leap = value;
        leap.value_namespace = name_space;
        leap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mschapv2")
    {
        mschapv2 = value;
        mschapv2.value_namespace = name_space;
        mschapv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peap")
    {
        peap = value;
        peap.value_namespace = name_space;
        peap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls")
    {
        tls = value;
        tls.value_namespace = name_space;
        tls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Eap::Profile::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast")
    {
        fast.yfilter = yfilter;
    }
    if(value_path == "gtc")
    {
        gtc.yfilter = yfilter;
    }
    if(value_path == "leap")
    {
        leap.yfilter = yfilter;
    }
    if(value_path == "mschapv2")
    {
        mschapv2.yfilter = yfilter;
    }
    if(value_path == "peap")
    {
        peap.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "tls")
    {
        tls.yfilter = yfilter;
    }
}

bool Native::Eap::Profile::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast" || name == "gtc" || name == "leap" || name == "mschapv2" || name == "peap" || name == "md5" || name == "tls")
        return true;
    return false;
}

Native::Archive::Archive()
    :
    path{YType::str, "path"},
    maximum{YType::uint8, "maximum"},
    write_memory{YType::empty, "write-memory"},
    time_period{YType::uint32, "time-period"}
        ,
    log(std::make_shared<Native::Archive::Log>())
{
    log->parent = this;

    yang_name = "archive"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Archive::~Archive()
{
}

bool Native::Archive::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| maximum.is_set
	|| write_memory.is_set
	|| time_period.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Archive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(write_memory.yfilter)
	|| ydk::is_set(time_period.yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Archive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (write_memory.is_set || is_set(write_memory.yfilter)) leaf_name_data.push_back(write_memory.get_name_leafdata());
    if (time_period.is_set || is_set(time_period.yfilter)) leaf_name_data.push_back(time_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Archive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-memory")
    {
        write_memory = value;
        write_memory.value_namespace = name_space;
        write_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-period")
    {
        time_period = value;
        time_period.value_namespace = name_space;
        time_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "write-memory")
    {
        write_memory.yfilter = yfilter;
    }
    if(value_path == "time-period")
    {
        time_period.yfilter = yfilter;
    }
}

bool Native::Archive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log" || name == "path" || name == "maximum" || name == "write-memory" || name == "time-period")
        return true;
    return false;
}

Native::Archive::Log::Log()
    :
    config(std::make_shared<Native::Archive::Log::Config>())
{
    config->parent = this;

    yang_name = "log"; yang_parent_name = "archive"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Archive::Log::~Log()
{
}

bool Native::Archive::Log::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data());
}

bool Native::Archive::Log::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Archive::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Archive::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Archive::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    return _children;
}

void Native::Archive::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Archive::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Archive::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Archive::Log::Config::Config()
    :
    hidekeys{YType::empty, "hidekeys"}
        ,
    logging(std::make_shared<Native::Archive::Log::Config::Logging>())
    , notify(std::make_shared<Native::Archive::Log::Config::Notify>())
{
    logging->parent = this;
    notify->parent = this;

    yang_name = "config"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Archive::Log::Config::~Config()
{
}

bool Native::Archive::Log::Config::has_data() const
{
    if (is_presence_container) return true;
    return hidekeys.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::Archive::Log::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hidekeys.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::Archive::Log::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hidekeys.is_set || is_set(hidekeys.yfilter)) leaf_name_data.push_back(hidekeys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Archive::Log::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Archive::Log::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(notify != nullptr)
    {
        _children["notify"] = notify;
    }

    return _children;
}

void Native::Archive::Log::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hidekeys")
    {
        hidekeys = value;
        hidekeys.value_namespace = name_space;
        hidekeys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hidekeys")
    {
        hidekeys.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "notify" || name == "hidekeys")
        return true;
    return false;
}

Native::Archive::Log::Config::Logging::Logging()
    :
    enable{YType::empty, "enable"},
    size{YType::uint16, "size"}
        ,
    persistent(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Archive::Log::Config::Logging::~Logging()
{
}

bool Native::Archive::Log::Config::Logging::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| size.is_set
	|| (persistent !=  nullptr && persistent->has_data());
}

bool Native::Archive::Log::Config::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(size.yfilter)
	|| (persistent !=  nullptr && persistent->has_operation());
}

std::string Native::Archive::Log::Config::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Archive::Log::Config::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Archive::Log::Config::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(persistent != nullptr)
    {
        _children["persistent"] = persistent;
    }

    return _children;
}

void Native::Archive::Log::Config::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persistent" || name == "enable" || name == "size")
        return true;
    return false;
}

Native::Archive::Log::Config::Logging::Persistent::Persistent()
    :
    auto_{YType::empty, "auto"},
    reload{YType::empty, "reload"}
{

    yang_name = "persistent"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Archive::Log::Config::Logging::Persistent::~Persistent()
{
}

bool Native::Archive::Log::Config::Logging::Persistent::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set
	|| reload.is_set;
}

bool Native::Archive::Log::Config::Logging::Persistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Archive::Log::Config::Logging::Persistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Logging::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Logging::Persistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Archive::Log::Config::Logging::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Archive::Log::Config::Logging::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Archive::Log::Config::Logging::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::Logging::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::Logging::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "reload")
        return true;
    return false;
}

Native::Archive::Log::Config::Notify::Notify()
    :
    syslog(nullptr) // presence node
{

    yang_name = "notify"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Archive::Log::Config::Notify::~Notify()
{
}

bool Native::Archive::Log::Config::Notify::has_data() const
{
    if (is_presence_container) return true;
    return (syslog !=  nullptr && syslog->has_data());
}

bool Native::Archive::Log::Config::Notify::has_operation() const
{
    return is_set(yfilter)
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Archive::Log::Config::Notify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Notify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Archive::Log::Config::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Archive::Log::Config::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    return _children;
}

void Native::Archive::Log::Config::Notify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Archive::Log::Config::Notify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Archive::Log::Config::Notify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syslog")
        return true;
    return false;
}

Native::Archive::Log::Config::Notify::Syslog::Syslog()
    :
    contenttype{YType::enumeration, "contenttype"}
{

    yang_name = "syslog"; yang_parent_name = "notify"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Archive::Log::Config::Notify::Syslog::~Syslog()
{
}

bool Native::Archive::Log::Config::Notify::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return contenttype.is_set;
}

bool Native::Archive::Log::Config::Notify::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(contenttype.yfilter);
}

std::string Native::Archive::Log::Config::Notify::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/archive/log/config/notify/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Archive::Log::Config::Notify::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Archive::Log::Config::Notify::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contenttype.is_set || is_set(contenttype.yfilter)) leaf_name_data.push_back(contenttype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Archive::Log::Config::Notify::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Archive::Log::Config::Notify::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Archive::Log::Config::Notify::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "contenttype")
    {
        contenttype = value;
        contenttype.value_namespace = name_space;
        contenttype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Archive::Log::Config::Notify::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "contenttype")
    {
        contenttype.yfilter = yfilter;
    }
}

bool Native::Archive::Log::Config::Notify::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "contenttype")
        return true;
    return false;
}

Native::Username::Username()
    :
    name{YType::str, "name"},
    privilege{YType::uint8, "privilege"},
    view{YType::str, "view"},
    one_time{YType::empty, "one-time"}
        ,
    password(std::make_shared<Native::Username::Password>())
    , secret(std::make_shared<Native::Username::Secret>())
{
    password->parent = this;
    secret->parent = this;

    yang_name = "username"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Username::~Username()
{
}

bool Native::Username::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| privilege.is_set
	|| view.is_set
	|| one_time.is_set
	|| (password !=  nullptr && password->has_data())
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(privilege.yfilter)
	|| ydk::is_set(view.yfilter)
	|| ydk::is_set(one_time.yfilter)
	|| (password !=  nullptr && password->has_operation())
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());
    if (view.is_set || is_set(view.yfilter)) leaf_name_data.push_back(view.get_name_leafdata());
    if (one_time.is_set || is_set(one_time.yfilter)) leaf_name_data.push_back(one_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(secret != nullptr)
    {
        _children["secret"] = secret;
    }

    return _children;
}

void Native::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view")
    {
        view = value;
        view.value_namespace = name_space;
        view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-time")
    {
        one_time = value;
        one_time.value_namespace = name_space;
        one_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
    if(value_path == "view")
    {
        view.yfilter = yfilter;
    }
    if(value_path == "one-time")
    {
        one_time.yfilter = yfilter;
    }
}

bool Native::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "secret" || name == "name" || name == "privilege" || name == "view" || name == "one-time")
        return true;
    return false;
}

Native::Username::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Username::Password::~Password()
{
}

bool Native::Username::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| password.is_set;
}

bool Native::Username::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Username::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Username::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Username::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Username::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Username::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Username::Secret::Secret()
    :
    encryption{YType::enumeration, "encryption"},
    secret{YType::str, "secret"}
{

    yang_name = "secret"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Username::Secret::~Secret()
{
}

bool Native::Username::Secret::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| secret.is_set;
}

bool Native::Username::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Username::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Username::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Username::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Username::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Username::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Username::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Username::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "secret")
        return true;
    return false;
}

Native::Card::Card()
    :
    type{YType::enumeration, "Cisco-IOS-XE-card:type"},
    slot{YType::uint32, "Cisco-IOS-XE-card:slot"},
    bay{YType::uint32, "Cisco-IOS-XE-card:bay"}
{

    yang_name = "card"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Card::~Card()
{
}

bool Native::Card::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| slot.is_set
	|| bay.is_set;
}

bool Native::Card::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(bay.yfilter);
}

std::string Native::Card::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (bay.is_set || is_set(bay.yfilter)) leaf_name_data.push_back(bay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-card:type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-card:slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-card:bay")
    {
        bay = value;
        bay.value_namespace = name_space;
        bay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "bay")
    {
        bay.yfilter = yfilter;
    }
}

bool Native::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "slot" || name == "bay")
        return true;
    return false;
}

Native::Controller::Controller()
    :
    controller_tx_ex_list(this, {"name", "number"})
    , cellular(this, {"id"})
    , sonet(this, {"name"})
    , sonet_acr(this, {"name"})
    , wanphy(this, {"name"})
    , vdsl(this, {"name"})
{

    yang_name = "controller"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Controller::~Controller()
{
}

bool Native::Controller::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller_tx_ex_list.len(); index++)
    {
        if(controller_tx_ex_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cellular.len(); index++)
    {
        if(cellular[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet.len(); index++)
    {
        if(sonet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.len(); index++)
    {
        if(sonet_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wanphy.len(); index++)
    {
        if(wanphy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vdsl.len(); index++)
    {
        if(vdsl[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::has_operation() const
{
    for (std::size_t index=0; index<controller_tx_ex_list.len(); index++)
    {
        if(controller_tx_ex_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cellular.len(); index++)
    {
        if(cellular[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet.len(); index++)
    {
        if(sonet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.len(); index++)
    {
        if(sonet_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wanphy.len(); index++)
    {
        if(wanphy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vdsl.len(); index++)
    {
        if(vdsl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-controller:controller-tx-ex-list")
    {
        auto ent_ = std::make_shared<Native::Controller::ControllerTxExList>();
        ent_->parent = this;
        controller_tx_ex_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:Cellular")
    {
        auto ent_ = std::make_shared<Native::Controller::Cellular>();
        ent_->parent = this;
        cellular.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:SONET")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET>();
        ent_->parent = this;
        sonet.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:SONET-ACR")
    {
        auto ent_ = std::make_shared<Native::Controller::SONETACR>();
        ent_->parent = this;
        sonet_acr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:wanphy")
    {
        auto ent_ = std::make_shared<Native::Controller::Wanphy>();
        ent_->parent = this;
        wanphy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-controller:vdsl")
    {
        auto ent_ = std::make_shared<Native::Controller::Vdsl>();
        ent_->parent = this;
        vdsl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controller_tx_ex_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cellular.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sonet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sonet_acr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : wanphy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vdsl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-tx-ex-list" || name == "Cellular" || name == "SONET" || name == "SONET-ACR" || name == "wanphy" || name == "vdsl")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::ControllerTxExList()
    :
    name{YType::enumeration, "name"},
    number{YType::str, "number"},
    atm{YType::empty, "atm"},
    framing{YType::str, "framing"},
    description{YType::str, "description"},
    linecode{YType::enumeration, "linecode"}
        ,
    clock_(std::make_shared<Native::Controller::ControllerTxExList::Clock>())
    , cablelength(std::make_shared<Native::Controller::ControllerTxExList::Cablelength>())
    , channel_group(this, {"number"})
{
    clock_->parent = this;
    cablelength->parent = this;

    yang_name = "controller-tx-ex-list"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Controller::ControllerTxExList::~ControllerTxExList()
{
}

bool Native::Controller::ControllerTxExList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<channel_group.len(); index++)
    {
        if(channel_group[index]->has_data())
            return true;
    }
    return name.is_set
	|| number.is_set
	|| atm.is_set
	|| framing.is_set
	|| description.is_set
	|| linecode.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (cablelength !=  nullptr && cablelength->has_data());
}

bool Native::Controller::ControllerTxExList::has_operation() const
{
    for (std::size_t index=0; index<channel_group.len(); index++)
    {
        if(channel_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(linecode.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (cablelength !=  nullptr && cablelength->has_operation());
}

std::string Native::Controller::ControllerTxExList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::ControllerTxExList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:controller-tx-ex-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (linecode.is_set || is_set(linecode.yfilter)) leaf_name_data.push_back(linecode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::ControllerTxExList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::ControllerTxExList::Clock>();
        }
        return clock_;
    }

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
        auto ent_ = std::make_shared<Native::Controller::ControllerTxExList::ChannelGroup>();
        ent_->parent = this;
        channel_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::ControllerTxExList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_ != nullptr)
    {
        _children["clock"] = clock_;
    }

    if(cablelength != nullptr)
    {
        _children["cablelength"] = cablelength;
    }

    count_ = 0;
    for (auto ent_ : channel_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::ControllerTxExList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linecode")
    {
        linecode = value;
        linecode.value_namespace = name_space;
        linecode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "linecode")
    {
        linecode.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "cablelength" || name == "channel-group" || name == "name" || name == "number" || name == "atm" || name == "framing" || name == "description" || name == "linecode")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock::Clock()
    :
    source(std::make_shared<Native::Controller::ControllerTxExList::Clock::Source>())
{
    source->parent = this;

    yang_name = "clock"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::ControllerTxExList::Clock::~Clock()
{
}

bool Native::Controller::ControllerTxExList::Clock::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Controller::ControllerTxExList::Clock::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::ControllerTxExList::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::ControllerTxExList::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Controller::ControllerTxExList::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::ControllerTxExList::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::ControllerTxExList::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock::Source::Source()
    :
    internal{YType::empty, "internal"},
    loop_timed{YType::empty, "loop-timed"}
        ,
    line(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::ControllerTxExList::Clock::Source::~Source()
{
}

bool Native::Controller::ControllerTxExList::Clock::Source::has_data() const
{
    if (is_presence_container) return true;
    return internal.is_set
	|| loop_timed.is_set
	|| (line !=  nullptr && line->has_data());
}

bool Native::Controller::ControllerTxExList::Clock::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(loop_timed.yfilter)
	|| (line !=  nullptr && line->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (loop_timed.is_set || is_set(loop_timed.yfilter)) leaf_name_data.push_back(loop_timed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::ControllerTxExList::Clock::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::ControllerTxExList::Clock::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(line != nullptr)
    {
        _children["line"] = line;
    }

    return _children;
}

void Native::Controller::ControllerTxExList::Clock::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-timed")
    {
        loop_timed = value;
        loop_timed.value_namespace = name_space;
        loop_timed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Clock::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "loop-timed")
    {
        loop_timed.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Clock::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line" || name == "internal" || name == "loop-timed")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock::Source::Line::Line()
    :
    line_mode{YType::enumeration, "line-mode"}
{

    yang_name = "line"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Controller::ControllerTxExList::Clock::Source::Line::~Line()
{
}

bool Native::Controller::ControllerTxExList::Clock::Source::Line::has_data() const
{
    if (is_presence_container) return true;
    return line_mode.is_set;
}

bool Native::Controller::ControllerTxExList::Clock::Source::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_mode.yfilter);
}

std::string Native::Controller::ControllerTxExList::Clock::Source::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock::Source::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_mode.is_set || is_set(line_mode.yfilter)) leaf_name_data.push_back(line_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::ControllerTxExList::Clock::Source::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::ControllerTxExList::Clock::Source::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::ControllerTxExList::Clock::Source::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-mode")
    {
        line_mode = value;
        line_mode.value_namespace = name_space;
        line_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Clock::Source::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-mode")
    {
        line_mode.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Clock::Source::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-mode")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Cablelength::Cablelength()
    :
    long_{YType::str, "long"},
    short_{YType::str, "short"}
{

    yang_name = "cablelength"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::ControllerTxExList::Cablelength::~Cablelength()
{
}

bool Native::Controller::ControllerTxExList::Cablelength::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| short_.is_set;
}

bool Native::Controller::ControllerTxExList::Cablelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::Controller::ControllerTxExList::Cablelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cablelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Cablelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::ControllerTxExList::Cablelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::ControllerTxExList::Cablelength::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::ControllerTxExList::Cablelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Cablelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Cablelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::ChannelGroup::ChannelGroup()
    :
    number{YType::uint8, "number"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "channel-group"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::ControllerTxExList::ChannelGroup::~ChannelGroup()
{
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::ControllerTxExList::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::ChannelGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    auto timeslots_name_datas = timeslots.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timeslots_name_datas.begin(), timeslots_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::ControllerTxExList::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::ControllerTxExList::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::ControllerTxExList::ChannelGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots.append(value);
    }
}

void Native::Controller::ControllerTxExList::ChannelGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::Cellular::Cellular()
    :
    id{YType::str, "id"}
        ,
    lte(std::make_shared<Native::Controller::Cellular::Lte>())
{
    lte->parent = this;

    yang_name = "Cellular"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Controller::Cellular::~Cellular()
{
}

bool Native::Controller::Cellular::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lte !=  nullptr && lte->has_data());
}

bool Native::Controller::Cellular::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lte !=  nullptr && lte->has_operation());
}

std::string Native::Controller::Cellular::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::Cellular::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:Cellular";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lte != nullptr)
    {
        _children["lte"] = lte;
    }

    return _children;
}

void Native::Controller::Cellular::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lte" || name == "id")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Lte()
    :
    failovertimer{YType::uint8, "failovertimer"}
        ,
    sim(std::make_shared<Native::Controller::Cellular::Lte::Sim>())
    , sms(std::make_shared<Native::Controller::Cellular::Lte::Sms>())
    , gps(std::make_shared<Native::Controller::Cellular::Lte::Gps>())
    , firmware(nullptr) // presence node
    , radio(std::make_shared<Native::Controller::Cellular::Lte::Radio>())
    , modem(std::make_shared<Native::Controller::Cellular::Lte::Modem>())
    , event(std::make_shared<Native::Controller::Cellular::Lte::Event>())
    , dyinggasp(std::make_shared<Native::Controller::Cellular::Lte::Dyinggasp>())
{
    sim->parent = this;
    sms->parent = this;
    gps->parent = this;
    radio->parent = this;
    modem->parent = this;
    event->parent = this;
    dyinggasp->parent = this;

    yang_name = "lte"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::~Lte()
{
}

bool Native::Controller::Cellular::Lte::has_data() const
{
    if (is_presence_container) return true;
    return failovertimer.is_set
	|| (sim !=  nullptr && sim->has_data())
	|| (sms !=  nullptr && sms->has_data())
	|| (gps !=  nullptr && gps->has_data())
	|| (firmware !=  nullptr && firmware->has_data())
	|| (radio !=  nullptr && radio->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (dyinggasp !=  nullptr && dyinggasp->has_data());
}

bool Native::Controller::Cellular::Lte::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failovertimer.yfilter)
	|| (sim !=  nullptr && sim->has_operation())
	|| (sms !=  nullptr && sms->has_operation())
	|| (gps !=  nullptr && gps->has_operation())
	|| (firmware !=  nullptr && firmware->has_operation())
	|| (radio !=  nullptr && radio->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (dyinggasp !=  nullptr && dyinggasp->has_operation());
}

std::string Native::Controller::Cellular::Lte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failovertimer.is_set || is_set(failovertimer.yfilter)) leaf_name_data.push_back(failovertimer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sim")
    {
        if(sim == nullptr)
        {
            sim = std::make_shared<Native::Controller::Cellular::Lte::Sim>();
        }
        return sim;
    }

    if(child_yang_name == "sms")
    {
        if(sms == nullptr)
        {
            sms = std::make_shared<Native::Controller::Cellular::Lte::Sms>();
        }
        return sms;
    }

    if(child_yang_name == "gps")
    {
        if(gps == nullptr)
        {
            gps = std::make_shared<Native::Controller::Cellular::Lte::Gps>();
        }
        return gps;
    }

    if(child_yang_name == "firmware")
    {
        if(firmware == nullptr)
        {
            firmware = std::make_shared<Native::Controller::Cellular::Lte::Firmware>();
        }
        return firmware;
    }

    if(child_yang_name == "radio")
    {
        if(radio == nullptr)
        {
            radio = std::make_shared<Native::Controller::Cellular::Lte::Radio>();
        }
        return radio;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Controller::Cellular::Lte::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Controller::Cellular::Lte::Event>();
        }
        return event;
    }

    if(child_yang_name == "dyinggasp")
    {
        if(dyinggasp == nullptr)
        {
            dyinggasp = std::make_shared<Native::Controller::Cellular::Lte::Dyinggasp>();
        }
        return dyinggasp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sim != nullptr)
    {
        _children["sim"] = sim;
    }

    if(sms != nullptr)
    {
        _children["sms"] = sms;
    }

    if(gps != nullptr)
    {
        _children["gps"] = gps;
    }

    if(firmware != nullptr)
    {
        _children["firmware"] = firmware;
    }

    if(radio != nullptr)
    {
        _children["radio"] = radio;
    }

    if(modem != nullptr)
    {
        _children["modem"] = modem;
    }

    if(event != nullptr)
    {
        _children["event"] = event;
    }

    if(dyinggasp != nullptr)
    {
        _children["dyinggasp"] = dyinggasp;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failovertimer")
    {
        failovertimer = value;
        failovertimer.value_namespace = name_space;
        failovertimer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failovertimer")
    {
        failovertimer.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sim" || name == "sms" || name == "gps" || name == "firmware" || name == "radio" || name == "modem" || name == "event" || name == "dyinggasp" || name == "failovertimer")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Sim::Sim()
    :
    max_retry{YType::uint16, "max-retry"}
        ,
    authenticate(std::make_shared<Native::Controller::Cellular::Lte::Sim::Authenticate>())
    , data_profile_list(this, {"slot"})
    , primary(std::make_shared<Native::Controller::Cellular::Lte::Sim::Primary>())
{
    authenticate->parent = this;
    primary->parent = this;

    yang_name = "sim"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Sim::~Sim()
{
}

bool Native::Controller::Cellular::Lte::Sim::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_profile_list.len(); index++)
    {
        if(data_profile_list[index]->has_data())
            return true;
    }
    return max_retry.is_set
	|| (authenticate !=  nullptr && authenticate->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Controller::Cellular::Lte::Sim::has_operation() const
{
    for (std::size_t index=0; index<data_profile_list.len(); index++)
    {
        if(data_profile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(max_retry.yfilter)
	|| (authenticate !=  nullptr && authenticate->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Controller::Cellular::Lte::Sim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Sim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_retry.is_set || is_set(max_retry.yfilter)) leaf_name_data.push_back(max_retry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Sim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<Native::Controller::Cellular::Lte::Sim::Authenticate>();
        }
        return authenticate;
    }

    if(child_yang_name == "data-profile-list")
    {
        auto ent_ = std::make_shared<Native::Controller::Cellular::Lte::Sim::DataProfileList>();
        ent_->parent = this;
        data_profile_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Controller::Cellular::Lte::Sim::Primary>();
        }
        return primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Sim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authenticate != nullptr)
    {
        _children["authenticate"] = authenticate;
    }

    count_ = 0;
    for (auto ent_ : data_profile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Sim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-retry")
    {
        max_retry = value;
        max_retry.value_namespace = name_space;
        max_retry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Sim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-retry")
    {
        max_retry.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Sim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticate" || name == "data-profile-list" || name == "primary" || name == "max-retry")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Sim::Authenticate::Authenticate()
    :
    pin_type{YType::enumeration, "pin-type"},
    pin{YType::str, "pin"},
    slot{YType::uint8, "slot"}
{

    yang_name = "authenticate"; yang_parent_name = "sim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Sim::Authenticate::~Authenticate()
{
}

bool Native::Controller::Cellular::Lte::Sim::Authenticate::has_data() const
{
    if (is_presence_container) return true;
    return pin_type.is_set
	|| pin.is_set
	|| slot.is_set;
}

bool Native::Controller::Cellular::Lte::Sim::Authenticate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pin_type.yfilter)
	|| ydk::is_set(pin.yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Native::Controller::Cellular::Lte::Sim::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Sim::Authenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pin_type.is_set || is_set(pin_type.yfilter)) leaf_name_data.push_back(pin_type.get_name_leafdata());
    if (pin.is_set || is_set(pin.yfilter)) leaf_name_data.push_back(pin.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Sim::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Sim::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Sim::Authenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pin-type")
    {
        pin_type = value;
        pin_type.value_namespace = name_space;
        pin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pin")
    {
        pin = value;
        pin.value_namespace = name_space;
        pin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Sim::Authenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pin-type")
    {
        pin_type.yfilter = yfilter;
    }
    if(value_path == "pin")
    {
        pin.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Sim::Authenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pin-type" || name == "pin" || name == "slot")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Sim::DataProfileList::DataProfileList()
    :
    slot{YType::uint8, "slot"},
    data_profile{YType::uint8, "data-profile"},
    attach_profile{YType::uint8, "attach-profile"}
{

    yang_name = "data-profile-list"; yang_parent_name = "sim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Sim::DataProfileList::~DataProfileList()
{
}

bool Native::Controller::Cellular::Lte::Sim::DataProfileList::has_data() const
{
    if (is_presence_container) return true;
    return slot.is_set
	|| data_profile.is_set
	|| attach_profile.is_set;
}

bool Native::Controller::Cellular::Lte::Sim::DataProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(data_profile.yfilter)
	|| ydk::is_set(attach_profile.yfilter);
}

std::string Native::Controller::Cellular::Lte::Sim::DataProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-profile-list";
    ADD_KEY_TOKEN(slot, "slot");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Sim::DataProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (data_profile.is_set || is_set(data_profile.yfilter)) leaf_name_data.push_back(data_profile.get_name_leafdata());
    if (attach_profile.is_set || is_set(attach_profile.yfilter)) leaf_name_data.push_back(attach_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Sim::DataProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Sim::DataProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Sim::DataProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-profile")
    {
        data_profile = value;
        data_profile.value_namespace = name_space;
        data_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach-profile")
    {
        attach_profile = value;
        attach_profile.value_namespace = name_space;
        attach_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Sim::DataProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "data-profile")
    {
        data_profile.yfilter = yfilter;
    }
    if(value_path == "attach-profile")
    {
        attach_profile.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Sim::DataProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot" || name == "data-profile" || name == "attach-profile")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Sim::Primary::Primary()
    :
    slot{YType::uint8, "slot"}
{

    yang_name = "primary"; yang_parent_name = "sim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Sim::Primary::~Primary()
{
}

bool Native::Controller::Cellular::Lte::Sim::Primary::has_data() const
{
    if (is_presence_container) return true;
    return slot.is_set;
}

bool Native::Controller::Cellular::Lte::Sim::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Native::Controller::Cellular::Lte::Sim::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Sim::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Sim::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Sim::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Sim::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Sim::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Sim::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Sms::Sms()
    :
    archive(std::make_shared<Native::Controller::Cellular::Lte::Sms::Archive>())
{
    archive->parent = this;

    yang_name = "sms"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Sms::~Sms()
{
}

bool Native::Controller::Cellular::Lte::Sms::has_data() const
{
    if (is_presence_container) return true;
    return (archive !=  nullptr && archive->has_data());
}

bool Native::Controller::Cellular::Lte::Sms::has_operation() const
{
    return is_set(yfilter)
	|| (archive !=  nullptr && archive->has_operation());
}

std::string Native::Controller::Cellular::Lte::Sms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Sms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Sms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "archive")
    {
        if(archive == nullptr)
        {
            archive = std::make_shared<Native::Controller::Cellular::Lte::Sms::Archive>();
        }
        return archive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Sms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(archive != nullptr)
    {
        _children["archive"] = archive;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Sms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Sms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Sms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "archive")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Sms::Archive::Archive()
    :
    path{YType::enumeration, "path"}
{

    yang_name = "archive"; yang_parent_name = "sms"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Sms::Archive::~Archive()
{
}

bool Native::Controller::Cellular::Lte::Sms::Archive::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set;
}

bool Native::Controller::Cellular::Lte::Sms::Archive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Native::Controller::Cellular::Lte::Sms::Archive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "archive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Sms::Archive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Sms::Archive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Sms::Archive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Sms::Archive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Sms::Archive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Sms::Archive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Gps::Gps()
    :
    enable{YType::empty, "enable"},
    mode{YType::enumeration, "mode"}
        ,
    nmea_conf(std::make_shared<Native::Controller::Cellular::Lte::Gps::NmeaConf>())
    , nmea(std::make_shared<Native::Controller::Cellular::Lte::Gps::Nmea>())
{
    nmea_conf->parent = this;
    nmea->parent = this;

    yang_name = "gps"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Gps::~Gps()
{
}

bool Native::Controller::Cellular::Lte::Gps::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| mode.is_set
	|| (nmea_conf !=  nullptr && nmea_conf->has_data())
	|| (nmea !=  nullptr && nmea->has_data());
}

bool Native::Controller::Cellular::Lte::Gps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (nmea_conf !=  nullptr && nmea_conf->has_operation())
	|| (nmea !=  nullptr && nmea->has_operation());
}

std::string Native::Controller::Cellular::Lte::Gps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Gps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Gps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nmea-conf")
    {
        if(nmea_conf == nullptr)
        {
            nmea_conf = std::make_shared<Native::Controller::Cellular::Lte::Gps::NmeaConf>();
        }
        return nmea_conf;
    }

    if(child_yang_name == "nmea")
    {
        if(nmea == nullptr)
        {
            nmea = std::make_shared<Native::Controller::Cellular::Lte::Gps::Nmea>();
        }
        return nmea;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Gps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nmea_conf != nullptr)
    {
        _children["nmea-conf"] = nmea_conf;
    }

    if(nmea != nullptr)
    {
        _children["nmea"] = nmea;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Gps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Gps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Gps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nmea-conf" || name == "nmea" || name == "enable" || name == "mode")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Gps::NmeaConf::NmeaConf()
    :
    nmea{YType::empty, "nmea"}
{

    yang_name = "nmea-conf"; yang_parent_name = "gps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Gps::NmeaConf::~NmeaConf()
{
}

bool Native::Controller::Cellular::Lte::Gps::NmeaConf::has_data() const
{
    if (is_presence_container) return true;
    return nmea.is_set;
}

bool Native::Controller::Cellular::Lte::Gps::NmeaConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nmea.yfilter);
}

std::string Native::Controller::Cellular::Lte::Gps::NmeaConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nmea-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Gps::NmeaConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmea.is_set || is_set(nmea.yfilter)) leaf_name_data.push_back(nmea.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Gps::NmeaConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Gps::NmeaConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Gps::NmeaConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmea")
    {
        nmea = value;
        nmea.value_namespace = name_space;
        nmea.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Gps::NmeaConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmea")
    {
        nmea.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Gps::NmeaConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nmea")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Gps::Nmea::Nmea()
    :
    ip(std::make_shared<Native::Controller::Cellular::Lte::Gps::Nmea::Ip>())
{
    ip->parent = this;

    yang_name = "nmea"; yang_parent_name = "gps"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Gps::Nmea::~Nmea()
{
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Controller::Cellular::Lte::Gps::Nmea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nmea";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Gps::Nmea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Gps::Nmea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Controller::Cellular::Lte::Gps::Nmea::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Gps::Nmea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Gps::Nmea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Gps::Nmea::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Ip()
    :
    udp(std::make_shared<Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp>())
{
    udp->parent = this;

    yang_name = "ip"; yang_parent_name = "nmea"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Gps::Nmea::Ip::~Ip()
{
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data());
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Controller::Cellular::Lte::Gps::Nmea::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Gps::Nmea::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Gps::Nmea::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Gps::Nmea::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Gps::Nmea::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Gps::Nmea::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::Udp()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "udp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::~Udp()
{
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| destination_port.is_set;
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Gps::Nmea::Ip::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "destination-port")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Firmware::Firmware()
    :
    auto_sim{YType::empty, "auto-sim"}
{

    yang_name = "firmware"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Controller::Cellular::Lte::Firmware::~Firmware()
{
}

bool Native::Controller::Cellular::Lte::Firmware::has_data() const
{
    if (is_presence_container) return true;
    return auto_sim.is_set;
}

bool Native::Controller::Cellular::Lte::Firmware::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_sim.yfilter);
}

std::string Native::Controller::Cellular::Lte::Firmware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firmware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Firmware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_sim.is_set || is_set(auto_sim.yfilter)) leaf_name_data.push_back(auto_sim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Firmware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Firmware::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Firmware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-sim")
    {
        auto_sim = value;
        auto_sim.value_namespace = name_space;
        auto_sim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Firmware::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-sim")
    {
        auto_sim.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Firmware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-sim")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Radio::Radio()
    :
    off{YType::empty, "off"}
{

    yang_name = "radio"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Radio::~Radio()
{
}

bool Native::Controller::Cellular::Lte::Radio::has_data() const
{
    if (is_presence_container) return true;
    return off.is_set;
}

bool Native::Controller::Cellular::Lte::Radio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(off.yfilter);
}

std::string Native::Controller::Cellular::Lte::Radio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Radio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (off.is_set || is_set(off.yfilter)) leaf_name_data.push_back(off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Radio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Radio::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Radio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "off")
    {
        off = value;
        off.value_namespace = name_space;
        off.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Radio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "off")
    {
        off.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Radio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "off")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::Modem()
    :
    dm_log(std::make_shared<Native::Controller::Cellular::Lte::Modem::DmLog>())
    , fota(std::make_shared<Native::Controller::Cellular::Lte::Modem::Fota>())
    , link_recovery(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>())
    , nas_log(std::make_shared<Native::Controller::Cellular::Lte::Modem::NasLog>())
{
    dm_log->parent = this;
    fota->parent = this;
    link_recovery->parent = this;
    nas_log->parent = this;

    yang_name = "modem"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::~Modem()
{
}

bool Native::Controller::Cellular::Lte::Modem::has_data() const
{
    if (is_presence_container) return true;
    return (dm_log !=  nullptr && dm_log->has_data())
	|| (fota !=  nullptr && fota->has_data())
	|| (link_recovery !=  nullptr && link_recovery->has_data())
	|| (nas_log !=  nullptr && nas_log->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::has_operation() const
{
    return is_set(yfilter)
	|| (dm_log !=  nullptr && dm_log->has_operation())
	|| (fota !=  nullptr && fota->has_operation())
	|| (link_recovery !=  nullptr && link_recovery->has_operation())
	|| (nas_log !=  nullptr && nas_log->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-log")
    {
        if(dm_log == nullptr)
        {
            dm_log = std::make_shared<Native::Controller::Cellular::Lte::Modem::DmLog>();
        }
        return dm_log;
    }

    if(child_yang_name == "fota")
    {
        if(fota == nullptr)
        {
            fota = std::make_shared<Native::Controller::Cellular::Lte::Modem::Fota>();
        }
        return fota;
    }

    if(child_yang_name == "link-recovery")
    {
        if(link_recovery == nullptr)
        {
            link_recovery = std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>();
        }
        return link_recovery;
    }

    if(child_yang_name == "nas-log")
    {
        if(nas_log == nullptr)
        {
            nas_log = std::make_shared<Native::Controller::Cellular::Lte::Modem::NasLog>();
        }
        return nas_log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dm_log != nullptr)
    {
        _children["dm-log"] = dm_log;
    }

    if(fota != nullptr)
    {
        _children["fota"] = fota;
    }

    if(link_recovery != nullptr)
    {
        _children["link-recovery"] = link_recovery;
    }

    if(nas_log != nullptr)
    {
        _children["nas-log"] = nas_log;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-log" || name == "fota" || name == "link-recovery" || name == "nas-log")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::DmLog::DmLog()
    :
    filter{YType::enumeration, "filter"},
    size{YType::uint16, "size"},
    filesize{YType::int8, "filesize"},
    rotation{YType::empty, "rotation"},
    enable{YType::empty, "enable"}
        ,
    output(std::make_shared<Native::Controller::Cellular::Lte::Modem::DmLog::Output>())
    , autostop(std::make_shared<Native::Controller::Cellular::Lte::Modem::DmLog::Autostop>())
{
    output->parent = this;
    autostop->parent = this;

    yang_name = "dm-log"; yang_parent_name = "modem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::DmLog::~DmLog()
{
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::has_data() const
{
    if (is_presence_container) return true;
    return filter.is_set
	|| size.is_set
	|| filesize.is_set
	|| rotation.is_set
	|| enable.is_set
	|| (output !=  nullptr && output->has_data())
	|| (autostop !=  nullptr && autostop->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(filesize.yfilter)
	|| ydk::is_set(rotation.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (autostop !=  nullptr && autostop->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::DmLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::DmLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (filesize.is_set || is_set(filesize.yfilter)) leaf_name_data.push_back(filesize.get_name_leafdata());
    if (rotation.is_set || is_set(rotation.yfilter)) leaf_name_data.push_back(rotation.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::DmLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Controller::Cellular::Lte::Modem::DmLog::Output>();
        }
        return output;
    }

    if(child_yang_name == "autostop")
    {
        if(autostop == nullptr)
        {
            autostop = std::make_shared<Native::Controller::Cellular::Lte::Modem::DmLog::Autostop>();
        }
        return autostop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::DmLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(autostop != nullptr)
    {
        _children["autostop"] = autostop;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Modem::DmLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filesize")
    {
        filesize = value;
        filesize.value_namespace = name_space;
        filesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotation")
    {
        rotation = value;
        rotation.value_namespace = name_space;
        rotation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::DmLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "filesize")
    {
        filesize.yfilter = yfilter;
    }
    if(value_path == "rotation")
    {
        rotation.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "autostop" || name == "filter" || name == "size" || name == "filesize" || name == "rotation" || name == "enable")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::DmLog::Output::Output()
    :
    local_uf{YType::empty, "local-uf"},
    path{YType::enumeration, "path"}
{

    yang_name = "output"; yang_parent_name = "dm-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::DmLog::Output::~Output()
{
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::Output::has_data() const
{
    if (is_presence_container) return true;
    return local_uf.is_set
	|| path.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_uf.yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Native::Controller::Cellular::Lte::Modem::DmLog::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::DmLog::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_uf.is_set || is_set(local_uf.yfilter)) leaf_name_data.push_back(local_uf.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::DmLog::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::DmLog::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Modem::DmLog::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-uf")
    {
        local_uf = value;
        local_uf.value_namespace = name_space;
        local_uf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::DmLog::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-uf")
    {
        local_uf.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-uf" || name == "path")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::Autostop()
    :
    link_down{YType::empty, "link-down"},
    timer{YType::int8, "timer"}
{

    yang_name = "autostop"; yang_parent_name = "dm-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::~Autostop()
{
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::has_data() const
{
    if (is_presence_container) return true;
    return link_down.is_set
	|| timer.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_down.yfilter)
	|| ydk::is_set(timer.yfilter);
}

std::string Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autostop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_down.is_set || is_set(link_down.yfilter)) leaf_name_data.push_back(link_down.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-down")
    {
        link_down = value;
        link_down.value_namespace = name_space;
        link_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-down")
    {
        link_down.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::DmLog::Autostop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-down" || name == "timer")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::Fota::Fota()
    :
    enable{YType::empty, "enable"},
    poll_timer{YType::uint32, "poll-timer"}
{

    yang_name = "fota"; yang_parent_name = "modem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::Fota::~Fota()
{
}

bool Native::Controller::Cellular::Lte::Modem::Fota::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| poll_timer.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::Fota::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(poll_timer.yfilter);
}

std::string Native::Controller::Cellular::Lte::Modem::Fota::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fota";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::Fota::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (poll_timer.is_set || is_set(poll_timer.yfilter)) leaf_name_data.push_back(poll_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::Fota::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::Fota::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Modem::Fota::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-timer")
    {
        poll_timer = value;
        poll_timer.value_namespace = name_space;
        poll_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::Fota::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "poll-timer")
    {
        poll_timer.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::Fota::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "poll-timer")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::LinkRecovery()
    :
    monitor_timer{YType::uint32, "monitor-timer"},
    wait_timer{YType::uint32, "wait-timer"},
    debounce_count{YType::uint32, "debounce-count"},
    disable{YType::empty, "disable"}
        ,
    rssi(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi>())
{
    rssi->parent = this;

    yang_name = "link-recovery"; yang_parent_name = "modem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::~LinkRecovery()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_data() const
{
    if (is_presence_container) return true;
    return monitor_timer.is_set
	|| wait_timer.is_set
	|| debounce_count.is_set
	|| disable.is_set
	|| (rssi !=  nullptr && rssi->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_timer.yfilter)
	|| ydk::is_set(wait_timer.yfilter)
	|| ydk::is_set(debounce_count.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (rssi !=  nullptr && rssi->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_timer.is_set || is_set(monitor_timer.yfilter)) leaf_name_data.push_back(monitor_timer.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.yfilter)) leaf_name_data.push_back(wait_timer.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rssi != nullptr)
    {
        _children["rssi"] = rssi;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-timer")
    {
        monitor_timer = value;
        monitor_timer.value_namespace = name_space;
        monitor_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
        wait_timer.value_namespace = name_space;
        wait_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-timer")
    {
        monitor_timer.yfilter = yfilter;
    }
    if(value_path == "wait-timer")
    {
        wait_timer.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssi" || name == "monitor-timer" || name == "wait-timer" || name == "debounce-count" || name == "disable")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::Rssi()
    :
    onset_threshold{YType::int32, "onset-threshold"}
{

    yang_name = "rssi"; yang_parent_name = "link-recovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::~Rssi()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_data() const
{
    if (is_presence_container) return true;
    return onset_threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(onset_threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onset_threshold.is_set || is_set(onset_threshold.yfilter)) leaf_name_data.push_back(onset_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "onset-threshold")
    {
        onset_threshold = value;
        onset_threshold.value_namespace = name_space;
        onset_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "onset-threshold")
    {
        onset_threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onset-threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::NasLog::NasLog()
    :
    size{YType::uint16, "size"},
    filesize{YType::int8, "filesize"},
    enable{YType::empty, "enable"}
        ,
    output(std::make_shared<Native::Controller::Cellular::Lte::Modem::NasLog::Output>())
{
    output->parent = this;

    yang_name = "nas-log"; yang_parent_name = "modem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::NasLog::~NasLog()
{
}

bool Native::Controller::Cellular::Lte::Modem::NasLog::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| filesize.is_set
	|| enable.is_set
	|| (output !=  nullptr && output->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::NasLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(filesize.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::NasLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::NasLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (filesize.is_set || is_set(filesize.yfilter)) leaf_name_data.push_back(filesize.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::NasLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Controller::Cellular::Lte::Modem::NasLog::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::NasLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Modem::NasLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filesize")
    {
        filesize = value;
        filesize.value_namespace = name_space;
        filesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::NasLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "filesize")
    {
        filesize.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::NasLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "size" || name == "filesize" || name == "enable")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::NasLog::Output::Output()
    :
    path{YType::enumeration, "path"}
{

    yang_name = "output"; yang_parent_name = "nas-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Modem::NasLog::Output::~Output()
{
}

bool Native::Controller::Cellular::Lte::Modem::NasLog::Output::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::NasLog::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Native::Controller::Cellular::Lte::Modem::NasLog::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::NasLog::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Modem::NasLog::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Modem::NasLog::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Modem::NasLog::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::NasLog::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::NasLog::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Event()
    :
    connection_status(std::make_shared<Native::Controller::Cellular::Lte::Event::ConnectionStatus>())
    , ecio(std::make_shared<Native::Controller::Cellular::Lte::Event::Ecio>())
    , modem_state(std::make_shared<Native::Controller::Cellular::Lte::Event::ModemState>())
    , network(std::make_shared<Native::Controller::Cellular::Lte::Event::Network>())
    , rsrp(std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrp>())
    , rsrq(std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrq>())
    , rssi(std::make_shared<Native::Controller::Cellular::Lte::Event::Rssi>())
    , service(std::make_shared<Native::Controller::Cellular::Lte::Event::Service>())
    , temperature(std::make_shared<Native::Controller::Cellular::Lte::Event::Temperature>())
{
    connection_status->parent = this;
    ecio->parent = this;
    modem_state->parent = this;
    network->parent = this;
    rsrp->parent = this;
    rsrq->parent = this;
    rssi->parent = this;
    service->parent = this;
    temperature->parent = this;

    yang_name = "event"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::~Event()
{
}

bool Native::Controller::Cellular::Lte::Event::has_data() const
{
    if (is_presence_container) return true;
    return (connection_status !=  nullptr && connection_status->has_data())
	|| (ecio !=  nullptr && ecio->has_data())
	|| (modem_state !=  nullptr && modem_state->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (rsrp !=  nullptr && rsrp->has_data())
	|| (rsrq !=  nullptr && rsrq->has_data())
	|| (rssi !=  nullptr && rssi->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (temperature !=  nullptr && temperature->has_data());
}

bool Native::Controller::Cellular::Lte::Event::has_operation() const
{
    return is_set(yfilter)
	|| (connection_status !=  nullptr && connection_status->has_operation())
	|| (ecio !=  nullptr && ecio->has_operation())
	|| (modem_state !=  nullptr && modem_state->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (rsrp !=  nullptr && rsrp->has_operation())
	|| (rsrq !=  nullptr && rsrq->has_operation())
	|| (rssi !=  nullptr && rssi->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (temperature !=  nullptr && temperature->has_operation());
}

std::string Native::Controller::Cellular::Lte::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-status")
    {
        if(connection_status == nullptr)
        {
            connection_status = std::make_shared<Native::Controller::Cellular::Lte::Event::ConnectionStatus>();
        }
        return connection_status;
    }

    if(child_yang_name == "ecio")
    {
        if(ecio == nullptr)
        {
            ecio = std::make_shared<Native::Controller::Cellular::Lte::Event::Ecio>();
        }
        return ecio;
    }

    if(child_yang_name == "modem-state")
    {
        if(modem_state == nullptr)
        {
            modem_state = std::make_shared<Native::Controller::Cellular::Lte::Event::ModemState>();
        }
        return modem_state;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Controller::Cellular::Lte::Event::Network>();
        }
        return network;
    }

    if(child_yang_name == "rsrp")
    {
        if(rsrp == nullptr)
        {
            rsrp = std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrp>();
        }
        return rsrp;
    }

    if(child_yang_name == "rsrq")
    {
        if(rsrq == nullptr)
        {
            rsrq = std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrq>();
        }
        return rsrq;
    }

    if(child_yang_name == "rssi")
    {
        if(rssi == nullptr)
        {
            rssi = std::make_shared<Native::Controller::Cellular::Lte::Event::Rssi>();
        }
        return rssi;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Controller::Cellular::Lte::Event::Service>();
        }
        return service;
    }

    if(child_yang_name == "temperature")
    {
        if(temperature == nullptr)
        {
            temperature = std::make_shared<Native::Controller::Cellular::Lte::Event::Temperature>();
        }
        return temperature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connection_status != nullptr)
    {
        _children["connection-status"] = connection_status;
    }

    if(ecio != nullptr)
    {
        _children["ecio"] = ecio;
    }

    if(modem_state != nullptr)
    {
        _children["modem-state"] = modem_state;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(rsrp != nullptr)
    {
        _children["rsrp"] = rsrp;
    }

    if(rsrq != nullptr)
    {
        _children["rsrq"] = rsrq;
    }

    if(rssi != nullptr)
    {
        _children["rssi"] = rssi;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(temperature != nullptr)
    {
        _children["temperature"] = temperature;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-status" || name == "ecio" || name == "modem-state" || name == "network" || name == "rsrp" || name == "rsrq" || name == "rssi" || name == "service" || name == "temperature")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::ConnectionStatus::ConnectionStatus()
    :
    mib_trap{YType::enumeration, "mib-trap"}
{

    yang_name = "connection-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::ConnectionStatus::~ConnectionStatus()
{
}

bool Native::Controller::Cellular::Lte::Event::ConnectionStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Controller::Cellular::Lte::Event::ConnectionStatus::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::ConnectionStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::ConnectionStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::ConnectionStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::ConnectionStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::ConnectionStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
}

void Native::Controller::Cellular::Lte::Event::ConnectionStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::ConnectionStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Ecio::Ecio()
    :
    abate(std::make_shared<Native::Controller::Cellular::Lte::Event::Ecio::Abate>())
    , onset(std::make_shared<Native::Controller::Cellular::Lte::Event::Ecio::Onset>())
{
    abate->parent = this;
    onset->parent = this;

    yang_name = "ecio"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Ecio::~Ecio()
{
}

bool Native::Controller::Cellular::Lte::Event::Ecio::has_data() const
{
    if (is_presence_container) return true;
    return (abate !=  nullptr && abate->has_data())
	|| (onset !=  nullptr && onset->has_data());
}

bool Native::Controller::Cellular::Lte::Event::Ecio::has_operation() const
{
    return is_set(yfilter)
	|| (abate !=  nullptr && abate->has_operation())
	|| (onset !=  nullptr && onset->has_operation());
}

std::string Native::Controller::Cellular::Lte::Event::Ecio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Ecio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Ecio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abate")
    {
        if(abate == nullptr)
        {
            abate = std::make_shared<Native::Controller::Cellular::Lte::Event::Ecio::Abate>();
        }
        return abate;
    }

    if(child_yang_name == "onset")
    {
        if(onset == nullptr)
        {
            onset = std::make_shared<Native::Controller::Cellular::Lte::Event::Ecio::Onset>();
        }
        return onset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Ecio::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(abate != nullptr)
    {
        _children["abate"] = abate;
    }

    if(onset != nullptr)
    {
        _children["onset"] = onset;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Event::Ecio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Event::Ecio::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Event::Ecio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abate" || name == "onset")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Ecio::Abate::Abate()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "abate"; yang_parent_name = "ecio"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Ecio::Abate::~Abate()
{
}

bool Native::Controller::Cellular::Lte::Event::Ecio::Abate::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Ecio::Abate::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Ecio::Abate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Ecio::Abate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Ecio::Abate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Ecio::Abate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Ecio::Abate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Ecio::Abate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Ecio::Abate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Ecio::Onset::Onset()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "onset"; yang_parent_name = "ecio"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Ecio::Onset::~Onset()
{
}

bool Native::Controller::Cellular::Lte::Event::Ecio::Onset::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Ecio::Onset::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Ecio::Onset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Ecio::Onset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Ecio::Onset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Ecio::Onset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Ecio::Onset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Ecio::Onset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Ecio::Onset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::ModemState::ModemState()
    :
    mib_trap{YType::enumeration, "mib-trap"}
{

    yang_name = "modem-state"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::ModemState::~ModemState()
{
}

bool Native::Controller::Cellular::Lte::Event::ModemState::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Controller::Cellular::Lte::Event::ModemState::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::ModemState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::ModemState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::ModemState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::ModemState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::ModemState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
}

void Native::Controller::Cellular::Lte::Event::ModemState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::ModemState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Network::Network()
    :
    mib_trap{YType::empty, "mib-trap"}
{

    yang_name = "network"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Network::~Network()
{
}

bool Native::Controller::Cellular::Lte::Event::Network::has_data() const
{
    if (is_presence_container) return true;
    return mib_trap.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mib_trap.is_set || is_set(mib_trap.yfilter)) leaf_name_data.push_back(mib_trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap = value;
        mib_trap.value_namespace = name_space;
        mib_trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rsrp::Rsrp()
    :
    abate(std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrp::Abate>())
    , onset(std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrp::Onset>())
{
    abate->parent = this;
    onset->parent = this;

    yang_name = "rsrp"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rsrp::~Rsrp()
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::has_data() const
{
    if (is_presence_container) return true;
    return (abate !=  nullptr && abate->has_data())
	|| (onset !=  nullptr && onset->has_data());
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::has_operation() const
{
    return is_set(yfilter)
	|| (abate !=  nullptr && abate->has_operation())
	|| (onset !=  nullptr && onset->has_operation());
}

std::string Native::Controller::Cellular::Lte::Event::Rsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rsrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abate")
    {
        if(abate == nullptr)
        {
            abate = std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrp::Abate>();
        }
        return abate;
    }

    if(child_yang_name == "onset")
    {
        if(onset == nullptr)
        {
            onset = std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrp::Onset>();
        }
        return onset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rsrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(abate != nullptr)
    {
        _children["abate"] = abate;
    }

    if(onset != nullptr)
    {
        _children["onset"] = onset;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rsrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Event::Rsrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abate" || name == "onset")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rsrp::Abate::Abate()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "abate"; yang_parent_name = "rsrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rsrp::Abate::~Abate()
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::Abate::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::Abate::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Rsrp::Abate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rsrp::Abate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rsrp::Abate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rsrp::Abate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rsrp::Abate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Rsrp::Abate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::Abate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rsrp::Onset::Onset()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "onset"; yang_parent_name = "rsrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rsrp::Onset::~Onset()
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::Onset::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::Onset::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Rsrp::Onset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rsrp::Onset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rsrp::Onset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rsrp::Onset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rsrp::Onset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Rsrp::Onset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Rsrp::Onset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rsrq::Rsrq()
    :
    abate(std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrq::Abate>())
    , onset(std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrq::Onset>())
{
    abate->parent = this;
    onset->parent = this;

    yang_name = "rsrq"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rsrq::~Rsrq()
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::has_data() const
{
    if (is_presence_container) return true;
    return (abate !=  nullptr && abate->has_data())
	|| (onset !=  nullptr && onset->has_data());
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::has_operation() const
{
    return is_set(yfilter)
	|| (abate !=  nullptr && abate->has_operation())
	|| (onset !=  nullptr && onset->has_operation());
}

std::string Native::Controller::Cellular::Lte::Event::Rsrq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rsrq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rsrq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abate")
    {
        if(abate == nullptr)
        {
            abate = std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrq::Abate>();
        }
        return abate;
    }

    if(child_yang_name == "onset")
    {
        if(onset == nullptr)
        {
            onset = std::make_shared<Native::Controller::Cellular::Lte::Event::Rsrq::Onset>();
        }
        return onset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rsrq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(abate != nullptr)
    {
        _children["abate"] = abate;
    }

    if(onset != nullptr)
    {
        _children["onset"] = onset;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rsrq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Event::Rsrq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abate" || name == "onset")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rsrq::Abate::Abate()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int8, "threshold"}
{

    yang_name = "abate"; yang_parent_name = "rsrq"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rsrq::Abate::~Abate()
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::Abate::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::Abate::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Rsrq::Abate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rsrq::Abate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rsrq::Abate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rsrq::Abate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rsrq::Abate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Rsrq::Abate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::Abate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rsrq::Onset::Onset()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int8, "threshold"}
{

    yang_name = "onset"; yang_parent_name = "rsrq"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rsrq::Onset::~Onset()
{
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::Onset::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::Onset::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Rsrq::Onset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rsrq::Onset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rsrq::Onset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rsrq::Onset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rsrq::Onset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Rsrq::Onset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Rsrq::Onset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rssi::Rssi()
    :
    abate(std::make_shared<Native::Controller::Cellular::Lte::Event::Rssi::Abate>())
    , onset(std::make_shared<Native::Controller::Cellular::Lte::Event::Rssi::Onset>())
{
    abate->parent = this;
    onset->parent = this;

    yang_name = "rssi"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rssi::~Rssi()
{
}

bool Native::Controller::Cellular::Lte::Event::Rssi::has_data() const
{
    if (is_presence_container) return true;
    return (abate !=  nullptr && abate->has_data())
	|| (onset !=  nullptr && onset->has_data());
}

bool Native::Controller::Cellular::Lte::Event::Rssi::has_operation() const
{
    return is_set(yfilter)
	|| (abate !=  nullptr && abate->has_operation())
	|| (onset !=  nullptr && onset->has_operation());
}

std::string Native::Controller::Cellular::Lte::Event::Rssi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rssi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rssi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abate")
    {
        if(abate == nullptr)
        {
            abate = std::make_shared<Native::Controller::Cellular::Lte::Event::Rssi::Abate>();
        }
        return abate;
    }

    if(child_yang_name == "onset")
    {
        if(onset == nullptr)
        {
            onset = std::make_shared<Native::Controller::Cellular::Lte::Event::Rssi::Onset>();
        }
        return onset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rssi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(abate != nullptr)
    {
        _children["abate"] = abate;
    }

    if(onset != nullptr)
    {
        _children["onset"] = onset;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rssi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Event::Rssi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Event::Rssi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abate" || name == "onset")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rssi::Abate::Abate()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "abate"; yang_parent_name = "rssi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rssi::Abate::~Abate()
{
}

bool Native::Controller::Cellular::Lte::Event::Rssi::Abate::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Rssi::Abate::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Rssi::Abate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rssi::Abate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rssi::Abate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rssi::Abate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rssi::Abate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Rssi::Abate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Rssi::Abate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Rssi::Onset::Onset()
    :
    mib_trap{YType::enumeration, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "onset"; yang_parent_name = "rssi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Rssi::Onset::~Onset()
{
}

bool Native::Controller::Cellular::Lte::Event::Rssi::Onset::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Rssi::Onset::has_operation() const
{
    for (auto const & leaf : mib_trap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Rssi::Onset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Rssi::Onset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    auto mib_trap_name_datas = mib_trap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mib_trap_name_datas.begin(), mib_trap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Rssi::Onset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Rssi::Onset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Rssi::Onset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap.append(value);
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Rssi::Onset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Rssi::Onset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Service::Service()
    :
    mib_trap{YType::empty, "mib-trap"}
{

    yang_name = "service"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Service::~Service()
{
}

bool Native::Controller::Cellular::Lte::Event::Service::has_data() const
{
    if (is_presence_container) return true;
    return mib_trap.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mib_trap.is_set || is_set(mib_trap.yfilter)) leaf_name_data.push_back(mib_trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap = value;
        mib_trap.value_namespace = name_space;
        mib_trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Temperature::Temperature()
    :
    abate(std::make_shared<Native::Controller::Cellular::Lte::Event::Temperature::Abate>())
    , onset(std::make_shared<Native::Controller::Cellular::Lte::Event::Temperature::Onset>())
{
    abate->parent = this;
    onset->parent = this;

    yang_name = "temperature"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Temperature::~Temperature()
{
}

bool Native::Controller::Cellular::Lte::Event::Temperature::has_data() const
{
    if (is_presence_container) return true;
    return (abate !=  nullptr && abate->has_data())
	|| (onset !=  nullptr && onset->has_data());
}

bool Native::Controller::Cellular::Lte::Event::Temperature::has_operation() const
{
    return is_set(yfilter)
	|| (abate !=  nullptr && abate->has_operation())
	|| (onset !=  nullptr && onset->has_operation());
}

std::string Native::Controller::Cellular::Lte::Event::Temperature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temperature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Temperature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Temperature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abate")
    {
        if(abate == nullptr)
        {
            abate = std::make_shared<Native::Controller::Cellular::Lte::Event::Temperature::Abate>();
        }
        return abate;
    }

    if(child_yang_name == "onset")
    {
        if(onset == nullptr)
        {
            onset = std::make_shared<Native::Controller::Cellular::Lte::Event::Temperature::Onset>();
        }
        return onset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Temperature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(abate != nullptr)
    {
        _children["abate"] = abate;
    }

    if(onset != nullptr)
    {
        _children["onset"] = onset;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Event::Temperature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Event::Temperature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Event::Temperature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abate" || name == "onset")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Temperature::Abate::Abate()
    :
    mib_trap{YType::empty, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "abate"; yang_parent_name = "temperature"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Temperature::Abate::~Abate()
{
}

bool Native::Controller::Cellular::Lte::Event::Temperature::Abate::has_data() const
{
    if (is_presence_container) return true;
    return mib_trap.is_set
	|| threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Temperature::Abate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Temperature::Abate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Temperature::Abate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mib_trap.is_set || is_set(mib_trap.yfilter)) leaf_name_data.push_back(mib_trap.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Temperature::Abate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Temperature::Abate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Temperature::Abate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap = value;
        mib_trap.value_namespace = name_space;
        mib_trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Temperature::Abate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Temperature::Abate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Event::Temperature::Onset::Onset()
    :
    mib_trap{YType::empty, "mib-trap"},
    threshold{YType::int16, "threshold"}
{

    yang_name = "onset"; yang_parent_name = "temperature"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Event::Temperature::Onset::~Onset()
{
}

bool Native::Controller::Cellular::Lte::Event::Temperature::Onset::has_data() const
{
    if (is_presence_container) return true;
    return mib_trap.is_set
	|| threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Event::Temperature::Onset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mib_trap.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Event::Temperature::Onset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Event::Temperature::Onset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mib_trap.is_set || is_set(mib_trap.yfilter)) leaf_name_data.push_back(mib_trap.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Event::Temperature::Onset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Event::Temperature::Onset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Event::Temperature::Onset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mib-trap")
    {
        mib_trap = value;
        mib_trap.value_namespace = name_space;
        mib_trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Event::Temperature::Onset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mib-trap")
    {
        mib_trap.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Event::Temperature::Onset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-trap" || name == "threshold")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Dyinggasp::Dyinggasp()
    :
    detach(std::make_shared<Native::Controller::Cellular::Lte::Dyinggasp::Detach>())
    , sms(std::make_shared<Native::Controller::Cellular::Lte::Dyinggasp::Sms>())
{
    detach->parent = this;
    sms->parent = this;

    yang_name = "dyinggasp"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Dyinggasp::~Dyinggasp()
{
}

bool Native::Controller::Cellular::Lte::Dyinggasp::has_data() const
{
    if (is_presence_container) return true;
    return (detach !=  nullptr && detach->has_data())
	|| (sms !=  nullptr && sms->has_data());
}

bool Native::Controller::Cellular::Lte::Dyinggasp::has_operation() const
{
    return is_set(yfilter)
	|| (detach !=  nullptr && detach->has_operation())
	|| (sms !=  nullptr && sms->has_operation());
}

std::string Native::Controller::Cellular::Lte::Dyinggasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyinggasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Dyinggasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Dyinggasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detach")
    {
        if(detach == nullptr)
        {
            detach = std::make_shared<Native::Controller::Cellular::Lte::Dyinggasp::Detach>();
        }
        return detach;
    }

    if(child_yang_name == "sms")
    {
        if(sms == nullptr)
        {
            sms = std::make_shared<Native::Controller::Cellular::Lte::Dyinggasp::Sms>();
        }
        return sms;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Dyinggasp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detach != nullptr)
    {
        _children["detach"] = detach;
    }

    if(sms != nullptr)
    {
        _children["sms"] = sms;
    }

    return _children;
}

void Native::Controller::Cellular::Lte::Dyinggasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Dyinggasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Dyinggasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detach" || name == "sms")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Dyinggasp::Detach::Detach()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "detach"; yang_parent_name = "dyinggasp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Dyinggasp::Detach::~Detach()
{
}

bool Native::Controller::Cellular::Lte::Dyinggasp::Detach::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Controller::Cellular::Lte::Dyinggasp::Detach::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Controller::Cellular::Lte::Dyinggasp::Detach::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detach";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Dyinggasp::Detach::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Dyinggasp::Detach::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Dyinggasp::Detach::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Dyinggasp::Detach::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Dyinggasp::Detach::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Dyinggasp::Detach::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Dyinggasp::Sms::Sms()
    :
    send{YType::str, "send"},
    sms_text{YType::str, "sms-text"}
{

    yang_name = "sms"; yang_parent_name = "dyinggasp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::Cellular::Lte::Dyinggasp::Sms::~Sms()
{
}

bool Native::Controller::Cellular::Lte::Dyinggasp::Sms::has_data() const
{
    if (is_presence_container) return true;
    return send.is_set
	|| sms_text.is_set;
}

bool Native::Controller::Cellular::Lte::Dyinggasp::Sms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send.yfilter)
	|| ydk::is_set(sms_text.yfilter);
}

std::string Native::Controller::Cellular::Lte::Dyinggasp::Sms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Dyinggasp::Sms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());
    if (sms_text.is_set || is_set(sms_text.yfilter)) leaf_name_data.push_back(sms_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::Cellular::Lte::Dyinggasp::Sms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::Cellular::Lte::Dyinggasp::Sms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::Cellular::Lte::Dyinggasp::Sms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sms-text")
    {
        sms_text = value;
        sms_text.value_namespace = name_space;
        sms_text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Dyinggasp::Sms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
    if(value_path == "sms-text")
    {
        sms_text.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Dyinggasp::Sms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send" || name == "sms-text")
        return true;
    return false;
}

Native::Controller::SONET::SONET()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
        ,
    clock_(std::make_shared<Native::Controller::SONET::Clock>())
    , aug(std::make_shared<Native::Controller::SONET::Aug>())
    , au_3(this, {"number"})
    , au_4_atm(std::make_shared<Native::Controller::SONET::Au4Atm>())
    , au_4(this, {"number", "tug_3"})
    , aps(std::make_shared<Native::Controller::SONET::Aps>())
{
    clock_->parent = this;
    aug->parent = this;
    au_4_atm->parent = this;
    aps->parent = this;

    yang_name = "SONET"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Controller::SONET::~SONET()
{
}

bool Native::Controller::SONET::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<au_3.len(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.len(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aps !=  nullptr && aps->has_data());
}

bool Native::Controller::SONET::has_operation() const
{
    for (std::size_t index=0; index<au_3.len(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.len(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aps !=  nullptr && aps->has_operation());
}

std::string Native::Controller::SONET::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::SONET::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::SONET::Clock>();
        }
        return clock_;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::SONET::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "au-3")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au3>();
        ent_->parent = this;
        au_3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::SONET::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "au-4")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au4>();
        ent_->parent = this;
        au_4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::SONET::Aps>();
        }
        return aps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_ != nullptr)
    {
        _children["clock"] = clock_;
    }

    if(aug != nullptr)
    {
        _children["aug"] = aug;
    }

    count_ = 0;
    for (auto ent_ : au_3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(au_4_atm != nullptr)
    {
        _children["au-4-atm"] = au_4_atm;
    }

    count_ = 0;
    for (auto ent_ : au_4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(aps != nullptr)
    {
        _children["aps"] = aps;
    }

    return _children;
}

void Native::Controller::SONET::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock" || name == "aug" || name == "au-3" || name == "au-4-atm" || name == "au-4" || name == "aps" || name == "name" || name == "framing" || name == "shutdown")
        return true;
    return false;
}

Native::Controller::SONET::Clock::Clock()
    :
    source{YType::enumeration, "source"}
{

    yang_name = "clock"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Clock::~Clock()
{
}

bool Native::Controller::SONET::Clock::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set;
}

bool Native::Controller::SONET::Clock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Controller::SONET::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::SONET::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "aug"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Aug::~Aug()
{
}

bool Native::Controller::SONET::Aug::has_data() const
{
    if (is_presence_container) return true;
    return mapping.is_set;
}

bool Native::Controller::SONET::Aug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONET::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Aug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Au3()
    :
    number{YType::int8, "number"}
        ,
    overhead(std::make_shared<Native::Controller::SONET::Au3::Overhead>())
    , mode(std::make_shared<Native::Controller::SONET::Au3::Mode>())
{
    overhead->parent = this;
    mode->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au3::~Au3()
{
}

bool Native::Controller::SONET::Au3::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (overhead !=  nullptr && overhead->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Controller::SONET::Au3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (overhead !=  nullptr && overhead->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Controller::SONET::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::SONET::Au3::Overhead>();
        }
        return overhead;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::SONET::Au3::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(overhead != nullptr)
    {
        _children["overhead"] = overhead;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Controller::SONET::Au3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overhead" || name == "mode" || name == "number")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{

    yang_name = "overhead"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::SONET::Au3::Overhead::has_data() const
{
    if (is_presence_container) return true;
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::SONET::Au3::Overhead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string Native::Controller::SONET::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::Overhead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.yfilter)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au3::Overhead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte")
    {
        byte = value;
        byte.value_namespace = name_space;
        byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::Overhead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte")
    {
        byte.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::Overhead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte" || name == "length")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "mode"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au3::Mode::~Mode()
{
}

bool Native::Controller::SONET::Au3::Mode::has_data() const
{
    if (is_presence_container) return true;
    return mapping.is_set;
}

bool Native::Controller::SONET::Au3::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONET::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au3::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONET::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::SONET::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::SONET::Au4Atm::has_data() const
{
    if (is_presence_container) return true;
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::SONET::Au4Atm::has_operation() const
{
    return is_set(yfilter)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::SONET::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::SONET::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(au_4 != nullptr)
    {
        _children["au-4"] = au_4;
    }

    return _children;
}

void Native::Controller::SONET::Au4Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "au-4")
        return true;
    return false;
}

Native::Controller::SONET::Au4Atm::Au4::Au4()
    :
    number{YType::int8, "number"},
    atm{YType::empty, "atm"}
{

    yang_name = "au-4"; yang_parent_name = "au-4-atm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::SONET::Au4Atm::Au4::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| atm.is_set;
}

bool Native::Controller::SONET::Au4Atm::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONET::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4Atm::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au4Atm::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4Atm::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4Atm::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONET::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    mode{YType::enumeration, "mode"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"},
    framing{YType::enumeration, "framing"}
        ,
    cem_group_timeslots(std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots>())
    , channel_group_timeslots(std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots>())
    , cem_group_unframed(std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed>())
    , framing_unframed(std::make_shared<Native::Controller::SONET::Au4::FramingUnframed>())
    , cem_group_atm(std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm>())
    , ima_group(std::make_shared<Native::Controller::SONET::Au4::ImaGroup>())
{
    cem_group_timeslots->parent = this;
    channel_group_timeslots->parent = this;
    cem_group_unframed->parent = this;
    framing_unframed->parent = this;
    cem_group_atm->parent = this;
    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::~Au4()
{
}

bool Native::Controller::SONET::Au4::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| tug_3.is_set
	|| mode.is_set
	|| cem_group.is_set
	|| unframed.is_set
	|| framing.is_set
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::SONET::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(tug_3.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::SONET::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(tug_3, "tug-3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.yfilter)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::SONET::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::SONET::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cem_group_timeslots != nullptr)
    {
        _children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(channel_group_timeslots != nullptr)
    {
        _children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        _children["cem-group-unframed"] = cem_group_unframed;
    }

    if(framing_unframed != nullptr)
    {
        _children["framing-unframed"] = framing_unframed;
    }

    if(cem_group_atm != nullptr)
    {
        _children["cem-group-atm"] = cem_group_atm;
    }

    if(ima_group != nullptr)
    {
        _children["ima-group"] = ima_group;
    }

    return _children;
}

void Native::Controller::SONET::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
        tug_3.value_namespace = name_space;
        tug_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "tug-3")
    {
        tug_3.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cem-group-timeslots" || name == "channel-group-timeslots" || name == "cem-group-unframed" || name == "framing-unframed" || name == "cem-group-atm" || name == "ima-group" || name == "number" || name == "tug-3" || name == "mode" || name == "cem-group" || name == "unframed" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::CemGroupTimeslots()
    :
    tug_2(this, {"number", "e1", "cem_group"})
{

    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(cem_group, "cem-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
    :
    tug_2(this, {"number", "e1", "channel_group"})
{

    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(channel_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(channel_group, "channel-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "channel-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupUnframed::CemGroupUnframed()
    :
    tug_2(this, {"number", "e1", "cem_group"})
{

    yang_name = "cem-group-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.len(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        auto ent_ = std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed::Tug2>();
        ent_->parent = this;
        tug_2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tug_2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Controller::SONET::Au4::CemGroupUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(e1, "e1");
    ADD_KEY_TOKEN(cem_group, "cem-group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "unframed")
        return true;
    return false;
}

const Enum::YLeaf Native::Platform::TcamParityError::enable {0, "enable"};
const Enum::YLeaf Native::Platform::TcamParityError::disable {1, "disable"};

const Enum::YLeaf Native::Platform::TimeSource::Ntp::TimeScale::epoch_1900 {0, "epoch-1900"};
const Enum::YLeaf Native::Platform::TimeSource::Ntp::TimeScale::epoch_1970 {1, "epoch-1970"};

const Enum::YLeaf Native::Platform::Console::Output::auto_ {0, "auto"};
const Enum::YLeaf Native::Platform::Console::Output::serial {1, "serial"};
const Enum::YLeaf Native::Platform::Console::Output::virtual_ {2, "virtual"};

const Enum::YLeaf Native::Platform::Hardware::Lite::License::enable {0, "enable"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::Disable::internal_license {0, "internal-license"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_10000 {0, "10000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_25000 {1, "25000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_50000 {2, "50000"};

const Enum::YLeaf Native::Platform::Ipsec::Gdoi::accept_both {0, "accept-both"};

const Enum::YLeaf Native::Platform::Ipsec::ControlPlane::heavy {0, "heavy"};
const Enum::YLeaf Native::Platform::Ipsec::ControlPlane::medium {1, "medium"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Process::iomd {0, "iomd"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Module::all_modules {0, "all-modules"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Level::info {0, "info"};

const Enum::YLeaf Native::Enable::LastResort::password {0, "password"};
const Enum::YLeaf Native::Enable::LastResort::succeed {1, "succeed"};

const Enum::YLeaf Native::Enable::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Enable::Secret::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Secret::Type::Y_4 {1, "4"};
const Enum::YLeaf Native::Enable::Secret::Type::Y_5 {2, "5"};

const Enum::YLeaf Native::Archive::Path::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Archive::Path::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Archive::Path::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Archive::Path::harddisk__COLON__ {3, "harddisk:"};
const Enum::YLeaf Native::Archive::Path::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Archive::Path::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Archive::Path::pram__COLON__ {6, "pram:"};
const Enum::YLeaf Native::Archive::Path::rcp__COLON__ {7, "rcp:"};
const Enum::YLeaf Native::Archive::Path::scp__COLON__ {8, "scp:"};
const Enum::YLeaf Native::Archive::Path::tftp__COLON__ {9, "tftp:"};

const Enum::YLeaf Native::Archive::Log::Config::Notify::Syslog::Contenttype::plaintext {0, "plaintext"};
const Enum::YLeaf Native::Archive::Log::Config::Notify::Syslog::Contenttype::xml {1, "xml"};

const Enum::YLeaf Native::Username::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Username::Secret::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Username::Secret::Encryption::Y_5 {1, "5"};
const Enum::YLeaf Native::Username::Secret::Encryption::Y_9 {2, "9"};

const Enum::YLeaf Native::Card::Type::t1 {0, "t1"};
const Enum::YLeaf Native::Card::Type::e1 {1, "e1"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Name::T1 {0, "T1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::E1 {1, "E1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::T3 {2, "T3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::ami {0, "ami"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::b8zs {1, "b8zs"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::hdb3 {2, "hdb3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Clock::Source::Line::LineMode::primary {0, "primary"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Clock::Source::Line::LineMode::secondary {1, "secondary"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Sim::Authenticate::PinType::Y_0 {0, "0"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Sim::Authenticate::PinType::Y_7 {1, "7"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Sms::Archive::Path::ftp__COLON__ {0, "ftp:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Sms::Archive::Path::http__COLON__ {1, "http:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Sms::Archive::Path::https__COLON__ {2, "https:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Sms::Archive::Path::pram__COLON__ {3, "pram:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Sms::Archive::Path::rcp__COLON__ {4, "rcp:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Sms::Archive::Path::scp__COLON__ {5, "scp:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Sms::Archive::Path::tftp__COLON__ {6, "tftp:"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Gps::Mode::ms_based {0, "ms-based"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Gps::Mode::standalone {1, "standalone"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Filter::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Filter::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Filter::webui__COLON__ {2, "webui:"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::pram__COLON__ {5, "pram:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::rcp__COLON__ {6, "rcp:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::scp__COLON__ {7, "scp:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::DmLog::Output::Path::tftp__COLON__ {8, "tftp:"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::NasLog::Output::Path::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Modem::NasLog::Output::Path::flash__COLON__ {1, "flash:"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::ConnectionStatus::MibTrap::All_lte {0, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::ConnectionStatus::MibTrap::active {1, "active"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::ConnectionStatus::MibTrap::inactive {2, "inactive"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::Y_1xrtt {0, "1xrtt"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::All_lte {1, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::edge {2, "edge"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::evdoRel0 {3, "evdoRel0"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::evdoRelA {4, "evdoRelA"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::evdoRelB {5, "evdoRelB"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::gprs {6, "gprs"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::umts__FWD_SLASH__wcdma {7, "umts/wcdma"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::hsdpa {8, "hsdpa"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::hsupa {9, "hsupa"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::hspa {10, "hspa"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::hspa_plus {11, "hspa-plus"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::lte_tdd {12, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Abate::MibTrap::lte_fdd {13, "lte-fdd"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::Y_1xrtt {0, "1xrtt"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::All_lte {1, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::edge {2, "edge"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::evdoRel0 {3, "evdoRel0"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::evdoRelA {4, "evdoRelA"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::evdoRelB {5, "evdoRelB"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::gprs {6, "gprs"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::umts__FWD_SLASH__wcdma {7, "umts/wcdma"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::hsdpa {8, "hsdpa"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::hsupa {9, "hsupa"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::hspa {10, "hspa"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::hspa_plus {11, "hspa-plus"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::lte_tdd {12, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Ecio::Onset::MibTrap::lte_fdd {13, "lte-fdd"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::ModemState::MibTrap::all {0, "all"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::ModemState::MibTrap::down {1, "down"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::ModemState::MibTrap::up {2, "up"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrp::Abate::MibTrap::All_lte {0, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrp::Abate::MibTrap::lte_tdd {1, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrp::Abate::MibTrap::lte_fdd {2, "lte-fdd"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrp::Onset::MibTrap::All_lte {0, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrp::Onset::MibTrap::lte_tdd {1, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrp::Onset::MibTrap::lte_fdd {2, "lte-fdd"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrq::Abate::MibTrap::All_lte {0, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrq::Abate::MibTrap::lte_tdd {1, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrq::Abate::MibTrap::lte_fdd {2, "lte-fdd"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrq::Onset::MibTrap::All_lte {0, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrq::Onset::MibTrap::lte_tdd {1, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rsrq::Onset::MibTrap::lte_fdd {2, "lte-fdd"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rssi::Abate::MibTrap::All_lte {0, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rssi::Abate::MibTrap::lte_tdd {1, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rssi::Abate::MibTrap::lte_fdd {2, "lte-fdd"};

const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rssi::Onset::MibTrap::All_lte {0, "All-lte"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rssi::Onset::MibTrap::lte_tdd {1, "lte-tdd"};
const Enum::YLeaf Native::Controller::Cellular::Lte::Event::Rssi::Onset::MibTrap::lte_fdd {2, "lte-fdd"};

const Enum::YLeaf Native::Controller::SONET::Framing::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::SONET::Framing::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::SONET::Clock::Source::internal {0, "internal"};
const Enum::YLeaf Native::Controller::SONET::Clock::Source::line {1, "line"};

const Enum::YLeaf Native::Controller::SONET::Aug::Mapping::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::SONET::Aug::Mapping::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::SONET::Au3::Overhead::Byte::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::SONET::Au4::Framing::unframed {0, "unframed"};


}
}

