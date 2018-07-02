
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_EIGRP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_EIGRP_MIB {

CISCOEIGRPMIB::CISCOEIGRPMIB()
    :
    ceigrpvpntable(std::make_shared<CISCOEIGRPMIB::CEigrpVpnTable>())
    , ceigrptraffstatstable(std::make_shared<CISCOEIGRPMIB::CEigrpTraffStatsTable>())
    , ceigrptopotable(std::make_shared<CISCOEIGRPMIB::CEigrpTopoTable>())
    , ceigrppeertable(std::make_shared<CISCOEIGRPMIB::CEigrpPeerTable>())
    , ceigrpinterfacetable(std::make_shared<CISCOEIGRPMIB::CEigrpInterfaceTable>())
{
    ceigrpvpntable->parent = this;
    ceigrptraffstatstable->parent = this;
    ceigrptopotable->parent = this;
    ceigrppeertable->parent = this;
    ceigrpinterfacetable->parent = this;

    yang_name = "CISCO-EIGRP-MIB"; yang_parent_name = "CISCO-EIGRP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOEIGRPMIB::~CISCOEIGRPMIB()
{
}

bool CISCOEIGRPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ceigrpvpntable !=  nullptr && ceigrpvpntable->has_data())
	|| (ceigrptraffstatstable !=  nullptr && ceigrptraffstatstable->has_data())
	|| (ceigrptopotable !=  nullptr && ceigrptopotable->has_data())
	|| (ceigrppeertable !=  nullptr && ceigrppeertable->has_data())
	|| (ceigrpinterfacetable !=  nullptr && ceigrpinterfacetable->has_data());
}

bool CISCOEIGRPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ceigrpvpntable !=  nullptr && ceigrpvpntable->has_operation())
	|| (ceigrptraffstatstable !=  nullptr && ceigrptraffstatstable->has_operation())
	|| (ceigrptopotable !=  nullptr && ceigrptopotable->has_operation())
	|| (ceigrppeertable !=  nullptr && ceigrppeertable->has_operation())
	|| (ceigrpinterfacetable !=  nullptr && ceigrpinterfacetable->has_operation());
}

std::string CISCOEIGRPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpVpnTable")
    {
        if(ceigrpvpntable == nullptr)
        {
            ceigrpvpntable = std::make_shared<CISCOEIGRPMIB::CEigrpVpnTable>();
        }
        return ceigrpvpntable;
    }

    if(child_yang_name == "cEigrpTraffStatsTable")
    {
        if(ceigrptraffstatstable == nullptr)
        {
            ceigrptraffstatstable = std::make_shared<CISCOEIGRPMIB::CEigrpTraffStatsTable>();
        }
        return ceigrptraffstatstable;
    }

    if(child_yang_name == "cEigrpTopoTable")
    {
        if(ceigrptopotable == nullptr)
        {
            ceigrptopotable = std::make_shared<CISCOEIGRPMIB::CEigrpTopoTable>();
        }
        return ceigrptopotable;
    }

    if(child_yang_name == "cEigrpPeerTable")
    {
        if(ceigrppeertable == nullptr)
        {
            ceigrppeertable = std::make_shared<CISCOEIGRPMIB::CEigrpPeerTable>();
        }
        return ceigrppeertable;
    }

    if(child_yang_name == "cEigrpInterfaceTable")
    {
        if(ceigrpinterfacetable == nullptr)
        {
            ceigrpinterfacetable = std::make_shared<CISCOEIGRPMIB::CEigrpInterfaceTable>();
        }
        return ceigrpinterfacetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ceigrpvpntable != nullptr)
    {
        children["cEigrpVpnTable"] = ceigrpvpntable;
    }

    if(ceigrptraffstatstable != nullptr)
    {
        children["cEigrpTraffStatsTable"] = ceigrptraffstatstable;
    }

    if(ceigrptopotable != nullptr)
    {
        children["cEigrpTopoTable"] = ceigrptopotable;
    }

    if(ceigrppeertable != nullptr)
    {
        children["cEigrpPeerTable"] = ceigrppeertable;
    }

    if(ceigrpinterfacetable != nullptr)
    {
        children["cEigrpInterfaceTable"] = ceigrpinterfacetable;
    }

    return children;
}

void CISCOEIGRPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEIGRPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOEIGRPMIB::clone_ptr() const
{
    return std::make_shared<CISCOEIGRPMIB>();
}

