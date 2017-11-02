
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_176.hpp"
#include "Cisco_IOS_XE_native_178.hpp"
#include "Cisco_IOS_XE_native_177.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::PerPort()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "per-port"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::~PerPort()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "per-port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::PerPort::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{

    yang_name = "lldp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Lldp::~Lldp()
{
}

bool Native::Lldp::has_data() const
{
    return run.is_set;
}

bool Native::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Lldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "run")
        return true;
    return false;
}

Native::MaintenanceTemplate::MaintenanceTemplate()
    :
    templ_name{YType::str, "templ-name"}
    	,
    config_maintenance_templ(std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl>())
{
    config_maintenance_templ->parent = this;

    yang_name = "maintenance-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MaintenanceTemplate::~MaintenanceTemplate()
{
}

bool Native::MaintenanceTemplate::has_data() const
{
    return templ_name.is_set
	|| (config_maintenance_templ !=  nullptr && config_maintenance_templ->has_data());
}

bool Native::MaintenanceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(templ_name.yfilter)
	|| (config_maintenance_templ !=  nullptr && config_maintenance_templ->has_operation());
}

std::string Native::MaintenanceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MaintenanceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mmode:maintenance-template" <<"[templ-name='" <<templ_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (templ_name.is_set || is_set(templ_name.yfilter)) leaf_name_data.push_back(templ_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-maintenance-templ")
    {
        if(config_maintenance_templ == nullptr)
        {
            config_maintenance_templ = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl>();
        }
        return config_maintenance_templ;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_maintenance_templ != nullptr)
    {
        children["config-maintenance-templ"] = config_maintenance_templ;
    }

    return children;
}

void Native::MaintenanceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "templ-name")
    {
        templ_name = value;
        templ_name.value_namespace = name_space;
        templ_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MaintenanceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "templ-name")
    {
        templ_name.yfilter = yfilter;
    }
}

