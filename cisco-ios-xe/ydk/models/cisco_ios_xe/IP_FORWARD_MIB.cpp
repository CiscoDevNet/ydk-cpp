
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IP_FORWARD_MIB.hpp"

namespace ydk {
namespace IP_FORWARD_MIB {

IpForwardMib::IpForwardMib()
    :
    ipcidrroutetable(std::make_shared<IpForwardMib::Ipcidrroutetable>())
	,ipforward(std::make_shared<IpForwardMib::Ipforward>())
	,ipforwardtable(std::make_shared<IpForwardMib::Ipforwardtable>())
{
    ipcidrroutetable->parent = this;

    ipforward->parent = this;

    ipforwardtable->parent = this;

    yang_name = "IP-FORWARD-MIB"; yang_parent_name = "IP-FORWARD-MIB";
}

IpForwardMib::~IpForwardMib()
{
}

bool IpForwardMib::has_data() const
{
    return (ipcidrroutetable !=  nullptr && ipcidrroutetable->has_data())
	|| (ipforward !=  nullptr && ipforward->has_data())
	|| (ipforwardtable !=  nullptr && ipforwardtable->has_data());
}

bool IpForwardMib::has_operation() const
{
    return is_set(operation)
	|| (ipcidrroutetable !=  nullptr && ipcidrroutetable->has_operation())
	|| (ipforward !=  nullptr && ipforward->has_operation())
	|| (ipforwardtable !=  nullptr && ipforwardtable->has_operation());
}

std::string IpForwardMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB";

    return path_buffer.str();

}

const EntityPath IpForwardMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> IpForwardMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipCidrRouteTable")
    {
        if(ipcidrroutetable == nullptr)
        {
            ipcidrroutetable = std::make_shared<IpForwardMib::Ipcidrroutetable>();
        }
        return ipcidrroutetable;
    }

    if(child_yang_name == "ipForward")
    {
        if(ipforward == nullptr)
        {
            ipforward = std::make_shared<IpForwardMib::Ipforward>();
        }
        return ipforward;
    }

    if(child_yang_name == "ipForwardTable")
    {
        if(ipforwardtable == nullptr)
        {
            ipforwardtable = std::make_shared<IpForwardMib::Ipforwardtable>();
        }
        return ipforwardtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpForwardMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcidrroutetable != nullptr)
    {
        children["ipCidrRouteTable"] = ipcidrroutetable;
    }

    if(ipforward != nullptr)
    {
        children["ipForward"] = ipforward;
    }

    if(ipforwardtable != nullptr)
    {
        children["ipForwardTable"] = ipforwardtable;
    }

    return children;
}

void IpForwardMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IpForwardMib::clone_ptr() const
{
    return std::make_shared<IpForwardMib>();
}

std::string IpForwardMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IpForwardMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IpForwardMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

IpForwardMib::Ipforward::Ipforward()
    :
    ipcidrroutenumber{YType::uint32, "ipCidrRouteNumber"},
    ipforwardnumber{YType::uint32, "ipForwardNumber"}
{
    yang_name = "ipForward"; yang_parent_name = "IP-FORWARD-MIB";
}

IpForwardMib::Ipforward::~Ipforward()
{
}

bool IpForwardMib::Ipforward::has_data() const
{
    return ipcidrroutenumber.is_set
	|| ipforwardnumber.is_set;
}

bool IpForwardMib::Ipforward::has_operation() const
{
    return is_set(operation)
	|| is_set(ipcidrroutenumber.operation)
	|| is_set(ipforwardnumber.operation);
}

std::string IpForwardMib::Ipforward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipForward";

    return path_buffer.str();

}

const EntityPath IpForwardMib::Ipforward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipcidrroutenumber.is_set || is_set(ipcidrroutenumber.operation)) leaf_name_data.push_back(ipcidrroutenumber.get_name_leafdata());
    if (ipforwardnumber.is_set || is_set(ipforwardnumber.operation)) leaf_name_data.push_back(ipforwardnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpForwardMib::Ipforward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpForwardMib::Ipforward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpForwardMib::Ipforward::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipCidrRouteNumber")
    {
        ipcidrroutenumber = value;
    }
    if(value_path == "ipForwardNumber")
    {
        ipforwardnumber = value;
    }
}

