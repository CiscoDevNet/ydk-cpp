
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_155.hpp"
#include "Cisco_IOS_XE_native_156.hpp"
#include "Cisco_IOS_XE_native_157.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "per-port";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::has_data() const
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

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::has_operation() const
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
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All>();
        }
        return all;
    }

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
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber>();
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
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfacePortNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::get_children() const
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

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "interface-port-number";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::has_operation() const
{
    return is_set(operation)
	|| is_set(number_list.operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortNumberList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.operation)) leaf_name_data.push_back(number_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::get_children() const
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

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-list")
    {
        number_list = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "port-number-list";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::PortNumberList::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly>())
{
    daily->parent = this;

    on->parent = this;

    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::get_children() const
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

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "daily"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Daily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{
    yang_name = "on"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(hh_mm.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'On' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "Year")
    {
        year = value;
    }
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{
    yang_name = "weekly"; yang_parent_name = "all";
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hh_mm.operation);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weekly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.operation)) leaf_name_data.push_back(hh_mm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
    }
}

Native::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{
    yang_name = "lldp"; yang_parent_name = "native";
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
    return is_set(operation)
	|| is_set(run.operation);
}

std::string Native::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";

    return path_buffer.str();

}

const EntityPath Native::Lldp::get_entity_path(Entity* ancestor) const
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

    if (run.is_set || is_set(run.operation)) leaf_name_data.push_back(run.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "run")
    {
        run = value;
    }
}

Native::PmAgent::PmAgent()
    :
    config_pm_agent(std::make_shared<Native::PmAgent::ConfigPmAgent>())
{
    config_pm_agent->parent = this;

    yang_name = "pm-agent"; yang_parent_name = "native";
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
    return is_set(operation)
	|| (config_pm_agent !=  nullptr && config_pm_agent->has_operation());
}

std::string Native::PmAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pathmgr:pm-agent";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::get_entity_path(Entity* ancestor) const
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

void Native::PmAgent::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::ConfigPmAgent()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    device(std::make_shared<Native::PmAgent::ConfigPmAgent::Device>())
	,pmcs(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs>())
	,region(std::make_shared<Native::PmAgent::ConfigPmAgent::Region>())
	,site(std::make_shared<Native::PmAgent::ConfigPmAgent::Site>())
	,tenant(std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant>())
{
    device->parent = this;

    pmcs->parent = this;

    region->parent = this;

    site->parent = this;

    tenant->parent = this;

    yang_name = "config-pm-agent"; yang_parent_name = "pm-agent";
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
	|| (pmcs !=  nullptr && pmcs->has_data())
	|| (region !=  nullptr && region->has_data())
	|| (site !=  nullptr && site->has_data())
	|| (tenant !=  nullptr && tenant->has_data());
}

