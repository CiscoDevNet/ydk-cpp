
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_EIGRP_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoEigrpMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation);
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

void CiscoEigrpMib::Ceigrpvpntable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceigrpvpnid.operation)
	|| is_set(ceigrpvpnname.operation);
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

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.operation)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpvpnname.is_set || is_set(ceigrpvpnname.operation)) leaf_name_data.push_back(ceigrpvpnname.get_name_leafdata());


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

void CiscoEigrpMib::Ceigrpvpntable::Ceigrpvpnentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
    }
    if(value_path == "cEigrpVpnName")
    {
        ceigrpvpnname = value;
    }
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
    return is_set(operation);
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

void CiscoEigrpMib::Ceigrptraffstatstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceigrpvpnid.operation)
	|| is_set(ceigrpasnumber.operation)
	|| is_set(ceigrpacksrcvd.operation)
	|| is_set(ceigrpackssent.operation)
	|| is_set(ceigrpasrouterid.operation)
	|| is_set(ceigrpasrouteridtype.operation)
	|| is_set(ceigrpheadserial.operation)
	|| is_set(ceigrphellosrcvd.operation)
	|| is_set(ceigrphellossent.operation)
	|| is_set(ceigrpinputqdrops.operation)
	|| is_set(ceigrpinputqhighmark.operation)
	|| is_set(ceigrpnbrcount.operation)
	|| is_set(ceigrpnextserial.operation)
	|| is_set(ceigrpqueriesrcvd.operation)
	|| is_set(ceigrpqueriessent.operation)
	|| is_set(ceigrprepliesrcvd.operation)
	|| is_set(ceigrprepliessent.operation)
	|| is_set(ceigrpsiaqueriesrcvd.operation)
	|| is_set(ceigrpsiaqueriessent.operation)
	|| is_set(ceigrptoporoutes.operation)
	|| is_set(ceigrpupdatesrcvd.operation)
	|| is_set(ceigrpupdatessent.operation)
	|| is_set(ceigrpxmitdummies.operation)
	|| is_set(ceigrpxmitpendreplies.operation);
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

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.operation)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.operation)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrpacksrcvd.is_set || is_set(ceigrpacksrcvd.operation)) leaf_name_data.push_back(ceigrpacksrcvd.get_name_leafdata());
    if (ceigrpackssent.is_set || is_set(ceigrpackssent.operation)) leaf_name_data.push_back(ceigrpackssent.get_name_leafdata());
    if (ceigrpasrouterid.is_set || is_set(ceigrpasrouterid.operation)) leaf_name_data.push_back(ceigrpasrouterid.get_name_leafdata());
    if (ceigrpasrouteridtype.is_set || is_set(ceigrpasrouteridtype.operation)) leaf_name_data.push_back(ceigrpasrouteridtype.get_name_leafdata());
    if (ceigrpheadserial.is_set || is_set(ceigrpheadserial.operation)) leaf_name_data.push_back(ceigrpheadserial.get_name_leafdata());
    if (ceigrphellosrcvd.is_set || is_set(ceigrphellosrcvd.operation)) leaf_name_data.push_back(ceigrphellosrcvd.get_name_leafdata());
    if (ceigrphellossent.is_set || is_set(ceigrphellossent.operation)) leaf_name_data.push_back(ceigrphellossent.get_name_leafdata());
    if (ceigrpinputqdrops.is_set || is_set(ceigrpinputqdrops.operation)) leaf_name_data.push_back(ceigrpinputqdrops.get_name_leafdata());
    if (ceigrpinputqhighmark.is_set || is_set(ceigrpinputqhighmark.operation)) leaf_name_data.push_back(ceigrpinputqhighmark.get_name_leafdata());
    if (ceigrpnbrcount.is_set || is_set(ceigrpnbrcount.operation)) leaf_name_data.push_back(ceigrpnbrcount.get_name_leafdata());
    if (ceigrpnextserial.is_set || is_set(ceigrpnextserial.operation)) leaf_name_data.push_back(ceigrpnextserial.get_name_leafdata());
    if (ceigrpqueriesrcvd.is_set || is_set(ceigrpqueriesrcvd.operation)) leaf_name_data.push_back(ceigrpqueriesrcvd.get_name_leafdata());
    if (ceigrpqueriessent.is_set || is_set(ceigrpqueriessent.operation)) leaf_name_data.push_back(ceigrpqueriessent.get_name_leafdata());
    if (ceigrprepliesrcvd.is_set || is_set(ceigrprepliesrcvd.operation)) leaf_name_data.push_back(ceigrprepliesrcvd.get_name_leafdata());
    if (ceigrprepliessent.is_set || is_set(ceigrprepliessent.operation)) leaf_name_data.push_back(ceigrprepliessent.get_name_leafdata());
    if (ceigrpsiaqueriesrcvd.is_set || is_set(ceigrpsiaqueriesrcvd.operation)) leaf_name_data.push_back(ceigrpsiaqueriesrcvd.get_name_leafdata());
    if (ceigrpsiaqueriessent.is_set || is_set(ceigrpsiaqueriessent.operation)) leaf_name_data.push_back(ceigrpsiaqueriessent.get_name_leafdata());
    if (ceigrptoporoutes.is_set || is_set(ceigrptoporoutes.operation)) leaf_name_data.push_back(ceigrptoporoutes.get_name_leafdata());
    if (ceigrpupdatesrcvd.is_set || is_set(ceigrpupdatesrcvd.operation)) leaf_name_data.push_back(ceigrpupdatesrcvd.get_name_leafdata());
    if (ceigrpupdatessent.is_set || is_set(ceigrpupdatessent.operation)) leaf_name_data.push_back(ceigrpupdatessent.get_name_leafdata());
    if (ceigrpxmitdummies.is_set || is_set(ceigrpxmitdummies.operation)) leaf_name_data.push_back(ceigrpxmitdummies.get_name_leafdata());
    if (ceigrpxmitpendreplies.is_set || is_set(ceigrpxmitpendreplies.operation)) leaf_name_data.push_back(ceigrpxmitpendreplies.get_name_leafdata());


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

