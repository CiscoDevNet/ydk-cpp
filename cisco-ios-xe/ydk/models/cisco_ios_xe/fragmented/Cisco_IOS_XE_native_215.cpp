
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_215.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Diagnostic::Schedule::Switch::Test::PerPort::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::EtAnalytics::EtAnalytics()
    :
    inactive_timeout{YType::uint32, "inactive-timeout"}
    	,
    ip(std::make_shared<Native::EtAnalytics::Ip>())
	,whitelist(std::make_shared<Native::EtAnalytics::Whitelist>())
{
    ip->parent = this;
    whitelist->parent = this;

    yang_name = "et-analytics"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::EtAnalytics::~EtAnalytics()
{
}

bool Native::EtAnalytics::has_data() const
{
    return inactive_timeout.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactive_timeout.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::EtAnalytics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactive_timeout.is_set || is_set(inactive_timeout.yfilter)) leaf_name_data.push_back(inactive_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::EtAnalytics::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::EtAnalytics::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactive-timeout")
    {
        inactive_timeout = value;
        inactive_timeout.value_namespace = name_space;
        inactive_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactive-timeout")
    {
        inactive_timeout.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "whitelist" || name == "inactive-timeout")
        return true;
    return false;
}

Native::EtAnalytics::Ip::Ip()
    :
    flow_export(std::make_shared<Native::EtAnalytics::Ip::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "ip"; yang_parent_name = "et-analytics"; is_top_level_class = false; has_list_ancestor = false;
}

Native::EtAnalytics::Ip::~Ip()
{
}

bool Native::EtAnalytics::Ip::has_data() const
{
    return (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::EtAnalytics::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::EtAnalytics::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::EtAnalytics::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::EtAnalytics::Ip::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::EtAnalytics::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_export != nullptr)
    {
        children["flow-export"] = flow_export;
    }

    return children;
}

void Native::EtAnalytics::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::FlowExport()
    :
    destination_vrf(std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf>())
{
    destination_vrf->parent = this;

    yang_name = "flow-export"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::EtAnalytics::Ip::FlowExport::~FlowExport()
{
}

bool Native::EtAnalytics::Ip::FlowExport::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return (destination_vrf !=  nullptr && destination_vrf->has_data());
}

bool Native::EtAnalytics::Ip::FlowExport::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (destination_vrf !=  nullptr && destination_vrf->has_operation());
}

std::string Native::EtAnalytics::Ip::FlowExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::EtAnalytics::Ip::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto c = std::make_shared<Native::EtAnalytics::Ip::FlowExport::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    if(child_yang_name == "destination-vrf")
    {
        if(destination_vrf == nullptr)
        {
            destination_vrf = std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf>();
        }
        return destination_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::EtAnalytics::Ip::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(destination_vrf != nullptr)
    {
        children["destination-vrf"] = destination_vrf;
    }

    return children;
}

void Native::EtAnalytics::Ip::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "destination-vrf")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::Destination::Destination()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"}
{

    yang_name = "destination"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false;
}

Native::EtAnalytics::Ip::FlowExport::Destination::~Destination()
{
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_data() const
{
    return address.is_set
	|| port.is_set;
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[address='" <<address <<"']" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::EtAnalytics::Ip::FlowExport::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::EtAnalytics::Ip::FlowExport::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::EtAnalytics::Ip::FlowExport::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Ip::FlowExport::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::DestinationVrf()
{

    yang_name = "destination-vrf"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::~DestinationVrf()
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto c = std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::Destination()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    vrf{YType::str, "vrf"}
{

    yang_name = "destination"; yang_parent_name = "destination-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::~Destination()
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_data() const
{
    return address.is_set
	|| port.is_set
	|| vrf.is_set;
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/destination-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[address='" <<address <<"']" <<"[port='" <<port <<"']" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "vrf")
        return true;
    return false;
}

Native::EtAnalytics::Whitelist::Whitelist()
    :
    acl{YType::str, "acl"}
{

    yang_name = "whitelist"; yang_parent_name = "et-analytics"; is_top_level_class = false; has_list_ancestor = false;
}

Native::EtAnalytics::Whitelist::~Whitelist()
{
}

bool Native::EtAnalytics::Whitelist::has_data() const
{
    return acl.is_set;
}

bool Native::EtAnalytics::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::EtAnalytics::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::EtAnalytics::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::EtAnalytics::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::EtAnalytics::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl")
        return true;
    return false;
}

Native::FabricGroup::FabricGroup()
    :
    fabric(std::make_shared<Native::FabricGroup::Fabric>())
{
    fabric->parent = this;

    yang_name = "fabric-group"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::~FabricGroup()
{
}

bool Native::FabricGroup::has_data() const
{
    return (fabric !=  nullptr && fabric->has_data());
}

bool Native::FabricGroup::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation());
}

std::string Native::FabricGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-iwanfabric:fabric-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Native::FabricGroup::Fabric>();
        }
        return fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabric != nullptr)
    {
        children["fabric"] = fabric;
    }

    return children;
}