IpForwardMib::Ipforwardtable::Ipforwardtable()
{
    yang_name = "ipForwardTable"; yang_parent_name = "IP-FORWARD-MIB";
}

IpForwardMib::Ipforwardtable::~Ipforwardtable()
{
}

bool IpForwardMib::Ipforwardtable::has_data() const
{
    for (std::size_t index=0; index<ipforwardentry.size(); index++)
    {
        if(ipforwardentry[index]->has_data())
            return true;
    }
    return false;
}

bool IpForwardMib::Ipforwardtable::has_operation() const
{
    for (std::size_t index=0; index<ipforwardentry.size(); index++)
    {
        if(ipforwardentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpForwardMib::Ipforwardtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipForwardTable";

    return path_buffer.str();

}

const EntityPath IpForwardMib::Ipforwardtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpForwardMib::Ipforwardtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipForwardEntry")
    {
        for(auto const & c : ipforwardentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpForwardMib::Ipforwardtable::Ipforwardentry>();
        c->parent = this;
        ipforwardentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpForwardMib::Ipforwardtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipforwardentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpForwardMib::Ipforwardtable::set_value(const std::string & value_path, std::string value)
{
}

IpForwardMib::Ipforwardtable::Ipforwardentry::Ipforwardentry()
    :
    ipforwarddest{YType::str, "ipForwardDest"},
    ipforwardproto{YType::enumeration, "ipForwardProto"},
    ipforwardpolicy{YType::int32, "ipForwardPolicy"},
    ipforwardnexthop{YType::str, "ipForwardNextHop"},
    ipforwardage{YType::int32, "ipForwardAge"},
    ipforwardifindex{YType::int32, "ipForwardIfIndex"},
    ipforwardinfo{YType::str, "ipForwardInfo"},
    ipforwardmask{YType::str, "ipForwardMask"},
    ipforwardmetric1{YType::int32, "ipForwardMetric1"},
    ipforwardmetric2{YType::int32, "ipForwardMetric2"},
    ipforwardmetric3{YType::int32, "ipForwardMetric3"},
    ipforwardmetric4{YType::int32, "ipForwardMetric4"},
    ipforwardmetric5{YType::int32, "ipForwardMetric5"},
    ipforwardnexthopas{YType::int32, "ipForwardNextHopAS"},
    ipforwardtype{YType::enumeration, "ipForwardType"}
{
    yang_name = "ipForwardEntry"; yang_parent_name = "ipForwardTable";
}

IpForwardMib::Ipforwardtable::Ipforwardentry::~Ipforwardentry()
{
}

bool IpForwardMib::Ipforwardtable::Ipforwardentry::has_data() const
{
    return ipforwarddest.is_set
	|| ipforwardproto.is_set
	|| ipforwardpolicy.is_set
	|| ipforwardnexthop.is_set
	|| ipforwardage.is_set
	|| ipforwardifindex.is_set
	|| ipforwardinfo.is_set
	|| ipforwardmask.is_set
	|| ipforwardmetric1.is_set
	|| ipforwardmetric2.is_set
	|| ipforwardmetric3.is_set
	|| ipforwardmetric4.is_set
	|| ipforwardmetric5.is_set
	|| ipforwardnexthopas.is_set
	|| ipforwardtype.is_set;
}

bool IpForwardMib::Ipforwardtable::Ipforwardentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipforwarddest.operation)
	|| is_set(ipforwardproto.operation)
	|| is_set(ipforwardpolicy.operation)
	|| is_set(ipforwardnexthop.operation)
	|| is_set(ipforwardage.operation)
	|| is_set(ipforwardifindex.operation)
	|| is_set(ipforwardinfo.operation)
	|| is_set(ipforwardmask.operation)
	|| is_set(ipforwardmetric1.operation)
	|| is_set(ipforwardmetric2.operation)
	|| is_set(ipforwardmetric3.operation)
	|| is_set(ipforwardmetric4.operation)
	|| is_set(ipforwardmetric5.operation)
	|| is_set(ipforwardnexthopas.operation)
	|| is_set(ipforwardtype.operation);
}

std::string IpForwardMib::Ipforwardtable::Ipforwardentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipForwardEntry" <<"[ipForwardDest='" <<ipforwarddest <<"']" <<"[ipForwardProto='" <<ipforwardproto <<"']" <<"[ipForwardPolicy='" <<ipforwardpolicy <<"']" <<"[ipForwardNextHop='" <<ipforwardnexthop <<"']";

    return path_buffer.str();

}

const EntityPath IpForwardMib::Ipforwardtable::Ipforwardentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/ipForwardTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipforwarddest.is_set || is_set(ipforwarddest.operation)) leaf_name_data.push_back(ipforwarddest.get_name_leafdata());
    if (ipforwardproto.is_set || is_set(ipforwardproto.operation)) leaf_name_data.push_back(ipforwardproto.get_name_leafdata());
    if (ipforwardpolicy.is_set || is_set(ipforwardpolicy.operation)) leaf_name_data.push_back(ipforwardpolicy.get_name_leafdata());
    if (ipforwardnexthop.is_set || is_set(ipforwardnexthop.operation)) leaf_name_data.push_back(ipforwardnexthop.get_name_leafdata());
    if (ipforwardage.is_set || is_set(ipforwardage.operation)) leaf_name_data.push_back(ipforwardage.get_name_leafdata());
    if (ipforwardifindex.is_set || is_set(ipforwardifindex.operation)) leaf_name_data.push_back(ipforwardifindex.get_name_leafdata());
    if (ipforwardinfo.is_set || is_set(ipforwardinfo.operation)) leaf_name_data.push_back(ipforwardinfo.get_name_leafdata());
    if (ipforwardmask.is_set || is_set(ipforwardmask.operation)) leaf_name_data.push_back(ipforwardmask.get_name_leafdata());
    if (ipforwardmetric1.is_set || is_set(ipforwardmetric1.operation)) leaf_name_data.push_back(ipforwardmetric1.get_name_leafdata());
    if (ipforwardmetric2.is_set || is_set(ipforwardmetric2.operation)) leaf_name_data.push_back(ipforwardmetric2.get_name_leafdata());
    if (ipforwardmetric3.is_set || is_set(ipforwardmetric3.operation)) leaf_name_data.push_back(ipforwardmetric3.get_name_leafdata());
    if (ipforwardmetric4.is_set || is_set(ipforwardmetric4.operation)) leaf_name_data.push_back(ipforwardmetric4.get_name_leafdata());
    if (ipforwardmetric5.is_set || is_set(ipforwardmetric5.operation)) leaf_name_data.push_back(ipforwardmetric5.get_name_leafdata());
    if (ipforwardnexthopas.is_set || is_set(ipforwardnexthopas.operation)) leaf_name_data.push_back(ipforwardnexthopas.get_name_leafdata());
    if (ipforwardtype.is_set || is_set(ipforwardtype.operation)) leaf_name_data.push_back(ipforwardtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpForwardMib::Ipforwardtable::Ipforwardentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpForwardMib::Ipforwardtable::Ipforwardentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpForwardMib::Ipforwardtable::Ipforwardentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipForwardDest")
    {
        ipforwarddest = value;
    }
    if(value_path == "ipForwardProto")
    {
        ipforwardproto = value;
    }
    if(value_path == "ipForwardPolicy")
    {
        ipforwardpolicy = value;
    }
    if(value_path == "ipForwardNextHop")
    {
        ipforwardnexthop = value;
    }
    if(value_path == "ipForwardAge")
    {
        ipforwardage = value;
    }
    if(value_path == "ipForwardIfIndex")
    {
        ipforwardifindex = value;
    }
    if(value_path == "ipForwardInfo")
    {
        ipforwardinfo = value;
    }
    if(value_path == "ipForwardMask")
    {
        ipforwardmask = value;
    }
    if(value_path == "ipForwardMetric1")
    {
        ipforwardmetric1 = value;
    }
    if(value_path == "ipForwardMetric2")
    {
        ipforwardmetric2 = value;
    }
    if(value_path == "ipForwardMetric3")
    {
        ipforwardmetric3 = value;
    }
    if(value_path == "ipForwardMetric4")
    {
        ipforwardmetric4 = value;
    }
    if(value_path == "ipForwardMetric5")
    {
        ipforwardmetric5 = value;
    }
    if(value_path == "ipForwardNextHopAS")
    {
        ipforwardnexthopas = value;
    }
    if(value_path == "ipForwardType")
    {
        ipforwardtype = value;
    }
}

