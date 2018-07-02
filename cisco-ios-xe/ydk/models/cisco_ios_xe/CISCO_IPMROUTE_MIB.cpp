
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPMROUTE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPMROUTE_MIB {

CISCOIPMROUTEMIB::CISCOIPMROUTEMIB()
    :
    ciscoipmroute(std::make_shared<CISCOIPMROUTEMIB::CiscoIpMRoute>())
    , ciscoipmrouteheartbeattable(std::make_shared<CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable>())
{
    ciscoipmroute->parent = this;
    ciscoipmrouteheartbeattable->parent = this;

    yang_name = "CISCO-IPMROUTE-MIB"; yang_parent_name = "CISCO-IPMROUTE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIPMROUTEMIB::~CISCOIPMROUTEMIB()
{
}

bool CISCOIPMROUTEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoipmroute !=  nullptr && ciscoipmroute->has_data())
	|| (ciscoipmrouteheartbeattable !=  nullptr && ciscoipmrouteheartbeattable->has_data());
}

bool CISCOIPMROUTEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoipmroute !=  nullptr && ciscoipmroute->has_operation())
	|| (ciscoipmrouteheartbeattable !=  nullptr && ciscoipmrouteheartbeattable->has_operation());
}

std::string CISCOIPMROUTEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPMROUTE-MIB:CISCO-IPMROUTE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPMROUTEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPMROUTEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoIpMRoute")
    {
        if(ciscoipmroute == nullptr)
        {
            ciscoipmroute = std::make_shared<CISCOIPMROUTEMIB::CiscoIpMRoute>();
        }
        return ciscoipmroute;
    }

    if(child_yang_name == "ciscoIpMRouteHeartBeatTable")
    {
        if(ciscoipmrouteheartbeattable == nullptr)
        {
            ciscoipmrouteheartbeattable = std::make_shared<CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable>();
        }
        return ciscoipmrouteheartbeattable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPMROUTEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscoipmroute != nullptr)
    {
        children["ciscoIpMRoute"] = ciscoipmroute;
    }

    if(ciscoipmrouteheartbeattable != nullptr)
    {
        children["ciscoIpMRouteHeartBeatTable"] = ciscoipmrouteheartbeattable;
    }

    return children;
}

void CISCOIPMROUTEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPMROUTEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPMROUTEMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPMROUTEMIB>();
}

std::string CISCOIPMROUTEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPMROUTEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPMROUTEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPMROUTEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPMROUTEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoIpMRoute" || name == "ciscoIpMRouteHeartBeatTable")
        return true;
    return false;
}

CISCOIPMROUTEMIB::CiscoIpMRoute::CiscoIpMRoute()
    :
    ciscoipmroutenumberofentries{YType::uint32, "ciscoIpMRouteNumberOfEntries"}
{

    yang_name = "ciscoIpMRoute"; yang_parent_name = "CISCO-IPMROUTE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPMROUTEMIB::CiscoIpMRoute::~CiscoIpMRoute()
{
}

bool CISCOIPMROUTEMIB::CiscoIpMRoute::has_data() const
{
    if (is_presence_container) return true;
    return ciscoipmroutenumberofentries.is_set;
}

bool CISCOIPMROUTEMIB::CiscoIpMRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoipmroutenumberofentries.yfilter);
}

std::string CISCOIPMROUTEMIB::CiscoIpMRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPMROUTE-MIB:CISCO-IPMROUTE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPMROUTEMIB::CiscoIpMRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoIpMRoute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPMROUTEMIB::CiscoIpMRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoipmroutenumberofentries.is_set || is_set(ciscoipmroutenumberofentries.yfilter)) leaf_name_data.push_back(ciscoipmroutenumberofentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPMROUTEMIB::CiscoIpMRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPMROUTEMIB::CiscoIpMRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPMROUTEMIB::CiscoIpMRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoIpMRouteNumberOfEntries")
    {
        ciscoipmroutenumberofentries = value;
        ciscoipmroutenumberofentries.value_namespace = name_space;
        ciscoipmroutenumberofentries.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPMROUTEMIB::CiscoIpMRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoIpMRouteNumberOfEntries")
    {
        ciscoipmroutenumberofentries.yfilter = yfilter;
    }
}

bool CISCOIPMROUTEMIB::CiscoIpMRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoIpMRouteNumberOfEntries")
        return true;
    return false;
}

CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatTable()
    :
    ciscoipmrouteheartbeatentry(this, {"ciscoipmrouteheartbeatgroupaddr"})
{

    yang_name = "ciscoIpMRouteHeartBeatTable"; yang_parent_name = "CISCO-IPMROUTE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::~CiscoIpMRouteHeartBeatTable()
{
}

bool CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoipmrouteheartbeatentry.len(); index++)
    {
        if(ciscoipmrouteheartbeatentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoipmrouteheartbeatentry.len(); index++)
    {
        if(ciscoipmrouteheartbeatentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPMROUTE-MIB:CISCO-IPMROUTE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoIpMRouteHeartBeatTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoIpMRouteHeartBeatEntry")
    {
        auto c = std::make_shared<CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry>();
        c->parent = this;
        ciscoipmrouteheartbeatentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoipmrouteheartbeatentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoIpMRouteHeartBeatEntry")
        return true;
    return false;
}

CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::CiscoIpMRouteHeartBeatEntry()
    :
    ciscoipmrouteheartbeatgroupaddr{YType::str, "ciscoIpMRouteHeartBeatGroupAddr"},
    ciscoipmrouteheartbeatsourceaddr{YType::str, "ciscoIpMRouteHeartBeatSourceAddr"},
    ciscoipmrouteheartbeatinterval{YType::int32, "ciscoIpMRouteHeartBeatInterval"},
    ciscoipmrouteheartbeatwindowsize{YType::int32, "ciscoIpMRouteHeartBeatWindowSize"},
    ciscoipmrouteheartbeatcount{YType::uint32, "ciscoIpMRouteHeartBeatCount"},
    ciscoipmrouteheartbeatminimum{YType::int32, "ciscoIpMRouteHeartBeatMinimum"},
    ciscoipmrouteheartbeatalerttime{YType::uint32, "ciscoIpMRouteHeartBeatAlertTime"},
    ciscoipmrouteheartbeatstatus{YType::enumeration, "ciscoIpMRouteHeartBeatStatus"}
{

    yang_name = "ciscoIpMRouteHeartBeatEntry"; yang_parent_name = "ciscoIpMRouteHeartBeatTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::~CiscoIpMRouteHeartBeatEntry()
{
}

bool CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoipmrouteheartbeatgroupaddr.is_set
	|| ciscoipmrouteheartbeatsourceaddr.is_set
	|| ciscoipmrouteheartbeatinterval.is_set
	|| ciscoipmrouteheartbeatwindowsize.is_set
	|| ciscoipmrouteheartbeatcount.is_set
	|| ciscoipmrouteheartbeatminimum.is_set
	|| ciscoipmrouteheartbeatalerttime.is_set
	|| ciscoipmrouteheartbeatstatus.is_set;
}

bool CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatgroupaddr.yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatsourceaddr.yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatinterval.yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatwindowsize.yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatcount.yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatminimum.yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatalerttime.yfilter)
	|| ydk::is_set(ciscoipmrouteheartbeatstatus.yfilter);
}

std::string CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPMROUTE-MIB:CISCO-IPMROUTE-MIB/ciscoIpMRouteHeartBeatTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoIpMRouteHeartBeatEntry";
    ADD_KEY_TOKEN(ciscoipmrouteheartbeatgroupaddr, "ciscoIpMRouteHeartBeatGroupAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoipmrouteheartbeatgroupaddr.is_set || is_set(ciscoipmrouteheartbeatgroupaddr.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatgroupaddr.get_name_leafdata());
    if (ciscoipmrouteheartbeatsourceaddr.is_set || is_set(ciscoipmrouteheartbeatsourceaddr.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatsourceaddr.get_name_leafdata());
    if (ciscoipmrouteheartbeatinterval.is_set || is_set(ciscoipmrouteheartbeatinterval.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatinterval.get_name_leafdata());
    if (ciscoipmrouteheartbeatwindowsize.is_set || is_set(ciscoipmrouteheartbeatwindowsize.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatwindowsize.get_name_leafdata());
    if (ciscoipmrouteheartbeatcount.is_set || is_set(ciscoipmrouteheartbeatcount.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatcount.get_name_leafdata());
    if (ciscoipmrouteheartbeatminimum.is_set || is_set(ciscoipmrouteheartbeatminimum.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatminimum.get_name_leafdata());
    if (ciscoipmrouteheartbeatalerttime.is_set || is_set(ciscoipmrouteheartbeatalerttime.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatalerttime.get_name_leafdata());
    if (ciscoipmrouteheartbeatstatus.is_set || is_set(ciscoipmrouteheartbeatstatus.yfilter)) leaf_name_data.push_back(ciscoipmrouteheartbeatstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoIpMRouteHeartBeatGroupAddr")
    {
        ciscoipmrouteheartbeatgroupaddr = value;
        ciscoipmrouteheartbeatgroupaddr.value_namespace = name_space;
        ciscoipmrouteheartbeatgroupaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteHeartBeatSourceAddr")
    {
        ciscoipmrouteheartbeatsourceaddr = value;
        ciscoipmrouteheartbeatsourceaddr.value_namespace = name_space;
        ciscoipmrouteheartbeatsourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteHeartBeatInterval")
    {
        ciscoipmrouteheartbeatinterval = value;
        ciscoipmrouteheartbeatinterval.value_namespace = name_space;
        ciscoipmrouteheartbeatinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteHeartBeatWindowSize")
    {
        ciscoipmrouteheartbeatwindowsize = value;
        ciscoipmrouteheartbeatwindowsize.value_namespace = name_space;
        ciscoipmrouteheartbeatwindowsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteHeartBeatCount")
    {
        ciscoipmrouteheartbeatcount = value;
        ciscoipmrouteheartbeatcount.value_namespace = name_space;
        ciscoipmrouteheartbeatcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteHeartBeatMinimum")
    {
        ciscoipmrouteheartbeatminimum = value;
        ciscoipmrouteheartbeatminimum.value_namespace = name_space;
        ciscoipmrouteheartbeatminimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteHeartBeatAlertTime")
    {
        ciscoipmrouteheartbeatalerttime = value;
        ciscoipmrouteheartbeatalerttime.value_namespace = name_space;
        ciscoipmrouteheartbeatalerttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteHeartBeatStatus")
    {
        ciscoipmrouteheartbeatstatus = value;
        ciscoipmrouteheartbeatstatus.value_namespace = name_space;
        ciscoipmrouteheartbeatstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoIpMRouteHeartBeatGroupAddr")
    {
        ciscoipmrouteheartbeatgroupaddr.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteHeartBeatSourceAddr")
    {
        ciscoipmrouteheartbeatsourceaddr.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteHeartBeatInterval")
    {
        ciscoipmrouteheartbeatinterval.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteHeartBeatWindowSize")
    {
        ciscoipmrouteheartbeatwindowsize.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteHeartBeatCount")
    {
        ciscoipmrouteheartbeatcount.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteHeartBeatMinimum")
    {
        ciscoipmrouteheartbeatminimum.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteHeartBeatAlertTime")
    {
        ciscoipmrouteheartbeatalerttime.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteHeartBeatStatus")
    {
        ciscoipmrouteheartbeatstatus.yfilter = yfilter;
    }
}

bool CISCOIPMROUTEMIB::CiscoIpMRouteHeartBeatTable::CiscoIpMRouteHeartBeatEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoIpMRouteHeartBeatGroupAddr" || name == "ciscoIpMRouteHeartBeatSourceAddr" || name == "ciscoIpMRouteHeartBeatInterval" || name == "ciscoIpMRouteHeartBeatWindowSize" || name == "ciscoIpMRouteHeartBeatCount" || name == "ciscoIpMRouteHeartBeatMinimum" || name == "ciscoIpMRouteHeartBeatAlertTime" || name == "ciscoIpMRouteHeartBeatStatus")
        return true;
    return false;
}


}
}

