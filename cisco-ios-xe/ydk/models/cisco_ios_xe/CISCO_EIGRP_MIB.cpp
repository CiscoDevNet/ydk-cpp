
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_EIGRP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_EIGRP_MIB {

CiscoEigrpMib::CiscoEigrpMib()
    :
    ceigrpinterfacetable(std::make_shared<CiscoEigrpMib::Ceigrpinterfacetable>())
	,ceigrppeertable(std::make_shared<CiscoEigrpMib::Ceigrppeertable>())
	,ceigrptopotable(std::make_shared<CiscoEigrpMib::Ceigrptopotable>())
	,ceigrptraffstatstable(std::make_shared<CiscoEigrpMib::Ceigrptraffstatstable>())
	,ceigrpvpntable(std::make_shared<CiscoEigrpMib::Ceigrpvpntable>())
{
    ceigrpinterfacetable->parent = this;

    ceigrppeertable->parent = this;

    ceigrptopotable->parent = this;

    ceigrptraffstatstable->parent = this;

    ceigrpvpntable->parent = this;

    yang_name = "CISCO-EIGRP-MIB"; yang_parent_name = "CISCO-EIGRP-MIB";
}

CiscoEigrpMib::~CiscoEigrpMib()
{
}

bool CiscoEigrpMib::has_data() const
{
    return (ceigrpinterfacetable !=  nullptr && ceigrpinterfacetable->has_data())
	|| (ceigrppeertable !=  nullptr && ceigrppeertable->has_data())
	|| (ceigrptopotable !=  nullptr && ceigrptopotable->has_data())
	|| (ceigrptraffstatstable !=  nullptr && ceigrptraffstatstable->has_data())
	|| (ceigrpvpntable !=  nullptr && ceigrpvpntable->has_data());
}

bool CiscoEigrpMib::has_operation() const
{
    return is_set(yfilter)
	|| (ceigrpinterfacetable !=  nullptr && ceigrpinterfacetable->has_operation())
	|| (ceigrppeertable !=  nullptr && ceigrppeertable->has_operation())
	|| (ceigrptopotable !=  nullptr && ceigrptopotable->has_operation())
	|| (ceigrptraffstatstable !=  nullptr && ceigrptraffstatstable->has_operation())
	|| (ceigrpvpntable !=  nullptr && ceigrpvpntable->has_operation());
}

std::string CiscoEigrpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpInterfaceTable")
    {
        if(ceigrpinterfacetable == nullptr)
        {
            ceigrpinterfacetable = std::make_shared<CiscoEigrpMib::Ceigrpinterfacetable>();
        }
        return ceigrpinterfacetable;
    }

    if(child_yang_name == "cEigrpPeerTable")
    {
        if(ceigrppeertable == nullptr)
        {
            ceigrppeertable = std::make_shared<CiscoEigrpMib::Ceigrppeertable>();
        }
        return ceigrppeertable;
    }

    if(child_yang_name == "cEigrpTopoTable")
    {
        if(ceigrptopotable == nullptr)
        {
            ceigrptopotable = std::make_shared<CiscoEigrpMib::Ceigrptopotable>();
        }
        return ceigrptopotable;
    }

    if(child_yang_name == "cEigrpTraffStatsTable")
    {
        if(ceigrptraffstatstable == nullptr)
        {
            ceigrptraffstatstable = std::make_shared<CiscoEigrpMib::Ceigrptraffstatstable>();
        }
        return ceigrptraffstatstable;
    }

    if(child_yang_name == "cEigrpVpnTable")
    {
        if(ceigrpvpntable == nullptr)
        {
            ceigrpvpntable = std::make_shared<CiscoEigrpMib::Ceigrpvpntable>();
        }
        return ceigrpvpntable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceigrpinterfacetable != nullptr)
    {
        children["cEigrpInterfaceTable"] = ceigrpinterfacetable;
    }

    if(ceigrppeertable != nullptr)
    {
        children["cEigrpPeerTable"] = ceigrppeertable;
    }

    if(ceigrptopotable != nullptr)
    {
        children["cEigrpTopoTable"] = ceigrptopotable;
    }

    if(ceigrptraffstatstable != nullptr)
    {
        children["cEigrpTraffStatsTable"] = ceigrptraffstatstable;
    }

    if(ceigrpvpntable != nullptr)
    {
        children["cEigrpVpnTable"] = ceigrpvpntable;
    }

    return children;
}

void CiscoEigrpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEigrpMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoEigrpMib::clone_ptr() const
{
    return std::make_shared<CiscoEigrpMib>();
}

std::string CiscoEigrpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEigrpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEigrpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoEigrpMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEigrpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpInterfaceTable" || name == "cEigrpPeerTable" || name == "cEigrpTopoTable" || name == "cEigrpTraffStatsTable" || name == "cEigrpVpnTable")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpntable()
{
    yang_name = "cEigrpVpnTable"; yang_parent_name = "CISCO-EIGRP-MIB";
}

CiscoEigrpMib::Ceigrpvpntable::~Ceigrpvpntable()
{
}

