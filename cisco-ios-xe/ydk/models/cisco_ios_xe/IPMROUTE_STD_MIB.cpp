
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IPMROUTE_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IPMROUTE_STD_MIB {

IPMROUTESTDMIB::IPMROUTESTDMIB()
    :
    ipmroute(std::make_shared<IPMROUTESTDMIB::IpMRoute>())
    , ipmroutetable(std::make_shared<IPMROUTESTDMIB::IpMRouteTable>())
    , ipmroutenexthoptable(std::make_shared<IPMROUTESTDMIB::IpMRouteNextHopTable>())
    , ipmrouteinterfacetable(std::make_shared<IPMROUTESTDMIB::IpMRouteInterfaceTable>())
    , ipmrouteboundarytable(std::make_shared<IPMROUTESTDMIB::IpMRouteBoundaryTable>())
    , ipmroutescopenametable(std::make_shared<IPMROUTESTDMIB::IpMRouteScopeNameTable>())
{
    ipmroute->parent = this;
    ipmroutetable->parent = this;
    ipmroutenexthoptable->parent = this;
    ipmrouteinterfacetable->parent = this;
    ipmrouteboundarytable->parent = this;
    ipmroutescopenametable->parent = this;

    yang_name = "IPMROUTE-STD-MIB"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

IPMROUTESTDMIB::~IPMROUTESTDMIB()
{
}

bool IPMROUTESTDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ipmroute !=  nullptr && ipmroute->has_data())
	|| (ipmroutetable !=  nullptr && ipmroutetable->has_data())
	|| (ipmroutenexthoptable !=  nullptr && ipmroutenexthoptable->has_data())
	|| (ipmrouteinterfacetable !=  nullptr && ipmrouteinterfacetable->has_data())
	|| (ipmrouteboundarytable !=  nullptr && ipmrouteboundarytable->has_data())
	|| (ipmroutescopenametable !=  nullptr && ipmroutescopenametable->has_data());
}

bool IPMROUTESTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ipmroute !=  nullptr && ipmroute->has_operation())
	|| (ipmroutetable !=  nullptr && ipmroutetable->has_operation())
	|| (ipmroutenexthoptable !=  nullptr && ipmroutenexthoptable->has_operation())
	|| (ipmrouteinterfacetable !=  nullptr && ipmrouteinterfacetable->has_operation())
	|| (ipmrouteboundarytable !=  nullptr && ipmrouteboundarytable->has_operation())
	|| (ipmroutescopenametable !=  nullptr && ipmroutescopenametable->has_operation());
}

std::string IPMROUTESTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRoute")
    {
        if(ipmroute == nullptr)
        {
            ipmroute = std::make_shared<IPMROUTESTDMIB::IpMRoute>();
        }
        return ipmroute;
    }

    if(child_yang_name == "ipMRouteTable")
    {
        if(ipmroutetable == nullptr)
        {
            ipmroutetable = std::make_shared<IPMROUTESTDMIB::IpMRouteTable>();
        }
        return ipmroutetable;
    }

    if(child_yang_name == "ipMRouteNextHopTable")
    {
        if(ipmroutenexthoptable == nullptr)
        {
            ipmroutenexthoptable = std::make_shared<IPMROUTESTDMIB::IpMRouteNextHopTable>();
        }
        return ipmroutenexthoptable;
    }

    if(child_yang_name == "ipMRouteInterfaceTable")
    {
        if(ipmrouteinterfacetable == nullptr)
        {
            ipmrouteinterfacetable = std::make_shared<IPMROUTESTDMIB::IpMRouteInterfaceTable>();
        }
        return ipmrouteinterfacetable;
    }

    if(child_yang_name == "ipMRouteBoundaryTable")
    {
        if(ipmrouteboundarytable == nullptr)
        {
            ipmrouteboundarytable = std::make_shared<IPMROUTESTDMIB::IpMRouteBoundaryTable>();
        }
        return ipmrouteboundarytable;
    }

    if(child_yang_name == "ipMRouteScopeNameTable")
    {
        if(ipmroutescopenametable == nullptr)
        {
            ipmroutescopenametable = std::make_shared<IPMROUTESTDMIB::IpMRouteScopeNameTable>();
        }
        return ipmroutescopenametable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipmroute != nullptr)
    {
        children["ipMRoute"] = ipmroute;
    }

    if(ipmroutetable != nullptr)
    {
        children["ipMRouteTable"] = ipmroutetable;
    }

    if(ipmroutenexthoptable != nullptr)
    {
        children["ipMRouteNextHopTable"] = ipmroutenexthoptable;
    }

    if(ipmrouteinterfacetable != nullptr)
    {
        children["ipMRouteInterfaceTable"] = ipmrouteinterfacetable;
    }

    if(ipmrouteboundarytable != nullptr)
    {
        children["ipMRouteBoundaryTable"] = ipmrouteboundarytable;
    }

    if(ipmroutescopenametable != nullptr)
    {
        children["ipMRouteScopeNameTable"] = ipmroutescopenametable;
    }

    return children;
}

void IPMROUTESTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IPMROUTESTDMIB::clone_ptr() const
{
    return std::make_shared<IPMROUTESTDMIB>();
}

std::string IPMROUTESTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IPMROUTESTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IPMROUTESTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IPMROUTESTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IPMROUTESTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRoute" || name == "ipMRouteTable" || name == "ipMRouteNextHopTable" || name == "ipMRouteInterfaceTable" || name == "ipMRouteBoundaryTable" || name == "ipMRouteScopeNameTable")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRoute::IpMRoute()
    :
    ipmrouteenable{YType::enumeration, "ipMRouteEnable"},
    ipmrouteentrycount{YType::uint32, "ipMRouteEntryCount"}
{

    yang_name = "ipMRoute"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRoute::~IpMRoute()
{
}

bool IPMROUTESTDMIB::IpMRoute::has_data() const
{
    if (is_presence_container) return true;
    return ipmrouteenable.is_set
	|| ipmrouteentrycount.is_set;
}

bool IPMROUTESTDMIB::IpMRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmrouteenable.yfilter)
	|| ydk::is_set(ipmrouteentrycount.yfilter);
}