void CiscoEigrpMib::Ceigrptraffstatstable::Ceigrptraffstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
    }
    if(value_path == "cEigrpAcksRcvd")
    {
        ceigrpacksrcvd = value;
    }
    if(value_path == "cEigrpAcksSent")
    {
        ceigrpackssent = value;
    }
    if(value_path == "cEigrpAsRouterId")
    {
        ceigrpasrouterid = value;
    }
    if(value_path == "cEigrpAsRouterIdType")
    {
        ceigrpasrouteridtype = value;
    }
    if(value_path == "cEigrpHeadSerial")
    {
        ceigrpheadserial = value;
    }
    if(value_path == "cEigrpHellosRcvd")
    {
        ceigrphellosrcvd = value;
    }
    if(value_path == "cEigrpHellosSent")
    {
        ceigrphellossent = value;
    }
    if(value_path == "cEigrpInputQDrops")
    {
        ceigrpinputqdrops = value;
    }
    if(value_path == "cEigrpInputQHighMark")
    {
        ceigrpinputqhighmark = value;
    }
    if(value_path == "cEigrpNbrCount")
    {
        ceigrpnbrcount = value;
    }
    if(value_path == "cEigrpNextSerial")
    {
        ceigrpnextserial = value;
    }
    if(value_path == "cEigrpQueriesRcvd")
    {
        ceigrpqueriesrcvd = value;
    }
    if(value_path == "cEigrpQueriesSent")
    {
        ceigrpqueriessent = value;
    }
    if(value_path == "cEigrpRepliesRcvd")
    {
        ceigrprepliesrcvd = value;
    }
    if(value_path == "cEigrpRepliesSent")
    {
        ceigrprepliessent = value;
    }
    if(value_path == "cEigrpSiaQueriesRcvd")
    {
        ceigrpsiaqueriesrcvd = value;
    }
    if(value_path == "cEigrpSiaQueriesSent")
    {
        ceigrpsiaqueriessent = value;
    }
    if(value_path == "cEigrpTopoRoutes")
    {
        ceigrptoporoutes = value;
    }
    if(value_path == "cEigrpUpdatesRcvd")
    {
        ceigrpupdatesrcvd = value;
    }
    if(value_path == "cEigrpUpdatesSent")
    {
        ceigrpupdatessent = value;
    }
    if(value_path == "cEigrpXmitDummies")
    {
        ceigrpxmitdummies = value;
    }
    if(value_path == "cEigrpXmitPendReplies")
    {
        ceigrpxmitpendreplies = value;
    }
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
    return is_set(operation);
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