bool CiscoEigrpMib::Ceigrpvpntable::has_data() const
{
    for (std::size_t index=0; index<ceigrpvpnentry.size(); index++)
    {
        if(ceigrpvpnentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEigrpMib::Ceigrpvpntable::has_operation() const
{
    for (std::size_t index=0; index<ceigrpvpnentry.size(); index++)
    {
        if(ceigrpvpnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEigrpMib::Ceigrpvpntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpVpnTable";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrpvpntable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrpvpntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpVpnEntry")
    {
        for(auto const & c : ceigrpvpnentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry>();
        c->parent = this;
        ceigrpvpnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrpvpntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceigrpvpnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEigrpMib::Ceigrpvpntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEigrpMib::Ceigrpvpntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEigrpMib::Ceigrpvpntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnEntry")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::Ceigrpvpnentry()
    :
    ceigrpvpnid{YType::uint32, "cEigrpVpnId"},
    ceigrpvpnname{YType::str, "cEigrpVpnName"}
{
    yang_name = "cEigrpVpnEntry"; yang_parent_name = "cEigrpVpnTable";
}

CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::~Ceigrpvpnentry()
{
}

bool CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::has_data() const
{
    return ceigrpvpnid.is_set
	|| ceigrpvpnname.is_set;
}

bool CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpvpnname.yfilter);
}

std::string CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpVpnEntry" <<"[cEigrpVpnId='" <<ceigrpvpnid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpVpnTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpvpnname.is_set || is_set(ceigrpvpnname.yfilter)) leaf_name_data.push_back(ceigrpvpnname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpVpnName")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatstable()
{
    yang_name = "cEigrpTraffStatsTable"; yang_parent_name = "CISCO-EIGRP-MIB";
}

CiscoEigrpMib::Ceigrptraffstatstable::~Ceigrptraffstatstable()
{
}

bool CiscoEigrpMib::Ceigrptraffstatstable::has_data() const
{
    for (std::size_t index=0; index<ceigrptraffstatsentry.size(); index++)
    {
        if(ceigrptraffstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEigrpMib::Ceigrptraffstatstable::has_operation() const
{
    for (std::size_t index=0; index<ceigrptraffstatsentry.size(); index++)
    {
        if(ceigrptraffstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEigrpMib::Ceigrptraffstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTraffStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrptraffstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrptraffstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpTraffStatsEntry")
    {
        for(auto const & c : ceigrptraffstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry>();
        c->parent = this;
        ceigrptraffstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrptraffstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceigrptraffstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEigrpMib::Ceigrptraffstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEigrpMib::Ceigrptraffstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEigrpMib::Ceigrptraffstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpTraffStatsEntry")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::Ceigrptraffstatsentry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::uint32, "cEigrpAsNumber"},
    ceigrpacksrcvd{YType::uint32, "cEigrpAcksRcvd"},
    ceigrpackssent{YType::uint32, "cEigrpAcksSent"},
    ceigrpasrouterid{YType::str, "cEigrpAsRouterId"},
    ceigrpasrouteridtype{YType::enumeration, "cEigrpAsRouterIdType"},
    ceigrpheadserial{YType::uint64, "cEigrpHeadSerial"},
    ceigrphellosrcvd{YType::uint32, "cEigrpHellosRcvd"},
    ceigrphellossent{YType::uint32, "cEigrpHellosSent"},
    ceigrpinputqdrops{YType::uint32, "cEigrpInputQDrops"},
    ceigrpinputqhighmark{YType::uint32, "cEigrpInputQHighMark"},
    ceigrpnbrcount{YType::uint32, "cEigrpNbrCount"},
    ceigrpnextserial{YType::uint64, "cEigrpNextSerial"},
    ceigrpqueriesrcvd{YType::uint32, "cEigrpQueriesRcvd"},
    ceigrpqueriessent{YType::uint32, "cEigrpQueriesSent"},
    ceigrprepliesrcvd{YType::uint32, "cEigrpRepliesRcvd"},
    ceigrprepliessent{YType::uint32, "cEigrpRepliesSent"},
    ceigrpsiaqueriesrcvd{YType::uint32, "cEigrpSiaQueriesRcvd"},
    ceigrpsiaqueriessent{YType::uint32, "cEigrpSiaQueriesSent"},
    ceigrptoporoutes{YType::uint32, "cEigrpTopoRoutes"},
    ceigrpupdatesrcvd{YType::uint32, "cEigrpUpdatesRcvd"},
    ceigrpupdatessent{YType::uint32, "cEigrpUpdatesSent"},
    ceigrpxmitdummies{YType::uint32, "cEigrpXmitDummies"},
    ceigrpxmitpendreplies{YType::uint32, "cEigrpXmitPendReplies"}
{
    yang_name = "cEigrpTraffStatsEntry"; yang_parent_name = "cEigrpTraffStatsTable";
}

CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::~Ceigrptraffstatsentry()
{
}

bool CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::has_data() const
{
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ceigrpacksrcvd.is_set
	|| ceigrpackssent.is_set
	|| ceigrpasrouterid.is_set
	|| ceigrpasrouteridtype.is_set
	|| ceigrpheadserial.is_set
	|| ceigrphellosrcvd.is_set
	|| ceigrphellossent.is_set
	|| ceigrpinputqdrops.is_set
	|| ceigrpinputqhighmark.is_set
	|| ceigrpnbrcount.is_set
	|| ceigrpnextserial.is_set
	|| ceigrpqueriesrcvd.is_set
	|| ceigrpqueriessent.is_set
	|| ceigrprepliesrcvd.is_set
	|| ceigrprepliessent.is_set
	|| ceigrpsiaqueriesrcvd.is_set
	|| ceigrpsiaqueriessent.is_set
	|| ceigrptoporoutes.is_set
	|| ceigrpupdatesrcvd.is_set
	|| ceigrpupdatessent.is_set
	|| ceigrpxmitdummies.is_set
	|| ceigrpxmitpendreplies.is_set;
}

bool CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ceigrpacksrcvd.yfilter)
	|| ydk::is_set(ceigrpackssent.yfilter)
	|| ydk::is_set(ceigrpasrouterid.yfilter)
	|| ydk::is_set(ceigrpasrouteridtype.yfilter)
	|| ydk::is_set(ceigrpheadserial.yfilter)
	|| ydk::is_set(ceigrphellosrcvd.yfilter)
	|| ydk::is_set(ceigrphellossent.yfilter)
	|| ydk::is_set(ceigrpinputqdrops.yfilter)
	|| ydk::is_set(ceigrpinputqhighmark.yfilter)
	|| ydk::is_set(ceigrpnbrcount.yfilter)
	|| ydk::is_set(ceigrpnextserial.yfilter)
	|| ydk::is_set(ceigrpqueriesrcvd.yfilter)
	|| ydk::is_set(ceigrpqueriessent.yfilter)
	|| ydk::is_set(ceigrprepliesrcvd.yfilter)
	|| ydk::is_set(ceigrprepliessent.yfilter)
	|| ydk::is_set(ceigrpsiaqueriesrcvd.yfilter)
	|| ydk::is_set(ceigrpsiaqueriessent.yfilter)
	|| ydk::is_set(ceigrptoporoutes.yfilter)
	|| ydk::is_set(ceigrpupdatesrcvd.yfilter)
	|| ydk::is_set(ceigrpupdatessent.yfilter)
	|| ydk::is_set(ceigrpxmitdummies.yfilter)
	|| ydk::is_set(ceigrpxmitpendreplies.yfilter);
}

std::string CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTraffStatsEntry" <<"[cEigrpVpnId='" <<ceigrpvpnid <<"']" <<"[cEigrpAsNumber='" <<ceigrpasnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpTraffStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrpacksrcvd.is_set || is_set(ceigrpacksrcvd.yfilter)) leaf_name_data.push_back(ceigrpacksrcvd.get_name_leafdata());
    if (ceigrpackssent.is_set || is_set(ceigrpackssent.yfilter)) leaf_name_data.push_back(ceigrpackssent.get_name_leafdata());
    if (ceigrpasrouterid.is_set || is_set(ceigrpasrouterid.yfilter)) leaf_name_data.push_back(ceigrpasrouterid.get_name_leafdata());
    if (ceigrpasrouteridtype.is_set || is_set(ceigrpasrouteridtype.yfilter)) leaf_name_data.push_back(ceigrpasrouteridtype.get_name_leafdata());
    if (ceigrpheadserial.is_set || is_set(ceigrpheadserial.yfilter)) leaf_name_data.push_back(ceigrpheadserial.get_name_leafdata());
    if (ceigrphellosrcvd.is_set || is_set(ceigrphellosrcvd.yfilter)) leaf_name_data.push_back(ceigrphellosrcvd.get_name_leafdata());
    if (ceigrphellossent.is_set || is_set(ceigrphellossent.yfilter)) leaf_name_data.push_back(ceigrphellossent.get_name_leafdata());
    if (ceigrpinputqdrops.is_set || is_set(ceigrpinputqdrops.yfilter)) leaf_name_data.push_back(ceigrpinputqdrops.get_name_leafdata());
    if (ceigrpinputqhighmark.is_set || is_set(ceigrpinputqhighmark.yfilter)) leaf_name_data.push_back(ceigrpinputqhighmark.get_name_leafdata());
    if (ceigrpnbrcount.is_set || is_set(ceigrpnbrcount.yfilter)) leaf_name_data.push_back(ceigrpnbrcount.get_name_leafdata());
    if (ceigrpnextserial.is_set || is_set(ceigrpnextserial.yfilter)) leaf_name_data.push_back(ceigrpnextserial.get_name_leafdata());
    if (ceigrpqueriesrcvd.is_set || is_set(ceigrpqueriesrcvd.yfilter)) leaf_name_data.push_back(ceigrpqueriesrcvd.get_name_leafdata());
    if (ceigrpqueriessent.is_set || is_set(ceigrpqueriessent.yfilter)) leaf_name_data.push_back(ceigrpqueriessent.get_name_leafdata());
    if (ceigrprepliesrcvd.is_set || is_set(ceigrprepliesrcvd.yfilter)) leaf_name_data.push_back(ceigrprepliesrcvd.get_name_leafdata());
    if (ceigrprepliessent.is_set || is_set(ceigrprepliessent.yfilter)) leaf_name_data.push_back(ceigrprepliessent.get_name_leafdata());
    if (ceigrpsiaqueriesrcvd.is_set || is_set(ceigrpsiaqueriesrcvd.yfilter)) leaf_name_data.push_back(ceigrpsiaqueriesrcvd.get_name_leafdata());
    if (ceigrpsiaqueriessent.is_set || is_set(ceigrpsiaqueriessent.yfilter)) leaf_name_data.push_back(ceigrpsiaqueriessent.get_name_leafdata());
    if (ceigrptoporoutes.is_set || is_set(ceigrptoporoutes.yfilter)) leaf_name_data.push_back(ceigrptoporoutes.get_name_leafdata());
    if (ceigrpupdatesrcvd.is_set || is_set(ceigrpupdatesrcvd.yfilter)) leaf_name_data.push_back(ceigrpupdatesrcvd.get_name_leafdata());
    if (ceigrpupdatessent.is_set || is_set(ceigrpupdatessent.yfilter)) leaf_name_data.push_back(ceigrpupdatessent.get_name_leafdata());
    if (ceigrpxmitdummies.is_set || is_set(ceigrpxmitdummies.yfilter)) leaf_name_data.push_back(ceigrpxmitdummies.get_name_leafdata());
    if (ceigrpxmitpendreplies.is_set || is_set(ceigrpxmitpendreplies.yfilter)) leaf_name_data.push_back(ceigrpxmitpendreplies.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cEigrpAcksRcvd")
    {
        ceigrpacksrcvd = value;
        ceigrpacksrcvd.value_namespace = name_space;
        ceigrpacksrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAcksSent")
    {
        ceigrpackssent = value;
        ceigrpackssent.value_namespace = name_space;
        ceigrpackssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsRouterId")
    {
        ceigrpasrouterid = value;
        ceigrpasrouterid.value_namespace = name_space;
        ceigrpasrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAsRouterIdType")
    {
        ceigrpasrouteridtype = value;
        ceigrpasrouteridtype.value_namespace = name_space;
        ceigrpasrouteridtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHeadSerial")
    {
        ceigrpheadserial = value;
        ceigrpheadserial.value_namespace = name_space;
        ceigrpheadserial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHellosRcvd")
    {
        ceigrphellosrcvd = value;
        ceigrphellosrcvd.value_namespace = name_space;
        ceigrphellosrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHellosSent")
    {
        ceigrphellossent = value;
        ceigrphellossent.value_namespace = name_space;
        ceigrphellossent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpInputQDrops")
    {
        ceigrpinputqdrops = value;
        ceigrpinputqdrops.value_namespace = name_space;
        ceigrpinputqdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpInputQHighMark")
    {
        ceigrpinputqhighmark = value;
        ceigrpinputqhighmark.value_namespace = name_space;
        ceigrpinputqhighmark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNbrCount")
    {
        ceigrpnbrcount = value;
        ceigrpnbrcount.value_namespace = name_space;
        ceigrpnbrcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextSerial")
    {
        ceigrpnextserial = value;
        ceigrpnextserial.value_namespace = name_space;
        ceigrpnextserial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpQueriesRcvd")
    {
        ceigrpqueriesrcvd = value;
        ceigrpqueriesrcvd.value_namespace = name_space;
        ceigrpqueriesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpQueriesSent")
    {
        ceigrpqueriessent = value;
        ceigrpqueriessent.value_namespace = name_space;
        ceigrpqueriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRepliesRcvd")
    {
        ceigrprepliesrcvd = value;
        ceigrprepliesrcvd.value_namespace = name_space;
        ceigrprepliesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRepliesSent")
    {
        ceigrprepliessent = value;
        ceigrprepliessent.value_namespace = name_space;
        ceigrprepliessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpSiaQueriesRcvd")
    {
        ceigrpsiaqueriesrcvd = value;
        ceigrpsiaqueriesrcvd.value_namespace = name_space;
        ceigrpsiaqueriesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpSiaQueriesSent")
    {
        ceigrpsiaqueriessent = value;
        ceigrpsiaqueriessent.value_namespace = name_space;
        ceigrpsiaqueriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpTopoRoutes")
    {
        ceigrptoporoutes = value;
        ceigrptoporoutes.value_namespace = name_space;
        ceigrptoporoutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUpdatesRcvd")
    {
        ceigrpupdatesrcvd = value;
        ceigrpupdatesrcvd.value_namespace = name_space;
        ceigrpupdatesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUpdatesSent")
    {
        ceigrpupdatessent = value;
        ceigrpupdatessent.value_namespace = name_space;
        ceigrpupdatessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitDummies")
    {
        ceigrpxmitdummies = value;
        ceigrpxmitdummies.value_namespace = name_space;
        ceigrpxmitdummies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitPendReplies")
    {
        ceigrpxmitpendreplies = value;
        ceigrpxmitpendreplies.value_namespace = name_space;
        ceigrpxmitpendreplies.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber.yfilter = yfilter;
    }
    if(value_path == "cEigrpAcksRcvd")
    {
        ceigrpacksrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpAcksSent")
    {
        ceigrpackssent.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsRouterId")
    {
        ceigrpasrouterid.yfilter = yfilter;
    }
    if(value_path == "cEigrpAsRouterIdType")
    {
        ceigrpasrouteridtype.yfilter = yfilter;
    }
    if(value_path == "cEigrpHeadSerial")
    {
        ceigrpheadserial.yfilter = yfilter;
    }
    if(value_path == "cEigrpHellosRcvd")
    {
        ceigrphellosrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpHellosSent")
    {
        ceigrphellossent.yfilter = yfilter;
    }
    if(value_path == "cEigrpInputQDrops")
    {
        ceigrpinputqdrops.yfilter = yfilter;
    }
    if(value_path == "cEigrpInputQHighMark")
    {
        ceigrpinputqhighmark.yfilter = yfilter;
    }
    if(value_path == "cEigrpNbrCount")
    {
        ceigrpnbrcount.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextSerial")
    {
        ceigrpnextserial.yfilter = yfilter;
    }
    if(value_path == "cEigrpQueriesRcvd")
    {
        ceigrpqueriesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpQueriesSent")
    {
        ceigrpqueriessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpRepliesRcvd")
    {
        ceigrprepliesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpRepliesSent")
    {
        ceigrprepliessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpSiaQueriesRcvd")
    {
        ceigrpsiaqueriesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpSiaQueriesSent")
    {
        ceigrpsiaqueriessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpTopoRoutes")
    {
        ceigrptoporoutes.yfilter = yfilter;
    }
    if(value_path == "cEigrpUpdatesRcvd")
    {
        ceigrpupdatesrcvd.yfilter = yfilter;
    }
    if(value_path == "cEigrpUpdatesSent")
    {
        ceigrpupdatessent.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitDummies")
    {
        ceigrpxmitdummies.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitPendReplies")
    {
        ceigrpxmitpendreplies.yfilter = yfilter;
    }
}

bool CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "cEigrpAcksRcvd" || name == "cEigrpAcksSent" || name == "cEigrpAsRouterId" || name == "cEigrpAsRouterIdType" || name == "cEigrpHeadSerial" || name == "cEigrpHellosRcvd" || name == "cEigrpHellosSent" || name == "cEigrpInputQDrops" || name == "cEigrpInputQHighMark" || name == "cEigrpNbrCount" || name == "cEigrpNextSerial" || name == "cEigrpQueriesRcvd" || name == "cEigrpQueriesSent" || name == "cEigrpRepliesRcvd" || name == "cEigrpRepliesSent" || name == "cEigrpSiaQueriesRcvd" || name == "cEigrpSiaQueriesSent" || name == "cEigrpTopoRoutes" || name == "cEigrpUpdatesRcvd" || name == "cEigrpUpdatesSent" || name == "cEigrpXmitDummies" || name == "cEigrpXmitPendReplies")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrptopotable::Ceigrptopotable()
{
    yang_name = "cEigrpTopoTable"; yang_parent_name = "CISCO-EIGRP-MIB";
}

CiscoEigrpMib::Ceigrptopotable::~Ceigrptopotable()
{
}

bool CiscoEigrpMib::Ceigrptopotable::has_data() const
{
    for (std::size_t index=0; index<ceigrptopoentry.size(); index++)
    {
        if(ceigrptopoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEigrpMib::Ceigrptopotable::has_operation() const
{
    for (std::size_t index=0; index<ceigrptopoentry.size(); index++)
    {
        if(ceigrptopoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEigrpMib::Ceigrptopotable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTopoTable";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrptopotable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrptopotable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpTopoEntry")
    {
        for(auto const & c : ceigrptopoentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry>();
        c->parent = this;
        ceigrptopoentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrptopotable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceigrptopoentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEigrpMib::Ceigrptopotable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEigrpMib::Ceigrptopotable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEigrpMib::Ceigrptopotable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpTopoEntry")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::Ceigrptopoentry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::str, "cEigrpAsNumber"},
    ceigrpdestnettype{YType::enumeration, "cEigrpDestNetType"},
    ceigrpdestnet{YType::str, "cEigrpDestNet"},
    ceigrpdestnetprefixlen{YType::uint32, "cEigrpDestNetPrefixLen"},
    ceigrpactive{YType::boolean, "cEigrpActive"},
    ceigrpdestsuccessors{YType::uint32, "cEigrpDestSuccessors"},
    ceigrpdistance{YType::uint32, "cEigrpDistance"},
    ceigrpfdistance{YType::uint32, "cEigrpFdistance"},
    ceigrpnexthopaddress{YType::str, "cEigrpNextHopAddress"},
    ceigrpnexthopaddresstype{YType::enumeration, "cEigrpNextHopAddressType"},
    ceigrpnexthopinterface{YType::str, "cEigrpNextHopInterface"},
    ceigrpreportdistance{YType::uint32, "cEigrpReportDistance"},
    ceigrprouteoriginaddr{YType::str, "cEigrpRouteOriginAddr"},
    ceigrprouteoriginaddrtype{YType::enumeration, "cEigrpRouteOriginAddrType"},
    ceigrprouteorigintype{YType::str, "cEigrpRouteOriginType"},
    ceigrpstuckinactive{YType::boolean, "cEigrpStuckInActive"}
{
    yang_name = "cEigrpTopoEntry"; yang_parent_name = "cEigrpTopoTable";
}

CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::~Ceigrptopoentry()
{
}

bool CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::has_data() const
{
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ceigrpdestnettype.is_set
	|| ceigrpdestnet.is_set
	|| ceigrpdestnetprefixlen.is_set
	|| ceigrpactive.is_set
	|| ceigrpdestsuccessors.is_set
	|| ceigrpdistance.is_set
	|| ceigrpfdistance.is_set
	|| ceigrpnexthopaddress.is_set
	|| ceigrpnexthopaddresstype.is_set
	|| ceigrpnexthopinterface.is_set
	|| ceigrpreportdistance.is_set
	|| ceigrprouteoriginaddr.is_set
	|| ceigrprouteoriginaddrtype.is_set
	|| ceigrprouteorigintype.is_set
	|| ceigrpstuckinactive.is_set;
}

bool CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ceigrpdestnettype.yfilter)
	|| ydk::is_set(ceigrpdestnet.yfilter)
	|| ydk::is_set(ceigrpdestnetprefixlen.yfilter)
	|| ydk::is_set(ceigrpactive.yfilter)
	|| ydk::is_set(ceigrpdestsuccessors.yfilter)
	|| ydk::is_set(ceigrpdistance.yfilter)
	|| ydk::is_set(ceigrpfdistance.yfilter)
	|| ydk::is_set(ceigrpnexthopaddress.yfilter)
	|| ydk::is_set(ceigrpnexthopaddresstype.yfilter)
	|| ydk::is_set(ceigrpnexthopinterface.yfilter)
	|| ydk::is_set(ceigrpreportdistance.yfilter)
	|| ydk::is_set(ceigrprouteoriginaddr.yfilter)
	|| ydk::is_set(ceigrprouteoriginaddrtype.yfilter)
	|| ydk::is_set(ceigrprouteorigintype.yfilter)
	|| ydk::is_set(ceigrpstuckinactive.yfilter);
}

std::string CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpTopoEntry" <<"[cEigrpVpnId='" <<ceigrpvpnid <<"']" <<"[cEigrpAsNumber='" <<ceigrpasnumber <<"']" <<"[cEigrpDestNetType='" <<ceigrpdestnettype <<"']" <<"[cEigrpDestNet='" <<ceigrpdestnet <<"']" <<"[cEigrpDestNetPrefixLen='" <<ceigrpdestnetprefixlen <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpTopoTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrpdestnettype.is_set || is_set(ceigrpdestnettype.yfilter)) leaf_name_data.push_back(ceigrpdestnettype.get_name_leafdata());
    if (ceigrpdestnet.is_set || is_set(ceigrpdestnet.yfilter)) leaf_name_data.push_back(ceigrpdestnet.get_name_leafdata());
    if (ceigrpdestnetprefixlen.is_set || is_set(ceigrpdestnetprefixlen.yfilter)) leaf_name_data.push_back(ceigrpdestnetprefixlen.get_name_leafdata());
    if (ceigrpactive.is_set || is_set(ceigrpactive.yfilter)) leaf_name_data.push_back(ceigrpactive.get_name_leafdata());
    if (ceigrpdestsuccessors.is_set || is_set(ceigrpdestsuccessors.yfilter)) leaf_name_data.push_back(ceigrpdestsuccessors.get_name_leafdata());
    if (ceigrpdistance.is_set || is_set(ceigrpdistance.yfilter)) leaf_name_data.push_back(ceigrpdistance.get_name_leafdata());
    if (ceigrpfdistance.is_set || is_set(ceigrpfdistance.yfilter)) leaf_name_data.push_back(ceigrpfdistance.get_name_leafdata());
    if (ceigrpnexthopaddress.is_set || is_set(ceigrpnexthopaddress.yfilter)) leaf_name_data.push_back(ceigrpnexthopaddress.get_name_leafdata());
    if (ceigrpnexthopaddresstype.is_set || is_set(ceigrpnexthopaddresstype.yfilter)) leaf_name_data.push_back(ceigrpnexthopaddresstype.get_name_leafdata());
    if (ceigrpnexthopinterface.is_set || is_set(ceigrpnexthopinterface.yfilter)) leaf_name_data.push_back(ceigrpnexthopinterface.get_name_leafdata());
    if (ceigrpreportdistance.is_set || is_set(ceigrpreportdistance.yfilter)) leaf_name_data.push_back(ceigrpreportdistance.get_name_leafdata());
    if (ceigrprouteoriginaddr.is_set || is_set(ceigrprouteoriginaddr.yfilter)) leaf_name_data.push_back(ceigrprouteoriginaddr.get_name_leafdata());
    if (ceigrprouteoriginaddrtype.is_set || is_set(ceigrprouteoriginaddrtype.yfilter)) leaf_name_data.push_back(ceigrprouteoriginaddrtype.get_name_leafdata());
    if (ceigrprouteorigintype.is_set || is_set(ceigrprouteorigintype.yfilter)) leaf_name_data.push_back(ceigrprouteorigintype.get_name_leafdata());
    if (ceigrpstuckinactive.is_set || is_set(ceigrpstuckinactive.yfilter)) leaf_name_data.push_back(ceigrpstuckinactive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cEigrpDestSuccessors")
    {
        ceigrpdestsuccessors = value;
        ceigrpdestsuccessors.value_namespace = name_space;
        ceigrpdestsuccessors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpDistance")
    {
        ceigrpdistance = value;
        ceigrpdistance.value_namespace = name_space;
        ceigrpdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpFdistance")
    {
        ceigrpfdistance = value;
        ceigrpfdistance.value_namespace = name_space;
        ceigrpfdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextHopAddress")
    {
        ceigrpnexthopaddress = value;
        ceigrpnexthopaddress.value_namespace = name_space;
        ceigrpnexthopaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextHopAddressType")
    {
        ceigrpnexthopaddresstype = value;
        ceigrpnexthopaddresstype.value_namespace = name_space;
        ceigrpnexthopaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpNextHopInterface")
    {
        ceigrpnexthopinterface = value;
        ceigrpnexthopinterface.value_namespace = name_space;
        ceigrpnexthopinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpReportDistance")
    {
        ceigrpreportdistance = value;
        ceigrpreportdistance.value_namespace = name_space;
        ceigrpreportdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRouteOriginAddr")
    {
        ceigrprouteoriginaddr = value;
        ceigrprouteoriginaddr.value_namespace = name_space;
        ceigrprouteoriginaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRouteOriginAddrType")
    {
        ceigrprouteoriginaddrtype = value;
        ceigrprouteoriginaddrtype.value_namespace = name_space;
        ceigrprouteoriginaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRouteOriginType")
    {
        ceigrprouteorigintype = value;
        ceigrprouteorigintype.value_namespace = name_space;
        ceigrprouteorigintype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpStuckInActive")
    {
        ceigrpstuckinactive = value;
        ceigrpstuckinactive.value_namespace = name_space;
        ceigrpstuckinactive.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cEigrpDestSuccessors")
    {
        ceigrpdestsuccessors.yfilter = yfilter;
    }
    if(value_path == "cEigrpDistance")
    {
        ceigrpdistance.yfilter = yfilter;
    }
    if(value_path == "cEigrpFdistance")
    {
        ceigrpfdistance.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextHopAddress")
    {
        ceigrpnexthopaddress.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextHopAddressType")
    {
        ceigrpnexthopaddresstype.yfilter = yfilter;
    }
    if(value_path == "cEigrpNextHopInterface")
    {
        ceigrpnexthopinterface.yfilter = yfilter;
    }
    if(value_path == "cEigrpReportDistance")
    {
        ceigrpreportdistance.yfilter = yfilter;
    }
    if(value_path == "cEigrpRouteOriginAddr")
    {
        ceigrprouteoriginaddr.yfilter = yfilter;
    }
    if(value_path == "cEigrpRouteOriginAddrType")
    {
        ceigrprouteoriginaddrtype.yfilter = yfilter;
    }
    if(value_path == "cEigrpRouteOriginType")
    {
        ceigrprouteorigintype.yfilter = yfilter;
    }
    if(value_path == "cEigrpStuckInActive")
    {
        ceigrpstuckinactive.yfilter = yfilter;
    }
}

bool CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "cEigrpDestNetType" || name == "cEigrpDestNet" || name == "cEigrpDestNetPrefixLen" || name == "cEigrpActive" || name == "cEigrpDestSuccessors" || name == "cEigrpDistance" || name == "cEigrpFdistance" || name == "cEigrpNextHopAddress" || name == "cEigrpNextHopAddressType" || name == "cEigrpNextHopInterface" || name == "cEigrpReportDistance" || name == "cEigrpRouteOriginAddr" || name == "cEigrpRouteOriginAddrType" || name == "cEigrpRouteOriginType" || name == "cEigrpStuckInActive")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrppeertable::Ceigrppeertable()
{
    yang_name = "cEigrpPeerTable"; yang_parent_name = "CISCO-EIGRP-MIB";
}

CiscoEigrpMib::Ceigrppeertable::~Ceigrppeertable()
{
}

bool CiscoEigrpMib::Ceigrppeertable::has_data() const
{
    for (std::size_t index=0; index<ceigrppeerentry.size(); index++)
    {
        if(ceigrppeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEigrpMib::Ceigrppeertable::has_operation() const
{
    for (std::size_t index=0; index<ceigrppeerentry.size(); index++)
    {
        if(ceigrppeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEigrpMib::Ceigrppeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpPeerTable";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrppeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrppeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpPeerEntry")
    {
        for(auto const & c : ceigrppeerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry>();
        c->parent = this;
        ceigrppeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrppeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceigrppeerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEigrpMib::Ceigrppeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEigrpMib::Ceigrppeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEigrpMib::Ceigrppeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpPeerEntry")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::Ceigrppeerentry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::str, "cEigrpAsNumber"},
    ceigrphandle{YType::uint32, "cEigrpHandle"},
    ceigrpholdtime{YType::uint32, "cEigrpHoldTime"},
    ceigrplastseq{YType::uint32, "cEigrpLastSeq"},
    ceigrppeeraddr{YType::str, "cEigrpPeerAddr"},
    ceigrppeeraddrtype{YType::enumeration, "cEigrpPeerAddrType"},
    ceigrppeerifindex{YType::int32, "cEigrpPeerIfIndex"},
    ceigrppktsenqueued{YType::uint32, "cEigrpPktsEnqueued"},
    ceigrpretrans{YType::uint32, "cEigrpRetrans"},
    ceigrpretries{YType::uint32, "cEigrpRetries"},
    ceigrprto{YType::uint32, "cEigrpRto"},
    ceigrpsrtt{YType::uint32, "cEigrpSrtt"},
    ceigrpuptime{YType::str, "cEigrpUpTime"},
    ceigrpversion{YType::str, "cEigrpVersion"}
{
    yang_name = "cEigrpPeerEntry"; yang_parent_name = "cEigrpPeerTable";
}

CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::~Ceigrppeerentry()
{
}

bool CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::has_data() const
{
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ceigrphandle.is_set
	|| ceigrpholdtime.is_set
	|| ceigrplastseq.is_set
	|| ceigrppeeraddr.is_set
	|| ceigrppeeraddrtype.is_set
	|| ceigrppeerifindex.is_set
	|| ceigrppktsenqueued.is_set
	|| ceigrpretrans.is_set
	|| ceigrpretries.is_set
	|| ceigrprto.is_set
	|| ceigrpsrtt.is_set
	|| ceigrpuptime.is_set
	|| ceigrpversion.is_set;
}

bool CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ceigrphandle.yfilter)
	|| ydk::is_set(ceigrpholdtime.yfilter)
	|| ydk::is_set(ceigrplastseq.yfilter)
	|| ydk::is_set(ceigrppeeraddr.yfilter)
	|| ydk::is_set(ceigrppeeraddrtype.yfilter)
	|| ydk::is_set(ceigrppeerifindex.yfilter)
	|| ydk::is_set(ceigrppktsenqueued.yfilter)
	|| ydk::is_set(ceigrpretrans.yfilter)
	|| ydk::is_set(ceigrpretries.yfilter)
	|| ydk::is_set(ceigrprto.yfilter)
	|| ydk::is_set(ceigrpsrtt.yfilter)
	|| ydk::is_set(ceigrpuptime.yfilter)
	|| ydk::is_set(ceigrpversion.yfilter);
}

std::string CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpPeerEntry" <<"[cEigrpVpnId='" <<ceigrpvpnid <<"']" <<"[cEigrpAsNumber='" <<ceigrpasnumber <<"']" <<"[cEigrpHandle='" <<ceigrphandle <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpPeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrphandle.is_set || is_set(ceigrphandle.yfilter)) leaf_name_data.push_back(ceigrphandle.get_name_leafdata());
    if (ceigrpholdtime.is_set || is_set(ceigrpholdtime.yfilter)) leaf_name_data.push_back(ceigrpholdtime.get_name_leafdata());
    if (ceigrplastseq.is_set || is_set(ceigrplastseq.yfilter)) leaf_name_data.push_back(ceigrplastseq.get_name_leafdata());
    if (ceigrppeeraddr.is_set || is_set(ceigrppeeraddr.yfilter)) leaf_name_data.push_back(ceigrppeeraddr.get_name_leafdata());
    if (ceigrppeeraddrtype.is_set || is_set(ceigrppeeraddrtype.yfilter)) leaf_name_data.push_back(ceigrppeeraddrtype.get_name_leafdata());
    if (ceigrppeerifindex.is_set || is_set(ceigrppeerifindex.yfilter)) leaf_name_data.push_back(ceigrppeerifindex.get_name_leafdata());
    if (ceigrppktsenqueued.is_set || is_set(ceigrppktsenqueued.yfilter)) leaf_name_data.push_back(ceigrppktsenqueued.get_name_leafdata());
    if (ceigrpretrans.is_set || is_set(ceigrpretrans.yfilter)) leaf_name_data.push_back(ceigrpretrans.get_name_leafdata());
    if (ceigrpretries.is_set || is_set(ceigrpretries.yfilter)) leaf_name_data.push_back(ceigrpretries.get_name_leafdata());
    if (ceigrprto.is_set || is_set(ceigrprto.yfilter)) leaf_name_data.push_back(ceigrprto.get_name_leafdata());
    if (ceigrpsrtt.is_set || is_set(ceigrpsrtt.yfilter)) leaf_name_data.push_back(ceigrpsrtt.get_name_leafdata());
    if (ceigrpuptime.is_set || is_set(ceigrpuptime.yfilter)) leaf_name_data.push_back(ceigrpuptime.get_name_leafdata());
    if (ceigrpversion.is_set || is_set(ceigrpversion.yfilter)) leaf_name_data.push_back(ceigrpversion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cEigrpHoldTime")
    {
        ceigrpholdtime = value;
        ceigrpholdtime.value_namespace = name_space;
        ceigrpholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpLastSeq")
    {
        ceigrplastseq = value;
        ceigrplastseq.value_namespace = name_space;
        ceigrplastseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPeerAddr")
    {
        ceigrppeeraddr = value;
        ceigrppeeraddr.value_namespace = name_space;
        ceigrppeeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPeerAddrType")
    {
        ceigrppeeraddrtype = value;
        ceigrppeeraddrtype.value_namespace = name_space;
        ceigrppeeraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPeerIfIndex")
    {
        ceigrppeerifindex = value;
        ceigrppeerifindex.value_namespace = name_space;
        ceigrppeerifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPktsEnqueued")
    {
        ceigrppktsenqueued = value;
        ceigrppktsenqueued.value_namespace = name_space;
        ceigrppktsenqueued.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cEigrpRto")
    {
        ceigrprto = value;
        ceigrprto.value_namespace = name_space;
        ceigrprto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpSrtt")
    {
        ceigrpsrtt = value;
        ceigrpsrtt.value_namespace = name_space;
        ceigrpsrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUpTime")
    {
        ceigrpuptime = value;
        ceigrpuptime.value_namespace = name_space;
        ceigrpuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpVersion")
    {
        ceigrpversion = value;
        ceigrpversion.value_namespace = name_space;
        ceigrpversion.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cEigrpHoldTime")
    {
        ceigrpholdtime.yfilter = yfilter;
    }
    if(value_path == "cEigrpLastSeq")
    {
        ceigrplastseq.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerAddr")
    {
        ceigrppeeraddr.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerAddrType")
    {
        ceigrppeeraddrtype.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerIfIndex")
    {
        ceigrppeerifindex.yfilter = yfilter;
    }
    if(value_path == "cEigrpPktsEnqueued")
    {
        ceigrppktsenqueued.yfilter = yfilter;
    }
    if(value_path == "cEigrpRetrans")
    {
        ceigrpretrans.yfilter = yfilter;
    }
    if(value_path == "cEigrpRetries")
    {
        ceigrpretries.yfilter = yfilter;
    }
    if(value_path == "cEigrpRto")
    {
        ceigrprto.yfilter = yfilter;
    }
    if(value_path == "cEigrpSrtt")
    {
        ceigrpsrtt.yfilter = yfilter;
    }
    if(value_path == "cEigrpUpTime")
    {
        ceigrpuptime.yfilter = yfilter;
    }
    if(value_path == "cEigrpVersion")
    {
        ceigrpversion.yfilter = yfilter;
    }
}

bool CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "cEigrpHandle" || name == "cEigrpHoldTime" || name == "cEigrpLastSeq" || name == "cEigrpPeerAddr" || name == "cEigrpPeerAddrType" || name == "cEigrpPeerIfIndex" || name == "cEigrpPktsEnqueued" || name == "cEigrpRetrans" || name == "cEigrpRetries" || name == "cEigrpRto" || name == "cEigrpSrtt" || name == "cEigrpUpTime" || name == "cEigrpVersion")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfacetable()
{
    yang_name = "cEigrpInterfaceTable"; yang_parent_name = "CISCO-EIGRP-MIB";
}

CiscoEigrpMib::Ceigrpinterfacetable::~Ceigrpinterfacetable()
{
}

bool CiscoEigrpMib::Ceigrpinterfacetable::has_data() const
{
    for (std::size_t index=0; index<ceigrpinterfaceentry.size(); index++)
    {
        if(ceigrpinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEigrpMib::Ceigrpinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<ceigrpinterfaceentry.size(); index++)
    {
        if(ceigrpinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEigrpMib::Ceigrpinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpInterfaceTable";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrpinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrpinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEigrpInterfaceEntry")
    {
        for(auto const & c : ceigrpinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry>();
        c->parent = this;
        ceigrpinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrpinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceigrpinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEigrpMib::Ceigrpinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEigrpMib::Ceigrpinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEigrpMib::Ceigrpinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpInterfaceEntry")
        return true;
    return false;
}

CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::Ceigrpinterfaceentry()
    :
    ceigrpvpnid{YType::str, "cEigrpVpnId"},
    ceigrpasnumber{YType::str, "cEigrpAsNumber"},
    ifindex{YType::str, "ifIndex"},
    ceigrpackssuppressed{YType::uint32, "cEigrpAcksSuppressed"},
    ceigrpauthkeychain{YType::str, "cEigrpAuthKeyChain"},
    ceigrpauthmode{YType::enumeration, "cEigrpAuthMode"},
    ceigrpcrpkts{YType::uint32, "cEigrpCRpkts"},
    ceigrphellointerval{YType::uint32, "cEigrpHelloInterval"},
    ceigrpmcastexcepts{YType::uint32, "cEigrpMcastExcepts"},
    ceigrpmeansrtt{YType::uint32, "cEigrpMeanSrtt"},
    ceigrpmflowtimer{YType::uint32, "cEigrpMFlowTimer"},
    ceigrpoosrvcd{YType::uint32, "cEigrpOOSrvcd"},
    ceigrppacingreliable{YType::uint32, "cEigrpPacingReliable"},
    ceigrppacingunreliable{YType::uint32, "cEigrpPacingUnreliable"},
    ceigrppeercount{YType::uint32, "cEigrpPeerCount"},
    ceigrppendingroutes{YType::uint32, "cEigrpPendingRoutes"},
    ceigrpretranssent{YType::uint32, "cEigrpRetransSent"},
    ceigrprmcasts{YType::uint32, "cEigrpRMcasts"},
    ceigrprucasts{YType::uint32, "cEigrpRUcasts"},
    ceigrpumcasts{YType::uint32, "cEigrpUMcasts"},
    ceigrpuucasts{YType::uint32, "cEigrpUUcasts"},
    ceigrpxmitnextserial{YType::uint64, "cEigrpXmitNextSerial"},
    ceigrpxmitreliableq{YType::uint32, "cEigrpXmitReliableQ"},
    ceigrpxmitunreliableq{YType::uint32, "cEigrpXmitUnreliableQ"}
{
    yang_name = "cEigrpInterfaceEntry"; yang_parent_name = "cEigrpInterfaceTable";
}

CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::~Ceigrpinterfaceentry()
{
}

bool CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::has_data() const
{
    return ceigrpvpnid.is_set
	|| ceigrpasnumber.is_set
	|| ifindex.is_set
	|| ceigrpackssuppressed.is_set
	|| ceigrpauthkeychain.is_set
	|| ceigrpauthmode.is_set
	|| ceigrpcrpkts.is_set
	|| ceigrphellointerval.is_set
	|| ceigrpmcastexcepts.is_set
	|| ceigrpmeansrtt.is_set
	|| ceigrpmflowtimer.is_set
	|| ceigrpoosrvcd.is_set
	|| ceigrppacingreliable.is_set
	|| ceigrppacingunreliable.is_set
	|| ceigrppeercount.is_set
	|| ceigrppendingroutes.is_set
	|| ceigrpretranssent.is_set
	|| ceigrprmcasts.is_set
	|| ceigrprucasts.is_set
	|| ceigrpumcasts.is_set
	|| ceigrpuucasts.is_set
	|| ceigrpxmitnextserial.is_set
	|| ceigrpxmitreliableq.is_set
	|| ceigrpxmitunreliableq.is_set;
}

bool CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceigrpvpnid.yfilter)
	|| ydk::is_set(ceigrpasnumber.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ceigrpackssuppressed.yfilter)
	|| ydk::is_set(ceigrpauthkeychain.yfilter)
	|| ydk::is_set(ceigrpauthmode.yfilter)
	|| ydk::is_set(ceigrpcrpkts.yfilter)
	|| ydk::is_set(ceigrphellointerval.yfilter)
	|| ydk::is_set(ceigrpmcastexcepts.yfilter)
	|| ydk::is_set(ceigrpmeansrtt.yfilter)
	|| ydk::is_set(ceigrpmflowtimer.yfilter)
	|| ydk::is_set(ceigrpoosrvcd.yfilter)
	|| ydk::is_set(ceigrppacingreliable.yfilter)
	|| ydk::is_set(ceigrppacingunreliable.yfilter)
	|| ydk::is_set(ceigrppeercount.yfilter)
	|| ydk::is_set(ceigrppendingroutes.yfilter)
	|| ydk::is_set(ceigrpretranssent.yfilter)
	|| ydk::is_set(ceigrprmcasts.yfilter)
	|| ydk::is_set(ceigrprucasts.yfilter)
	|| ydk::is_set(ceigrpumcasts.yfilter)
	|| ydk::is_set(ceigrpuucasts.yfilter)
	|| ydk::is_set(ceigrpxmitnextserial.yfilter)
	|| ydk::is_set(ceigrpxmitreliableq.yfilter)
	|| ydk::is_set(ceigrpxmitunreliableq.yfilter);
}

std::string CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEigrpInterfaceEntry" <<"[cEigrpVpnId='" <<ceigrpvpnid <<"']" <<"[cEigrpAsNumber='" <<ceigrpasnumber <<"']" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EIGRP-MIB:CISCO-EIGRP-MIB/cEigrpInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.yfilter)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.yfilter)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ceigrpackssuppressed.is_set || is_set(ceigrpackssuppressed.yfilter)) leaf_name_data.push_back(ceigrpackssuppressed.get_name_leafdata());
    if (ceigrpauthkeychain.is_set || is_set(ceigrpauthkeychain.yfilter)) leaf_name_data.push_back(ceigrpauthkeychain.get_name_leafdata());
    if (ceigrpauthmode.is_set || is_set(ceigrpauthmode.yfilter)) leaf_name_data.push_back(ceigrpauthmode.get_name_leafdata());
    if (ceigrpcrpkts.is_set || is_set(ceigrpcrpkts.yfilter)) leaf_name_data.push_back(ceigrpcrpkts.get_name_leafdata());
    if (ceigrphellointerval.is_set || is_set(ceigrphellointerval.yfilter)) leaf_name_data.push_back(ceigrphellointerval.get_name_leafdata());
    if (ceigrpmcastexcepts.is_set || is_set(ceigrpmcastexcepts.yfilter)) leaf_name_data.push_back(ceigrpmcastexcepts.get_name_leafdata());
    if (ceigrpmeansrtt.is_set || is_set(ceigrpmeansrtt.yfilter)) leaf_name_data.push_back(ceigrpmeansrtt.get_name_leafdata());
    if (ceigrpmflowtimer.is_set || is_set(ceigrpmflowtimer.yfilter)) leaf_name_data.push_back(ceigrpmflowtimer.get_name_leafdata());
    if (ceigrpoosrvcd.is_set || is_set(ceigrpoosrvcd.yfilter)) leaf_name_data.push_back(ceigrpoosrvcd.get_name_leafdata());
    if (ceigrppacingreliable.is_set || is_set(ceigrppacingreliable.yfilter)) leaf_name_data.push_back(ceigrppacingreliable.get_name_leafdata());
    if (ceigrppacingunreliable.is_set || is_set(ceigrppacingunreliable.yfilter)) leaf_name_data.push_back(ceigrppacingunreliable.get_name_leafdata());
    if (ceigrppeercount.is_set || is_set(ceigrppeercount.yfilter)) leaf_name_data.push_back(ceigrppeercount.get_name_leafdata());
    if (ceigrppendingroutes.is_set || is_set(ceigrppendingroutes.yfilter)) leaf_name_data.push_back(ceigrppendingroutes.get_name_leafdata());
    if (ceigrpretranssent.is_set || is_set(ceigrpretranssent.yfilter)) leaf_name_data.push_back(ceigrpretranssent.get_name_leafdata());
    if (ceigrprmcasts.is_set || is_set(ceigrprmcasts.yfilter)) leaf_name_data.push_back(ceigrprmcasts.get_name_leafdata());
    if (ceigrprucasts.is_set || is_set(ceigrprucasts.yfilter)) leaf_name_data.push_back(ceigrprucasts.get_name_leafdata());
    if (ceigrpumcasts.is_set || is_set(ceigrpumcasts.yfilter)) leaf_name_data.push_back(ceigrpumcasts.get_name_leafdata());
    if (ceigrpuucasts.is_set || is_set(ceigrpuucasts.yfilter)) leaf_name_data.push_back(ceigrpuucasts.get_name_leafdata());
    if (ceigrpxmitnextserial.is_set || is_set(ceigrpxmitnextserial.yfilter)) leaf_name_data.push_back(ceigrpxmitnextserial.get_name_leafdata());
    if (ceigrpxmitreliableq.is_set || is_set(ceigrpxmitreliableq.yfilter)) leaf_name_data.push_back(ceigrpxmitreliableq.get_name_leafdata());
    if (ceigrpxmitunreliableq.is_set || is_set(ceigrpxmitunreliableq.yfilter)) leaf_name_data.push_back(ceigrpxmitunreliableq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cEigrpAcksSuppressed")
    {
        ceigrpackssuppressed = value;
        ceigrpackssuppressed.value_namespace = name_space;
        ceigrpackssuppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAuthKeyChain")
    {
        ceigrpauthkeychain = value;
        ceigrpauthkeychain.value_namespace = name_space;
        ceigrpauthkeychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpAuthMode")
    {
        ceigrpauthmode = value;
        ceigrpauthmode.value_namespace = name_space;
        ceigrpauthmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpCRpkts")
    {
        ceigrpcrpkts = value;
        ceigrpcrpkts.value_namespace = name_space;
        ceigrpcrpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpHelloInterval")
    {
        ceigrphellointerval = value;
        ceigrphellointerval.value_namespace = name_space;
        ceigrphellointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpMcastExcepts")
    {
        ceigrpmcastexcepts = value;
        ceigrpmcastexcepts.value_namespace = name_space;
        ceigrpmcastexcepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpMeanSrtt")
    {
        ceigrpmeansrtt = value;
        ceigrpmeansrtt.value_namespace = name_space;
        ceigrpmeansrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpMFlowTimer")
    {
        ceigrpmflowtimer = value;
        ceigrpmflowtimer.value_namespace = name_space;
        ceigrpmflowtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpOOSrvcd")
    {
        ceigrpoosrvcd = value;
        ceigrpoosrvcd.value_namespace = name_space;
        ceigrpoosrvcd.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cEigrpPeerCount")
    {
        ceigrppeercount = value;
        ceigrppeercount.value_namespace = name_space;
        ceigrppeercount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpPendingRoutes")
    {
        ceigrppendingroutes = value;
        ceigrppendingroutes.value_namespace = name_space;
        ceigrppendingroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRetransSent")
    {
        ceigrpretranssent = value;
        ceigrpretranssent.value_namespace = name_space;
        ceigrpretranssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRMcasts")
    {
        ceigrprmcasts = value;
        ceigrprmcasts.value_namespace = name_space;
        ceigrprmcasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpRUcasts")
    {
        ceigrprucasts = value;
        ceigrprucasts.value_namespace = name_space;
        ceigrprucasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUMcasts")
    {
        ceigrpumcasts = value;
        ceigrpumcasts.value_namespace = name_space;
        ceigrpumcasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpUUcasts")
    {
        ceigrpuucasts = value;
        ceigrpuucasts.value_namespace = name_space;
        ceigrpuucasts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEigrpXmitNextSerial")
    {
        ceigrpxmitnextserial = value;
        ceigrpxmitnextserial.value_namespace = name_space;
        ceigrpxmitnextserial.value_namespace_prefix = name_space_prefix;
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
}

void CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cEigrpAcksSuppressed")
    {
        ceigrpackssuppressed.yfilter = yfilter;
    }
    if(value_path == "cEigrpAuthKeyChain")
    {
        ceigrpauthkeychain.yfilter = yfilter;
    }
    if(value_path == "cEigrpAuthMode")
    {
        ceigrpauthmode.yfilter = yfilter;
    }
    if(value_path == "cEigrpCRpkts")
    {
        ceigrpcrpkts.yfilter = yfilter;
    }
    if(value_path == "cEigrpHelloInterval")
    {
        ceigrphellointerval.yfilter = yfilter;
    }
    if(value_path == "cEigrpMcastExcepts")
    {
        ceigrpmcastexcepts.yfilter = yfilter;
    }
    if(value_path == "cEigrpMeanSrtt")
    {
        ceigrpmeansrtt.yfilter = yfilter;
    }
    if(value_path == "cEigrpMFlowTimer")
    {
        ceigrpmflowtimer.yfilter = yfilter;
    }
    if(value_path == "cEigrpOOSrvcd")
    {
        ceigrpoosrvcd.yfilter = yfilter;
    }
    if(value_path == "cEigrpPacingReliable")
    {
        ceigrppacingreliable.yfilter = yfilter;
    }
    if(value_path == "cEigrpPacingUnreliable")
    {
        ceigrppacingunreliable.yfilter = yfilter;
    }
    if(value_path == "cEigrpPeerCount")
    {
        ceigrppeercount.yfilter = yfilter;
    }
    if(value_path == "cEigrpPendingRoutes")
    {
        ceigrppendingroutes.yfilter = yfilter;
    }
    if(value_path == "cEigrpRetransSent")
    {
        ceigrpretranssent.yfilter = yfilter;
    }
    if(value_path == "cEigrpRMcasts")
    {
        ceigrprmcasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpRUcasts")
    {
        ceigrprucasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpUMcasts")
    {
        ceigrpumcasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpUUcasts")
    {
        ceigrpuucasts.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitNextSerial")
    {
        ceigrpxmitnextserial.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitReliableQ")
    {
        ceigrpxmitreliableq.yfilter = yfilter;
    }
    if(value_path == "cEigrpXmitUnreliableQ")
    {
        ceigrpxmitunreliableq.yfilter = yfilter;
    }
}

bool CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEigrpVpnId" || name == "cEigrpAsNumber" || name == "ifIndex" || name == "cEigrpAcksSuppressed" || name == "cEigrpAuthKeyChain" || name == "cEigrpAuthMode" || name == "cEigrpCRpkts" || name == "cEigrpHelloInterval" || name == "cEigrpMcastExcepts" || name == "cEigrpMeanSrtt" || name == "cEigrpMFlowTimer" || name == "cEigrpOOSrvcd" || name == "cEigrpPacingReliable" || name == "cEigrpPacingUnreliable" || name == "cEigrpPeerCount" || name == "cEigrpPendingRoutes" || name == "cEigrpRetransSent" || name == "cEigrpRMcasts" || name == "cEigrpRUcasts" || name == "cEigrpUMcasts" || name == "cEigrpUUcasts" || name == "cEigrpXmitNextSerial" || name == "cEigrpXmitReliableQ" || name == "cEigrpXmitUnreliableQ")
        return true;
    return false;
}

const Enum::YLeaf CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::Ceigrpauthmode::none {1, "none"};
const Enum::YLeaf CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::Ceigrpauthmode::md5 {2, "md5"};


}
}