std::string IPMROUTESTDMIB::IpMRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRoute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteenable.is_set || is_set(ipmrouteenable.yfilter)) leaf_name_data.push_back(ipmrouteenable.get_name_leafdata());
    if (ipmrouteentrycount.is_set || is_set(ipmrouteentrycount.yfilter)) leaf_name_data.push_back(ipmrouteentrycount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IPMROUTESTDMIB::IpMRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteEnable")
    {
        ipmrouteenable = value;
        ipmrouteenable.value_namespace = name_space;
        ipmrouteenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteEntryCount")
    {
        ipmrouteentrycount = value;
        ipmrouteentrycount.value_namespace = name_space;
        ipmrouteentrycount.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::IpMRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteEnable")
    {
        ipmrouteenable.yfilter = yfilter;
    }
    if(value_path == "ipMRouteEntryCount")
    {
        ipmrouteentrycount.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::IpMRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteEnable" || name == "ipMRouteEntryCount")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteTable::IpMRouteTable()
    :
    ipmrouteentry(this, {"ipmroutegroup", "ipmroutesource", "ipmroutesourcemask"})
{

    yang_name = "ipMRouteTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteTable::~IpMRouteTable()
{
}

bool IPMROUTESTDMIB::IpMRouteTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipmrouteentry.len(); index++)
    {
        if(ipmrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::IpMRouteTable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteentry.len(); index++)
    {
        if(ipmrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteEntry")
    {
        auto c = std::make_shared<IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry>();
        c->parent = this;
        ipmrouteentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipmrouteentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void IPMROUTESTDMIB::IpMRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::IpMRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::IpMRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::IpMRouteEntry()
    :
    ipmroutegroup{YType::str, "ipMRouteGroup"},
    ipmroutesource{YType::str, "ipMRouteSource"},
    ipmroutesourcemask{YType::str, "ipMRouteSourceMask"},
    ipmrouteupstreamneighbor{YType::str, "ipMRouteUpstreamNeighbor"},
    ipmrouteinifindex{YType::int32, "ipMRouteInIfIndex"},
    ipmrouteuptime{YType::uint32, "ipMRouteUpTime"},
    ipmrouteexpirytime{YType::uint32, "ipMRouteExpiryTime"},
    ipmroutepkts{YType::uint32, "ipMRoutePkts"},
    ipmroutedifferentinifpackets{YType::uint32, "ipMRouteDifferentInIfPackets"},
    ipmrouteoctets{YType::uint32, "ipMRouteOctets"},
    ipmrouteprotocol{YType::enumeration, "ipMRouteProtocol"},
    ipmroutertproto{YType::enumeration, "ipMRouteRtProto"},
    ipmroutertaddress{YType::str, "ipMRouteRtAddress"},
    ipmroutertmask{YType::str, "ipMRouteRtMask"},
    ipmrouterttype{YType::enumeration, "ipMRouteRtType"},
    ipmroutehcoctets{YType::uint64, "ipMRouteHCOctets"},
    ciscoipmroutepruneflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRoutePruneFlag"},
    ciscoipmroutesparseflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteSparseFlag"},
    ciscoipmrouteconnectedflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteConnectedFlag"},
    ciscoipmroutelocalflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteLocalFlag"},
    ciscoipmrouteregisterflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteRegisterFlag"},
    ciscoipmrouterpflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteRpFlag"},
    ciscoipmroutesptflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteSptFlag"},
    ciscoipmroutebps{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps"},
    ciscoipmroutemetric{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric"},
    ciscoipmroutemetricpreference{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetricPreference"},
    ciscoipmrouteinlimit{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit"},
    ciscoipmroutelastused{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteLastUsed"},
    ciscoipmrouteinlimit2{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit2"},
    ciscoipmroutejoinflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteJoinFlag"},
    ciscoipmroutemsdpflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMsdpFlag"},
    ciscoipmrouteproxyjoinflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteProxyJoinFlag"},
    ciscoipmroutepkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRoutePkts"},
    ciscoipmroutedifferentinifpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteDifferentInIfPkts"},
    ciscoipmrouteoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteOctets"},
    ciscoipmroutebps2{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps2"},
    ciscoipmroutemetric2{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric2"}
{

    yang_name = "ipMRouteEntry"; yang_parent_name = "ipMRouteTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::~IpMRouteEntry()
{
}

bool IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipmroutegroup.is_set
	|| ipmroutesource.is_set
	|| ipmroutesourcemask.is_set
	|| ipmrouteupstreamneighbor.is_set
	|| ipmrouteinifindex.is_set
	|| ipmrouteuptime.is_set
	|| ipmrouteexpirytime.is_set
	|| ipmroutepkts.is_set
	|| ipmroutedifferentinifpackets.is_set
	|| ipmrouteoctets.is_set
	|| ipmrouteprotocol.is_set
	|| ipmroutertproto.is_set
	|| ipmroutertaddress.is_set
	|| ipmroutertmask.is_set
	|| ipmrouterttype.is_set
	|| ipmroutehcoctets.is_set
	|| ciscoipmroutepruneflag.is_set
	|| ciscoipmroutesparseflag.is_set
	|| ciscoipmrouteconnectedflag.is_set
	|| ciscoipmroutelocalflag.is_set
	|| ciscoipmrouteregisterflag.is_set
	|| ciscoipmrouterpflag.is_set
	|| ciscoipmroutesptflag.is_set
	|| ciscoipmroutebps.is_set
	|| ciscoipmroutemetric.is_set
	|| ciscoipmroutemetricpreference.is_set
	|| ciscoipmrouteinlimit.is_set
	|| ciscoipmroutelastused.is_set
	|| ciscoipmrouteinlimit2.is_set
	|| ciscoipmroutejoinflag.is_set
	|| ciscoipmroutemsdpflag.is_set
	|| ciscoipmrouteproxyjoinflag.is_set
	|| ciscoipmroutepkts.is_set
	|| ciscoipmroutedifferentinifpkts.is_set
	|| ciscoipmrouteoctets.is_set
	|| ciscoipmroutebps2.is_set
	|| ciscoipmroutemetric2.is_set;
}

bool IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutegroup.yfilter)
	|| ydk::is_set(ipmroutesource.yfilter)
	|| ydk::is_set(ipmroutesourcemask.yfilter)
	|| ydk::is_set(ipmrouteupstreamneighbor.yfilter)
	|| ydk::is_set(ipmrouteinifindex.yfilter)
	|| ydk::is_set(ipmrouteuptime.yfilter)
	|| ydk::is_set(ipmrouteexpirytime.yfilter)
	|| ydk::is_set(ipmroutepkts.yfilter)
	|| ydk::is_set(ipmroutedifferentinifpackets.yfilter)
	|| ydk::is_set(ipmrouteoctets.yfilter)
	|| ydk::is_set(ipmrouteprotocol.yfilter)
	|| ydk::is_set(ipmroutertproto.yfilter)
	|| ydk::is_set(ipmroutertaddress.yfilter)
	|| ydk::is_set(ipmroutertmask.yfilter)
	|| ydk::is_set(ipmrouterttype.yfilter)
	|| ydk::is_set(ipmroutehcoctets.yfilter)
	|| ydk::is_set(ciscoipmroutepruneflag.yfilter)
	|| ydk::is_set(ciscoipmroutesparseflag.yfilter)
	|| ydk::is_set(ciscoipmrouteconnectedflag.yfilter)
	|| ydk::is_set(ciscoipmroutelocalflag.yfilter)
	|| ydk::is_set(ciscoipmrouteregisterflag.yfilter)
	|| ydk::is_set(ciscoipmrouterpflag.yfilter)
	|| ydk::is_set(ciscoipmroutesptflag.yfilter)
	|| ydk::is_set(ciscoipmroutebps.yfilter)
	|| ydk::is_set(ciscoipmroutemetric.yfilter)
	|| ydk::is_set(ciscoipmroutemetricpreference.yfilter)
	|| ydk::is_set(ciscoipmrouteinlimit.yfilter)
	|| ydk::is_set(ciscoipmroutelastused.yfilter)
	|| ydk::is_set(ciscoipmrouteinlimit2.yfilter)
	|| ydk::is_set(ciscoipmroutejoinflag.yfilter)
	|| ydk::is_set(ciscoipmroutemsdpflag.yfilter)
	|| ydk::is_set(ciscoipmrouteproxyjoinflag.yfilter)
	|| ydk::is_set(ciscoipmroutepkts.yfilter)
	|| ydk::is_set(ciscoipmroutedifferentinifpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteoctets.yfilter)
	|| ydk::is_set(ciscoipmroutebps2.yfilter)
	|| ydk::is_set(ciscoipmroutemetric2.yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteEntry";
    ADD_KEY_TOKEN(ipmroutegroup, "ipMRouteGroup");
    ADD_KEY_TOKEN(ipmroutesource, "ipMRouteSource");
    ADD_KEY_TOKEN(ipmroutesourcemask, "ipMRouteSourceMask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutegroup.is_set || is_set(ipmroutegroup.yfilter)) leaf_name_data.push_back(ipmroutegroup.get_name_leafdata());
    if (ipmroutesource.is_set || is_set(ipmroutesource.yfilter)) leaf_name_data.push_back(ipmroutesource.get_name_leafdata());
    if (ipmroutesourcemask.is_set || is_set(ipmroutesourcemask.yfilter)) leaf_name_data.push_back(ipmroutesourcemask.get_name_leafdata());
    if (ipmrouteupstreamneighbor.is_set || is_set(ipmrouteupstreamneighbor.yfilter)) leaf_name_data.push_back(ipmrouteupstreamneighbor.get_name_leafdata());
    if (ipmrouteinifindex.is_set || is_set(ipmrouteinifindex.yfilter)) leaf_name_data.push_back(ipmrouteinifindex.get_name_leafdata());
    if (ipmrouteuptime.is_set || is_set(ipmrouteuptime.yfilter)) leaf_name_data.push_back(ipmrouteuptime.get_name_leafdata());
    if (ipmrouteexpirytime.is_set || is_set(ipmrouteexpirytime.yfilter)) leaf_name_data.push_back(ipmrouteexpirytime.get_name_leafdata());
    if (ipmroutepkts.is_set || is_set(ipmroutepkts.yfilter)) leaf_name_data.push_back(ipmroutepkts.get_name_leafdata());
    if (ipmroutedifferentinifpackets.is_set || is_set(ipmroutedifferentinifpackets.yfilter)) leaf_name_data.push_back(ipmroutedifferentinifpackets.get_name_leafdata());
    if (ipmrouteoctets.is_set || is_set(ipmrouteoctets.yfilter)) leaf_name_data.push_back(ipmrouteoctets.get_name_leafdata());
    if (ipmrouteprotocol.is_set || is_set(ipmrouteprotocol.yfilter)) leaf_name_data.push_back(ipmrouteprotocol.get_name_leafdata());
    if (ipmroutertproto.is_set || is_set(ipmroutertproto.yfilter)) leaf_name_data.push_back(ipmroutertproto.get_name_leafdata());
    if (ipmroutertaddress.is_set || is_set(ipmroutertaddress.yfilter)) leaf_name_data.push_back(ipmroutertaddress.get_name_leafdata());
    if (ipmroutertmask.is_set || is_set(ipmroutertmask.yfilter)) leaf_name_data.push_back(ipmroutertmask.get_name_leafdata());
    if (ipmrouterttype.is_set || is_set(ipmrouterttype.yfilter)) leaf_name_data.push_back(ipmrouterttype.get_name_leafdata());
    if (ipmroutehcoctets.is_set || is_set(ipmroutehcoctets.yfilter)) leaf_name_data.push_back(ipmroutehcoctets.get_name_leafdata());
    if (ciscoipmroutepruneflag.is_set || is_set(ciscoipmroutepruneflag.yfilter)) leaf_name_data.push_back(ciscoipmroutepruneflag.get_name_leafdata());
    if (ciscoipmroutesparseflag.is_set || is_set(ciscoipmroutesparseflag.yfilter)) leaf_name_data.push_back(ciscoipmroutesparseflag.get_name_leafdata());
    if (ciscoipmrouteconnectedflag.is_set || is_set(ciscoipmrouteconnectedflag.yfilter)) leaf_name_data.push_back(ciscoipmrouteconnectedflag.get_name_leafdata());
    if (ciscoipmroutelocalflag.is_set || is_set(ciscoipmroutelocalflag.yfilter)) leaf_name_data.push_back(ciscoipmroutelocalflag.get_name_leafdata());
    if (ciscoipmrouteregisterflag.is_set || is_set(ciscoipmrouteregisterflag.yfilter)) leaf_name_data.push_back(ciscoipmrouteregisterflag.get_name_leafdata());
    if (ciscoipmrouterpflag.is_set || is_set(ciscoipmrouterpflag.yfilter)) leaf_name_data.push_back(ciscoipmrouterpflag.get_name_leafdata());
    if (ciscoipmroutesptflag.is_set || is_set(ciscoipmroutesptflag.yfilter)) leaf_name_data.push_back(ciscoipmroutesptflag.get_name_leafdata());
    if (ciscoipmroutebps.is_set || is_set(ciscoipmroutebps.yfilter)) leaf_name_data.push_back(ciscoipmroutebps.get_name_leafdata());
    if (ciscoipmroutemetric.is_set || is_set(ciscoipmroutemetric.yfilter)) leaf_name_data.push_back(ciscoipmroutemetric.get_name_leafdata());
    if (ciscoipmroutemetricpreference.is_set || is_set(ciscoipmroutemetricpreference.yfilter)) leaf_name_data.push_back(ciscoipmroutemetricpreference.get_name_leafdata());
    if (ciscoipmrouteinlimit.is_set || is_set(ciscoipmrouteinlimit.yfilter)) leaf_name_data.push_back(ciscoipmrouteinlimit.get_name_leafdata());
    if (ciscoipmroutelastused.is_set || is_set(ciscoipmroutelastused.yfilter)) leaf_name_data.push_back(ciscoipmroutelastused.get_name_leafdata());
    if (ciscoipmrouteinlimit2.is_set || is_set(ciscoipmrouteinlimit2.yfilter)) leaf_name_data.push_back(ciscoipmrouteinlimit2.get_name_leafdata());
    if (ciscoipmroutejoinflag.is_set || is_set(ciscoipmroutejoinflag.yfilter)) leaf_name_data.push_back(ciscoipmroutejoinflag.get_name_leafdata());
    if (ciscoipmroutemsdpflag.is_set || is_set(ciscoipmroutemsdpflag.yfilter)) leaf_name_data.push_back(ciscoipmroutemsdpflag.get_name_leafdata());
    if (ciscoipmrouteproxyjoinflag.is_set || is_set(ciscoipmrouteproxyjoinflag.yfilter)) leaf_name_data.push_back(ciscoipmrouteproxyjoinflag.get_name_leafdata());
    if (ciscoipmroutepkts.is_set || is_set(ciscoipmroutepkts.yfilter)) leaf_name_data.push_back(ciscoipmroutepkts.get_name_leafdata());
    if (ciscoipmroutedifferentinifpkts.is_set || is_set(ciscoipmroutedifferentinifpkts.yfilter)) leaf_name_data.push_back(ciscoipmroutedifferentinifpkts.get_name_leafdata());
    if (ciscoipmrouteoctets.is_set || is_set(ciscoipmrouteoctets.yfilter)) leaf_name_data.push_back(ciscoipmrouteoctets.get_name_leafdata());
    if (ciscoipmroutebps2.is_set || is_set(ciscoipmroutebps2.yfilter)) leaf_name_data.push_back(ciscoipmroutebps2.get_name_leafdata());
    if (ciscoipmroutemetric2.is_set || is_set(ciscoipmroutemetric2.yfilter)) leaf_name_data.push_back(ciscoipmroutemetric2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteGroup")
    {
        ipmroutegroup = value;
        ipmroutegroup.value_namespace = name_space;
        ipmroutegroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteSource")
    {
        ipmroutesource = value;
        ipmroutesource.value_namespace = name_space;
        ipmroutesource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteSourceMask")
    {
        ipmroutesourcemask = value;
        ipmroutesourcemask.value_namespace = name_space;
        ipmroutesourcemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteUpstreamNeighbor")
    {
        ipmrouteupstreamneighbor = value;
        ipmrouteupstreamneighbor.value_namespace = name_space;
        ipmrouteupstreamneighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInIfIndex")
    {
        ipmrouteinifindex = value;
        ipmrouteinifindex.value_namespace = name_space;
        ipmrouteinifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteUpTime")
    {
        ipmrouteuptime = value;
        ipmrouteuptime.value_namespace = name_space;
        ipmrouteuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteExpiryTime")
    {
        ipmrouteexpirytime = value;
        ipmrouteexpirytime.value_namespace = name_space;
        ipmrouteexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRoutePkts")
    {
        ipmroutepkts = value;
        ipmroutepkts.value_namespace = name_space;
        ipmroutepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteDifferentInIfPackets")
    {
        ipmroutedifferentinifpackets = value;
        ipmroutedifferentinifpackets.value_namespace = name_space;
        ipmroutedifferentinifpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteOctets")
    {
        ipmrouteoctets = value;
        ipmrouteoctets.value_namespace = name_space;
        ipmrouteoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteProtocol")
    {
        ipmrouteprotocol = value;
        ipmrouteprotocol.value_namespace = name_space;
        ipmrouteprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtProto")
    {
        ipmroutertproto = value;
        ipmroutertproto.value_namespace = name_space;
        ipmroutertproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtAddress")
    {
        ipmroutertaddress = value;
        ipmroutertaddress.value_namespace = name_space;
        ipmroutertaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtMask")
    {
        ipmroutertmask = value;
        ipmroutertmask.value_namespace = name_space;
        ipmroutertmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtType")
    {
        ipmrouterttype = value;
        ipmrouterttype.value_namespace = name_space;
        ipmrouterttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteHCOctets")
    {
        ipmroutehcoctets = value;
        ipmroutehcoctets.value_namespace = name_space;
        ipmroutehcoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRoutePruneFlag")
    {
        ciscoipmroutepruneflag = value;
        ciscoipmroutepruneflag.value_namespace = name_space;
        ciscoipmroutepruneflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteSparseFlag")
    {
        ciscoipmroutesparseflag = value;
        ciscoipmroutesparseflag.value_namespace = name_space;
        ciscoipmroutesparseflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteConnectedFlag")
    {
        ciscoipmrouteconnectedflag = value;
        ciscoipmrouteconnectedflag.value_namespace = name_space;
        ciscoipmrouteconnectedflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteLocalFlag")
    {
        ciscoipmroutelocalflag = value;
        ciscoipmroutelocalflag.value_namespace = name_space;
        ciscoipmroutelocalflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteRegisterFlag")
    {
        ciscoipmrouteregisterflag = value;
        ciscoipmrouteregisterflag.value_namespace = name_space;
        ciscoipmrouteregisterflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteRpFlag")
    {
        ciscoipmrouterpflag = value;
        ciscoipmrouterpflag.value_namespace = name_space;
        ciscoipmrouterpflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteSptFlag")
    {
        ciscoipmroutesptflag = value;
        ciscoipmroutesptflag.value_namespace = name_space;
        ciscoipmroutesptflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps")
    {
        ciscoipmroutebps = value;
        ciscoipmroutebps.value_namespace = name_space;
        ciscoipmroutebps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric")
    {
        ciscoipmroutemetric = value;
        ciscoipmroutemetric.value_namespace = name_space;
        ciscoipmroutemetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetricPreference")
    {
        ciscoipmroutemetricpreference = value;
        ciscoipmroutemetricpreference.value_namespace = name_space;
        ciscoipmroutemetricpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit")
    {
        ciscoipmrouteinlimit = value;
        ciscoipmrouteinlimit.value_namespace = name_space;
        ciscoipmrouteinlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteLastUsed")
    {
        ciscoipmroutelastused = value;
        ciscoipmroutelastused.value_namespace = name_space;
        ciscoipmroutelastused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit2")
    {
        ciscoipmrouteinlimit2 = value;
        ciscoipmrouteinlimit2.value_namespace = name_space;
        ciscoipmrouteinlimit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteJoinFlag")
    {
        ciscoipmroutejoinflag = value;
        ciscoipmroutejoinflag.value_namespace = name_space;
        ciscoipmroutejoinflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteMsdpFlag")
    {
        ciscoipmroutemsdpflag = value;
        ciscoipmroutemsdpflag.value_namespace = name_space;
        ciscoipmroutemsdpflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteProxyJoinFlag")
    {
        ciscoipmrouteproxyjoinflag = value;
        ciscoipmrouteproxyjoinflag.value_namespace = name_space;
        ciscoipmrouteproxyjoinflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRoutePkts")
    {
        ciscoipmroutepkts = value;
        ciscoipmroutepkts.value_namespace = name_space;
        ciscoipmroutepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteDifferentInIfPkts")
    {
        ciscoipmroutedifferentinifpkts = value;
        ciscoipmroutedifferentinifpkts.value_namespace = name_space;
        ciscoipmroutedifferentinifpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteOctets")
    {
        ciscoipmrouteoctets = value;
        ciscoipmrouteoctets.value_namespace = name_space;
        ciscoipmrouteoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps2")
    {
        ciscoipmroutebps2 = value;
        ciscoipmroutebps2.value_namespace = name_space;
        ciscoipmroutebps2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric2")
    {
        ciscoipmroutemetric2 = value;
        ciscoipmroutemetric2.value_namespace = name_space;
        ciscoipmroutemetric2.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteGroup")
    {
        ipmroutegroup.yfilter = yfilter;
    }
    if(value_path == "ipMRouteSource")
    {
        ipmroutesource.yfilter = yfilter;
    }
    if(value_path == "ipMRouteSourceMask")
    {
        ipmroutesourcemask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteUpstreamNeighbor")
    {
        ipmrouteupstreamneighbor.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInIfIndex")
    {
        ipmrouteinifindex.yfilter = yfilter;
    }
    if(value_path == "ipMRouteUpTime")
    {
        ipmrouteuptime.yfilter = yfilter;
    }
    if(value_path == "ipMRouteExpiryTime")
    {
        ipmrouteexpirytime.yfilter = yfilter;
    }
    if(value_path == "ipMRoutePkts")
    {
        ipmroutepkts.yfilter = yfilter;
    }
    if(value_path == "ipMRouteDifferentInIfPackets")
    {
        ipmroutedifferentinifpackets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteOctets")
    {
        ipmrouteoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteProtocol")
    {
        ipmrouteprotocol.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtProto")
    {
        ipmroutertproto.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtAddress")
    {
        ipmroutertaddress.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtMask")
    {
        ipmroutertmask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtType")
    {
        ipmrouterttype.yfilter = yfilter;
    }
    if(value_path == "ipMRouteHCOctets")
    {
        ipmroutehcoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRoutePruneFlag")
    {
        ciscoipmroutepruneflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteSparseFlag")
    {
        ciscoipmroutesparseflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteConnectedFlag")
    {
        ciscoipmrouteconnectedflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteLocalFlag")
    {
        ciscoipmroutelocalflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteRegisterFlag")
    {
        ciscoipmrouteregisterflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteRpFlag")
    {
        ciscoipmrouterpflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteSptFlag")
    {
        ciscoipmroutesptflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteBps")
    {
        ciscoipmroutebps.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMetric")
    {
        ciscoipmroutemetric.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMetricPreference")
    {
        ciscoipmroutemetricpreference.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteInLimit")
    {
        ciscoipmrouteinlimit.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteLastUsed")
    {
        ciscoipmroutelastused.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteInLimit2")
    {
        ciscoipmrouteinlimit2.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteJoinFlag")
    {
        ciscoipmroutejoinflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMsdpFlag")
    {
        ciscoipmroutemsdpflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteProxyJoinFlag")
    {
        ciscoipmrouteproxyjoinflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRoutePkts")
    {
        ciscoipmroutepkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteDifferentInIfPkts")
    {
        ciscoipmroutedifferentinifpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteOctets")
    {
        ciscoipmrouteoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteBps2")
    {
        ciscoipmroutebps2.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMetric2")
    {
        ciscoipmroutemetric2.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteGroup" || name == "ipMRouteSource" || name == "ipMRouteSourceMask" || name == "ipMRouteUpstreamNeighbor" || name == "ipMRouteInIfIndex" || name == "ipMRouteUpTime" || name == "ipMRouteExpiryTime" || name == "ipMRoutePkts" || name == "ipMRouteDifferentInIfPackets" || name == "ipMRouteOctets" || name == "ipMRouteProtocol" || name == "ipMRouteRtProto" || name == "ipMRouteRtAddress" || name == "ipMRouteRtMask" || name == "ipMRouteRtType" || name == "ipMRouteHCOctets" || name == "ciscoIpMRoutePruneFlag" || name == "ciscoIpMRouteSparseFlag" || name == "ciscoIpMRouteConnectedFlag" || name == "ciscoIpMRouteLocalFlag" || name == "ciscoIpMRouteRegisterFlag" || name == "ciscoIpMRouteRpFlag" || name == "ciscoIpMRouteSptFlag" || name == "ciscoIpMRouteBps" || name == "ciscoIpMRouteMetric" || name == "ciscoIpMRouteMetricPreference" || name == "ciscoIpMRouteInLimit" || name == "ciscoIpMRouteLastUsed" || name == "ciscoIpMRouteInLimit2" || name == "ciscoIpMRouteJoinFlag" || name == "ciscoIpMRouteMsdpFlag" || name == "ciscoIpMRouteProxyJoinFlag" || name == "ciscoIpMRoutePkts" || name == "ciscoIpMRouteDifferentInIfPkts" || name == "ciscoIpMRouteOctets" || name == "ciscoIpMRouteBps2" || name == "ciscoIpMRouteMetric2")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopTable()
    :
    ipmroutenexthopentry(this, {"ipmroutenexthopgroup", "ipmroutenexthopsource", "ipmroutenexthopsourcemask", "ipmroutenexthopifindex", "ipmroutenexthopaddress"})
{

    yang_name = "ipMRouteNextHopTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteNextHopTable::~IpMRouteNextHopTable()
{
}

bool IPMROUTESTDMIB::IpMRouteNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipmroutenexthopentry.len(); index++)
    {
        if(ipmroutenexthopentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::IpMRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<ipmroutenexthopentry.len(); index++)
    {
        if(ipmroutenexthopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteNextHopTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteNextHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteNextHopEntry")
    {
        auto c = std::make_shared<IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry>();
        c->parent = this;
        ipmroutenexthopentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipmroutenexthopentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void IPMROUTESTDMIB::IpMRouteNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::IpMRouteNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::IpMRouteNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteNextHopEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::IpMRouteNextHopEntry()
    :
    ipmroutenexthopgroup{YType::str, "ipMRouteNextHopGroup"},
    ipmroutenexthopsource{YType::str, "ipMRouteNextHopSource"},
    ipmroutenexthopsourcemask{YType::str, "ipMRouteNextHopSourceMask"},
    ipmroutenexthopifindex{YType::int32, "ipMRouteNextHopIfIndex"},
    ipmroutenexthopaddress{YType::str, "ipMRouteNextHopAddress"},
    ipmroutenexthopstate{YType::enumeration, "ipMRouteNextHopState"},
    ipmroutenexthopuptime{YType::uint32, "ipMRouteNextHopUpTime"},
    ipmroutenexthopexpirytime{YType::uint32, "ipMRouteNextHopExpiryTime"},
    ipmroutenexthopclosestmemberhops{YType::int32, "ipMRouteNextHopClosestMemberHops"},
    ipmroutenexthopprotocol{YType::enumeration, "ipMRouteNextHopProtocol"},
    ipmroutenexthoppkts{YType::uint32, "ipMRouteNextHopPkts"},
    ciscoipmroutenexthopoutlimit{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopOutLimit"},
    ciscoipmroutenexthopmachdr{YType::str, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopMacHdr"},
    ciscoipmroutenexthoppkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopPkts"}
{

    yang_name = "ipMRouteNextHopEntry"; yang_parent_name = "ipMRouteNextHopTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::~IpMRouteNextHopEntry()
{
}

bool IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipmroutenexthopgroup.is_set
	|| ipmroutenexthopsource.is_set
	|| ipmroutenexthopsourcemask.is_set
	|| ipmroutenexthopifindex.is_set
	|| ipmroutenexthopaddress.is_set
	|| ipmroutenexthopstate.is_set
	|| ipmroutenexthopuptime.is_set
	|| ipmroutenexthopexpirytime.is_set
	|| ipmroutenexthopclosestmemberhops.is_set
	|| ipmroutenexthopprotocol.is_set
	|| ipmroutenexthoppkts.is_set
	|| ciscoipmroutenexthopoutlimit.is_set
	|| ciscoipmroutenexthopmachdr.is_set
	|| ciscoipmroutenexthoppkts.is_set;
}

bool IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutenexthopgroup.yfilter)
	|| ydk::is_set(ipmroutenexthopsource.yfilter)
	|| ydk::is_set(ipmroutenexthopsourcemask.yfilter)
	|| ydk::is_set(ipmroutenexthopifindex.yfilter)
	|| ydk::is_set(ipmroutenexthopaddress.yfilter)
	|| ydk::is_set(ipmroutenexthopstate.yfilter)
	|| ydk::is_set(ipmroutenexthopuptime.yfilter)
	|| ydk::is_set(ipmroutenexthopexpirytime.yfilter)
	|| ydk::is_set(ipmroutenexthopclosestmemberhops.yfilter)
	|| ydk::is_set(ipmroutenexthopprotocol.yfilter)
	|| ydk::is_set(ipmroutenexthoppkts.yfilter)
	|| ydk::is_set(ciscoipmroutenexthopoutlimit.yfilter)
	|| ydk::is_set(ciscoipmroutenexthopmachdr.yfilter)
	|| ydk::is_set(ciscoipmroutenexthoppkts.yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteNextHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteNextHopEntry";
    ADD_KEY_TOKEN(ipmroutenexthopgroup, "ipMRouteNextHopGroup");
    ADD_KEY_TOKEN(ipmroutenexthopsource, "ipMRouteNextHopSource");
    ADD_KEY_TOKEN(ipmroutenexthopsourcemask, "ipMRouteNextHopSourceMask");
    ADD_KEY_TOKEN(ipmroutenexthopifindex, "ipMRouteNextHopIfIndex");
    ADD_KEY_TOKEN(ipmroutenexthopaddress, "ipMRouteNextHopAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutenexthopgroup.is_set || is_set(ipmroutenexthopgroup.yfilter)) leaf_name_data.push_back(ipmroutenexthopgroup.get_name_leafdata());
    if (ipmroutenexthopsource.is_set || is_set(ipmroutenexthopsource.yfilter)) leaf_name_data.push_back(ipmroutenexthopsource.get_name_leafdata());
    if (ipmroutenexthopsourcemask.is_set || is_set(ipmroutenexthopsourcemask.yfilter)) leaf_name_data.push_back(ipmroutenexthopsourcemask.get_name_leafdata());
    if (ipmroutenexthopifindex.is_set || is_set(ipmroutenexthopifindex.yfilter)) leaf_name_data.push_back(ipmroutenexthopifindex.get_name_leafdata());
    if (ipmroutenexthopaddress.is_set || is_set(ipmroutenexthopaddress.yfilter)) leaf_name_data.push_back(ipmroutenexthopaddress.get_name_leafdata());
    if (ipmroutenexthopstate.is_set || is_set(ipmroutenexthopstate.yfilter)) leaf_name_data.push_back(ipmroutenexthopstate.get_name_leafdata());
    if (ipmroutenexthopuptime.is_set || is_set(ipmroutenexthopuptime.yfilter)) leaf_name_data.push_back(ipmroutenexthopuptime.get_name_leafdata());
    if (ipmroutenexthopexpirytime.is_set || is_set(ipmroutenexthopexpirytime.yfilter)) leaf_name_data.push_back(ipmroutenexthopexpirytime.get_name_leafdata());
    if (ipmroutenexthopclosestmemberhops.is_set || is_set(ipmroutenexthopclosestmemberhops.yfilter)) leaf_name_data.push_back(ipmroutenexthopclosestmemberhops.get_name_leafdata());
    if (ipmroutenexthopprotocol.is_set || is_set(ipmroutenexthopprotocol.yfilter)) leaf_name_data.push_back(ipmroutenexthopprotocol.get_name_leafdata());
    if (ipmroutenexthoppkts.is_set || is_set(ipmroutenexthoppkts.yfilter)) leaf_name_data.push_back(ipmroutenexthoppkts.get_name_leafdata());
    if (ciscoipmroutenexthopoutlimit.is_set || is_set(ciscoipmroutenexthopoutlimit.yfilter)) leaf_name_data.push_back(ciscoipmroutenexthopoutlimit.get_name_leafdata());
    if (ciscoipmroutenexthopmachdr.is_set || is_set(ciscoipmroutenexthopmachdr.yfilter)) leaf_name_data.push_back(ciscoipmroutenexthopmachdr.get_name_leafdata());
    if (ciscoipmroutenexthoppkts.is_set || is_set(ciscoipmroutenexthoppkts.yfilter)) leaf_name_data.push_back(ciscoipmroutenexthoppkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteNextHopGroup")
    {
        ipmroutenexthopgroup = value;
        ipmroutenexthopgroup.value_namespace = name_space;
        ipmroutenexthopgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopSource")
    {
        ipmroutenexthopsource = value;
        ipmroutenexthopsource.value_namespace = name_space;
        ipmroutenexthopsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopSourceMask")
    {
        ipmroutenexthopsourcemask = value;
        ipmroutenexthopsourcemask.value_namespace = name_space;
        ipmroutenexthopsourcemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopIfIndex")
    {
        ipmroutenexthopifindex = value;
        ipmroutenexthopifindex.value_namespace = name_space;
        ipmroutenexthopifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopAddress")
    {
        ipmroutenexthopaddress = value;
        ipmroutenexthopaddress.value_namespace = name_space;
        ipmroutenexthopaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopState")
    {
        ipmroutenexthopstate = value;
        ipmroutenexthopstate.value_namespace = name_space;
        ipmroutenexthopstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopUpTime")
    {
        ipmroutenexthopuptime = value;
        ipmroutenexthopuptime.value_namespace = name_space;
        ipmroutenexthopuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopExpiryTime")
    {
        ipmroutenexthopexpirytime = value;
        ipmroutenexthopexpirytime.value_namespace = name_space;
        ipmroutenexthopexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopClosestMemberHops")
    {
        ipmroutenexthopclosestmemberhops = value;
        ipmroutenexthopclosestmemberhops.value_namespace = name_space;
        ipmroutenexthopclosestmemberhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopProtocol")
    {
        ipmroutenexthopprotocol = value;
        ipmroutenexthopprotocol.value_namespace = name_space;
        ipmroutenexthopprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopPkts")
    {
        ipmroutenexthoppkts = value;
        ipmroutenexthoppkts.value_namespace = name_space;
        ipmroutenexthoppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopOutLimit")
    {
        ciscoipmroutenexthopoutlimit = value;
        ciscoipmroutenexthopoutlimit.value_namespace = name_space;
        ciscoipmroutenexthopoutlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopMacHdr")
    {
        ciscoipmroutenexthopmachdr = value;
        ciscoipmroutenexthopmachdr.value_namespace = name_space;
        ciscoipmroutenexthopmachdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopPkts")
    {
        ciscoipmroutenexthoppkts = value;
        ciscoipmroutenexthoppkts.value_namespace = name_space;
        ciscoipmroutenexthoppkts.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteNextHopGroup")
    {
        ipmroutenexthopgroup.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopSource")
    {
        ipmroutenexthopsource.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopSourceMask")
    {
        ipmroutenexthopsourcemask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopIfIndex")
    {
        ipmroutenexthopifindex.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopAddress")
    {
        ipmroutenexthopaddress.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopState")
    {
        ipmroutenexthopstate.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopUpTime")
    {
        ipmroutenexthopuptime.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopExpiryTime")
    {
        ipmroutenexthopexpirytime.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopClosestMemberHops")
    {
        ipmroutenexthopclosestmemberhops.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopProtocol")
    {
        ipmroutenexthopprotocol.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopPkts")
    {
        ipmroutenexthoppkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteNextHopOutLimit")
    {
        ciscoipmroutenexthopoutlimit.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteNextHopMacHdr")
    {
        ciscoipmroutenexthopmachdr.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteNextHopPkts")
    {
        ciscoipmroutenexthoppkts.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteNextHopGroup" || name == "ipMRouteNextHopSource" || name == "ipMRouteNextHopSourceMask" || name == "ipMRouteNextHopIfIndex" || name == "ipMRouteNextHopAddress" || name == "ipMRouteNextHopState" || name == "ipMRouteNextHopUpTime" || name == "ipMRouteNextHopExpiryTime" || name == "ipMRouteNextHopClosestMemberHops" || name == "ipMRouteNextHopProtocol" || name == "ipMRouteNextHopPkts" || name == "ciscoIpMRouteNextHopOutLimit" || name == "ciscoIpMRouteNextHopMacHdr" || name == "ciscoIpMRouteNextHopPkts")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceTable()
    :
    ipmrouteinterfaceentry(this, {"ipmrouteinterfaceifindex"})
{

    yang_name = "ipMRouteInterfaceTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteInterfaceTable::~IpMRouteInterfaceTable()
{
}

bool IPMROUTESTDMIB::IpMRouteInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipmrouteinterfaceentry.len(); index++)
    {
        if(ipmrouteinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::IpMRouteInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteinterfaceentry.len(); index++)
    {
        if(ipmrouteinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteInterfaceEntry")
    {
        auto c = std::make_shared<IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry>();
        c->parent = this;
        ipmrouteinterfaceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipmrouteinterfaceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void IPMROUTESTDMIB::IpMRouteInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::IpMRouteInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::IpMRouteInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteInterfaceEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::IpMRouteInterfaceEntry()
    :
    ipmrouteinterfaceifindex{YType::int32, "ipMRouteInterfaceIfIndex"},
    ipmrouteinterfacettl{YType::int32, "ipMRouteInterfaceTtl"},
    ipmrouteinterfaceprotocol{YType::enumeration, "ipMRouteInterfaceProtocol"},
    ipmrouteinterfaceratelimit{YType::int32, "ipMRouteInterfaceRateLimit"},
    ipmrouteinterfaceinmcastoctets{YType::uint32, "ipMRouteInterfaceInMcastOctets"},
    ipmrouteinterfaceoutmcastoctets{YType::uint32, "ipMRouteInterfaceOutMcastOctets"},
    ipmrouteinterfacehcinmcastoctets{YType::uint64, "ipMRouteInterfaceHCInMcastOctets"},
    ipmrouteinterfacehcoutmcastoctets{YType::uint64, "ipMRouteInterfaceHCOutMcastOctets"},
    ciscoipmrouteifinmcastoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastOctets"},
    ciscoipmrouteifoutmcastoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastOctets"},
    ciscoipmrouteifinmcastpkts{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastPkts"},
    ciscoipmrouteifhcinmcastpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCInMcastPkts"},
    ciscoipmrouteifoutmcastpkts{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastPkts"},
    ciscoipmrouteifhcoutmcastpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCOutMcastPkts"}
{

    yang_name = "ipMRouteInterfaceEntry"; yang_parent_name = "ipMRouteInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::~IpMRouteInterfaceEntry()
{
}

bool IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipmrouteinterfaceifindex.is_set
	|| ipmrouteinterfacettl.is_set
	|| ipmrouteinterfaceprotocol.is_set
	|| ipmrouteinterfaceratelimit.is_set
	|| ipmrouteinterfaceinmcastoctets.is_set
	|| ipmrouteinterfaceoutmcastoctets.is_set
	|| ipmrouteinterfacehcinmcastoctets.is_set
	|| ipmrouteinterfacehcoutmcastoctets.is_set
	|| ciscoipmrouteifinmcastoctets.is_set
	|| ciscoipmrouteifoutmcastoctets.is_set
	|| ciscoipmrouteifinmcastpkts.is_set
	|| ciscoipmrouteifhcinmcastpkts.is_set
	|| ciscoipmrouteifoutmcastpkts.is_set
	|| ciscoipmrouteifhcoutmcastpkts.is_set;
}

bool IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmrouteinterfaceifindex.yfilter)
	|| ydk::is_set(ipmrouteinterfacettl.yfilter)
	|| ydk::is_set(ipmrouteinterfaceprotocol.yfilter)
	|| ydk::is_set(ipmrouteinterfaceratelimit.yfilter)
	|| ydk::is_set(ipmrouteinterfaceinmcastoctets.yfilter)
	|| ydk::is_set(ipmrouteinterfaceoutmcastoctets.yfilter)
	|| ydk::is_set(ipmrouteinterfacehcinmcastoctets.yfilter)
	|| ydk::is_set(ipmrouteinterfacehcoutmcastoctets.yfilter)
	|| ydk::is_set(ciscoipmrouteifinmcastoctets.yfilter)
	|| ydk::is_set(ciscoipmrouteifoutmcastoctets.yfilter)
	|| ydk::is_set(ciscoipmrouteifinmcastpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteifhcinmcastpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteifoutmcastpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteifhcoutmcastpkts.yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteInterfaceEntry";
    ADD_KEY_TOKEN(ipmrouteinterfaceifindex, "ipMRouteInterfaceIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteinterfaceifindex.is_set || is_set(ipmrouteinterfaceifindex.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceifindex.get_name_leafdata());
    if (ipmrouteinterfacettl.is_set || is_set(ipmrouteinterfacettl.yfilter)) leaf_name_data.push_back(ipmrouteinterfacettl.get_name_leafdata());
    if (ipmrouteinterfaceprotocol.is_set || is_set(ipmrouteinterfaceprotocol.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceprotocol.get_name_leafdata());
    if (ipmrouteinterfaceratelimit.is_set || is_set(ipmrouteinterfaceratelimit.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceratelimit.get_name_leafdata());
    if (ipmrouteinterfaceinmcastoctets.is_set || is_set(ipmrouteinterfaceinmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceinmcastoctets.get_name_leafdata());
    if (ipmrouteinterfaceoutmcastoctets.is_set || is_set(ipmrouteinterfaceoutmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceoutmcastoctets.get_name_leafdata());
    if (ipmrouteinterfacehcinmcastoctets.is_set || is_set(ipmrouteinterfacehcinmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfacehcinmcastoctets.get_name_leafdata());
    if (ipmrouteinterfacehcoutmcastoctets.is_set || is_set(ipmrouteinterfacehcoutmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfacehcoutmcastoctets.get_name_leafdata());
    if (ciscoipmrouteifinmcastoctets.is_set || is_set(ciscoipmrouteifinmcastoctets.yfilter)) leaf_name_data.push_back(ciscoipmrouteifinmcastoctets.get_name_leafdata());
    if (ciscoipmrouteifoutmcastoctets.is_set || is_set(ciscoipmrouteifoutmcastoctets.yfilter)) leaf_name_data.push_back(ciscoipmrouteifoutmcastoctets.get_name_leafdata());
    if (ciscoipmrouteifinmcastpkts.is_set || is_set(ciscoipmrouteifinmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifinmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifhcinmcastpkts.is_set || is_set(ciscoipmrouteifhcinmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifhcinmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifoutmcastpkts.is_set || is_set(ciscoipmrouteifoutmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifoutmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifhcoutmcastpkts.is_set || is_set(ciscoipmrouteifhcoutmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifhcoutmcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteInterfaceIfIndex")
    {
        ipmrouteinterfaceifindex = value;
        ipmrouteinterfaceifindex.value_namespace = name_space;
        ipmrouteinterfaceifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceTtl")
    {
        ipmrouteinterfacettl = value;
        ipmrouteinterfacettl.value_namespace = name_space;
        ipmrouteinterfacettl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceProtocol")
    {
        ipmrouteinterfaceprotocol = value;
        ipmrouteinterfaceprotocol.value_namespace = name_space;
        ipmrouteinterfaceprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceRateLimit")
    {
        ipmrouteinterfaceratelimit = value;
        ipmrouteinterfaceratelimit.value_namespace = name_space;
        ipmrouteinterfaceratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceInMcastOctets")
    {
        ipmrouteinterfaceinmcastoctets = value;
        ipmrouteinterfaceinmcastoctets.value_namespace = name_space;
        ipmrouteinterfaceinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceOutMcastOctets")
    {
        ipmrouteinterfaceoutmcastoctets = value;
        ipmrouteinterfaceoutmcastoctets.value_namespace = name_space;
        ipmrouteinterfaceoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceHCInMcastOctets")
    {
        ipmrouteinterfacehcinmcastoctets = value;
        ipmrouteinterfacehcinmcastoctets.value_namespace = name_space;
        ipmrouteinterfacehcinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceHCOutMcastOctets")
    {
        ipmrouteinterfacehcoutmcastoctets = value;
        ipmrouteinterfacehcoutmcastoctets.value_namespace = name_space;
        ipmrouteinterfacehcoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastOctets")
    {
        ciscoipmrouteifinmcastoctets = value;
        ciscoipmrouteifinmcastoctets.value_namespace = name_space;
        ciscoipmrouteifinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastOctets")
    {
        ciscoipmrouteifoutmcastoctets = value;
        ciscoipmrouteifoutmcastoctets.value_namespace = name_space;
        ciscoipmrouteifoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastPkts")
    {
        ciscoipmrouteifinmcastpkts = value;
        ciscoipmrouteifinmcastpkts.value_namespace = name_space;
        ciscoipmrouteifinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCInMcastPkts")
    {
        ciscoipmrouteifhcinmcastpkts = value;
        ciscoipmrouteifhcinmcastpkts.value_namespace = name_space;
        ciscoipmrouteifhcinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastPkts")
    {
        ciscoipmrouteifoutmcastpkts = value;
        ciscoipmrouteifoutmcastpkts.value_namespace = name_space;
        ciscoipmrouteifoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCOutMcastPkts")
    {
        ciscoipmrouteifhcoutmcastpkts = value;
        ciscoipmrouteifhcoutmcastpkts.value_namespace = name_space;
        ciscoipmrouteifhcoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteInterfaceIfIndex")
    {
        ipmrouteinterfaceifindex.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceTtl")
    {
        ipmrouteinterfacettl.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceProtocol")
    {
        ipmrouteinterfaceprotocol.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceRateLimit")
    {
        ipmrouteinterfaceratelimit.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceInMcastOctets")
    {
        ipmrouteinterfaceinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceOutMcastOctets")
    {
        ipmrouteinterfaceoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceHCInMcastOctets")
    {
        ipmrouteinterfacehcinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceHCOutMcastOctets")
    {
        ipmrouteinterfacehcoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfInMcastOctets")
    {
        ciscoipmrouteifinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastOctets")
    {
        ciscoipmrouteifoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfInMcastPkts")
    {
        ciscoipmrouteifinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfHCInMcastPkts")
    {
        ciscoipmrouteifhcinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastPkts")
    {
        ciscoipmrouteifoutmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfHCOutMcastPkts")
    {
        ciscoipmrouteifhcoutmcastpkts.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::IpMRouteInterfaceTable::IpMRouteInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteInterfaceIfIndex" || name == "ipMRouteInterfaceTtl" || name == "ipMRouteInterfaceProtocol" || name == "ipMRouteInterfaceRateLimit" || name == "ipMRouteInterfaceInMcastOctets" || name == "ipMRouteInterfaceOutMcastOctets" || name == "ipMRouteInterfaceHCInMcastOctets" || name == "ipMRouteInterfaceHCOutMcastOctets" || name == "ciscoIpMRouteIfInMcastOctets" || name == "ciscoIpMRouteIfOutMcastOctets" || name == "ciscoIpMRouteIfInMcastPkts" || name == "ciscoIpMRouteIfHCInMcastPkts" || name == "ciscoIpMRouteIfOutMcastPkts" || name == "ciscoIpMRouteIfHCOutMcastPkts")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryTable()
    :
    ipmrouteboundaryentry(this, {"ipmrouteboundaryifindex", "ipmrouteboundaryaddress", "ipmrouteboundaryaddressmask"})
{

    yang_name = "ipMRouteBoundaryTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteBoundaryTable::~IpMRouteBoundaryTable()
{
}

bool IPMROUTESTDMIB::IpMRouteBoundaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipmrouteboundaryentry.len(); index++)
    {
        if(ipmrouteboundaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::IpMRouteBoundaryTable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteboundaryentry.len(); index++)
    {
        if(ipmrouteboundaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteBoundaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteBoundaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteBoundaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteBoundaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteBoundaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteBoundaryEntry")
    {
        auto c = std::make_shared<IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry>();
        c->parent = this;
        ipmrouteboundaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteBoundaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipmrouteboundaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void IPMROUTESTDMIB::IpMRouteBoundaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::IpMRouteBoundaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::IpMRouteBoundaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteBoundaryEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::IpMRouteBoundaryEntry()
    :
    ipmrouteboundaryifindex{YType::int32, "ipMRouteBoundaryIfIndex"},
    ipmrouteboundaryaddress{YType::str, "ipMRouteBoundaryAddress"},
    ipmrouteboundaryaddressmask{YType::str, "ipMRouteBoundaryAddressMask"},
    ipmrouteboundarystatus{YType::enumeration, "ipMRouteBoundaryStatus"}
{

    yang_name = "ipMRouteBoundaryEntry"; yang_parent_name = "ipMRouteBoundaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::~IpMRouteBoundaryEntry()
{
}

bool IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipmrouteboundaryifindex.is_set
	|| ipmrouteboundaryaddress.is_set
	|| ipmrouteboundaryaddressmask.is_set
	|| ipmrouteboundarystatus.is_set;
}

bool IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmrouteboundaryifindex.yfilter)
	|| ydk::is_set(ipmrouteboundaryaddress.yfilter)
	|| ydk::is_set(ipmrouteboundaryaddressmask.yfilter)
	|| ydk::is_set(ipmrouteboundarystatus.yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteBoundaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteBoundaryEntry";
    ADD_KEY_TOKEN(ipmrouteboundaryifindex, "ipMRouteBoundaryIfIndex");
    ADD_KEY_TOKEN(ipmrouteboundaryaddress, "ipMRouteBoundaryAddress");
    ADD_KEY_TOKEN(ipmrouteboundaryaddressmask, "ipMRouteBoundaryAddressMask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteboundaryifindex.is_set || is_set(ipmrouteboundaryifindex.yfilter)) leaf_name_data.push_back(ipmrouteboundaryifindex.get_name_leafdata());
    if (ipmrouteboundaryaddress.is_set || is_set(ipmrouteboundaryaddress.yfilter)) leaf_name_data.push_back(ipmrouteboundaryaddress.get_name_leafdata());
    if (ipmrouteboundaryaddressmask.is_set || is_set(ipmrouteboundaryaddressmask.yfilter)) leaf_name_data.push_back(ipmrouteboundaryaddressmask.get_name_leafdata());
    if (ipmrouteboundarystatus.is_set || is_set(ipmrouteboundarystatus.yfilter)) leaf_name_data.push_back(ipmrouteboundarystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteBoundaryIfIndex")
    {
        ipmrouteboundaryifindex = value;
        ipmrouteboundaryifindex.value_namespace = name_space;
        ipmrouteboundaryifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteBoundaryAddress")
    {
        ipmrouteboundaryaddress = value;
        ipmrouteboundaryaddress.value_namespace = name_space;
        ipmrouteboundaryaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteBoundaryAddressMask")
    {
        ipmrouteboundaryaddressmask = value;
        ipmrouteboundaryaddressmask.value_namespace = name_space;
        ipmrouteboundaryaddressmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteBoundaryStatus")
    {
        ipmrouteboundarystatus = value;
        ipmrouteboundarystatus.value_namespace = name_space;
        ipmrouteboundarystatus.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteBoundaryIfIndex")
    {
        ipmrouteboundaryifindex.yfilter = yfilter;
    }
    if(value_path == "ipMRouteBoundaryAddress")
    {
        ipmrouteboundaryaddress.yfilter = yfilter;
    }
    if(value_path == "ipMRouteBoundaryAddressMask")
    {
        ipmrouteboundaryaddressmask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteBoundaryStatus")
    {
        ipmrouteboundarystatus.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::IpMRouteBoundaryTable::IpMRouteBoundaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteBoundaryIfIndex" || name == "ipMRouteBoundaryAddress" || name == "ipMRouteBoundaryAddressMask" || name == "ipMRouteBoundaryStatus")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameTable()
    :
    ipmroutescopenameentry(this, {"ipmroutescopenameaddress", "ipmroutescopenameaddressmask", "ipmroutescopenamelanguage"})
{

    yang_name = "ipMRouteScopeNameTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteScopeNameTable::~IpMRouteScopeNameTable()
{
}

bool IPMROUTESTDMIB::IpMRouteScopeNameTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipmroutescopenameentry.len(); index++)
    {
        if(ipmroutescopenameentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::IpMRouteScopeNameTable::has_operation() const
{
    for (std::size_t index=0; index<ipmroutescopenameentry.len(); index++)
    {
        if(ipmroutescopenameentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteScopeNameTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteScopeNameTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteScopeNameTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteScopeNameTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteScopeNameTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteScopeNameEntry")
    {
        auto c = std::make_shared<IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry>();
        c->parent = this;
        ipmroutescopenameentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteScopeNameTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipmroutescopenameentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void IPMROUTESTDMIB::IpMRouteScopeNameTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::IpMRouteScopeNameTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::IpMRouteScopeNameTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteScopeNameEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::IpMRouteScopeNameEntry()
    :
    ipmroutescopenameaddress{YType::str, "ipMRouteScopeNameAddress"},
    ipmroutescopenameaddressmask{YType::str, "ipMRouteScopeNameAddressMask"},
    ipmroutescopenamelanguage{YType::str, "ipMRouteScopeNameLanguage"},
    ipmroutescopenamestring{YType::str, "ipMRouteScopeNameString"},
    ipmroutescopenamedefault{YType::boolean, "ipMRouteScopeNameDefault"},
    ipmroutescopenamestatus{YType::enumeration, "ipMRouteScopeNameStatus"}
{

    yang_name = "ipMRouteScopeNameEntry"; yang_parent_name = "ipMRouteScopeNameTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::~IpMRouteScopeNameEntry()
{
}

bool IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipmroutescopenameaddress.is_set
	|| ipmroutescopenameaddressmask.is_set
	|| ipmroutescopenamelanguage.is_set
	|| ipmroutescopenamestring.is_set
	|| ipmroutescopenamedefault.is_set
	|| ipmroutescopenamestatus.is_set;
}

bool IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutescopenameaddress.yfilter)
	|| ydk::is_set(ipmroutescopenameaddressmask.yfilter)
	|| ydk::is_set(ipmroutescopenamelanguage.yfilter)
	|| ydk::is_set(ipmroutescopenamestring.yfilter)
	|| ydk::is_set(ipmroutescopenamedefault.yfilter)
	|| ydk::is_set(ipmroutescopenamestatus.yfilter);
}

std::string IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteScopeNameTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteScopeNameEntry";
    ADD_KEY_TOKEN(ipmroutescopenameaddress, "ipMRouteScopeNameAddress");
    ADD_KEY_TOKEN(ipmroutescopenameaddressmask, "ipMRouteScopeNameAddressMask");
    ADD_KEY_TOKEN(ipmroutescopenamelanguage, "ipMRouteScopeNameLanguage");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutescopenameaddress.is_set || is_set(ipmroutescopenameaddress.yfilter)) leaf_name_data.push_back(ipmroutescopenameaddress.get_name_leafdata());
    if (ipmroutescopenameaddressmask.is_set || is_set(ipmroutescopenameaddressmask.yfilter)) leaf_name_data.push_back(ipmroutescopenameaddressmask.get_name_leafdata());
    if (ipmroutescopenamelanguage.is_set || is_set(ipmroutescopenamelanguage.yfilter)) leaf_name_data.push_back(ipmroutescopenamelanguage.get_name_leafdata());
    if (ipmroutescopenamestring.is_set || is_set(ipmroutescopenamestring.yfilter)) leaf_name_data.push_back(ipmroutescopenamestring.get_name_leafdata());
    if (ipmroutescopenamedefault.is_set || is_set(ipmroutescopenamedefault.yfilter)) leaf_name_data.push_back(ipmroutescopenamedefault.get_name_leafdata());
    if (ipmroutescopenamestatus.is_set || is_set(ipmroutescopenamestatus.yfilter)) leaf_name_data.push_back(ipmroutescopenamestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteScopeNameAddress")
    {
        ipmroutescopenameaddress = value;
        ipmroutescopenameaddress.value_namespace = name_space;
        ipmroutescopenameaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameAddressMask")
    {
        ipmroutescopenameaddressmask = value;
        ipmroutescopenameaddressmask.value_namespace = name_space;
        ipmroutescopenameaddressmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameLanguage")
    {
        ipmroutescopenamelanguage = value;
        ipmroutescopenamelanguage.value_namespace = name_space;
        ipmroutescopenamelanguage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameString")
    {
        ipmroutescopenamestring = value;
        ipmroutescopenamestring.value_namespace = name_space;
        ipmroutescopenamestring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameDefault")
    {
        ipmroutescopenamedefault = value;
        ipmroutescopenamedefault.value_namespace = name_space;
        ipmroutescopenamedefault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameStatus")
    {
        ipmroutescopenamestatus = value;
        ipmroutescopenamestatus.value_namespace = name_space;
        ipmroutescopenamestatus.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteScopeNameAddress")
    {
        ipmroutescopenameaddress.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameAddressMask")
    {
        ipmroutescopenameaddressmask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameLanguage")
    {
        ipmroutescopenamelanguage.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameString")
    {
        ipmroutescopenamestring.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameDefault")
    {
        ipmroutescopenamedefault.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameStatus")
    {
        ipmroutescopenamestatus.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::IpMRouteScopeNameTable::IpMRouteScopeNameEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteScopeNameAddress" || name == "ipMRouteScopeNameAddressMask" || name == "ipMRouteScopeNameLanguage" || name == "ipMRouteScopeNameString" || name == "ipMRouteScopeNameDefault" || name == "ipMRouteScopeNameStatus")
        return true;
    return false;
}

const Enum::YLeaf IPMROUTESTDMIB::IpMRoute::IpMRouteEnable::enabled {1, "enabled"};
const Enum::YLeaf IPMROUTESTDMIB::IpMRoute::IpMRouteEnable::disabled {2, "disabled"};

const Enum::YLeaf IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::IpMRouteRtType::unicast {1, "unicast"};
const Enum::YLeaf IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::IpMRouteRtType::multicast {2, "multicast"};

const Enum::YLeaf IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::IpMRouteNextHopState::pruned {1, "pruned"};
const Enum::YLeaf IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::IpMRouteNextHopState::forwarding {2, "forwarding"};


}
}