void CiscoEigrpMib::Ceigrptopotable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceigrpvpnid.operation)
	|| is_set(ceigrpasnumber.operation)
	|| is_set(ceigrpdestnettype.operation)
	|| is_set(ceigrpdestnet.operation)
	|| is_set(ceigrpdestnetprefixlen.operation)
	|| is_set(ceigrpactive.operation)
	|| is_set(ceigrpdestsuccessors.operation)
	|| is_set(ceigrpdistance.operation)
	|| is_set(ceigrpfdistance.operation)
	|| is_set(ceigrpnexthopaddress.operation)
	|| is_set(ceigrpnexthopaddresstype.operation)
	|| is_set(ceigrpnexthopinterface.operation)
	|| is_set(ceigrpreportdistance.operation)
	|| is_set(ceigrprouteoriginaddr.operation)
	|| is_set(ceigrprouteoriginaddrtype.operation)
	|| is_set(ceigrprouteorigintype.operation)
	|| is_set(ceigrpstuckinactive.operation);
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

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.operation)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.operation)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrpdestnettype.is_set || is_set(ceigrpdestnettype.operation)) leaf_name_data.push_back(ceigrpdestnettype.get_name_leafdata());
    if (ceigrpdestnet.is_set || is_set(ceigrpdestnet.operation)) leaf_name_data.push_back(ceigrpdestnet.get_name_leafdata());
    if (ceigrpdestnetprefixlen.is_set || is_set(ceigrpdestnetprefixlen.operation)) leaf_name_data.push_back(ceigrpdestnetprefixlen.get_name_leafdata());
    if (ceigrpactive.is_set || is_set(ceigrpactive.operation)) leaf_name_data.push_back(ceigrpactive.get_name_leafdata());
    if (ceigrpdestsuccessors.is_set || is_set(ceigrpdestsuccessors.operation)) leaf_name_data.push_back(ceigrpdestsuccessors.get_name_leafdata());
    if (ceigrpdistance.is_set || is_set(ceigrpdistance.operation)) leaf_name_data.push_back(ceigrpdistance.get_name_leafdata());
    if (ceigrpfdistance.is_set || is_set(ceigrpfdistance.operation)) leaf_name_data.push_back(ceigrpfdistance.get_name_leafdata());
    if (ceigrpnexthopaddress.is_set || is_set(ceigrpnexthopaddress.operation)) leaf_name_data.push_back(ceigrpnexthopaddress.get_name_leafdata());
    if (ceigrpnexthopaddresstype.is_set || is_set(ceigrpnexthopaddresstype.operation)) leaf_name_data.push_back(ceigrpnexthopaddresstype.get_name_leafdata());
    if (ceigrpnexthopinterface.is_set || is_set(ceigrpnexthopinterface.operation)) leaf_name_data.push_back(ceigrpnexthopinterface.get_name_leafdata());
    if (ceigrpreportdistance.is_set || is_set(ceigrpreportdistance.operation)) leaf_name_data.push_back(ceigrpreportdistance.get_name_leafdata());
    if (ceigrprouteoriginaddr.is_set || is_set(ceigrprouteoriginaddr.operation)) leaf_name_data.push_back(ceigrprouteoriginaddr.get_name_leafdata());
    if (ceigrprouteoriginaddrtype.is_set || is_set(ceigrprouteoriginaddrtype.operation)) leaf_name_data.push_back(ceigrprouteoriginaddrtype.get_name_leafdata());
    if (ceigrprouteorigintype.is_set || is_set(ceigrprouteorigintype.operation)) leaf_name_data.push_back(ceigrprouteorigintype.get_name_leafdata());
    if (ceigrpstuckinactive.is_set || is_set(ceigrpstuckinactive.operation)) leaf_name_data.push_back(ceigrpstuckinactive.get_name_leafdata());


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

void CiscoEigrpMib::Ceigrptopotable::Ceigrptopoentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
    }
    if(value_path == "cEigrpDestNetType")
    {
        ceigrpdestnettype = value;
    }
    if(value_path == "cEigrpDestNet")
    {
        ceigrpdestnet = value;
    }
    if(value_path == "cEigrpDestNetPrefixLen")
    {
        ceigrpdestnetprefixlen = value;
    }
    if(value_path == "cEigrpActive")
    {
        ceigrpactive = value;
    }
    if(value_path == "cEigrpDestSuccessors")
    {
        ceigrpdestsuccessors = value;
    }
    if(value_path == "cEigrpDistance")
    {
        ceigrpdistance = value;
    }
    if(value_path == "cEigrpFdistance")
    {
        ceigrpfdistance = value;
    }
    if(value_path == "cEigrpNextHopAddress")
    {
        ceigrpnexthopaddress = value;
    }
    if(value_path == "cEigrpNextHopAddressType")
    {
        ceigrpnexthopaddresstype = value;
    }
    if(value_path == "cEigrpNextHopInterface")
    {
        ceigrpnexthopinterface = value;
    }
    if(value_path == "cEigrpReportDistance")
    {
        ceigrpreportdistance = value;
    }
    if(value_path == "cEigrpRouteOriginAddr")
    {
        ceigrprouteoriginaddr = value;
    }
    if(value_path == "cEigrpRouteOriginAddrType")
    {
        ceigrprouteoriginaddrtype = value;
    }
    if(value_path == "cEigrpRouteOriginType")
    {
        ceigrprouteorigintype = value;
    }
    if(value_path == "cEigrpStuckInActive")
    {
        ceigrpstuckinactive = value;
    }
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
    return is_set(operation);
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