bool Native::PmAgent::ConfigPmAgent::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| (device !=  nullptr && device->has_operation())
	|| (pmcs !=  nullptr && pmcs->has_operation())
	|| (region !=  nullptr && region->has_operation())
	|| (site !=  nullptr && site->has_operation())
	|| (tenant !=  nullptr && tenant->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-pm-agent";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "pmcs")
    {
        if(pmcs == nullptr)
        {
            pmcs = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs>();
        }
        return pmcs;
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

    if(pmcs != nullptr)
    {
        children["pmcs"] = pmcs;
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

    return children;
}

void Native::PmAgent::ConfigPmAgent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::PmAgent::ConfigPmAgent::Device::Device()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id>())
	,type(std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type>())
{
    id->parent = this;

    type->parent = this;

    yang_name = "device"; yang_parent_name = "config-pm-agent";
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
    return is_set(operation)
	|| (id !=  nullptr && id->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Device::Id::Id()
{
    yang_name = "id"; yang_parent_name = "device";
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
    return is_set(operation);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range>();
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

void Native::PmAgent::ConfigPmAgent::Device::Id::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::Device_Range()
    :
    device_id_range{YType::uint32, "device_id_range"},
    name{YType::str, "name"}
{
    yang_name = "device_range"; yang_parent_name = "id";
}

Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::~Device_Range()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::has_data() const
{
    return device_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::has_operation() const
{
    return is_set(operation)
	|| is_set(device_id_range.operation)
	|| is_set(name.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device_range" <<"[device_id_range='" <<device_id_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id_range.is_set || is_set(device_id_range.operation)) leaf_name_data.push_back(device_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Id::Device_Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device_id_range")
    {
        device_id_range = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::PmAgent::ConfigPmAgent::Device::Type::Type()
    :
    pxtr{YType::empty, "pxtr"}
    	,
    ntr(nullptr) // presence node
	,rtr(nullptr) // presence node
	,xtr(nullptr) // presence node
{
    yang_name = "type"; yang_parent_name = "device";
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
    return is_set(operation)
	|| is_set(pxtr.operation)
	|| (ntr !=  nullptr && ntr->has_operation())
	|| (rtr !=  nullptr && rtr->has_operation())
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pxtr.is_set || is_set(pxtr.operation)) leaf_name_data.push_back(pxtr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pxtr")
    {
        pxtr = value;
    }
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Ntr()
    :
    rtr(nullptr) // presence node
	,xtr(nullptr) // presence node
{
    yang_name = "ntr"; yang_parent_name = "type";
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
    return is_set(operation)
	|| (rtr !=  nullptr && rtr->has_operation())
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntr";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::Rtr()
    :
    xtr{YType::empty, "xtr"}
{
    yang_name = "rtr"; yang_parent_name = "ntr";
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
    return is_set(operation)
	|| is_set(xtr.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/ntr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xtr.is_set || is_set(xtr.operation)) leaf_name_data.push_back(xtr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xtr")
    {
        xtr = value;
    }
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::Xtr()
    :
    rtr{YType::empty, "rtr"}
{
    yang_name = "xtr"; yang_parent_name = "ntr";
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
    return is_set(operation)
	|| is_set(rtr.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/ntr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr.is_set || is_set(rtr.operation)) leaf_name_data.push_back(rtr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rtr")
    {
        rtr = value;
    }
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Rtr()
    :
    ntr{YType::empty, "ntr"}
    	,
    xtr(nullptr) // presence node
{
    yang_name = "rtr"; yang_parent_name = "type";
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
    return is_set(operation)
	|| is_set(ntr.operation)
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.operation)) leaf_name_data.push_back(ntr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ntr")
    {
        ntr = value;
    }
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::Xtr()
    :
    ntr{YType::empty, "ntr"}
{
    yang_name = "xtr"; yang_parent_name = "rtr";
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
    return is_set(operation)
	|| is_set(ntr.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/rtr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.operation)) leaf_name_data.push_back(ntr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ntr")
    {
        ntr = value;
    }
}

Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::Xtr()
    :
    ntr{YType::empty, "ntr"},
    rtr{YType::empty, "rtr"}
{
    yang_name = "xtr"; yang_parent_name = "type";
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
    return is_set(operation)
	|| is_set(ntr.operation)
	|| is_set(rtr.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.operation)) leaf_name_data.push_back(ntr.get_name_leafdata());
    if (rtr.is_set || is_set(rtr.operation)) leaf_name_data.push_back(rtr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ntr")
    {
        ntr = value;
    }
    if(value_path == "rtr")
    {
        rtr = value;
    }
}

Native::PmAgent::ConfigPmAgent::InstanceId::InstanceId()
    :
    instance_id_range{YType::uint32, "instance_id_range"}
    	,
    config_pm_agent_instance(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance>())
{
    config_pm_agent_instance->parent = this;

    yang_name = "instance-id"; yang_parent_name = "config-pm-agent";
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
    return is_set(operation)
	|| is_set(instance_id_range.operation)
	|| (config_pm_agent_instance !=  nullptr && config_pm_agent_instance->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id" <<"[instance_id_range='" <<instance_id_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::InstanceId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id_range.is_set || is_set(instance_id_range.operation)) leaf_name_data.push_back(instance_id_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::InstanceId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance_id_range")
    {
        instance_id_range = value;
    }
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::ConfigPmAgentInstance()
    :
    enterprise_prefix(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix>())
{
    enterprise_prefix->parent = this;

    yang_name = "config-pm-agent-instance"; yang_parent_name = "instance-id";
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
    return is_set(operation)
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-pm-agent-instance";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigPmAgentInstance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::EnterprisePrefix()
    :
    ipv4(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4>())
	,ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "enterprise-prefix"; yang_parent_name = "config-pm-agent-instance";
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
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnterprisePrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::Ipv4()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "ipv4"; yang_parent_name = "enterprise-prefix";
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
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::Ipv6()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "ipv6"; yang_parent_name = "enterprise-prefix";
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
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::PmAgent::ConfigPmAgent::Region::Region()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id>())
{
    id->parent = this;

    yang_name = "region"; yang_parent_name = "config-pm-agent";
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
    return is_set(operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Region::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Region::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Region::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Region::Id::Id()
{
    yang_name = "id"; yang_parent_name = "region";
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
    return is_set(operation);
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Region::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/region/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range>();
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

void Native::PmAgent::ConfigPmAgent::Region::Id::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::Region_Id_Range()
    :
    region_id_range{YType::uint32, "region_id_range"},
    name{YType::str, "name"}
{
    yang_name = "region_id_range"; yang_parent_name = "id";
}

Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::~Region_Id_Range()
{
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::has_data() const
{
    return region_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::has_operation() const
{
    return is_set(operation)
	|| is_set(region_id_range.operation)
	|| is_set(name.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region_id_range" <<"[region_id_range='" <<region_id_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/region/id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (region_id_range.is_set || is_set(region_id_range.operation)) leaf_name_data.push_back(region_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Region::Id::Region_Id_Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "region_id_range")
    {
        region_id_range = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::PmAgent::ConfigPmAgent::Site::Site()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id>())
{
    id->parent = this;

    yang_name = "site"; yang_parent_name = "config-pm-agent";
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
    return is_set(operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Site::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Site::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Site::Id::Id()
{
    yang_name = "id"; yang_parent_name = "site";
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
    return is_set(operation);
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Site::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/site/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range>();
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

void Native::PmAgent::ConfigPmAgent::Site::Id::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::Site_Id_Range()
    :
    site_id_range{YType::uint32, "site_id_range"},
    name{YType::str, "name"}
{
    yang_name = "site_id_range"; yang_parent_name = "id";
}

Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::~Site_Id_Range()
{
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::has_data() const
{
    return site_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::has_operation() const
{
    return is_set(operation)
	|| is_set(site_id_range.operation)
	|| is_set(name.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site_id_range" <<"[site_id_range='" <<site_id_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/site/id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_id_range.is_set || is_set(site_id_range.operation)) leaf_name_data.push_back(site_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Site::Id::Site_Id_Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site_id_range")
    {
        site_id_range = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::PmAgent::ConfigPmAgent::Tenant::Tenant()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id>())
{
    id->parent = this;

    yang_name = "tenant"; yang_parent_name = "config-pm-agent";
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
    return is_set(operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Tenant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Tenant::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::Id()
{
    yang_name = "id"; yang_parent_name = "tenant";
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
    return is_set(operation);
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Tenant::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/tenant/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range>();
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

void Native::PmAgent::ConfigPmAgent::Tenant::Id::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::Tenant_Id_Range()
    :
    tenant_id_range{YType::uint32, "tenant_id_range"},
    name{YType::str, "name"}
{
    yang_name = "tenant_id_range"; yang_parent_name = "id";
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::~Tenant_Id_Range()
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::has_data() const
{
    return tenant_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::has_operation() const
{
    return is_set(operation)
	|| is_set(tenant_id_range.operation)
	|| is_set(name.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant_id_range" <<"[tenant_id_range='" <<tenant_id_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/tenant/id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant_id_range.is_set || is_set(tenant_id_range.operation)) leaf_name_data.push_back(tenant_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::Tenant_Id_Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tenant_id_range")
    {
        tenant_id_range = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::PmAgent::ConfigPmAgent::Pmcs::Pmcs()
    :
    ipv4(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4>())
	,ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "pmcs"; yang_parent_name = "config-pm-agent";
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
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Pmcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Pmcs::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "pmcs";
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
    return is_set(operation);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4>();
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

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Pmcs_Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    backup{YType::empty, "backup"}
    	,
    ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "pmcs_ipv4"; yang_parent_name = "ipv4";
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::~Pmcs_Ipv4()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::has_data() const
{
    return ipv4.is_set
	|| backup.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(backup.operation)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs_ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "backup")
    {
        backup = value;
    }
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Ipv6()
{
    yang_name = "ipv6"; yang_parent_name = "pmcs_ipv4";
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::~Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::has_data() const
{
    for (std::size_t index=0; index<pmcs_ipv6.size(); index++)
    {
        if(pmcs_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<pmcs_ipv6.size(); index++)
    {
        if(pmcs_ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6>();
        c->parent = this;
        pmcs_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmcs_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::Pmcs_Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    backup{YType::empty, "backup"}
{
    yang_name = "pmcs_ipv6"; yang_parent_name = "ipv6";
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::~Pmcs_Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::has_data() const
{
    return ipv6.is_set
	|| backup.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation)
	|| is_set(backup.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs_ipv6" <<"[ipv6='" <<ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmcs_Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Pmcs_Ipv4::Ipv6::Pmcs_Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "backup")
    {
        backup = value;
    }
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6()
{
    yang_name = "ipv6"; yang_parent_name = "pmcs";
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
    return is_set(operation);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::Ipv6_()
    :
    ipv6{YType::str, "ipv6"},
    backup{YType::empty, "backup"},
    ipv4{YType::str, "ipv4"}
{
    yang_name = "ipv6"; yang_parent_name = "ipv6";
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
    return is_set(operation)
	|| is_set(ipv6.operation)
	|| is_set(backup.operation)
	|| is_set(ipv4.operation);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "backup")
    {
        backup = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Power::Power()
    :
    inputs{YType::uint8, "inputs"},
    max_min{YType::enumeration, "max-min"},
    redundancy_mode{YType::enumeration, "redundancy-mode"}
    	,
    inline_(nullptr) // presence node
{
    yang_name = "power"; yang_parent_name = "native";
}

Native::Power::~Power()
{
}

bool Native::Power::has_data() const
{
    return inputs.is_set
	|| max_min.is_set
	|| redundancy_mode.is_set
	|| (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Power::has_operation() const
{
    return is_set(operation)
	|| is_set(inputs.operation)
	|| is_set(max_min.operation)
	|| is_set(redundancy_mode.operation)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";

    return path_buffer.str();

}

const EntityPath Native::Power::get_entity_path(Entity* ancestor) const
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

    if (inputs.is_set || is_set(inputs.operation)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (max_min.is_set || is_set(max_min.operation)) leaf_name_data.push_back(max_min.get_name_leafdata());
    if (redundancy_mode.is_set || is_set(redundancy_mode.operation)) leaf_name_data.push_back(redundancy_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Power::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inputs")
    {
        inputs = value;
    }
    if(value_path == "max-min")
    {
        max_min = value;
    }
    if(value_path == "redundancy-mode")
    {
        redundancy_mode = value;
    }
}

Native::Power::Inline_::Inline_()
    :
    consumption(std::make_shared<Native::Power::Inline_::Consumption>())
	,logging(std::make_shared<Native::Power::Inline_::Logging>())
{
    consumption->parent = this;

    logging->parent = this;

    yang_name = "inline"; yang_parent_name = "power";
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
    return is_set(operation)
	|| (consumption !=  nullptr && consumption->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Power::Inline_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";

    return path_buffer.str();

}

const EntityPath Native::Power::Inline_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Power::Inline_::set_value(const std::string & value_path, std::string value)
{
}

Native::Power::Inline_::Consumption::Consumption()
    :
    default_{YType::uint16, "default"}
{
    yang_name = "consumption"; yang_parent_name = "inline";
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
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string Native::Power::Inline_::Consumption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consumption";

    return path_buffer.str();

}

const EntityPath Native::Power::Inline_::Consumption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Power::Inline_::Consumption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Power::Inline_::Logging::Logging()
    :
    global{YType::empty, "global"}
{
    yang_name = "logging"; yang_parent_name = "inline";
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
    return is_set(operation)
	|| is_set(global.operation);
}

std::string Native::Power::Inline_::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Power::Inline_::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Power::Inline_::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global")
    {
        global = value;
    }
}

Native::AccessSession::AccessSession()
    :
    attributes(std::make_shared<Native::AccessSession::Attributes>())
	,mac_move(std::make_shared<Native::AccessSession::MacMove>())
{
    attributes->parent = this;

    mac_move->parent = this;

    yang_name = "access-session"; yang_parent_name = "native";
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
    return is_set(operation)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:access-session";

    return path_buffer.str();

}

const EntityPath Native::AccessSession::get_entity_path(Entity* ancestor) const
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

void Native::AccessSession::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessSession::Attributes::Attributes()
    :
    filter_list(std::make_shared<Native::AccessSession::Attributes::FilterList>())
{
    filter_list->parent = this;

    yang_name = "attributes"; yang_parent_name = "access-session";
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
    return is_set(operation)
	|| (filter_list !=  nullptr && filter_list->has_operation());
}

std::string Native::AccessSession::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

const EntityPath Native::AccessSession::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::AccessSession::Attributes::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessSession::Attributes::FilterList::FilterList()
{
    yang_name = "filter-list"; yang_parent_name = "attributes";
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
    return is_set(operation);
}

std::string Native::AccessSession::Attributes::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";

    return path_buffer.str();

}

const EntityPath Native::AccessSession::Attributes::FilterList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::AccessSession::Attributes::FilterList::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessSession::Attributes::FilterList::List::List()
    :
    name{YType::str, "name"},
    cdp{YType::empty, "cdp"},
    dhcp{YType::empty, "dhcp"},
    lldp{YType::empty, "lldp"}
{
    yang_name = "list"; yang_parent_name = "filter-list";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(cdp.operation)
	|| is_set(dhcp.operation)
	|| is_set(lldp.operation);
}

std::string Native::AccessSession::Attributes::FilterList::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::AccessSession::Attributes::FilterList::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/filter-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.operation)) leaf_name_data.push_back(lldp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::AccessSession::Attributes::FilterList::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "lldp")
    {
        lldp = value;
    }
}

Native::AccessSession::MacMove::MacMove()
    :
    deny{YType::empty, "deny"}
{
    yang_name = "mac-move"; yang_parent_name = "access-session";
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
    return is_set(operation)
	|| is_set(deny.operation);
}

std::string Native::AccessSession::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

const EntityPath Native::AccessSession::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny.is_set || is_set(deny.operation)) leaf_name_data.push_back(deny.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::AccessSession::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny")
    {
        deny = value;
    }
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

    yang_name = "authentication"; yang_parent_name = "native";
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
    return is_set(operation)
	|| (command !=  nullptr && command->has_operation())
	|| (critical !=  nullptr && critical->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";

    return path_buffer.str();

}

const EntityPath Native::Authentication::get_entity_path(Entity* ancestor) const
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

void Native::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Authentication::Command::Command()
    :
    bounce_port(std::make_shared<Native::Authentication::Command::BouncePort>())
	,disable_port(std::make_shared<Native::Authentication::Command::DisablePort>())
{
    bounce_port->parent = this;

    disable_port->parent = this;

    yang_name = "command"; yang_parent_name = "authentication";
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
    return is_set(operation)
	|| (bounce_port !=  nullptr && bounce_port->has_operation())
	|| (disable_port !=  nullptr && disable_port->has_operation());
}

std::string Native::Authentication::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";

    return path_buffer.str();

}

const EntityPath Native::Authentication::Command::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Authentication::Command::set_value(const std::string & value_path, std::string value)
{
}

Native::Authentication::Command::BouncePort::BouncePort()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "bounce-port"; yang_parent_name = "command";
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
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Authentication::Command::BouncePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bounce-port";

    return path_buffer.str();

}

const EntityPath Native::Authentication::Command::BouncePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Authentication::Command::BouncePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Authentication::Command::DisablePort::DisablePort()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "disable-port"; yang_parent_name = "command";
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
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Authentication::Command::DisablePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-port";

    return path_buffer.str();

}

const EntityPath Native::Authentication::Command::DisablePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Authentication::Command::DisablePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Authentication::Critical::Critical()
    :
    recovery(std::make_shared<Native::Authentication::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "authentication";
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
    return is_set(operation)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Authentication::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";

    return path_buffer.str();

}

const EntityPath Native::Authentication::Critical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Authentication::Critical::set_value(const std::string & value_path, std::string value)
{
}

Native::Authentication::Critical::Recovery::Recovery()
    :
    delay{YType::uint32, "delay"}
{
    yang_name = "recovery"; yang_parent_name = "critical";
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
    return is_set(operation)
	|| is_set(delay.operation);
}

std::string Native::Authentication::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::Authentication::Critical::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/critical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Authentication::Critical::Recovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::Authentication::MacMove::MacMove()
    :
    permit{YType::empty, "permit"}
{
    yang_name = "mac-move"; yang_parent_name = "authentication";
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
    return is_set(operation)
	|| is_set(permit.operation);
}

std::string Native::Authentication::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

const EntityPath Native::Authentication::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permit.is_set || is_set(permit.operation)) leaf_name_data.push_back(permit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Authentication::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit")
    {
        permit = value;
    }
}

Native::ServiceList::ServiceList()
{
    yang_name = "service-list"; yang_parent_name = "native";
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
    return is_set(operation);
}

std::string Native::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-discovery:service-list";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::get_entity_path(Entity* ancestor) const
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

void Native::ServiceList::set_value(const std::string & value_path, std::string value)
{
}

Native::ServiceList::MdnsSd::MdnsSd()
    :
    service_list_name{YType::str, "service-list-name"}
    	,
    query(std::make_shared<Native::ServiceList::MdnsSd::Query>())
{
    query->parent = this;

    yang_name = "mdns-sd"; yang_parent_name = "service-list";
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
    return is_set(operation)
	|| is_set(service_list_name.operation)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::ServiceList::MdnsSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdns-sd" <<"[service-list-name='" <<service_list_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-service-discovery:service-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_list_name.is_set || is_set(service_list_name.operation)) leaf_name_data.push_back(service_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-list-name")
    {
        service_list_name = value;
    }
}

Native::ServiceList::MdnsSd::Deny::Deny()
    :
    deny_pack{YType::uint8, "deny-pack"}
    	,
    match(std::make_shared<Native::ServiceList::MdnsSd::Deny::Match>())
{
    match->parent = this;

    yang_name = "deny"; yang_parent_name = "mdns-sd";
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
    return is_set(operation)
	|| is_set(deny_pack.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny" <<"[deny-pack='" <<deny_pack <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.operation)) leaf_name_data.push_back(deny_pack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
    }
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
    yang_name = "match"; yang_parent_name = "deny";
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
    return is_set(operation)
	|| is_set(learnt_interface.operation)
	|| is_set(service_instance.operation)
	|| is_set(service_type.operation)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Deny::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Deny::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.operation)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.operation)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.operation)) leaf_name_data.push_back(service_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Deny::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
    }
    if(value_path == "service-type")
    {
        service_type = value;
    }
}

Native::ServiceList::MdnsSd::Deny::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{
    yang_name = "location"; yang_parent_name = "match";
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
    return is_set(operation)
	|| is_set(civic.operation);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Deny::Match::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Location' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.operation)) leaf_name_data.push_back(civic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Deny::Match::Location::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "civic")
    {
        civic = value;
    }
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    any{YType::empty, "any"},
    query{YType::empty, "query"}
{
    yang_name = "message-type"; yang_parent_name = "match";
}

Native::ServiceList::MdnsSd::Deny::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_data() const
{
    return announcement.is_set
	|| any.is_set
	|| query.is_set;
}

bool Native::ServiceList::MdnsSd::Deny::Match::MessageType::has_operation() const
{
    return is_set(operation)
	|| is_set(announcement.operation)
	|| is_set(any.operation)
	|| is_set(query.operation);
}

std::string Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Deny::Match::MessageType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.operation)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (query.is_set || is_set(query.operation)) leaf_name_data.push_back(query.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Deny::Match::MessageType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announcement")
    {
        announcement = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "query")
    {
        query = value;
    }
}

Native::ServiceList::MdnsSd::Permit::Permit()
    :
    deny_pack{YType::uint8, "deny-pack"}
    	,
    match(std::make_shared<Native::ServiceList::MdnsSd::Permit::Match>())
{
    match->parent = this;

    yang_name = "permit"; yang_parent_name = "mdns-sd";
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
    return is_set(operation)
	|| is_set(deny_pack.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit" <<"[deny-pack='" <<deny_pack <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny_pack.is_set || is_set(deny_pack.operation)) leaf_name_data.push_back(deny_pack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-pack")
    {
        deny_pack = value;
    }
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
    yang_name = "match"; yang_parent_name = "permit";
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
    return is_set(operation)
	|| is_set(learnt_interface.operation)
	|| is_set(service_instance.operation)
	|| is_set(service_type.operation)
	|| (location !=  nullptr && location->has_operation())
	|| (message_type !=  nullptr && message_type->has_operation());
}

std::string Native::ServiceList::MdnsSd::Permit::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Permit::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learnt_interface.is_set || is_set(learnt_interface.operation)) leaf_name_data.push_back(learnt_interface.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.operation)) leaf_name_data.push_back(service_instance.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.operation)) leaf_name_data.push_back(service_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Permit::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "learnt-interface")
    {
        learnt_interface = value;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
    }
    if(value_path == "service-type")
    {
        service_type = value;
    }
}

Native::ServiceList::MdnsSd::Permit::Match::Location::Location()
    :
    civic{YType::str, "civic"}
{
    yang_name = "location"; yang_parent_name = "match";
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
    return is_set(operation)
	|| is_set(civic.operation);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Permit::Match::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Location' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (civic.is_set || is_set(civic.operation)) leaf_name_data.push_back(civic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Permit::Match::Location::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "civic")
    {
        civic = value;
    }
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::MessageType()
    :
    announcement{YType::empty, "announcement"},
    any{YType::empty, "any"},
    query{YType::empty, "query"}
{
    yang_name = "message-type"; yang_parent_name = "match";
}

Native::ServiceList::MdnsSd::Permit::Match::MessageType::~MessageType()
{
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_data() const
{
    return announcement.is_set
	|| any.is_set
	|| query.is_set;
}

bool Native::ServiceList::MdnsSd::Permit::Match::MessageType::has_operation() const
{
    return is_set(operation)
	|| is_set(announcement.operation)
	|| is_set(any.operation)
	|| is_set(query.operation);
}

std::string Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-type";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Permit::Match::MessageType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.operation)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (query.is_set || is_set(query.operation)) leaf_name_data.push_back(query.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Permit::Match::MessageType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announcement")
    {
        announcement = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "query")
    {
        query = value;
    }
}

Native::ServiceList::MdnsSd::Query::Query()
    :
    service_type{YType::str, "service-type"}
{
    yang_name = "query"; yang_parent_name = "mdns-sd";
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
    return is_set(operation)
	|| is_set(service_type.operation);
}

std::string Native::ServiceList::MdnsSd::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::ServiceList::MdnsSd::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Query' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.operation)) leaf_name_data.push_back(service_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceList::MdnsSd::Query::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-type")
    {
        service_type = value;
    }
}

Native::ServiceRouting::ServiceRouting()
    :
    capabilities_manager{YType::boolean, "capabilities-manager"}
{
    yang_name = "service-routing"; yang_parent_name = "native";
}

Native::ServiceRouting::~ServiceRouting()
{
}

bool Native::ServiceRouting::has_data() const
{
    return capabilities_manager.is_set;
}

bool Native::ServiceRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(capabilities_manager.operation);
}

std::string Native::ServiceRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-routing:service-routing";

    return path_buffer.str();

}

const EntityPath Native::ServiceRouting::get_entity_path(Entity* ancestor) const
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

    if (capabilities_manager.is_set || is_set(capabilities_manager.operation)) leaf_name_data.push_back(capabilities_manager.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::ServiceRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities-manager")
    {
        capabilities_manager = value;
    }
}

Native::NetworkPolicy::NetworkPolicy()
    :
    profile{YType::uint32, "profile"}
{
    yang_name = "network-policy"; yang_parent_name = "native";
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
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Native::NetworkPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:network-policy";

    return path_buffer.str();

}

const EntityPath Native::NetworkPolicy::get_entity_path(Entity* ancestor) const
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

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::NetworkPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Native::Energywise::Energywise()
{
    yang_name = "energywise"; yang_parent_name = "native";
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
    return is_set(operation);
}

std::string Native::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";

    return path_buffer.str();

}

const EntityPath Native::Energywise::get_entity_path(Entity* ancestor) const
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

void Native::Energywise::set_value(const std::string & value_path, std::string value)
{
}

Native::Energywise::Domain::Domain()
    :
    word{YType::str, "word"}
    	,
    security(std::make_shared<Native::Energywise::Domain::Security>())
{
    security->parent = this;

    yang_name = "domain"; yang_parent_name = "energywise";
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
    return is_set(operation)
	|| is_set(word.operation)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Energywise::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Energywise::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:energywise/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Energywise::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Energywise::Domain::Security::Security()
    :
    shared_secret(std::make_shared<Native::Energywise::Domain::Security::SharedSecret>())
{
    shared_secret->parent = this;

    yang_name = "security"; yang_parent_name = "domain";
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
    return is_set(operation)
	|| (shared_secret !=  nullptr && shared_secret->has_operation());
}

std::string Native::Energywise::Domain::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

const EntityPath Native::Energywise::Domain::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Energywise::Domain::Security::set_value(const std::string & value_path, std::string value)
{
}

Native::Energywise::Domain::Security::SharedSecret::SharedSecret()
{
    yang_name = "shared-secret"; yang_parent_name = "security";
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
    return is_set(operation);
}

std::string Native::Energywise::Domain::Security::SharedSecret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-secret";

    return path_buffer.str();

}

const EntityPath Native::Energywise::Domain::Security::SharedSecret::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedSecret' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Energywise::Domain::Security::SharedSecret::set_value(const std::string & value_path, std::string value)
{
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Zero()
    :
    word{YType::str, "word"}
    	,
    protocol(std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol>())
{
    protocol->parent = this;

    yang_name = "zero"; yang_parent_name = "shared-secret";
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
    return is_set(operation)
	|| is_set(word.operation)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Energywise::Domain::Security::SharedSecret::Zero::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Zero' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Energywise::Domain::Security::SharedSecret::Zero::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Protocol()
    :
    udp(std::make_shared<Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp>())
{
    udp->parent = this;

    yang_name = "protocol"; yang_parent_name = "zero";
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
    return is_set(operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::set_value(const std::string & value_path, std::string value)
{
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::Udp()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{
    yang_name = "udp"; yang_parent_name = "protocol";
}

Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::~Udp()
{
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(port.operation);
}

std::string Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Native::Template_::Template_()
    :
    ap_interface_template(std::make_shared<Native::Template_::Ap_Interface_Template>())
	,dmp_interface_template(std::make_shared<Native::Template_::Dmp_Interface_Template>())
	,ip_camera_interface_template(std::make_shared<Native::Template_::Ip_Camera_Interface_Template>())
	,ip_phone_interface_template(std::make_shared<Native::Template_::Ip_Phone_Interface_Template>())
	,lap_interface_template(std::make_shared<Native::Template_::Lap_Interface_Template>())
	,msp_camera_interface_template(std::make_shared<Native::Template_::Msp_Camera_Interface_Template>())
	,msp_vc_interface_template(std::make_shared<Native::Template_::Msp_Vc_Interface_Template>())
	,printer_interface_template(std::make_shared<Native::Template_::Printer_Interface_Template>())
	,router_interface_template(std::make_shared<Native::Template_::Router_Interface_Template>())
	,switch_interface_template(std::make_shared<Native::Template_::Switch_Interface_Template>())
	,tp_interface_template(std::make_shared<Native::Template_::Tp_Interface_Template>())
{
    ap_interface_template->parent = this;

    dmp_interface_template->parent = this;

    ip_camera_interface_template->parent = this;

    ip_phone_interface_template->parent = this;

    lap_interface_template->parent = this;

    msp_camera_interface_template->parent = this;

    msp_vc_interface_template->parent = this;

    printer_interface_template->parent = this;

    router_interface_template->parent = this;

    switch_interface_template->parent = this;

    tp_interface_template->parent = this;

    yang_name = "template"; yang_parent_name = "native";
}

Native::Template_::~Template_()
{
}

bool Native::Template_::has_data() const
{
    return (ap_interface_template !=  nullptr && ap_interface_template->has_data())
	|| (dmp_interface_template !=  nullptr && dmp_interface_template->has_data())
	|| (ip_camera_interface_template !=  nullptr && ip_camera_interface_template->has_data())
	|| (ip_phone_interface_template !=  nullptr && ip_phone_interface_template->has_data())
	|| (lap_interface_template !=  nullptr && lap_interface_template->has_data())
	|| (msp_camera_interface_template !=  nullptr && msp_camera_interface_template->has_data())
	|| (msp_vc_interface_template !=  nullptr && msp_vc_interface_template->has_data())
	|| (printer_interface_template !=  nullptr && printer_interface_template->has_data())
	|| (router_interface_template !=  nullptr && router_interface_template->has_data())
	|| (switch_interface_template !=  nullptr && switch_interface_template->has_data())
	|| (tp_interface_template !=  nullptr && tp_interface_template->has_data());
}

bool Native::Template_::has_operation() const
{
    return is_set(operation)
	|| (ap_interface_template !=  nullptr && ap_interface_template->has_operation())
	|| (dmp_interface_template !=  nullptr && dmp_interface_template->has_operation())
	|| (ip_camera_interface_template !=  nullptr && ip_camera_interface_template->has_operation())
	|| (ip_phone_interface_template !=  nullptr && ip_phone_interface_template->has_operation())
	|| (lap_interface_template !=  nullptr && lap_interface_template->has_operation())
	|| (msp_camera_interface_template !=  nullptr && msp_camera_interface_template->has_operation())
	|| (msp_vc_interface_template !=  nullptr && msp_vc_interface_template->has_operation())
	|| (printer_interface_template !=  nullptr && printer_interface_template->has_operation())
	|| (router_interface_template !=  nullptr && router_interface_template->has_operation())
	|| (switch_interface_template !=  nullptr && switch_interface_template->has_operation())
	|| (tp_interface_template !=  nullptr && tp_interface_template->has_operation());
}

std::string Native::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:template";

    return path_buffer.str();

}

const EntityPath Native::Template_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AP_INTERFACE_TEMPLATE")
    {
        if(ap_interface_template == nullptr)
        {
            ap_interface_template = std::make_shared<Native::Template_::Ap_Interface_Template>();
        }
        return ap_interface_template;
    }

    if(child_yang_name == "DMP_INTERFACE_TEMPLATE")
    {
        if(dmp_interface_template == nullptr)
        {
            dmp_interface_template = std::make_shared<Native::Template_::Dmp_Interface_Template>();
        }
        return dmp_interface_template;
    }

    if(child_yang_name == "IP_CAMERA_INTERFACE_TEMPLATE")
    {
        if(ip_camera_interface_template == nullptr)
        {
            ip_camera_interface_template = std::make_shared<Native::Template_::Ip_Camera_Interface_Template>();
        }
        return ip_camera_interface_template;
    }

    if(child_yang_name == "IP_PHONE_INTERFACE_TEMPLATE")
    {
        if(ip_phone_interface_template == nullptr)
        {
            ip_phone_interface_template = std::make_shared<Native::Template_::Ip_Phone_Interface_Template>();
        }
        return ip_phone_interface_template;
    }

    if(child_yang_name == "LAP_INTERFACE_TEMPLATE")
    {
        if(lap_interface_template == nullptr)
        {
            lap_interface_template = std::make_shared<Native::Template_::Lap_Interface_Template>();
        }
        return lap_interface_template;
    }

    if(child_yang_name == "MSP_CAMERA_INTERFACE_TEMPLATE")
    {
        if(msp_camera_interface_template == nullptr)
        {
            msp_camera_interface_template = std::make_shared<Native::Template_::Msp_Camera_Interface_Template>();
        }
        return msp_camera_interface_template;
    }

    if(child_yang_name == "MSP_VC_INTERFACE_TEMPLATE")
    {
        if(msp_vc_interface_template == nullptr)
        {
            msp_vc_interface_template = std::make_shared<Native::Template_::Msp_Vc_Interface_Template>();
        }
        return msp_vc_interface_template;
    }

    if(child_yang_name == "PRINTER_INTERFACE_TEMPLATE")
    {
        if(printer_interface_template == nullptr)
        {
            printer_interface_template = std::make_shared<Native::Template_::Printer_Interface_Template>();
        }
        return printer_interface_template;
    }

    if(child_yang_name == "ROUTER_INTERFACE_TEMPLATE")
    {
        if(router_interface_template == nullptr)
        {
            router_interface_template = std::make_shared<Native::Template_::Router_Interface_Template>();
        }
        return router_interface_template;
    }

    if(child_yang_name == "SWITCH_INTERFACE_TEMPLATE")
    {
        if(switch_interface_template == nullptr)
        {
            switch_interface_template = std::make_shared<Native::Template_::Switch_Interface_Template>();
        }
        return switch_interface_template;
    }

    if(child_yang_name == "TP_INTERFACE_TEMPLATE")
    {
        if(tp_interface_template == nullptr)
        {
            tp_interface_template = std::make_shared<Native::Template_::Tp_Interface_Template>();
        }
        return tp_interface_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ap_interface_template != nullptr)
    {
        children["AP_INTERFACE_TEMPLATE"] = ap_interface_template;
    }

    if(dmp_interface_template != nullptr)
    {
        children["DMP_INTERFACE_TEMPLATE"] = dmp_interface_template;
    }

    if(ip_camera_interface_template != nullptr)
    {
        children["IP_CAMERA_INTERFACE_TEMPLATE"] = ip_camera_interface_template;
    }

    if(ip_phone_interface_template != nullptr)
    {
        children["IP_PHONE_INTERFACE_TEMPLATE"] = ip_phone_interface_template;
    }

    if(lap_interface_template != nullptr)
    {
        children["LAP_INTERFACE_TEMPLATE"] = lap_interface_template;
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

void Native::Template_::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::Ip_Camera_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "IP_CAMERA_INTERFACE_TEMPLATE"; yang_parent_name = "template";
}

Native::Template_::Ip_Camera_Interface_Template::~Ip_Camera_Interface_Template()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::has_operation() const
{
    return is_set(operation)
	|| is_set(load_interval.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP_CAMERA_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE";
}

Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::get_children() const
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

void Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::~Switchport()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(nonegotiate.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(trunk.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(inactivity.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.operation)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(operation)
	|| is_set(restrict.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.operation)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restrict")
    {
        restrict = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE";
}

Native::Template_::Ip_Camera_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::SpanningTree::get_children() const
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

void Native::Template_::Ip_Camera_Interface_Template::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(network.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE";
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::~StormControl()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(b_unit.operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.operation)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Template_::Ip_Camera_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "IP_CAMERA_INTERFACE_TEMPLATE";
}

Native::Template_::Ip_Camera_Interface_Template::Ip::~Ip()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::has_operation() const
{
    return is_set(operation)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/IP_CAMERA_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ip_Camera_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Template_::Lap_Interface_Template::Lap_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::Template_::Lap_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::Template_::Lap_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::Template_::Lap_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "LAP_INTERFACE_TEMPLATE"; yang_parent_name = "template";
}

Native::Template_::Lap_Interface_Template::~Lap_Interface_Template()
{
}

bool Native::Template_::Lap_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::Template_::Lap_Interface_Template::has_operation() const
{
    return is_set(operation)
	|| is_set(load_interval.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LAP_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template_::Lap_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template_::Lap_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template_::Lap_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template_::Lap_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Template_::Lap_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template_::Lap_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::Template_::Lap_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::Template_::Lap_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template_::Lap_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template_::Lap_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template_::Lap_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template_::Lap_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::ServicePolicy::get_children() const
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

void Native::Template_::Lap_Interface_Template::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Template_::Lap_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::Template_::Lap_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Lap_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Lap_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Lap_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Template_::Lap_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::Template_::Lap_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Lap_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Lap_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::Template_::Lap_Interface_Template::Switchport::~Switchport()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template_::Lap_Interface_Template::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(nonegotiate.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Template_::Lap_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::Template_::Lap_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(trunk.operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Template_::Lap_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::Template_::Lap_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| is_set(time.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(inactivity.operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.operation)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(operation)
	|| is_set(restrict.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.operation)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restrict")
    {
        restrict = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::Template_::Lap_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Lap_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Lap_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::Template_::Lap_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::Template_::Lap_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Template_::Lap_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Template_::Lap_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Template_::Lap_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::Template_::Lap_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::Template_::Lap_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::Template_::Lap_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template_::Lap_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy.operation)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template_::Lap_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::SpanningTree::get_children() const
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

void Native::Template_::Lap_Interface_Template::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
}

Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(edge.operation)
	|| is_set(network.operation);
}

std::string Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.operation)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "edge")
    {
        edge = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

Native::Template_::Lap_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::Template_::Lap_Interface_Template::StormControl::~StormControl()
{
}

bool Native::Template_::Lap_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Template_::Lap_Interface_Template::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(b_unit.operation)
	|| is_set(threshold.operation);
}

std::string Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.operation)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Template_::Lap_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Template_::Lap_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::Template_::Lap_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template_::Lap_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Template_::Lap_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Template_::Lap_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template_::Lap_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "LAP_INTERFACE_TEMPLATE";
}

Native::Template_::Lap_Interface_Template::Ip::~Ip()
{
}

bool Native::Template_::Lap_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template_::Lap_Interface_Template::Ip::has_operation() const
{
    return is_set(operation)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template_::Lap_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Template_::Lap_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template_::Lap_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template_::Lap_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/LAP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Lap_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Template_::Ap_Interface_Template::Ap_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::Template_::Ap_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::Template_::Ap_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::Template_::Ap_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "AP_INTERFACE_TEMPLATE"; yang_parent_name = "template";
}

Native::Template_::Ap_Interface_Template::~Ap_Interface_Template()
{
}

bool Native::Template_::Ap_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::Template_::Ap_Interface_Template::has_operation() const
{
    return is_set(operation)
	|| is_set(load_interval.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::Template_::Ap_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AP_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Template_::Ap_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Template_::Ap_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Template_::Ap_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Template_::Ap_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::Template_::Ap_Interface_Template::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

Native::Template_::Ap_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::Template_::Ap_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::Template_::Ap_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "AP_INTERFACE_TEMPLATE";
}

Native::Template_::Ap_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::Template_::Ap_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Template_::Ap_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Template_::Ap_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Template_::Ap_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Template_::Ap_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::ServicePolicy::get_children() const
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

void Native::Template_::Ap_Interface_Template::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Template_::Ap_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Template_::Ap_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::Template_::Ap_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Ap_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Ap_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/AP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ap_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Ap_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Template_::Ap_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::Template_::Ap_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::Template_::Ap_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation);
}

std::string Native::Template_::Ap_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/AP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ap_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

Native::Template_::Ap_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "AP_INTERFACE_TEMPLATE";
}

Native::Template_::Ap_Interface_Template::Switchport::~Switchport()
{
}

bool Native::Template_::Ap_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Template_::Ap_Interface_Template::Switchport::has_operation() const
{
    return is_set(operation)
	|| is_set(nonegotiate.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Template_::Ap_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/AP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Template_::Ap_Interface_Template::Switchport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
}

Native::Template_::Ap_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::Template_::Ap_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::Template_::Ap_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::Template_::Ap_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(trunk.operation);
}

std::string Native::Template_::Ap_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ap_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Template_::Ap_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::Template_::Ap_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::Template_::Ap_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::Template_::Ap_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Template_::Ap_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Template_::Ap_Interface_Template::Switchport::Block::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(operation)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:template/AP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::Template_::Ap_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Power::RedundancyModeEnum::combined {0, "combined"};
const Enum::YLeaf Native::Power::RedundancyModeEnum::redundant {1, "redundant"};

const Enum::YLeaf Native::Power::MaxMinEnum::max {0, "max"};


}
}

