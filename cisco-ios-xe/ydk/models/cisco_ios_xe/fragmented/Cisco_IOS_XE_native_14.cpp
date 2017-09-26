
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_14.hpp"
#include "Cisco_IOS_XE_native_15.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::On()
    :
    day_of_month{YType::uint16, "day-of-month"},
    hh_mm{YType::str, "hh-mm"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "Year"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::has_data() const
{
    return day_of_month.is_set
	|| hh_mm.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(hh_mm.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day-of-month" || name == "hh-mm" || name == "month" || name == "Year")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Domain::Domain()
    :
    name{YType::str, "name"}
{

    yang_name = "domain"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Domain::~Domain()
{
}

bool Native::Domain::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Domain::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Domain::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Domain::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    border(std::make_shared<Native::Domain::Vrf::Border>())
	,master(std::make_shared<Native::Domain::Vrf::Master>())
{
    border->parent = this;
    master->parent = this;

    yang_name = "vrf"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::~Vrf()
{
}

bool Native::Domain::Vrf::has_data() const
{
    return name.is_set
	|| (border !=  nullptr && border->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Domain::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (border !=  nullptr && border->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Domain::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Domain::Vrf::Border>();
        }
        return border;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Domain::Vrf::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    return children;
}

void Native::Domain::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "master" || name == "name")
        return true;
    return false;
}

Native::Domain::Vrf::Border::Border()
    :
    master{YType::str, "master"}
    	,
    password(std::make_shared<Native::Domain::Vrf::Border::Password>())
	,source_interface(std::make_shared<Native::Domain::Vrf::Border::SourceInterface>())
{
    password->parent = this;
    source_interface->parent = this;

    yang_name = "border"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Border::~Border()
{
}

bool Native::Domain::Vrf::Border::has_data() const
{
    return master.is_set
	|| (password !=  nullptr && password->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Domain::Vrf::Border::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter)
	|| (password !=  nullptr && password->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Domain::Vrf::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Domain::Vrf::Border::Password>();
        }
        return password;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Domain::Vrf::Border::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Domain::Vrf::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "source-interface" || name == "master")
        return true;
    return false;
}

Native::Domain::Vrf::Border::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "password"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Border::Password::~Password()
{
}

bool Native::Domain::Vrf::Border::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Domain::Vrf::Border::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::Domain::Vrf::Border::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Border::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Border::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Border::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Border::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::Domain::Vrf::Border::SourceInterface::SourceInterface()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "source-interface"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Border::SourceInterface::~SourceInterface()
{
}

bool Native::Domain::Vrf::Border::SourceInterface::has_data() const
{
    return loopback.is_set;
}

bool Native::Domain::Vrf::Border::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Domain::Vrf::Border::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Border::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Border::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Border::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Border::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Master()
    :
    branch{YType::empty, "branch"},
    hub{YType::empty, "hub"},
    hub_ip{YType::str, "hub-ip"},
    transit{YType::empty, "transit"}
    	,
    advanced(std::make_shared<Native::Domain::Vrf::Master::Advanced>())
	,collector(std::make_shared<Native::Domain::Vrf::Master::Collector>())
	,enterprise_prefix(std::make_shared<Native::Domain::Vrf::Master::EnterprisePrefix>())
	,load_balance(nullptr) // presence node
	,password(std::make_shared<Native::Domain::Vrf::Master::Password>())
	,site_prefixes(std::make_shared<Native::Domain::Vrf::Master::SitePrefixes>())
	,source_interface(std::make_shared<Native::Domain::Vrf::Master::SourceInterface>())
{
    advanced->parent = this;
    collector->parent = this;
    enterprise_prefix->parent = this;
    password->parent = this;
    site_prefixes->parent = this;
    source_interface->parent = this;

    yang_name = "master"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::~Master()
{
}

bool Native::Domain::Vrf::Master::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return branch.is_set
	|| hub.is_set
	|| hub_ip.is_set
	|| transit.is_set
	|| (advanced !=  nullptr && advanced->has_data())
	|| (collector !=  nullptr && collector->has_data())
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (site_prefixes !=  nullptr && site_prefixes->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Domain::Vrf::Master::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(branch.yfilter)
	|| ydk::is_set(hub.yfilter)
	|| ydk::is_set(hub_ip.yfilter)
	|| ydk::is_set(transit.yfilter)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (collector !=  nullptr && collector->has_operation())
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (site_prefixes !=  nullptr && site_prefixes->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Domain::Vrf::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (branch.is_set || is_set(branch.yfilter)) leaf_name_data.push_back(branch.get_name_leafdata());
    if (hub.is_set || is_set(hub.yfilter)) leaf_name_data.push_back(hub.get_name_leafdata());
    if (hub_ip.is_set || is_set(hub_ip.yfilter)) leaf_name_data.push_back(hub_ip.get_name_leafdata());
    if (transit.is_set || is_set(transit.yfilter)) leaf_name_data.push_back(transit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::Domain::Vrf::Master::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Domain::Vrf::Master::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "collector")
    {
        if(collector == nullptr)
        {
            collector = std::make_shared<Native::Domain::Vrf::Master::Collector>();
        }
        return collector;
    }

    if(child_yang_name == "enterprise-prefix")
    {
        if(enterprise_prefix == nullptr)
        {
            enterprise_prefix = std::make_shared<Native::Domain::Vrf::Master::EnterprisePrefix>();
        }
        return enterprise_prefix;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Domain::Vrf::Master::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Domain::Vrf::Master::Password>();
        }
        return password;
    }

    if(child_yang_name == "site-prefixes")
    {
        if(site_prefixes == nullptr)
        {
            site_prefixes = std::make_shared<Native::Domain::Vrf::Master::SitePrefixes>();
        }
        return site_prefixes;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Domain::Vrf::Master::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advanced != nullptr)
    {
        children["advanced"] = advanced;
    }

    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    if(collector != nullptr)
    {
        children["collector"] = collector;
    }

    if(enterprise_prefix != nullptr)
    {
        children["enterprise-prefix"] = enterprise_prefix;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(site_prefixes != nullptr)
    {
        children["site-prefixes"] = site_prefixes;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Domain::Vrf::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "branch")
    {
        branch = value;
        branch.value_namespace = name_space;
        branch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hub")
    {
        hub = value;
        hub.value_namespace = name_space;
        hub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hub-ip")
    {
        hub_ip = value;
        hub_ip.value_namespace = name_space;
        hub_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit")
    {
        transit = value;
        transit.value_namespace = name_space;
        transit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "branch")
    {
        branch.yfilter = yfilter;
    }
    if(value_path == "hub")
    {
        hub.yfilter = yfilter;
    }
    if(value_path == "hub-ip")
    {
        hub_ip.yfilter = yfilter;
    }
    if(value_path == "transit")
    {
        transit.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "class" || name == "collector" || name == "enterprise-prefix" || name == "load-balance" || name == "password" || name == "site-prefixes" || name == "source-interface" || name == "branch" || name == "hub" || name == "hub-ip" || name == "transit")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::Advanced()
    :
    byte_loss_threshold{YType::uint16, "byte-loss-threshold"},
    channel_unreachable_timer{YType::uint16, "channel-unreachable-timer"},
    load_sharing{YType::empty, "load-sharing"},
    minimum_mask_length{YType::uint8, "minimum-mask-length"},
    mitigation_mode{YType::enumeration, "mitigation-mode"},
    packet_loss_threshold{YType::uint8, "packet-loss-threshold"},
    threshold_variance{YType::uint8, "threshold-variance"},
    transit_site_affinity{YType::empty, "transit-site-affinity"}
    	,
    smart_probes(std::make_shared<Native::Domain::Vrf::Master::Advanced::SmartProbes>())
	,syslog(std::make_shared<Native::Domain::Vrf::Master::Advanced::Syslog>())
	,tcp(std::make_shared<Native::Domain::Vrf::Master::Advanced::Tcp>())
	,traffic_class_ageout_timer(std::make_shared<Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer>())
{
    smart_probes->parent = this;
    syslog->parent = this;
    tcp->parent = this;
    traffic_class_ageout_timer->parent = this;

    yang_name = "advanced"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Advanced::~Advanced()
{
}

bool Native::Domain::Vrf::Master::Advanced::has_data() const
{
    return byte_loss_threshold.is_set
	|| channel_unreachable_timer.is_set
	|| load_sharing.is_set
	|| minimum_mask_length.is_set
	|| mitigation_mode.is_set
	|| packet_loss_threshold.is_set
	|| threshold_variance.is_set
	|| transit_site_affinity.is_set
	|| (smart_probes !=  nullptr && smart_probes->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (traffic_class_ageout_timer !=  nullptr && traffic_class_ageout_timer->has_data());
}

bool Native::Domain::Vrf::Master::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_loss_threshold.yfilter)
	|| ydk::is_set(channel_unreachable_timer.yfilter)
	|| ydk::is_set(load_sharing.yfilter)
	|| ydk::is_set(minimum_mask_length.yfilter)
	|| ydk::is_set(mitigation_mode.yfilter)
	|| ydk::is_set(packet_loss_threshold.yfilter)
	|| ydk::is_set(threshold_variance.yfilter)
	|| ydk::is_set(transit_site_affinity.yfilter)
	|| (smart_probes !=  nullptr && smart_probes->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (traffic_class_ageout_timer !=  nullptr && traffic_class_ageout_timer->has_operation());
}

std::string Native::Domain::Vrf::Master::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_loss_threshold.is_set || is_set(byte_loss_threshold.yfilter)) leaf_name_data.push_back(byte_loss_threshold.get_name_leafdata());
    if (channel_unreachable_timer.is_set || is_set(channel_unreachable_timer.yfilter)) leaf_name_data.push_back(channel_unreachable_timer.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (minimum_mask_length.is_set || is_set(minimum_mask_length.yfilter)) leaf_name_data.push_back(minimum_mask_length.get_name_leafdata());
    if (mitigation_mode.is_set || is_set(mitigation_mode.yfilter)) leaf_name_data.push_back(mitigation_mode.get_name_leafdata());
    if (packet_loss_threshold.is_set || is_set(packet_loss_threshold.yfilter)) leaf_name_data.push_back(packet_loss_threshold.get_name_leafdata());
    if (threshold_variance.is_set || is_set(threshold_variance.yfilter)) leaf_name_data.push_back(threshold_variance.get_name_leafdata());
    if (transit_site_affinity.is_set || is_set(transit_site_affinity.yfilter)) leaf_name_data.push_back(transit_site_affinity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "smart-probes")
    {
        if(smart_probes == nullptr)
        {
            smart_probes = std::make_shared<Native::Domain::Vrf::Master::Advanced::SmartProbes>();
        }
        return smart_probes;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Domain::Vrf::Master::Advanced::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Domain::Vrf::Master::Advanced::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-class-ageout-timer")
    {
        if(traffic_class_ageout_timer == nullptr)
        {
            traffic_class_ageout_timer = std::make_shared<Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer>();
        }
        return traffic_class_ageout_timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(smart_probes != nullptr)
    {
        children["smart-probes"] = smart_probes;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(traffic_class_ageout_timer != nullptr)
    {
        children["traffic-class-ageout-timer"] = traffic_class_ageout_timer;
    }

    return children;
}

void Native::Domain::Vrf::Master::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-loss-threshold")
    {
        byte_loss_threshold = value;
        byte_loss_threshold.value_namespace = name_space;
        byte_loss_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-unreachable-timer")
    {
        channel_unreachable_timer = value;
        channel_unreachable_timer.value_namespace = name_space;
        channel_unreachable_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-mask-length")
    {
        minimum_mask_length = value;
        minimum_mask_length.value_namespace = name_space;
        minimum_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mitigation-mode")
    {
        mitigation_mode = value;
        mitigation_mode.value_namespace = name_space;
        mitigation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-threshold")
    {
        packet_loss_threshold = value;
        packet_loss_threshold.value_namespace = name_space;
        packet_loss_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-variance")
    {
        threshold_variance = value;
        threshold_variance.value_namespace = name_space;
        threshold_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-site-affinity")
    {
        transit_site_affinity = value;
        transit_site_affinity.value_namespace = name_space;
        transit_site_affinity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-loss-threshold")
    {
        byte_loss_threshold.yfilter = yfilter;
    }
    if(value_path == "channel-unreachable-timer")
    {
        channel_unreachable_timer.yfilter = yfilter;
    }
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
    if(value_path == "minimum-mask-length")
    {
        minimum_mask_length.yfilter = yfilter;
    }
    if(value_path == "mitigation-mode")
    {
        mitigation_mode.yfilter = yfilter;
    }
    if(value_path == "packet-loss-threshold")
    {
        packet_loss_threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-variance")
    {
        threshold_variance.yfilter = yfilter;
    }
    if(value_path == "transit-site-affinity")
    {
        transit_site_affinity.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "smart-probes" || name == "syslog" || name == "tcp" || name == "traffic-class-ageout-timer" || name == "byte-loss-threshold" || name == "channel-unreachable-timer" || name == "load-sharing" || name == "minimum-mask-length" || name == "mitigation-mode" || name == "packet-loss-threshold" || name == "threshold-variance" || name == "transit-site-affinity")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::SmartProbes::SmartProbes()
    :
    destination_port{YType::uint16, "destination-port"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "smart-probes"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Advanced::SmartProbes::~SmartProbes()
{
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_data() const
{
    return destination_port.is_set
	|| source_port.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::SmartProbes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smart-probes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::SmartProbes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::SmartProbes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::SmartProbes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::SmartProbes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::SmartProbes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port" || name == "source-port")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::Syslog::Syslog()
    :
    tca_time_min{YType::uint32, "tca-time-min"}
{

    yang_name = "syslog"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Advanced::Syslog::~Syslog()
{
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_data() const
{
    return tca_time_min.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tca_time_min.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tca_time_min.is_set || is_set(tca_time_min.yfilter)) leaf_name_data.push_back(tca_time_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tca-time-min")
    {
        tca_time_min = value;
        tca_time_min.value_namespace = name_space;
        tca_time_min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tca-time-min")
    {
        tca_time_min.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tca-time-min")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::Tcp::Tcp()
    :
    mc_port{YType::uint16, "mc-port"}
{

    yang_name = "tcp"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Advanced::Tcp::~Tcp()
{
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_data() const
{
    return mc_port.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mc_port.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_port.is_set || is_set(mc_port.yfilter)) leaf_name_data.push_back(mc_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mc-port")
    {
        mc_port = value;
        mc_port.value_namespace = name_space;
        mc_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mc-port")
    {
        mc_port.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-port")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::TrafficClassAgeoutTimer()
    :
    interval{YType::uint16, "interval"},
    interval_unit{YType::enumeration, "interval-unit"}
{

    yang_name = "traffic-class-ageout-timer"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::~TrafficClassAgeoutTimer()
{
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_data() const
{
    return interval.is_set
	|| interval_unit.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(interval_unit.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class-ageout-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (interval_unit.is_set || is_set(interval_unit.yfilter)) leaf_name_data.push_back(interval_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit")
    {
        interval_unit = value;
        interval_unit.value_namespace = name_space;
        interval_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "interval-unit")
    {
        interval_unit.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "interval-unit")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class_::Class_()
    :
    name{YType::str, "name"},
    sequence{YType::uint16, "sequence"}
    	,
    match(std::make_shared<Native::Domain::Vrf::Master::Class_::Match>())
	,path_preference(std::make_shared<Native::Domain::Vrf::Master::Class_::PathPreference>())
{
    match->parent = this;
    path_preference->parent = this;

    yang_name = "class"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Class_::~Class_()
{
}

bool Native::Domain::Vrf::Master::Class_::has_data() const
{
    return name.is_set
	|| sequence.is_set
	|| (match !=  nullptr && match->has_data())
	|| (path_preference !=  nullptr && path_preference->has_data());
}

bool Native::Domain::Vrf::Master::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (path_preference !=  nullptr && path_preference->has_operation());
}

std::string Native::Domain::Vrf::Master::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Domain::Vrf::Master::Class_::Match>();
        }
        return match;
    }

    if(child_yang_name == "path-preference")
    {
        if(path_preference == nullptr)
        {
            path_preference = std::make_shared<Native::Domain::Vrf::Master::Class_::PathPreference>();
        }
        return path_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(path_preference != nullptr)
    {
        children["path-preference"] = path_preference;
    }

    return children;
}

void Native::Domain::Vrf::Master::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "path-preference" || name == "name" || name == "sequence")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class_::Match::Match()
{

    yang_name = "match"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Class_::Match::~Match()
{
}

bool Native::Domain::Vrf::Master::Class_::Match::has_data() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Domain::Vrf::Master::Class_::Match::has_operation() const
{
    for (std::size_t index=0; index<dscp.size(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Domain::Vrf::Master::Class_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        for(auto const & c : dscp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Domain::Vrf::Master::Class_::Match::Dscp>();
        c->parent = this;
        dscp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dscp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Domain::Vrf::Master::Class_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Domain::Vrf::Master::Class_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Domain::Vrf::Master::Class_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class_::Match::Dscp::Dscp()
    :
    value_{YType::str, "value"},
    policy{YType::enumeration, "policy"}
{

    yang_name = "dscp"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Class_::Match::Dscp::~Dscp()
{
}

bool Native::Domain::Vrf::Master::Class_::Match::Dscp::has_data() const
{
    return value_.is_set
	|| policy.is_set;
}

bool Native::Domain::Vrf::Master::Class_::Match::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Domain::Vrf::Master::Class_::Match::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp" <<"[value='" <<value_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class_::Match::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::Match::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::Match::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Class_::Match::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Class_::Match::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class_::Match::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "policy")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class_::PathPreference::PathPreference()
    :
    fallback{YType::str, "fallback"},
    primary{YType::str, "primary"}
{

    yang_name = "path-preference"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Class_::PathPreference::~PathPreference()
{
}

bool Native::Domain::Vrf::Master::Class_::PathPreference::has_data() const
{
    for (auto const & leaf : fallback.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : primary.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Domain::Vrf::Master::Class_::PathPreference::has_operation() const
{
    for (auto const & leaf : fallback.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : primary.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Domain::Vrf::Master::Class_::PathPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class_::PathPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto fallback_name_datas = fallback.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fallback_name_datas.begin(), fallback_name_datas.end());
    auto primary_name_datas = primary.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), primary_name_datas.begin(), primary_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Class_::PathPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Class_::PathPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Class_::PathPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fallback")
    {
        fallback.append(value);
    }
    if(value_path == "primary")
    {
        primary.append(value);
    }
}

void Native::Domain::Vrf::Master::Class_::PathPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class_::PathPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "primary")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Collector::Collector()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "collector"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Collector::~Collector()
{
}

bool Native::Domain::Vrf::Master::Collector::has_data() const
{
    return ip.is_set
	|| port.is_set;
}

bool Native::Domain::Vrf::Master::Collector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Domain::Vrf::Master::Collector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Collector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Collector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Collector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Collector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Collector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Collector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

Native::Domain::Vrf::Master::EnterprisePrefix::EnterprisePrefix()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "enterprise-prefix"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::EnterprisePrefix::~EnterprisePrefix()
{
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_data() const
{
    return prefix_list.is_set;
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Domain::Vrf::Master::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::EnterprisePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::EnterprisePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::EnterprisePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::EnterprisePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::EnterprisePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Domain::Vrf::Master::LoadBalance::LoadBalance()
    :
    advanced{YType::empty, "advanced"}
{

    yang_name = "load-balance"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::LoadBalance::~LoadBalance()
{
}

bool Native::Domain::Vrf::Master::LoadBalance::has_data() const
{
    return advanced.is_set;
}

bool Native::Domain::Vrf::Master::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advanced.yfilter);
}

std::string Native::Domain::Vrf::Master::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advanced.is_set || is_set(advanced.yfilter)) leaf_name_data.push_back(advanced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advanced")
    {
        advanced = value;
        advanced.value_namespace = name_space;
        advanced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advanced")
    {
        advanced.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "password"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::Password::~Password()
{
}

bool Native::Domain::Vrf::Master::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Domain::Vrf::Master::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::Domain::Vrf::Master::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::Domain::Vrf::Master::SitePrefixes::SitePrefixes()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "site-prefixes"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::SitePrefixes::~SitePrefixes()
{
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_data() const
{
    return prefix_list.is_set;
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Domain::Vrf::Master::SitePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::SitePrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::SitePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::SitePrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::SitePrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::SitePrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Domain::Vrf::Master::SourceInterface::SourceInterface()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "source-interface"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Domain::Vrf::Master::SourceInterface::~SourceInterface()
{
}

bool Native::Domain::Vrf::Master::SourceInterface::has_data() const
{
    return loopback.is_set;
}

bool Native::Domain::Vrf::Master::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Domain::Vrf::Master::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Domain::Vrf::Master::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Domain::Vrf::Master::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Domain::Vrf::Master::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Dot1X::Dot1X()
    :
    system_auth_control{YType::empty, "Cisco-IOS-XE-dot1x:system-auth-control"}
    	,
    critical(std::make_shared<Native::Dot1X::Critical>())
	,supplicant(std::make_shared<Native::Dot1X::Supplicant>())
	,test(std::make_shared<Native::Dot1X::Test>())
{
    critical->parent = this;
    supplicant->parent = this;
    test->parent = this;

    yang_name = "dot1x"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::~Dot1X()
{
}

bool Native::Dot1X::has_data() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_data())
            return true;
    }
    return system_auth_control.is_set
	|| (critical !=  nullptr && critical->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (test !=  nullptr && test->has_data());
}

bool Native::Dot1X::has_operation() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(system_auth_control.yfilter)
	|| (critical !=  nullptr && critical->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Dot1X::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_auth_control.is_set || is_set(system_auth_control.yfilter)) leaf_name_data.push_back(system_auth_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "credentials")
    {
        for(auto const & c : credentials)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Dot1X::Credentials>();
        c->parent = this;
        credentials.push_back(c);
        return c;
    }

    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Dot1X::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Dot1X::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Dot1X::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : credentials)
    {
        children[c->get_segment_path()] = c;
    }

    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(supplicant != nullptr)
    {
        children["supplicant"] = supplicant;
    }

    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-auth-control")
    {
        system_auth_control = value;
        system_auth_control.value_namespace = name_space;
        system_auth_control.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-auth-control")
    {
        system_auth_control.yfilter = yfilter;
    }
}

bool Native::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "credentials" || name == "critical" || name == "supplicant" || name == "test" || name == "system-auth-control")
        return true;
    return false;
}

Native::Dot1X::Credentials::Credentials()
    :
    profile_name{YType::str, "profile-name"},
    pki_trustpoint{YType::str, "pki-trustpoint"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Dot1X::Credentials::Password>())
{
    password->parent = this;

    yang_name = "credentials"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Credentials::~Credentials()
{
}

bool Native::Dot1X::Credentials::has_data() const
{
    return profile_name.is_set
	|| pki_trustpoint.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Dot1X::Credentials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(pki_trustpoint.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Dot1X::Credentials::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Credentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:credentials" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Credentials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Dot1X::Credentials::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Dot1X::Credentials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
        pki_trustpoint.value_namespace = name_space;
        pki_trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Credentials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Dot1X::Credentials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "profile-name" || name == "pki-trustpoint" || name == "username")
        return true;
    return false;
}

Native::Dot1X::Credentials::Password::Password()
    :
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "password"; yang_parent_name = "credentials"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Dot1X::Credentials::Password::~Password()
{
}

bool Native::Dot1X::Credentials::Password::has_data() const
{
    return secret.is_set
	|| type.is_set;
}

bool Native::Dot1X::Credentials::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Dot1X::Credentials::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Credentials::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Credentials::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Credentials::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Dot1X::Credentials::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secret" || name == "type")
        return true;
    return false;
}

Native::Dot1X::Critical::Critical()
    :
    eapol{YType::empty, "eapol"}
    	,
    recovery(std::make_shared<Native::Dot1X::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Critical::~Critical()
{
}

bool Native::Dot1X::Critical::has_data() const
{
    return eapol.is_set
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Dot1X::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Dot1X::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Dot1X::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Dot1X::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
}

bool Native::Dot1X::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery" || name == "eapol")
        return true;
    return false;
}

Native::Dot1X::Critical::Recovery::Recovery()
    :
    delay{YType::uint16, "delay"}
{

    yang_name = "recovery"; yang_parent_name = "critical"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Critical::Recovery::~Recovery()
{
}

bool Native::Dot1X::Critical::Recovery::has_data() const
{
    return delay.is_set;
}

bool Native::Dot1X::Critical::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Dot1X::Critical::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/Cisco-IOS-XE-dot1x:critical/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Critical::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Critical::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Critical::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Dot1X::Critical::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Dot1X::Supplicant::Supplicant()
    :
    force_multicast{YType::empty, "force-multicast"}
{

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Supplicant::~Supplicant()
{
}

bool Native::Dot1X::Supplicant::has_data() const
{
    return force_multicast.is_set;
}

bool Native::Dot1X::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_multicast.yfilter);
}

std::string Native::Dot1X::Supplicant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_multicast.is_set || is_set(force_multicast.yfilter)) leaf_name_data.push_back(force_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-multicast")
    {
        force_multicast = value;
        force_multicast.value_namespace = name_space;
        force_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-multicast")
    {
        force_multicast.yfilter = yfilter;
    }
}

bool Native::Dot1X::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force-multicast")
        return true;
    return false;
}

Native::Dot1X::Test::Test()
    :
    timeout{YType::uint16, "timeout"}
{

    yang_name = "test"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Dot1X::Test::~Test()
{
}

bool Native::Dot1X::Test::has_data() const
{
    return timeout.is_set;
}

bool Native::Dot1X::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Dot1X::Test::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dot1X::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dot1X::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Dot1X::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dot1X::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Dot1X::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Eap::Eap()
{

    yang_name = "eap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
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
    path_buffer << "profile" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Eap::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.yfilter)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());

    return leaf_name_data;

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
    md5{YType::empty, "md5"},
    mschapv2{YType::empty, "mschapv2"},
    peap{YType::empty, "peap"},
    tls{YType::empty, "tls"}
{

    yang_name = "method"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast.yfilter)
	|| ydk::is_set(gtc.yfilter)
	|| ydk::is_set(leap.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(mschapv2.yfilter)
	|| ydk::is_set(peap.yfilter)
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
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (mschapv2.is_set || is_set(mschapv2.yfilter)) leaf_name_data.push_back(mschapv2.get_name_leafdata());
    if (peap.is_set || is_set(peap.yfilter)) leaf_name_data.push_back(peap.get_name_leafdata());
    if (tls.is_set || is_set(tls.yfilter)) leaf_name_data.push_back(tls.get_name_leafdata());

    return leaf_name_data;

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
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "mschapv2")
    {
        mschapv2.yfilter = yfilter;
    }
    if(value_path == "peap")
    {
        peap.yfilter = yfilter;
    }
    if(value_path == "tls")
    {
        tls.yfilter = yfilter;
    }
}

bool Native::Eap::Profile::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast" || name == "gtc" || name == "leap" || name == "md5" || name == "mschapv2" || name == "peap" || name == "tls")
        return true;
    return false;
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

    yang_name = "enable"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
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
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "password"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
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
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

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

void Native::Enable::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Enable::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "secret" || name == "type")
        return true;
    return false;
}

Native::Enable::Secret::Secret()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{

    yang_name = "secret"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
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
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

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

void Native::Enable::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Enable::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Enable::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "secret" || name == "type")
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
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
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

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

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
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Energywise::Domain::Security::SharedSecret::Zero::Protocol::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

Native::Epm::Epm()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "epm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Epm::~Epm()
{
}

bool Native::Epm::has_data() const
{
    return logging.is_set;
}

bool Native::Epm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Epm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Epm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Epm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Epm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Epm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Epm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Epm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Epm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::Errdisable::Errdisable()
    :
    detect(std::make_shared<Native::Errdisable::Detect>())
	,flap_setting(std::make_shared<Native::Errdisable::FlapSetting>())
	,recovery(std::make_shared<Native::Errdisable::Recovery>())
{
    detect->parent = this;
    flap_setting->parent = this;
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::~Errdisable()
{
}

bool Native::Errdisable::has_data() const
{
    return (detect !=  nullptr && detect->has_data())
	|| (flap_setting !=  nullptr && flap_setting->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (detect !=  nullptr && detect->has_operation())
	|| (flap_setting !=  nullptr && flap_setting->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Errdisable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Errdisable::Detect>();
        }
        return detect;
    }

    if(child_yang_name == "flap-setting")
    {
        if(flap_setting == nullptr)
        {
            flap_setting = std::make_shared<Native::Errdisable::FlapSetting>();
        }
        return flap_setting;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detect != nullptr)
    {
        children["detect"] = detect;
    }

    if(flap_setting != nullptr)
    {
        children["flap-setting"] = flap_setting;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detect" || name == "flap-setting" || name == "recovery")
        return true;
    return false;
}

Native::Errdisable::Detect::Detect()
    :
    cause(std::make_shared<Native::Errdisable::Detect::Cause>())
{
    cause->parent = this;

    yang_name = "detect"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::~Detect()
{
}

bool Native::Errdisable::Detect::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Detect::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Detect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Detect::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    loopback{YType::empty, "loopback"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"}
    	,
    security_violation(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>())
{
    security_violation->parent = this;

    yang_name = "cause"; yang_parent_name = "detect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::Cause::~Cause()
{
}

bool Native::Errdisable::Detect::Cause::has_data() const
{
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| loopback.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| pppoe_ia_rate_limit.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| (security_violation !=  nullptr && security_violation->has_data());
}

bool Native::Errdisable::Detect::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| (security_violation !=  nullptr && security_violation->has_operation());
}

std::string Native::Errdisable::Detect::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-violation")
    {
        if(security_violation == nullptr)
        {
            security_violation = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>();
        }
        return security_violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_violation != nullptr)
    {
        children["security-violation"] = security_violation;
    }

    return children;
}

void Native::Errdisable::Detect::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-violation" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "loopback" || name == "mlacp-minlink" || name == "pagp-flap" || name == "pppoe-ia-rate-limit" || name == "sfp-config-mismatch" || name == "small-frame")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::SecurityViolation()
    :
    shutdown(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>())
{
    shutdown->parent = this;

    yang_name = "security-violation"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::~SecurityViolation()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_data() const
{
    return (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_operation() const
{
    return is_set(yfilter)
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::SecurityViolation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::SecurityViolation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::Shutdown()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "shutdown"; yang_parent_name = "security-violation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::~Shutdown()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_data() const
{
    return vlan.is_set;
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/security-violation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::FlapSetting()
    :
    cause(std::make_shared<Native::Errdisable::FlapSetting::Cause>())
{
    cause->parent = this;

    yang_name = "flap-setting"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::~FlapSetting()
{
}

bool Native::Errdisable::FlapSetting::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::FlapSetting::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::FlapSetting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap-setting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::FlapSetting::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::FlapSetting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::Cause()
    :
    dtp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>())
	,link_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>())
	,pagp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>())
{
    dtp_flap->parent = this;
    link_flap->parent = this;
    pagp_flap->parent = this;

    yang_name = "cause"; yang_parent_name = "flap-setting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::~Cause()
{
}

bool Native::Errdisable::FlapSetting::Cause::has_data() const
{
    return (dtp_flap !=  nullptr && dtp_flap->has_data())
	|| (link_flap !=  nullptr && link_flap->has_data())
	|| (pagp_flap !=  nullptr && pagp_flap->has_data());
}

bool Native::Errdisable::FlapSetting::Cause::has_operation() const
{
    return is_set(yfilter)
	|| (dtp_flap !=  nullptr && dtp_flap->has_operation())
	|| (link_flap !=  nullptr && link_flap->has_operation())
	|| (pagp_flap !=  nullptr && pagp_flap->has_operation());
}

std::string Native::Errdisable::FlapSetting::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dtp-flap")
    {
        if(dtp_flap == nullptr)
        {
            dtp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>();
        }
        return dtp_flap;
    }

    if(child_yang_name == "link-flap")
    {
        if(link_flap == nullptr)
        {
            link_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>();
        }
        return link_flap;
    }

    if(child_yang_name == "pagp-flap")
    {
        if(pagp_flap == nullptr)
        {
            pagp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>();
        }
        return pagp_flap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dtp_flap != nullptr)
    {
        children["dtp-flap"] = dtp_flap;
    }

    if(link_flap != nullptr)
    {
        children["link-flap"] = link_flap;
    }

    if(pagp_flap != nullptr)
    {
        children["pagp-flap"] = pagp_flap;
    }

    return children;
}

void Native::Errdisable::FlapSetting::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dtp-flap" || name == "link-flap" || name == "pagp-flap")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::DtpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "dtp-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::~DtpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::DtpFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::DtpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dtp-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::DtpFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::LinkFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "link-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::~LinkFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::LinkFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::LinkFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::LinkFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::PagpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "pagp-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::~PagpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::PagpFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::PagpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::PagpFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
    	,
    cause(std::make_shared<Native::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Recovery::~Recovery()
{
}

bool Native::Errdisable::Recovery::has_data() const
{
    return interval.is_set
	|| (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause" || name == "interval")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    channel_misconfig{YType::empty, "channel-misconfig"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    link_monitor_failure{YType::empty, "link-monitor-failure"},
    loopback{YType::empty, "loopback"},
    mac_limit{YType::empty, "mac-limit"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    port_mode_failure{YType::empty, "port-mode-failure"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    psecure_violation{YType::empty, "psecure-violation"},
    psp{YType::empty, "psp"},
    security_violation{YType::empty, "security-violation"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"},
    storm_control{YType::empty, "storm-control"},
    udld{YType::empty, "udld"},
    unicast_flood{YType::empty, "unicast-flood"},
    vmps{YType::empty, "vmps"}
    	,
    oam_remote_failure(nullptr) // presence node
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Errdisable::Recovery::Cause::has_data() const
{
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| channel_misconfig.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| link_monitor_failure.is_set
	|| loopback.is_set
	|| mac_limit.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| port_mode_failure.is_set
	|| pppoe_ia_rate_limit.is_set
	|| psecure_violation.is_set
	|| psp.is_set
	|| security_violation.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| storm_control.is_set
	|| udld.is_set
	|| unicast_flood.is_set
	|| vmps.is_set
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_data());
}

bool Native::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(channel_misconfig.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(link_monitor_failure.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(port_mode_failure.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(psecure_violation.yfilter)
	|| ydk::is_set(psp.yfilter)
	|| ydk::is_set(security_violation.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| ydk::is_set(storm_control.yfilter)
	|| ydk::is_set(udld.yfilter)
	|| ydk::is_set(unicast_flood.yfilter)
	|| ydk::is_set(vmps.yfilter)
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_operation());
}

std::string Native::Errdisable::Recovery::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (channel_misconfig.is_set || is_set(channel_misconfig.yfilter)) leaf_name_data.push_back(channel_misconfig.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (link_monitor_failure.is_set || is_set(link_monitor_failure.yfilter)) leaf_name_data.push_back(link_monitor_failure.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (port_mode_failure.is_set || is_set(port_mode_failure.yfilter)) leaf_name_data.push_back(port_mode_failure.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (psecure_violation.is_set || is_set(psecure_violation.yfilter)) leaf_name_data.push_back(psecure_violation.get_name_leafdata());
    if (psp.is_set || is_set(psp.yfilter)) leaf_name_data.push_back(psp.get_name_leafdata());
    if (security_violation.is_set || is_set(security_violation.yfilter)) leaf_name_data.push_back(security_violation.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());
    if (storm_control.is_set || is_set(storm_control.yfilter)) leaf_name_data.push_back(storm_control.get_name_leafdata());
    if (udld.is_set || is_set(udld.yfilter)) leaf_name_data.push_back(udld.get_name_leafdata());
    if (unicast_flood.is_set || is_set(unicast_flood.yfilter)) leaf_name_data.push_back(unicast_flood.get_name_leafdata());
    if (vmps.is_set || is_set(vmps.yfilter)) leaf_name_data.push_back(vmps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam-remote-failure")
    {
        if(oam_remote_failure == nullptr)
        {
            oam_remote_failure = std::make_shared<Native::Errdisable::Recovery::Cause::OamRemoteFailure>();
        }
        return oam_remote_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam_remote_failure != nullptr)
    {
        children["oam-remote-failure"] = oam_remote_failure;
    }

    return children;
}

void Native::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig = value;
        channel_misconfig.value_namespace = name_space;
        channel_misconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure = value;
        link_monitor_failure.value_namespace = name_space;
        link_monitor_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure = value;
        port_mode_failure.value_namespace = name_space;
        port_mode_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation = value;
        psecure_violation.value_namespace = name_space;
        psecure_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psp")
    {
        psp = value;
        psp.value_namespace = name_space;
        psp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-violation")
    {
        security_violation = value;
        security_violation.value_namespace = name_space;
        security_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control")
    {
        storm_control = value;
        storm_control.value_namespace = name_space;
        storm_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udld")
    {
        udld = value;
        udld.value_namespace = name_space;
        udld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood = value;
        unicast_flood.value_namespace = name_space;
        unicast_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmps")
    {
        vmps = value;
        vmps.value_namespace = name_space;
        vmps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation.yfilter = yfilter;
    }
    if(value_path == "psp")
    {
        psp.yfilter = yfilter;
    }
    if(value_path == "security-violation")
    {
        security_violation.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
    if(value_path == "storm-control")
    {
        storm_control.yfilter = yfilter;
    }
    if(value_path == "udld")
    {
        udld.yfilter = yfilter;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood.yfilter = yfilter;
    }
    if(value_path == "vmps")
    {
        vmps.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam-remote-failure" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "channel-misconfig" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "link-monitor-failure" || name == "loopback" || name == "mac-limit" || name == "mlacp-minlink" || name == "pagp-flap" || name == "port-mode-failure" || name == "pppoe-ia-rate-limit" || name == "psecure-violation" || name == "psp" || name == "security-violation" || name == "sfp-config-mismatch" || name == "small-frame" || name == "storm-control" || name == "udld" || name == "unicast-flood" || name == "vmps")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::OamRemoteFailure()
    :
    critical_event{YType::empty, "critical-event"},
    dying_gasp{YType::empty, "dying-gasp"},
    link_fault{YType::empty, "link-fault"}
{

    yang_name = "oam-remote-failure"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::~OamRemoteFailure()
{
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_data() const
{
    return critical_event.is_set
	|| dying_gasp.is_set
	|| link_fault.is_set;
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(link_fault.yfilter);
}

std::string Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Esmc::Esmc()
    :
    process{YType::empty, "process"}
{

    yang_name = "esmc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Esmc::~Esmc()
{
}

bool Native::Esmc::has_data() const
{
    return process.is_set;
}

bool Native::Esmc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter);
}

std::string Native::Esmc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Esmc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:esmc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Esmc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Esmc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Esmc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Esmc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Esmc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool Native::Esmc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Native::Ethernet::Ethernet()
    :
    cfm(std::make_shared<Native::Ethernet::Cfm>())
	,lmi(std::make_shared<Native::Ethernet::Lmi>())
{
    cfm->parent = this;
    lmi->parent = this;

    yang_name = "ethernet"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::~Ethernet()
{
}

bool Native::Ethernet::has_data() const
{
    for (std::size_t index=0; index<evc.size(); index++)
    {
        if(evc[index]->has_data())
            return true;
    }
    return (cfm !=  nullptr && cfm->has_data())
	|| (lmi !=  nullptr && lmi->has_data());
}

bool Native::Ethernet::has_operation() const
{
    for (std::size_t index=0; index<evc.size(); index++)
    {
        if(evc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (lmi !=  nullptr && lmi->has_operation());
}

std::string Native::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Ethernet::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "evc")
    {
        for(auto const & c : evc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ethernet::Evc>();
        c->parent = this;
        evc.push_back(c);
        return c;
    }

    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Ethernet::Lmi>();
        }
        return lmi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    for (auto const & c : evc)
    {
        children[c->get_segment_path()] = c;
    }

    if(lmi != nullptr)
    {
        children["lmi"] = lmi;
    }

    return children;
}

void Native::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "evc" || name == "lmi")
        return true;
    return false;
}

Native::Ethernet::Cfm::Cfm()
    :
    global{YType::empty, "global"},
    ieee{YType::empty, "ieee"}
    	,
    ais(std::make_shared<Native::Ethernet::Cfm::Ais>())
	,alarm(std::make_shared<Native::Ethernet::Cfm::Alarm>())
	,logging(nullptr) // presence node
	,mep(std::make_shared<Native::Ethernet::Cfm::Mep>())
	,mip(std::make_shared<Native::Ethernet::Cfm::Mip>())
	,traceroute(std::make_shared<Native::Ethernet::Cfm::Traceroute>())
{
    ais->parent = this;
    alarm->parent = this;
    mep->parent = this;
    mip->parent = this;
    traceroute->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::~Cfm()
{
}

bool Native::Ethernet::Cfm::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return global.is_set
	|| ieee.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data())
	|| (traceroute !=  nullptr && traceroute->has_data());
}

bool Native::Ethernet::Cfm::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ieee.yfilter)
	|| (ais !=  nullptr && ais->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation())
	|| (traceroute !=  nullptr && traceroute->has_operation());
}

std::string Native::Ethernet::Cfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ieee.is_set || is_set(ieee.yfilter)) leaf_name_data.push_back(ieee.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Native::Ethernet::Cfm::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Ethernet::Cfm::Alarm>();
        }
        return alarm;
    }

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
        auto c = std::make_shared<Native::Ethernet::Cfm::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ethernet::Cfm::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Ethernet::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Ethernet::Cfm::Mip>();
        }
        return mip;
    }

    if(child_yang_name == "traceroute")
    {
        if(traceroute == nullptr)
        {
            traceroute = std::make_shared<Native::Ethernet::Cfm::Traceroute>();
        }
        return traceroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        children["mip"] = mip;
    }

    if(traceroute != nullptr)
    {
        children["traceroute"] = traceroute;
    }

    return children;
}

void Native::Ethernet::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ieee")
    {
        ieee = value;
        ieee.value_namespace = name_space;
        ieee.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ieee")
    {
        ieee.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "alarm" || name == "domain" || name == "logging" || name == "mep" || name == "mip" || name == "traceroute" || name == "global" || name == "ieee")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::Ais()
    :
    link_status(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "ais"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::~Ais()
{
}

bool Native::Ethernet::Cfm::Ais::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Ethernet::Cfm::Ais::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::LinkStatus()
    :
    global(nullptr) // presence node
{

    yang_name = "link-status"; yang_parent_name = "ais"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::~LinkStatus()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::Global()
    :
    cfm_mode__config_ais_link_cfm(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm>())
{
    cfm_mode__config_ais_link_cfm->parent = this;

    yang_name = "global"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::~Global()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_data() const
{
    return (cfm_mode__config_ais_link_cfm !=  nullptr && cfm_mode__config_ais_link_cfm->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_operation() const
{
    return is_set(yfilter)
	|| (cfm_mode__config_ais_link_cfm !=  nullptr && cfm_mode__config_ais_link_cfm->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm-Mode__config-ais-link-cfm")
    {
        if(cfm_mode__config_ais_link_cfm == nullptr)
        {
            cfm_mode__config_ais_link_cfm = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm>();
        }
        return cfm_mode__config_ais_link_cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm_mode__config_ais_link_cfm != nullptr)
    {
        children["cfm-Mode__config-ais-link-cfm"] = cfm_mode__config_ais_link_cfm;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm-Mode__config-ais-link-cfm")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::CfmModeConfigaislinkcfm()
    :
    disable{YType::empty, "disable"},
    level{YType::uint8, "level"}
    	,
    period(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period>())
{
    period->parent = this;

    yang_name = "cfm-Mode__config-ais-link-cfm"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::~CfmModeConfigaislinkcfm()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::has_data() const
{
    return disable.is_set
	|| level.is_set
	|| (period !=  nullptr && period->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (period !=  nullptr && period->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm-Mode__config-ais-link-cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "period")
    {
        if(period == nullptr)
        {
            period = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period>();
        }
        return period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(period != nullptr)
    {
        children["period"] = period;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "disable" || name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::Period()
    :
    tp_1{YType::empty, "tp-1"},
    tp_60{YType::empty, "tp-60"}
{

    yang_name = "period"; yang_parent_name = "cfm-Mode__config-ais-link-cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::~Period()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::has_data() const
{
    return tp_1.is_set
	|| tp_60.is_set;
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_1.yfilter)
	|| ydk::is_set(tp_60.yfilter);
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/global/cfm-Mode__config-ais-link-cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_1.is_set || is_set(tp_1.yfilter)) leaf_name_data.push_back(tp_1.get_name_leafdata());
    if (tp_60.is_set || is_set(tp_60.yfilter)) leaf_name_data.push_back(tp_60.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-1")
    {
        tp_1 = value;
        tp_1.value_namespace = name_space;
        tp_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-60")
    {
        tp_60 = value;
        tp_60.value_namespace = name_space;
        tp_60.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-1")
    {
        tp_1.yfilter = yfilter;
    }
    if(value_path == "tp-60")
    {
        tp_60.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmModeConfigaislinkcfm::Period::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-1" || name == "tp-60")
        return true;
    return false;
}

Native::Ethernet::Cfm::Alarm::Alarm()
    :
    delay{YType::uint16, "delay"},
    packet{YType::uint16, "packet"},
    reset{YType::uint16, "reset"}
    	,
    notification(std::make_shared<Native::Ethernet::Cfm::Alarm::Notification>())
{
    notification->parent = this;

    yang_name = "alarm"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Alarm::~Alarm()
{
}

bool Native::Ethernet::Cfm::Alarm::has_data() const
{
    return delay.is_set
	|| packet.is_set
	|| reset.is_set
	|| (notification !=  nullptr && notification->has_data());
}

bool Native::Ethernet::Cfm::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| (notification !=  nullptr && notification->has_operation());
}

std::string Native::Ethernet::Cfm::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Ethernet::Cfm::Alarm::Notification>();
        }
        return notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    return children;
}

void Native::Ethernet::Cfm::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification" || name == "delay" || name == "packet" || name == "reset")
        return true;
    return false;
}

Native::Ethernet::Cfm::Alarm::Notification::Notification()
    :
    all{YType::empty, "all"},
    error_xcon{YType::empty, "error-xcon"},
    mac_remote_error_xcon{YType::empty, "mac-remote-error-xcon"},
    none{YType::empty, "none"},
    remote_error_xcon{YType::empty, "remote-error-xcon"},
    xcon{YType::empty, "xcon"}
{

    yang_name = "notification"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Alarm::Notification::~Notification()
{
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_data() const
{
    return all.is_set
	|| error_xcon.is_set
	|| mac_remote_error_xcon.is_set
	|| none.is_set
	|| remote_error_xcon.is_set
	|| xcon.is_set;
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(error_xcon.yfilter)
	|| ydk::is_set(mac_remote_error_xcon.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remote_error_xcon.yfilter)
	|| ydk::is_set(xcon.yfilter);
}

std::string Native::Ethernet::Cfm::Alarm::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/alarm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Alarm::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Alarm::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error_xcon.is_set || is_set(error_xcon.yfilter)) leaf_name_data.push_back(error_xcon.get_name_leafdata());
    if (mac_remote_error_xcon.is_set || is_set(mac_remote_error_xcon.yfilter)) leaf_name_data.push_back(mac_remote_error_xcon.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remote_error_xcon.is_set || is_set(remote_error_xcon.yfilter)) leaf_name_data.push_back(remote_error_xcon.get_name_leafdata());
    if (xcon.is_set || is_set(xcon.yfilter)) leaf_name_data.push_back(xcon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Alarm::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Alarm::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Alarm::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-xcon")
    {
        error_xcon = value;
        error_xcon.value_namespace = name_space;
        error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-remote-error-xcon")
    {
        mac_remote_error_xcon = value;
        mac_remote_error_xcon.value_namespace = name_space;
        mac_remote_error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-error-xcon")
    {
        remote_error_xcon = value;
        remote_error_xcon.value_namespace = name_space;
        remote_error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon")
    {
        xcon = value;
        xcon.value_namespace = name_space;
        xcon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Alarm::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "error-xcon")
    {
        error_xcon.yfilter = yfilter;
    }
    if(value_path == "mac-remote-error-xcon")
    {
        mac_remote_error_xcon.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remote-error-xcon")
    {
        remote_error_xcon.yfilter = yfilter;
    }
    if(value_path == "xcon")
    {
        xcon.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "error-xcon" || name == "mac-remote-error-xcon" || name == "none" || name == "remote-error-xcon" || name == "xcon")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Domain()
    :
    name{YType::str, "name"},
    level{YType::uint8, "level"}
{

    yang_name = "domain"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Domain::~Domain()
{
}

bool Native::Ethernet::Cfm::Domain::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return name.is_set
	|| level.is_set;
}

bool Native::Ethernet::Cfm::Domain::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Ethernet::Cfm::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ethernet::Cfm::Domain::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ethernet::Cfm::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "name" || name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Service::Service()
    :
    name{YType::str, "name"},
    evc{YType::str, "evc"},
    vlan{YType::uint16, "vlan"}
    	,
    continuity_check(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ethernet::Cfm::Domain::Service::~Service()
{
}

bool Native::Ethernet::Cfm::Domain::Service::has_data() const
{
    return name.is_set
	|| evc.is_set
	|| vlan.is_set
	|| (continuity_check !=  nullptr && continuity_check->has_data());
}

bool Native::Ethernet::Cfm::Domain::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (continuity_check !=  nullptr && continuity_check->has_operation());
}

std::string Native::Ethernet::Cfm::Domain::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Domain::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "continuity-check")
    {
        if(continuity_check == nullptr)
        {
            continuity_check = std::make_shared<Native::Ethernet::Cfm::Domain::Service::ContinuityCheck>();
        }
        return continuity_check;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(continuity_check != nullptr)
    {
        children["continuity-check"] = continuity_check;
    }

    return children;
}

void Native::Ethernet::Cfm::Domain::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Domain::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Domain::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "continuity-check" || name == "name" || name == "evc" || name == "vlan")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::ContinuityCheck()
{

    yang_name = "continuity-check"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::~ContinuityCheck()
{
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_data() const
{
    return false;
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuity-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ethernet::Cfm::Logging::Logging()
    :
    ais{YType::empty, "ais"}
    	,
    alarm(std::make_shared<Native::Ethernet::Cfm::Logging::Alarm>())
{
    alarm->parent = this;

    yang_name = "logging"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Logging::~Logging()
{
}

bool Native::Ethernet::Cfm::Logging::has_data() const
{
    return ais.is_set
	|| (alarm !=  nullptr && alarm->has_data());
}

bool Native::Ethernet::Cfm::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| (alarm !=  nullptr && alarm->has_operation());
}

std::string Native::Ethernet::Cfm::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Ethernet::Cfm::Logging::Alarm>();
        }
        return alarm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    return children;
}

void Native::Ethernet::Cfm::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "ais")
        return true;
    return false;
}

Native::Ethernet::Cfm::Logging::Alarm::Alarm()
    :
    cisco{YType::empty, "cisco"},
    ieee{YType::empty, "ieee"}
{

    yang_name = "alarm"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Logging::Alarm::~Alarm()
{
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_data() const
{
    return cisco.is_set
	|| ieee.is_set;
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(ieee.yfilter);
}

std::string Native::Ethernet::Cfm::Logging::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Logging::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Logging::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ieee.is_set || is_set(ieee.yfilter)) leaf_name_data.push_back(ieee.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Logging::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Logging::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Logging::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ieee")
    {
        ieee = value;
        ieee.value_namespace = name_space;
        ieee.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Logging::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "ieee")
    {
        ieee.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "ieee")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mep::Mep()
    :
    crosscheck(std::make_shared<Native::Ethernet::Cfm::Mep::Crosscheck>())
{
    crosscheck->parent = this;

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mep::~Mep()
{
}

bool Native::Ethernet::Cfm::Mep::has_data() const
{
    return (crosscheck !=  nullptr && crosscheck->has_data());
}

bool Native::Ethernet::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| (crosscheck !=  nullptr && crosscheck->has_operation());
}

std::string Native::Ethernet::Cfm::Mep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crosscheck")
    {
        if(crosscheck == nullptr)
        {
            crosscheck = std::make_shared<Native::Ethernet::Cfm::Mep::Crosscheck>();
        }
        return crosscheck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crosscheck != nullptr)
    {
        children["crosscheck"] = crosscheck;
    }

    return children;
}

void Native::Ethernet::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crosscheck")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mep::Crosscheck::Crosscheck()
    :
    start_delay{YType::uint16, "start-delay"}
{

    yang_name = "crosscheck"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mep::Crosscheck::~Crosscheck()
{
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_data() const
{
    return start_delay.is_set;
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_delay.yfilter);
}

std::string Native::Ethernet::Cfm::Mep::Crosscheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mep::Crosscheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crosscheck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mep::Crosscheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_delay.is_set || is_set(start_delay.yfilter)) leaf_name_data.push_back(start_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mep::Crosscheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mep::Crosscheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Mep::Crosscheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-delay")
    {
        start_delay = value;
        start_delay.value_namespace = name_space;
        start_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mep::Crosscheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-delay")
    {
        start_delay.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-delay")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::Mip()
    :
    filter{YType::empty, "filter"}
    	,
    auto_create(std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate>())
{
    auto_create->parent = this;

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::~Mip()
{
}

bool Native::Ethernet::Cfm::Mip::has_data() const
{
    return filter.is_set
	|| (auto_create !=  nullptr && auto_create->has_data());
}

bool Native::Ethernet::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter)
	|| (auto_create !=  nullptr && auto_create->has_operation());
}

std::string Native::Ethernet::Cfm::Mip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-create")
    {
        if(auto_create == nullptr)
        {
            auto_create = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate>();
        }
        return auto_create;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_create != nullptr)
    {
        children["auto-create"] = auto_create;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-create" || name == "filter")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::AutoCreate()
    :
    level(std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level>())
{
    level->parent = this;

    yang_name = "auto-create"; yang_parent_name = "mip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::~AutoCreate()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-create";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::AutoCreate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mip::AutoCreate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::Level()
{

    yang_name = "level"; yang_parent_name = "auto-create"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::~Level()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_data() const
{
    for (std::size_t index=0; index<mef_num.size(); index++)
    {
        if(mef_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_operation() const
{
    for (std::size_t index=0; index<mef_num.size(); index++)
    {
        if(mef_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/auto-create/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mef-num")
    {
        for(auto const & c : mef_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum>();
        c->parent = this;
        mef_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mef_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mef-num")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::MefNum()
    :
    mef_num{YType::uint8, "mef-num"},
    evc{YType::str, "evc"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "mef-num"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::~MefNum()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_data() const
{
    return mef_num.is_set
	|| evc.is_set
	|| vlan.is_set;
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mef_num.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/auto-create/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mef-num" <<"[mef-num='" <<mef_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mef_num.is_set || is_set(mef_num.yfilter)) leaf_name_data.push_back(mef_num.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mef-num")
    {
        mef_num = value;
        mef_num.value_namespace = name_space;
        mef_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mef-num")
    {
        mef_num.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mef-num" || name == "evc" || name == "vlan")
        return true;
    return false;
}

Native::Ethernet::Cfm::Traceroute::Traceroute()
    :
    cache(nullptr) // presence node
{

    yang_name = "traceroute"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Traceroute::~Traceroute()
{
}

bool Native::Ethernet::Cfm::Traceroute::has_data() const
{
    return (cache !=  nullptr && cache->has_data());
}

bool Native::Ethernet::Cfm::Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| (cache !=  nullptr && cache->has_operation());
}

std::string Native::Ethernet::Cfm::Traceroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Traceroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Ethernet::Cfm::Traceroute::Cache>();
        }
        return cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    return children;
}

void Native::Ethernet::Cfm::Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache")
        return true;
    return false;
}

Native::Ethernet::Cfm::Traceroute::Cache::Cache()
    :
    hold_time{YType::uint16, "hold-time"},
    size{YType::uint16, "size"}
{

    yang_name = "cache"; yang_parent_name = "traceroute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Cfm::Traceroute::Cache::~Cache()
{
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_data() const
{
    return hold_time.is_set
	|| size.is_set;
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Ethernet::Cfm::Traceroute::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/traceroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Cfm::Traceroute::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Cfm::Traceroute::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Traceroute::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Traceroute::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Traceroute::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Traceroute::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "size")
        return true;
    return false;
}

Native::Ethernet::Evc::Evc()
    :
    name{YType::str, "name"}
{

    yang_name = "evc"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Evc::~Evc()
{
}

bool Native::Ethernet::Evc::has_data() const
{
    return name.is_set;
}

bool Native::Ethernet::Evc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ethernet::Evc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Evc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:evc" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Evc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Evc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Evc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Evc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Evc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ethernet::Evc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ethernet::Lmi::Lmi()
    :
    ce{YType::empty, "ce"},
    global{YType::empty, "global"}
{

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ethernet::Lmi::~Lmi()
{
}

bool Native::Ethernet::Lmi::has_data() const
{
    return ce.is_set
	|| global.is_set;
}

bool Native::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Ethernet::Lmi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce.is_set || is_set(ce.yfilter)) leaf_name_data.push_back(ce.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce")
    {
        ce = value;
        ce.value_namespace = name_space;
        ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce")
    {
        ce.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce" || name == "global")
        return true;
    return false;
}

Native::Event::Event()
    :
    manager(std::make_shared<Native::Event::Manager>())
{
    manager->parent = this;

    yang_name = "event"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::~Event()
{
}

bool Native::Event::has_data() const
{
    return (manager !=  nullptr && manager->has_data());
}

bool Native::Event::has_operation() const
{
    return is_set(yfilter)
	|| (manager !=  nullptr && manager->has_operation());
}

std::string Native::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Native::Event::Manager>();
        }
        return manager;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manager != nullptr)
    {
        children["manager"] = manager;
    }

    return children;
}

void Native::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manager")
        return true;
    return false;
}

Native::Event::Manager::Manager()
    :
    directory(std::make_shared<Native::Event::Manager::Directory>())
	,session(std::make_shared<Native::Event::Manager::Session>())
{
    directory->parent = this;
    session->parent = this;

    yang_name = "manager"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::~Manager()
{
}

bool Native::Event::Manager::has_data() const
{
    for (std::size_t index=0; index<applet.size(); index++)
    {
        if(applet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<environment.size(); index++)
    {
        if(environment[index]->has_data())
            return true;
    }
    return (directory !=  nullptr && directory->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Event::Manager::has_operation() const
{
    for (std::size_t index=0; index<applet.size(); index++)
    {
        if(applet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<environment.size(); index++)
    {
        if(environment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (directory !=  nullptr && directory->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Event::Manager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eem:manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applet")
    {
        for(auto const & c : applet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet>();
        c->parent = this;
        applet.push_back(c);
        return c;
    }

    if(child_yang_name == "directory")
    {
        if(directory == nullptr)
        {
            directory = std::make_shared<Native::Event::Manager::Directory>();
        }
        return directory;
    }

    if(child_yang_name == "environment")
    {
        for(auto const & c : environment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Environment>();
        c->parent = this;
        environment.push_back(c);
        return c;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Event::Manager::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : applet)
    {
        children[c->get_segment_path()] = c;
    }

    if(directory != nullptr)
    {
        children["directory"] = directory;
    }

    for (auto const & c : environment)
    {
        children[c->get_segment_path()] = c;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Native::Event::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applet" || name == "directory" || name == "environment" || name == "session")
        return true;
    return false;
}

Native::Event::Manager::Applet::Applet()
    :
    name{YType::str, "name"},
    authorization{YType::enumeration, "authorization"},
    class_{YType::str, "class"},
    description{YType::str, "description"},
    trap{YType::empty, "trap"}
    	,
    event(std::make_shared<Native::Event::Manager::Applet::Event_>())
	,trigger(std::make_shared<Native::Event::Manager::Applet::Trigger>())
{
    event->parent = this;
    trigger->parent = this;

    yang_name = "applet"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Applet::~Applet()
{
}

bool Native::Event::Manager::Applet::has_data() const
{
    for (std::size_t index=0; index<action.size(); index++)
    {
        if(action[index]->has_data())
            return true;
    }
    return name.is_set
	|| authorization.is_set
	|| class_.is_set
	|| description.is_set
	|| trap.is_set
	|| (event !=  nullptr && event->has_data())
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Event::Manager::Applet::has_operation() const
{
    for (std::size_t index=0; index<action.size(); index++)
    {
        if(action[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(trap.yfilter)
	|| (event !=  nullptr && event->has_operation())
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Event::Manager::Applet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Applet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applet" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        for(auto const & c : action)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Action>();
        c->parent = this;
        action.push_back(c);
        return c;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Event::Manager::Applet::Event_>();
        }
        return event;
    }

    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Event::Manager::Applet::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action)
    {
        children[c->get_segment_path()] = c;
    }

    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Event::Manager::Applet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "event" || name == "trigger" || name == "name" || name == "authorization" || name == "class" || name == "description" || name == "trap")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Action()
    :
    name{YType::str, "name"},
    end{YType::empty, "end"},
    exit{YType::empty, "exit"}
    	,
    cli(std::make_shared<Native::Event::Manager::Applet::Action::Cli>())
	,if_(std::make_shared<Native::Event::Manager::Applet::Action::If_>())
	,info(std::make_shared<Native::Event::Manager::Applet::Action::Info>())
	,regexp(std::make_shared<Native::Event::Manager::Applet::Action::Regexp>())
	,snmp_trap(nullptr) // presence node
	,string(std::make_shared<Native::Event::Manager::Applet::Action::String>())
	,syslog(std::make_shared<Native::Event::Manager::Applet::Action::Syslog>())
{
    cli->parent = this;
    if_->parent = this;
    info->parent = this;
    regexp->parent = this;
    string->parent = this;
    syslog->parent = this;

    yang_name = "action"; yang_parent_name = "applet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::~Action()
{
}

bool Native::Event::Manager::Applet::Action::has_data() const
{
    return name.is_set
	|| end.is_set
	|| exit.is_set
	|| (cli !=  nullptr && cli->has_data())
	|| (if_ !=  nullptr && if_->has_data())
	|| (info !=  nullptr && info->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (snmp_trap !=  nullptr && snmp_trap->has_data())
	|| (string !=  nullptr && string->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Event::Manager::Applet::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(exit.yfilter)
	|| (cli !=  nullptr && cli->has_operation())
	|| (if_ !=  nullptr && if_->has_operation())
	|| (info !=  nullptr && info->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (snmp_trap !=  nullptr && snmp_trap->has_operation())
	|| (string !=  nullptr && string->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Event::Manager::Applet::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (exit.is_set || is_set(exit.yfilter)) leaf_name_data.push_back(exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<Native::Event::Manager::Applet::Action::Cli>();
        }
        return cli;
    }

    if(child_yang_name == "if")
    {
        if(if_ == nullptr)
        {
            if_ = std::make_shared<Native::Event::Manager::Applet::Action::If_>();
        }
        return if_;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Native::Event::Manager::Applet::Action::Info>();
        }
        return info;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Event::Manager::Applet::Action::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "snmp-trap")
    {
        if(snmp_trap == nullptr)
        {
            snmp_trap = std::make_shared<Native::Event::Manager::Applet::Action::SnmpTrap>();
        }
        return snmp_trap;
    }

    if(child_yang_name == "string")
    {
        if(string == nullptr)
        {
            string = std::make_shared<Native::Event::Manager::Applet::Action::String>();
        }
        return string;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Event::Manager::Applet::Action::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

    if(if_ != nullptr)
    {
        children["if"] = if_;
    }

    if(info != nullptr)
    {
        children["info"] = info;
    }

    if(regexp != nullptr)
    {
        children["regexp"] = regexp;
    }

    if(snmp_trap != nullptr)
    {
        children["snmp-trap"] = snmp_trap;
    }

    if(string != nullptr)
    {
        children["string"] = string;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exit")
    {
        exit = value;
        exit.value_namespace = name_space;
        exit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "exit")
    {
        exit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cli" || name == "if" || name == "info" || name == "regexp" || name == "snmp-trap" || name == "string" || name == "syslog" || name == "name" || name == "end" || name == "exit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Cli::Cli()
    :
    command{YType::str, "command"}
{

    yang_name = "cli"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Cli::~Cli()
{
}

bool Native::Event::Manager::Applet::Action::Cli::has_data() const
{
    return command.is_set;
}

bool Native::Event::Manager::Applet::Action::Cli::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::If_::If_()
    :
    goto_{YType::str, "goto"},
    keyword{YType::enumeration, "keyword"},
    string_op_1{YType::str, "string-op-1"},
    string_op_2{YType::str, "string-op-2"}
{

    yang_name = "if"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::If_::~If_()
{
}

bool Native::Event::Manager::Applet::Action::If_::has_data() const
{
    return goto_.is_set
	|| keyword.is_set
	|| string_op_1.is_set
	|| string_op_2.is_set;
}

bool Native::Event::Manager::Applet::Action::If_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(goto_.yfilter)
	|| ydk::is_set(keyword.yfilter)
	|| ydk::is_set(string_op_1.yfilter)
	|| ydk::is_set(string_op_2.yfilter);
}

std::string Native::Event::Manager::Applet::Action::If_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::If_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (goto_.is_set || is_set(goto_.yfilter)) leaf_name_data.push_back(goto_.get_name_leafdata());
    if (keyword.is_set || is_set(keyword.yfilter)) leaf_name_data.push_back(keyword.get_name_leafdata());
    if (string_op_1.is_set || is_set(string_op_1.yfilter)) leaf_name_data.push_back(string_op_1.get_name_leafdata());
    if (string_op_2.is_set || is_set(string_op_2.yfilter)) leaf_name_data.push_back(string_op_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::If_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::If_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::If_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "goto")
    {
        goto_ = value;
        goto_.value_namespace = name_space;
        goto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyword")
    {
        keyword = value;
        keyword.value_namespace = name_space;
        keyword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-op-1")
    {
        string_op_1 = value;
        string_op_1.value_namespace = name_space;
        string_op_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-op-2")
    {
        string_op_2 = value;
        string_op_2.value_namespace = name_space;
        string_op_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::If_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "goto")
    {
        goto_.yfilter = yfilter;
    }
    if(value_path == "keyword")
    {
        keyword.yfilter = yfilter;
    }
    if(value_path == "string-op-1")
    {
        string_op_1.yfilter = yfilter;
    }
    if(value_path == "string-op-2")
    {
        string_op_2.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::If_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "goto" || name == "keyword" || name == "string-op-1" || name == "string-op-2")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Info()
    :
    type(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type>())
{
    type->parent = this;

    yang_name = "info"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Info::~Info()
{
}

bool Native::Event::Manager::Applet::Action::Info::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Action::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Action::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Type()
    :
    snmp(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp>())
{
    snmp->parent = this;

    yang_name = "type"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Info::Type::~Type()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_data() const
{
    return (snmp !=  nullptr && snmp->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_operation() const
{
    return is_set(yfilter)
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Action::Info::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap>())
	,var(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var>())
{
    trap->parent = this;
    var->parent = this;

    yang_name = "snmp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::~Snmp()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_data() const
{
    return (trap !=  nullptr && trap->has_data())
	|| (var !=  nullptr && var->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap !=  nullptr && trap->has_operation())
	|| (var !=  nullptr && var->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "var")
    {
        if(var == nullptr)
        {
            var = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var>();
        }
        return var;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(var != nullptr)
    {
        children["var"] = var;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "var")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::Trap()
    :
    enterprise_oid{YType::str, "enterprise-oid"},
    generic_trapnum{YType::uint32, "generic-trapnum"},
    specific_trapnum{YType::uint32, "specific-trapnum"},
    trap_oid{YType::str, "trap-oid"},
    trap_var{YType::str, "trap-var"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::~Trap()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_data() const
{
    return enterprise_oid.is_set
	|| generic_trapnum.is_set
	|| specific_trapnum.is_set
	|| trap_oid.is_set
	|| trap_var.is_set;
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enterprise_oid.yfilter)
	|| ydk::is_set(generic_trapnum.yfilter)
	|| ydk::is_set(specific_trapnum.yfilter)
	|| ydk::is_set(trap_oid.yfilter)
	|| ydk::is_set(trap_var.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enterprise_oid.is_set || is_set(enterprise_oid.yfilter)) leaf_name_data.push_back(enterprise_oid.get_name_leafdata());
    if (generic_trapnum.is_set || is_set(generic_trapnum.yfilter)) leaf_name_data.push_back(generic_trapnum.get_name_leafdata());
    if (specific_trapnum.is_set || is_set(specific_trapnum.yfilter)) leaf_name_data.push_back(specific_trapnum.get_name_leafdata());
    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (trap_var.is_set || is_set(trap_var.yfilter)) leaf_name_data.push_back(trap_var.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enterprise-oid")
    {
        enterprise_oid = value;
        enterprise_oid.value_namespace = name_space;
        enterprise_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-trapnum")
    {
        generic_trapnum = value;
        generic_trapnum.value_namespace = name_space;
        generic_trapnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "specific-trapnum")
    {
        specific_trapnum = value;
        specific_trapnum.value_namespace = name_space;
        specific_trapnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-oid")
    {
        trap_oid = value;
        trap_oid.value_namespace = name_space;
        trap_oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-var")
    {
        trap_var = value;
        trap_var.value_namespace = name_space;
        trap_var.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enterprise-oid")
    {
        enterprise_oid.yfilter = yfilter;
    }
    if(value_path == "generic-trapnum")
    {
        generic_trapnum.yfilter = yfilter;
    }
    if(value_path == "specific-trapnum")
    {
        specific_trapnum.yfilter = yfilter;
    }
    if(value_path == "trap-oid")
    {
        trap_oid.yfilter = yfilter;
    }
    if(value_path == "trap-var")
    {
        trap_var.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enterprise-oid" || name == "generic-trapnum" || name == "specific-trapnum" || name == "trap-oid" || name == "trap-var")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::Var()
    :
    oid{YType::str, "oid"},
    oid_type{YType::enumeration, "oid-type"},
    oid_type_value{YType::str, "oid-type-value"},
    variable_name{YType::str, "variable-name"}
{

    yang_name = "var"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::~Var()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_data() const
{
    return oid.is_set
	|| oid_type.is_set
	|| oid_type_value.is_set
	|| variable_name.is_set;
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(oid_type.yfilter)
	|| ydk::is_set(oid_type_value.yfilter)
	|| ydk::is_set(variable_name.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_type.is_set || is_set(oid_type.yfilter)) leaf_name_data.push_back(oid_type.get_name_leafdata());
    if (oid_type_value.is_set || is_set(oid_type_value.yfilter)) leaf_name_data.push_back(oid_type_value.get_name_leafdata());
    if (variable_name.is_set || is_set(variable_name.yfilter)) leaf_name_data.push_back(variable_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-type")
    {
        oid_type = value;
        oid_type.value_namespace = name_space;
        oid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-type-value")
    {
        oid_type_value = value;
        oid_type_value.value_namespace = name_space;
        oid_type_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variable-name")
    {
        variable_name = value;
        variable_name.value_namespace = name_space;
        variable_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "oid-type")
    {
        oid_type.yfilter = yfilter;
    }
    if(value_path == "oid-type-value")
    {
        oid_type_value.yfilter = yfilter;
    }
    if(value_path == "variable-name")
    {
        variable_name.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid" || name == "oid-type" || name == "oid-type-value" || name == "variable-name")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Regexp::Regexp()
    :
    string_input{YType::str, "string-input"},
    string_match{YType::str, "string-match"},
    string_pattern{YType::str, "string-pattern"},
    string_submatch1{YType::str, "string-submatch1"},
    string_submatch2{YType::str, "string-submatch2"},
    string_submatch3{YType::str, "string-submatch3"}
{

    yang_name = "regexp"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Regexp::~Regexp()
{
}

bool Native::Event::Manager::Applet::Action::Regexp::has_data() const
{
    return string_input.is_set
	|| string_match.is_set
	|| string_pattern.is_set
	|| string_submatch1.is_set
	|| string_submatch2.is_set
	|| string_submatch3.is_set;
}

bool Native::Event::Manager::Applet::Action::Regexp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_input.yfilter)
	|| ydk::is_set(string_match.yfilter)
	|| ydk::is_set(string_pattern.yfilter)
	|| ydk::is_set(string_submatch1.yfilter)
	|| ydk::is_set(string_submatch2.yfilter)
	|| ydk::is_set(string_submatch3.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Regexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_input.is_set || is_set(string_input.yfilter)) leaf_name_data.push_back(string_input.get_name_leafdata());
    if (string_match.is_set || is_set(string_match.yfilter)) leaf_name_data.push_back(string_match.get_name_leafdata());
    if (string_pattern.is_set || is_set(string_pattern.yfilter)) leaf_name_data.push_back(string_pattern.get_name_leafdata());
    if (string_submatch1.is_set || is_set(string_submatch1.yfilter)) leaf_name_data.push_back(string_submatch1.get_name_leafdata());
    if (string_submatch2.is_set || is_set(string_submatch2.yfilter)) leaf_name_data.push_back(string_submatch2.get_name_leafdata());
    if (string_submatch3.is_set || is_set(string_submatch3.yfilter)) leaf_name_data.push_back(string_submatch3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Regexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-input")
    {
        string_input = value;
        string_input.value_namespace = name_space;
        string_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-match")
    {
        string_match = value;
        string_match.value_namespace = name_space;
        string_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-pattern")
    {
        string_pattern = value;
        string_pattern.value_namespace = name_space;
        string_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-submatch1")
    {
        string_submatch1 = value;
        string_submatch1.value_namespace = name_space;
        string_submatch1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-submatch2")
    {
        string_submatch2 = value;
        string_submatch2.value_namespace = name_space;
        string_submatch2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-submatch3")
    {
        string_submatch3 = value;
        string_submatch3.value_namespace = name_space;
        string_submatch3.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Regexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-input")
    {
        string_input.yfilter = yfilter;
    }
    if(value_path == "string-match")
    {
        string_match.yfilter = yfilter;
    }
    if(value_path == "string-pattern")
    {
        string_pattern.yfilter = yfilter;
    }
    if(value_path == "string-submatch1")
    {
        string_submatch1.yfilter = yfilter;
    }
    if(value_path == "string-submatch2")
    {
        string_submatch2.yfilter = yfilter;
    }
    if(value_path == "string-submatch3")
    {
        string_submatch3.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Regexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-input" || name == "string-match" || name == "string-pattern" || name == "string-submatch1" || name == "string-submatch2" || name == "string-submatch3")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::SnmpTrap::SnmpTrap()
    :
    intdata1{YType::int32, "intdata1"},
    intdata2{YType::int32, "intdata2"},
    strdata{YType::str, "strdata"}
{

    yang_name = "snmp-trap"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::SnmpTrap::~SnmpTrap()
{
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_data() const
{
    return intdata1.is_set
	|| intdata2.is_set
	|| strdata.is_set;
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intdata1.yfilter)
	|| ydk::is_set(intdata2.yfilter)
	|| ydk::is_set(strdata.yfilter);
}

std::string Native::Event::Manager::Applet::Action::SnmpTrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::SnmpTrap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intdata1.is_set || is_set(intdata1.yfilter)) leaf_name_data.push_back(intdata1.get_name_leafdata());
    if (intdata2.is_set || is_set(intdata2.yfilter)) leaf_name_data.push_back(intdata2.get_name_leafdata());
    if (strdata.is_set || is_set(strdata.yfilter)) leaf_name_data.push_back(strdata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::SnmpTrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::SnmpTrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::SnmpTrap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intdata1")
    {
        intdata1 = value;
        intdata1.value_namespace = name_space;
        intdata1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intdata2")
    {
        intdata2 = value;
        intdata2.value_namespace = name_space;
        intdata2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strdata")
    {
        strdata = value;
        strdata.value_namespace = name_space;
        strdata.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::SnmpTrap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intdata1")
    {
        intdata1.yfilter = yfilter;
    }
    if(value_path == "intdata2")
    {
        intdata2.yfilter = yfilter;
    }
    if(value_path == "strdata")
    {
        strdata.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intdata1" || name == "intdata2" || name == "strdata")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::String::String()
    :
    trim{YType::str, "trim"}
{

    yang_name = "string"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::String::~String()
{
}

bool Native::Event::Manager::Applet::Action::String::has_data() const
{
    return trim.is_set;
}

bool Native::Event::Manager::Applet::Action::String::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trim.yfilter);
}

std::string Native::Event::Manager::Applet::Action::String::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::String::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trim.is_set || is_set(trim.yfilter)) leaf_name_data.push_back(trim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::String::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::String::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::String::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trim")
    {
        trim = value;
        trim.value_namespace = name_space;
        trim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::String::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trim")
    {
        trim.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::String::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trim")
        return true;
    return false;
}

Native::Event::Manager::Applet::Action::Syslog::Syslog()
    :
    facility{YType::str, "facility"},
    msg{YType::str, "msg"},
    priority{YType::str, "priority"}
{

    yang_name = "syslog"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Action::Syslog::~Syslog()
{
}

bool Native::Event::Manager::Applet::Action::Syslog::has_data() const
{
    return facility.is_set
	|| msg.is_set
	|| priority.is_set;
}

bool Native::Event::Manager::Applet::Action::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(msg.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Event::Manager::Applet::Action::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Action::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (msg.is_set || is_set(msg.yfilter)) leaf_name_data.push_back(msg.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg")
    {
        msg = value;
        msg.value_namespace = name_space;
        msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "msg")
    {
        msg.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "facility" || name == "msg" || name == "priority")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Event_()
    :
    snmp_notification(std::make_shared<Native::Event::Manager::Applet::Event_::SnmpNotification>())
	,syslog(std::make_shared<Native::Event::Manager::Applet::Event_::Syslog>())
	,timer(std::make_shared<Native::Event::Manager::Applet::Event_::Timer>())
	,track(std::make_shared<Native::Event::Manager::Applet::Event_::Track>())
{
    snmp_notification->parent = this;
    syslog->parent = this;
    timer->parent = this;
    track->parent = this;

    yang_name = "event"; yang_parent_name = "applet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::~Event_()
{
}

bool Native::Event::Manager::Applet::Event_::has_data() const
{
    return (snmp_notification !=  nullptr && snmp_notification->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (track !=  nullptr && track->has_data());
}

bool Native::Event::Manager::Applet::Event_::has_operation() const
{
    return is_set(yfilter)
	|| (snmp_notification !=  nullptr && snmp_notification->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (track !=  nullptr && track->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp-notification")
    {
        if(snmp_notification == nullptr)
        {
            snmp_notification = std::make_shared<Native::Event::Manager::Applet::Event_::SnmpNotification>();
        }
        return snmp_notification;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Event::Manager::Applet::Event_::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Event::Manager::Applet::Event_::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Event::Manager::Applet::Event_::Track>();
        }
        return track;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmp_notification != nullptr)
    {
        children["snmp-notification"] = snmp_notification;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(track != nullptr)
    {
        children["track"] = track;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp-notification" || name == "syslog" || name == "timer" || name == "track")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::SnmpNotification::SnmpNotification()
    :
    dest_ip_address{YType::str, "dest-ip-address"},
    oid{YType::str, "oid"},
    oid_val{YType::str, "oid-val"},
    op{YType::enumeration, "op"},
    src_ip_address{YType::str, "src-ip-address"}
{

    yang_name = "snmp-notification"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::SnmpNotification::~SnmpNotification()
{
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_data() const
{
    return dest_ip_address.is_set
	|| oid.is_set
	|| oid_val.is_set
	|| op.is_set
	|| src_ip_address.is_set;
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_ip_address.yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(oid_val.yfilter)
	|| ydk::is_set(op.yfilter)
	|| ydk::is_set(src_ip_address.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::SnmpNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::SnmpNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_ip_address.is_set || is_set(dest_ip_address.yfilter)) leaf_name_data.push_back(dest_ip_address.get_name_leafdata());
    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_val.is_set || is_set(oid_val.yfilter)) leaf_name_data.push_back(oid_val.get_name_leafdata());
    if (op.is_set || is_set(op.yfilter)) leaf_name_data.push_back(op.get_name_leafdata());
    if (src_ip_address.is_set || is_set(src_ip_address.yfilter)) leaf_name_data.push_back(src_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::SnmpNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::SnmpNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::SnmpNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-ip-address")
    {
        dest_ip_address = value;
        dest_ip_address.value_namespace = name_space;
        dest_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid")
    {
        oid = value;
        oid.value_namespace = name_space;
        oid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oid-val")
    {
        oid_val = value;
        oid_val.value_namespace = name_space;
        oid_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "op")
    {
        op = value;
        op.value_namespace = name_space;
        op.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ip-address")
    {
        src_ip_address = value;
        src_ip_address.value_namespace = name_space;
        src_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::SnmpNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-ip-address")
    {
        dest_ip_address.yfilter = yfilter;
    }
    if(value_path == "oid")
    {
        oid.yfilter = yfilter;
    }
    if(value_path == "oid-val")
    {
        oid_val.yfilter = yfilter;
    }
    if(value_path == "op")
    {
        op.yfilter = yfilter;
    }
    if(value_path == "src-ip-address")
    {
        src_ip_address.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-ip-address" || name == "oid" || name == "oid-val" || name == "op" || name == "src-ip-address")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Syslog::Syslog()
    :
    pattern{YType::str, "pattern"}
{

    yang_name = "syslog"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Syslog::~Syslog()
{
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_data() const
{
    return pattern.is_set;
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pattern.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pattern")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Timer()
    :
    watchdog(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog>())
{
    watchdog->parent = this;

    yang_name = "timer"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::~Timer()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::has_data() const
{
    return (watchdog !=  nullptr && watchdog->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::has_operation() const
{
    return is_set(yfilter)
	|| (watchdog !=  nullptr && watchdog->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "watchdog")
    {
        if(watchdog == nullptr)
        {
            watchdog = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog>();
        }
        return watchdog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(watchdog != nullptr)
    {
        children["watchdog"] = watchdog;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watchdog")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Watchdog()
    :
    name(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name>())
{
    name->parent = this;

    yang_name = "watchdog"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::~Watchdog()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_data() const
{
    return (name !=  nullptr && name->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_operation() const
{
    return is_set(yfilter)
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watchdog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::Name()
{

    yang_name = "name"; yang_parent_name = "watchdog"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::~Name()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::has_data() const
{
    for (std::size_t index=0; index<timer_name.size(); index++)
    {
        if(timer_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::has_operation() const
{
    for (std::size_t index=0; index<timer_name.size(); index++)
    {
        if(timer_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer-name")
    {
        for(auto const & c : timer_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName>();
        c->parent = this;
        timer_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : timer_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-name")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::TimerName()
    :
    timer_name{YType::str, "timer-name"}
    	,
    time(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time>())
{
    time->parent = this;

    yang_name = "timer-name"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::~TimerName()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::has_data() const
{
    return timer_name.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-name" <<"[timer-name='" <<timer_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "timer-name")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::Time()
{

    yang_name = "time"; yang_parent_name = "timer-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::~Time()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::has_data() const
{
    for (std::size_t index=0; index<time_in_seconds.size(); index++)
    {
        if(time_in_seconds[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::has_operation() const
{
    for (std::size_t index=0; index<time_in_seconds.size(); index++)
    {
        if(time_in_seconds[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time-in-seconds")
    {
        for(auto const & c : time_in_seconds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds>();
        c->parent = this;
        time_in_seconds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : time_in_seconds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::TimeInSeconds()
    :
    time_in_seconds{YType::uint32, "time-in-seconds"}
    	,
    maxrun(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun>())
{
    maxrun->parent = this;

    yang_name = "time-in-seconds"; yang_parent_name = "time"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::~TimeInSeconds()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::has_data() const
{
    return time_in_seconds.is_set
	|| (maxrun !=  nullptr && maxrun->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| (maxrun !=  nullptr && maxrun->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-in-seconds" <<"[time-in-seconds='" <<time_in_seconds <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxrun")
    {
        if(maxrun == nullptr)
        {
            maxrun = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun>();
        }
        return maxrun;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maxrun != nullptr)
    {
        children["maxrun"] = maxrun;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "time-in-seconds")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::Maxrun()
{

    yang_name = "maxrun"; yang_parent_name = "time-in-seconds"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::~Maxrun()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::has_data() const
{
    for (std::size_t index=0; index<timer_in_seconds.size(); index++)
    {
        if(timer_in_seconds[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::has_operation() const
{
    for (std::size_t index=0; index<timer_in_seconds.size(); index++)
    {
        if(timer_in_seconds[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer-in-seconds")
    {
        for(auto const & c : timer_in_seconds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds>();
        c->parent = this;
        timer_in_seconds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : timer_in_seconds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-in-seconds")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::TimerInSeconds()
    :
    timer_in_seconds{YType::uint32, "timer-in-seconds"},
    ratelimit{YType::uint32, "ratelimit"}
{

    yang_name = "timer-in-seconds"; yang_parent_name = "maxrun"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::~TimerInSeconds()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::has_data() const
{
    return timer_in_seconds.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_in_seconds.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-in-seconds" <<"[timer-in-seconds='" <<timer_in_seconds <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_in_seconds.is_set || is_set(timer_in_seconds.yfilter)) leaf_name_data.push_back(timer_in_seconds.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-in-seconds")
    {
        timer_in_seconds = value;
        timer_in_seconds.value_namespace = name_space;
        timer_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-in-seconds")
    {
        timer_in_seconds.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-in-seconds" || name == "ratelimit")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Track::Track()
    :
    state{YType::enumeration, "state"},
    track_object_number{YType::uint16, "track-object-number"}
{

    yang_name = "track"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Event_::Track::~Track()
{
}

bool Native::Event::Manager::Applet::Event_::Track::has_data() const
{
    return state.is_set
	|| track_object_number.is_set;
}

bool Native::Event::Manager::Applet::Event_::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(track_object_number.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Event_::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (track_object_number.is_set || is_set(track_object_number.yfilter)) leaf_name_data.push_back(track_object_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-object-number")
    {
        track_object_number = value;
        track_object_number.value_namespace = name_space;
        track_object_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "track-object-number")
    {
        track_object_number.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "track-object-number")
        return true;
    return false;
}

Native::Event::Manager::Applet::Trigger::Trigger()
{

    yang_name = "trigger"; yang_parent_name = "applet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Event::Manager::Applet::Trigger::~Trigger()
{
}

bool Native::Event::Manager::Applet::Trigger::has_data() const
{
    return false;
}

bool Native::Event::Manager::Applet::Trigger::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Event::Manager::Applet::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Applet::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Event::Manager::Directory::Directory()
    :
    user(std::make_shared<Native::Event::Manager::Directory::User>())
{
    user->parent = this;

    yang_name = "directory"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Directory::~Directory()
{
}

bool Native::Event::Manager::Directory::has_data() const
{
    return (user !=  nullptr && user->has_data());
}

bool Native::Event::Manager::Directory::has_operation() const
{
    return is_set(yfilter)
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Event::Manager::Directory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Directory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Directory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Directory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Event::Manager::Directory::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Directory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Event::Manager::Directory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Directory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Directory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

Native::Event::Manager::Directory::User::User()
    :
    policy{YType::str, "policy"}
{

    yang_name = "user"; yang_parent_name = "directory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Directory::User::~User()
{
}

bool Native::Event::Manager::Directory::User::has_data() const
{
    return policy.is_set;
}

bool Native::Event::Manager::Directory::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Event::Manager::Directory::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/directory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Directory::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Directory::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Directory::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Directory::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Directory::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Directory::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Directory::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Event::Manager::Environment::Environment()
    :
    name{YType::str, "name"},
    value_{YType::str, "value"}
{

    yang_name = "environment"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Environment::~Environment()
{
}

bool Native::Event::Manager::Environment::has_data() const
{
    return name.is_set
	|| value_.is_set;
}

bool Native::Event::Manager::Environment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Event::Manager::Environment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "value")
        return true;
    return false;
}

Native::Event::Manager::Session::Session()
    :
    cli(std::make_shared<Native::Event::Manager::Session::Cli>())
{
    cli->parent = this;

    yang_name = "session"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Session::~Session()
{
}

bool Native::Event::Manager::Session::has_data() const
{
    return (cli !=  nullptr && cli->has_data());
}

bool Native::Event::Manager::Session::has_operation() const
{
    return is_set(yfilter)
	|| (cli !=  nullptr && cli->has_operation());
}

std::string Native::Event::Manager::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<Native::Event::Manager::Session::Cli>();
        }
        return cli;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

    return children;
}

void Native::Event::Manager::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cli")
        return true;
    return false;
}

Native::Event::Manager::Session::Cli::Cli()
    :
    username(std::make_shared<Native::Event::Manager::Session::Cli::Username>())
{
    username->parent = this;

    yang_name = "cli"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Session::Cli::~Cli()
{
}

bool Native::Event::Manager::Session::Cli::has_data() const
{
    return (username !=  nullptr && username->has_data());
}

bool Native::Event::Manager::Session::Cli::has_operation() const
{
    return is_set(yfilter)
	|| (username !=  nullptr && username->has_operation());
}

std::string Native::Event::Manager::Session::Cli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        if(username == nullptr)
        {
            username = std::make_shared<Native::Event::Manager::Session::Cli::Username>();
        }
        return username;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(username != nullptr)
    {
        children["username"] = username;
    }

    return children;
}

void Native::Event::Manager::Session::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Session::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Session::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::Event::Manager::Session::Cli::Username::Username()
{

    yang_name = "username"; yang_parent_name = "cli"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Session::Cli::Username::~Username()
{
}

bool Native::Event::Manager::Session::Cli::Username::has_data() const
{
    for (std::size_t index=0; index<username_in_word.size(); index++)
    {
        if(username_in_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Session::Cli::Username::has_operation() const
{
    for (std::size_t index=0; index<username_in_word.size(); index++)
    {
        if(username_in_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Event::Manager::Session::Cli::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/cli/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::Cli::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::Cli::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::Cli::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username_in_word")
    {
        for(auto const & c : username_in_word)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Session::Cli::Username::UsernameInWord>();
        c->parent = this;
        username_in_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::Cli::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username_in_word)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Session::Cli::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Session::Cli::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Session::Cli::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username_in_word")
        return true;
    return false;
}

Native::Event::Manager::Session::Cli::Username::UsernameInWord::UsernameInWord()
    :
    username_in_word{YType::str, "username_in_word"},
    privilege{YType::uint8, "privilege"}
{

    yang_name = "username_in_word"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Event::Manager::Session::Cli::Username::UsernameInWord::~UsernameInWord()
{
}

bool Native::Event::Manager::Session::Cli::Username::UsernameInWord::has_data() const
{
    return username_in_word.is_set
	|| privilege.is_set;
}

bool Native::Event::Manager::Session::Cli::Username::UsernameInWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username_in_word.yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/cli/username/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username_in_word" <<"[username_in_word='" <<username_in_word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username_in_word.is_set || is_set(username_in_word.yfilter)) leaf_name_data.push_back(username_in_word.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::Cli::Username::UsernameInWord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Session::Cli::Username::UsernameInWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username_in_word")
    {
        username_in_word = value;
        username_in_word.value_namespace = name_space;
        username_in_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Session::Cli::Username::UsernameInWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username_in_word")
    {
        username_in_word.yfilter = yfilter;
    }
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Session::Cli::Username::UsernameInWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username_in_word" || name == "privilege")
        return true;
    return false;
}

Native::Exception::Exception()
    :
    crashinfo(nullptr) // presence node
{

    yang_name = "exception"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Exception::~Exception()
{
}

bool Native::Exception::has_data() const
{
    return (crashinfo !=  nullptr && crashinfo->has_data());
}

bool Native::Exception::has_operation() const
{
    return is_set(yfilter)
	|| (crashinfo !=  nullptr && crashinfo->has_operation());
}

std::string Native::Exception::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exception";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Exception::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crashinfo")
    {
        if(crashinfo == nullptr)
        {
            crashinfo = std::make_shared<Native::Exception::Crashinfo>();
        }
        return crashinfo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crashinfo != nullptr)
    {
        children["crashinfo"] = crashinfo;
    }

    return children;
}

void Native::Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Exception::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crashinfo")
        return true;
    return false;
}

Native::Exception::Crashinfo::Crashinfo()
    :
    buffersize{YType::uint16, "buffersize"}
{

    yang_name = "crashinfo"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Exception::Crashinfo::~Crashinfo()
{
}

bool Native::Exception::Crashinfo::has_data() const
{
    return buffersize.is_set;
}

bool Native::Exception::Crashinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter);
}

std::string Native::Exception::Crashinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Exception::Crashinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crashinfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Exception::Crashinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Exception::Crashinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Exception::Crashinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Exception::Crashinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffersize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Exception::Crashinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffersize")
    {
        buffersize.yfilter = yfilter;
    }
}

bool Native::Exception::Crashinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffersize")
        return true;
    return false;
}

Native::Fabric::Fabric()
    :
    switching_mode(std::make_shared<Native::Fabric::SwitchingMode>())
{
    switching_mode->parent = this;

    yang_name = "fabric"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::~Fabric()
{
}

bool Native::Fabric::has_data() const
{
    return (switching_mode !=  nullptr && switching_mode->has_data());
}

bool Native::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (switching_mode !=  nullptr && switching_mode->has_operation());
}

std::string Native::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switching-mode")
    {
        if(switching_mode == nullptr)
        {
            switching_mode = std::make_shared<Native::Fabric::SwitchingMode>();
        }
        return switching_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switching_mode != nullptr)
    {
        children["switching-mode"] = switching_mode;
    }

    return children;
}

void Native::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::SwitchingMode()
    :
    allow(std::make_shared<Native::Fabric::SwitchingMode::Allow>())
	,force(std::make_shared<Native::Fabric::SwitchingMode::Force>())
{
    allow->parent = this;
    force->parent = this;

    yang_name = "switching-mode"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::~SwitchingMode()
{
}

bool Native::Fabric::SwitchingMode::has_data() const
{
    return (allow !=  nullptr && allow->has_data())
	|| (force !=  nullptr && force->has_data());
}

bool Native::Fabric::SwitchingMode::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation())
	|| (force !=  nullptr && force->has_operation());
}

std::string Native::Fabric::SwitchingMode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Fabric::SwitchingMode::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "force")
    {
        if(force == nullptr)
        {
            force = std::make_shared<Native::Fabric::SwitchingMode::Force>();
        }
        return force;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    if(force != nullptr)
    {
        children["force"] = force;
    }

    return children;
}

void Native::Fabric::SwitchingMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::SwitchingMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::SwitchingMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "force")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Allow()
    :
    bus_mode{YType::empty, "bus-mode"}
    	,
    truncated(nullptr) // presence node
{

    yang_name = "allow"; yang_parent_name = "switching-mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::Allow::~Allow()
{
}

bool Native::Fabric::SwitchingMode::Allow::has_data() const
{
    return bus_mode.is_set
	|| (truncated !=  nullptr && truncated->has_data());
}

bool Native::Fabric::SwitchingMode::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter)
	|| (truncated !=  nullptr && truncated->has_operation());
}

std::string Native::Fabric::SwitchingMode::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "truncated")
    {
        if(truncated == nullptr)
        {
            truncated = std::make_shared<Native::Fabric::SwitchingMode::Allow::Truncated>();
        }
        return truncated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(truncated != nullptr)
    {
        children["truncated"] = truncated;
    }

    return children;
}

void Native::Fabric::SwitchingMode::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "truncated" || name == "bus-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Truncated::Truncated()
    :
    threshold{YType::uint8, "threshold"}
{

    yang_name = "truncated"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::Allow::Truncated::~Truncated()
{
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_data() const
{
    return threshold.is_set;
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Fabric::SwitchingMode::Allow::Truncated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/allow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Allow::Truncated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "truncated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Allow::Truncated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Allow::Truncated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Allow::Truncated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Force::Force()
    :
    bus_mode{YType::empty, "bus-mode"}
{

    yang_name = "force"; yang_parent_name = "switching-mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::Force::~Force()
{
}

bool Native::Fabric::SwitchingMode::Force::has_data() const
{
    return bus_mode.is_set;
}

bool Native::Fabric::SwitchingMode::Force::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter);
}

std::string Native::Fabric::SwitchingMode::Force::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Force::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Force::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Force::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Force::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fabric::SwitchingMode::Force::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Force::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Force::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bus-mode")
        return true;
    return false;
}

Native::FacilityAlarm::FacilityAlarm()
    :
    exceed_action{YType::enumeration, "exceed-action"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "facility-alarm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FacilityAlarm::~FacilityAlarm()
{
}

bool Native::FacilityAlarm::has_data() const
{
    return exceed_action.is_set
	|| severity.is_set;
}

bool Native::FacilityAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exceed_action.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::FacilityAlarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FacilityAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "facility-alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FacilityAlarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exceed_action.is_set || is_set(exceed_action.yfilter)) leaf_name_data.push_back(exceed_action.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FacilityAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FacilityAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::FacilityAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exceed-action")
    {
        exceed_action = value;
        exceed_action.value_namespace = name_space;
        exceed_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FacilityAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exceed-action")
    {
        exceed_action.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::FacilityAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action" || name == "severity")
        return true;
    return false;
}

Native::Fallback::Fallback()
    :
    profile(std::make_shared<Native::Fallback::Profile>())
{
    profile->parent = this;

    yang_name = "fallback"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::~Fallback()
{
}

bool Native::Fallback::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Fallback::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Fallback::Profile::Profile()
{

    yang_name = "profile"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::Profile::~Profile()
{
}

bool Native::Fallback::Profile::has_data() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Fallback::Profile::has_operation() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Fallback::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback-list")
    {
        for(auto const & c : fallback_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList>();
        c->parent = this;
        fallback_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fallback_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fallback::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fallback::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback-list")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::FallbackList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::Fallback::Profile::FallbackList::Ip>())
{
    ip->parent = this;

    yang_name = "fallback-list"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fallback::Profile::FallbackList::~FallbackList()
{
}

bool Native::Fallback::Profile::FallbackList::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Fallback::Profile::FallbackList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Fallback::Profile::FallbackList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fallback/Cisco-IOS-XE-dot1x:profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fallback::Profile::FallbackList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Fallback::Profile::FallbackList::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::Ip()
    :
    admission{YType::str, "admission"}
{

    yang_name = "ip"; yang_parent_name = "fallback-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Fallback::Profile::FallbackList::Ip::~Ip()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::has_data() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return admission.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::has_operation() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        for(auto const & c : access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList::Ip::AccessGroup>();
        c->parent = this;
        access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "admission")
        return true;
    return false;
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::AccessGroup()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_data() const
{
    return name.is_set
	|| in.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in")
        return true;
    return false;
}

Native::Fhrp::Fhrp()
    :
    version(std::make_shared<Native::Fhrp::Version>())
{
    version->parent = this;

    yang_name = "fhrp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fhrp::~Fhrp()
{
}

bool Native::Fhrp::has_data() const
{
    return (version !=  nullptr && version->has_data());
}

bool Native::Fhrp::has_operation() const
{
    return is_set(yfilter)
	|| (version !=  nullptr && version->has_operation());
}

std::string Native::Fhrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<Native::Fhrp::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(version != nullptr)
    {
        children["version"] = version;
    }

    return children;
}

void Native::Fhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version")
        return true;
    return false;
}

Native::Fhrp::Version::Version()
    :
    vrrp{YType::enumeration, "vrrp"}
{

    yang_name = "version"; yang_parent_name = "fhrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fhrp::Version::~Version()
{
}

bool Native::Fhrp::Version::has_data() const
{
    return vrrp.is_set;
}

bool Native::Fhrp::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrrp.yfilter);
}

std::string Native::Fhrp::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fhrp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fhrp::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fhrp::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fhrp::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fhrp::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
}

bool Native::Fhrp::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp")
        return true;
    return false;
}

Native::Flow::Flow()
{

    yang_name = "flow"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::~Flow()
{
}

bool Native::Flow::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Flow::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<record.size(); index++)
    {
        if(record[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        for(auto const & c : exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    if(child_yang_name == "record")
    {
        for(auto const & c : record)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Flow::Record>();
        c->parent = this;
        record.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exporter)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : record)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter" || name == "monitor" || name == "record")
        return true;
    return false;
}

Native::Flow::Exporter::Exporter()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dscp{YType::uint8, "dscp"},
    export_protocol{YType::enumeration, "export-protocol"},
    ttl{YType::uint8, "ttl"}
    	,
    default_(std::make_shared<Native::Flow::Exporter::Default_>())
	,destination(std::make_shared<Native::Flow::Exporter::Destination>())
	,option(std::make_shared<Native::Flow::Exporter::Option>())
	,output_features(nullptr) // presence node
	,source(std::make_shared<Native::Flow::Exporter::Source>())
	,template_(std::make_shared<Native::Flow::Exporter::Template_>())
	,transport(std::make_shared<Native::Flow::Exporter::Transport>())
{
    default_->parent = this;
    destination->parent = this;
    option->parent = this;
    source->parent = this;
    template_->parent = this;
    transport->parent = this;

    yang_name = "exporter"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::Exporter::~Exporter()
{
}

bool Native::Flow::Exporter::has_data() const
{
    return name.is_set
	|| description.is_set
	|| dscp.is_set
	|| export_protocol.is_set
	|| ttl.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (output_features !=  nullptr && output_features->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(export_protocol.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (output_features !=  nullptr && output_features->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Exporter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:exporter" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (export_protocol.is_set || is_set(export_protocol.yfilter)) leaf_name_data.push_back(export_protocol.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Exporter::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Exporter::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Exporter::Option>();
        }
        return option;
    }

    if(child_yang_name == "output-features")
    {
        if(output_features == nullptr)
        {
            output_features = std::make_shared<Native::Flow::Exporter::OutputFeatures>();
        }
        return output_features;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Exporter::Source>();
        }
        return source;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Flow::Exporter::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Exporter::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(output_features != nullptr)
    {
        children["output-features"] = output_features;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Flow::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-protocol")
    {
        export_protocol = value;
        export_protocol.value_namespace = name_space;
        export_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "export-protocol")
    {
        export_protocol.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "destination" || name == "option" || name == "output-features" || name == "source" || name == "template" || name == "transport" || name == "name" || name == "description" || name == "dscp" || name == "export-protocol" || name == "ttl")
        return true;
    return false;
}

Native::Flow::Exporter::Default_::Default_()
    :
    description{YType::empty, "description"},
    dscp{YType::empty, "dscp"},
    export_protocol{YType::empty, "export-protocol"},
    transport{YType::empty, "transport"},
    ttl{YType::empty, "ttl"}
    	,
    option(std::make_shared<Native::Flow::Exporter::Default_::Option>())
	,template_(std::make_shared<Native::Flow::Exporter::Default_::Template_>())
{
    option->parent = this;
    template_->parent = this;

    yang_name = "default"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::~Default_()
{
}

bool Native::Flow::Exporter::Default_::has_data() const
{
    return description.is_set
	|| dscp.is_set
	|| export_protocol.is_set
	|| transport.is_set
	|| ttl.is_set
	|| (option !=  nullptr && option->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::Flow::Exporter::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(export_protocol.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::Flow::Exporter::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (export_protocol.is_set || is_set(export_protocol.yfilter)) leaf_name_data.push_back(export_protocol.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Exporter::Default_::Option>();
        }
        return option;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Flow::Exporter::Default_::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::Flow::Exporter::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-protocol")
    {
        export_protocol = value;
        export_protocol.value_namespace = name_space;
        export_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "export-protocol")
    {
        export_protocol.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "template" || name == "description" || name == "dscp" || name == "export-protocol" || name == "transport" || name == "ttl")
        return true;
    return false;
}

Native::Flow::Exporter::Default_::Option::Option()
    :
    application_attributes(nullptr) // presence node
	,c3pl_class_table(nullptr) // presence node
	,c3pl_policy_table(nullptr) // presence node
	,exporter_stats(nullptr) // presence node
	,interface_table(nullptr) // presence node
	,metadata_version_table(nullptr) // presence node
	,sampler_table(nullptr) // presence node
	,sub_application_table(nullptr) // presence node
	,vrf_table(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::~Option()
{
}

bool Native::Flow::Exporter::Default_::Option::has_data() const
{
    return (application_attributes !=  nullptr && application_attributes->has_data())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_data())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_data())
	|| (exporter_stats !=  nullptr && exporter_stats->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_data())
	|| (sampler_table !=  nullptr && sampler_table->has_data())
	|| (sub_application_table !=  nullptr && sub_application_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Native::Flow::Exporter::Default_::Option::has_operation() const
{
    return is_set(yfilter)
	|| (application_attributes !=  nullptr && application_attributes->has_operation())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_operation())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_operation())
	|| (exporter_stats !=  nullptr && exporter_stats->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_operation())
	|| (sampler_table !=  nullptr && sampler_table->has_operation())
	|| (sub_application_table !=  nullptr && sub_application_table->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string Native::Flow::Exporter::Default_::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-attributes")
    {
        if(application_attributes == nullptr)
        {
            application_attributes = std::make_shared<Native::Flow::Exporter::Default_::Option::ApplicationAttributes>();
        }
        return application_attributes;
    }

    if(child_yang_name == "c3pl-class-table")
    {
        if(c3pl_class_table == nullptr)
        {
            c3pl_class_table = std::make_shared<Native::Flow::Exporter::Default_::Option::C3PlClassTable>();
        }
        return c3pl_class_table;
    }

    if(child_yang_name == "c3pl-policy-table")
    {
        if(c3pl_policy_table == nullptr)
        {
            c3pl_policy_table = std::make_shared<Native::Flow::Exporter::Default_::Option::C3PlPolicyTable>();
        }
        return c3pl_policy_table;
    }

    if(child_yang_name == "exporter-stats")
    {
        if(exporter_stats == nullptr)
        {
            exporter_stats = std::make_shared<Native::Flow::Exporter::Default_::Option::ExporterStats>();
        }
        return exporter_stats;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Native::Flow::Exporter::Default_::Option::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "metadata-version-table")
    {
        if(metadata_version_table == nullptr)
        {
            metadata_version_table = std::make_shared<Native::Flow::Exporter::Default_::Option::MetadataVersionTable>();
        }
        return metadata_version_table;
    }

    if(child_yang_name == "sampler-table")
    {
        if(sampler_table == nullptr)
        {
            sampler_table = std::make_shared<Native::Flow::Exporter::Default_::Option::SamplerTable>();
        }
        return sampler_table;
    }

    if(child_yang_name == "sub-application-table")
    {
        if(sub_application_table == nullptr)
        {
            sub_application_table = std::make_shared<Native::Flow::Exporter::Default_::Option::SubApplicationTable>();
        }
        return sub_application_table;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Native::Flow::Exporter::Default_::Option::VrfTable>();
        }
        return vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_attributes != nullptr)
    {
        children["application-attributes"] = application_attributes;
    }

    if(c3pl_class_table != nullptr)
    {
        children["c3pl-class-table"] = c3pl_class_table;
    }

    if(c3pl_policy_table != nullptr)
    {
        children["c3pl-policy-table"] = c3pl_policy_table;
    }

    if(exporter_stats != nullptr)
    {
        children["exporter-stats"] = exporter_stats;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(metadata_version_table != nullptr)
    {
        children["metadata-version-table"] = metadata_version_table;
    }

    if(sampler_table != nullptr)
    {
        children["sampler-table"] = sampler_table;
    }

    if(sub_application_table != nullptr)
    {
        children["sub-application-table"] = sub_application_table;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    return children;
}

void Native::Flow::Exporter::Default_::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-attributes" || name == "c3pl-class-table" || name == "c3pl-policy-table" || name == "exporter-stats" || name == "interface-table" || name == "metadata-version-table" || name == "sampler-table" || name == "sub-application-table" || name == "vrf-table")
        return true;
    return false;
}

Native::Flow::Exporter::Default_::Option::ApplicationAttributes::ApplicationAttributes()
{

    yang_name = "application-attributes"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::ApplicationAttributes::~ApplicationAttributes()
{
}

bool Native::Flow::Exporter::Default_::Option::ApplicationAttributes::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::ApplicationAttributes::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::ApplicationAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::ApplicationAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::ApplicationAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::ApplicationAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::C3PlClassTable::C3PlClassTable()
{

    yang_name = "c3pl-class-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::C3PlClassTable::~C3PlClassTable()
{
}

bool Native::Flow::Exporter::Default_::Option::C3PlClassTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::C3PlClassTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::C3PlClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::C3PlClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::C3PlClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::C3PlClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::C3PlPolicyTable()
{

    yang_name = "c3pl-policy-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::~C3PlPolicyTable()
{
}

bool Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::C3PlPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::ExporterStats::ExporterStats()
{

    yang_name = "exporter-stats"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::ExporterStats::~ExporterStats()
{
}

bool Native::Flow::Exporter::Default_::Option::ExporterStats::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::ExporterStats::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::ExporterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::ExporterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::ExporterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::ExporterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::ExporterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::ExporterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::ExporterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::InterfaceTable::InterfaceTable()
{

    yang_name = "interface-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::InterfaceTable::~InterfaceTable()
{
}

bool Native::Flow::Exporter::Default_::Option::InterfaceTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::InterfaceTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::MetadataVersionTable::MetadataVersionTable()
{

    yang_name = "metadata-version-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::MetadataVersionTable::~MetadataVersionTable()
{
}

bool Native::Flow::Exporter::Default_::Option::MetadataVersionTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::MetadataVersionTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-version-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::MetadataVersionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::MetadataVersionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::MetadataVersionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::MetadataVersionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::SamplerTable::SamplerTable()
{

    yang_name = "sampler-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::SamplerTable::~SamplerTable()
{
}

bool Native::Flow::Exporter::Default_::Option::SamplerTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::SamplerTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::SamplerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::SamplerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::SamplerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::SamplerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::SamplerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::SamplerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::SamplerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::SubApplicationTable::SubApplicationTable()
{

    yang_name = "sub-application-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::SubApplicationTable::~SubApplicationTable()
{
}

bool Native::Flow::Exporter::Default_::Option::SubApplicationTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::SubApplicationTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-application-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::SubApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::SubApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::SubApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::SubApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Option::VrfTable::VrfTable()
{

    yang_name = "vrf-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Option::VrfTable::~VrfTable()
{
}

bool Native::Flow::Exporter::Default_::Option::VrfTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default_::Option::VrfTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default_::Option::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Option::VrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Option::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Option::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Option::VrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Option::VrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Option::VrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default_::Template_::Template_()
    :
    data(std::make_shared<Native::Flow::Exporter::Default_::Template_::Data>())
{
    data->parent = this;

    yang_name = "template"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Template_::~Template_()
{
}

bool Native::Flow::Exporter::Default_::Template_::has_data() const
{
    return (data !=  nullptr && data->has_data());
}

bool Native::Flow::Exporter::Default_::Template_::has_operation() const
{
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Flow::Exporter::Default_::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Flow::Exporter::Default_::Template_::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Flow::Exporter::Default_::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default_::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default_::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Native::Flow::Exporter::Default_::Template_::Data::Data()
    :
    timeout{YType::empty, "timeout"}
{

    yang_name = "data"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default_::Template_::Data::~Data()
{
}

bool Native::Flow::Exporter::Default_::Template_::Data::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Default_::Template_::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Default_::Template_::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default_::Template_::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default_::Template_::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default_::Template_::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Default_::Template_::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Default_::Template_::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Default_::Template_::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Destination::Destination()
    :
    ip{YType::str, "ip"},
    vrf{YType::str, "vrf"}
{

    yang_name = "destination"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Destination::~Destination()
{
}

bool Native::Flow::Exporter::Destination::has_data() const
{
    return ip.is_set
	|| vrf.is_set;
}

bool Native::Flow::Exporter::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Flow::Exporter::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Exporter::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "vrf")
        return true;
    return false;
}

Native::Flow::Exporter::Option::Option()
    :
    application_attributes(nullptr) // presence node
	,application_table(nullptr) // presence node
	,c3pl_class_table(nullptr) // presence node
	,c3pl_policy_table(nullptr) // presence node
	,exporter_stats(nullptr) // presence node
	,interface_table(nullptr) // presence node
	,metadata_version_table(nullptr) // presence node
	,sampler_table(nullptr) // presence node
	,sub_application_table(nullptr) // presence node
	,vrf_table(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::~Option()
{
}

bool Native::Flow::Exporter::Option::has_data() const
{
    return (application_attributes !=  nullptr && application_attributes->has_data())
	|| (application_table !=  nullptr && application_table->has_data())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_data())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_data())
	|| (exporter_stats !=  nullptr && exporter_stats->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_data())
	|| (sampler_table !=  nullptr && sampler_table->has_data())
	|| (sub_application_table !=  nullptr && sub_application_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Native::Flow::Exporter::Option::has_operation() const
{
    return is_set(yfilter)
	|| (application_attributes !=  nullptr && application_attributes->has_operation())
	|| (application_table !=  nullptr && application_table->has_operation())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_operation())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_operation())
	|| (exporter_stats !=  nullptr && exporter_stats->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_operation())
	|| (sampler_table !=  nullptr && sampler_table->has_operation())
	|| (sub_application_table !=  nullptr && sub_application_table->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string Native::Flow::Exporter::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-attributes")
    {
        if(application_attributes == nullptr)
        {
            application_attributes = std::make_shared<Native::Flow::Exporter::Option::ApplicationAttributes>();
        }
        return application_attributes;
    }

    if(child_yang_name == "application-table")
    {
        if(application_table == nullptr)
        {
            application_table = std::make_shared<Native::Flow::Exporter::Option::ApplicationTable>();
        }
        return application_table;
    }

    if(child_yang_name == "c3pl-class-table")
    {
        if(c3pl_class_table == nullptr)
        {
            c3pl_class_table = std::make_shared<Native::Flow::Exporter::Option::C3PlClassTable>();
        }
        return c3pl_class_table;
    }

    if(child_yang_name == "c3pl-policy-table")
    {
        if(c3pl_policy_table == nullptr)
        {
            c3pl_policy_table = std::make_shared<Native::Flow::Exporter::Option::C3PlPolicyTable>();
        }
        return c3pl_policy_table;
    }

    if(child_yang_name == "exporter-stats")
    {
        if(exporter_stats == nullptr)
        {
            exporter_stats = std::make_shared<Native::Flow::Exporter::Option::ExporterStats>();
        }
        return exporter_stats;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Native::Flow::Exporter::Option::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "metadata-version-table")
    {
        if(metadata_version_table == nullptr)
        {
            metadata_version_table = std::make_shared<Native::Flow::Exporter::Option::MetadataVersionTable>();
        }
        return metadata_version_table;
    }

    if(child_yang_name == "sampler-table")
    {
        if(sampler_table == nullptr)
        {
            sampler_table = std::make_shared<Native::Flow::Exporter::Option::SamplerTable>();
        }
        return sampler_table;
    }

    if(child_yang_name == "sub-application-table")
    {
        if(sub_application_table == nullptr)
        {
            sub_application_table = std::make_shared<Native::Flow::Exporter::Option::SubApplicationTable>();
        }
        return sub_application_table;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Native::Flow::Exporter::Option::VrfTable>();
        }
        return vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_attributes != nullptr)
    {
        children["application-attributes"] = application_attributes;
    }

    if(application_table != nullptr)
    {
        children["application-table"] = application_table;
    }

    if(c3pl_class_table != nullptr)
    {
        children["c3pl-class-table"] = c3pl_class_table;
    }

    if(c3pl_policy_table != nullptr)
    {
        children["c3pl-policy-table"] = c3pl_policy_table;
    }

    if(exporter_stats != nullptr)
    {
        children["exporter-stats"] = exporter_stats;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(metadata_version_table != nullptr)
    {
        children["metadata-version-table"] = metadata_version_table;
    }

    if(sampler_table != nullptr)
    {
        children["sampler-table"] = sampler_table;
    }

    if(sub_application_table != nullptr)
    {
        children["sub-application-table"] = sub_application_table;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    return children;
}

void Native::Flow::Exporter::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-attributes" || name == "application-table" || name == "c3pl-class-table" || name == "c3pl-policy-table" || name == "exporter-stats" || name == "interface-table" || name == "metadata-version-table" || name == "sampler-table" || name == "sub-application-table" || name == "vrf-table")
        return true;
    return false;
}

const Enum::YLeaf Native::Domain::Vrf::Border::Master::local {0, "local"};

const Enum::YLeaf Native::Domain::Vrf::Border::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Domain::Vrf::Border::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::MitigationMode::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnit::hours {0, "hours"};
const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnit::minutes {1, "minutes"};

const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::best_effort {0, "best-effort"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::custom {2, "custom"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::low_latency_data {3, "low-latency-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::real_time_video {4, "real-time-video"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::scavenger {5, "scavenger"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class_::Match::Dscp::Policy::voice {6, "voice"};

const Enum::YLeaf Native::Domain::Vrf::Master::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Domain::Vrf::Master::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Dot1X::Credentials::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Dot1X::Credentials::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Enable::LastResort::password {0, "password"};
const Enum::YLeaf Native::Enable::LastResort::succeed {1, "succeed"};

const Enum::YLeaf Native::Enable::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Enable::Secret::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Enable::Secret::Type::Y_4 {1, "4"};
const Enum::YLeaf Native::Enable::Secret::Type::Y_5 {2, "5"};

const Enum::YLeaf Native::Event::Manager::Applet::Authorization::bypass {0, "bypass"};

const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::counter {0, "counter"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::gauge {1, "gauge"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::int_ {2, "int"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::ipv4 {3, "ipv4"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::octet {4, "octet"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::string {5, "string"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::uint {6, "uint"};

const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::any {0, "any"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::down {1, "down"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::up {2, "up"};

const Enum::YLeaf Native::FacilityAlarm::Severity::critical {0, "critical"};

const Enum::YLeaf Native::FacilityAlarm::ExceedAction::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Fhrp::Version::Vrrp::v2 {0, "v2"};
const Enum::YLeaf Native::Fhrp::Version::Vrrp::v3 {1, "v3"};

const Enum::YLeaf Native::Flow::Exporter::ExportProtocol::ipfix {0, "ipfix"};
const Enum::YLeaf Native::Flow::Exporter::ExportProtocol::netflow_v5 {1, "netflow-v5"};
const Enum::YLeaf Native::Flow::Exporter::ExportProtocol::netflow_v9 {2, "netflow-v9"};


}
}

