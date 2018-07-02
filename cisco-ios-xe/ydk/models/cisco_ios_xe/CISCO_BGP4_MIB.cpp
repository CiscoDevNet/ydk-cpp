
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BGP4_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_BGP4_MIB {

CISCOBGP4MIB::CISCOBGP4MIB()
    :
    cbgpglobal(std::make_shared<CISCOBGP4MIB::CbgpGlobal>())
    , cbgproutetable(std::make_shared<CISCOBGP4MIB::CbgpRouteTable>())
    , cbgppeercapstable(std::make_shared<CISCOBGP4MIB::CbgpPeerCapsTable>())
    , cbgppeeraddrfamilytable(std::make_shared<CISCOBGP4MIB::CbgpPeerAddrFamilyTable>())
    , cbgppeeraddrfamilyprefixtable(std::make_shared<CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable>())
    , cbgppeer2table(std::make_shared<CISCOBGP4MIB::CbgpPeer2Table>())
    , cbgppeer2capstable(std::make_shared<CISCOBGP4MIB::CbgpPeer2CapsTable>())
    , cbgppeer2addrfamilytable(std::make_shared<CISCOBGP4MIB::CbgpPeer2AddrFamilyTable>())
    , cbgppeer2addrfamilyprefixtable(std::make_shared<CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable>())
{
    cbgpglobal->parent = this;
    cbgproutetable->parent = this;
    cbgppeercapstable->parent = this;
    cbgppeeraddrfamilytable->parent = this;
    cbgppeeraddrfamilyprefixtable->parent = this;
    cbgppeer2table->parent = this;
    cbgppeer2capstable->parent = this;
    cbgppeer2addrfamilytable->parent = this;
    cbgppeer2addrfamilyprefixtable->parent = this;

    yang_name = "CISCO-BGP4-MIB"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOBGP4MIB::~CISCOBGP4MIB()
{
}

bool CISCOBGP4MIB::has_data() const
{
    if (is_presence_container) return true;
    return (cbgpglobal !=  nullptr && cbgpglobal->has_data())
	|| (cbgproutetable !=  nullptr && cbgproutetable->has_data())
	|| (cbgppeercapstable !=  nullptr && cbgppeercapstable->has_data())
	|| (cbgppeeraddrfamilytable !=  nullptr && cbgppeeraddrfamilytable->has_data())
	|| (cbgppeeraddrfamilyprefixtable !=  nullptr && cbgppeeraddrfamilyprefixtable->has_data())
	|| (cbgppeer2table !=  nullptr && cbgppeer2table->has_data())
	|| (cbgppeer2capstable !=  nullptr && cbgppeer2capstable->has_data())
	|| (cbgppeer2addrfamilytable !=  nullptr && cbgppeer2addrfamilytable->has_data())
	|| (cbgppeer2addrfamilyprefixtable !=  nullptr && cbgppeer2addrfamilyprefixtable->has_data());
}

bool CISCOBGP4MIB::has_operation() const
{
    return is_set(yfilter)
	|| (cbgpglobal !=  nullptr && cbgpglobal->has_operation())
	|| (cbgproutetable !=  nullptr && cbgproutetable->has_operation())
	|| (cbgppeercapstable !=  nullptr && cbgppeercapstable->has_operation())
	|| (cbgppeeraddrfamilytable !=  nullptr && cbgppeeraddrfamilytable->has_operation())
	|| (cbgppeeraddrfamilyprefixtable !=  nullptr && cbgppeeraddrfamilyprefixtable->has_operation())
	|| (cbgppeer2table !=  nullptr && cbgppeer2table->has_operation())
	|| (cbgppeer2capstable !=  nullptr && cbgppeer2capstable->has_operation())
	|| (cbgppeer2addrfamilytable !=  nullptr && cbgppeer2addrfamilytable->has_operation())
	|| (cbgppeer2addrfamilyprefixtable !=  nullptr && cbgppeer2addrfamilyprefixtable->has_operation());
}

std::string CISCOBGP4MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpGlobal")
    {
        if(cbgpglobal == nullptr)
        {
            cbgpglobal = std::make_shared<CISCOBGP4MIB::CbgpGlobal>();
        }
        return cbgpglobal;
    }

    if(child_yang_name == "cbgpRouteTable")
    {
        if(cbgproutetable == nullptr)
        {
            cbgproutetable = std::make_shared<CISCOBGP4MIB::CbgpRouteTable>();
        }
        return cbgproutetable;
    }

    if(child_yang_name == "cbgpPeerCapsTable")
    {
        if(cbgppeercapstable == nullptr)
        {
            cbgppeercapstable = std::make_shared<CISCOBGP4MIB::CbgpPeerCapsTable>();
        }
        return cbgppeercapstable;
    }

    if(child_yang_name == "cbgpPeerAddrFamilyTable")
    {
        if(cbgppeeraddrfamilytable == nullptr)
        {
            cbgppeeraddrfamilytable = std::make_shared<CISCOBGP4MIB::CbgpPeerAddrFamilyTable>();
        }
        return cbgppeeraddrfamilytable;
    }

    if(child_yang_name == "cbgpPeerAddrFamilyPrefixTable")
    {
        if(cbgppeeraddrfamilyprefixtable == nullptr)
        {
            cbgppeeraddrfamilyprefixtable = std::make_shared<CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable>();
        }
        return cbgppeeraddrfamilyprefixtable;
    }

    if(child_yang_name == "cbgpPeer2Table")
    {
        if(cbgppeer2table == nullptr)
        {
            cbgppeer2table = std::make_shared<CISCOBGP4MIB::CbgpPeer2Table>();
        }
        return cbgppeer2table;
    }

    if(child_yang_name == "cbgpPeer2CapsTable")
    {
        if(cbgppeer2capstable == nullptr)
        {
            cbgppeer2capstable = std::make_shared<CISCOBGP4MIB::CbgpPeer2CapsTable>();
        }
        return cbgppeer2capstable;
    }

    if(child_yang_name == "cbgpPeer2AddrFamilyTable")
    {
        if(cbgppeer2addrfamilytable == nullptr)
        {
            cbgppeer2addrfamilytable = std::make_shared<CISCOBGP4MIB::CbgpPeer2AddrFamilyTable>();
        }
        return cbgppeer2addrfamilytable;
    }

    if(child_yang_name == "cbgpPeer2AddrFamilyPrefixTable")
    {
        if(cbgppeer2addrfamilyprefixtable == nullptr)
        {
            cbgppeer2addrfamilyprefixtable = std::make_shared<CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable>();
        }
        return cbgppeer2addrfamilyprefixtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cbgpglobal != nullptr)
    {
        children["cbgpGlobal"] = cbgpglobal;
    }

    if(cbgproutetable != nullptr)
    {
        children["cbgpRouteTable"] = cbgproutetable;
    }

    if(cbgppeercapstable != nullptr)
    {
        children["cbgpPeerCapsTable"] = cbgppeercapstable;
    }

    if(cbgppeeraddrfamilytable != nullptr)
    {
        children["cbgpPeerAddrFamilyTable"] = cbgppeeraddrfamilytable;
    }

    if(cbgppeeraddrfamilyprefixtable != nullptr)
    {
        children["cbgpPeerAddrFamilyPrefixTable"] = cbgppeeraddrfamilyprefixtable;
    }

    if(cbgppeer2table != nullptr)
    {
        children["cbgpPeer2Table"] = cbgppeer2table;
    }

    if(cbgppeer2capstable != nullptr)
    {
        children["cbgpPeer2CapsTable"] = cbgppeer2capstable;
    }

    if(cbgppeer2addrfamilytable != nullptr)
    {
        children["cbgpPeer2AddrFamilyTable"] = cbgppeer2addrfamilytable;
    }

    if(cbgppeer2addrfamilyprefixtable != nullptr)
    {
        children["cbgpPeer2AddrFamilyPrefixTable"] = cbgppeer2addrfamilyprefixtable;
    }

    return children;
}

void CISCOBGP4MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOBGP4MIB::clone_ptr() const
{
    return std::make_shared<CISCOBGP4MIB>();
}

std::string CISCOBGP4MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOBGP4MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOBGP4MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOBGP4MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOBGP4MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpGlobal" || name == "cbgpRouteTable" || name == "cbgpPeerCapsTable" || name == "cbgpPeerAddrFamilyTable" || name == "cbgpPeerAddrFamilyPrefixTable" || name == "cbgpPeer2Table" || name == "cbgpPeer2CapsTable" || name == "cbgpPeer2AddrFamilyTable" || name == "cbgpPeer2AddrFamilyPrefixTable")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpGlobal::CbgpGlobal()
    :
    cbgpnotifsenable{YType::bits, "cbgpNotifsEnable"},
    cbgplocalas{YType::uint32, "cbgpLocalAs"}
{

    yang_name = "cbgpGlobal"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpGlobal::~CbgpGlobal()
{
}

bool CISCOBGP4MIB::CbgpGlobal::has_data() const
{
    if (is_presence_container) return true;
    return cbgpnotifsenable.is_set
	|| cbgplocalas.is_set;
}

bool CISCOBGP4MIB::CbgpGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgpnotifsenable.yfilter)
	|| ydk::is_set(cbgplocalas.yfilter);
}