void CiscoEigrpMib::Ceigrppeertable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceigrpvpnid.operation)
	|| is_set(ceigrpasnumber.operation)
	|| is_set(ceigrphandle.operation)
	|| is_set(ceigrpholdtime.operation)
	|| is_set(ceigrplastseq.operation)
	|| is_set(ceigrppeeraddr.operation)
	|| is_set(ceigrppeeraddrtype.operation)
	|| is_set(ceigrppeerifindex.operation)
	|| is_set(ceigrppktsenqueued.operation)
	|| is_set(ceigrpretrans.operation)
	|| is_set(ceigrpretries.operation)
	|| is_set(ceigrprto.operation)
	|| is_set(ceigrpsrtt.operation)
	|| is_set(ceigrpuptime.operation)
	|| is_set(ceigrpversion.operation);
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

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.operation)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.operation)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ceigrphandle.is_set || is_set(ceigrphandle.operation)) leaf_name_data.push_back(ceigrphandle.get_name_leafdata());
    if (ceigrpholdtime.is_set || is_set(ceigrpholdtime.operation)) leaf_name_data.push_back(ceigrpholdtime.get_name_leafdata());
    if (ceigrplastseq.is_set || is_set(ceigrplastseq.operation)) leaf_name_data.push_back(ceigrplastseq.get_name_leafdata());
    if (ceigrppeeraddr.is_set || is_set(ceigrppeeraddr.operation)) leaf_name_data.push_back(ceigrppeeraddr.get_name_leafdata());
    if (ceigrppeeraddrtype.is_set || is_set(ceigrppeeraddrtype.operation)) leaf_name_data.push_back(ceigrppeeraddrtype.get_name_leafdata());
    if (ceigrppeerifindex.is_set || is_set(ceigrppeerifindex.operation)) leaf_name_data.push_back(ceigrppeerifindex.get_name_leafdata());
    if (ceigrppktsenqueued.is_set || is_set(ceigrppktsenqueued.operation)) leaf_name_data.push_back(ceigrppktsenqueued.get_name_leafdata());
    if (ceigrpretrans.is_set || is_set(ceigrpretrans.operation)) leaf_name_data.push_back(ceigrpretrans.get_name_leafdata());
    if (ceigrpretries.is_set || is_set(ceigrpretries.operation)) leaf_name_data.push_back(ceigrpretries.get_name_leafdata());
    if (ceigrprto.is_set || is_set(ceigrprto.operation)) leaf_name_data.push_back(ceigrprto.get_name_leafdata());
    if (ceigrpsrtt.is_set || is_set(ceigrpsrtt.operation)) leaf_name_data.push_back(ceigrpsrtt.get_name_leafdata());
    if (ceigrpuptime.is_set || is_set(ceigrpuptime.operation)) leaf_name_data.push_back(ceigrpuptime.get_name_leafdata());
    if (ceigrpversion.is_set || is_set(ceigrpversion.operation)) leaf_name_data.push_back(ceigrpversion.get_name_leafdata());


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