void Native::FabricGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Fabric()
    :
    auto_(nullptr) // presence node
{

    yang_name = "fabric"; yang_parent_name = "fabric-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::~Fabric()
{
}

bool Native::FabricGroup::Fabric::has_data() const
{
    return (auto_ !=  nullptr && auto_->has_data());
}

bool Native::FabricGroup::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::FabricGroup::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::FabricGroup::Fabric::Auto>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    return children;
}

void Native::FabricGroup::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::Auto()
    :
    config_fabric_auto(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto>())
{
    config_fabric_auto->parent = this;

    yang_name = "auto"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::~Auto()
{
}

bool Native::FabricGroup::Fabric::Auto::has_data() const
{
    return (config_fabric_auto !=  nullptr && config_fabric_auto->has_data());
}

bool Native::FabricGroup::Fabric::Auto::has_operation() const
{
    return is_set(yfilter)
	|| (config_fabric_auto !=  nullptr && config_fabric_auto->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-auto")
    {
        if(config_fabric_auto == nullptr)
        {
            config_fabric_auto = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto>();
        }
        return config_fabric_auto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_fabric_auto != nullptr)
    {
        children["config-fabric-auto"] = config_fabric_auto;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-auto")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::ConfigFabricAuto()
    :
    domain(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain>())
{
    domain->parent = this;

    yang_name = "config-fabric-auto"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::~ConfigFabricAuto()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::has_data() const
{
    return (domain !=  nullptr && domain->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::has_operation() const
{
    return is_set(yfilter)
	|| (domain !=  nullptr && domain->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain>();
        }
        return domain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::Domain()
    :
    iwan_fabric(nullptr) // presence node
{

    yang_name = "domain"; yang_parent_name = "config-fabric-auto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::~Domain()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::has_data() const
{
    return (iwan_fabric !=  nullptr && iwan_fabric->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::has_operation() const
{
    return is_set(yfilter)
	|| (iwan_fabric !=  nullptr && iwan_fabric->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iwan-fabric")
    {
        if(iwan_fabric == nullptr)
        {
            iwan_fabric = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric>();
        }
        return iwan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iwan_fabric != nullptr)
    {
        children["iwan-fabric"] = iwan_fabric;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iwan-fabric")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::IwanFabric()
    :
    config_fabric_iwan(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan>())
{
    config_fabric_iwan->parent = this;

    yang_name = "iwan-fabric"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::~IwanFabric()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::has_data() const
{
    return (config_fabric_iwan !=  nullptr && config_fabric_iwan->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::has_operation() const
{
    return is_set(yfilter)
	|| (config_fabric_iwan !=  nullptr && config_fabric_iwan->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iwan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-iwan")
    {
        if(config_fabric_iwan == nullptr)
        {
            config_fabric_iwan = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan>();
        }
        return config_fabric_iwan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_fabric_iwan != nullptr)
    {
        children["config-fabric-iwan"] = config_fabric_iwan;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-iwan")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ConfigFabricIwan()
    :
    fabric_device_id{YType::uint16, "fabric-device-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    border(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border>())
	,control_plane(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane>())
	,device_role(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole>())
	,region(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region>())
	,site(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site>())
	,tenant(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant>())
	,virtual_network(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork>())
{
    border->parent = this;
    control_plane->parent = this;
    device_role->parent = this;
    region->parent = this;
    site->parent = this;
    tenant->parent = this;
    virtual_network->parent = this;

    yang_name = "config-fabric-iwan"; yang_parent_name = "iwan-fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::~ConfigFabricIwan()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::has_data() const
{
    return fabric_device_id.is_set
	|| shutdown.is_set
	|| (border !=  nullptr && border->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (device_role !=  nullptr && device_role->has_data())
	|| (region !=  nullptr && region->has_data())
	|| (site !=  nullptr && site->has_data())
	|| (tenant !=  nullptr && tenant->has_data())
	|| (virtual_network !=  nullptr && virtual_network->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabric_device_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (border !=  nullptr && border->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (region !=  nullptr && region->has_operation())
	|| (site !=  nullptr && site->has_operation())
	|| (tenant !=  nullptr && tenant->has_operation())
	|| (virtual_network !=  nullptr && virtual_network->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-iwan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabric_device_id.is_set || is_set(fabric_device_id.yfilter)) leaf_name_data.push_back(fabric_device_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border>();
        }
        return border;
    }

    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane>();
        }
        return control_plane;
    }

    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "region")
    {
        if(region == nullptr)
        {
            region = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region>();
        }
        return region;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site>();
        }
        return site;
    }

    if(child_yang_name == "tenant")
    {
        if(tenant == nullptr)
        {
            tenant = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant>();
        }
        return tenant;
    }

    if(child_yang_name == "virtual-network")
    {
        if(virtual_network == nullptr)
        {
            virtual_network = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork>();
        }
        return virtual_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(control_plane != nullptr)
    {
        children["control-plane"] = control_plane;
    }

    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
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

    if(virtual_network != nullptr)
    {
        children["virtual-network"] = virtual_network;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabric-device-id")
    {
        fabric_device_id = value;
        fabric_device_id.value_namespace = name_space;
        fabric_device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabric-device-id")
    {
        fabric_device_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "control-plane" || name == "device-role" || name == "region" || name == "site" || name == "tenant" || name == "virtual-network" || name == "fabric-device-id" || name == "shutdown")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::Border()
    :
    self{YType::empty, "self"}
{

    yang_name = "border"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::~Border()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::has_data() const
{
    return self.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(self.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (self.is_set || is_set(self.yfilter)) leaf_name_data.push_back(self.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "self")
    {
        self = value;
        self.value_namespace = name_space;
        self.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "self")
    {
        self.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "self")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::ControlPlane()
    :
    destination_address(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress>())
	,source_address(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress>())
{
    destination_address->parent = this;
    source_address->parent = this;

    yang_name = "control-plane"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::~ControlPlane()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::has_data() const
{
    return (destination_address !=  nullptr && destination_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "source-address")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::DestinationAddress()
{

    yang_name = "destination-address"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::~DestinationAddress()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
    	,
    auth_key(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey>())
{
    auth_key->parent = this;

    yang_name = "ipv4"; yang_parent_name = "destination-address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::~Ipv4()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::has_data() const
{
    return ipv4.is_set
	|| (auth_key !=  nullptr && auth_key->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (auth_key !=  nullptr && auth_key->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/control-plane/destination-address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-key")
    {
        if(auth_key == nullptr)
        {
            auth_key = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey>();
        }
        return auth_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auth_key != nullptr)
    {
        children["auth-key"] = auth_key;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "ipv4")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::AuthKey()
{

    yang_name = "auth-key"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::~AuthKey()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::Range()
    :
    range{YType::uint16, "range"},
    word{YType::str, "word"}
{

    yang_name = "range"; yang_parent_name = "auth-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::has_data() const
{
    return range.is_set
	|| word.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::DestinationAddress::Ipv4::AuthKey::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::SourceAddress()
    :
    interface{YType::str, "interface"}
{

    yang_name = "source-address"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::~SourceAddress()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::has_data() const
{
    return interface.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::ControlPlane::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::DeviceRole()
    :
    border{YType::empty, "border"},
    edge{YType::empty, "edge"},
    nat_traversal_router{YType::empty, "nat-traversal-router"},
    transit_router{YType::empty, "transit-router"}
{

    yang_name = "device-role"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::~DeviceRole()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::has_data() const
{
    return border.is_set
	|| edge.is_set
	|| nat_traversal_router.is_set
	|| transit_router.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(nat_traversal_router.yfilter)
	|| ydk::is_set(transit_router.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (nat_traversal_router.is_set || is_set(nat_traversal_router.yfilter)) leaf_name_data.push_back(nat_traversal_router.get_name_leafdata());
    if (transit_router.is_set || is_set(transit_router.yfilter)) leaf_name_data.push_back(transit_router.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nat-traversal-router")
    {
        nat_traversal_router = value;
        nat_traversal_router.value_namespace = name_space;
        nat_traversal_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-router")
    {
        transit_router = value;
        transit_router.value_namespace = name_space;
        transit_router.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "nat-traversal-router")
    {
        nat_traversal_router.yfilter = yfilter;
    }
    if(value_path == "transit-router")
    {
        transit_router.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "edge" || name == "nat-traversal-router" || name == "transit-router")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Region()
    :
    id(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id>())
{
    id->parent = this;

    yang_name = "region"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::~Region()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Id()
{

    yang_name = "id"; yang_parent_name = "region"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/region/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::Range()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::has_data() const
{
    return range.is_set
	|| name.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/region/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Region::Id::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Site()
    :
    id(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id>())
{
    id->parent = this;

    yang_name = "site"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::~Site()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Id()
{

    yang_name = "id"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::Range()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::has_data() const
{
    return range.is_set
	|| name.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/site/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Site::Id::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Tenant()
    :
    id(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id>())
{
    id->parent = this;

    yang_name = "tenant"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::~Tenant()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Id()
{

    yang_name = "id"; yang_parent_name = "tenant"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/tenant/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::Range()
    :
    range{YType::uint32, "range"},
    name{YType::str, "name"}
{

    yang_name = "range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::~Range()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::has_data() const
{
    return range.is_set
	|| name.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/tenant/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::Tenant::Id::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::VirtualNetwork()
    :
    name(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name>())
{
    name->parent = this;

    yang_name = "virtual-network"; yang_parent_name = "config-fabric-iwan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::~VirtualNetwork()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::has_data() const
{
    return (name !=  nullptr && name->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Name()
{

    yang_name = "name"; yang_parent_name = "virtual-network"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::~Name()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::has_data() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::has_operation() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/virtual-network/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word>();
        c->parent = this;
        word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Word()
    :
    word{YType::str, "word"}
{

    yang_name = "word"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::~Word()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return word.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-iwanfabric:fabric-group/fabric/auto/config-fabric-auto/domain/iwan-fabric/config-fabric-iwan/virtual-network/name/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::Id()
    :
    range{YType::uint32, "range"}
    	,
    config_fabric_iwan_virtual_network(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork>())
{
    config_fabric_iwan_virtual_network->parent = this;

    yang_name = "id"; yang_parent_name = "word"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::~Id()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::has_data() const
{
    return range.is_set
	|| (config_fabric_iwan_virtual_network !=  nullptr && config_fabric_iwan_virtual_network->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (config_fabric_iwan_virtual_network !=  nullptr && config_fabric_iwan_virtual_network->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-iwan-virtual-network")
    {
        if(config_fabric_iwan_virtual_network == nullptr)
        {
            config_fabric_iwan_virtual_network = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork>();
        }
        return config_fabric_iwan_virtual_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_fabric_iwan_virtual_network != nullptr)
    {
        children["config-fabric-iwan-virtual-network"] = config_fabric_iwan_virtual_network;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-iwan-virtual-network" || name == "range")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::ConfigFabricIwanVirtualNetwork()
    :
    enterprise_prefix(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix>())
	,prefix_group(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup>())
{
    enterprise_prefix->parent = this;
    prefix_group->parent = this;

    yang_name = "config-fabric-iwan-virtual-network"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::~ConfigFabricIwanVirtualNetwork()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::has_data() const
{
    return (enterprise_prefix !=  nullptr && enterprise_prefix->has_data())
	|| (prefix_group !=  nullptr && prefix_group->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_operation())
	|| (prefix_group !=  nullptr && prefix_group->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-iwan-virtual-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enterprise-prefix")
    {
        if(enterprise_prefix == nullptr)
        {
            enterprise_prefix = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix>();
        }
        return enterprise_prefix;
    }

    if(child_yang_name == "prefix-group")
    {
        if(prefix_group == nullptr)
        {
            prefix_group = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup>();
        }
        return prefix_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(enterprise_prefix != nullptr)
    {
        children["enterprise-prefix"] = enterprise_prefix;
    }

    if(prefix_group != nullptr)
    {
        children["prefix-group"] = prefix_group;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enterprise-prefix" || name == "prefix-group")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::EnterprisePrefix()
    :
    ipv4(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4>())
	,ipv6(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "enterprise-prefix"; yang_parent_name = "config-fabric-iwan-virtual-network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::~EnterprisePrefix()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::Ipv4()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv4"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::~Ipv4()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::has_data() const
{
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::Ipv6()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv6"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::~Ipv6()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::has_data() const
{
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::EnterprisePrefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::PrefixGroup()
{

    yang_name = "prefix-group"; yang_parent_name = "config-fabric-iwan-virtual-network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::~PrefixGroup()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::has_data() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::has_operation() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_>();
        c->parent = this;
        word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Word_()
    :
    word{YType::str, "word"}
{

    yang_name = "word"; yang_parent_name = "prefix-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return word.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::Vrf()
    :
    word{YType::str, "word"}
    	,
    config_fabric_iwan_virtual_network_prefix_group(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup>())
{
    config_fabric_iwan_virtual_network_prefix_group->parent = this;

    yang_name = "vrf"; yang_parent_name = "word"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::~Vrf()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::has_data() const
{
    return word.is_set
	|| (config_fabric_iwan_virtual_network_prefix_group !=  nullptr && config_fabric_iwan_virtual_network_prefix_group->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (config_fabric_iwan_virtual_network_prefix_group !=  nullptr && config_fabric_iwan_virtual_network_prefix_group->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-fabric-iwan-virtual-network-prefix-group")
    {
        if(config_fabric_iwan_virtual_network_prefix_group == nullptr)
        {
            config_fabric_iwan_virtual_network_prefix_group = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup>();
        }
        return config_fabric_iwan_virtual_network_prefix_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_fabric_iwan_virtual_network_prefix_group != nullptr)
    {
        children["config-fabric-iwan-virtual-network-prefix-group"] = config_fabric_iwan_virtual_network_prefix_group;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-fabric-iwan-virtual-network-prefix-group" || name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::ConfigFabricIwanVirtualNetworkPrefixGroup()
    :
    prefix(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix>())
{
    prefix->parent = this;

    yang_name = "config-fabric-iwan-virtual-network-prefix-group"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::~ConfigFabricIwanVirtualNetworkPrefixGroup()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::has_data() const
{
    return (prefix !=  nullptr && prefix->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::has_operation() const
{
    return is_set(yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-fabric-iwan-virtual-network-prefix-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Prefix()
    :
    import(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import>())
	,ipv4(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4>())
	,ipv6(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6>())
{
    import->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "prefix"; yang_parent_name = "config-fabric-iwan-virtual-network-prefix-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::~Prefix()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::has_data() const
{
    return (import !=  nullptr && import->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (import !=  nullptr && import->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import>();
        }
        return import;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(import != nullptr)
    {
        children["import"] = import;
    }

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

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Import()
    :
    bgp(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp>())
	,eigrp(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp>())
	,isis(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis>())
	,lan_fabric(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric>())
	,ospf(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf>())
	,rip(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip>())
	,wan_fabric(std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric>())
{
    bgp->parent = this;
    eigrp->parent = this;
    isis->parent = this;
    lan_fabric->parent = this;
    ospf->parent = this;
    rip->parent = this;
    wan_fabric->parent = this;

    yang_name = "import"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::~Import()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lan_fabric !=  nullptr && lan_fabric->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (wan_fabric !=  nullptr && wan_fabric->has_data());
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lan_fabric !=  nullptr && lan_fabric->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (wan_fabric !=  nullptr && wan_fabric->has_operation());
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lan-fabric")
    {
        if(lan_fabric == nullptr)
        {
            lan_fabric = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric>();
        }
        return lan_fabric;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "wan-fabric")
    {
        if(wan_fabric == nullptr)
        {
            wan_fabric = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric>();
        }
        return wan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(lan_fabric != nullptr)
    {
        children["lan-fabric"] = lan_fabric;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(wan_fabric != nullptr)
    {
        children["wan-fabric"] = wan_fabric;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "lan-fabric" || name == "ospf" || name == "rip" || name == "wan-fabric")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Bgp()
{

    yang_name = "bgp"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::~Bgp()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::has_data() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::has_operation() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_>();
        c->parent = this;
        word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::has_data() const
{
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Bgp::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Eigrp()
{

    yang_name = "eigrp"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::~Eigrp()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::has_data() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_>();
        c->parent = this;
        word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::has_data() const
{
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Eigrp::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Isis()
{

    yang_name = "isis"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::~Isis()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::has_data() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::has_operation() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_>();
        c->parent = this;
        word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::has_data() const
{
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Isis::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::LanFabric()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "lan-fabric"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::~LanFabric()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::has_data() const
{
    return route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::LanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Ospf()
{

    yang_name = "ospf"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::~Ospf()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::has_data() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::has_operation() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_>();
        c->parent = this;
        word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::has_data() const
{
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Ospf::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Rip()
{

    yang_name = "rip"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::~Rip()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::has_data() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::has_operation() const
{
    for (std::size_t index=0; index<word.size(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto c = std::make_shared<Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_>();
        c->parent = this;
        word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : word)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::Word_()
    :
    word{YType::str, "word"},
    route_map{YType::str, "route-map"}
{

    yang_name = "word"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::~Word_()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::has_data() const
{
    return word.is_set
	|| route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::Rip::Word_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::WanFabric()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "wan-fabric"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::~WanFabric()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::has_data() const
{
    return route_map.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Import::WanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::Ipv4()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv4"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::~Ipv4()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::has_data() const
{
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::Ipv6()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv6"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::~Ipv6()
{
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::has_data() const
{
    return prefix_list.is_set;
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::FabricGroup::Fabric::Auto::ConfigFabricAuto::Domain::IwanFabric::ConfigFabricIwan::VirtualNetwork::Name::Word::Id::ConfigFabricIwanVirtualNetwork::PrefixGroup::Word_::Vrf::ConfigFabricIwanVirtualNetworkPrefixGroup::Prefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
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
    char count=0;
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
    char count=0;
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
	,ipmulticast(std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast>())
{
    router->parent = this;
    shutdown->parent = this;
    ipmulticast->parent = this;

    yang_name = "config-maintenance-templ"; yang_parent_name = "maintenance-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::~ConfigMaintenanceTempl()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ipmulticast !=  nullptr && ipmulticast->has_data());
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ipmulticast !=  nullptr && ipmulticast->has_operation());
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

    if(child_yang_name == "ipmulticast")
    {
        if(ipmulticast == nullptr)
        {
            ipmulticast = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast>();
        }
        return ipmulticast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ipmulticast != nullptr)
    {
        children["ipmulticast"] = ipmulticast;
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
    if(name == "router" || name == "shutdown" || name == "ipmulticast")
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
    char count=0;
    count = 0;
    for (auto const & c : routing_protocol)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::Ipmulticast()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "ipmulticast"; yang_parent_name = "config-maintenance-templ"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::~Ipmulticast()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::has_data() const
{
    for (auto const & leaf : vrf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::has_operation() const
{
    for (auto const & leaf : vrf.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipmulticast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto vrf_name_datas = vrf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vrf_name_datas.begin(), vrf_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf.append(value);
    }
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Ipmulticast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : inside)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    if(device != nullptr)
    {
        children["device"] = device;
    }

    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : device_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : region_id_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : site_id_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : tenant_id_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : pmcs_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : pmcs_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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

Native::Shell::Shell()
{

    yang_name = "shell"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Shell::~Shell()
{
}

bool Native::Shell::has_data() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Shell::has_operation() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Shell::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Shell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:shell";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Shell::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Shell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        auto c = std::make_shared<Native::Shell::Trigger>();
        c->parent = this;
        trigger.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Shell::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trigger)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Shell::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Shell::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Shell::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger")
        return true;
    return false;
}

Native::Shell::Trigger::Trigger()
    :
    word{YType::str, "word"},
    line{YType::str, "line"}
{

    yang_name = "trigger"; yang_parent_name = "shell"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Shell::Trigger::~Trigger()
{
}

bool Native::Shell::Trigger::has_data() const
{
    return word.is_set
	|| line.is_set;
}

bool Native::Shell::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Shell::Trigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-platform:shell/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Shell::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Shell::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Shell::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Shell::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Shell::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Shell::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Shell::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "line")
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
            inline_ = std::make_shared<Native::Power::Inline>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

Native::Power::Inline::Inline()
    :
    consumption(std::make_shared<Native::Power::Inline::Consumption>())
	,logging(std::make_shared<Native::Power::Inline::Logging>())
{
    consumption->parent = this;
    logging->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline::~Inline()
{
}

bool Native::Power::Inline::has_data() const
{
    return (consumption !=  nullptr && consumption->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::Power::Inline::has_operation() const
{
    return is_set(yfilter)
	|| (consumption !=  nullptr && consumption->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Power::Inline::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consumption")
    {
        if(consumption == nullptr)
        {
            consumption = std::make_shared<Native::Power::Inline::Consumption>();
        }
        return consumption;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Power::Inline::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Power::Inline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Power::Inline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Power::Inline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consumption" || name == "logging")
        return true;
    return false;
}

Native::Power::Inline::Consumption::Consumption()
    :
    default_{YType::uint16, "default"}
{

    yang_name = "consumption"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline::Consumption::~Consumption()
{
}

bool Native::Power::Inline::Consumption::has_data() const
{
    return default_.is_set;
}

bool Native::Power::Inline::Consumption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Power::Inline::Consumption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::Consumption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consumption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::Consumption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline::Consumption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline::Consumption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Power::Inline::Consumption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline::Consumption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Power::Inline::Consumption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Power::Inline::Logging::Logging()
    :
    global{YType::empty, "global"}
{

    yang_name = "logging"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Power::Inline::Logging::~Logging()
{
}

bool Native::Power::Inline::Logging::has_data() const
{
    return global.is_set;
}

bool Native::Power::Inline::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Power::Inline::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Power::Inline::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Power::Inline::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Power::Inline::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Power::Inline::Logging::has_leaf_or_child_of_name(const std::string & name) const
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : mdns_sd)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
        auto c = std::make_shared<Native::ServiceList::MdnsSd::Deny>();
        c->parent = this;
        deny.push_back(c);
        return c;
    }

    if(child_yang_name == "permit")
    {
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
    char count=0;
    count = 0;
    for (auto const & c : deny)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : permit)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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
    capabilities_manager{YType::boolean, "capabilities-manager"}
    	,
    mdns_sd(nullptr) // presence node
{

    yang_name = "service-routing"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceRouting::~ServiceRouting()
{
}

bool Native::ServiceRouting::has_data() const
{
    return capabilities_manager.is_set
	|| (mdns_sd !=  nullptr && mdns_sd->has_data());
}

bool Native::ServiceRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capabilities_manager.yfilter)
	|| (mdns_sd !=  nullptr && mdns_sd->has_operation());
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdns-sd")
    {
        if(mdns_sd == nullptr)
        {
            mdns_sd = std::make_shared<Native::ServiceRouting::MdnsSd>();
        }
        return mdns_sd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mdns_sd != nullptr)
    {
        children["mdns-sd"] = mdns_sd;
    }

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
}

void Native::ServiceRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capabilities-manager")
    {
        capabilities_manager.yfilter = yfilter;
    }
}

bool Native::ServiceRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-sd" || name == "capabilities-manager")
        return true;
    return false;
}

Native::ServiceRouting::MdnsSd::MdnsSd()
{

    yang_name = "mdns-sd"; yang_parent_name = "service-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceRouting::MdnsSd::~MdnsSd()
{
}

bool Native::ServiceRouting::MdnsSd::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceRouting::MdnsSd::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceRouting::MdnsSd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-service-routing:service-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceRouting::MdnsSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdns-sd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceRouting::MdnsSd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceRouting::MdnsSd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<Native::ServiceRouting::MdnsSd::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceRouting::MdnsSd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::ServiceRouting::MdnsSd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceRouting::MdnsSd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceRouting::MdnsSd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

Native::ServiceRouting::MdnsSd::ServicePolicy::ServicePolicy()
    :
    direction{YType::enumeration, "direction"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceRouting::MdnsSd::ServicePolicy::~ServicePolicy()
{
}

bool Native::ServiceRouting::MdnsSd::ServicePolicy::has_data() const
{
    return direction.is_set
	|| policy_name.is_set;
}

bool Native::ServiceRouting::MdnsSd::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string Native::ServiceRouting::MdnsSd::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-service-routing:service-routing/mdns-sd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceRouting::MdnsSd::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceRouting::MdnsSd::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceRouting::MdnsSd::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceRouting::MdnsSd::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceRouting::MdnsSd::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceRouting::MdnsSd::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool Native::ServiceRouting::MdnsSd::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "policy-name")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : zero)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    char count=0;
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
    char count=0;
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
    char count=0;
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

Native::ServiceTemplate::ServiceTemplate()
    :
    word{YType::str, "word"},
    vlan{YType::uint16, "vlan"},
    sgt{YType::uint16, "sgt"}
    	,
    inactivity_timer(std::make_shared<Native::ServiceTemplate::InactivityTimer>())
	,linksec(std::make_shared<Native::ServiceTemplate::Linksec>())
	,voice(std::make_shared<Native::ServiceTemplate::Voice>())
{
    inactivity_timer->parent = this;
    linksec->parent = this;
    voice->parent = this;

    yang_name = "service-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceTemplate::~ServiceTemplate()
{
}

bool Native::ServiceTemplate::has_data() const
{
    return word.is_set
	|| vlan.is_set
	|| sgt.is_set
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_data())
	|| (linksec !=  nullptr && linksec->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::ServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_operation())
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::ServiceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:service-template" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity-timer")
    {
        if(inactivity_timer == nullptr)
        {
            inactivity_timer = std::make_shared<Native::ServiceTemplate::InactivityTimer>();
        }
        return inactivity_timer;
    }

    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::ServiceTemplate::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::ServiceTemplate::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inactivity_timer != nullptr)
    {
        children["inactivity-timer"] = inactivity_timer;
    }

    if(linksec != nullptr)
    {
        children["linksec"] = linksec;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::ServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity-timer" || name == "linksec" || name == "voice" || name == "word" || name == "vlan" || name == "sgt")
        return true;
    return false;
}

Native::ServiceTemplate::InactivityTimer::InactivityTimer()
    :
    value_{YType::uint16, "value"},
    probe{YType::empty, "probe"}
{

    yang_name = "inactivity-timer"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceTemplate::InactivityTimer::~InactivityTimer()
{
}

bool Native::ServiceTemplate::InactivityTimer::has_data() const
{
    return value_.is_set
	|| probe.is_set;
}

bool Native::ServiceTemplate::InactivityTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(probe.yfilter);
}

std::string Native::ServiceTemplate::InactivityTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::InactivityTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::InactivityTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::InactivityTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceTemplate::InactivityTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::InactivityTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::InactivityTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "probe")
        return true;
    return false;
}

Native::ServiceTemplate::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "linksec"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceTemplate::Linksec::~Linksec()
{
}

bool Native::ServiceTemplate::Linksec::has_data() const
{
    return policy.is_set;
}

bool Native::ServiceTemplate::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::ServiceTemplate::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::Linksec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceTemplate::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::ServiceTemplate::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "service-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceTemplate::Voice::~Voice()
{
}

bool Native::ServiceTemplate::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::ServiceTemplate::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::ServiceTemplate::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceTemplate::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ServiceTemplate::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::bgp {0, "bgp"};
const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::isis {1, "isis"};
const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::ospf {2, "ospf"};
const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::ospfv3 {3, "ospfv3"};

const Enum::YLeaf Native::Power::RedundancyMode::combined {0, "combined"};
const Enum::YLeaf Native::Power::RedundancyMode::redundant {1, "redundant"};

const Enum::YLeaf Native::Power::MaxMin::max {0, "max"};

const Enum::YLeaf Native::ServiceRouting::MdnsSd::ServicePolicy::Direction::IN {0, "IN"};
const Enum::YLeaf Native::ServiceRouting::MdnsSd::ServicePolicy::Direction::OUT {1, "OUT"};

const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_secure {1, "must-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::should_secure {2, "should-secure"};


}
}