IpForwardMib::Ipcidrroutetable::Ipcidrroutetable()
{
    yang_name = "ipCidrRouteTable"; yang_parent_name = "IP-FORWARD-MIB";
}

IpForwardMib::Ipcidrroutetable::~Ipcidrroutetable()
{
}

bool IpForwardMib::Ipcidrroutetable::has_data() const
{
    for (std::size_t index=0; index<ipcidrrouteentry.size(); index++)
    {
        if(ipcidrrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool IpForwardMib::Ipcidrroutetable::has_operation() const
{
    for (std::size_t index=0; index<ipcidrrouteentry.size(); index++)
    {
        if(ipcidrrouteentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpForwardMib::Ipcidrroutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipCidrRouteTable";

    return path_buffer.str();

}

const EntityPath IpForwardMib::Ipcidrroutetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpForwardMib::Ipcidrroutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipCidrRouteEntry")
    {
        for(auto const & c : ipcidrrouteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry>();
        c->parent = this;
        ipcidrrouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpForwardMib::Ipcidrroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipcidrrouteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpForwardMib::Ipcidrroutetable::set_value(const std::string & value_path, std::string value)
{
}

IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::Ipcidrrouteentry()
    :
    ipcidrroutedest{YType::str, "ipCidrRouteDest"},
    ipcidrroutemask{YType::str, "ipCidrRouteMask"},
    ipcidrroutetos{YType::int32, "ipCidrRouteTos"},
    ipcidrroutenexthop{YType::str, "ipCidrRouteNextHop"},
    ipcidrrouteage{YType::int32, "ipCidrRouteAge"},
    ipcidrrouteifindex{YType::int32, "ipCidrRouteIfIndex"},
    ipcidrrouteinfo{YType::str, "ipCidrRouteInfo"},
    ipcidrroutemetric1{YType::int32, "ipCidrRouteMetric1"},
    ipcidrroutemetric2{YType::int32, "ipCidrRouteMetric2"},
    ipcidrroutemetric3{YType::int32, "ipCidrRouteMetric3"},
    ipcidrroutemetric4{YType::int32, "ipCidrRouteMetric4"},
    ipcidrroutemetric5{YType::int32, "ipCidrRouteMetric5"},
    ipcidrroutenexthopas{YType::int32, "ipCidrRouteNextHopAS"},
    ipcidrrouteproto{YType::enumeration, "ipCidrRouteProto"},
    ipcidrroutestatus{YType::enumeration, "ipCidrRouteStatus"},
    ipcidrroutetype{YType::enumeration, "ipCidrRouteType"}
{
    yang_name = "ipCidrRouteEntry"; yang_parent_name = "ipCidrRouteTable";
}

IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::~Ipcidrrouteentry()
{
}

bool IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::has_data() const
{
    return ipcidrroutedest.is_set
	|| ipcidrroutemask.is_set
	|| ipcidrroutetos.is_set
	|| ipcidrroutenexthop.is_set
	|| ipcidrrouteage.is_set
	|| ipcidrrouteifindex.is_set
	|| ipcidrrouteinfo.is_set
	|| ipcidrroutemetric1.is_set
	|| ipcidrroutemetric2.is_set
	|| ipcidrroutemetric3.is_set
	|| ipcidrroutemetric4.is_set
	|| ipcidrroutemetric5.is_set
	|| ipcidrroutenexthopas.is_set
	|| ipcidrrouteproto.is_set
	|| ipcidrroutestatus.is_set
	|| ipcidrroutetype.is_set;
}

bool IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipcidrroutedest.operation)
	|| is_set(ipcidrroutemask.operation)
	|| is_set(ipcidrroutetos.operation)
	|| is_set(ipcidrroutenexthop.operation)
	|| is_set(ipcidrrouteage.operation)
	|| is_set(ipcidrrouteifindex.operation)
	|| is_set(ipcidrrouteinfo.operation)
	|| is_set(ipcidrroutemetric1.operation)
	|| is_set(ipcidrroutemetric2.operation)
	|| is_set(ipcidrroutemetric3.operation)
	|| is_set(ipcidrroutemetric4.operation)
	|| is_set(ipcidrroutemetric5.operation)
	|| is_set(ipcidrroutenexthopas.operation)
	|| is_set(ipcidrrouteproto.operation)
	|| is_set(ipcidrroutestatus.operation)
	|| is_set(ipcidrroutetype.operation);
}

std::string IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipCidrRouteEntry" <<"[ipCidrRouteDest='" <<ipcidrroutedest <<"']" <<"[ipCidrRouteMask='" <<ipcidrroutemask <<"']" <<"[ipCidrRouteTos='" <<ipcidrroutetos <<"']" <<"[ipCidrRouteNextHop='" <<ipcidrroutenexthop <<"']";

    return path_buffer.str();

}

const EntityPath IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/ipCidrRouteTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipcidrroutedest.is_set || is_set(ipcidrroutedest.operation)) leaf_name_data.push_back(ipcidrroutedest.get_name_leafdata());
    if (ipcidrroutemask.is_set || is_set(ipcidrroutemask.operation)) leaf_name_data.push_back(ipcidrroutemask.get_name_leafdata());
    if (ipcidrroutetos.is_set || is_set(ipcidrroutetos.operation)) leaf_name_data.push_back(ipcidrroutetos.get_name_leafdata());
    if (ipcidrroutenexthop.is_set || is_set(ipcidrroutenexthop.operation)) leaf_name_data.push_back(ipcidrroutenexthop.get_name_leafdata());
    if (ipcidrrouteage.is_set || is_set(ipcidrrouteage.operation)) leaf_name_data.push_back(ipcidrrouteage.get_name_leafdata());
    if (ipcidrrouteifindex.is_set || is_set(ipcidrrouteifindex.operation)) leaf_name_data.push_back(ipcidrrouteifindex.get_name_leafdata());
    if (ipcidrrouteinfo.is_set || is_set(ipcidrrouteinfo.operation)) leaf_name_data.push_back(ipcidrrouteinfo.get_name_leafdata());
    if (ipcidrroutemetric1.is_set || is_set(ipcidrroutemetric1.operation)) leaf_name_data.push_back(ipcidrroutemetric1.get_name_leafdata());
    if (ipcidrroutemetric2.is_set || is_set(ipcidrroutemetric2.operation)) leaf_name_data.push_back(ipcidrroutemetric2.get_name_leafdata());
    if (ipcidrroutemetric3.is_set || is_set(ipcidrroutemetric3.operation)) leaf_name_data.push_back(ipcidrroutemetric3.get_name_leafdata());
    if (ipcidrroutemetric4.is_set || is_set(ipcidrroutemetric4.operation)) leaf_name_data.push_back(ipcidrroutemetric4.get_name_leafdata());
    if (ipcidrroutemetric5.is_set || is_set(ipcidrroutemetric5.operation)) leaf_name_data.push_back(ipcidrroutemetric5.get_name_leafdata());
    if (ipcidrroutenexthopas.is_set || is_set(ipcidrroutenexthopas.operation)) leaf_name_data.push_back(ipcidrroutenexthopas.get_name_leafdata());
    if (ipcidrrouteproto.is_set || is_set(ipcidrrouteproto.operation)) leaf_name_data.push_back(ipcidrrouteproto.get_name_leafdata());
    if (ipcidrroutestatus.is_set || is_set(ipcidrroutestatus.operation)) leaf_name_data.push_back(ipcidrroutestatus.get_name_leafdata());
    if (ipcidrroutetype.is_set || is_set(ipcidrroutetype.operation)) leaf_name_data.push_back(ipcidrroutetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipCidrRouteDest")
    {
        ipcidrroutedest = value;
    }
    if(value_path == "ipCidrRouteMask")
    {
        ipcidrroutemask = value;
    }
    if(value_path == "ipCidrRouteTos")
    {
        ipcidrroutetos = value;
    }
    if(value_path == "ipCidrRouteNextHop")
    {
        ipcidrroutenexthop = value;
    }
    if(value_path == "ipCidrRouteAge")
    {
        ipcidrrouteage = value;
    }
    if(value_path == "ipCidrRouteIfIndex")
    {
        ipcidrrouteifindex = value;
    }
    if(value_path == "ipCidrRouteInfo")
    {
        ipcidrrouteinfo = value;
    }
    if(value_path == "ipCidrRouteMetric1")
    {
        ipcidrroutemetric1 = value;
    }
    if(value_path == "ipCidrRouteMetric2")
    {
        ipcidrroutemetric2 = value;
    }
    if(value_path == "ipCidrRouteMetric3")
    {
        ipcidrroutemetric3 = value;
    }
    if(value_path == "ipCidrRouteMetric4")
    {
        ipcidrroutemetric4 = value;
    }
    if(value_path == "ipCidrRouteMetric5")
    {
        ipcidrroutemetric5 = value;
    }
    if(value_path == "ipCidrRouteNextHopAS")
    {
        ipcidrroutenexthopas = value;
    }
    if(value_path == "ipCidrRouteProto")
    {
        ipcidrrouteproto = value;
    }
    if(value_path == "ipCidrRouteStatus")
    {
        ipcidrroutestatus = value;
    }
    if(value_path == "ipCidrRouteType")
    {
        ipcidrroutetype = value;
    }
}

const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::other {1, "other"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::local {2, "local"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::netmgmt {3, "netmgmt"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::icmp {4, "icmp"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::egp {5, "egp"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::ggp {6, "ggp"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::hello {7, "hello"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::rip {8, "rip"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::is_is {9, "is-is"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::es_is {10, "es-is"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::ospf {13, "ospf"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::bgp {14, "bgp"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardprotoEnum::idpr {15, "idpr"};

const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardtypeEnum::other {1, "other"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardtypeEnum::invalid {2, "invalid"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardtypeEnum::local {3, "local"};
const Enum::YLeaf IpForwardMib::Ipforwardtable::Ipforwardentry::IpforwardtypeEnum::remote {4, "remote"};

const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrroutetypeEnum::other {1, "other"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrroutetypeEnum::reject {2, "reject"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrroutetypeEnum::local {3, "local"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrroutetypeEnum::remote {4, "remote"};

const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::other {1, "other"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::local {2, "local"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::netmgmt {3, "netmgmt"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::icmp {4, "icmp"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::egp {5, "egp"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::ggp {6, "ggp"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::hello {7, "hello"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::rip {8, "rip"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::isIs {9, "isIs"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::esIs {10, "esIs"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::ospf {13, "ospf"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::bgp {14, "bgp"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::idpr {15, "idpr"};
const Enum::YLeaf IpForwardMib::Ipcidrroutetable::Ipcidrrouteentry::IpcidrrouteprotoEnum::ciscoEigrp {16, "ciscoEigrp"};


}
}