std::string CISCOEIGRPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOEIGRPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOEIGRPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOEIGRPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOEIGRPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnTable" || name == "cEigrpTraffStatsTable" || name == "cEigrpTopoTable" || name == "cEigrpPeerTable" || name == "cEigrpInterfaceTable")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnTable()
    :
    ceigrpvpnentry(this, {"ceigrpvpnid"})
{

    yang_name = "cEigrpVpnTable"; yang_parent_name = "CISCO-EIGRP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpVpnTable::~CEigrpVpnTable()
{
}

bool CISCOEIGRPMIB::CEigrpVpnTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceigrpvpnentry.len(); index++)
    {
        if(ceigrpvpnentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEIGRPMIB::CEigrpVpnTable::has_operation() const
{
    for (std::size_t index=0; index<ceigrpvpnentry.len(); index++)
    {
        if(ceigrpvpnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEIGRPMIB::CEigrpVpnTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpVpnTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpVpnTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpVpnTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpVpnTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpVpnEntry")
    {
        auto c = std::make_shared<CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry>();
        c->parent = this;
        ceigrpvpnentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpVpnTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceigrpvpnentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEIGRPMIB::CEigrpVpnTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEIGRPMIB::CEigrpVpnTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEIGRPMIB::CEigrpVpnTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnEntry")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::CEigrpVpnEntry()
    :
    ceigrpvpnid{YType::uint32, "cEigrpVpnId"},
    ceigrpvpnname{YType::str, "cEigrpVpnName"}
{

    yang_name = "cEigrpVpnEntry"; yang_parent_name = "cEigrpVpnTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::~CEigrpVpnEntry()
{
}

bool CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceigrpvpnid.is_set
	|| ceigrpvpnname.is_set;
}

bool CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpvpnname.yfilter);
}

std::string CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpVpnTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpVpnEntry";
    ADD_KEY_TOKEN(ceigrpvpnid, "cEigrpVpnId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpvpnname.is_set || is_set(ceigrpvpnname.yfilter)) leaf_name_data.push_back(ceigrpvpnname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
        ceigrpvpnid.value_namespace = name_space;
        ceigrpvpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpVpnName")
    {
        ceigrpvpnname = value;
        ceigrpvpnname.value_namespace = name_space;
        ceigrpvpnname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid.yfilter = yfilter;
    }
    if(value_path == "cEigrpVpnName")
    {
        ceigrpvpnname.yfilter = yfilter;
    }
}

bool CISCOEIGRPMIB::CEigrpVpnTable::CEigrpVpnEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpVpnName")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsTable()
    :
    ceigrptraffstatsentry(this, {"ceigrpvpnid", "ceigrpasnumber"})
{

    yang_name = "cEigrpTraffStatsTable"; yang_parent_name = "CISCO-EIGRP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpTraffStatsTable::~CEigrpTraffStatsTable()
{
}

bool CISCOEIGRPMIB::CEigrpTraffStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceigrptraffstatsentry.len(); index++)
    {
        if(ceigrptraffstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEIGRPMIB::CEigrpTraffStatsTable::has_operation() const
{
    for (std::size_t index=0; index<ceigrptraffstatsentry.len(); index++)
    {
        if(ceigrptraffstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEIGRPMIB::CEigrpTraffStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpTraffStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTraffStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpTraffStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpTraffStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpTraffStatsEntry")
    {
        auto c = std::make_shared<CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry>();
        c->parent = this;
        ceigrptraffstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpTraffStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceigrptraffstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEIGRPMIB::CEigrpTraffStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEIGRPMIB::CEigrpTraffStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEIGRPMIB::CEigrpTraffStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpTraffStatsEntry")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::CEigrpTraffStatsEntry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::uint32, "cEigrpAsNumber"},
    ceigrpnbrcount{YType::uint32, "cEigrpNbrCount"},
    ceigrphellossent{YType::uint32, "cEigrpHellosSent"},
    ceigrphellosrcvd{YType::uint32, "cEigrpHellosRcvd"},
    ceigrpupdatessent{YType::uint32, "cEigrpUpdatesSent"},
    ceigrpupdatesrcvd{YType::uint32, "cEigrpUpdatesRcvd"},
    ceigrpqueriessent{YType::uint32, "cEigrpQueriesSent"},
    ceigrpqueriesrcvd{YType::uint32, "cEigrpQueriesRcvd"},
    ceigrprepliessent{YType::uint32, "cEigrpRepliesSent"},
    ceigrprepliesrcvd{YType::uint32, "cEigrpRepliesRcvd"},
    ceigrpackssent{YType::uint32, "cEigrpAcksSent"},
    ceigrpacksrcvd{YType::uint32, "cEigrpAcksRcvd"},
    ceigrpinputqhighmark{YType::uint32, "cEigrpInputQHighMark"},
    ceigrpinputqdrops{YType::uint32, "cEigrpInputQDrops"},
    ceigrpsiaqueriessent{YType::uint32, "cEigrpSiaQueriesSent"},
    ceigrpsiaqueriesrcvd{YType::uint32, "cEigrpSiaQueriesRcvd"},
    ceigrpasrouteridtype{YType::enumeration, "cEigrpAsRouterIdType"},
    ceigrpasrouterid{YType::str, "cEigrpAsRouterId"},
    ceigrptoporoutes{YType::uint32, "cEigrpTopoRoutes"},
    ceigrpheadserial{YType::uint64, "cEigrpHeadSerial"},
    ceigrpnextserial{YType::uint64, "cEigrpNextSerial"},
    ceigrpxmitpendreplies{YType::uint32, "cEigrpXmitPendReplies"},
    ceigrpxmitdummies{YType::uint32, "cEigrpXmitDummies"}
{

    yang_name = "cEigrpTraffStatsEntry"; yang_parent_name = "cEigrpTraffStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::~CEigrpTraffStatsEntry()
{
}

bool CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ceigrpnbrcount.is_set
	|| ceigrphellossent.is_set
	|| ceigrphellosrcvd.is_set
	|| ceigrpupdatessent.is_set
	|| ceigrpupdatesrcvd.is_set
	|| ceigrpqueriessent.is_set
	|| ceigrpqueriesrcvd.is_set
	|| ceigrprepliessent.is_set
	|| ceigrprepliesrcvd.is_set
	|| ceigrpackssent.is_set
	|| ceigrpacksrcvd.is_set
	|| ceigrpinputqhighmark.is_set
	|| ceigrpinputqdrops.is_set
	|| ceigrpsiaqueriessent.is_set
	|| ceigrpsiaqueriesrcvd.is_set
	|| ceigrpasrouteridtype.is_set
	|| ceigrpasrouterid.is_set
	|| ceigrptoporoutes.is_set
	|| ceigrpheadserial.is_set
	|| ceigrpnextserial.is_set
	|| ceigrpxmitpendreplies.is_set
	|| ceigrpxmitdummies.is_set;
}

bool CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ceigrpnbrcount.yfilter)
	|| ydk::is_set(ceigrphellossent.yfilter)
	|| ydk::is_set(ceigrphellosrcvd.yfilter)
	|| ydk::is_set(ceigrpupdatessent.yfilter)
	|| ydk::is_set(ceigrpupdatesrcvd.yfilter)
	|| ydk::is_set(ceigrpqueriessent.yfilter)
	|| ydk::is_set(ceigrpqueriesrcvd.yfilter)
	|| ydk::is_set(ceigrprepliessent.yfilter)
	|| ydk::is_set(ceigrprepliesrcvd.yfilter)
	|| ydk::is_set(ceigrpackssent.yfilter)
	|| ydk::is_set(ceigrpacksrcvd.yfilter)
	|| ydk::is_set(ceigrpinputqhighmark.yfilter)
	|| ydk::is_set(ceigrpinputqdrops.yfilter)
	|| ydk::is_set(ceigrpsiaqueriessent.yfilter)
	|| ydk::is_set(ceigrpsiaqueriesrcvd.yfilter)
	|| ydk::is_set(ceigrpasrouteridtype.yfilter)
	|| ydk::is_set(ceigrpasrouterid.yfilter)
	|| ydk::is_set(ceigrptoporoutes.yfilter)
	|| ydk::is_set(ceigrpheadserial.yfilter)
	|| ydk::is_set(ceigrpnextserial.yfilter)
	|| ydk::is_set(ceigrpxmitpendreplies.yfilter)
	|| ydk::is_set(ceigrpxmitdummies.yfilter);
}

std::string CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpTraffStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTraffStatsEntry";
    ADD_KEY_TOKEN(ceigrpvpnid, "cEigrpVpnId");
    ADD_KEY_TOKEN(ceigrpasnumber, "cEigrpAsNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrpnbrcount.is_set || is_set(ceigrpnbrcount.yfilter)) leaf_name_data.push_back(ceigrpnbrcount.get_name_leafdata());
    if (ceigrphellossent.is_set || is_set(ceigrphellossent.yfilter)) leaf_name_data.push_back(ceigrphellossent.get_name_leafdata());
    if (ceigrphellosrcvd.is_set || is_set(ceigrphellosrcvd.yfilter)) leaf_name_data.push_back(ceigrphellosrcvd.get_name_leafdata());
    if (ceigrpupdatessent.is_set || is_set(ceigrpupdatessent.yfilter)) leaf_name_data.push_back(ceigrpupdatessent.get_name_leafdata());
    if (ceigrpupdatesrcvd.is_set || is_set(ceigrpupdatesrcvd.yfilter)) leaf_name_data.push_back(ceigrpupdatesrcvd.get_name_leafdata());
    if (ceigrpqueriessent.is_set || is_set(ceigrpqueriessent.yfilter)) leaf_name_data.push_back(ceigrpqueriessent.get_name_leafdata());
    if (ceigrpqueriesrcvd.is_set || is_set(ceigrpqueriesrcvd.yfilter)) leaf_name_data.push_back(ceigrpqueriesrcvd.get_name_leafdata());
    if (ceigrprepliessent.is_set || is_set(ceigrprepliessent.yfilter)) leaf_name_data.push_back(ceigrprepliessent.get_name_leafdata());
    if (ceigrprepliesrcvd.is_set || is_set(ceigrprepliesrcvd.yfilter)) leaf_name_data.push_back(ceigrprepliesrcvd.get_name_leafdata());
    if (ceigrpackssent.is_set || is_set(ceigrpackssent.yfilter)) leaf_name_data.push_back(ceigrpackssent.get_name_leafdata());
    if (ceigrpacksrcvd.is_set || is_set(ceigrpacksrcvd.yfilter)) leaf_name_data.push_back(ceigrpacksrcvd.get_name_leafdata());
    if (ceigrpinputqhighmark.is_set || is_set(ceigrpinputqhighmark.yfilter)) leaf_name_data.push_back(ceigrpinputqhighmark.get_name_leafdata());
    if (ceigrpinputqdrops.is_set || is_set(ceigrpinputqdrops.yfilter)) leaf_name_data.push_back(ceigrpinputqdrops.get_name_leafdata());
    if (ceigrpsiaqueriessent.is_set || is_set(ceigrpsiaqueriessent.yfilter)) leaf_name_data.push_back(ceigrpsiaqueriessent.get_name_leafdata());
    if (ceigrpsiaqueriesrcvd.is_set || is_set(ceigrpsiaqueriesrcvd.yfilter)) leaf_name_data.push_back(ceigrpsiaqueriesrcvd.get_name_leafdata());
    if (ceigrpasrouteridtype.is_set || is_set(ceigrpasrouteridtype.yfilter)) leaf_name_data.push_back(ceigrpasrouteridtype.get_name_leafdata());
    if (ceigrpasrouterid.is_set || is_set(ceigrpasrouterid.yfilter)) leaf_name_data.push_back(ceigrpasrouterid.get_name_leafdata());
    if (ceigrptoporoutes.is_set || is_set(ceigrptoporoutes.yfilter)) leaf_name_data.push_back(ceigrptoporoutes.get_name_leafdata());
    if (ceigrpheadserial.is_set || is_set(ceigrpheadserial.yfilter)) leaf_name_data.push_back(ceigrpheadserial.get_name_leafdata());
    if (ceigrpnextserial.is_set || is_set(ceigrpnextserial.yfilter)) leaf_name_data.push_back(ceigrpnextserial.get_name_leafdata());
    if (ceigrpxmitpendreplies.is_set || is_set(ceigrpxmitpendreplies.yfilter)) leaf_name_data.push_back(ceigrpxmitpendreplies.get_name_leafdata());
    if (ceigrpxmitdummies.is_set || is_set(ceigrpxmitdummies.yfilter)) leaf_name_data.push_back(ceigrpxmitdummies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
        ceigrpvpnid.value_namespace = name_space;
        ceigrpvpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
        ceigrpasnumber.value_namespace = name_space;
        ceigrpasnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNbrCount")
    {
        ceigrpnbrcount = value;
        ceigrpnbrcount.value_namespace = name_space;
        ceigrpnbrcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHellosSent")
    {
        ceigrphellossent = value;
        ceigrphellossent.value_namespace = name_space;
        ceigrphellossent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHellosRcvd")
    {
        ceigrphellosrcvd = value;
        ceigrphellosrcvd.value_namespace = name_space;
        ceigrphellosrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUpdatesSent")
    {
        ceigrpupdatessent = value;
        ceigrpupdatessent.value_namespace = name_space;
        ceigrpupdatessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUpdatesRcvd")
    {
        ceigrpupdatesrcvd = value;
        ceigrpupdatesrcvd.value_namespace = name_space;
        ceigrpupdatesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpQueriesSent")
    {
        ceigrpqueriessent = value;
        ceigrpqueriessent.value_namespace = name_space;
        ceigrpqueriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpQueriesRcvd")
    {
        ceigrpqueriesrcvd = value;
        ceigrpqueriesrcvd.value_namespace = name_space;
        ceigrpqueriesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRepliesSent")
    {
        ceigrprepliessent = value;
        ceigrprepliessent.value_namespace = name_space;
        ceigrprepliessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRepliesRcvd")
    {
        ceigrprepliesrcvd = value;
        ceigrprepliesrcvd.value_namespace = name_space;
        ceigrprepliesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAcksSent")
    {
        ceigrpackssent = value;
        ceigrpackssent.value_namespace = name_space;
        ceigrpackssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAcksRcvd")
    {
        ceigrpacksrcvd = value;
        ceigrpacksrcvd.value_namespace = name_space;
        ceigrpacksrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpInputQHighMark")
    {
        ceigrpinputqhighmark = value;
        ceigrpinputqhighmark.value_namespace = name_space;
        ceigrpinputqhighmark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpInputQDrops")
    {
        ceigrpinputqdrops = value;
        ceigrpinputqdrops.value_namespace = name_space;
        ceigrpinputqdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpSiaQueriesSent")
    {
        ceigrpsiaqueriessent = value;
        ceigrpsiaqueriessent.value_namespace = name_space;
        ceigrpsiaqueriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpSiaQueriesRcvd")
    {
        ceigrpsiaqueriesrcvd = value;
        ceigrpsiaqueriesrcvd.value_namespace = name_space;
        ceigrpsiaqueriesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsRouterIdType")
    {
        ceigrpasrouteridtype = value;
        ceigrpasrouteridtype.value_namespace = name_space;
        ceigrpasrouteridtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsRouterId")
    {
        ceigrpasrouterid = value;
        ceigrpasrouterid.value_namespace = name_space;
        ceigrpasrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpTopoRoutes")
    {
        ceigrptoporoutes = value;
        ceigrptoporoutes.value_namespace = name_space;
        ceigrptoporoutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHeadSerial")
    {
        ceigrpheadserial = value;
        ceigrpheadserial.value_namespace = name_space;
        ceigrpheadserial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextSerial")
    {
        ceigrpnextserial = value;
        ceigrpnextserial.value_namespace = name_space;
        ceigrpnextserial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitPendReplies")
    {
        ceigrpxmitpendreplies = value;
        ceigrpxmitpendreplies.value_namespace = name_space;
        ceigrpxmitpendreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitDummies")
    {
        ceigrpxmitdummies = value;
        ceigrpxmitdummies.value_namespace = name_space;
        ceigrpxmitdummies.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber.yfilter = yfilter;
    }
    if(value_path == "cEigrpNbrCount")
    {
        ceigrpnbrcount.yfilter = yfilter;
    }
    if(value_path == "cEigrpHellosSent")
    {
        ceigrphellossent.yfilter = yfilter;
    }
    if(value_path == "cEigrpHellosRcvd")
    {
        ceigrphellosrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpUpdatesSent")
    {
        ceigrpupdatessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpUpdatesRcvd")
    {
        ceigrpupdatesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpQueriesSent")
    {
        ceigrpqueriessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpQueriesRcvd")
    {
        ceigrpqueriesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpRepliesSent")
    {
        ceigrprepliessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpRepliesRcvd")
    {
        ceigrprepliesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpAcksSent")
    {
        ceigrpackssent.yfilter = yfilter;
    }
    if(value_path == "cEigrpAcksRcvd")
    {
        ceigrpacksrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpInputQHighMark")
    {
        ceigrpinputqhighmark.yfilter = yfilter;
    }
    if(value_path == "cEigrpInputQDrops")
    {
        ceigrpinputqdrops.yfilter = yfilter;
    }
    if(value_path == "cEigrpSiaQueriesSent")
    {
        ceigrpsiaqueriessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpSiaQueriesRcvd")
    {
        ceigrpsiaqueriesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsRouterIdType")
    {
        ceigrpasrouteridtype.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsRouterId")
    {
        ceigrpasrouterid.yfilter = yfilter;
    }
    if(value_path == "cEigrpTopoRoutes")
    {
        ceigrptoporoutes.yfilter = yfilter;
    }
    if(value_path == "cEigrpHeadSerial")
    {
        ceigrpheadserial.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextSerial")
    {
        ceigrpnextserial.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitPendReplies")
    {
        ceigrpxmitpendreplies.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitDummies")
    {
        ceigrpxmitdummies.yfilter = yfilter;
    }
}

bool CISCOEIGRPMIB::CEigrpTraffStatsTable::CEigrpTraffStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "cEigrpNbrCount" || name == "cEigrpHellosSent" || name == "cEigrpHellosRcvd" || name == "cEigrpUpdatesSent" || name == "cEigrpUpdatesRcvd" || name == "cEigrpQueriesSent" || name == "cEigrpQueriesRcvd" || name == "cEigrpRepliesSent" || name == "cEigrpRepliesRcvd" || name == "cEigrpAcksSent" || name == "cEigrpAcksRcvd" || name == "cEigrpInputQHighMark" || name == "cEigrpInputQDrops" || name == "cEigrpSiaQueriesSent" || name == "cEigrpSiaQueriesRcvd" || name == "cEigrpAsRouterIdType" || name == "cEigrpAsRouterId" || name == "cEigrpTopoRoutes" || name == "cEigrpHeadSerial" || name == "cEigrpNextSerial" || name == "cEigrpXmitPendReplies" || name == "cEigrpXmitDummies")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoTable()
    :
    ceigrptopoentry(this, {"ceigrpvpnid", "ceigrpasnumber", "ceigrpdestnettype", "ceigrpdestnet", "ceigrpdestnetprefixlen"})
{

    yang_name = "cEigrpTopoTable"; yang_parent_name = "CISCO-EIGRP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpTopoTable::~CEigrpTopoTable()
{
}

bool CISCOEIGRPMIB::CEigrpTopoTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceigrptopoentry.len(); index++)
    {
        if(ceigrptopoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEIGRPMIB::CEigrpTopoTable::has_operation() const
{
    for (std::size_t index=0; index<ceigrptopoentry.len(); index++)
    {
        if(ceigrptopoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEIGRPMIB::CEigrpTopoTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpTopoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTopoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpTopoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpTopoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpTopoEntry")
    {
        auto c = std::make_shared<CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry>();
        c->parent = this;
        ceigrptopoentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpTopoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceigrptopoentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEIGRPMIB::CEigrpTopoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEIGRPMIB::CEigrpTopoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEIGRPMIB::CEigrpTopoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpTopoEntry")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::CEigrpTopoEntry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::str, "cEigrpAsNumber"},
    ceigrpdestnettype{YType::enumeration, "cEigrpDestNetType"},
    ceigrpdestnet{YType::str, "cEigrpDestNet"},
    ceigrpdestnetprefixlen{YType::uint32, "cEigrpDestNetPrefixLen"},
    ceigrpactive{YType::boolean, "cEigrpActive"},
    ceigrpstuckinactive{YType::boolean, "cEigrpStuckInActive"},
    ceigrpdestsuccessors{YType::uint32, "cEigrpDestSuccessors"},
    ceigrpfdistance{YType::uint32, "cEigrpFdistance"},
    ceigrprouteorigintype{YType::str, "cEigrpRouteOriginType"},
    ceigrprouteoriginaddrtype{YType::enumeration, "cEigrpRouteOriginAddrType"},
    ceigrprouteoriginaddr{YType::str, "cEigrpRouteOriginAddr"},
    ceigrpnexthopaddresstype{YType::enumeration, "cEigrpNextHopAddressType"},
    ceigrpnexthopaddress{YType::str, "cEigrpNextHopAddress"},
    ceigrpnexthopinterface{YType::str, "cEigrpNextHopInterface"},
    ceigrpdistance{YType::uint32, "cEigrpDistance"},
    ceigrpreportdistance{YType::uint32, "cEigrpReportDistance"}
{

    yang_name = "cEigrpTopoEntry"; yang_parent_name = "cEigrpTopoTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::~CEigrpTopoEntry()
{
}

bool CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ceigrpdestnettype.is_set
	|| ceigrpdestnet.is_set
	|| ceigrpdestnetprefixlen.is_set
	|| ceigrpactive.is_set
	|| ceigrpstuckinactive.is_set
	|| ceigrpdestsuccessors.is_set
	|| ceigrpfdistance.is_set
	|| ceigrprouteorigintype.is_set
	|| ceigrprouteoriginaddrtype.is_set
	|| ceigrprouteoriginaddr.is_set
	|| ceigrpnexthopaddresstype.is_set
	|| ceigrpnexthopaddress.is_set
	|| ceigrpnexthopinterface.is_set
	|| ceigrpdistance.is_set
	|| ceigrpreportdistance.is_set;
}

bool CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ceigrpdestnettype.yfilter)
	|| ydk::is_set(ceigrpdestnet.yfilter)
	|| ydk::is_set(ceigrpdestnetprefixlen.yfilter)
	|| ydk::is_set(ceigrpactive.yfilter)
	|| ydk::is_set(ceigrpstuckinactive.yfilter)
	|| ydk::is_set(ceigrpdestsuccessors.yfilter)
	|| ydk::is_set(ceigrpfdistance.yfilter)
	|| ydk::is_set(ceigrprouteorigintype.yfilter)
	|| ydk::is_set(ceigrprouteoriginaddrtype.yfilter)
	|| ydk::is_set(ceigrprouteoriginaddr.yfilter)
	|| ydk::is_set(ceigrpnexthopaddresstype.yfilter)
	|| ydk::is_set(ceigrpnexthopaddress.yfilter)
	|| ydk::is_set(ceigrpnexthopinterface.yfilter)
	|| ydk::is_set(ceigrpdistance.yfilter)
	|| ydk::is_set(ceigrpreportdistance.yfilter);
}

std::string CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpTopoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTopoEntry";
    ADD_KEY_TOKEN(ceigrpvpnid, "cEigrpVpnId");
    ADD_KEY_TOKEN(ceigrpasnumber, "cEigrpAsNumber");
    ADD_KEY_TOKEN(ceigrpdestnettype, "cEigrpDestNetType");
    ADD_KEY_TOKEN(ceigrpdestnet, "cEigrpDestNet");
    ADD_KEY_TOKEN(ceigrpdestnetprefixlen, "cEigrpDestNetPrefixLen");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrpdestnettype.is_set || is_set(ceigrpdestnettype.yfilter)) leaf_name_data.push_back(ceigrpdestnettype.get_name_leafdata());
    if (ceigrpdestnet.is_set || is_set(ceigrpdestnet.yfilter)) leaf_name_data.push_back(ceigrpdestnet.get_name_leafdata());
    if (ceigrpdestnetprefixlen.is_set || is_set(ceigrpdestnetprefixlen.yfilter)) leaf_name_data.push_back(ceigrpdestnetprefixlen.get_name_leafdata());
    if (ceigrpactive.is_set || is_set(ceigrpactive.yfilter)) leaf_name_data.push_back(ceigrpactive.get_name_leafdata());
    if (ceigrpstuckinactive.is_set || is_set(ceigrpstuckinactive.yfilter)) leaf_name_data.push_back(ceigrpstuckinactive.get_name_leafdata());
    if (ceigrpdestsuccessors.is_set || is_set(ceigrpdestsuccessors.yfilter)) leaf_name_data.push_back(ceigrpdestsuccessors.get_name_leafdata());
    if (ceigrpfdistance.is_set || is_set(ceigrpfdistance.yfilter)) leaf_name_data.push_back(ceigrpfdistance.get_name_leafdata());
    if (ceigrprouteorigintype.is_set || is_set(ceigrprouteorigintype.yfilter)) leaf_name_data.push_back(ceigrprouteorigintype.get_name_leafdata());
    if (ceigrprouteoriginaddrtype.is_set || is_set(ceigrprouteoriginaddrtype.yfilter)) leaf_name_data.push_back(ceigrprouteoriginaddrtype.get_name_leafdata());
    if (ceigrprouteoriginaddr.is_set || is_set(ceigrprouteoriginaddr.yfilter)) leaf_name_data.push_back(ceigrprouteoriginaddr.get_name_leafdata());
    if (ceigrpnexthopaddresstype.is_set || is_set(ceigrpnexthopaddresstype.yfilter)) leaf_name_data.push_back(ceigrpnexthopaddresstype.get_name_leafdata());
    if (ceigrpnexthopaddress.is_set || is_set(ceigrpnexthopaddress.yfilter)) leaf_name_data.push_back(ceigrpnexthopaddress.get_name_leafdata());
    if (ceigrpnexthopinterface.is_set || is_set(ceigrpnexthopinterface.yfilter)) leaf_name_data.push_back(ceigrpnexthopinterface.get_name_leafdata());
    if (ceigrpdistance.is_set || is_set(ceigrpdistance.yfilter)) leaf_name_data.push_back(ceigrpdistance.get_name_leafdata());
    if (ceigrpreportdistance.is_set || is_set(ceigrpreportdistance.yfilter)) leaf_name_data.push_back(ceigrpreportdistance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
        ceigrpvpnid.value_namespace = name_space;
        ceigrpvpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
        ceigrpasnumber.value_namespace = name_space;
        ceigrpasnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpDestNetType")
    {
        ceigrpdestnettype = value;
        ceigrpdestnettype.value_namespace = name_space;
        ceigrpdestnettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpDestNet")
    {
        ceigrpdestnet = value;
        ceigrpdestnet.value_namespace = name_space;
        ceigrpdestnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpDestNetPrefixLen")
    {
        ceigrpdestnetprefixlen = value;
        ceigrpdestnetprefixlen.value_namespace = name_space;
        ceigrpdestnetprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpActive")
    {
        ceigrpactive = value;
        ceigrpactive.value_namespace = name_space;
        ceigrpactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpStuckInActive")
    {
        ceigrpstuckinactive = value;
        ceigrpstuckinactive.value_namespace = name_space;
        ceigrpstuckinactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpDestSuccessors")
    {
        ceigrpdestsuccessors = value;
        ceigrpdestsuccessors.value_namespace = name_space;
        ceigrpdestsuccessors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpFdistance")
    {
        ceigrpfdistance = value;
        ceigrpfdistance.value_namespace = name_space;
        ceigrpfdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRouteOriginType")
    {
        ceigrprouteorigintype = value;
        ceigrprouteorigintype.value_namespace = name_space;
        ceigrprouteorigintype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRouteOriginAddrType")
    {
        ceigrprouteoriginaddrtype = value;
        ceigrprouteoriginaddrtype.value_namespace = name_space;
        ceigrprouteoriginaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRouteOriginAddr")
    {
        ceigrprouteoriginaddr = value;
        ceigrprouteoriginaddr.value_namespace = name_space;
        ceigrprouteoriginaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextHopAddressType")
    {
        ceigrpnexthopaddresstype = value;
        ceigrpnexthopaddresstype.value_namespace = name_space;
        ceigrpnexthopaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextHopAddress")
    {
        ceigrpnexthopaddress = value;
        ceigrpnexthopaddress.value_namespace = name_space;
        ceigrpnexthopaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextHopInterface")
    {
        ceigrpnexthopinterface = value;
        ceigrpnexthopinterface.value_namespace = name_space;
        ceigrpnexthopinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpDistance")
    {
        ceigrpdistance = value;
        ceigrpdistance.value_namespace = name_space;
        ceigrpdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpReportDistance")
    {
        ceigrpreportdistance = value;
        ceigrpreportdistance.value_namespace = name_space;
        ceigrpreportdistance.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber.yfilter = yfilter;
    }
    if(value_path == "cEigrpDestNetType")
    {
        ceigrpdestnettype.yfilter = yfilter;
    }
    if(value_path == "cEigrpDestNet")
    {
        ceigrpdestnet.yfilter = yfilter;
    }
    if(value_path == "cEigrpDestNetPrefixLen")
    {
        ceigrpdestnetprefixlen.yfilter = yfilter;
    }
    if(value_path == "cEigrpActive")
    {
        ceigrpactive.yfilter = yfilter;
    }
    if(value_path == "cEigrpStuckInActive")
    {
        ceigrpstuckinactive.yfilter = yfilter;
    }
    if(value_path == "cEigrpDestSuccessors")
    {
        ceigrpdestsuccessors.yfilter = yfilter;
    }
    if(value_path == "cEigrpFdistance")
    {
        ceigrpfdistance.yfilter = yfilter;
    }
    if(value_path == "cEigrpRouteOriginType")
    {
        ceigrprouteorigintype.yfilter = yfilter;
    }
    if(value_path == "cEigrpRouteOriginAddrType")
    {
        ceigrprouteoriginaddrtype.yfilter = yfilter;
    }
    if(value_path == "cEigrpRouteOriginAddr")
    {
        ceigrprouteoriginaddr.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextHopAddressType")
    {
        ceigrpnexthopaddresstype.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextHopAddress")
    {
        ceigrpnexthopaddress.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextHopInterface")
    {
        ceigrpnexthopinterface.yfilter = yfilter;
    }
    if(value_path == "cEigrpDistance")
    {
        ceigrpdistance.yfilter = yfilter;
    }
    if(value_path == "cEigrpReportDistance")
    {
        ceigrpreportdistance.yfilter = yfilter;
    }
}

bool CISCOEIGRPMIB::CEigrpTopoTable::CEigrpTopoEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "cEigrpDestNetType" || name == "cEigrpDestNet" || name == "cEigrpDestNetPrefixLen" || name == "cEigrpActive" || name == "cEigrpStuckInActive" || name == "cEigrpDestSuccessors" || name == "cEigrpFdistance" || name == "cEigrpRouteOriginType" || name == "cEigrpRouteOriginAddrType" || name == "cEigrpRouteOriginAddr" || name == "cEigrpNextHopAddressType" || name == "cEigrpNextHopAddress" || name == "cEigrpNextHopInterface" || name == "cEigrpDistance" || name == "cEigrpReportDistance")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerTable()
    :
    ceigrppeerentry(this, {"ceigrpvpnid", "ceigrpasnumber", "ceigrphandle"})
{

    yang_name = "cEigrpPeerTable"; yang_parent_name = "CISCO-EIGRP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpPeerTable::~CEigrpPeerTable()
{
}

bool CISCOEIGRPMIB::CEigrpPeerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceigrppeerentry.len(); index++)
    {
        if(ceigrppeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEIGRPMIB::CEigrpPeerTable::has_operation() const
{
    for (std::size_t index=0; index<ceigrppeerentry.len(); index++)
    {
        if(ceigrppeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEIGRPMIB::CEigrpPeerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpPeerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpPeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpPeerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpPeerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpPeerEntry")
    {
        auto c = std::make_shared<CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry>();
        c->parent = this;
        ceigrppeerentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpPeerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceigrppeerentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEIGRPMIB::CEigrpPeerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEIGRPMIB::CEigrpPeerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEIGRPMIB::CEigrpPeerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpPeerEntry")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::CEigrpPeerEntry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::str, "cEigrpAsNumber"},
    ceigrphandle{YType::uint32, "cEigrpHandle"},
    ceigrppeeraddrtype{YType::enumeration, "cEigrpPeerAddrType"},
    ceigrppeeraddr{YType::str, "cEigrpPeerAddr"},
    ceigrppeerifindex{YType::int32, "cEigrpPeerIfIndex"},
    ceigrpholdtime{YType::uint32, "cEigrpHoldTime"},
    ceigrpuptime{YType::str, "cEigrpUpTime"},
    ceigrpsrtt{YType::uint32, "cEigrpSrtt"},
    ceigrprto{YType::uint32, "cEigrpRto"},
    ceigrppktsenqueued{YType::uint32, "cEigrpPktsEnqueued"},
    ceigrplastseq{YType::uint32, "cEigrpLastSeq"},
    ceigrpversion{YType::str, "cEigrpVersion"},
    ceigrpretrans{YType::uint32, "cEigrpRetrans"},
    ceigrpretries{YType::uint32, "cEigrpRetries"}
{

    yang_name = "cEigrpPeerEntry"; yang_parent_name = "cEigrpPeerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::~CEigrpPeerEntry()
{
}

bool CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ceigrphandle.is_set
	|| ceigrppeeraddrtype.is_set
	|| ceigrppeeraddr.is_set
	|| ceigrppeerifindex.is_set
	|| ceigrpholdtime.is_set
	|| ceigrpuptime.is_set
	|| ceigrpsrtt.is_set
	|| ceigrprto.is_set
	|| ceigrppktsenqueued.is_set
	|| ceigrplastseq.is_set
	|| ceigrpversion.is_set
	|| ceigrpretrans.is_set
	|| ceigrpretries.is_set;
}

bool CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ceigrphandle.yfilter)
	|| ydk::is_set(ceigrppeeraddrtype.yfilter)
	|| ydk::is_set(ceigrppeeraddr.yfilter)
	|| ydk::is_set(ceigrppeerifindex.yfilter)
	|| ydk::is_set(ceigrpholdtime.yfilter)
	|| ydk::is_set(ceigrpuptime.yfilter)
	|| ydk::is_set(ceigrpsrtt.yfilter)
	|| ydk::is_set(ceigrprto.yfilter)
	|| ydk::is_set(ceigrppktsenqueued.yfilter)
	|| ydk::is_set(ceigrplastseq.yfilter)
	|| ydk::is_set(ceigrpversion.yfilter)
	|| ydk::is_set(ceigrpretrans.yfilter)
	|| ydk::is_set(ceigrpretries.yfilter);
}

std::string CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpPeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpPeerEntry";
    ADD_KEY_TOKEN(ceigrpvpnid, "cEigrpVpnId");
    ADD_KEY_TOKEN(ceigrpasnumber, "cEigrpAsNumber");
    ADD_KEY_TOKEN(ceigrphandle, "cEigrpHandle");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrphandle.is_set || is_set(ceigrphandle.yfilter)) leaf_name_data.push_back(ceigrphandle.get_name_leafdata());
    if (ceigrppeeraddrtype.is_set || is_set(ceigrppeeraddrtype.yfilter)) leaf_name_data.push_back(ceigrppeeraddrtype.get_name_leafdata());
    if (ceigrppeeraddr.is_set || is_set(ceigrppeeraddr.yfilter)) leaf_name_data.push_back(ceigrppeeraddr.get_name_leafdata());
    if (ceigrppeerifindex.is_set || is_set(ceigrppeerifindex.yfilter)) leaf_name_data.push_back(ceigrppeerifindex.get_name_leafdata());
    if (ceigrpholdtime.is_set || is_set(ceigrpholdtime.yfilter)) leaf_name_data.push_back(ceigrpholdtime.get_name_leafdata());
    if (ceigrpuptime.is_set || is_set(ceigrpuptime.yfilter)) leaf_name_data.push_back(ceigrpuptime.get_name_leafdata());
    if (ceigrpsrtt.is_set || is_set(ceigrpsrtt.yfilter)) leaf_name_data.push_back(ceigrpsrtt.get_name_leafdata());
    if (ceigrprto.is_set || is_set(ceigrprto.yfilter)) leaf_name_data.push_back(ceigrprto.get_name_leafdata());
    if (ceigrppktsenqueued.is_set || is_set(ceigrppktsenqueued.yfilter)) leaf_name_data.push_back(ceigrppktsenqueued.get_name_leafdata());
    if (ceigrplastseq.is_set || is_set(ceigrplastseq.yfilter)) leaf_name_data.push_back(ceigrplastseq.get_name_leafdata());
    if (ceigrpversion.is_set || is_set(ceigrpversion.yfilter)) leaf_name_data.push_back(ceigrpversion.get_name_leafdata());
    if (ceigrpretrans.is_set || is_set(ceigrpretrans.yfilter)) leaf_name_data.push_back(ceigrpretrans.get_name_leafdata());
    if (ceigrpretries.is_set || is_set(ceigrpretries.yfilter)) leaf_name_data.push_back(ceigrpretries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
        ceigrpvpnid.value_namespace = name_space;
        ceigrpvpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
        ceigrpasnumber.value_namespace = name_space;
        ceigrpasnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHandle")
    {
        ceigrphandle = value;
        ceigrphandle.value_namespace = name_space;
        ceigrphandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPeerAddrType")
    {
        ceigrppeeraddrtype = value;
        ceigrppeeraddrtype.value_namespace = name_space;
        ceigrppeeraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPeerAddr")
    {
        ceigrppeeraddr = value;
        ceigrppeeraddr.value_namespace = name_space;
        ceigrppeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPeerIfIndex")
    {
        ceigrppeerifindex = value;
        ceigrppeerifindex.value_namespace = name_space;
        ceigrppeerifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHoldTime")
    {
        ceigrpholdtime = value;
        ceigrpholdtime.value_namespace = name_space;
        ceigrpholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUpTime")
    {
        ceigrpuptime = value;
        ceigrpuptime.value_namespace = name_space;
        ceigrpuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpSrtt")
    {
        ceigrpsrtt = value;
        ceigrpsrtt.value_namespace = name_space;
        ceigrpsrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRto")
    {
        ceigrprto = value;
        ceigrprto.value_namespace = name_space;
        ceigrprto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPktsEnqueued")
    {
        ceigrppktsenqueued = value;
        ceigrppktsenqueued.value_namespace = name_space;
        ceigrppktsenqueued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpLastSeq")
    {
        ceigrplastseq = value;
        ceigrplastseq.value_namespace = name_space;
        ceigrplastseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpVersion")
    {
        ceigrpversion = value;
        ceigrpversion.value_namespace = name_space;
        ceigrpversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRetrans")
    {
        ceigrpretrans = value;
        ceigrpretrans.value_namespace = name_space;
        ceigrpretrans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRetries")
    {
        ceigrpretries = value;
        ceigrpretries.value_namespace = name_space;
        ceigrpretries.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber.yfilter = yfilter;
    }
    if(value_path == "cEigrpHandle")
    {
        ceigrphandle.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerAddrType")
    {
        ceigrppeeraddrtype.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerAddr")
    {
        ceigrppeeraddr.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerIfIndex")
    {
        ceigrppeerifindex.yfilter = yfilter;
    }
    if(value_path == "cEigrpHoldTime")
    {
        ceigrpholdtime.yfilter = yfilter;
    }
    if(value_path == "cEigrpUpTime")
    {
        ceigrpuptime.yfilter = yfilter;
    }
    if(value_path == "cEigrpSrtt")
    {
        ceigrpsrtt.yfilter = yfilter;
    }
    if(value_path == "cEigrpRto")
    {
        ceigrprto.yfilter = yfilter;
    }
    if(value_path == "cEigrpPktsEnqueued")
    {
        ceigrppktsenqueued.yfilter = yfilter;
    }
    if(value_path == "cEigrpLastSeq")
    {
        ceigrplastseq.yfilter = yfilter;
    }
    if(value_path == "cEigrpVersion")
    {
        ceigrpversion.yfilter = yfilter;
    }
    if(value_path == "cEigrpRetrans")
    {
        ceigrpretrans.yfilter = yfilter;
    }
    if(value_path == "cEigrpRetries")
    {
        ceigrpretries.yfilter = yfilter;
    }
}

bool CISCOEIGRPMIB::CEigrpPeerTable::CEigrpPeerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "cEigrpHandle" || name == "cEigrpPeerAddrType" || name == "cEigrpPeerAddr" || name == "cEigrpPeerIfIndex" || name == "cEigrpHoldTime" || name == "cEigrpUpTime" || name == "cEigrpSrtt" || name == "cEigrpRto" || name == "cEigrpPktsEnqueued" || name == "cEigrpLastSeq" || name == "cEigrpVersion" || name == "cEigrpRetrans" || name == "cEigrpRetries")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceTable()
    :
    ceigrpinterfaceentry(this, {"ceigrpvpnid", "ceigrpasnumber", "ifindex"})
{

    yang_name = "cEigrpInterfaceTable"; yang_parent_name = "CISCO-EIGRP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpInterfaceTable::~CEigrpInterfaceTable()
{
}

bool CISCOEIGRPMIB::CEigrpInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceigrpinterfaceentry.len(); index++)
    {
        if(ceigrpinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEIGRPMIB::CEigrpInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<ceigrpinterfaceentry.len(); index++)
    {
        if(ceigrpinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEIGRPMIB::CEigrpInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpInterfaceEntry")
    {
        auto c = std::make_shared<CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry>();
        c->parent = this;
        ceigrpinterfaceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceigrpinterfaceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEIGRPMIB::CEigrpInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEIGRPMIB::CEigrpInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEIGRPMIB::CEigrpInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpInterfaceEntry")
        return true;
    return false;
}

CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::CEigrpInterfaceEntry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::str, "cEigrpAsNumber"},
    ifindex{YType::str, "ifIndex"},
    ceigrppeercount{YType::uint32, "cEigrpPeerCount"},
    ceigrpxmitreliableq{YType::uint32, "cEigrpXmitReliableQ"},
    ceigrpxmitunreliableq{YType::uint32, "cEigrpXmitUnreliableQ"},
    ceigrpmeansrtt{YType::uint32, "cEigrpMeanSrtt"},
    ceigrppacingreliable{YType::uint32, "cEigrpPacingReliable"},
    ceigrppacingunreliable{YType::uint32, "cEigrpPacingUnreliable"},
    ceigrpmflowtimer{YType::uint32, "cEigrpMFlowTimer"},
    ceigrppendingroutes{YType::uint32, "cEigrpPendingRoutes"},
    ceigrphellointerval{YType::uint32, "cEigrpHelloInterval"},
    ceigrpxmitnextserial{YType::uint64, "cEigrpXmitNextSerial"},
    ceigrpumcasts{YType::uint32, "cEigrpUMcasts"},
    ceigrprmcasts{YType::uint32, "cEigrpRMcasts"},
    ceigrpuucasts{YType::uint32, "cEigrpUUcasts"},
    ceigrprucasts{YType::uint32, "cEigrpRUcasts"},
    ceigrpmcastexcepts{YType::uint32, "cEigrpMcastExcepts"},
    ceigrpcrpkts{YType::uint32, "cEigrpCRpkts"},
    ceigrpackssuppressed{YType::uint32, "cEigrpAcksSuppressed"},
    ceigrpretranssent{YType::uint32, "cEigrpRetransSent"},
    ceigrpoosrvcd{YType::uint32, "cEigrpOOSrvcd"},
    ceigrpauthmode{YType::enumeration, "cEigrpAuthMode"},
    ceigrpauthkeychain{YType::str, "cEigrpAuthKeyChain"}
{

    yang_name = "cEigrpInterfaceEntry"; yang_parent_name = "cEigrpInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::~CEigrpInterfaceEntry()
{
}

bool CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ifindex.is_set
	|| ceigrppeercount.is_set
	|| ceigrpxmitreliableq.is_set
	|| ceigrpxmitunreliableq.is_set
	|| ceigrpmeansrtt.is_set
	|| ceigrppacingreliable.is_set
	|| ceigrppacingunreliable.is_set
	|| ceigrpmflowtimer.is_set
	|| ceigrppendingroutes.is_set
	|| ceigrphellointerval.is_set
	|| ceigrpxmitnextserial.is_set
	|| ceigrpumcasts.is_set
	|| ceigrprmcasts.is_set
	|| ceigrpuucasts.is_set
	|| ceigrprucasts.is_set
	|| ceigrpmcastexcepts.is_set
	|| ceigrpcrpkts.is_set
	|| ceigrpackssuppressed.is_set
	|| ceigrpretranssent.is_set
	|| ceigrpoosrvcd.is_set
	|| ceigrpauthmode.is_set
	|| ceigrpauthkeychain.is_set;
}

bool CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ceigrppeercount.yfilter)
	|| ydk::is_set(ceigrpxmitreliableq.yfilter)
	|| ydk::is_set(ceigrpxmitunreliableq.yfilter)
	|| ydk::is_set(ceigrpmeansrtt.yfilter)
	|| ydk::is_set(ceigrppacingreliable.yfilter)
	|| ydk::is_set(ceigrppacingunreliable.yfilter)
	|| ydk::is_set(ceigrpmflowtimer.yfilter)
	|| ydk::is_set(ceigrppendingroutes.yfilter)
	|| ydk::is_set(ceigrphellointerval.yfilter)
	|| ydk::is_set(ceigrpxmitnextserial.yfilter)
	|| ydk::is_set(ceigrpumcasts.yfilter)
	|| ydk::is_set(ceigrprmcasts.yfilter)
	|| ydk::is_set(ceigrpuucasts.yfilter)
	|| ydk::is_set(ceigrprucasts.yfilter)
	|| ydk::is_set(ceigrpmcastexcepts.yfilter)
	|| ydk::is_set(ceigrpcrpkts.yfilter)
	|| ydk::is_set(ceigrpackssuppressed.yfilter)
	|| ydk::is_set(ceigrpretranssent.yfilter)
	|| ydk::is_set(ceigrpoosrvcd.yfilter)
	|| ydk::is_set(ceigrpauthmode.yfilter)
	|| ydk::is_set(ceigrpauthkeychain.yfilter);
}

std::string CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpInterfaceEntry";
    ADD_KEY_TOKEN(ceigrpvpnid, "cEigrpVpnId");
    ADD_KEY_TOKEN(ceigrpasnumber, "cEigrpAsNumber");
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ceigrppeercount.is_set || is_set(ceigrppeercount.yfilter)) leaf_name_data.push_back(ceigrppeercount.get_name_leafdata());
    if (ceigrpxmitreliableq.is_set || is_set(ceigrpxmitreliableq.yfilter)) leaf_name_data.push_back(ceigrpxmitreliableq.get_name_leafdata());
    if (ceigrpxmitunreliableq.is_set || is_set(ceigrpxmitunreliableq.yfilter)) leaf_name_data.push_back(ceigrpxmitunreliableq.get_name_leafdata());
    if (ceigrpmeansrtt.is_set || is_set(ceigrpmeansrtt.yfilter)) leaf_name_data.push_back(ceigrpmeansrtt.get_name_leafdata());
    if (ceigrppacingreliable.is_set || is_set(ceigrppacingreliable.yfilter)) leaf_name_data.push_back(ceigrppacingreliable.get_name_leafdata());
    if (ceigrppacingunreliable.is_set || is_set(ceigrppacingunreliable.yfilter)) leaf_name_data.push_back(ceigrppacingunreliable.get_name_leafdata());
    if (ceigrpmflowtimer.is_set || is_set(ceigrpmflowtimer.yfilter)) leaf_name_data.push_back(ceigrpmflowtimer.get_name_leafdata());
    if (ceigrppendingroutes.is_set || is_set(ceigrppendingroutes.yfilter)) leaf_name_data.push_back(ceigrppendingroutes.get_name_leafdata());
    if (ceigrphellointerval.is_set || is_set(ceigrphellointerval.yfilter)) leaf_name_data.push_back(ceigrphellointerval.get_name_leafdata());
    if (ceigrpxmitnextserial.is_set || is_set(ceigrpxmitnextserial.yfilter)) leaf_name_data.push_back(ceigrpxmitnextserial.get_name_leafdata());
    if (ceigrpumcasts.is_set || is_set(ceigrpumcasts.yfilter)) leaf_name_data.push_back(ceigrpumcasts.get_name_leafdata());
    if (ceigrprmcasts.is_set || is_set(ceigrprmcasts.yfilter)) leaf_name_data.push_back(ceigrprmcasts.get_name_leafdata());
    if (ceigrpuucasts.is_set || is_set(ceigrpuucasts.yfilter)) leaf_name_data.push_back(ceigrpuucasts.get_name_leafdata());
    if (ceigrprucasts.is_set || is_set(ceigrprucasts.yfilter)) leaf_name_data.push_back(ceigrprucasts.get_name_leafdata());
    if (ceigrpmcastexcepts.is_set || is_set(ceigrpmcastexcepts.yfilter)) leaf_name_data.push_back(ceigrpmcastexcepts.get_name_leafdata());
    if (ceigrpcrpkts.is_set || is_set(ceigrpcrpkts.yfilter)) leaf_name_data.push_back(ceigrpcrpkts.get_name_leafdata());
    if (ceigrpackssuppressed.is_set || is_set(ceigrpackssuppressed.yfilter)) leaf_name_data.push_back(ceigrpackssuppressed.get_name_leafdata());
    if (ceigrpretranssent.is_set || is_set(ceigrpretranssent.yfilter)) leaf_name_data.push_back(ceigrpretranssent.get_name_leafdata());
    if (ceigrpoosrvcd.is_set || is_set(ceigrpoosrvcd.yfilter)) leaf_name_data.push_back(ceigrpoosrvcd.get_name_leafdata());
    if (ceigrpauthmode.is_set || is_set(ceigrpauthmode.yfilter)) leaf_name_data.push_back(ceigrpauthmode.get_name_leafdata());
    if (ceigrpauthkeychain.is_set || is_set(ceigrpauthkeychain.yfilter)) leaf_name_data.push_back(ceigrpauthkeychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
        ceigrpvpnid.value_namespace = name_space;
        ceigrpvpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
        ceigrpasnumber.value_namespace = name_space;
        ceigrpasnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPeerCount")
    {
        ceigrppeercount = value;
        ceigrppeercount.value_namespace = name_space;
        ceigrppeercount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitReliableQ")
    {
        ceigrpxmitreliableq = value;
        ceigrpxmitreliableq.value_namespace = name_space;
        ceigrpxmitreliableq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitUnreliableQ")
    {
        ceigrpxmitunreliableq = value;
        ceigrpxmitunreliableq.value_namespace = name_space;
        ceigrpxmitunreliableq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpMeanSrtt")
    {
        ceigrpmeansrtt = value;
        ceigrpmeansrtt.value_namespace = name_space;
        ceigrpmeansrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPacingReliable")
    {
        ceigrppacingreliable = value;
        ceigrppacingreliable.value_namespace = name_space;
        ceigrppacingreliable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPacingUnreliable")
    {
        ceigrppacingunreliable = value;
        ceigrppacingunreliable.value_namespace = name_space;
        ceigrppacingunreliable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpMFlowTimer")
    {
        ceigrpmflowtimer = value;
        ceigrpmflowtimer.value_namespace = name_space;
        ceigrpmflowtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPendingRoutes")
    {
        ceigrppendingroutes = value;
        ceigrppendingroutes.value_namespace = name_space;
        ceigrppendingroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHelloInterval")
    {
        ceigrphellointerval = value;
        ceigrphellointerval.value_namespace = name_space;
        ceigrphellointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitNextSerial")
    {
        ceigrpxmitnextserial = value;
        ceigrpxmitnextserial.value_namespace = name_space;
        ceigrpxmitnextserial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUMcasts")
    {
        ceigrpumcasts = value;
        ceigrpumcasts.value_namespace = name_space;
        ceigrpumcasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRMcasts")
    {
        ceigrprmcasts = value;
        ceigrprmcasts.value_namespace = name_space;
        ceigrprmcasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUUcasts")
    {
        ceigrpuucasts = value;
        ceigrpuucasts.value_namespace = name_space;
        ceigrpuucasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRUcasts")
    {
        ceigrprucasts = value;
        ceigrprucasts.value_namespace = name_space;
        ceigrprucasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpMcastExcepts")
    {
        ceigrpmcastexcepts = value;
        ceigrpmcastexcepts.value_namespace = name_space;
        ceigrpmcastexcepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpCRpkts")
    {
        ceigrpcrpkts = value;
        ceigrpcrpkts.value_namespace = name_space;
        ceigrpcrpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAcksSuppressed")
    {
        ceigrpackssuppressed = value;
        ceigrpackssuppressed.value_namespace = name_space;
        ceigrpackssuppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRetransSent")
    {
        ceigrpretranssent = value;
        ceigrpretranssent.value_namespace = name_space;
        ceigrpretranssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpOOSrvcd")
    {
        ceigrpoosrvcd = value;
        ceigrpoosrvcd.value_namespace = name_space;
        ceigrpoosrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAuthMode")
    {
        ceigrpauthmode = value;
        ceigrpauthmode.value_namespace = name_space;
        ceigrpauthmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAuthKeyChain")
    {
        ceigrpauthkeychain = value;
        ceigrpauthkeychain.value_namespace = name_space;
        ceigrpauthkeychain.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerCount")
    {
        ceigrppeercount.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitReliableQ")
    {
        ceigrpxmitreliableq.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitUnreliableQ")
    {
        ceigrpxmitunreliableq.yfilter = yfilter;
    }
    if(value_path == "cEigrpMeanSrtt")
    {
        ceigrpmeansrtt.yfilter = yfilter;
    }
    if(value_path == "cEigrpPacingReliable")
    {
        ceigrppacingreliable.yfilter = yfilter;
    }
    if(value_path == "cEigrpPacingUnreliable")
    {
        ceigrppacingunreliable.yfilter = yfilter;
    }
    if(value_path == "cEigrpMFlowTimer")
    {
        ceigrpmflowtimer.yfilter = yfilter;
    }
    if(value_path == "cEigrpPendingRoutes")
    {
        ceigrppendingroutes.yfilter = yfilter;
    }
    if(value_path == "cEigrpHelloInterval")
    {
        ceigrphellointerval.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitNextSerial")
    {
        ceigrpxmitnextserial.yfilter = yfilter;
    }
    if(value_path == "cEigrpUMcasts")
    {
        ceigrpumcasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpRMcasts")
    {
        ceigrprmcasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpUUcasts")
    {
        ceigrpuucasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpRUcasts")
    {
        ceigrprucasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpMcastExcepts")
    {
        ceigrpmcastexcepts.yfilter = yfilter;
    }
    if(value_path == "cEigrpCRpkts")
    {
        ceigrpcrpkts.yfilter = yfilter;
    }
    if(value_path == "cEigrpAcksSuppressed")
    {
        ceigrpackssuppressed.yfilter = yfilter;
    }
    if(value_path == "cEigrpRetransSent")
    {
        ceigrpretranssent.yfilter = yfilter;
    }
    if(value_path == "cEigrpOOSrvcd")
    {
        ceigrpoosrvcd.yfilter = yfilter;
    }
    if(value_path == "cEigrpAuthMode")
    {
        ceigrpauthmode.yfilter = yfilter;
    }
    if(value_path == "cEigrpAuthKeyChain")
    {
        ceigrpauthkeychain.yfilter = yfilter;
    }
}

bool CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "ifIndex" || name == "cEigrpPeerCount" || name == "cEigrpXmitReliableQ" || name == "cEigrpXmitUnreliableQ" || name == "cEigrpMeanSrtt" || name == "cEigrpPacingReliable" || name == "cEigrpPacingUnreliable" || name == "cEigrpMFlowTimer" || name == "cEigrpPendingRoutes" || name == "cEigrpHelloInterval" || name == "cEigrpXmitNextSerial" || name == "cEigrpUMcasts" || name == "cEigrpRMcasts" || name == "cEigrpUUcasts" || name == "cEigrpRUcasts" || name == "cEigrpMcastExcepts" || name == "cEigrpCRpkts" || name == "cEigrpAcksSuppressed" || name == "cEigrpRetransSent" || name == "cEigrpOOSrvcd" || name == "cEigrpAuthMode" || name == "cEigrpAuthKeyChain")
        return true;
    return false;
}

const Enum::YLeaf CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::CEigrpAuthMode::none {1, "none"};
const Enum::YLeaf CISCOEIGRPMIB::CEigrpInterfaceTable::CEigrpInterfaceEntry::CEigrpAuthMode::md5 {2, "md5"};


}
}

