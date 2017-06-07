
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IPMROUTE_STD_MIB.hpp"

namespace ydk {
namespace IPMROUTE_STD_MIB {

IpmrouteStdMib::IpmrouteStdMib()
    :
    ipmroute(std::make_shared<IpmrouteStdMib::Ipmroute>())
	,ipmrouteboundarytable(std::make_shared<IpmrouteStdMib::Ipmrouteboundarytable>())
	,ipmrouteinterfacetable(std::make_shared<IpmrouteStdMib::Ipmrouteinterfacetable>())
	,ipmroutenexthoptable(std::make_shared<IpmrouteStdMib::Ipmroutenexthoptable>())
	,ipmroutescopenametable(std::make_shared<IpmrouteStdMib::Ipmroutescopenametable>())
	,ipmroutetable(std::make_shared<IpmrouteStdMib::Ipmroutetable>())
{
    ipmroute->parent = this;

    ipmrouteboundarytable->parent = this;

    ipmrouteinterfacetable->parent = this;

    ipmroutenexthoptable->parent = this;

    ipmroutescopenametable->parent = this;

    ipmroutetable->parent = this;

    yang_name = "IPMROUTE-STD-MIB"; yang_parent_name = "IPMROUTE-STD-MIB";
}

IpmrouteStdMib::~IpmrouteStdMib()
{
}

bool IpmrouteStdMib::has_data() const
{
    return (ipmroute !=  nullptr && ipmroute->has_data())
	|| (ipmrouteboundarytable !=  nullptr && ipmrouteboundarytable->has_data())
	|| (ipmrouteinterfacetable !=  nullptr && ipmrouteinterfacetable->has_data())
	|| (ipmroutenexthoptable !=  nullptr && ipmroutenexthoptable->has_data())
	|| (ipmroutescopenametable !=  nullptr && ipmroutescopenametable->has_data())
	|| (ipmroutetable !=  nullptr && ipmroutetable->has_data());
}

bool IpmrouteStdMib::has_operation() const
{
    return is_set(operation)
	|| (ipmroute !=  nullptr && ipmroute->has_operation())
	|| (ipmrouteboundarytable !=  nullptr && ipmrouteboundarytable->has_operation())
	|| (ipmrouteinterfacetable !=  nullptr && ipmrouteinterfacetable->has_operation())
	|| (ipmroutenexthoptable !=  nullptr && ipmroutenexthoptable->has_operation())
	|| (ipmroutescopenametable !=  nullptr && ipmroutescopenametable->has_operation())
	|| (ipmroutetable !=  nullptr && ipmroutetable->has_operation());
}

std::string IpmrouteStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> IpmrouteStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRoute")
    {
        if(ipmroute == nullptr)
        {
            ipmroute = std::make_shared<IpmrouteStdMib::Ipmroute>();
        }
        return ipmroute;
    }

    if(child_yang_name == "ipMRouteBoundaryTable")
    {
        if(ipmrouteboundarytable == nullptr)
        {
            ipmrouteboundarytable = std::make_shared<IpmrouteStdMib::Ipmrouteboundarytable>();
        }
        return ipmrouteboundarytable;
    }

    if(child_yang_name == "ipMRouteInterfaceTable")
    {
        if(ipmrouteinterfacetable == nullptr)
        {
            ipmrouteinterfacetable = std::make_shared<IpmrouteStdMib::Ipmrouteinterfacetable>();
        }
        return ipmrouteinterfacetable;
    }

    if(child_yang_name == "ipMRouteNextHopTable")
    {
        if(ipmroutenexthoptable == nullptr)
        {
            ipmroutenexthoptable = std::make_shared<IpmrouteStdMib::Ipmroutenexthoptable>();
        }
        return ipmroutenexthoptable;
    }

    if(child_yang_name == "ipMRouteScopeNameTable")
    {
        if(ipmroutescopenametable == nullptr)
        {
            ipmroutescopenametable = std::make_shared<IpmrouteStdMib::Ipmroutescopenametable>();
        }
        return ipmroutescopenametable;
    }

    if(child_yang_name == "ipMRouteTable")
    {
        if(ipmroutetable == nullptr)
        {
            ipmroutetable = std::make_shared<IpmrouteStdMib::Ipmroutetable>();
        }
        return ipmroutetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipmroute != nullptr)
    {
        children["ipMRoute"] = ipmroute;
    }

    if(ipmrouteboundarytable != nullptr)
    {
        children["ipMRouteBoundaryTable"] = ipmrouteboundarytable;
    }

    if(ipmrouteinterfacetable != nullptr)
    {
        children["ipMRouteInterfaceTable"] = ipmrouteinterfacetable;
    }

    if(ipmroutenexthoptable != nullptr)
    {
        children["ipMRouteNextHopTable"] = ipmroutenexthoptable;
    }

    if(ipmroutescopenametable != nullptr)
    {
        children["ipMRouteScopeNameTable"] = ipmroutescopenametable;
    }

    if(ipmroutetable != nullptr)
    {
        children["ipMRouteTable"] = ipmroutetable;
    }