void CiscoEigrpMib::Ceigrppeertable::Ceigrppeerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
    }
    if(value_path == "cEigrpHandle")
    {
        ceigrphandle = value;
    }
    if(value_path == "cEigrpHoldTime")
    {
        ceigrpholdtime = value;
    }
    if(value_path == "cEigrpLastSeq")
    {
        ceigrplastseq = value;
    }
    if(value_path == "cEigrpPeerAddr")
    {
        ceigrppeeraddr = value;
    }
    if(value_path == "cEigrpPeerAddrType")
    {
        ceigrppeeraddrtype = value;
    }
    if(value_path == "cEigrpPeerIfIndex")
    {
        ceigrppeerifindex = value;
    }
    if(value_path == "cEigrpPktsEnqueued")
    {
        ceigrppktsenqueued = value;
    }
    if(value_path == "cEigrpRetrans")
    {
        ceigrpretrans = value;
    }
    if(value_path == "cEigrpRetries")
    {
        ceigrpretries = value;
    }
    if(value_path == "cEigrpRto")
    {
        ceigrprto = value;
    }
    if(value_path == "cEigrpSrtt")
    {
        ceigrpsrtt = value;
    }
    if(value_path == "cEigrpUpTime")
    {
        ceigrpuptime = value;
    }
    if(value_path == "cEigrpVersion")
    {
        ceigrpversion = value;
    }
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
    return is_set(operation);
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

void CiscoEigrpMib::Ceigrpinterfacetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceigrpvpnid.operation)
	|| is_set(ceigrpasnumber.operation)
	|| is_set(ifindex.operation)
	|| is_set(ceigrpackssuppressed.operation)
	|| is_set(ceigrpauthkeychain.operation)
	|| is_set(ceigrpauthmode.operation)
	|| is_set(ceigrpcrpkts.operation)
	|| is_set(ceigrphellointerval.operation)
	|| is_set(ceigrpmcastexcepts.operation)
	|| is_set(ceigrpmeansrtt.operation)
	|| is_set(ceigrpmflowtimer.operation)
	|| is_set(ceigrpoosrvcd.operation)
	|| is_set(ceigrppacingreliable.operation)
	|| is_set(ceigrppacingunreliable.operation)
	|| is_set(ceigrppeercount.operation)
	|| is_set(ceigrppendingroutes.operation)
	|| is_set(ceigrpretranssent.operation)
	|| is_set(ceigrprmcasts.operation)
	|| is_set(ceigrprucasts.operation)
	|| is_set(ceigrpumcasts.operation)
	|| is_set(ceigrpuucasts.operation)
	|| is_set(ceigrpxmitnextserial.operation)
	|| is_set(ceigrpxmitreliableq.operation)
	|| is_set(ceigrpxmitunreliableq.operation);
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

    if (ceigrpvpnid.is_set || is_set(ceigrpvpnid.operation)) leaf_name_data.push_back(ceigrpvpnid.get_name_leafdata());
    if (ceigrpasnumber.is_set || is_set(ceigrpasnumber.operation)) leaf_name_data.push_back(ceigrpasnumber.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ceigrpackssuppressed.is_set || is_set(ceigrpackssuppressed.operation)) leaf_name_data.push_back(ceigrpackssuppressed.get_name_leafdata());
    if (ceigrpauthkeychain.is_set || is_set(ceigrpauthkeychain.operation)) leaf_name_data.push_back(ceigrpauthkeychain.get_name_leafdata());
    if (ceigrpauthmode.is_set || is_set(ceigrpauthmode.operation)) leaf_name_data.push_back(ceigrpauthmode.get_name_leafdata());
    if (ceigrpcrpkts.is_set || is_set(ceigrpcrpkts.operation)) leaf_name_data.push_back(ceigrpcrpkts.get_name_leafdata());
    if (ceigrphellointerval.is_set || is_set(ceigrphellointerval.operation)) leaf_name_data.push_back(ceigrphellointerval.get_name_leafdata());
    if (ceigrpmcastexcepts.is_set || is_set(ceigrpmcastexcepts.operation)) leaf_name_data.push_back(ceigrpmcastexcepts.get_name_leafdata());
    if (ceigrpmeansrtt.is_set || is_set(ceigrpmeansrtt.operation)) leaf_name_data.push_back(ceigrpmeansrtt.get_name_leafdata());
    if (ceigrpmflowtimer.is_set || is_set(ceigrpmflowtimer.operation)) leaf_name_data.push_back(ceigrpmflowtimer.get_name_leafdata());
    if (ceigrpoosrvcd.is_set || is_set(ceigrpoosrvcd.operation)) leaf_name_data.push_back(ceigrpoosrvcd.get_name_leafdata());
    if (ceigrppacingreliable.is_set || is_set(ceigrppacingreliable.operation)) leaf_name_data.push_back(ceigrppacingreliable.get_name_leafdata());
    if (ceigrppacingunreliable.is_set || is_set(ceigrppacingunreliable.operation)) leaf_name_data.push_back(ceigrppacingunreliable.get_name_leafdata());
    if (ceigrppeercount.is_set || is_set(ceigrppeercount.operation)) leaf_name_data.push_back(ceigrppeercount.get_name_leafdata());
    if (ceigrppendingroutes.is_set || is_set(ceigrppendingroutes.operation)) leaf_name_data.push_back(ceigrppendingroutes.get_name_leafdata());
    if (ceigrpretranssent.is_set || is_set(ceigrpretranssent.operation)) leaf_name_data.push_back(ceigrpretranssent.get_name_leafdata());
    if (ceigrprmcasts.is_set || is_set(ceigrprmcasts.operation)) leaf_name_data.push_back(ceigrprmcasts.get_name_leafdata());
    if (ceigrprucasts.is_set || is_set(ceigrprucasts.operation)) leaf_name_data.push_back(ceigrprucasts.get_name_leafdata());
    if (ceigrpumcasts.is_set || is_set(ceigrpumcasts.operation)) leaf_name_data.push_back(ceigrpumcasts.get_name_leafdata());
    if (ceigrpuucasts.is_set || is_set(ceigrpuucasts.operation)) leaf_name_data.push_back(ceigrpuucasts.get_name_leafdata());
    if (ceigrpxmitnextserial.is_set || is_set(ceigrpxmitnextserial.operation)) leaf_name_data.push_back(ceigrpxmitnextserial.get_name_leafdata());
    if (ceigrpxmitreliableq.is_set || is_set(ceigrpxmitreliableq.operation)) leaf_name_data.push_back(ceigrpxmitreliableq.get_name_leafdata());
    if (ceigrpxmitunreliableq.is_set || is_set(ceigrpxmitunreliableq.operation)) leaf_name_data.push_back(ceigrpxmitunreliableq.get_name_leafdata());


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

void CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cEigrpVpnId")
    {
        ceigrpvpnid = value;
    }
    if(value_path == "cEigrpAsNumber")
    {
        ceigrpasnumber = value;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cEigrpAcksSuppressed")
    {
        ceigrpackssuppressed = value;
    }
    if(value_path == "cEigrpAuthKeyChain")
    {
        ceigrpauthkeychain = value;
    }
    if(value_path == "cEigrpAuthMode")
    {
        ceigrpauthmode = value;
    }
    if(value_path == "cEigrpCRpkts")
    {
        ceigrpcrpkts = value;
    }
    if(value_path == "cEigrpHelloInterval")
    {
        ceigrphellointerval = value;
    }
    if(value_path == "cEigrpMcastExcepts")
    {
        ceigrpmcastexcepts = value;
    }
    if(value_path == "cEigrpMeanSrtt")
    {
        ceigrpmeansrtt = value;
    }
    if(value_path == "cEigrpMFlowTimer")
    {
        ceigrpmflowtimer = value;
    }
    if(value_path == "cEigrpOOSrvcd")
    {
        ceigrpoosrvcd = value;
    }
    if(value_path == "cEigrpPacingReliable")
    {
        ceigrppacingreliable = value;
    }
    if(value_path == "cEigrpPacingUnreliable")
    {
        ceigrppacingunreliable = value;
    }
    if(value_path == "cEigrpPeerCount")
    {
        ceigrppeercount = value;
    }
    if(value_path == "cEigrpPendingRoutes")
    {
        ceigrppendingroutes = value;
    }
    if(value_path == "cEigrpRetransSent")
    {
        ceigrpretranssent = value;
    }
    if(value_path == "cEigrpRMcasts")
    {
        ceigrprmcasts = value;
    }
    if(value_path == "cEigrpRUcasts")
    {
        ceigrprucasts = value;
    }
    if(value_path == "cEigrpUMcasts")
    {
        ceigrpumcasts = value;
    }
    if(value_path == "cEigrpUUcasts")
    {
        ceigrpuucasts = value;
    }
    if(value_path == "cEigrpXmitNextSerial")
    {
        ceigrpxmitnextserial = value;
    }
    if(value_path == "cEigrpXmitReliableQ")
    {
        ceigrpxmitreliableq = value;
    }
    if(value_path == "cEigrpXmitUnreliableQ")
    {
        ceigrpxmitunreliableq = value;
    }
}

const Enum::YLeaf CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::CeigrpauthmodeEnum::none {1, "none"};
const Enum::YLeaf CiscoEigrpMib::Ceigrpinterfacetable::Ceigrpinterfaceentry::CeigrpauthmodeEnum::md5 {2, "md5"};


}
}