bool Native::MaintenanceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-maintenance-templ" || name == "templ-name")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::ConfigMaintenanceTempl()
    :
    router(std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router>())
	,shutdown(std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown>())
{
    router->parent = this;
    shutdown->parent = this;

    yang_name = "config-maintenance-templ"; yang_parent_name = "maintenance-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::~ConfigMaintenanceTempl()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-maintenance-templ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router>();
        }
        return router;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "shutdown")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::Router()
{

    yang_name = "router"; yang_parent_name = "config-maintenance-templ"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::~Router()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::has_data() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::has_operation() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing-protocol")
    {
        for(auto const & c : routing_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol>();
        c->parent = this;
        routing_protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routing_protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-protocol")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::RoutingProtocol()
    :
    protocol{YType::enumeration, "protocol"},
    instance{YType::uint16, "instance"}
{

    yang_name = "routing-protocol"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::~RoutingProtocol()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::has_data() const
{
    return protocol.is_set
	|| instance.is_set;
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocol" <<"[protocol='" <<protocol <<"']" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "instance")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::Shutdown()
    :
    l2{YType::empty, "l2"}
{

    yang_name = "shutdown"; yang_parent_name = "config-maintenance-templ"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::~Shutdown()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::has_data() const
{
    return l2.is_set;
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2.yfilter);
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2.is_set || is_set(l2.yfilter)) leaf_name_data.push_back(l2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2")
    {
        l2 = value;
        l2.value_namespace = name_space;
        l2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2")
    {
        l2.yfilter = yfilter;
    }
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2")
        return true;
    return false;
}

Native::Nat66::Nat66()
    :
    prefix(std::make_shared<Native::Nat66::Prefix>())
{
    prefix->parent = this;

    yang_name = "nat66"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Nat66::~Nat66()
{
}

bool Native::Nat66::has_data() const
{
    return (prefix !=  nullptr && prefix->has_data());
}

bool Native::Nat66::has_operation() const
{
    return is_set(yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Nat66::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Nat66::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat66";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Nat66::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Nat66::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Nat66::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Nat66::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Nat66::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Nat66::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Nat66::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Nat66::Prefix::Prefix()
{

    yang_name = "prefix"; yang_parent_name = "nat66"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Nat66::Prefix::~Prefix()
{
}

bool Native::Nat66::Prefix::has_data() const
{
    for (std::size_t index=0; index<inside.size(); index++)
    {
        if(inside[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Nat66::Prefix::has_operation() const
{
    for (std::size_t index=0; index<inside.size(); index++)
    {
        if(inside[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Nat66::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-nat:nat66/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Nat66::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Nat66::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Nat66::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inside")
    {
        for(auto const & c : inside)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Nat66::Prefix::Inside>();
        c->parent = this;
        inside.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Nat66::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inside)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Nat66::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Nat66::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Nat66::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inside")
        return true;
    return false;
}

Native::Nat66::Prefix::Inside::Inside()
    :
    inside_pfx{YType::str, "inside-pfx"},
    outside{YType::str, "outside"}
{

    yang_name = "inside"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Nat66::Prefix::Inside::~Inside()
{
}

bool Native::Nat66::Prefix::Inside::has_data() const
{
    return inside_pfx.is_set
	|| outside.is_set;
}

bool Native::Nat66::Prefix::Inside::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inside_pfx.yfilter)
	|| ydk::is_set(outside.yfilter);
}

std::string Native::Nat66::Prefix::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-nat:nat66/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Nat66::Prefix::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside" <<"[inside-pfx='" <<inside_pfx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Nat66::Prefix::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inside_pfx.is_set || is_set(inside_pfx.yfilter)) leaf_name_data.push_back(inside_pfx.get_name_leafdata());
    if (outside.is_set || is_set(outside.yfilter)) leaf_name_data.push_back(outside.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Nat66::Prefix::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Nat66::Prefix::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Nat66::Prefix::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inside-pfx")
    {
        inside_pfx = value;
        inside_pfx.value_namespace = name_space;
        inside_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside")
    {
        outside = value;
        outside.value_namespace = name_space;
        outside.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Nat66::Prefix::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inside-pfx")
    {
        inside_pfx.yfilter = yfilter;
    }
    if(value_path == "outside")
    {
        outside.yfilter = yfilter;
    }
}

bool Native::Nat66::Prefix::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inside-pfx" || name == "outside")
        return true;
    return false;
}

Native::PmAgent::PmAgent()
    :
    config_pm_agent(std::make_shared<Native::PmAgent::ConfigPmAgent>())
{
    config_pm_agent->parent = this;

    yang_name = "pm-agent"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::~PmAgent()
{
}

bool Native::PmAgent::has_data() const
{
    return (config_pm_agent !=  nullptr && config_pm_agent->has_data());
}

bool Native::PmAgent::has_operation() const
{
    return is_set(yfilter)
	|| (config_pm_agent !=  nullptr && config_pm_agent->has_operation());
}

std::string Native::PmAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pathmgr:pm-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-pm-agent")
    {
        if(config_pm_agent == nullptr)
        {
            config_pm_agent = std::make_shared<Native::PmAgent::ConfigPmAgent>();
        }
        return config_pm_agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_pm_agent != nullptr)
    {
        children["config-pm-agent"] = config_pm_agent;
    }

    return children;
}

void Native::PmAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-pm-agent")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::ConfigPmAgent()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    device(std::make_shared<Native::PmAgent::ConfigPmAgent::Device>())
	,region(std::make_shared<Native::PmAgent::ConfigPmAgent::Region>())
	,site(std::make_shared<Native::PmAgent::ConfigPmAgent::Site>())
	,tenant(std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant>())
	,pmcs(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs>())
{
    device->parent = this;
    region->parent = this;
    site->parent = this;
    tenant->parent = this;
    pmcs->parent = this;

    yang_name = "config-pm-agent"; yang_parent_name = "pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::~ConfigPmAgent()
{
}

bool Native::PmAgent::ConfigPmAgent::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return shutdown.is_set
	|| (device !=  nullptr && device->has_data())
	|| (region !=  nullptr && region->has_data())
	|| (site !=  nullptr && site->has_data())
	|| (tenant !=  nullptr && tenant->has_data())
	|| (pmcs !=  nullptr && pmcs->has_data());
}

bool Native::PmAgent::ConfigPmAgent::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (device !=  nullptr && device->has_operation())
	|| (region !=  nullptr && region->has_operation())
	|| (site !=  nullptr && site->has_operation())
	|| (tenant !=  nullptr && tenant->has_operation())
	|| (pmcs !=  nullptr && pmcs->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-pm-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::PmAgent::ConfigPmAgent::Device>();
        }
        return device;
    }

    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "region")
    {
        if(region == nullptr)
        {
            region = std::make_shared<Native::PmAgent::ConfigPmAgent::Region>();
        }
        return region;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::PmAgent::ConfigPmAgent::Site>();
        }
        return site;
    }

    if(child_yang_name == "tenant")
    {
        if(tenant == nullptr)
        {
            tenant = std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant>();
        }
        return tenant;
    }

    if(child_yang_name == "pmcs")
    {
        if(pmcs == nullptr)
        {
            pmcs = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs>();
        }
        return pmcs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device != nullptr)
    {
        children["device"] = device;
    }

    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(region != nullptr)
    {
        children["region"] = region;
    }

    if(site != nullptr)
    {
        children["site"] = site;
    }

    if(tenant != nullptr)
    {
        children["tenant"] = tenant;
    }

    if(pmcs != nullptr)
    {
        children["pmcs"] = pmcs;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device" || name == "instance-id" || name == "region" || name == "site" || name == "tenant" || name == "pmcs" || name == "shutdown")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Device()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id>())
	,type(std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type>())
{
    id->parent = this;
    type->parent = this;

    yang_name = "device"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::~Device()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id>();
        }
        return id;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::Id()
{

    yang_name = "id"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::has_data() const
{
    for (std::size_t index=0; index<device_range.size(); index++)
    {
        if(device_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::has_operation() const
{
    for (std::size_t index=0; index<device_range.size(); index++)
    {
        if(device_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device_range")
    {
        for(auto const & c : device_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange>();
        c->parent = this;
        device_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : device_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Device::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::DeviceRange()
    :
    device_id_range{YType::uint32, "device_id_range"},
    name{YType::str, "name"}
{

    yang_name = "device_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::~DeviceRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::has_data() const
{
    return device_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device_range" <<"[device_id_range='" <<device_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id_range.is_set || is_set(device_id_range.yfilter)) leaf_name_data.push_back(device_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device_id_range")
    {
        device_id_range = value;
        device_id_range.value_namespace = name_space;
        device_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device_id_range")
    {
        device_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device_id_range" || name == "name")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Type()
    :
    pxtr{YType::empty, "pxtr"}
    	,
    ntr(nullptr) // presence node
	,rtr(nullptr) // presence node
	,xtr(nullptr) // presence node
{

    yang_name = "type"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::~Type()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::has_data() const
{
    return pxtr.is_set
	|| (ntr !=  nullptr && ntr->has_data())
	|| (rtr !=  nullptr && rtr->has_data())
	|| (xtr !=  nullptr && xtr->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pxtr.yfilter)
	|| (ntr !=  nullptr && ntr->has_operation())
	|| (rtr !=  nullptr && rtr->has_operation())
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pxtr.is_set || is_set(pxtr.yfilter)) leaf_name_data.push_back(pxtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ntr")
    {
        if(ntr == nullptr)
        {
            ntr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Ntr>();
        }
        return ntr;
    }

    if(child_yang_name == "rtr")
    {
        if(rtr == nullptr)
        {
            rtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Rtr>();
        }
        return rtr;
    }

    if(child_yang_name == "xtr")
    {
        if(xtr == nullptr)
        {
            xtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Xtr>();
        }
        return xtr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ntr != nullptr)
    {
        children["ntr"] = ntr;
    }

    if(rtr != nullptr)
    {
        children["rtr"] = rtr;
    }

    if(xtr != nullptr)
    {
        children["xtr"] = xtr;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pxtr")
    {
        pxtr = value;
        pxtr.value_namespace = name_space;
        pxtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pxtr")
    {
        pxtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntr" || name == "rtr" || name == "xtr" || name == "pxtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Ntr()
    :
    rtr(nullptr) // presence node
	,xtr(nullptr) // presence node
{

    yang_name = "ntr"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::~Ntr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::has_data() const
{
    return (rtr !=  nullptr && rtr->has_data())
	|| (xtr !=  nullptr && xtr->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::has_operation() const
{
    return is_set(yfilter)
	|| (rtr !=  nullptr && rtr->has_operation())
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtr")
    {
        if(rtr == nullptr)
        {
            rtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr>();
        }
        return rtr;
    }

    if(child_yang_name == "xtr")
    {
        if(xtr == nullptr)
        {
            xtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr>();
        }
        return xtr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rtr != nullptr)
    {
        children["rtr"] = rtr;
    }

    if(xtr != nullptr)
    {
        children["xtr"] = xtr;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr" || name == "xtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::Rtr()
    :
    xtr{YType::empty, "xtr"}
{

    yang_name = "rtr"; yang_parent_name = "ntr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::~Rtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::has_data() const
{
    return xtr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xtr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/ntr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xtr.is_set || is_set(xtr.yfilter)) leaf_name_data.push_back(xtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xtr")
    {
        xtr = value;
        xtr.value_namespace = name_space;
        xtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xtr")
    {
        xtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::Xtr()
    :
    rtr{YType::empty, "rtr"}
{

    yang_name = "xtr"; yang_parent_name = "ntr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::~Xtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::has_data() const
{
    return rtr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/ntr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Rtr()
    :
    ntr{YType::empty, "ntr"}
    	,
    xtr(nullptr) // presence node
{

    yang_name = "rtr"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::~Rtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::has_data() const
{
    return ntr.is_set
	|| (xtr !=  nullptr && xtr->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ntr.yfilter)
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.yfilter)) leaf_name_data.push_back(ntr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xtr")
    {
        if(xtr == nullptr)
        {
            xtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr>();
        }
        return xtr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xtr != nullptr)
    {
        children["xtr"] = xtr;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ntr")
    {
        ntr = value;
        ntr.value_namespace = name_space;
        ntr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ntr")
    {
        ntr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xtr" || name == "ntr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::Xtr()
    :
    ntr{YType::empty, "ntr"}
{

    yang_name = "xtr"; yang_parent_name = "rtr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::~Xtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::has_data() const
{
    return ntr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ntr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/rtr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.yfilter)) leaf_name_data.push_back(ntr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ntr")
    {
        ntr = value;
        ntr.value_namespace = name_space;
        ntr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ntr")
    {
        ntr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::Xtr()
    :
    ntr{YType::empty, "ntr"},
    rtr{YType::empty, "rtr"}
{

    yang_name = "xtr"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::~Xtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::has_data() const
{
    return ntr.is_set
	|| rtr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ntr.yfilter)
	|| ydk::is_set(rtr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.yfilter)) leaf_name_data.push_back(ntr.get_name_leafdata());
    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ntr")
    {
        ntr = value;
        ntr.value_namespace = name_space;
        ntr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ntr")
    {
        ntr.yfilter = yfilter;
    }
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntr" || name == "rtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::InstanceId()
    :
    instance_id_range{YType::uint32, "instance_id_range"}
    	,
    config_pm_agent_instance(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance>())
{
    config_pm_agent_instance->parent = this;

    yang_name = "instance-id"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::~InstanceId()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::has_data() const
{
    return instance_id_range.is_set
	|| (config_pm_agent_instance !=  nullptr && config_pm_agent_instance->has_data());
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id_range.yfilter)
	|| (config_pm_agent_instance !=  nullptr && config_pm_agent_instance->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id" <<"[instance_id_range='" <<instance_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id_range.is_set || is_set(instance_id_range.yfilter)) leaf_name_data.push_back(instance_id_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-pm-agent-instance")
    {
        if(config_pm_agent_instance == nullptr)
        {
            config_pm_agent_instance = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance>();
        }
        return config_pm_agent_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_pm_agent_instance != nullptr)
    {
        children["config-pm-agent-instance"] = config_pm_agent_instance;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance_id_range")
    {
        instance_id_range = value;
        instance_id_range.value_namespace = name_space;
        instance_id_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance_id_range")
    {
        instance_id_range.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-pm-agent-instance" || name == "instance_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::ConfigPmAgentInstance()
    :
    enterprise_prefix(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix>())
{
    enterprise_prefix->parent = this;

    yang_name = "config-pm-agent-instance"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::~ConfigPmAgentInstance()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::has_data() const
{
    return (enterprise_prefix !=  nullptr && enterprise_prefix->has_data());
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::has_operation() const
{
    return is_set(yfilter)
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-pm-agent-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enterprise-prefix")
    {
        if(enterprise_prefix == nullptr)
        {
            enterprise_prefix = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix>();
        }
        return enterprise_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enterprise_prefix != nullptr)
    {
        children["enterprise-prefix"] = enterprise_prefix;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enterprise-prefix")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::EnterprisePrefix()
    :
    ipv4(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4>())
	,ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "enterprise-prefix"; yang_parent_name = "config-pm-agent-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::~EnterprisePrefix()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_children() const
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

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::Ipv4()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv4"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::~Ipv4()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::has_data() const
{
    return prefix_list.is_set;
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::Ipv6()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv6"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::~Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::has_data() const
{
    return prefix_list.is_set;
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Region::Region()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id>())
{
    id->parent = this;

    yang_name = "region"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Region::~Region()
{
}

bool Native::PmAgent::ConfigPmAgent::Region::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Region::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Region::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Region::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Region::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Region::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Region::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Region::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Region::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Region::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::Id()
{

    yang_name = "id"; yang_parent_name = "region"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::has_data() const
{
    for (std::size_t index=0; index<region_id_range.size(); index++)
    {
        if(region_id_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::has_operation() const
{
    for (std::size_t index=0; index<region_id_range.size(); index++)
    {
        if(region_id_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/region/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Region::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Region::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "region_id_range")
    {
        for(auto const & c : region_id_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange>();
        c->parent = this;
        region_id_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Region::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : region_id_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Region::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Region::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "region_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::RegionIdRange()
    :
    region_id_range{YType::uint32, "region_id_range"},
    name{YType::str, "name"}
{

    yang_name = "region_id_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::~RegionIdRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::has_data() const
{
    return region_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(region_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/region/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region_id_range" <<"[region_id_range='" <<region_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (region_id_range.is_set || is_set(region_id_range.yfilter)) leaf_name_data.push_back(region_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "region_id_range")
    {
        region_id_range = value;
        region_id_range.value_namespace = name_space;
        region_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "region_id_range")
    {
        region_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "region_id_range" || name == "name")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Site::Site()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id>())
{
    id->parent = this;

    yang_name = "site"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Site::~Site()
{
}

bool Native::PmAgent::ConfigPmAgent::Site::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Site::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::Id()
{

    yang_name = "id"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::has_data() const
{
    for (std::size_t index=0; index<site_id_range.size(); index++)
    {
        if(site_id_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::has_operation() const
{
    for (std::size_t index=0; index<site_id_range.size(); index++)
    {
        if(site_id_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Site::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Site::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "site_id_range")
    {
        for(auto const & c : site_id_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange>();
        c->parent = this;
        site_id_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Site::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : site_id_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Site::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Site::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::SiteIdRange()
    :
    site_id_range{YType::uint32, "site_id_range"},
    name{YType::str, "name"}
{

    yang_name = "site_id_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::~SiteIdRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::has_data() const
{
    return site_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/site/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site_id_range" <<"[site_id_range='" <<site_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_id_range.is_set || is_set(site_id_range.yfilter)) leaf_name_data.push_back(site_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site_id_range")
    {
        site_id_range = value;
        site_id_range.value_namespace = name_space;
        site_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site_id_range")
    {
        site_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site_id_range" || name == "name")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Tenant()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id>())
{
    id->parent = this;

    yang_name = "tenant"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Tenant::~Tenant()
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Tenant::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Tenant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Tenant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Tenant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Tenant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Tenant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::Id()
{

    yang_name = "id"; yang_parent_name = "tenant"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::has_data() const
{
    for (std::size_t index=0; index<tenant_id_range.size(); index++)
    {
        if(tenant_id_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::has_operation() const
{
    for (std::size_t index=0; index<tenant_id_range.size(); index++)
    {
        if(tenant_id_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/tenant/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Tenant::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Tenant::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tenant_id_range")
    {
        for(auto const & c : tenant_id_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange>();
        c->parent = this;
        tenant_id_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Tenant::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tenant_id_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::TenantIdRange()
    :
    tenant_id_range{YType::uint32, "tenant_id_range"},
    name{YType::str, "name"}
{

    yang_name = "tenant_id_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::~TenantIdRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::has_data() const
{
    return tenant_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/tenant/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant_id_range" <<"[tenant_id_range='" <<tenant_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant_id_range.is_set || is_set(tenant_id_range.yfilter)) leaf_name_data.push_back(tenant_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant_id_range")
    {
        tenant_id_range = value;
        tenant_id_range.value_namespace = name_space;
        tenant_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant_id_range")
    {
        tenant_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant_id_range" || name == "name")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Pmcs()
    :
    ipv4(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4>())
	,ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "pmcs"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::~Pmcs()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::get_children() const
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

void Native::PmAgent::ConfigPmAgent::Pmcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "pmcs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::~Ipv4()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::has_data() const
{
    for (std::size_t index=0; index<pmcs_ipv4.size(); index++)
    {
        if(pmcs_ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<pmcs_ipv4.size(); index++)
    {
        if(pmcs_ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmcs_ipv4")
    {
        for(auto const & c : pmcs_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4>();
        c->parent = this;
        pmcs_ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmcs_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmcs_ipv4")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::PmcsIpv4()
    :
    ipv4{YType::str, "ipv4"},
    backup{YType::empty, "backup"}
    	,
    ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "pmcs_ipv4"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::~PmcsIpv4()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::has_data() const
{
    return ipv4.is_set
	|| backup.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs_ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4" || name == "backup")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "pmcs_ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::~Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::has_data() const
{
    for (std::size_t index=0; index<pmcs_ipv6.size(); index++)
    {
        if(pmcs_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<pmcs_ipv6.size(); index++)
    {
        if(pmcs_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmcs_ipv6")
    {
        for(auto const & c : pmcs_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6>();
        c->parent = this;
        pmcs_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmcs_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmcs_ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::PmcsIpv6()
    :
    ipv6{YType::str, "ipv6"},
    backup{YType::empty, "backup"}
{

    yang_name = "pmcs_ipv6"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::~PmcsIpv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::has_data() const
{
    return ipv6.is_set
	|| backup.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs_ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "backup")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "pmcs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::~Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::has_data() const
{
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::Ipv6_()
    :
    ipv6{YType::str, "ipv6"},
    backup{YType::empty, "backup"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "ipv6"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::~Ipv6_()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::has_data() const
{
    return ipv6.is_set
	|| backup.is_set
	|| ipv4.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "backup" || name == "ipv4")
        return true;
    return false;
}

Native::Power::Power()
    :
    redundancy_mode{YType::enumeration, "redundancy-mode"},
    max_min{YType::enumeration, "max-min"},
    inputs{YType::uint8, "inputs"}
    	,
    inline_(nullptr) // presence node
{

    yang_name = "power"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::~Power()
{
}

bool Native::Power::has_data() const
{
    return redundancy_mode.is_set
	|| max_min.is_set
	|| inputs.is_set
	|| (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy_mode.yfilter)
	|| ydk::is_set(max_min.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Power::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy_mode.is_set || is_set(redundancy_mode.yfilter)) leaf_name_data.push_back(redundancy_mode.get_name_leafdata());
    if (max_min.is_set || is_set(max_min.yfilter)) leaf_name_data.push_back(max_min.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Power::Inline_>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inline_ != nullptr)
    {
        children["inline"] = inline_;
    }

    return children;
}

void Native::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy-mode")
    {
        redundancy_mode = value;
        redundancy_mode.value_namespace = name_space;
        redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-min")
    {
        max_min = value;
        max_min.value_namespace = name_space;
        max_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy-mode")
    {
        redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "max-min")
    {
        max_min.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
}

bool Native::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline" || name == "redundancy-mode" || name == "max-min" || name == "inputs")
        return true;
    return false;
}

Native::Power::Inline_::Inline_()
    :
    consumption(std::make_shared<Native::Power::Inline_::Consumption>())
	,logging(std::make_shared<Native::Power::Inline_::Logging>())
{
    consumption->parent = this;
    logging->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline_::~Inline_()
{
}

bool Native::Power::Inline_::has_data() const
{
    return (consumption !=  nullptr && consumption->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::Power::Inline_::has_operation() const
{
    return is_set(yfilter)
	|| (consumption !=  nullptr && consumption->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Power::Inline_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consumption")
    {
        if(consumption == nullptr)
        {
            consumption = std::make_shared<Native::Power::Inline_::Consumption>();
        }
        return consumption;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Power::Inline_::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(consumption != nullptr)
    {
        children["consumption"] = consumption;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::Power::Inline_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Power::Inline_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Power::Inline_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consumption" || name == "logging")
        return true;
    return false;
}

Native::Power::Inline_::Consumption::Consumption()
    :
    default_{YType::uint16, "default"}
{

    yang_name = "consumption"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline_::Consumption::~Consumption()
{
}

bool Native::Power::Inline_::Consumption::has_data() const
{
    return default_.is_set;
}

bool Native::Power::Inline_::Consumption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Power::Inline_::Consumption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline_::Consumption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consumption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline_::Consumption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline_::Consumption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline_::Consumption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Power::Inline_::Consumption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline_::Consumption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Power::Inline_::Consumption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Power::Inline_::Logging::Logging()
    :
    global{YType::empty, "global"}
{

    yang_name = "logging"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline_::Logging::~Logging()
{
}

bool Native::Power::Inline_::Logging::has_data() const
{
    return global.is_set;
}

bool Native::Power::Inline_::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Power::Inline_::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline_::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline_::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline_::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline_::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Power::Inline_::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline_::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Power::Inline_::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::NamedOrderingRouteMap::NamedOrderingRouteMap()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "named-ordering-route-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NamedOrderingRouteMap::~NamedOrderingRouteMap()
{
}

bool Native::NamedOrderingRouteMap::has_data() const
{
    return enable.is_set;
}

bool Native::NamedOrderingRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::NamedOrderingRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NamedOrderingRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-route-map:named-ordering-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NamedOrderingRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NamedOrderingRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NamedOrderingRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NamedOrderingRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NamedOrderingRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::NamedOrderingRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::AccessSession::AccessSession()
    :
    attributes(std::make_shared<Native::AccessSession::Attributes>())
	,mac_move(std::make_shared<Native::AccessSession::MacMove>())
{
    attributes->parent = this;
    mac_move->parent = this;

    yang_name = "access-session"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::~AccessSession()
{
}

bool Native::AccessSession::has_data() const
{
    return (attributes !=  nullptr && attributes->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool Native::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::AccessSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Native::AccessSession::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<Native::AccessSession::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void Native::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "mac-move")
        return true;
    return false;
}

Native::AccessSession::Attributes::Attributes()
    :
    filter_list(std::make_shared<Native::AccessSession::Attributes::FilterList>())
{
    filter_list->parent = this;

    yang_name = "attributes"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::Attributes::~Attributes()
{
}

bool Native::AccessSession::Attributes::has_data() const
{
    return (filter_list !=  nullptr && filter_list->has_data());
}

bool Native::AccessSession::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (filter_list !=  nullptr && filter_list->has_operation());
}

std::string Native::AccessSession::Attributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-list")
    {
        if(filter_list == nullptr)
        {
            filter_list = std::make_shared<Native::AccessSession::Attributes::FilterList>();
        }
        return filter_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter_list != nullptr)
    {
        children["filter-list"] = filter_list;
    }

    return children;
}

void Native::AccessSession::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-list")
        return true;
    return false;
}

Native::AccessSession::Attributes::FilterList::FilterList()
{

    yang_name = "filter-list"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::Attributes::FilterList::~FilterList()
{
}

bool Native::AccessSession::Attributes::FilterList::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::AccessSession::Attributes::FilterList::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::AccessSession::Attributes::FilterList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::Attributes::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::AccessSession::Attributes::FilterList::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::Attributes::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::AccessSession::Attributes::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::Attributes::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::Attributes::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::AccessSession::Attributes::FilterList::List::List()
    :
    name{YType::str, "name"},
    cdp{YType::empty, "cdp"},
    dhcp{YType::empty, "dhcp"},
    lldp{YType::empty, "lldp"}
{

    yang_name = "list"; yang_parent_name = "filter-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::Attributes::FilterList::List::~List()
{
}

bool Native::AccessSession::Attributes::FilterList::List::has_data() const
{
    return name.is_set
	|| cdp.is_set
	|| dhcp.is_set
	|| lldp.is_set;
}

bool Native::AccessSession::Attributes::FilterList::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(lldp.yfilter);
}

std::string Native::AccessSession::Attributes::FilterList::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/filter-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::FilterList::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::FilterList::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::Attributes::FilterList::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::Attributes::FilterList::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessSession::Attributes::FilterList::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AccessSession::Attributes::FilterList::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
}

bool Native::AccessSession::Attributes::FilterList::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "cdp" || name == "dhcp" || name == "lldp")
        return true;
    return false;
}

Native::AccessSession::MacMove::MacMove()
    :
    deny{YType::empty, "deny"}
{

    yang_name = "mac-move"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = false;
}

Native::AccessSession::MacMove::~MacMove()
{
}

bool Native::AccessSession::MacMove::has_data() const
{
    return deny.is_set;
}

bool Native::AccessSession::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny.yfilter);
}

std::string Native::AccessSession::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny.is_set || is_set(deny.yfilter)) leaf_name_data.push_back(deny.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::AccessSession::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessSession::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessSession::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny")
    {
        deny = value;
        deny.value_namespace = name_space;
        deny.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AccessSession::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny")
    {
        deny.yfilter = yfilter;
    }
}

bool Native::AccessSession::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny")
        return true;
    return false;
}

Native::Authentication::Authentication()
    :
    command(std::make_shared<Native::Authentication::Command>())
	,critical(std::make_shared<Native::Authentication::Critical>())
	,mac_move(std::make_shared<Native::Authentication::MacMove>())
{
    command->parent = this;
    critical->parent = this;
    mac_move->parent = this;

    yang_name = "authentication"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::~Authentication()
{
}

bool Native::Authentication::has_data() const
{
    return (command !=  nullptr && command->has_data())
	|| (critical !=  nullptr && critical->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool Native::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation())
	|| (critical !=  nullptr && critical->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Authentication::Command>();
        }
        return command;
    }

    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Authentication::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<Native::Authentication::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void Native::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "critical" || name == "mac-move")
        return true;
    return false;
}

Native::Authentication::Command::Command()
    :
    bounce_port(std::make_shared<Native::Authentication::Command::BouncePort>())
	,disable_port(std::make_shared<Native::Authentication::Command::DisablePort>())
{
    bounce_port->parent = this;
    disable_port->parent = this;

    yang_name = "command"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Command::~Command()
{
}

bool Native::Authentication::Command::has_data() const
{
    return (bounce_port !=  nullptr && bounce_port->has_data())
	|| (disable_port !=  nullptr && disable_port->has_data());
}

bool Native::Authentication::Command::has_operation() const
{
    return is_set(yfilter)
	|| (bounce_port !=  nullptr && bounce_port->has_operation())
	|| (disable_port !=  nullptr && disable_port->has_operation());
}

std::string Native::Authentication::Command::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bounce-port")
    {
        if(bounce_port == nullptr)
        {
            bounce_port = std::make_shared<Native::Authentication::Command::BouncePort>();
        }
        return bounce_port;
    }

    if(child_yang_name == "disable-port")
    {
        if(disable_port == nullptr)
        {
            disable_port = std::make_shared<Native::Authentication::Command::DisablePort>();
        }
        return disable_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bounce_port != nullptr)
    {
        children["bounce-port"] = bounce_port;
    }

    if(disable_port != nullptr)
    {
        children["disable-port"] = disable_port;
    }

    return children;
}

void Native::Authentication::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bounce-port" || name == "disable-port")
        return true;
    return false;
}

Native::Authentication::Command::BouncePort::BouncePort()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "bounce-port"; yang_parent_name = "command"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Command::BouncePort::~BouncePort()
{
}

bool Native::Authentication::Command::BouncePort::has_data() const
{
    return ignore.is_set;
}

bool Native::Authentication::Command::BouncePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Authentication::Command::BouncePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::BouncePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bounce-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::BouncePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Command::BouncePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Command::BouncePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::Command::BouncePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Command::BouncePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Authentication::Command::BouncePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Authentication::Command::DisablePort::DisablePort()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "disable-port"; yang_parent_name = "command"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Command::DisablePort::~DisablePort()
{
}

bool Native::Authentication::Command::DisablePort::has_data() const
{
    return ignore.is_set;
}

bool Native::Authentication::Command::DisablePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Authentication::Command::DisablePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::DisablePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::DisablePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Command::DisablePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Command::DisablePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::Command::DisablePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Command::DisablePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Authentication::Command::DisablePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Authentication::Critical::Critical()
    :
    recovery(std::make_shared<Native::Authentication::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Critical::~Critical()
{
}

bool Native::Authentication::Critical::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Authentication::Critical::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Authentication::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Authentication::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Authentication::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Authentication::Critical::Recovery::Recovery()
    :
    delay{YType::uint32, "delay"}
{

    yang_name = "recovery"; yang_parent_name = "critical"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Critical::Recovery::~Recovery()
{
}

bool Native::Authentication::Critical::Recovery::has_data() const
{
    return delay.is_set;
}

bool Native::Authentication::Critical::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Authentication::Critical::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/critical/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Critical::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::Critical::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Critical::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Authentication::Critical::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Authentication::MacMove::MacMove()
    :
    permit{YType::empty, "permit"}
{

    yang_name = "mac-move"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::MacMove::~MacMove()
{
}

bool Native::Authentication::MacMove::has_data() const
{
    return permit.is_set;
}

bool Native::Authentication::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permit.yfilter);
}

std::string Native::Authentication::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permit.is_set || is_set(permit.yfilter)) leaf_name_data.push_back(permit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit")
    {
        permit = value;
        permit.value_namespace = name_space;
        permit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit")
    {
        permit.yfilter = yfilter;
    }
}

bool Native::Authentication::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::ServiceList::ServiceList()
{

    yang_name = "service-list"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceList::~ServiceList()
{
}

bool Native::ServiceList::has_data() const
{
    for (std::size_t index=0; index<mdns_sd.size(); index++)
    {
        if(mdns_sd[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceList::has_operation() const
{
    for (std::size_t index=0; index<mdns_sd.size(); index++)
    {
        if(mdns_sd[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-discovery:service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdns-sd")
    {
        for(auto const & c : mdns_sd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceList::MdnsSd>();
        c->parent = this;
        mdns_sd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mdns_sd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-sd")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::MdnsSd()
    :
    service_list_name{YType::str, "service-list-name"}
    	,
    query(std::make_shared<Native::ServiceList::MdnsSd::Query>())
{
    query->parent = this;

    yang_name = "mdns-sd"; yang_parent_name = "service-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceList::MdnsSd::~MdnsSd()
{
}

bool Native::ServiceList::MdnsSd::has_data() const
{
    for (std::size_t index=0; index<deny.size(); index++)
    {
        if(deny[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<permit.size(); index++)
    {
        if(permit[index]->has_data())
            return true;
    }
    return service_list_name.is_set
	|| (query !=  nullptr && query->has_data());
}

bool Native::ServiceList::MdnsSd::has_operation() const
{
    for (std::size_t index=0; index<deny.size(); index++)
    {
        if(deny[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<permit.size(); index++)
    {
        if(permit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(service_list_name.yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::ServiceList::MdnsSd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-service-discovery:service-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceList::MdnsSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdns-sd" <<"[service-list-name='" <<service_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_list_name.is_set || is_set(service_list_name.yfilter)) leaf_name_data.push_back(service_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        for(auto const & c : deny)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceList::MdnsSd::Deny>();
        c->parent = this;
        deny.push_back(c);
        return c;
    }

    if(child_yang_name == "permit")
    {
        for(auto const & c : permit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceList::MdnsSd::Permit>();
        c->parent = this;
        permit.push_back(c);
        return c;
    }

    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::ServiceList::MdnsSd::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : deny)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : permit)
    {
        children[c->get_segment_path()] = c;
    }

    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::ServiceList::MdnsSd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-list-name")
    {
        service_list_name = value;
        service_list_name.value_namespace = name_space;
        service_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-list-name")
    {
        service_list_name.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "query" || name == "service-list-name")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Deny()
    :
    deny_pack{YType::uint8, "deny-pack"}
    	,
    match(std::make_shared<Native::ServiceList::MdnsSd::Deny::Match>())
{
    match->parent = this;

    yang_name = "deny"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::~Deny()
{
}

bool Native::ServiceList::MdnsSd::Deny::has_data() const
{
    return deny_pack.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::ServiceList::MdnsSd::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny_pack.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny" <<"[deny-pack='" <<deny_pack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.yfilter)) leaf_name_data.push_back(deny_pack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
        deny_pack.value_namespace = name_space;
        deny_pack.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-pack")
    {
        deny_pack.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "deny-pack")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::Match()
    :
    learnt_interface{YType::empty, "learnt-interface"},
    service_instance{YType::str, "service-instance"},
    service_type{YType::str, "service-type"}
    	,
    location(nullptr) // presence node
	,message_type(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::Match::~Match()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_data() const
{
    return learnt_interface.is_set
	|| service_instance.is_set
	|| service_type.is_set
	|| (location !=  nullptr && location->has_data())
	|| (message_type !=  nullptr && message_type->has_data());
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learnt_interface.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.yfilter)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match::Location>();
        }
        return location;
    }

    if(child_yang_name == "message-type")
    {
        if(message_type == nullptr)
        {
            message_type = std::make_shared<Native::ServiceList::MdnsSd::Deny::Match::MessageType>();
        }
        return message_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(message_type != nullptr)
    {
        children["message-type"] = message_type;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Deny::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
        learnt_interface.value_namespace = name_space;
        learnt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "message-type" || name == "learnt-interface" || name == "service-instance" || name == "service-type")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{

    yang_name = "location"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::Match::Location::~Location()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_data() const
{
    return civic.is_set;
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(civic.yfilter);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.yfilter)) leaf_name_data.push_back(civic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::Match::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::Match::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Deny::Match::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "civic")
    {
        civic = value;
        civic.value_namespace = name_space;
        civic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "civic")
    {
        civic.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    query{YType::empty, "query"},
    any{YType::empty, "any"}
{

    yang_name = "message-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_data() const
{
    return announcement.is_set
	|| query.is_set
	|| any.is_set;
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announcement.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.yfilter)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Deny::Match::MessageType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announcement")
    {
        announcement = value;
        announcement.value_namespace = name_space;
        announcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Deny::Match::MessageType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announcement")
    {
        announcement.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announcement" || name == "query" || name == "any")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Permit()
    :
    deny_pack{YType::uint8, "deny-pack"}
    	,
    match(std::make_shared<Native::ServiceList::MdnsSd::Permit::Match>())
{
    match->parent = this;

    yang_name = "permit"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::~Permit()
{
}

bool Native::ServiceList::MdnsSd::Permit::has_data() const
{
    return deny_pack.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::ServiceList::MdnsSd::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny_pack.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit" <<"[deny-pack='" <<deny_pack <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.yfilter)) leaf_name_data.push_back(deny_pack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
        deny_pack.value_namespace = name_space;
        deny_pack.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-pack")
    {
        deny_pack.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "deny-pack")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::Match()
    :
    learnt_interface{YType::empty, "learnt-interface"},
    service_instance{YType::str, "service-instance"},
    service_type{YType::str, "service-type"}
    	,
    location(nullptr) // presence node
	,message_type(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::Match::~Match()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_data() const
{
    return learnt_interface.is_set
	|| service_instance.is_set
	|| service_type.is_set
	|| (location !=  nullptr && location->has_data())
	|| (message_type !=  nullptr && message_type->has_data());
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learnt_interface.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.yfilter)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match::Location>();
        }
        return location;
    }

    if(child_yang_name == "message-type")
    {
        if(message_type == nullptr)
        {
            message_type = std::make_shared<Native::ServiceList::MdnsSd::Permit::Match::MessageType>();
        }
        return message_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(location != nullptr)
    {
        children["location"] = location;
    }

    if(message_type != nullptr)
    {
        children["message-type"] = message_type;
    }

    return children;
}

void Native::ServiceList::MdnsSd::Permit::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
        learnt_interface.value_namespace = name_space;
        learnt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "message-type" || name == "learnt-interface" || name == "service-instance" || name == "service-type")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{

    yang_name = "location"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::Match::Location::~Location()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_data() const
{
    return civic.is_set;
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(civic.yfilter);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.yfilter)) leaf_name_data.push_back(civic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::Match::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::Match::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Permit::Match::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "civic")
    {
        civic = value;
        civic.value_namespace = name_space;
        civic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "civic")
    {
        civic.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    query{YType::empty, "query"},
    any{YType::empty, "any"}
{

    yang_name = "message-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_data() const
{
    return announcement.is_set
	|| query.is_set
	|| any.is_set;
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announcement.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(any.yfilter);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.yfilter)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Permit::Match::MessageType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announcement")
    {
        announcement = value;
        announcement.value_namespace = name_space;
        announcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Permit::Match::MessageType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announcement")
    {
        announcement.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announcement" || name == "query" || name == "any")
        return true;
    return false;
}

Native::ServiceList::MdnsSd::Query::Query()
    :
    service_type{YType::str, "service-type"}
{

    yang_name = "query"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceList::MdnsSd::Query::~Query()
{
}

bool Native::ServiceList::MdnsSd::Query::has_data() const
{
    return service_type.is_set;
}

bool Native::ServiceList::MdnsSd::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_type.yfilter);
}

std::string Native::ServiceList::MdnsSd::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceList::MdnsSd::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceList::MdnsSd::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceList::MdnsSd::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceList::MdnsSd::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceList::MdnsSd::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
}

bool Native::ServiceList::MdnsSd::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-type")
        return true;
    return false;
}

Native::ServiceRouting::ServiceRouting()
    :
    capabilities_manager{YType::boolean, "capabilities-manager"},
    mdns_sd{YType::empty, "mdns-sd"}
{

    yang_name = "service-routing"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceRouting::~ServiceRouting()
{
}

bool Native::ServiceRouting::has_data() const
{
    return capabilities_manager.is_set
	|| mdns_sd.is_set;
}

bool Native::ServiceRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capabilities_manager.yfilter)
	|| ydk::is_set(mdns_sd.yfilter);
}

std::string Native::ServiceRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-routing:service-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_manager.is_set || is_set(capabilities_manager.yfilter)) leaf_name_data.push_back(capabilities_manager.get_name_leafdata());
    if (mdns_sd.is_set || is_set(mdns_sd.yfilter)) leaf_name_data.push_back(mdns_sd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capabilities-manager")
    {
        capabilities_manager = value;
        capabilities_manager.value_namespace = name_space;
        capabilities_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdns-sd")
    {
        mdns_sd = value;
        mdns_sd.value_namespace = name_space;
        mdns_sd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capabilities-manager")
    {
        capabilities_manager.yfilter = yfilter;
    }
    if(value_path == "mdns-sd")
    {
        mdns_sd.yfilter = yfilter;
    }
}

bool Native::ServiceRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities-manager" || name == "mdns-sd")
        return true;
    return false;
}

Native::NetworkPolicy::NetworkPolicy()
    :
    profile{YType::uint32, "profile"}
{

    yang_name = "network-policy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkPolicy::~NetworkPolicy()
{
}

bool Native::NetworkPolicy::has_data() const
{
    return profile.is_set;
}

bool Native::NetworkPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::NetworkPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:network-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::NetworkPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Energywise::Energywise()
{

    yang_name = "energywise"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Energywise::~Energywise()
{
}

bool Native::Energywise::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Energywise::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Energywise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Energywise::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::Energywise::Domain::Domain()
    :
    word{YType::str, "word"}
    	,
    security(std::make_shared<Native::Energywise::Domain::Security>())
{
    security->parent = this;

    yang_name = "domain"; yang_parent_name = "energywise"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Energywise::Domain::~Domain()
{
}

bool Native::Energywise::Domain::has_data() const
{
    return word.is_set
	|| (security !=  nullptr && security->has_data());
}

bool Native::Energywise::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Energywise::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:energywise/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Energywise::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Energywise::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Energywise::Domain::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Energywise::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Energywise::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Energywise::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Energywise::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "word")
        return true;
    return false;
}

Native::Energywise::Domain::Security::Security()
    :
    shared_secret(std::make_shared<Native::Energywise::Domain::Security::SharedSecret>())
{
    shared_secret->parent = this;

    yang_name = "security"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Energywise::Domain::Security::~Security()
{
}

bool Native::Energywise::Domain::Security::has_data() const
{
    return (shared_secret !=  nullptr && shared_secret->has_data());
}

bool Native::Energywise::Domain::Security::has_operation() const
{
    return is_set(yfilter)
	|| (shared_secret !=  nullptr && shared_secret->has_operation());
}

std::string Native::Energywise::Domain::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Energywise::Domain::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shared-secret")
    {
        if(shared_secret == nullptr)
        {
            shared_secret = std::make_shared<Native::Energywise::Domain::Security::SharedSecret>();
        }
        return shared_secret;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Energywise::Domain::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shared_secret != nullptr)
    {
        children["shared-secret"] = shared_secret;
    }

    return children;
}

void Native::Energywise::Domain::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::Domain::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::Domain::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-secret")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::SharedSecret()
{

    yang_name = "shared-secret"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Energywise::Domain::Security::SharedSecret::~SharedSecret()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::has_data() const
{
    for (std::size_t index=0; index<zero.size(); index++)
    {
        if(zero[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Energywise::Domain::Security::SharedSecret::has_operation() const
{
    for (std::size_t index=0; index<zero.size(); index++)
    {
        if(zero[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Energywise::Domain::Security::SharedSecret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Energywise::Domain::Security::SharedSecret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "zero")
    {
        for(auto const & c : zero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero>();
        c->parent = this;
        zero.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Energywise::Domain::Security::SharedSecret::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : zero)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Energywise::Domain::Security::SharedSecret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::Domain::Security::SharedSecret::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::Domain::Security::SharedSecret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zero")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Zero()
    :
    word{YType::str, "word"}
    	,
    protocol(std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol>())
{
    protocol->parent = this;

    yang_name = "zero"; yang_parent_name = "shared-secret"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::~Zero()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::has_data() const
{
    return word.is_set
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Energywise::Domain::Security::SharedSecret::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Energywise::Domain::Security::SharedSecret::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "word")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Protocol()
    :
    udp(std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp>())
{
    udp->parent = this;

    yang_name = "protocol"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::~Protocol()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::Udp()
    :
    port{YType::uint16, "port"},
    ip{YType::str, "ip"}
{

    yang_name = "udp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::~Udp()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_data() const
{
    return port.is_set
	|| ip.is_set;
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "ip")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::CiscoIOSXESwitchTemplate()
    :
    ip_camera_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE>())
	,lap_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE>())
	,ap_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE>())
	,dmp_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE>())
	,ip_phone_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE>())
	,msp_camera_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE>())
	,msp_vc_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE>())
	,printer_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE>())
	,router_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE>())
	,switch_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE>())
	,tp_interface_template(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE>())
{
    ip_camera_interface_template->parent = this;
    lap_interface_template->parent = this;
    ap_interface_template->parent = this;
    dmp_interface_template->parent = this;
    ip_phone_interface_template->parent = this;
    msp_camera_interface_template->parent = this;
    msp_vc_interface_template->parent = this;
    printer_interface_template->parent = this;
    router_interface_template->parent = this;
    switch_interface_template->parent = this;
    tp_interface_template->parent = this;

    yang_name = "Cisco-IOS-XE-switch_template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::~CiscoIOSXESwitchTemplate()
{
}

bool Native::CiscoIOSXESwitchTemplate::has_data() const
{
    return (ip_camera_interface_template !=  nullptr && ip_camera_interface_template->has_data())
	|| (lap_interface_template !=  nullptr && lap_interface_template->has_data())
	|| (ap_interface_template !=  nullptr && ap_interface_template->has_data())
	|| (dmp_interface_template !=  nullptr && dmp_interface_template->has_data())
	|| (ip_phone_interface_template !=  nullptr && ip_phone_interface_template->has_data())
	|| (msp_camera_interface_template !=  nullptr && msp_camera_interface_template->has_data())
	|| (msp_vc_interface_template !=  nullptr && msp_vc_interface_template->has_data())
	|| (printer_interface_template !=  nullptr && printer_interface_template->has_data())
	|| (router_interface_template !=  nullptr && router_interface_template->has_data())
	|| (switch_interface_template !=  nullptr && switch_interface_template->has_data())
	|| (tp_interface_template !=  nullptr && tp_interface_template->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::has_operation() const
{
    return is_set(yfilter)
	|| (ip_camera_interface_template !=  nullptr && ip_camera_interface_template->has_operation())
	|| (lap_interface_template !=  nullptr && lap_interface_template->has_operation())
	|| (ap_interface_template !=  nullptr && ap_interface_template->has_operation())
	|| (dmp_interface_template !=  nullptr && dmp_interface_template->has_operation())
	|| (ip_phone_interface_template !=  nullptr && ip_phone_interface_template->has_operation())
	|| (msp_camera_interface_template !=  nullptr && msp_camera_interface_template->has_operation())
	|| (msp_vc_interface_template !=  nullptr && msp_vc_interface_template->has_operation())
	|| (printer_interface_template !=  nullptr && printer_interface_template->has_operation())
	|| (router_interface_template !=  nullptr && router_interface_template->has_operation())
	|| (switch_interface_template !=  nullptr && switch_interface_template->has_operation())
	|| (tp_interface_template !=  nullptr && tp_interface_template->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IP_CAMERA_INTERFACE_TEMPLATE")
    {
        if(ip_camera_interface_template == nullptr)
        {
            ip_camera_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE>();
        }
        return ip_camera_interface_template;
    }

    if(child_yang_name == "LAP_INTERFACE_TEMPLATE")
    {
        if(lap_interface_template == nullptr)
        {
            lap_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE>();
        }
        return lap_interface_template;
    }

    if(child_yang_name == "AP_INTERFACE_TEMPLATE")
    {
        if(ap_interface_template == nullptr)
        {
            ap_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::APINTERFACETEMPLATE>();
        }
        return ap_interface_template;
    }

    if(child_yang_name == "DMP_INTERFACE_TEMPLATE")
    {
        if(dmp_interface_template == nullptr)
        {
            dmp_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::DMPINTERFACETEMPLATE>();
        }
        return dmp_interface_template;
    }

    if(child_yang_name == "IP_PHONE_INTERFACE_TEMPLATE")
    {
        if(ip_phone_interface_template == nullptr)
        {
            ip_phone_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPPHONEINTERFACETEMPLATE>();
        }
        return ip_phone_interface_template;
    }

    if(child_yang_name == "MSP_CAMERA_INTERFACE_TEMPLATE")
    {
        if(msp_camera_interface_template == nullptr)
        {
            msp_camera_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPCAMERAINTERFACETEMPLATE>();
        }
        return msp_camera_interface_template;
    }

    if(child_yang_name == "MSP_VC_INTERFACE_TEMPLATE")
    {
        if(msp_vc_interface_template == nullptr)
        {
            msp_vc_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::MSPVCINTERFACETEMPLATE>();
        }
        return msp_vc_interface_template;
    }

    if(child_yang_name == "PRINTER_INTERFACE_TEMPLATE")
    {
        if(printer_interface_template == nullptr)
        {
            printer_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::PRINTERINTERFACETEMPLATE>();
        }
        return printer_interface_template;
    }

    if(child_yang_name == "ROUTER_INTERFACE_TEMPLATE")
    {
        if(router_interface_template == nullptr)
        {
            router_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::ROUTERINTERFACETEMPLATE>();
        }
        return router_interface_template;
    }

    if(child_yang_name == "SWITCH_INTERFACE_TEMPLATE")
    {
        if(switch_interface_template == nullptr)
        {
            switch_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE>();
        }
        return switch_interface_template;
    }

    if(child_yang_name == "TP_INTERFACE_TEMPLATE")
    {
        if(tp_interface_template == nullptr)
        {
            tp_interface_template = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE>();
        }
        return tp_interface_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_camera_interface_template != nullptr)
    {
        children["IP_CAMERA_INTERFACE_TEMPLATE"] = ip_camera_interface_template;
    }

    if(lap_interface_template != nullptr)
    {
        children["LAP_INTERFACE_TEMPLATE"] = lap_interface_template;
    }

    if(ap_interface_template != nullptr)
    {
        children["AP_INTERFACE_TEMPLATE"] = ap_interface_template;
    }

    if(dmp_interface_template != nullptr)
    {
        children["DMP_INTERFACE_TEMPLATE"] = dmp_interface_template;
    }

    if(ip_phone_interface_template != nullptr)
    {
        children["IP_PHONE_INTERFACE_TEMPLATE"] = ip_phone_interface_template;
    }

    if(msp_camera_interface_template != nullptr)
    {
        children["MSP_CAMERA_INTERFACE_TEMPLATE"] = msp_camera_interface_template;
    }

    if(msp_vc_interface_template != nullptr)
    {
        children["MSP_VC_INTERFACE_TEMPLATE"] = msp_vc_interface_template;
    }

    if(printer_interface_template != nullptr)
    {
        children["PRINTER_INTERFACE_TEMPLATE"] = printer_interface_template;
    }

    if(router_interface_template != nullptr)
    {
        children["ROUTER_INTERFACE_TEMPLATE"] = router_interface_template;
    }

    if(switch_interface_template != nullptr)
    {
        children["SWITCH_INTERFACE_TEMPLATE"] = switch_interface_template;
    }

    if(tp_interface_template != nullptr)
    {
        children["TP_INTERFACE_TEMPLATE"] = tp_interface_template;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IP_CAMERA_INTERFACE_TEMPLATE" || name == "LAP_INTERFACE_TEMPLATE" || name == "AP_INTERFACE_TEMPLATE" || name == "DMP_INTERFACE_TEMPLATE" || name == "IP_PHONE_INTERFACE_TEMPLATE" || name == "MSP_CAMERA_INTERFACE_TEMPLATE" || name == "MSP_VC_INTERFACE_TEMPLATE" || name == "PRINTER_INTERFACE_TEMPLATE" || name == "ROUTER_INTERFACE_TEMPLATE" || name == "SWITCH_INTERFACE_TEMPLATE" || name == "TP_INTERFACE_TEMPLATE")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::IPCAMERAINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl>())
	,ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "IP_CAMERA_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::~IPCAMERAINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP_CAMERA_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block>())
	,port_security(nullptr) // presence node
	,access(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access>())
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return trunk.is_set
	|| access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast>())
	,action(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "action")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
	,bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/IP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::IPCAMERAINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::LAPINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl>())
	,ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip>())
{
    service_policy->parent = this;
    switchport->parent = this;
    storm_control->parent = this;
    ip->parent = this;

    yang_name = "LAP_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::~LAPINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LAP_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "switchport" || name == "spanning-tree" || name == "storm-control" || name == "ip" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "LAP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block>())
	,port_security(nullptr) // presence node
	,access(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access>())
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice>())
{
    mode->parent = this;
    block->parent = this;
    access->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "LAP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (access !=  nullptr && access->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (access !=  nullptr && access->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "block" || name == "port-security" || name == "access" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    trunk{YType::empty, "trunk"},
    access{YType::empty, "access"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return trunk.is_set
	|| access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk" || name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/LAP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::LAPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::bgp {0, "bgp"};
const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::isis {1, "isis"};

const Enum::YLeaf Native::Power::RedundancyMode::combined {0, "combined"};
const Enum::YLeaf Native::Power::RedundancyMode::redundant {1, "redundant"};

const Enum::YLeaf Native::Power::MaxMin::max {0, "max"};


}
}