    return children;
}

void IpmrouteStdMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IpmrouteStdMib::clone_ptr() const
{
    return std::make_shared<IpmrouteStdMib>();
}

std::string IpmrouteStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IpmrouteStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IpmrouteStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

IpmrouteStdMib::Ipmroute::Ipmroute()
    :
    ipmrouteenable{YType::enumeration, "ipMRouteEnable"},
    ipmrouteentrycount{YType::uint32, "ipMRouteEntryCount"}
{
    yang_name = "ipMRoute"; yang_parent_name = "IPMROUTE-STD-MIB";
}

IpmrouteStdMib::Ipmroute::~Ipmroute()
{
}

bool IpmrouteStdMib::Ipmroute::has_data() const
{
    return ipmrouteenable.is_set
	|| ipmrouteentrycount.is_set;
}

bool IpmrouteStdMib::Ipmroute::has_operation() const
{
    return is_set(operation)
	|| is_set(ipmrouteenable.operation)
	|| is_set(ipmrouteentrycount.operation);
}

std::string IpmrouteStdMib::Ipmroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRoute";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteenable.is_set || is_set(ipmrouteenable.operation)) leaf_name_data.push_back(ipmrouteenable.get_name_leafdata());
    if (ipmrouteentrycount.is_set || is_set(ipmrouteentrycount.operation)) leaf_name_data.push_back(ipmrouteentrycount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpmrouteStdMib::Ipmroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteEnable")
    {
        ipmrouteenable = value;
    }
    if(value_path == "ipMRouteEntryCount")
    {
        ipmrouteentrycount = value;
    }
}

IpmrouteStdMib::Ipmroutetable::Ipmroutetable()
{
    yang_name = "ipMRouteTable"; yang_parent_name = "IPMROUTE-STD-MIB";
}

IpmrouteStdMib::Ipmroutetable::~Ipmroutetable()
{
}

bool IpmrouteStdMib::Ipmroutetable::has_data() const
{
    for (std::size_t index=0; index<ipmrouteentry.size(); index++)
    {
        if(ipmrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool IpmrouteStdMib::Ipmroutetable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteentry.size(); index++)
    {
        if(ipmrouteentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpmrouteStdMib::Ipmroutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteTable";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmroutetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmroutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteEntry")
    {
        for(auto const & c : ipmrouteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpmrouteStdMib::Ipmroutetable::Ipmrouteentry>();
        c->parent = this;
        ipmrouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmrouteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpmrouteStdMib::Ipmroutetable::set_value(const std::string & value_path, std::string value)
{
}

IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::Ipmrouteentry()
    :
    ipmroutegroup{YType::str, "ipMRouteGroup"},
    ipmroutesource{YType::str, "ipMRouteSource"},
    ipmroutesourcemask{YType::str, "ipMRouteSourceMask"},
    ciscoipmroutebps{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps"},
    ciscoipmroutebps2{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps2"},
    ciscoipmrouteconnectedflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteConnectedFlag"},
    ciscoipmroutedifferentinifpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteDifferentInIfPkts"},
    ciscoipmrouteinlimit{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit"},
    ciscoipmrouteinlimit2{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit2"},
    ciscoipmroutejoinflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteJoinFlag"},
    ciscoipmroutelastused{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteLastUsed"},
    ciscoipmroutelocalflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteLocalFlag"},
    ciscoipmroutemetric{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric"},
    ciscoipmroutemetric2{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric2"},
    ciscoipmroutemetricpreference{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetricPreference"},
    ciscoipmroutemsdpflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMsdpFlag"},
    ciscoipmrouteoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteOctets"},
    ciscoipmroutepkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRoutePkts"},
    ciscoipmrouteproxyjoinflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteProxyJoinFlag"},
    ciscoipmroutepruneflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRoutePruneFlag"},
    ciscoipmrouteregisterflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteRegisterFlag"},
    ciscoipmrouterpflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteRpFlag"},
    ciscoipmroutesparseflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteSparseFlag"},
    ciscoipmroutesptflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteSptFlag"},
    ipmroutedifferentinifpackets{YType::uint32, "ipMRouteDifferentInIfPackets"},
    ipmrouteexpirytime{YType::uint32, "ipMRouteExpiryTime"},
    ipmroutehcoctets{YType::uint64, "ipMRouteHCOctets"},
    ipmrouteinifindex{YType::int32, "ipMRouteInIfIndex"},
    ipmrouteoctets{YType::uint32, "ipMRouteOctets"},
    ipmroutepkts{YType::uint32, "ipMRoutePkts"},
    ipmrouteprotocol{YType::enumeration, "ipMRouteProtocol"},
    ipmroutertaddress{YType::str, "ipMRouteRtAddress"},
    ipmroutertmask{YType::str, "ipMRouteRtMask"},
    ipmroutertproto{YType::enumeration, "ipMRouteRtProto"},
    ipmrouterttype{YType::enumeration, "ipMRouteRtType"},
    ipmrouteupstreamneighbor{YType::str, "ipMRouteUpstreamNeighbor"},
    ipmrouteuptime{YType::uint32, "ipMRouteUpTime"}
{
    yang_name = "ipMRouteEntry"; yang_parent_name = "ipMRouteTable";
}

IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::~Ipmrouteentry()
{
}

bool IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::has_data() const
{
    return ipmroutegroup.is_set
	|| ipmroutesource.is_set
	|| ipmroutesourcemask.is_set
	|| ciscoipmroutebps.is_set
	|| ciscoipmroutebps2.is_set
	|| ciscoipmrouteconnectedflag.is_set
	|| ciscoipmroutedifferentinifpkts.is_set
	|| ciscoipmrouteinlimit.is_set
	|| ciscoipmrouteinlimit2.is_set
	|| ciscoipmroutejoinflag.is_set
	|| ciscoipmroutelastused.is_set
	|| ciscoipmroutelocalflag.is_set
	|| ciscoipmroutemetric.is_set
	|| ciscoipmroutemetric2.is_set
	|| ciscoipmroutemetricpreference.is_set
	|| ciscoipmroutemsdpflag.is_set
	|| ciscoipmrouteoctets.is_set
	|| ciscoipmroutepkts.is_set
	|| ciscoipmrouteproxyjoinflag.is_set
	|| ciscoipmroutepruneflag.is_set
	|| ciscoipmrouteregisterflag.is_set
	|| ciscoipmrouterpflag.is_set
	|| ciscoipmroutesparseflag.is_set
	|| ciscoipmroutesptflag.is_set
	|| ipmroutedifferentinifpackets.is_set
	|| ipmrouteexpirytime.is_set
	|| ipmroutehcoctets.is_set
	|| ipmrouteinifindex.is_set
	|| ipmrouteoctets.is_set
	|| ipmroutepkts.is_set
	|| ipmrouteprotocol.is_set
	|| ipmroutertaddress.is_set
	|| ipmroutertmask.is_set
	|| ipmroutertproto.is_set
	|| ipmrouterttype.is_set
	|| ipmrouteupstreamneighbor.is_set
	|| ipmrouteuptime.is_set;
}

bool IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipmroutegroup.operation)
	|| is_set(ipmroutesource.operation)
	|| is_set(ipmroutesourcemask.operation)
	|| is_set(ciscoipmroutebps.operation)
	|| is_set(ciscoipmroutebps2.operation)
	|| is_set(ciscoipmrouteconnectedflag.operation)
	|| is_set(ciscoipmroutedifferentinifpkts.operation)
	|| is_set(ciscoipmrouteinlimit.operation)
	|| is_set(ciscoipmrouteinlimit2.operation)
	|| is_set(ciscoipmroutejoinflag.operation)
	|| is_set(ciscoipmroutelastused.operation)
	|| is_set(ciscoipmroutelocalflag.operation)
	|| is_set(ciscoipmroutemetric.operation)
	|| is_set(ciscoipmroutemetric2.operation)
	|| is_set(ciscoipmroutemetricpreference.operation)
	|| is_set(ciscoipmroutemsdpflag.operation)
	|| is_set(ciscoipmrouteoctets.operation)
	|| is_set(ciscoipmroutepkts.operation)
	|| is_set(ciscoipmrouteproxyjoinflag.operation)
	|| is_set(ciscoipmroutepruneflag.operation)
	|| is_set(ciscoipmrouteregisterflag.operation)
	|| is_set(ciscoipmrouterpflag.operation)
	|| is_set(ciscoipmroutesparseflag.operation)
	|| is_set(ciscoipmroutesptflag.operation)
	|| is_set(ipmroutedifferentinifpackets.operation)
	|| is_set(ipmrouteexpirytime.operation)
	|| is_set(ipmroutehcoctets.operation)
	|| is_set(ipmrouteinifindex.operation)
	|| is_set(ipmrouteoctets.operation)
	|| is_set(ipmroutepkts.operation)
	|| is_set(ipmrouteprotocol.operation)
	|| is_set(ipmroutertaddress.operation)
	|| is_set(ipmroutertmask.operation)
	|| is_set(ipmroutertproto.operation)
	|| is_set(ipmrouterttype.operation)
	|| is_set(ipmrouteupstreamneighbor.operation)
	|| is_set(ipmrouteuptime.operation);
}

std::string IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteEntry" <<"[ipMRouteGroup='" <<ipmroutegroup <<"']" <<"[ipMRouteSource='" <<ipmroutesource <<"']" <<"[ipMRouteSourceMask='" <<ipmroutesourcemask <<"']";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutegroup.is_set || is_set(ipmroutegroup.operation)) leaf_name_data.push_back(ipmroutegroup.get_name_leafdata());
    if (ipmroutesource.is_set || is_set(ipmroutesource.operation)) leaf_name_data.push_back(ipmroutesource.get_name_leafdata());
    if (ipmroutesourcemask.is_set || is_set(ipmroutesourcemask.operation)) leaf_name_data.push_back(ipmroutesourcemask.get_name_leafdata());
    if (ciscoipmroutebps.is_set || is_set(ciscoipmroutebps.operation)) leaf_name_data.push_back(ciscoipmroutebps.get_name_leafdata());
    if (ciscoipmroutebps2.is_set || is_set(ciscoipmroutebps2.operation)) leaf_name_data.push_back(ciscoipmroutebps2.get_name_leafdata());
    if (ciscoipmrouteconnectedflag.is_set || is_set(ciscoipmrouteconnectedflag.operation)) leaf_name_data.push_back(ciscoipmrouteconnectedflag.get_name_leafdata());
    if (ciscoipmroutedifferentinifpkts.is_set || is_set(ciscoipmroutedifferentinifpkts.operation)) leaf_name_data.push_back(ciscoipmroutedifferentinifpkts.get_name_leafdata());
    if (ciscoipmrouteinlimit.is_set || is_set(ciscoipmrouteinlimit.operation)) leaf_name_data.push_back(ciscoipmrouteinlimit.get_name_leafdata());
    if (ciscoipmrouteinlimit2.is_set || is_set(ciscoipmrouteinlimit2.operation)) leaf_name_data.push_back(ciscoipmrouteinlimit2.get_name_leafdata());
    if (ciscoipmroutejoinflag.is_set || is_set(ciscoipmroutejoinflag.operation)) leaf_name_data.push_back(ciscoipmroutejoinflag.get_name_leafdata());
    if (ciscoipmroutelastused.is_set || is_set(ciscoipmroutelastused.operation)) leaf_name_data.push_back(ciscoipmroutelastused.get_name_leafdata());
    if (ciscoipmroutelocalflag.is_set || is_set(ciscoipmroutelocalflag.operation)) leaf_name_data.push_back(ciscoipmroutelocalflag.get_name_leafdata());
    if (ciscoipmroutemetric.is_set || is_set(ciscoipmroutemetric.operation)) leaf_name_data.push_back(ciscoipmroutemetric.get_name_leafdata());
    if (ciscoipmroutemetric2.is_set || is_set(ciscoipmroutemetric2.operation)) leaf_name_data.push_back(ciscoipmroutemetric2.get_name_leafdata());
    if (ciscoipmroutemetricpreference.is_set || is_set(ciscoipmroutemetricpreference.operation)) leaf_name_data.push_back(ciscoipmroutemetricpreference.get_name_leafdata());
    if (ciscoipmroutemsdpflag.is_set || is_set(ciscoipmroutemsdpflag.operation)) leaf_name_data.push_back(ciscoipmroutemsdpflag.get_name_leafdata());
    if (ciscoipmrouteoctets.is_set || is_set(ciscoipmrouteoctets.operation)) leaf_name_data.push_back(ciscoipmrouteoctets.get_name_leafdata());
    if (ciscoipmroutepkts.is_set || is_set(ciscoipmroutepkts.operation)) leaf_name_data.push_back(ciscoipmroutepkts.get_name_leafdata());
    if (ciscoipmrouteproxyjoinflag.is_set || is_set(ciscoipmrouteproxyjoinflag.operation)) leaf_name_data.push_back(ciscoipmrouteproxyjoinflag.get_name_leafdata());
    if (ciscoipmroutepruneflag.is_set || is_set(ciscoipmroutepruneflag.operation)) leaf_name_data.push_back(ciscoipmroutepruneflag.get_name_leafdata());
    if (ciscoipmrouteregisterflag.is_set || is_set(ciscoipmrouteregisterflag.operation)) leaf_name_data.push_back(ciscoipmrouteregisterflag.get_name_leafdata());
    if (ciscoipmrouterpflag.is_set || is_set(ciscoipmrouterpflag.operation)) leaf_name_data.push_back(ciscoipmrouterpflag.get_name_leafdata());
    if (ciscoipmroutesparseflag.is_set || is_set(ciscoipmroutesparseflag.operation)) leaf_name_data.push_back(ciscoipmroutesparseflag.get_name_leafdata());
    if (ciscoipmroutesptflag.is_set || is_set(ciscoipmroutesptflag.operation)) leaf_name_data.push_back(ciscoipmroutesptflag.get_name_leafdata());
    if (ipmroutedifferentinifpackets.is_set || is_set(ipmroutedifferentinifpackets.operation)) leaf_name_data.push_back(ipmroutedifferentinifpackets.get_name_leafdata());
    if (ipmrouteexpirytime.is_set || is_set(ipmrouteexpirytime.operation)) leaf_name_data.push_back(ipmrouteexpirytime.get_name_leafdata());
    if (ipmroutehcoctets.is_set || is_set(ipmroutehcoctets.operation)) leaf_name_data.push_back(ipmroutehcoctets.get_name_leafdata());
    if (ipmrouteinifindex.is_set || is_set(ipmrouteinifindex.operation)) leaf_name_data.push_back(ipmrouteinifindex.get_name_leafdata());
    if (ipmrouteoctets.is_set || is_set(ipmrouteoctets.operation)) leaf_name_data.push_back(ipmrouteoctets.get_name_leafdata());
    if (ipmroutepkts.is_set || is_set(ipmroutepkts.operation)) leaf_name_data.push_back(ipmroutepkts.get_name_leafdata());
    if (ipmrouteprotocol.is_set || is_set(ipmrouteprotocol.operation)) leaf_name_data.push_back(ipmrouteprotocol.get_name_leafdata());
    if (ipmroutertaddress.is_set || is_set(ipmroutertaddress.operation)) leaf_name_data.push_back(ipmroutertaddress.get_name_leafdata());
    if (ipmroutertmask.is_set || is_set(ipmroutertmask.operation)) leaf_name_data.push_back(ipmroutertmask.get_name_leafdata());
    if (ipmroutertproto.is_set || is_set(ipmroutertproto.operation)) leaf_name_data.push_back(ipmroutertproto.get_name_leafdata());
    if (ipmrouterttype.is_set || is_set(ipmrouterttype.operation)) leaf_name_data.push_back(ipmrouterttype.get_name_leafdata());
    if (ipmrouteupstreamneighbor.is_set || is_set(ipmrouteupstreamneighbor.operation)) leaf_name_data.push_back(ipmrouteupstreamneighbor.get_name_leafdata());
    if (ipmrouteuptime.is_set || is_set(ipmrouteuptime.operation)) leaf_name_data.push_back(ipmrouteuptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteGroup")
    {
        ipmroutegroup = value;
    }
    if(value_path == "ipMRouteSource")
    {
        ipmroutesource = value;
    }
    if(value_path == "ipMRouteSourceMask")
    {
        ipmroutesourcemask = value;
    }
    if(value_path == "ciscoIpMRouteBps")
    {
        ciscoipmroutebps = value;
    }
    if(value_path == "ciscoIpMRouteBps2")
    {
        ciscoipmroutebps2 = value;
    }
    if(value_path == "ciscoIpMRouteConnectedFlag")
    {
        ciscoipmrouteconnectedflag = value;
    }
    if(value_path == "ciscoIpMRouteDifferentInIfPkts")
    {
        ciscoipmroutedifferentinifpkts = value;
    }
    if(value_path == "ciscoIpMRouteInLimit")
    {
        ciscoipmrouteinlimit = value;
    }
    if(value_path == "ciscoIpMRouteInLimit2")
    {
        ciscoipmrouteinlimit2 = value;
    }
    if(value_path == "ciscoIpMRouteJoinFlag")
    {
        ciscoipmroutejoinflag = value;
    }
    if(value_path == "ciscoIpMRouteLastUsed")
    {
        ciscoipmroutelastused = value;
    }
    if(value_path == "ciscoIpMRouteLocalFlag")
    {
        ciscoipmroutelocalflag = value;
    }
    if(value_path == "ciscoIpMRouteMetric")
    {
        ciscoipmroutemetric = value;
    }
    if(value_path == "ciscoIpMRouteMetric2")
    {
        ciscoipmroutemetric2 = value;
    }
    if(value_path == "ciscoIpMRouteMetricPreference")
    {
        ciscoipmroutemetricpreference = value;
    }
    if(value_path == "ciscoIpMRouteMsdpFlag")
    {
        ciscoipmroutemsdpflag = value;
    }
    if(value_path == "ciscoIpMRouteOctets")
    {
        ciscoipmrouteoctets = value;
    }
    if(value_path == "ciscoIpMRoutePkts")
    {
        ciscoipmroutepkts = value;
    }
    if(value_path == "ciscoIpMRouteProxyJoinFlag")
    {
        ciscoipmrouteproxyjoinflag = value;
    }
    if(value_path == "ciscoIpMRoutePruneFlag")
    {
        ciscoipmroutepruneflag = value;
    }
    if(value_path == "ciscoIpMRouteRegisterFlag")
    {
        ciscoipmrouteregisterflag = value;
    }
    if(value_path == "ciscoIpMRouteRpFlag")
    {
        ciscoipmrouterpflag = value;
    }
    if(value_path == "ciscoIpMRouteSparseFlag")
    {
        ciscoipmroutesparseflag = value;
    }
    if(value_path == "ciscoIpMRouteSptFlag")
    {
        ciscoipmroutesptflag = value;
    }
    if(value_path == "ipMRouteDifferentInIfPackets")
    {
        ipmroutedifferentinifpackets = value;
    }
    if(value_path == "ipMRouteExpiryTime")
    {
        ipmrouteexpirytime = value;
    }
    if(value_path == "ipMRouteHCOctets")
    {
        ipmroutehcoctets = value;
    }
    if(value_path == "ipMRouteInIfIndex")
    {
        ipmrouteinifindex = value;
    }
    if(value_path == "ipMRouteOctets")
    {
        ipmrouteoctets = value;
    }
    if(value_path == "ipMRoutePkts")
    {
        ipmroutepkts = value;
    }
    if(value_path == "ipMRouteProtocol")
    {
        ipmrouteprotocol = value;
    }
    if(value_path == "ipMRouteRtAddress")
    {
        ipmroutertaddress = value;
    }
    if(value_path == "ipMRouteRtMask")
    {
        ipmroutertmask = value;
    }
    if(value_path == "ipMRouteRtProto")
    {
        ipmroutertproto = value;
    }
    if(value_path == "ipMRouteRtType")
    {
        ipmrouterttype = value;
    }
    if(value_path == "ipMRouteUpstreamNeighbor")
    {
        ipmrouteupstreamneighbor = value;
    }
    if(value_path == "ipMRouteUpTime")
    {
        ipmrouteuptime = value;
    }
}

IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthoptable()
{
    yang_name = "ipMRouteNextHopTable"; yang_parent_name = "IPMROUTE-STD-MIB";
}

IpmrouteStdMib::Ipmroutenexthoptable::~Ipmroutenexthoptable()
{
}

bool IpmrouteStdMib::Ipmroutenexthoptable::has_data() const
{
    for (std::size_t index=0; index<ipmroutenexthopentry.size(); index++)
    {
        if(ipmroutenexthopentry[index]->has_data())
            return true;
    }
    return false;
}

bool IpmrouteStdMib::Ipmroutenexthoptable::has_operation() const
{
    for (std::size_t index=0; index<ipmroutenexthopentry.size(); index++)
    {
        if(ipmroutenexthopentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpmrouteStdMib::Ipmroutenexthoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteNextHopTable";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmroutenexthoptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmroutenexthoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteNextHopEntry")
    {
        for(auto const & c : ipmroutenexthopentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry>();
        c->parent = this;
        ipmroutenexthopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmroutenexthoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmroutenexthopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpmrouteStdMib::Ipmroutenexthoptable::set_value(const std::string & value_path, std::string value)
{
}

IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::Ipmroutenexthopentry()
    :
    ipmroutenexthopgroup{YType::str, "ipMRouteNextHopGroup"},
    ipmroutenexthopsource{YType::str, "ipMRouteNextHopSource"},
    ipmroutenexthopsourcemask{YType::str, "ipMRouteNextHopSourceMask"},
    ipmroutenexthopifindex{YType::int32, "ipMRouteNextHopIfIndex"},
    ipmroutenexthopaddress{YType::str, "ipMRouteNextHopAddress"},
    ciscoipmroutenexthopmachdr{YType::str, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopMacHdr"},
    ciscoipmroutenexthopoutlimit{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopOutLimit"},
    ciscoipmroutenexthoppkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopPkts"},
    ipmroutenexthopclosestmemberhops{YType::int32, "ipMRouteNextHopClosestMemberHops"},
    ipmroutenexthopexpirytime{YType::uint32, "ipMRouteNextHopExpiryTime"},
    ipmroutenexthoppkts{YType::uint32, "ipMRouteNextHopPkts"},
    ipmroutenexthopprotocol{YType::enumeration, "ipMRouteNextHopProtocol"},
    ipmroutenexthopstate{YType::enumeration, "ipMRouteNextHopState"},
    ipmroutenexthopuptime{YType::uint32, "ipMRouteNextHopUpTime"}
{
    yang_name = "ipMRouteNextHopEntry"; yang_parent_name = "ipMRouteNextHopTable";
}

IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::~Ipmroutenexthopentry()
{
}

bool IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::has_data() const
{
    return ipmroutenexthopgroup.is_set
	|| ipmroutenexthopsource.is_set
	|| ipmroutenexthopsourcemask.is_set
	|| ipmroutenexthopifindex.is_set
	|| ipmroutenexthopaddress.is_set
	|| ciscoipmroutenexthopmachdr.is_set
	|| ciscoipmroutenexthopoutlimit.is_set
	|| ciscoipmroutenexthoppkts.is_set
	|| ipmroutenexthopclosestmemberhops.is_set
	|| ipmroutenexthopexpirytime.is_set
	|| ipmroutenexthoppkts.is_set
	|| ipmroutenexthopprotocol.is_set
	|| ipmroutenexthopstate.is_set
	|| ipmroutenexthopuptime.is_set;
}

bool IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipmroutenexthopgroup.operation)
	|| is_set(ipmroutenexthopsource.operation)
	|| is_set(ipmroutenexthopsourcemask.operation)
	|| is_set(ipmroutenexthopifindex.operation)
	|| is_set(ipmroutenexthopaddress.operation)
	|| is_set(ciscoipmroutenexthopmachdr.operation)
	|| is_set(ciscoipmroutenexthopoutlimit.operation)
	|| is_set(ciscoipmroutenexthoppkts.operation)
	|| is_set(ipmroutenexthopclosestmemberhops.operation)
	|| is_set(ipmroutenexthopexpirytime.operation)
	|| is_set(ipmroutenexthoppkts.operation)
	|| is_set(ipmroutenexthopprotocol.operation)
	|| is_set(ipmroutenexthopstate.operation)
	|| is_set(ipmroutenexthopuptime.operation);
}

std::string IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteNextHopEntry" <<"[ipMRouteNextHopGroup='" <<ipmroutenexthopgroup <<"']" <<"[ipMRouteNextHopSource='" <<ipmroutenexthopsource <<"']" <<"[ipMRouteNextHopSourceMask='" <<ipmroutenexthopsourcemask <<"']" <<"[ipMRouteNextHopIfIndex='" <<ipmroutenexthopifindex <<"']" <<"[ipMRouteNextHopAddress='" <<ipmroutenexthopaddress <<"']";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteNextHopTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutenexthopgroup.is_set || is_set(ipmroutenexthopgroup.operation)) leaf_name_data.push_back(ipmroutenexthopgroup.get_name_leafdata());
    if (ipmroutenexthopsource.is_set || is_set(ipmroutenexthopsource.operation)) leaf_name_data.push_back(ipmroutenexthopsource.get_name_leafdata());
    if (ipmroutenexthopsourcemask.is_set || is_set(ipmroutenexthopsourcemask.operation)) leaf_name_data.push_back(ipmroutenexthopsourcemask.get_name_leafdata());
    if (ipmroutenexthopifindex.is_set || is_set(ipmroutenexthopifindex.operation)) leaf_name_data.push_back(ipmroutenexthopifindex.get_name_leafdata());
    if (ipmroutenexthopaddress.is_set || is_set(ipmroutenexthopaddress.operation)) leaf_name_data.push_back(ipmroutenexthopaddress.get_name_leafdata());
    if (ciscoipmroutenexthopmachdr.is_set || is_set(ciscoipmroutenexthopmachdr.operation)) leaf_name_data.push_back(ciscoipmroutenexthopmachdr.get_name_leafdata());
    if (ciscoipmroutenexthopoutlimit.is_set || is_set(ciscoipmroutenexthopoutlimit.operation)) leaf_name_data.push_back(ciscoipmroutenexthopoutlimit.get_name_leafdata());
    if (ciscoipmroutenexthoppkts.is_set || is_set(ciscoipmroutenexthoppkts.operation)) leaf_name_data.push_back(ciscoipmroutenexthoppkts.get_name_leafdata());
    if (ipmroutenexthopclosestmemberhops.is_set || is_set(ipmroutenexthopclosestmemberhops.operation)) leaf_name_data.push_back(ipmroutenexthopclosestmemberhops.get_name_leafdata());
    if (ipmroutenexthopexpirytime.is_set || is_set(ipmroutenexthopexpirytime.operation)) leaf_name_data.push_back(ipmroutenexthopexpirytime.get_name_leafdata());
    if (ipmroutenexthoppkts.is_set || is_set(ipmroutenexthoppkts.operation)) leaf_name_data.push_back(ipmroutenexthoppkts.get_name_leafdata());
    if (ipmroutenexthopprotocol.is_set || is_set(ipmroutenexthopprotocol.operation)) leaf_name_data.push_back(ipmroutenexthopprotocol.get_name_leafdata());
    if (ipmroutenexthopstate.is_set || is_set(ipmroutenexthopstate.operation)) leaf_name_data.push_back(ipmroutenexthopstate.get_name_leafdata());
    if (ipmroutenexthopuptime.is_set || is_set(ipmroutenexthopuptime.operation)) leaf_name_data.push_back(ipmroutenexthopuptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteNextHopGroup")
    {
        ipmroutenexthopgroup = value;
    }
    if(value_path == "ipMRouteNextHopSource")
    {
        ipmroutenexthopsource = value;
    }
    if(value_path == "ipMRouteNextHopSourceMask")
    {
        ipmroutenexthopsourcemask = value;
    }
    if(value_path == "ipMRouteNextHopIfIndex")
    {
        ipmroutenexthopifindex = value;
    }
    if(value_path == "ipMRouteNextHopAddress")
    {
        ipmroutenexthopaddress = value;
    }
    if(value_path == "ciscoIpMRouteNextHopMacHdr")
    {
        ciscoipmroutenexthopmachdr = value;
    }
    if(value_path == "ciscoIpMRouteNextHopOutLimit")
    {
        ciscoipmroutenexthopoutlimit = value;
    }
    if(value_path == "ciscoIpMRouteNextHopPkts")
    {
        ciscoipmroutenexthoppkts = value;
    }
    if(value_path == "ipMRouteNextHopClosestMemberHops")
    {
        ipmroutenexthopclosestmemberhops = value;
    }
    if(value_path == "ipMRouteNextHopExpiryTime")
    {
        ipmroutenexthopexpirytime = value;
    }
    if(value_path == "ipMRouteNextHopPkts")
    {
        ipmroutenexthoppkts = value;
    }
    if(value_path == "ipMRouteNextHopProtocol")
    {
        ipmroutenexthopprotocol = value;
    }
    if(value_path == "ipMRouteNextHopState")
    {
        ipmroutenexthopstate = value;
    }
    if(value_path == "ipMRouteNextHopUpTime")
    {
        ipmroutenexthopuptime = value;
    }
}

IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfacetable()
{
    yang_name = "ipMRouteInterfaceTable"; yang_parent_name = "IPMROUTE-STD-MIB";
}

IpmrouteStdMib::Ipmrouteinterfacetable::~Ipmrouteinterfacetable()
{
}

bool IpmrouteStdMib::Ipmrouteinterfacetable::has_data() const
{
    for (std::size_t index=0; index<ipmrouteinterfaceentry.size(); index++)
    {
        if(ipmrouteinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool IpmrouteStdMib::Ipmrouteinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteinterfaceentry.size(); index++)
    {
        if(ipmrouteinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpmrouteStdMib::Ipmrouteinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteInterfaceTable";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmrouteinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmrouteinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteInterfaceEntry")
    {
        for(auto const & c : ipmrouteinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry>();
        c->parent = this;
        ipmrouteinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmrouteinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmrouteinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpmrouteStdMib::Ipmrouteinterfacetable::set_value(const std::string & value_path, std::string value)
{
}

IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::Ipmrouteinterfaceentry()
    :
    ipmrouteinterfaceifindex{YType::int32, "ipMRouteInterfaceIfIndex"},
    ciscoipmrouteifhcinmcastpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCInMcastPkts"},
    ciscoipmrouteifhcoutmcastpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCOutMcastPkts"},
    ciscoipmrouteifinmcastoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastOctets"},
    ciscoipmrouteifinmcastpkts{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastPkts"},
    ciscoipmrouteifoutmcastoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastOctets"},
    ciscoipmrouteifoutmcastpkts{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastPkts"},
    ipmrouteinterfacehcinmcastoctets{YType::uint64, "ipMRouteInterfaceHCInMcastOctets"},
    ipmrouteinterfacehcoutmcastoctets{YType::uint64, "ipMRouteInterfaceHCOutMcastOctets"},
    ipmrouteinterfaceinmcastoctets{YType::uint32, "ipMRouteInterfaceInMcastOctets"},
    ipmrouteinterfaceoutmcastoctets{YType::uint32, "ipMRouteInterfaceOutMcastOctets"},
    ipmrouteinterfaceprotocol{YType::enumeration, "ipMRouteInterfaceProtocol"},
    ipmrouteinterfaceratelimit{YType::int32, "ipMRouteInterfaceRateLimit"},
    ipmrouteinterfacettl{YType::int32, "ipMRouteInterfaceTtl"}
{
    yang_name = "ipMRouteInterfaceEntry"; yang_parent_name = "ipMRouteInterfaceTable";
}

IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::~Ipmrouteinterfaceentry()
{
}

bool IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::has_data() const
{
    return ipmrouteinterfaceifindex.is_set
	|| ciscoipmrouteifhcinmcastpkts.is_set
	|| ciscoipmrouteifhcoutmcastpkts.is_set
	|| ciscoipmrouteifinmcastoctets.is_set
	|| ciscoipmrouteifinmcastpkts.is_set
	|| ciscoipmrouteifoutmcastoctets.is_set
	|| ciscoipmrouteifoutmcastpkts.is_set
	|| ipmrouteinterfacehcinmcastoctets.is_set
	|| ipmrouteinterfacehcoutmcastoctets.is_set
	|| ipmrouteinterfaceinmcastoctets.is_set
	|| ipmrouteinterfaceoutmcastoctets.is_set
	|| ipmrouteinterfaceprotocol.is_set
	|| ipmrouteinterfaceratelimit.is_set
	|| ipmrouteinterfacettl.is_set;
}

bool IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipmrouteinterfaceifindex.operation)
	|| is_set(ciscoipmrouteifhcinmcastpkts.operation)
	|| is_set(ciscoipmrouteifhcoutmcastpkts.operation)
	|| is_set(ciscoipmrouteifinmcastoctets.operation)
	|| is_set(ciscoipmrouteifinmcastpkts.operation)
	|| is_set(ciscoipmrouteifoutmcastoctets.operation)
	|| is_set(ciscoipmrouteifoutmcastpkts.operation)
	|| is_set(ipmrouteinterfacehcinmcastoctets.operation)
	|| is_set(ipmrouteinterfacehcoutmcastoctets.operation)
	|| is_set(ipmrouteinterfaceinmcastoctets.operation)
	|| is_set(ipmrouteinterfaceoutmcastoctets.operation)
	|| is_set(ipmrouteinterfaceprotocol.operation)
	|| is_set(ipmrouteinterfaceratelimit.operation)
	|| is_set(ipmrouteinterfacettl.operation);
}

std::string IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteInterfaceEntry" <<"[ipMRouteInterfaceIfIndex='" <<ipmrouteinterfaceifindex <<"']";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteinterfaceifindex.is_set || is_set(ipmrouteinterfaceifindex.operation)) leaf_name_data.push_back(ipmrouteinterfaceifindex.get_name_leafdata());
    if (ciscoipmrouteifhcinmcastpkts.is_set || is_set(ciscoipmrouteifhcinmcastpkts.operation)) leaf_name_data.push_back(ciscoipmrouteifhcinmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifhcoutmcastpkts.is_set || is_set(ciscoipmrouteifhcoutmcastpkts.operation)) leaf_name_data.push_back(ciscoipmrouteifhcoutmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifinmcastoctets.is_set || is_set(ciscoipmrouteifinmcastoctets.operation)) leaf_name_data.push_back(ciscoipmrouteifinmcastoctets.get_name_leafdata());
    if (ciscoipmrouteifinmcastpkts.is_set || is_set(ciscoipmrouteifinmcastpkts.operation)) leaf_name_data.push_back(ciscoipmrouteifinmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifoutmcastoctets.is_set || is_set(ciscoipmrouteifoutmcastoctets.operation)) leaf_name_data.push_back(ciscoipmrouteifoutmcastoctets.get_name_leafdata());
    if (ciscoipmrouteifoutmcastpkts.is_set || is_set(ciscoipmrouteifoutmcastpkts.operation)) leaf_name_data.push_back(ciscoipmrouteifoutmcastpkts.get_name_leafdata());
    if (ipmrouteinterfacehcinmcastoctets.is_set || is_set(ipmrouteinterfacehcinmcastoctets.operation)) leaf_name_data.push_back(ipmrouteinterfacehcinmcastoctets.get_name_leafdata());
    if (ipmrouteinterfacehcoutmcastoctets.is_set || is_set(ipmrouteinterfacehcoutmcastoctets.operation)) leaf_name_data.push_back(ipmrouteinterfacehcoutmcastoctets.get_name_leafdata());
    if (ipmrouteinterfaceinmcastoctets.is_set || is_set(ipmrouteinterfaceinmcastoctets.operation)) leaf_name_data.push_back(ipmrouteinterfaceinmcastoctets.get_name_leafdata());
    if (ipmrouteinterfaceoutmcastoctets.is_set || is_set(ipmrouteinterfaceoutmcastoctets.operation)) leaf_name_data.push_back(ipmrouteinterfaceoutmcastoctets.get_name_leafdata());
    if (ipmrouteinterfaceprotocol.is_set || is_set(ipmrouteinterfaceprotocol.operation)) leaf_name_data.push_back(ipmrouteinterfaceprotocol.get_name_leafdata());
    if (ipmrouteinterfaceratelimit.is_set || is_set(ipmrouteinterfaceratelimit.operation)) leaf_name_data.push_back(ipmrouteinterfaceratelimit.get_name_leafdata());
    if (ipmrouteinterfacettl.is_set || is_set(ipmrouteinterfacettl.operation)) leaf_name_data.push_back(ipmrouteinterfacettl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpmrouteStdMib::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteInterfaceIfIndex")
    {
        ipmrouteinterfaceifindex = value;
    }
    if(value_path == "ciscoIpMRouteIfHCInMcastPkts")
    {
        ciscoipmrouteifhcinmcastpkts = value;
    }
    if(value_path == "ciscoIpMRouteIfHCOutMcastPkts")
    {
        ciscoipmrouteifhcoutmcastpkts = value;
    }
    if(value_path == "ciscoIpMRouteIfInMcastOctets")
    {
        ciscoipmrouteifinmcastoctets = value;
    }
    if(value_path == "ciscoIpMRouteIfInMcastPkts")
    {
        ciscoipmrouteifinmcastpkts = value;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastOctets")
    {
        ciscoipmrouteifoutmcastoctets = value;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastPkts")
    {
        ciscoipmrouteifoutmcastpkts = value;
    }
    if(value_path == "ipMRouteInterfaceHCInMcastOctets")
    {
        ipmrouteinterfacehcinmcastoctets = value;
    }
    if(value_path == "ipMRouteInterfaceHCOutMcastOctets")
    {
        ipmrouteinterfacehcoutmcastoctets = value;
    }
    if(value_path == "ipMRouteInterfaceInMcastOctets")
    {
        ipmrouteinterfaceinmcastoctets = value;
    }
    if(value_path == "ipMRouteInterfaceOutMcastOctets")
    {
        ipmrouteinterfaceoutmcastoctets = value;
    }
    if(value_path == "ipMRouteInterfaceProtocol")
    {
        ipmrouteinterfaceprotocol = value;
    }
    if(value_path == "ipMRouteInterfaceRateLimit")
    {
        ipmrouteinterfaceratelimit = value;
    }
    if(value_path == "ipMRouteInterfaceTtl")
    {
        ipmrouteinterfacettl = value;
    }
}

IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundarytable()
{
    yang_name = "ipMRouteBoundaryTable"; yang_parent_name = "IPMROUTE-STD-MIB";
}

IpmrouteStdMib::Ipmrouteboundarytable::~Ipmrouteboundarytable()
{
}

bool IpmrouteStdMib::Ipmrouteboundarytable::has_data() const
{
    for (std::size_t index=0; index<ipmrouteboundaryentry.size(); index++)
    {
        if(ipmrouteboundaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool IpmrouteStdMib::Ipmrouteboundarytable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteboundaryentry.size(); index++)
    {
        if(ipmrouteboundaryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpmrouteStdMib::Ipmrouteboundarytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteBoundaryTable";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmrouteboundarytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmrouteboundarytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteBoundaryEntry")
    {
        for(auto const & c : ipmrouteboundaryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry>();
        c->parent = this;
        ipmrouteboundaryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmrouteboundarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmrouteboundaryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpmrouteStdMib::Ipmrouteboundarytable::set_value(const std::string & value_path, std::string value)
{
}

IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::Ipmrouteboundaryentry()
    :
    ipmrouteboundaryifindex{YType::int32, "ipMRouteBoundaryIfIndex"},
    ipmrouteboundaryaddress{YType::str, "ipMRouteBoundaryAddress"},
    ipmrouteboundaryaddressmask{YType::str, "ipMRouteBoundaryAddressMask"},
    ipmrouteboundarystatus{YType::enumeration, "ipMRouteBoundaryStatus"}
{
    yang_name = "ipMRouteBoundaryEntry"; yang_parent_name = "ipMRouteBoundaryTable";
}

IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::~Ipmrouteboundaryentry()
{
}

bool IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::has_data() const
{
    return ipmrouteboundaryifindex.is_set
	|| ipmrouteboundaryaddress.is_set
	|| ipmrouteboundaryaddressmask.is_set
	|| ipmrouteboundarystatus.is_set;
}

bool IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipmrouteboundaryifindex.operation)
	|| is_set(ipmrouteboundaryaddress.operation)
	|| is_set(ipmrouteboundaryaddressmask.operation)
	|| is_set(ipmrouteboundarystatus.operation);
}

std::string IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteBoundaryEntry" <<"[ipMRouteBoundaryIfIndex='" <<ipmrouteboundaryifindex <<"']" <<"[ipMRouteBoundaryAddress='" <<ipmrouteboundaryaddress <<"']" <<"[ipMRouteBoundaryAddressMask='" <<ipmrouteboundaryaddressmask <<"']";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteBoundaryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteboundaryifindex.is_set || is_set(ipmrouteboundaryifindex.operation)) leaf_name_data.push_back(ipmrouteboundaryifindex.get_name_leafdata());
    if (ipmrouteboundaryaddress.is_set || is_set(ipmrouteboundaryaddress.operation)) leaf_name_data.push_back(ipmrouteboundaryaddress.get_name_leafdata());
    if (ipmrouteboundaryaddressmask.is_set || is_set(ipmrouteboundaryaddressmask.operation)) leaf_name_data.push_back(ipmrouteboundaryaddressmask.get_name_leafdata());
    if (ipmrouteboundarystatus.is_set || is_set(ipmrouteboundarystatus.operation)) leaf_name_data.push_back(ipmrouteboundarystatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpmrouteStdMib::Ipmrouteboundarytable::Ipmrouteboundaryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteBoundaryIfIndex")
    {
        ipmrouteboundaryifindex = value;
    }
    if(value_path == "ipMRouteBoundaryAddress")
    {
        ipmrouteboundaryaddress = value;
    }
    if(value_path == "ipMRouteBoundaryAddressMask")
    {
        ipmrouteboundaryaddressmask = value;
    }
    if(value_path == "ipMRouteBoundaryStatus")
    {
        ipmrouteboundarystatus = value;
    }
}

IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenametable()
{
    yang_name = "ipMRouteScopeNameTable"; yang_parent_name = "IPMROUTE-STD-MIB";
}

IpmrouteStdMib::Ipmroutescopenametable::~Ipmroutescopenametable()
{
}

bool IpmrouteStdMib::Ipmroutescopenametable::has_data() const
{
    for (std::size_t index=0; index<ipmroutescopenameentry.size(); index++)
    {
        if(ipmroutescopenameentry[index]->has_data())
            return true;
    }
    return false;
}

bool IpmrouteStdMib::Ipmroutescopenametable::has_operation() const
{
    for (std::size_t index=0; index<ipmroutescopenameentry.size(); index++)
    {
        if(ipmroutescopenameentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpmrouteStdMib::Ipmroutescopenametable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteScopeNameTable";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmroutescopenametable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmroutescopenametable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteScopeNameEntry")
    {
        for(auto const & c : ipmroutescopenameentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry>();
        c->parent = this;
        ipmroutescopenameentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmroutescopenametable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmroutescopenameentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpmrouteStdMib::Ipmroutescopenametable::set_value(const std::string & value_path, std::string value)
{
}

IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::Ipmroutescopenameentry()
    :
    ipmroutescopenameaddress{YType::str, "ipMRouteScopeNameAddress"},
    ipmroutescopenameaddressmask{YType::str, "ipMRouteScopeNameAddressMask"},
    ipmroutescopenamelanguage{YType::str, "ipMRouteScopeNameLanguage"},
    ipmroutescopenamedefault{YType::boolean, "ipMRouteScopeNameDefault"},
    ipmroutescopenamestatus{YType::enumeration, "ipMRouteScopeNameStatus"},
    ipmroutescopenamestring{YType::str, "ipMRouteScopeNameString"}
{
    yang_name = "ipMRouteScopeNameEntry"; yang_parent_name = "ipMRouteScopeNameTable";
}

IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::~Ipmroutescopenameentry()
{
}

bool IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::has_data() const
{
    return ipmroutescopenameaddress.is_set
	|| ipmroutescopenameaddressmask.is_set
	|| ipmroutescopenamelanguage.is_set
	|| ipmroutescopenamedefault.is_set
	|| ipmroutescopenamestatus.is_set
	|| ipmroutescopenamestring.is_set;
}

bool IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipmroutescopenameaddress.operation)
	|| is_set(ipmroutescopenameaddressmask.operation)
	|| is_set(ipmroutescopenamelanguage.operation)
	|| is_set(ipmroutescopenamedefault.operation)
	|| is_set(ipmroutescopenamestatus.operation)
	|| is_set(ipmroutescopenamestring.operation);
}

std::string IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteScopeNameEntry" <<"[ipMRouteScopeNameAddress='" <<ipmroutescopenameaddress <<"']" <<"[ipMRouteScopeNameAddressMask='" <<ipmroutescopenameaddressmask <<"']" <<"[ipMRouteScopeNameLanguage='" <<ipmroutescopenamelanguage <<"']";

    return path_buffer.str();

}

const EntityPath IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteScopeNameTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutescopenameaddress.is_set || is_set(ipmroutescopenameaddress.operation)) leaf_name_data.push_back(ipmroutescopenameaddress.get_name_leafdata());
    if (ipmroutescopenameaddressmask.is_set || is_set(ipmroutescopenameaddressmask.operation)) leaf_name_data.push_back(ipmroutescopenameaddressmask.get_name_leafdata());
    if (ipmroutescopenamelanguage.is_set || is_set(ipmroutescopenamelanguage.operation)) leaf_name_data.push_back(ipmroutescopenamelanguage.get_name_leafdata());
    if (ipmroutescopenamedefault.is_set || is_set(ipmroutescopenamedefault.operation)) leaf_name_data.push_back(ipmroutescopenamedefault.get_name_leafdata());
    if (ipmroutescopenamestatus.is_set || is_set(ipmroutescopenamestatus.operation)) leaf_name_data.push_back(ipmroutescopenamestatus.get_name_leafdata());
    if (ipmroutescopenamestring.is_set || is_set(ipmroutescopenamestring.operation)) leaf_name_data.push_back(ipmroutescopenamestring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpmrouteStdMib::Ipmroutescopenametable::Ipmroutescopenameentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteScopeNameAddress")
    {
        ipmroutescopenameaddress = value;
    }
    if(value_path == "ipMRouteScopeNameAddressMask")
    {
        ipmroutescopenameaddressmask = value;
    }
    if(value_path == "ipMRouteScopeNameLanguage")
    {
        ipmroutescopenamelanguage = value;
    }
    if(value_path == "ipMRouteScopeNameDefault")
    {
        ipmroutescopenamedefault = value;
    }
    if(value_path == "ipMRouteScopeNameStatus")
    {
        ipmroutescopenamestatus = value;
    }
    if(value_path == "ipMRouteScopeNameString")
    {
        ipmroutescopenamestring = value;
    }
}

const Enum::YLeaf IpmrouteStdMib::Ipmroute::IpmrouteenableEnum::enabled {1, "enabled"};
const Enum::YLeaf IpmrouteStdMib::Ipmroute::IpmrouteenableEnum::disabled {2, "disabled"};

const Enum::YLeaf IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::IpmrouterttypeEnum::unicast {1, "unicast"};
const Enum::YLeaf IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::IpmrouterttypeEnum::multicast {2, "multicast"};

const Enum::YLeaf IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::IpmroutenexthopstateEnum::pruned {1, "pruned"};
const Enum::YLeaf IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::IpmroutenexthopstateEnum::forwarding {2, "forwarding"};


}
}