std::string CISCOBGP4MIB::CbgpGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpGlobal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgpnotifsenable.is_set || is_set(cbgpnotifsenable.yfilter)) leaf_name_data.push_back(cbgpnotifsenable.get_name_leafdata());
    if (cbgplocalas.is_set || is_set(cbgplocalas.yfilter)) leaf_name_data.push_back(cbgplocalas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpNotifsEnable")
    {
        cbgpnotifsenable[value] = true;
    }
    if(value_path == "cbgpLocalAs")
    {
        cbgplocalas = value;
        cbgplocalas.value_namespace = name_space;
        cbgplocalas.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpNotifsEnable")
    {
        cbgpnotifsenable.yfilter = yfilter;
    }
    if(value_path == "cbgpLocalAs")
    {
        cbgplocalas.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpNotifsEnable" || name == "cbgpLocalAs")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpRouteTable::CbgpRouteTable()
    :
    cbgprouteentry(this, {"cbgprouteafi", "cbgproutesafi", "cbgproutepeertype", "cbgproutepeer", "cbgprouteaddrprefix", "cbgprouteaddrprefixlen"})
{

    yang_name = "cbgpRouteTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpRouteTable::~CbgpRouteTable()
{
}

bool CISCOBGP4MIB::CbgpRouteTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgprouteentry.len(); index++)
    {
        if(cbgprouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpRouteTable::has_operation() const
{
    for (std::size_t index=0; index<cbgprouteentry.len(); index++)
    {
        if(cbgprouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpRouteTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpRouteEntry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry>();
        c->parent = this;
        cbgprouteentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgprouteentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpRouteEntry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteEntry()
    :
    cbgprouteafi{YType::enumeration, "cbgpRouteAfi"},
    cbgproutesafi{YType::enumeration, "cbgpRouteSafi"},
    cbgproutepeertype{YType::enumeration, "cbgpRoutePeerType"},
    cbgproutepeer{YType::str, "cbgpRoutePeer"},
    cbgprouteaddrprefix{YType::str, "cbgpRouteAddrPrefix"},
    cbgprouteaddrprefixlen{YType::uint32, "cbgpRouteAddrPrefixLen"},
    cbgprouteorigin{YType::enumeration, "cbgpRouteOrigin"},
    cbgprouteaspathsegment{YType::str, "cbgpRouteASPathSegment"},
    cbgproutenexthop{YType::str, "cbgpRouteNextHop"},
    cbgproutemedpresent{YType::boolean, "cbgpRouteMedPresent"},
    cbgproutemultiexitdisc{YType::uint32, "cbgpRouteMultiExitDisc"},
    cbgproutelocalprefpresent{YType::boolean, "cbgpRouteLocalPrefPresent"},
    cbgproutelocalpref{YType::uint32, "cbgpRouteLocalPref"},
    cbgprouteatomicaggregate{YType::enumeration, "cbgpRouteAtomicAggregate"},
    cbgprouteaggregatoras{YType::uint32, "cbgpRouteAggregatorAS"},
    cbgprouteaggregatoraddrtype{YType::enumeration, "cbgpRouteAggregatorAddrType"},
    cbgprouteaggregatoraddr{YType::str, "cbgpRouteAggregatorAddr"},
    cbgproutebest{YType::boolean, "cbgpRouteBest"},
    cbgprouteunknownattr{YType::str, "cbgpRouteUnknownAttr"}
{

    yang_name = "cbgpRouteEntry"; yang_parent_name = "cbgpRouteTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::~CbgpRouteEntry()
{
}

bool CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return cbgprouteafi.is_set
	|| cbgproutesafi.is_set
	|| cbgproutepeertype.is_set
	|| cbgproutepeer.is_set
	|| cbgprouteaddrprefix.is_set
	|| cbgprouteaddrprefixlen.is_set
	|| cbgprouteorigin.is_set
	|| cbgprouteaspathsegment.is_set
	|| cbgproutenexthop.is_set
	|| cbgproutemedpresent.is_set
	|| cbgproutemultiexitdisc.is_set
	|| cbgproutelocalprefpresent.is_set
	|| cbgproutelocalpref.is_set
	|| cbgprouteatomicaggregate.is_set
	|| cbgprouteaggregatoras.is_set
	|| cbgprouteaggregatoraddrtype.is_set
	|| cbgprouteaggregatoraddr.is_set
	|| cbgproutebest.is_set
	|| cbgprouteunknownattr.is_set;
}

bool CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgprouteafi.yfilter)
	|| ydk::is_set(cbgproutesafi.yfilter)
	|| ydk::is_set(cbgproutepeertype.yfilter)
	|| ydk::is_set(cbgproutepeer.yfilter)
	|| ydk::is_set(cbgprouteaddrprefix.yfilter)
	|| ydk::is_set(cbgprouteaddrprefixlen.yfilter)
	|| ydk::is_set(cbgprouteorigin.yfilter)
	|| ydk::is_set(cbgprouteaspathsegment.yfilter)
	|| ydk::is_set(cbgproutenexthop.yfilter)
	|| ydk::is_set(cbgproutemedpresent.yfilter)
	|| ydk::is_set(cbgproutemultiexitdisc.yfilter)
	|| ydk::is_set(cbgproutelocalprefpresent.yfilter)
	|| ydk::is_set(cbgproutelocalpref.yfilter)
	|| ydk::is_set(cbgprouteatomicaggregate.yfilter)
	|| ydk::is_set(cbgprouteaggregatoras.yfilter)
	|| ydk::is_set(cbgprouteaggregatoraddrtype.yfilter)
	|| ydk::is_set(cbgprouteaggregatoraddr.yfilter)
	|| ydk::is_set(cbgproutebest.yfilter)
	|| ydk::is_set(cbgprouteunknownattr.yfilter);
}

std::string CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpRouteEntry";
    ADD_KEY_TOKEN(cbgprouteafi, "cbgpRouteAfi");
    ADD_KEY_TOKEN(cbgproutesafi, "cbgpRouteSafi");
    ADD_KEY_TOKEN(cbgproutepeertype, "cbgpRoutePeerType");
    ADD_KEY_TOKEN(cbgproutepeer, "cbgpRoutePeer");
    ADD_KEY_TOKEN(cbgprouteaddrprefix, "cbgpRouteAddrPrefix");
    ADD_KEY_TOKEN(cbgprouteaddrprefixlen, "cbgpRouteAddrPrefixLen");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgprouteafi.is_set || is_set(cbgprouteafi.yfilter)) leaf_name_data.push_back(cbgprouteafi.get_name_leafdata());
    if (cbgproutesafi.is_set || is_set(cbgproutesafi.yfilter)) leaf_name_data.push_back(cbgproutesafi.get_name_leafdata());
    if (cbgproutepeertype.is_set || is_set(cbgproutepeertype.yfilter)) leaf_name_data.push_back(cbgproutepeertype.get_name_leafdata());
    if (cbgproutepeer.is_set || is_set(cbgproutepeer.yfilter)) leaf_name_data.push_back(cbgproutepeer.get_name_leafdata());
    if (cbgprouteaddrprefix.is_set || is_set(cbgprouteaddrprefix.yfilter)) leaf_name_data.push_back(cbgprouteaddrprefix.get_name_leafdata());
    if (cbgprouteaddrprefixlen.is_set || is_set(cbgprouteaddrprefixlen.yfilter)) leaf_name_data.push_back(cbgprouteaddrprefixlen.get_name_leafdata());
    if (cbgprouteorigin.is_set || is_set(cbgprouteorigin.yfilter)) leaf_name_data.push_back(cbgprouteorigin.get_name_leafdata());
    if (cbgprouteaspathsegment.is_set || is_set(cbgprouteaspathsegment.yfilter)) leaf_name_data.push_back(cbgprouteaspathsegment.get_name_leafdata());
    if (cbgproutenexthop.is_set || is_set(cbgproutenexthop.yfilter)) leaf_name_data.push_back(cbgproutenexthop.get_name_leafdata());
    if (cbgproutemedpresent.is_set || is_set(cbgproutemedpresent.yfilter)) leaf_name_data.push_back(cbgproutemedpresent.get_name_leafdata());
    if (cbgproutemultiexitdisc.is_set || is_set(cbgproutemultiexitdisc.yfilter)) leaf_name_data.push_back(cbgproutemultiexitdisc.get_name_leafdata());
    if (cbgproutelocalprefpresent.is_set || is_set(cbgproutelocalprefpresent.yfilter)) leaf_name_data.push_back(cbgproutelocalprefpresent.get_name_leafdata());
    if (cbgproutelocalpref.is_set || is_set(cbgproutelocalpref.yfilter)) leaf_name_data.push_back(cbgproutelocalpref.get_name_leafdata());
    if (cbgprouteatomicaggregate.is_set || is_set(cbgprouteatomicaggregate.yfilter)) leaf_name_data.push_back(cbgprouteatomicaggregate.get_name_leafdata());
    if (cbgprouteaggregatoras.is_set || is_set(cbgprouteaggregatoras.yfilter)) leaf_name_data.push_back(cbgprouteaggregatoras.get_name_leafdata());
    if (cbgprouteaggregatoraddrtype.is_set || is_set(cbgprouteaggregatoraddrtype.yfilter)) leaf_name_data.push_back(cbgprouteaggregatoraddrtype.get_name_leafdata());
    if (cbgprouteaggregatoraddr.is_set || is_set(cbgprouteaggregatoraddr.yfilter)) leaf_name_data.push_back(cbgprouteaggregatoraddr.get_name_leafdata());
    if (cbgproutebest.is_set || is_set(cbgproutebest.yfilter)) leaf_name_data.push_back(cbgproutebest.get_name_leafdata());
    if (cbgprouteunknownattr.is_set || is_set(cbgprouteunknownattr.yfilter)) leaf_name_data.push_back(cbgprouteunknownattr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpRouteAfi")
    {
        cbgprouteafi = value;
        cbgprouteafi.value_namespace = name_space;
        cbgprouteafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteSafi")
    {
        cbgproutesafi = value;
        cbgproutesafi.value_namespace = name_space;
        cbgproutesafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRoutePeerType")
    {
        cbgproutepeertype = value;
        cbgproutepeertype.value_namespace = name_space;
        cbgproutepeertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRoutePeer")
    {
        cbgproutepeer = value;
        cbgproutepeer.value_namespace = name_space;
        cbgproutepeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAddrPrefix")
    {
        cbgprouteaddrprefix = value;
        cbgprouteaddrprefix.value_namespace = name_space;
        cbgprouteaddrprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAddrPrefixLen")
    {
        cbgprouteaddrprefixlen = value;
        cbgprouteaddrprefixlen.value_namespace = name_space;
        cbgprouteaddrprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteOrigin")
    {
        cbgprouteorigin = value;
        cbgprouteorigin.value_namespace = name_space;
        cbgprouteorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteASPathSegment")
    {
        cbgprouteaspathsegment = value;
        cbgprouteaspathsegment.value_namespace = name_space;
        cbgprouteaspathsegment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteNextHop")
    {
        cbgproutenexthop = value;
        cbgproutenexthop.value_namespace = name_space;
        cbgproutenexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteMedPresent")
    {
        cbgproutemedpresent = value;
        cbgproutemedpresent.value_namespace = name_space;
        cbgproutemedpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteMultiExitDisc")
    {
        cbgproutemultiexitdisc = value;
        cbgproutemultiexitdisc.value_namespace = name_space;
        cbgproutemultiexitdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteLocalPrefPresent")
    {
        cbgproutelocalprefpresent = value;
        cbgproutelocalprefpresent.value_namespace = name_space;
        cbgproutelocalprefpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteLocalPref")
    {
        cbgproutelocalpref = value;
        cbgproutelocalpref.value_namespace = name_space;
        cbgproutelocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAtomicAggregate")
    {
        cbgprouteatomicaggregate = value;
        cbgprouteatomicaggregate.value_namespace = name_space;
        cbgprouteatomicaggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAggregatorAS")
    {
        cbgprouteaggregatoras = value;
        cbgprouteaggregatoras.value_namespace = name_space;
        cbgprouteaggregatoras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAggregatorAddrType")
    {
        cbgprouteaggregatoraddrtype = value;
        cbgprouteaggregatoraddrtype.value_namespace = name_space;
        cbgprouteaggregatoraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteAggregatorAddr")
    {
        cbgprouteaggregatoraddr = value;
        cbgprouteaggregatoraddr.value_namespace = name_space;
        cbgprouteaggregatoraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteBest")
    {
        cbgproutebest = value;
        cbgproutebest.value_namespace = name_space;
        cbgproutebest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpRouteUnknownAttr")
    {
        cbgprouteunknownattr = value;
        cbgprouteunknownattr.value_namespace = name_space;
        cbgprouteunknownattr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpRouteAfi")
    {
        cbgprouteafi.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteSafi")
    {
        cbgproutesafi.yfilter = yfilter;
    }
    if(value_path == "cbgpRoutePeerType")
    {
        cbgproutepeertype.yfilter = yfilter;
    }
    if(value_path == "cbgpRoutePeer")
    {
        cbgproutepeer.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAddrPrefix")
    {
        cbgprouteaddrprefix.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAddrPrefixLen")
    {
        cbgprouteaddrprefixlen.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteOrigin")
    {
        cbgprouteorigin.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteASPathSegment")
    {
        cbgprouteaspathsegment.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteNextHop")
    {
        cbgproutenexthop.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteMedPresent")
    {
        cbgproutemedpresent.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteMultiExitDisc")
    {
        cbgproutemultiexitdisc.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteLocalPrefPresent")
    {
        cbgproutelocalprefpresent.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteLocalPref")
    {
        cbgproutelocalpref.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAtomicAggregate")
    {
        cbgprouteatomicaggregate.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAggregatorAS")
    {
        cbgprouteaggregatoras.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAggregatorAddrType")
    {
        cbgprouteaggregatoraddrtype.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteAggregatorAddr")
    {
        cbgprouteaggregatoraddr.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteBest")
    {
        cbgproutebest.yfilter = yfilter;
    }
    if(value_path == "cbgpRouteUnknownAttr")
    {
        cbgprouteunknownattr.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpRouteAfi" || name == "cbgpRouteSafi" || name == "cbgpRoutePeerType" || name == "cbgpRoutePeer" || name == "cbgpRouteAddrPrefix" || name == "cbgpRouteAddrPrefixLen" || name == "cbgpRouteOrigin" || name == "cbgpRouteASPathSegment" || name == "cbgpRouteNextHop" || name == "cbgpRouteMedPresent" || name == "cbgpRouteMultiExitDisc" || name == "cbgpRouteLocalPrefPresent" || name == "cbgpRouteLocalPref" || name == "cbgpRouteAtomicAggregate" || name == "cbgpRouteAggregatorAS" || name == "cbgpRouteAggregatorAddrType" || name == "cbgpRouteAggregatorAddr" || name == "cbgpRouteBest" || name == "cbgpRouteUnknownAttr")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsTable()
    :
    cbgppeercapsentry(this, {"bgppeerremoteaddr", "cbgppeercapcode", "cbgppeercapindex"})
{

    yang_name = "cbgpPeerCapsTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeerCapsTable::~CbgpPeerCapsTable()
{
}

bool CISCOBGP4MIB::CbgpPeerCapsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgppeercapsentry.len(); index++)
    {
        if(cbgppeercapsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpPeerCapsTable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeercapsentry.len(); index++)
    {
        if(cbgppeercapsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpPeerCapsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeerCapsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerCapsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeerCapsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeerCapsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerCapsEntry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry>();
        c->parent = this;
        cbgppeercapsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeerCapsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgppeercapsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpPeerCapsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpPeerCapsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpPeerCapsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeerCapsEntry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::CbgpPeerCapsEntry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeercapcode{YType::enumeration, "cbgpPeerCapCode"},
    cbgppeercapindex{YType::uint32, "cbgpPeerCapIndex"},
    cbgppeercapvalue{YType::str, "cbgpPeerCapValue"}
{

    yang_name = "cbgpPeerCapsEntry"; yang_parent_name = "cbgpPeerCapsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::~CbgpPeerCapsEntry()
{
}

bool CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::has_data() const
{
    if (is_presence_container) return true;
    return bgppeerremoteaddr.is_set
	|| cbgppeercapcode.is_set
	|| cbgppeercapindex.is_set
	|| cbgppeercapvalue.is_set;
}

bool CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppeerremoteaddr.yfilter)
	|| ydk::is_set(cbgppeercapcode.yfilter)
	|| ydk::is_set(cbgppeercapindex.yfilter)
	|| ydk::is_set(cbgppeercapvalue.yfilter);
}

std::string CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerCapsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerCapsEntry";
    ADD_KEY_TOKEN(bgppeerremoteaddr, "bgpPeerRemoteAddr");
    ADD_KEY_TOKEN(cbgppeercapcode, "cbgpPeerCapCode");
    ADD_KEY_TOKEN(cbgppeercapindex, "cbgpPeerCapIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.yfilter)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeercapcode.is_set || is_set(cbgppeercapcode.yfilter)) leaf_name_data.push_back(cbgppeercapcode.get_name_leafdata());
    if (cbgppeercapindex.is_set || is_set(cbgppeercapindex.yfilter)) leaf_name_data.push_back(cbgppeercapindex.get_name_leafdata());
    if (cbgppeercapvalue.is_set || is_set(cbgppeercapvalue.yfilter)) leaf_name_data.push_back(cbgppeercapvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
        bgppeerremoteaddr.value_namespace = name_space;
        bgppeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerCapCode")
    {
        cbgppeercapcode = value;
        cbgppeercapcode.value_namespace = name_space;
        cbgppeercapcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerCapIndex")
    {
        cbgppeercapindex = value;
        cbgppeercapindex.value_namespace = name_space;
        cbgppeercapindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerCapValue")
    {
        cbgppeercapvalue = value;
        cbgppeercapvalue.value_namespace = name_space;
        cbgppeercapvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerCapCode")
    {
        cbgppeercapcode.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerCapIndex")
    {
        cbgppeercapindex.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerCapValue")
    {
        cbgppeercapvalue.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerRemoteAddr" || name == "cbgpPeerCapCode" || name == "cbgpPeerCapIndex" || name == "cbgpPeerCapValue")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyTable()
    :
    cbgppeeraddrfamilyentry(this, {"bgppeerremoteaddr", "cbgppeeraddrfamilyafi", "cbgppeeraddrfamilysafi"})
{

    yang_name = "cbgpPeerAddrFamilyTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeerAddrFamilyTable::~CbgpPeerAddrFamilyTable()
{
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgppeeraddrfamilyentry.len(); index++)
    {
        if(cbgppeeraddrfamilyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyTable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyentry.len(); index++)
    {
        if(cbgppeeraddrfamilyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeerAddrFamilyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeerAddrFamilyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerAddrFamilyEntry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry>();
        c->parent = this;
        cbgppeeraddrfamilyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeerAddrFamilyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgppeeraddrfamilyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeerAddrFamilyEntry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::CbgpPeerAddrFamilyEntry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeeraddrfamilyafi{YType::enumeration, "cbgpPeerAddrFamilyAfi"},
    cbgppeeraddrfamilysafi{YType::enumeration, "cbgpPeerAddrFamilySafi"},
    cbgppeeraddrfamilyname{YType::str, "cbgpPeerAddrFamilyName"}
{

    yang_name = "cbgpPeerAddrFamilyEntry"; yang_parent_name = "cbgpPeerAddrFamilyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::~CbgpPeerAddrFamilyEntry()
{
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::has_data() const
{
    if (is_presence_container) return true;
    return bgppeerremoteaddr.is_set
	|| cbgppeeraddrfamilyafi.is_set
	|| cbgppeeraddrfamilysafi.is_set
	|| cbgppeeraddrfamilyname.is_set;
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppeerremoteaddr.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilyname.yfilter);
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerAddrFamilyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyEntry";
    ADD_KEY_TOKEN(bgppeerremoteaddr, "bgpPeerRemoteAddr");
    ADD_KEY_TOKEN(cbgppeeraddrfamilyafi, "cbgpPeerAddrFamilyAfi");
    ADD_KEY_TOKEN(cbgppeeraddrfamilysafi, "cbgpPeerAddrFamilySafi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.yfilter)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeeraddrfamilyafi.is_set || is_set(cbgppeeraddrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilyafi.get_name_leafdata());
    if (cbgppeeraddrfamilysafi.is_set || is_set(cbgppeeraddrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilysafi.get_name_leafdata());
    if (cbgppeeraddrfamilyname.is_set || is_set(cbgppeeraddrfamilyname.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilyname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
        bgppeerremoteaddr.value_namespace = name_space;
        bgppeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi = value;
        cbgppeeraddrfamilyafi.value_namespace = name_space;
        cbgppeeraddrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi = value;
        cbgppeeraddrfamilysafi.value_namespace = name_space;
        cbgppeeraddrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilyName")
    {
        cbgppeeraddrfamilyname = value;
        cbgppeeraddrfamilyname.value_namespace = name_space;
        cbgppeeraddrfamilyname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilyName")
    {
        cbgppeeraddrfamilyname.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyTable::CbgpPeerAddrFamilyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerRemoteAddr" || name == "cbgpPeerAddrFamilyAfi" || name == "cbgpPeerAddrFamilySafi" || name == "cbgpPeerAddrFamilyName")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixTable()
    :
    cbgppeeraddrfamilyprefixentry(this, {"bgppeerremoteaddr", "cbgppeeraddrfamilyafi", "cbgppeeraddrfamilysafi"})
{

    yang_name = "cbgpPeerAddrFamilyPrefixTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::~CbgpPeerAddrFamilyPrefixTable()
{
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgppeeraddrfamilyprefixentry.len(); index++)
    {
        if(cbgppeeraddrfamilyprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyprefixentry.len(); index++)
    {
        if(cbgppeeraddrfamilyprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerAddrFamilyPrefixEntry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry>();
        c->parent = this;
        cbgppeeraddrfamilyprefixentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgppeeraddrfamilyprefixentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeerAddrFamilyPrefixEntry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::CbgpPeerAddrFamilyPrefixEntry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeeraddrfamilyafi{YType::enumeration, "cbgpPeerAddrFamilyAfi"},
    cbgppeeraddrfamilysafi{YType::enumeration, "cbgpPeerAddrFamilySafi"},
    cbgppeeracceptedprefixes{YType::uint32, "cbgpPeerAcceptedPrefixes"},
    cbgppeerdeniedprefixes{YType::uint32, "cbgpPeerDeniedPrefixes"},
    cbgppeerprefixadminlimit{YType::uint32, "cbgpPeerPrefixAdminLimit"},
    cbgppeerprefixthreshold{YType::uint32, "cbgpPeerPrefixThreshold"},
    cbgppeerprefixclearthreshold{YType::uint32, "cbgpPeerPrefixClearThreshold"},
    cbgppeeradvertisedprefixes{YType::uint32, "cbgpPeerAdvertisedPrefixes"},
    cbgppeersuppressedprefixes{YType::uint32, "cbgpPeerSuppressedPrefixes"},
    cbgppeerwithdrawnprefixes{YType::uint32, "cbgpPeerWithdrawnPrefixes"}
{

    yang_name = "cbgpPeerAddrFamilyPrefixEntry"; yang_parent_name = "cbgpPeerAddrFamilyPrefixTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::~CbgpPeerAddrFamilyPrefixEntry()
{
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::has_data() const
{
    if (is_presence_container) return true;
    return bgppeerremoteaddr.is_set
	|| cbgppeeraddrfamilyafi.is_set
	|| cbgppeeraddrfamilysafi.is_set
	|| cbgppeeracceptedprefixes.is_set
	|| cbgppeerdeniedprefixes.is_set
	|| cbgppeerprefixadminlimit.is_set
	|| cbgppeerprefixthreshold.is_set
	|| cbgppeerprefixclearthreshold.is_set
	|| cbgppeeradvertisedprefixes.is_set
	|| cbgppeersuppressedprefixes.is_set
	|| cbgppeerwithdrawnprefixes.is_set;
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppeerremoteaddr.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeeraddrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeeracceptedprefixes.yfilter)
	|| ydk::is_set(cbgppeerdeniedprefixes.yfilter)
	|| ydk::is_set(cbgppeerprefixadminlimit.yfilter)
	|| ydk::is_set(cbgppeerprefixthreshold.yfilter)
	|| ydk::is_set(cbgppeerprefixclearthreshold.yfilter)
	|| ydk::is_set(cbgppeeradvertisedprefixes.yfilter)
	|| ydk::is_set(cbgppeersuppressedprefixes.yfilter)
	|| ydk::is_set(cbgppeerwithdrawnprefixes.yfilter);
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerAddrFamilyPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyPrefixEntry";
    ADD_KEY_TOKEN(bgppeerremoteaddr, "bgpPeerRemoteAddr");
    ADD_KEY_TOKEN(cbgppeeraddrfamilyafi, "cbgpPeerAddrFamilyAfi");
    ADD_KEY_TOKEN(cbgppeeraddrfamilysafi, "cbgpPeerAddrFamilySafi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.yfilter)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeeraddrfamilyafi.is_set || is_set(cbgppeeraddrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilyafi.get_name_leafdata());
    if (cbgppeeraddrfamilysafi.is_set || is_set(cbgppeeraddrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeeraddrfamilysafi.get_name_leafdata());
    if (cbgppeeracceptedprefixes.is_set || is_set(cbgppeeracceptedprefixes.yfilter)) leaf_name_data.push_back(cbgppeeracceptedprefixes.get_name_leafdata());
    if (cbgppeerdeniedprefixes.is_set || is_set(cbgppeerdeniedprefixes.yfilter)) leaf_name_data.push_back(cbgppeerdeniedprefixes.get_name_leafdata());
    if (cbgppeerprefixadminlimit.is_set || is_set(cbgppeerprefixadminlimit.yfilter)) leaf_name_data.push_back(cbgppeerprefixadminlimit.get_name_leafdata());
    if (cbgppeerprefixthreshold.is_set || is_set(cbgppeerprefixthreshold.yfilter)) leaf_name_data.push_back(cbgppeerprefixthreshold.get_name_leafdata());
    if (cbgppeerprefixclearthreshold.is_set || is_set(cbgppeerprefixclearthreshold.yfilter)) leaf_name_data.push_back(cbgppeerprefixclearthreshold.get_name_leafdata());
    if (cbgppeeradvertisedprefixes.is_set || is_set(cbgppeeradvertisedprefixes.yfilter)) leaf_name_data.push_back(cbgppeeradvertisedprefixes.get_name_leafdata());
    if (cbgppeersuppressedprefixes.is_set || is_set(cbgppeersuppressedprefixes.yfilter)) leaf_name_data.push_back(cbgppeersuppressedprefixes.get_name_leafdata());
    if (cbgppeerwithdrawnprefixes.is_set || is_set(cbgppeerwithdrawnprefixes.yfilter)) leaf_name_data.push_back(cbgppeerwithdrawnprefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
        bgppeerremoteaddr.value_namespace = name_space;
        bgppeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi = value;
        cbgppeeraddrfamilyafi.value_namespace = name_space;
        cbgppeeraddrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi = value;
        cbgppeeraddrfamilysafi.value_namespace = name_space;
        cbgppeeraddrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAcceptedPrefixes")
    {
        cbgppeeracceptedprefixes = value;
        cbgppeeracceptedprefixes.value_namespace = name_space;
        cbgppeeracceptedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerDeniedPrefixes")
    {
        cbgppeerdeniedprefixes = value;
        cbgppeerdeniedprefixes.value_namespace = name_space;
        cbgppeerdeniedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerPrefixAdminLimit")
    {
        cbgppeerprefixadminlimit = value;
        cbgppeerprefixadminlimit.value_namespace = name_space;
        cbgppeerprefixadminlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerPrefixThreshold")
    {
        cbgppeerprefixthreshold = value;
        cbgppeerprefixthreshold.value_namespace = name_space;
        cbgppeerprefixthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerPrefixClearThreshold")
    {
        cbgppeerprefixclearthreshold = value;
        cbgppeerprefixclearthreshold.value_namespace = name_space;
        cbgppeerprefixclearthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerAdvertisedPrefixes")
    {
        cbgppeeradvertisedprefixes = value;
        cbgppeeradvertisedprefixes.value_namespace = name_space;
        cbgppeeradvertisedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerSuppressedPrefixes")
    {
        cbgppeersuppressedprefixes = value;
        cbgppeersuppressedprefixes.value_namespace = name_space;
        cbgppeersuppressedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeerWithdrawnPrefixes")
    {
        cbgppeerwithdrawnprefixes = value;
        cbgppeerwithdrawnprefixes.value_namespace = name_space;
        cbgppeerwithdrawnprefixes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAcceptedPrefixes")
    {
        cbgppeeracceptedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerDeniedPrefixes")
    {
        cbgppeerdeniedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixAdminLimit")
    {
        cbgppeerprefixadminlimit.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixThreshold")
    {
        cbgppeerprefixthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixClearThreshold")
    {
        cbgppeerprefixclearthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerAdvertisedPrefixes")
    {
        cbgppeeradvertisedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerSuppressedPrefixes")
    {
        cbgppeersuppressedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerWithdrawnPrefixes")
    {
        cbgppeerwithdrawnprefixes.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpPeerAddrFamilyPrefixTable::CbgpPeerAddrFamilyPrefixEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerRemoteAddr" || name == "cbgpPeerAddrFamilyAfi" || name == "cbgpPeerAddrFamilySafi" || name == "cbgpPeerAcceptedPrefixes" || name == "cbgpPeerDeniedPrefixes" || name == "cbgpPeerPrefixAdminLimit" || name == "cbgpPeerPrefixThreshold" || name == "cbgpPeerPrefixClearThreshold" || name == "cbgpPeerAdvertisedPrefixes" || name == "cbgpPeerSuppressedPrefixes" || name == "cbgpPeerWithdrawnPrefixes")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Table()
    :
    cbgppeer2entry(this, {"cbgppeer2type", "cbgppeer2remoteaddr"})
{

    yang_name = "cbgpPeer2Table"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2Table::~CbgpPeer2Table()
{
}

bool CISCOBGP4MIB::CbgpPeer2Table::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgppeer2entry.len(); index++)
    {
        if(cbgppeer2entry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpPeer2Table::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2entry.len(); index++)
    {
        if(cbgppeer2entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2Table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2Entry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry>();
        c->parent = this;
        cbgppeer2entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgppeer2entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpPeer2Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpPeer2Table::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpPeer2Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Entry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2Entry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2state{YType::enumeration, "cbgpPeer2State"},
    cbgppeer2adminstatus{YType::enumeration, "cbgpPeer2AdminStatus"},
    cbgppeer2negotiatedversion{YType::int32, "cbgpPeer2NegotiatedVersion"},
    cbgppeer2localaddr{YType::str, "cbgpPeer2LocalAddr"},
    cbgppeer2localport{YType::uint16, "cbgpPeer2LocalPort"},
    cbgppeer2localas{YType::uint32, "cbgpPeer2LocalAs"},
    cbgppeer2localidentifier{YType::str, "cbgpPeer2LocalIdentifier"},
    cbgppeer2remoteport{YType::uint16, "cbgpPeer2RemotePort"},
    cbgppeer2remoteas{YType::uint32, "cbgpPeer2RemoteAs"},
    cbgppeer2remoteidentifier{YType::str, "cbgpPeer2RemoteIdentifier"},
    cbgppeer2inupdates{YType::uint32, "cbgpPeer2InUpdates"},
    cbgppeer2outupdates{YType::uint32, "cbgpPeer2OutUpdates"},
    cbgppeer2intotalmessages{YType::uint32, "cbgpPeer2InTotalMessages"},
    cbgppeer2outtotalmessages{YType::uint32, "cbgpPeer2OutTotalMessages"},
    cbgppeer2lasterror{YType::str, "cbgpPeer2LastError"},
    cbgppeer2fsmestablishedtransitions{YType::uint32, "cbgpPeer2FsmEstablishedTransitions"},
    cbgppeer2fsmestablishedtime{YType::uint32, "cbgpPeer2FsmEstablishedTime"},
    cbgppeer2connectretryinterval{YType::int32, "cbgpPeer2ConnectRetryInterval"},
    cbgppeer2holdtime{YType::int32, "cbgpPeer2HoldTime"},
    cbgppeer2keepalive{YType::int32, "cbgpPeer2KeepAlive"},
    cbgppeer2holdtimeconfigured{YType::int32, "cbgpPeer2HoldTimeConfigured"},
    cbgppeer2keepaliveconfigured{YType::int32, "cbgpPeer2KeepAliveConfigured"},
    cbgppeer2minasoriginationinterval{YType::int32, "cbgpPeer2MinASOriginationInterval"},
    cbgppeer2minrouteadvertisementinterval{YType::int32, "cbgpPeer2MinRouteAdvertisementInterval"},
    cbgppeer2inupdateelapsedtime{YType::uint32, "cbgpPeer2InUpdateElapsedTime"},
    cbgppeer2lasterrortxt{YType::str, "cbgpPeer2LastErrorTxt"},
    cbgppeer2prevstate{YType::enumeration, "cbgpPeer2PrevState"}
{

    yang_name = "cbgpPeer2Entry"; yang_parent_name = "cbgpPeer2Table"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::~CbgpPeer2Entry()
{
}

bool CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::has_data() const
{
    if (is_presence_container) return true;
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2state.is_set
	|| cbgppeer2adminstatus.is_set
	|| cbgppeer2negotiatedversion.is_set
	|| cbgppeer2localaddr.is_set
	|| cbgppeer2localport.is_set
	|| cbgppeer2localas.is_set
	|| cbgppeer2localidentifier.is_set
	|| cbgppeer2remoteport.is_set
	|| cbgppeer2remoteas.is_set
	|| cbgppeer2remoteidentifier.is_set
	|| cbgppeer2inupdates.is_set
	|| cbgppeer2outupdates.is_set
	|| cbgppeer2intotalmessages.is_set
	|| cbgppeer2outtotalmessages.is_set
	|| cbgppeer2lasterror.is_set
	|| cbgppeer2fsmestablishedtransitions.is_set
	|| cbgppeer2fsmestablishedtime.is_set
	|| cbgppeer2connectretryinterval.is_set
	|| cbgppeer2holdtime.is_set
	|| cbgppeer2keepalive.is_set
	|| cbgppeer2holdtimeconfigured.is_set
	|| cbgppeer2keepaliveconfigured.is_set
	|| cbgppeer2minasoriginationinterval.is_set
	|| cbgppeer2minrouteadvertisementinterval.is_set
	|| cbgppeer2inupdateelapsedtime.is_set
	|| cbgppeer2lasterrortxt.is_set
	|| cbgppeer2prevstate.is_set;
}

bool CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2state.yfilter)
	|| ydk::is_set(cbgppeer2adminstatus.yfilter)
	|| ydk::is_set(cbgppeer2negotiatedversion.yfilter)
	|| ydk::is_set(cbgppeer2localaddr.yfilter)
	|| ydk::is_set(cbgppeer2localport.yfilter)
	|| ydk::is_set(cbgppeer2localas.yfilter)
	|| ydk::is_set(cbgppeer2localidentifier.yfilter)
	|| ydk::is_set(cbgppeer2remoteport.yfilter)
	|| ydk::is_set(cbgppeer2remoteas.yfilter)
	|| ydk::is_set(cbgppeer2remoteidentifier.yfilter)
	|| ydk::is_set(cbgppeer2inupdates.yfilter)
	|| ydk::is_set(cbgppeer2outupdates.yfilter)
	|| ydk::is_set(cbgppeer2intotalmessages.yfilter)
	|| ydk::is_set(cbgppeer2outtotalmessages.yfilter)
	|| ydk::is_set(cbgppeer2lasterror.yfilter)
	|| ydk::is_set(cbgppeer2fsmestablishedtransitions.yfilter)
	|| ydk::is_set(cbgppeer2fsmestablishedtime.yfilter)
	|| ydk::is_set(cbgppeer2connectretryinterval.yfilter)
	|| ydk::is_set(cbgppeer2holdtime.yfilter)
	|| ydk::is_set(cbgppeer2keepalive.yfilter)
	|| ydk::is_set(cbgppeer2holdtimeconfigured.yfilter)
	|| ydk::is_set(cbgppeer2keepaliveconfigured.yfilter)
	|| ydk::is_set(cbgppeer2minasoriginationinterval.yfilter)
	|| ydk::is_set(cbgppeer2minrouteadvertisementinterval.yfilter)
	|| ydk::is_set(cbgppeer2inupdateelapsedtime.yfilter)
	|| ydk::is_set(cbgppeer2lasterrortxt.yfilter)
	|| ydk::is_set(cbgppeer2prevstate.yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2Table/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2Entry";
    ADD_KEY_TOKEN(cbgppeer2type, "cbgpPeer2Type");
    ADD_KEY_TOKEN(cbgppeer2remoteaddr, "cbgpPeer2RemoteAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2state.is_set || is_set(cbgppeer2state.yfilter)) leaf_name_data.push_back(cbgppeer2state.get_name_leafdata());
    if (cbgppeer2adminstatus.is_set || is_set(cbgppeer2adminstatus.yfilter)) leaf_name_data.push_back(cbgppeer2adminstatus.get_name_leafdata());
    if (cbgppeer2negotiatedversion.is_set || is_set(cbgppeer2negotiatedversion.yfilter)) leaf_name_data.push_back(cbgppeer2negotiatedversion.get_name_leafdata());
    if (cbgppeer2localaddr.is_set || is_set(cbgppeer2localaddr.yfilter)) leaf_name_data.push_back(cbgppeer2localaddr.get_name_leafdata());
    if (cbgppeer2localport.is_set || is_set(cbgppeer2localport.yfilter)) leaf_name_data.push_back(cbgppeer2localport.get_name_leafdata());
    if (cbgppeer2localas.is_set || is_set(cbgppeer2localas.yfilter)) leaf_name_data.push_back(cbgppeer2localas.get_name_leafdata());
    if (cbgppeer2localidentifier.is_set || is_set(cbgppeer2localidentifier.yfilter)) leaf_name_data.push_back(cbgppeer2localidentifier.get_name_leafdata());
    if (cbgppeer2remoteport.is_set || is_set(cbgppeer2remoteport.yfilter)) leaf_name_data.push_back(cbgppeer2remoteport.get_name_leafdata());
    if (cbgppeer2remoteas.is_set || is_set(cbgppeer2remoteas.yfilter)) leaf_name_data.push_back(cbgppeer2remoteas.get_name_leafdata());
    if (cbgppeer2remoteidentifier.is_set || is_set(cbgppeer2remoteidentifier.yfilter)) leaf_name_data.push_back(cbgppeer2remoteidentifier.get_name_leafdata());
    if (cbgppeer2inupdates.is_set || is_set(cbgppeer2inupdates.yfilter)) leaf_name_data.push_back(cbgppeer2inupdates.get_name_leafdata());
    if (cbgppeer2outupdates.is_set || is_set(cbgppeer2outupdates.yfilter)) leaf_name_data.push_back(cbgppeer2outupdates.get_name_leafdata());
    if (cbgppeer2intotalmessages.is_set || is_set(cbgppeer2intotalmessages.yfilter)) leaf_name_data.push_back(cbgppeer2intotalmessages.get_name_leafdata());
    if (cbgppeer2outtotalmessages.is_set || is_set(cbgppeer2outtotalmessages.yfilter)) leaf_name_data.push_back(cbgppeer2outtotalmessages.get_name_leafdata());
    if (cbgppeer2lasterror.is_set || is_set(cbgppeer2lasterror.yfilter)) leaf_name_data.push_back(cbgppeer2lasterror.get_name_leafdata());
    if (cbgppeer2fsmestablishedtransitions.is_set || is_set(cbgppeer2fsmestablishedtransitions.yfilter)) leaf_name_data.push_back(cbgppeer2fsmestablishedtransitions.get_name_leafdata());
    if (cbgppeer2fsmestablishedtime.is_set || is_set(cbgppeer2fsmestablishedtime.yfilter)) leaf_name_data.push_back(cbgppeer2fsmestablishedtime.get_name_leafdata());
    if (cbgppeer2connectretryinterval.is_set || is_set(cbgppeer2connectretryinterval.yfilter)) leaf_name_data.push_back(cbgppeer2connectretryinterval.get_name_leafdata());
    if (cbgppeer2holdtime.is_set || is_set(cbgppeer2holdtime.yfilter)) leaf_name_data.push_back(cbgppeer2holdtime.get_name_leafdata());
    if (cbgppeer2keepalive.is_set || is_set(cbgppeer2keepalive.yfilter)) leaf_name_data.push_back(cbgppeer2keepalive.get_name_leafdata());
    if (cbgppeer2holdtimeconfigured.is_set || is_set(cbgppeer2holdtimeconfigured.yfilter)) leaf_name_data.push_back(cbgppeer2holdtimeconfigured.get_name_leafdata());
    if (cbgppeer2keepaliveconfigured.is_set || is_set(cbgppeer2keepaliveconfigured.yfilter)) leaf_name_data.push_back(cbgppeer2keepaliveconfigured.get_name_leafdata());
    if (cbgppeer2minasoriginationinterval.is_set || is_set(cbgppeer2minasoriginationinterval.yfilter)) leaf_name_data.push_back(cbgppeer2minasoriginationinterval.get_name_leafdata());
    if (cbgppeer2minrouteadvertisementinterval.is_set || is_set(cbgppeer2minrouteadvertisementinterval.yfilter)) leaf_name_data.push_back(cbgppeer2minrouteadvertisementinterval.get_name_leafdata());
    if (cbgppeer2inupdateelapsedtime.is_set || is_set(cbgppeer2inupdateelapsedtime.yfilter)) leaf_name_data.push_back(cbgppeer2inupdateelapsedtime.get_name_leafdata());
    if (cbgppeer2lasterrortxt.is_set || is_set(cbgppeer2lasterrortxt.yfilter)) leaf_name_data.push_back(cbgppeer2lasterrortxt.get_name_leafdata());
    if (cbgppeer2prevstate.is_set || is_set(cbgppeer2prevstate.yfilter)) leaf_name_data.push_back(cbgppeer2prevstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2State")
    {
        cbgppeer2state = value;
        cbgppeer2state.value_namespace = name_space;
        cbgppeer2state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AdminStatus")
    {
        cbgppeer2adminstatus = value;
        cbgppeer2adminstatus.value_namespace = name_space;
        cbgppeer2adminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2NegotiatedVersion")
    {
        cbgppeer2negotiatedversion = value;
        cbgppeer2negotiatedversion.value_namespace = name_space;
        cbgppeer2negotiatedversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalAddr")
    {
        cbgppeer2localaddr = value;
        cbgppeer2localaddr.value_namespace = name_space;
        cbgppeer2localaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalPort")
    {
        cbgppeer2localport = value;
        cbgppeer2localport.value_namespace = name_space;
        cbgppeer2localport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalAs")
    {
        cbgppeer2localas = value;
        cbgppeer2localas.value_namespace = name_space;
        cbgppeer2localas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LocalIdentifier")
    {
        cbgppeer2localidentifier = value;
        cbgppeer2localidentifier.value_namespace = name_space;
        cbgppeer2localidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemotePort")
    {
        cbgppeer2remoteport = value;
        cbgppeer2remoteport.value_namespace = name_space;
        cbgppeer2remoteport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAs")
    {
        cbgppeer2remoteas = value;
        cbgppeer2remoteas.value_namespace = name_space;
        cbgppeer2remoteas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteIdentifier")
    {
        cbgppeer2remoteidentifier = value;
        cbgppeer2remoteidentifier.value_namespace = name_space;
        cbgppeer2remoteidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2InUpdates")
    {
        cbgppeer2inupdates = value;
        cbgppeer2inupdates.value_namespace = name_space;
        cbgppeer2inupdates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2OutUpdates")
    {
        cbgppeer2outupdates = value;
        cbgppeer2outupdates.value_namespace = name_space;
        cbgppeer2outupdates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2InTotalMessages")
    {
        cbgppeer2intotalmessages = value;
        cbgppeer2intotalmessages.value_namespace = name_space;
        cbgppeer2intotalmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2OutTotalMessages")
    {
        cbgppeer2outtotalmessages = value;
        cbgppeer2outtotalmessages.value_namespace = name_space;
        cbgppeer2outtotalmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LastError")
    {
        cbgppeer2lasterror = value;
        cbgppeer2lasterror.value_namespace = name_space;
        cbgppeer2lasterror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTransitions")
    {
        cbgppeer2fsmestablishedtransitions = value;
        cbgppeer2fsmestablishedtransitions.value_namespace = name_space;
        cbgppeer2fsmestablishedtransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTime")
    {
        cbgppeer2fsmestablishedtime = value;
        cbgppeer2fsmestablishedtime.value_namespace = name_space;
        cbgppeer2fsmestablishedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2ConnectRetryInterval")
    {
        cbgppeer2connectretryinterval = value;
        cbgppeer2connectretryinterval.value_namespace = name_space;
        cbgppeer2connectretryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2HoldTime")
    {
        cbgppeer2holdtime = value;
        cbgppeer2holdtime.value_namespace = name_space;
        cbgppeer2holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2KeepAlive")
    {
        cbgppeer2keepalive = value;
        cbgppeer2keepalive.value_namespace = name_space;
        cbgppeer2keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2HoldTimeConfigured")
    {
        cbgppeer2holdtimeconfigured = value;
        cbgppeer2holdtimeconfigured.value_namespace = name_space;
        cbgppeer2holdtimeconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2KeepAliveConfigured")
    {
        cbgppeer2keepaliveconfigured = value;
        cbgppeer2keepaliveconfigured.value_namespace = name_space;
        cbgppeer2keepaliveconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2MinASOriginationInterval")
    {
        cbgppeer2minasoriginationinterval = value;
        cbgppeer2minasoriginationinterval.value_namespace = name_space;
        cbgppeer2minasoriginationinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2MinRouteAdvertisementInterval")
    {
        cbgppeer2minrouteadvertisementinterval = value;
        cbgppeer2minrouteadvertisementinterval.value_namespace = name_space;
        cbgppeer2minrouteadvertisementinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2InUpdateElapsedTime")
    {
        cbgppeer2inupdateelapsedtime = value;
        cbgppeer2inupdateelapsedtime.value_namespace = name_space;
        cbgppeer2inupdateelapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2LastErrorTxt")
    {
        cbgppeer2lasterrortxt = value;
        cbgppeer2lasterrortxt.value_namespace = name_space;
        cbgppeer2lasterrortxt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrevState")
    {
        cbgppeer2prevstate = value;
        cbgppeer2prevstate.value_namespace = name_space;
        cbgppeer2prevstate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2State")
    {
        cbgppeer2state.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AdminStatus")
    {
        cbgppeer2adminstatus.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2NegotiatedVersion")
    {
        cbgppeer2negotiatedversion.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalAddr")
    {
        cbgppeer2localaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalPort")
    {
        cbgppeer2localport.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalAs")
    {
        cbgppeer2localas.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LocalIdentifier")
    {
        cbgppeer2localidentifier.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemotePort")
    {
        cbgppeer2remoteport.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAs")
    {
        cbgppeer2remoteas.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteIdentifier")
    {
        cbgppeer2remoteidentifier.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2InUpdates")
    {
        cbgppeer2inupdates.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2OutUpdates")
    {
        cbgppeer2outupdates.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2InTotalMessages")
    {
        cbgppeer2intotalmessages.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2OutTotalMessages")
    {
        cbgppeer2outtotalmessages.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LastError")
    {
        cbgppeer2lasterror.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTransitions")
    {
        cbgppeer2fsmestablishedtransitions.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTime")
    {
        cbgppeer2fsmestablishedtime.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2ConnectRetryInterval")
    {
        cbgppeer2connectretryinterval.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2HoldTime")
    {
        cbgppeer2holdtime.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2KeepAlive")
    {
        cbgppeer2keepalive.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2HoldTimeConfigured")
    {
        cbgppeer2holdtimeconfigured.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2KeepAliveConfigured")
    {
        cbgppeer2keepaliveconfigured.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2MinASOriginationInterval")
    {
        cbgppeer2minasoriginationinterval.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2MinRouteAdvertisementInterval")
    {
        cbgppeer2minrouteadvertisementinterval.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2InUpdateElapsedTime")
    {
        cbgppeer2inupdateelapsedtime.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2LastErrorTxt")
    {
        cbgppeer2lasterrortxt.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrevState")
    {
        cbgppeer2prevstate.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2State" || name == "cbgpPeer2AdminStatus" || name == "cbgpPeer2NegotiatedVersion" || name == "cbgpPeer2LocalAddr" || name == "cbgpPeer2LocalPort" || name == "cbgpPeer2LocalAs" || name == "cbgpPeer2LocalIdentifier" || name == "cbgpPeer2RemotePort" || name == "cbgpPeer2RemoteAs" || name == "cbgpPeer2RemoteIdentifier" || name == "cbgpPeer2InUpdates" || name == "cbgpPeer2OutUpdates" || name == "cbgpPeer2InTotalMessages" || name == "cbgpPeer2OutTotalMessages" || name == "cbgpPeer2LastError" || name == "cbgpPeer2FsmEstablishedTransitions" || name == "cbgpPeer2FsmEstablishedTime" || name == "cbgpPeer2ConnectRetryInterval" || name == "cbgpPeer2HoldTime" || name == "cbgpPeer2KeepAlive" || name == "cbgpPeer2HoldTimeConfigured" || name == "cbgpPeer2KeepAliveConfigured" || name == "cbgpPeer2MinASOriginationInterval" || name == "cbgpPeer2MinRouteAdvertisementInterval" || name == "cbgpPeer2InUpdateElapsedTime" || name == "cbgpPeer2LastErrorTxt" || name == "cbgpPeer2PrevState")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsTable()
    :
    cbgppeer2capsentry(this, {"cbgppeer2type", "cbgppeer2remoteaddr", "cbgppeer2capcode", "cbgppeer2capindex"})
{

    yang_name = "cbgpPeer2CapsTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2CapsTable::~CbgpPeer2CapsTable()
{
}

bool CISCOBGP4MIB::CbgpPeer2CapsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgppeer2capsentry.len(); index++)
    {
        if(cbgppeer2capsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpPeer2CapsTable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2capsentry.len(); index++)
    {
        if(cbgppeer2capsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2CapsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2CapsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2CapsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2CapsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2CapsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2CapsEntry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry>();
        c->parent = this;
        cbgppeer2capsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2CapsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgppeer2capsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpPeer2CapsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpPeer2CapsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpPeer2CapsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2CapsEntry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapsEntry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2capcode{YType::enumeration, "cbgpPeer2CapCode"},
    cbgppeer2capindex{YType::uint32, "cbgpPeer2CapIndex"},
    cbgppeer2capvalue{YType::str, "cbgpPeer2CapValue"}
{

    yang_name = "cbgpPeer2CapsEntry"; yang_parent_name = "cbgpPeer2CapsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::~CbgpPeer2CapsEntry()
{
}

bool CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::has_data() const
{
    if (is_presence_container) return true;
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2capcode.is_set
	|| cbgppeer2capindex.is_set
	|| cbgppeer2capvalue.is_set;
}

bool CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2capcode.yfilter)
	|| ydk::is_set(cbgppeer2capindex.yfilter)
	|| ydk::is_set(cbgppeer2capvalue.yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2CapsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2CapsEntry";
    ADD_KEY_TOKEN(cbgppeer2type, "cbgpPeer2Type");
    ADD_KEY_TOKEN(cbgppeer2remoteaddr, "cbgpPeer2RemoteAddr");
    ADD_KEY_TOKEN(cbgppeer2capcode, "cbgpPeer2CapCode");
    ADD_KEY_TOKEN(cbgppeer2capindex, "cbgpPeer2CapIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2capcode.is_set || is_set(cbgppeer2capcode.yfilter)) leaf_name_data.push_back(cbgppeer2capcode.get_name_leafdata());
    if (cbgppeer2capindex.is_set || is_set(cbgppeer2capindex.yfilter)) leaf_name_data.push_back(cbgppeer2capindex.get_name_leafdata());
    if (cbgppeer2capvalue.is_set || is_set(cbgppeer2capvalue.yfilter)) leaf_name_data.push_back(cbgppeer2capvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2CapCode")
    {
        cbgppeer2capcode = value;
        cbgppeer2capcode.value_namespace = name_space;
        cbgppeer2capcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2CapIndex")
    {
        cbgppeer2capindex = value;
        cbgppeer2capindex.value_namespace = name_space;
        cbgppeer2capindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2CapValue")
    {
        cbgppeer2capvalue = value;
        cbgppeer2capvalue.value_namespace = name_space;
        cbgppeer2capvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2CapCode")
    {
        cbgppeer2capcode.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2CapIndex")
    {
        cbgppeer2capindex.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2CapValue")
    {
        cbgppeer2capvalue.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2CapCode" || name == "cbgpPeer2CapIndex" || name == "cbgpPeer2CapValue")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyTable()
    :
    cbgppeer2addrfamilyentry(this, {"cbgppeer2type", "cbgppeer2remoteaddr", "cbgppeer2addrfamilyafi", "cbgppeer2addrfamilysafi"})
{

    yang_name = "cbgpPeer2AddrFamilyTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::~CbgpPeer2AddrFamilyTable()
{
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgppeer2addrfamilyentry.len(); index++)
    {
        if(cbgppeer2addrfamilyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyentry.len(); index++)
    {
        if(cbgppeer2addrfamilyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2AddrFamilyEntry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry>();
        c->parent = this;
        cbgppeer2addrfamilyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgppeer2addrfamilyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2AddrFamilyEntry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::CbgpPeer2AddrFamilyEntry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2addrfamilyafi{YType::enumeration, "cbgpPeer2AddrFamilyAfi"},
    cbgppeer2addrfamilysafi{YType::enumeration, "cbgpPeer2AddrFamilySafi"},
    cbgppeer2addrfamilyname{YType::str, "cbgpPeer2AddrFamilyName"}
{

    yang_name = "cbgpPeer2AddrFamilyEntry"; yang_parent_name = "cbgpPeer2AddrFamilyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::~CbgpPeer2AddrFamilyEntry()
{
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::has_data() const
{
    if (is_presence_container) return true;
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2addrfamilyafi.is_set
	|| cbgppeer2addrfamilysafi.is_set
	|| cbgppeer2addrfamilyname.is_set;
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilyname.yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2AddrFamilyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyEntry";
    ADD_KEY_TOKEN(cbgppeer2type, "cbgpPeer2Type");
    ADD_KEY_TOKEN(cbgppeer2remoteaddr, "cbgpPeer2RemoteAddr");
    ADD_KEY_TOKEN(cbgppeer2addrfamilyafi, "cbgpPeer2AddrFamilyAfi");
    ADD_KEY_TOKEN(cbgppeer2addrfamilysafi, "cbgpPeer2AddrFamilySafi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2addrfamilyafi.is_set || is_set(cbgppeer2addrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilyafi.get_name_leafdata());
    if (cbgppeer2addrfamilysafi.is_set || is_set(cbgppeer2addrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilysafi.get_name_leafdata());
    if (cbgppeer2addrfamilyname.is_set || is_set(cbgppeer2addrfamilyname.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilyname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi = value;
        cbgppeer2addrfamilyafi.value_namespace = name_space;
        cbgppeer2addrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi = value;
        cbgppeer2addrfamilysafi.value_namespace = name_space;
        cbgppeer2addrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilyName")
    {
        cbgppeer2addrfamilyname = value;
        cbgppeer2addrfamilyname.value_namespace = name_space;
        cbgppeer2addrfamilyname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilyName")
    {
        cbgppeer2addrfamilyname.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyTable::CbgpPeer2AddrFamilyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2AddrFamilyAfi" || name == "cbgpPeer2AddrFamilySafi" || name == "cbgpPeer2AddrFamilyName")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixTable()
    :
    cbgppeer2addrfamilyprefixentry(this, {"cbgppeer2type", "cbgppeer2remoteaddr", "cbgppeer2addrfamilyafi", "cbgppeer2addrfamilysafi"})
{

    yang_name = "cbgpPeer2AddrFamilyPrefixTable"; yang_parent_name = "CISCO-BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::~CbgpPeer2AddrFamilyPrefixTable()
{
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbgppeer2addrfamilyprefixentry.len(); index++)
    {
        if(cbgppeer2addrfamilyprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyprefixentry.len(); index++)
    {
        if(cbgppeer2addrfamilyprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2AddrFamilyPrefixEntry")
    {
        auto c = std::make_shared<CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry>();
        c->parent = this;
        cbgppeer2addrfamilyprefixentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cbgppeer2addrfamilyprefixentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2AddrFamilyPrefixEntry")
        return true;
    return false;
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::CbgpPeer2AddrFamilyPrefixEntry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2addrfamilyafi{YType::enumeration, "cbgpPeer2AddrFamilyAfi"},
    cbgppeer2addrfamilysafi{YType::enumeration, "cbgpPeer2AddrFamilySafi"},
    cbgppeer2acceptedprefixes{YType::uint32, "cbgpPeer2AcceptedPrefixes"},
    cbgppeer2deniedprefixes{YType::uint32, "cbgpPeer2DeniedPrefixes"},
    cbgppeer2prefixadminlimit{YType::uint32, "cbgpPeer2PrefixAdminLimit"},
    cbgppeer2prefixthreshold{YType::uint32, "cbgpPeer2PrefixThreshold"},
    cbgppeer2prefixclearthreshold{YType::uint32, "cbgpPeer2PrefixClearThreshold"},
    cbgppeer2advertisedprefixes{YType::uint32, "cbgpPeer2AdvertisedPrefixes"},
    cbgppeer2suppressedprefixes{YType::uint32, "cbgpPeer2SuppressedPrefixes"},
    cbgppeer2withdrawnprefixes{YType::uint32, "cbgpPeer2WithdrawnPrefixes"}
{

    yang_name = "cbgpPeer2AddrFamilyPrefixEntry"; yang_parent_name = "cbgpPeer2AddrFamilyPrefixTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::~CbgpPeer2AddrFamilyPrefixEntry()
{
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::has_data() const
{
    if (is_presence_container) return true;
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2addrfamilyafi.is_set
	|| cbgppeer2addrfamilysafi.is_set
	|| cbgppeer2acceptedprefixes.is_set
	|| cbgppeer2deniedprefixes.is_set
	|| cbgppeer2prefixadminlimit.is_set
	|| cbgppeer2prefixthreshold.is_set
	|| cbgppeer2prefixclearthreshold.is_set
	|| cbgppeer2advertisedprefixes.is_set
	|| cbgppeer2suppressedprefixes.is_set
	|| cbgppeer2withdrawnprefixes.is_set;
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbgppeer2type.yfilter)
	|| ydk::is_set(cbgppeer2remoteaddr.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilyafi.yfilter)
	|| ydk::is_set(cbgppeer2addrfamilysafi.yfilter)
	|| ydk::is_set(cbgppeer2acceptedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2deniedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2prefixadminlimit.yfilter)
	|| ydk::is_set(cbgppeer2prefixthreshold.yfilter)
	|| ydk::is_set(cbgppeer2prefixclearthreshold.yfilter)
	|| ydk::is_set(cbgppeer2advertisedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2suppressedprefixes.yfilter)
	|| ydk::is_set(cbgppeer2withdrawnprefixes.yfilter);
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2AddrFamilyPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyPrefixEntry";
    ADD_KEY_TOKEN(cbgppeer2type, "cbgpPeer2Type");
    ADD_KEY_TOKEN(cbgppeer2remoteaddr, "cbgpPeer2RemoteAddr");
    ADD_KEY_TOKEN(cbgppeer2addrfamilyafi, "cbgpPeer2AddrFamilyAfi");
    ADD_KEY_TOKEN(cbgppeer2addrfamilysafi, "cbgpPeer2AddrFamilySafi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.yfilter)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.yfilter)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2addrfamilyafi.is_set || is_set(cbgppeer2addrfamilyafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilyafi.get_name_leafdata());
    if (cbgppeer2addrfamilysafi.is_set || is_set(cbgppeer2addrfamilysafi.yfilter)) leaf_name_data.push_back(cbgppeer2addrfamilysafi.get_name_leafdata());
    if (cbgppeer2acceptedprefixes.is_set || is_set(cbgppeer2acceptedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2acceptedprefixes.get_name_leafdata());
    if (cbgppeer2deniedprefixes.is_set || is_set(cbgppeer2deniedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2deniedprefixes.get_name_leafdata());
    if (cbgppeer2prefixadminlimit.is_set || is_set(cbgppeer2prefixadminlimit.yfilter)) leaf_name_data.push_back(cbgppeer2prefixadminlimit.get_name_leafdata());
    if (cbgppeer2prefixthreshold.is_set || is_set(cbgppeer2prefixthreshold.yfilter)) leaf_name_data.push_back(cbgppeer2prefixthreshold.get_name_leafdata());
    if (cbgppeer2prefixclearthreshold.is_set || is_set(cbgppeer2prefixclearthreshold.yfilter)) leaf_name_data.push_back(cbgppeer2prefixclearthreshold.get_name_leafdata());
    if (cbgppeer2advertisedprefixes.is_set || is_set(cbgppeer2advertisedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2advertisedprefixes.get_name_leafdata());
    if (cbgppeer2suppressedprefixes.is_set || is_set(cbgppeer2suppressedprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2suppressedprefixes.get_name_leafdata());
    if (cbgppeer2withdrawnprefixes.is_set || is_set(cbgppeer2withdrawnprefixes.yfilter)) leaf_name_data.push_back(cbgppeer2withdrawnprefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
        cbgppeer2type.value_namespace = name_space;
        cbgppeer2type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
        cbgppeer2remoteaddr.value_namespace = name_space;
        cbgppeer2remoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi = value;
        cbgppeer2addrfamilyafi.value_namespace = name_space;
        cbgppeer2addrfamilyafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi = value;
        cbgppeer2addrfamilysafi.value_namespace = name_space;
        cbgppeer2addrfamilysafi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AcceptedPrefixes")
    {
        cbgppeer2acceptedprefixes = value;
        cbgppeer2acceptedprefixes.value_namespace = name_space;
        cbgppeer2acceptedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2DeniedPrefixes")
    {
        cbgppeer2deniedprefixes = value;
        cbgppeer2deniedprefixes.value_namespace = name_space;
        cbgppeer2deniedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrefixAdminLimit")
    {
        cbgppeer2prefixadminlimit = value;
        cbgppeer2prefixadminlimit.value_namespace = name_space;
        cbgppeer2prefixadminlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrefixThreshold")
    {
        cbgppeer2prefixthreshold = value;
        cbgppeer2prefixthreshold.value_namespace = name_space;
        cbgppeer2prefixthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2PrefixClearThreshold")
    {
        cbgppeer2prefixclearthreshold = value;
        cbgppeer2prefixclearthreshold.value_namespace = name_space;
        cbgppeer2prefixclearthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2AdvertisedPrefixes")
    {
        cbgppeer2advertisedprefixes = value;
        cbgppeer2advertisedprefixes.value_namespace = name_space;
        cbgppeer2advertisedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2SuppressedPrefixes")
    {
        cbgppeer2suppressedprefixes = value;
        cbgppeer2suppressedprefixes.value_namespace = name_space;
        cbgppeer2suppressedprefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbgpPeer2WithdrawnPrefixes")
    {
        cbgppeer2withdrawnprefixes = value;
        cbgppeer2withdrawnprefixes.value_namespace = name_space;
        cbgppeer2withdrawnprefixes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AcceptedPrefixes")
    {
        cbgppeer2acceptedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2DeniedPrefixes")
    {
        cbgppeer2deniedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrefixAdminLimit")
    {
        cbgppeer2prefixadminlimit.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrefixThreshold")
    {
        cbgppeer2prefixthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2PrefixClearThreshold")
    {
        cbgppeer2prefixclearthreshold.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2AdvertisedPrefixes")
    {
        cbgppeer2advertisedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2SuppressedPrefixes")
    {
        cbgppeer2suppressedprefixes.yfilter = yfilter;
    }
    if(value_path == "cbgpPeer2WithdrawnPrefixes")
    {
        cbgppeer2withdrawnprefixes.yfilter = yfilter;
    }
}

bool CISCOBGP4MIB::CbgpPeer2AddrFamilyPrefixTable::CbgpPeer2AddrFamilyPrefixEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbgpPeer2Type" || name == "cbgpPeer2RemoteAddr" || name == "cbgpPeer2AddrFamilyAfi" || name == "cbgpPeer2AddrFamilySafi" || name == "cbgpPeer2AcceptedPrefixes" || name == "cbgpPeer2DeniedPrefixes" || name == "cbgpPeer2PrefixAdminLimit" || name == "cbgpPeer2PrefixThreshold" || name == "cbgpPeer2PrefixClearThreshold" || name == "cbgpPeer2AdvertisedPrefixes" || name == "cbgpPeer2SuppressedPrefixes" || name == "cbgpPeer2WithdrawnPrefixes")
        return true;
    return false;
}

const Enum::YLeaf CbgpSafi::unicast {1, "unicast"};
const Enum::YLeaf CbgpSafi::multicast {2, "multicast"};
const Enum::YLeaf CbgpSafi::unicastAndMulticast {3, "unicastAndMulticast"};
const Enum::YLeaf CbgpSafi::vpn {128, "vpn"};

const Enum::YLeaf CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteOrigin::igp {1, "igp"};
const Enum::YLeaf CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteOrigin::egp {2, "egp"};
const Enum::YLeaf CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteOrigin::incomplete {3, "incomplete"};

const Enum::YLeaf CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteAtomicAggregate::lessSpecificRouteNotSelected {1, "lessSpecificRouteNotSelected"};
const Enum::YLeaf CISCOBGP4MIB::CbgpRouteTable::CbgpRouteEntry::CbgpRouteAtomicAggregate::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};

const Enum::YLeaf CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::CbgpPeerCapCode::multiProtocol {1, "multiProtocol"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::CbgpPeerCapCode::routeRefresh {2, "routeRefresh"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::CbgpPeerCapCode::gracefulRestart {64, "gracefulRestart"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeerCapsTable::CbgpPeerCapsEntry::CbgpPeerCapCode::routeRefreshOld {128, "routeRefreshOld"};

const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2State::idle {1, "idle"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2State::connect {2, "connect"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2State::active {3, "active"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2State::opensent {4, "opensent"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2State::openconfirm {5, "openconfirm"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2State::established {6, "established"};

const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2AdminStatus::stop {1, "stop"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2AdminStatus::start {2, "start"};

const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState::none {0, "none"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState::idle {1, "idle"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState::connect {2, "connect"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState::active {3, "active"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState::opensent {4, "opensent"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState::openconfirm {5, "openconfirm"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2Table::CbgpPeer2Entry::CbgpPeer2PrevState::established {6, "established"};

const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapCode::multiProtocol {1, "multiProtocol"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapCode::routeRefresh {2, "routeRefresh"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapCode::gracefulRestart {64, "gracefulRestart"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapCode::fourByteAs {65, "fourByteAs"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapCode::addPath {69, "addPath"};
const Enum::YLeaf CISCOBGP4MIB::CbgpPeer2CapsTable::CbgpPeer2CapsEntry::CbgpPeer2CapCode::routeRefreshOld {128, "routeRefreshOld"};


}
}

