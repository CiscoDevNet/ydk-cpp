
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RFC1213_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace RFC1213_MIB {

RFC1213MIB::RFC1213MIB()
    :
    system(std::make_shared<RFC1213MIB::System>())
	,interfaces(std::make_shared<RFC1213MIB::Interfaces>())
	,ip(std::make_shared<RFC1213MIB::Ip>())
	,icmp(std::make_shared<RFC1213MIB::Icmp>())
	,tcp(std::make_shared<RFC1213MIB::Tcp>())
	,udp(std::make_shared<RFC1213MIB::Udp>())
	,egp(std::make_shared<RFC1213MIB::Egp>())
	,snmp(std::make_shared<RFC1213MIB::Snmp>())
	,iftable(std::make_shared<RFC1213MIB::Iftable>())
	,attable(std::make_shared<RFC1213MIB::Attable>())
	,ipaddrtable(std::make_shared<RFC1213MIB::Ipaddrtable>())
	,iproutetable(std::make_shared<RFC1213MIB::Iproutetable>())
	,ipnettomediatable(std::make_shared<RFC1213MIB::Ipnettomediatable>())
	,tcpconntable(std::make_shared<RFC1213MIB::Tcpconntable>())
	,udptable(std::make_shared<RFC1213MIB::Udptable>())
	,egpneightable(std::make_shared<RFC1213MIB::Egpneightable>())
{
    system->parent = this;
    interfaces->parent = this;
    ip->parent = this;
    icmp->parent = this;
    tcp->parent = this;
    udp->parent = this;
    egp->parent = this;
    snmp->parent = this;
    iftable->parent = this;
    attable->parent = this;
    ipaddrtable->parent = this;
    iproutetable->parent = this;
    ipnettomediatable->parent = this;
    tcpconntable->parent = this;
    udptable->parent = this;
    egpneightable->parent = this;

    yang_name = "RFC1213-MIB"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

RFC1213MIB::~RFC1213MIB()
{
}

bool RFC1213MIB::has_data() const
{
    return (system !=  nullptr && system->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (egp !=  nullptr && egp->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (iftable !=  nullptr && iftable->has_data())
	|| (attable !=  nullptr && attable->has_data())
	|| (ipaddrtable !=  nullptr && ipaddrtable->has_data())
	|| (iproutetable !=  nullptr && iproutetable->has_data())
	|| (ipnettomediatable !=  nullptr && ipnettomediatable->has_data())
	|| (tcpconntable !=  nullptr && tcpconntable->has_data())
	|| (udptable !=  nullptr && udptable->has_data())
	|| (egpneightable !=  nullptr && egpneightable->has_data());
}

bool RFC1213MIB::has_operation() const
{
    return is_set(yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (egp !=  nullptr && egp->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (iftable !=  nullptr && iftable->has_operation())
	|| (attable !=  nullptr && attable->has_operation())
	|| (ipaddrtable !=  nullptr && ipaddrtable->has_operation())
	|| (iproutetable !=  nullptr && iproutetable->has_operation())
	|| (ipnettomediatable !=  nullptr && ipnettomediatable->has_operation())
	|| (tcpconntable !=  nullptr && tcpconntable->has_operation())
	|| (udptable !=  nullptr && udptable->has_operation())
	|| (egpneightable !=  nullptr && egpneightable->has_operation());
}

std::string RFC1213MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<RFC1213MIB::System>();
        }
        return system;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<RFC1213MIB::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<RFC1213MIB::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<RFC1213MIB::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<RFC1213MIB::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<RFC1213MIB::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "egp")
    {
        if(egp == nullptr)
        {
            egp = std::make_shared<RFC1213MIB::Egp>();
        }
        return egp;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<RFC1213MIB::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "ifTable")
    {
        if(iftable == nullptr)
        {
            iftable = std::make_shared<RFC1213MIB::Iftable>();
        }
        return iftable;
    }

    if(child_yang_name == "atTable")
    {
        if(attable == nullptr)
        {
            attable = std::make_shared<RFC1213MIB::Attable>();
        }
        return attable;
    }

    if(child_yang_name == "ipAddrTable")
    {
        if(ipaddrtable == nullptr)
        {
            ipaddrtable = std::make_shared<RFC1213MIB::Ipaddrtable>();
        }
        return ipaddrtable;
    }

    if(child_yang_name == "ipRouteTable")
    {
        if(iproutetable == nullptr)
        {
            iproutetable = std::make_shared<RFC1213MIB::Iproutetable>();
        }
        return iproutetable;
    }

    if(child_yang_name == "ipNetToMediaTable")
    {
        if(ipnettomediatable == nullptr)
        {
            ipnettomediatable = std::make_shared<RFC1213MIB::Ipnettomediatable>();
        }
        return ipnettomediatable;
    }

    if(child_yang_name == "tcpConnTable")
    {
        if(tcpconntable == nullptr)
        {
            tcpconntable = std::make_shared<RFC1213MIB::Tcpconntable>();
        }
        return tcpconntable;
    }

    if(child_yang_name == "udpTable")
    {
        if(udptable == nullptr)
        {
            udptable = std::make_shared<RFC1213MIB::Udptable>();
        }
        return udptable;
    }

    if(child_yang_name == "egpNeighTable")
    {
        if(egpneightable == nullptr)
        {
            egpneightable = std::make_shared<RFC1213MIB::Egpneightable>();
        }
        return egpneightable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(egp != nullptr)
    {
        children["egp"] = egp;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(iftable != nullptr)
    {
        children["ifTable"] = iftable;
    }

    if(attable != nullptr)
    {
        children["atTable"] = attable;
    }

    if(ipaddrtable != nullptr)
    {
        children["ipAddrTable"] = ipaddrtable;
    }

    if(iproutetable != nullptr)
    {
        children["ipRouteTable"] = iproutetable;
    }

    if(ipnettomediatable != nullptr)
    {
        children["ipNetToMediaTable"] = ipnettomediatable;
    }

    if(tcpconntable != nullptr)
    {
        children["tcpConnTable"] = tcpconntable;
    }

    if(udptable != nullptr)
    {
        children["udpTable"] = udptable;
    }

    if(egpneightable != nullptr)
    {
        children["egpNeighTable"] = egpneightable;
    }

    return children;
}

void RFC1213MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RFC1213MIB::clone_ptr() const
{
    return std::make_shared<RFC1213MIB>();
}

std::string RFC1213MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RFC1213MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RFC1213MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RFC1213MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RFC1213MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "interfaces" || name == "ip" || name == "icmp" || name == "tcp" || name == "udp" || name == "egp" || name == "snmp" || name == "ifTable" || name == "atTable" || name == "ipAddrTable" || name == "ipRouteTable" || name == "ipNetToMediaTable" || name == "tcpConnTable" || name == "udpTable" || name == "egpNeighTable")
        return true;
    return false;
}

RFC1213MIB::System::System()
    :
    sysdescr{YType::str, "sysDescr"},
    sysobjectid{YType::str, "sysObjectID"},
    sysuptime{YType::uint32, "sysUpTime"},
    syscontact{YType::str, "sysContact"},
    sysname{YType::str, "sysName"},
    syslocation{YType::str, "sysLocation"},
    sysservices{YType::int32, "sysServices"}
{

    yang_name = "system"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::System::~System()
{
}

bool RFC1213MIB::System::has_data() const
{
    return sysdescr.is_set
	|| sysobjectid.is_set
	|| sysuptime.is_set
	|| syscontact.is_set
	|| sysname.is_set
	|| syslocation.is_set
	|| sysservices.is_set;
}

bool RFC1213MIB::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysdescr.yfilter)
	|| ydk::is_set(sysobjectid.yfilter)
	|| ydk::is_set(sysuptime.yfilter)
	|| ydk::is_set(syscontact.yfilter)
	|| ydk::is_set(sysname.yfilter)
	|| ydk::is_set(syslocation.yfilter)
	|| ydk::is_set(sysservices.yfilter);
}

std::string RFC1213MIB::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysdescr.is_set || is_set(sysdescr.yfilter)) leaf_name_data.push_back(sysdescr.get_name_leafdata());
    if (sysobjectid.is_set || is_set(sysobjectid.yfilter)) leaf_name_data.push_back(sysobjectid.get_name_leafdata());
    if (sysuptime.is_set || is_set(sysuptime.yfilter)) leaf_name_data.push_back(sysuptime.get_name_leafdata());
    if (syscontact.is_set || is_set(syscontact.yfilter)) leaf_name_data.push_back(syscontact.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.yfilter)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (syslocation.is_set || is_set(syslocation.yfilter)) leaf_name_data.push_back(syslocation.get_name_leafdata());
    if (sysservices.is_set || is_set(sysservices.yfilter)) leaf_name_data.push_back(sysservices.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysDescr")
    {
        sysdescr = value;
        sysdescr.value_namespace = name_space;
        sysdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysObjectID")
    {
        sysobjectid = value;
        sysobjectid.value_namespace = name_space;
        sysobjectid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysUpTime")
    {
        sysuptime = value;
        sysuptime.value_namespace = name_space;
        sysuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysContact")
    {
        syscontact = value;
        syscontact.value_namespace = name_space;
        syscontact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysName")
    {
        sysname = value;
        sysname.value_namespace = name_space;
        sysname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysLocation")
    {
        syslocation = value;
        syslocation.value_namespace = name_space;
        syslocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysServices")
    {
        sysservices = value;
        sysservices.value_namespace = name_space;
        sysservices.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysDescr")
    {
        sysdescr.yfilter = yfilter;
    }
    if(value_path == "sysObjectID")
    {
        sysobjectid.yfilter = yfilter;
    }
    if(value_path == "sysUpTime")
    {
        sysuptime.yfilter = yfilter;
    }
    if(value_path == "sysContact")
    {
        syscontact.yfilter = yfilter;
    }
    if(value_path == "sysName")
    {
        sysname.yfilter = yfilter;
    }
    if(value_path == "sysLocation")
    {
        syslocation.yfilter = yfilter;
    }
    if(value_path == "sysServices")
    {
        sysservices.yfilter = yfilter;
    }
}

bool RFC1213MIB::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysDescr" || name == "sysObjectID" || name == "sysUpTime" || name == "sysContact" || name == "sysName" || name == "sysLocation" || name == "sysServices")
        return true;
    return false;
}

RFC1213MIB::Interfaces::Interfaces()
    :
    ifnumber{YType::int32, "ifNumber"}
{

    yang_name = "interfaces"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Interfaces::~Interfaces()
{
}

bool RFC1213MIB::Interfaces::has_data() const
{
    return ifnumber.is_set;
}

bool RFC1213MIB::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifnumber.yfilter);
}

std::string RFC1213MIB::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifnumber.is_set || is_set(ifnumber.yfilter)) leaf_name_data.push_back(ifnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifNumber")
    {
        ifnumber = value;
        ifnumber.value_namespace = name_space;
        ifnumber.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifNumber")
    {
        ifnumber.yfilter = yfilter;
    }
}

bool RFC1213MIB::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifNumber")
        return true;
    return false;
}

RFC1213MIB::Ip::Ip()
    :
    ipforwarding{YType::enumeration, "ipForwarding"},
    ipdefaultttl{YType::int32, "ipDefaultTTL"},
    ipinreceives{YType::uint32, "ipInReceives"},
    ipinhdrerrors{YType::uint32, "ipInHdrErrors"},
    ipinaddrerrors{YType::uint32, "ipInAddrErrors"},
    ipforwdatagrams{YType::uint32, "ipForwDatagrams"},
    ipinunknownprotos{YType::uint32, "ipInUnknownProtos"},
    ipindiscards{YType::uint32, "ipInDiscards"},
    ipindelivers{YType::uint32, "ipInDelivers"},
    ipoutrequests{YType::uint32, "ipOutRequests"},
    ipoutdiscards{YType::uint32, "ipOutDiscards"},
    ipoutnoroutes{YType::uint32, "ipOutNoRoutes"},
    ipreasmtimeout{YType::int32, "ipReasmTimeout"},
    ipreasmreqds{YType::uint32, "ipReasmReqds"},
    ipreasmoks{YType::uint32, "ipReasmOKs"},
    ipreasmfails{YType::uint32, "ipReasmFails"},
    ipfragoks{YType::uint32, "ipFragOKs"},
    ipfragfails{YType::uint32, "ipFragFails"},
    ipfragcreates{YType::uint32, "ipFragCreates"},
    iproutingdiscards{YType::uint32, "ipRoutingDiscards"}
{

    yang_name = "ip"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Ip::~Ip()
{
}

bool RFC1213MIB::Ip::has_data() const
{
    return ipforwarding.is_set
	|| ipdefaultttl.is_set
	|| ipinreceives.is_set
	|| ipinhdrerrors.is_set
	|| ipinaddrerrors.is_set
	|| ipforwdatagrams.is_set
	|| ipinunknownprotos.is_set
	|| ipindiscards.is_set
	|| ipindelivers.is_set
	|| ipoutrequests.is_set
	|| ipoutdiscards.is_set
	|| ipoutnoroutes.is_set
	|| ipreasmtimeout.is_set
	|| ipreasmreqds.is_set
	|| ipreasmoks.is_set
	|| ipreasmfails.is_set
	|| ipfragoks.is_set
	|| ipfragfails.is_set
	|| ipfragcreates.is_set
	|| iproutingdiscards.is_set;
}

bool RFC1213MIB::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipforwarding.yfilter)
	|| ydk::is_set(ipdefaultttl.yfilter)
	|| ydk::is_set(ipinreceives.yfilter)
	|| ydk::is_set(ipinhdrerrors.yfilter)
	|| ydk::is_set(ipinaddrerrors.yfilter)
	|| ydk::is_set(ipforwdatagrams.yfilter)
	|| ydk::is_set(ipinunknownprotos.yfilter)
	|| ydk::is_set(ipindiscards.yfilter)
	|| ydk::is_set(ipindelivers.yfilter)
	|| ydk::is_set(ipoutrequests.yfilter)
	|| ydk::is_set(ipoutdiscards.yfilter)
	|| ydk::is_set(ipoutnoroutes.yfilter)
	|| ydk::is_set(ipreasmtimeout.yfilter)
	|| ydk::is_set(ipreasmreqds.yfilter)
	|| ydk::is_set(ipreasmoks.yfilter)
	|| ydk::is_set(ipreasmfails.yfilter)
	|| ydk::is_set(ipfragoks.yfilter)
	|| ydk::is_set(ipfragfails.yfilter)
	|| ydk::is_set(ipfragcreates.yfilter)
	|| ydk::is_set(iproutingdiscards.yfilter);
}

std::string RFC1213MIB::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipforwarding.is_set || is_set(ipforwarding.yfilter)) leaf_name_data.push_back(ipforwarding.get_name_leafdata());
    if (ipdefaultttl.is_set || is_set(ipdefaultttl.yfilter)) leaf_name_data.push_back(ipdefaultttl.get_name_leafdata());
    if (ipinreceives.is_set || is_set(ipinreceives.yfilter)) leaf_name_data.push_back(ipinreceives.get_name_leafdata());
    if (ipinhdrerrors.is_set || is_set(ipinhdrerrors.yfilter)) leaf_name_data.push_back(ipinhdrerrors.get_name_leafdata());
    if (ipinaddrerrors.is_set || is_set(ipinaddrerrors.yfilter)) leaf_name_data.push_back(ipinaddrerrors.get_name_leafdata());
    if (ipforwdatagrams.is_set || is_set(ipforwdatagrams.yfilter)) leaf_name_data.push_back(ipforwdatagrams.get_name_leafdata());
    if (ipinunknownprotos.is_set || is_set(ipinunknownprotos.yfilter)) leaf_name_data.push_back(ipinunknownprotos.get_name_leafdata());
    if (ipindiscards.is_set || is_set(ipindiscards.yfilter)) leaf_name_data.push_back(ipindiscards.get_name_leafdata());
    if (ipindelivers.is_set || is_set(ipindelivers.yfilter)) leaf_name_data.push_back(ipindelivers.get_name_leafdata());
    if (ipoutrequests.is_set || is_set(ipoutrequests.yfilter)) leaf_name_data.push_back(ipoutrequests.get_name_leafdata());
    if (ipoutdiscards.is_set || is_set(ipoutdiscards.yfilter)) leaf_name_data.push_back(ipoutdiscards.get_name_leafdata());
    if (ipoutnoroutes.is_set || is_set(ipoutnoroutes.yfilter)) leaf_name_data.push_back(ipoutnoroutes.get_name_leafdata());
    if (ipreasmtimeout.is_set || is_set(ipreasmtimeout.yfilter)) leaf_name_data.push_back(ipreasmtimeout.get_name_leafdata());
    if (ipreasmreqds.is_set || is_set(ipreasmreqds.yfilter)) leaf_name_data.push_back(ipreasmreqds.get_name_leafdata());
    if (ipreasmoks.is_set || is_set(ipreasmoks.yfilter)) leaf_name_data.push_back(ipreasmoks.get_name_leafdata());
    if (ipreasmfails.is_set || is_set(ipreasmfails.yfilter)) leaf_name_data.push_back(ipreasmfails.get_name_leafdata());
    if (ipfragoks.is_set || is_set(ipfragoks.yfilter)) leaf_name_data.push_back(ipfragoks.get_name_leafdata());
    if (ipfragfails.is_set || is_set(ipfragfails.yfilter)) leaf_name_data.push_back(ipfragfails.get_name_leafdata());
    if (ipfragcreates.is_set || is_set(ipfragcreates.yfilter)) leaf_name_data.push_back(ipfragcreates.get_name_leafdata());
    if (iproutingdiscards.is_set || is_set(iproutingdiscards.yfilter)) leaf_name_data.push_back(iproutingdiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipForwarding")
    {
        ipforwarding = value;
        ipforwarding.value_namespace = name_space;
        ipforwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDefaultTTL")
    {
        ipdefaultttl = value;
        ipdefaultttl.value_namespace = name_space;
        ipdefaultttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInReceives")
    {
        ipinreceives = value;
        ipinreceives.value_namespace = name_space;
        ipinreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInHdrErrors")
    {
        ipinhdrerrors = value;
        ipinhdrerrors.value_namespace = name_space;
        ipinhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInAddrErrors")
    {
        ipinaddrerrors = value;
        ipinaddrerrors.value_namespace = name_space;
        ipinaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwDatagrams")
    {
        ipforwdatagrams = value;
        ipforwdatagrams.value_namespace = name_space;
        ipforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInUnknownProtos")
    {
        ipinunknownprotos = value;
        ipinunknownprotos.value_namespace = name_space;
        ipinunknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInDiscards")
    {
        ipindiscards = value;
        ipindiscards.value_namespace = name_space;
        ipindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInDelivers")
    {
        ipindelivers = value;
        ipindelivers.value_namespace = name_space;
        ipindelivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipOutRequests")
    {
        ipoutrequests = value;
        ipoutrequests.value_namespace = name_space;
        ipoutrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipOutDiscards")
    {
        ipoutdiscards = value;
        ipoutdiscards.value_namespace = name_space;
        ipoutdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipOutNoRoutes")
    {
        ipoutnoroutes = value;
        ipoutnoroutes.value_namespace = name_space;
        ipoutnoroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmTimeout")
    {
        ipreasmtimeout = value;
        ipreasmtimeout.value_namespace = name_space;
        ipreasmtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmReqds")
    {
        ipreasmreqds = value;
        ipreasmreqds.value_namespace = name_space;
        ipreasmreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmOKs")
    {
        ipreasmoks = value;
        ipreasmoks.value_namespace = name_space;
        ipreasmoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmFails")
    {
        ipreasmfails = value;
        ipreasmfails.value_namespace = name_space;
        ipreasmfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipFragOKs")
    {
        ipfragoks = value;
        ipfragoks.value_namespace = name_space;
        ipfragoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipFragFails")
    {
        ipfragfails = value;
        ipfragfails.value_namespace = name_space;
        ipfragfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipFragCreates")
    {
        ipfragcreates = value;
        ipfragcreates.value_namespace = name_space;
        ipfragcreates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRoutingDiscards")
    {
        iproutingdiscards = value;
        iproutingdiscards.value_namespace = name_space;
        iproutingdiscards.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipForwarding")
    {
        ipforwarding.yfilter = yfilter;
    }
    if(value_path == "ipDefaultTTL")
    {
        ipdefaultttl.yfilter = yfilter;
    }
    if(value_path == "ipInReceives")
    {
        ipinreceives.yfilter = yfilter;
    }
    if(value_path == "ipInHdrErrors")
    {
        ipinhdrerrors.yfilter = yfilter;
    }
    if(value_path == "ipInAddrErrors")
    {
        ipinaddrerrors.yfilter = yfilter;
    }
    if(value_path == "ipForwDatagrams")
    {
        ipforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipInUnknownProtos")
    {
        ipinunknownprotos.yfilter = yfilter;
    }
    if(value_path == "ipInDiscards")
    {
        ipindiscards.yfilter = yfilter;
    }
    if(value_path == "ipInDelivers")
    {
        ipindelivers.yfilter = yfilter;
    }
    if(value_path == "ipOutRequests")
    {
        ipoutrequests.yfilter = yfilter;
    }
    if(value_path == "ipOutDiscards")
    {
        ipoutdiscards.yfilter = yfilter;
    }
    if(value_path == "ipOutNoRoutes")
    {
        ipoutnoroutes.yfilter = yfilter;
    }
    if(value_path == "ipReasmTimeout")
    {
        ipreasmtimeout.yfilter = yfilter;
    }
    if(value_path == "ipReasmReqds")
    {
        ipreasmreqds.yfilter = yfilter;
    }
    if(value_path == "ipReasmOKs")
    {
        ipreasmoks.yfilter = yfilter;
    }
    if(value_path == "ipReasmFails")
    {
        ipreasmfails.yfilter = yfilter;
    }
    if(value_path == "ipFragOKs")
    {
        ipfragoks.yfilter = yfilter;
    }
    if(value_path == "ipFragFails")
    {
        ipfragfails.yfilter = yfilter;
    }
    if(value_path == "ipFragCreates")
    {
        ipfragcreates.yfilter = yfilter;
    }
    if(value_path == "ipRoutingDiscards")
    {
        iproutingdiscards.yfilter = yfilter;
    }
}

bool RFC1213MIB::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipForwarding" || name == "ipDefaultTTL" || name == "ipInReceives" || name == "ipInHdrErrors" || name == "ipInAddrErrors" || name == "ipForwDatagrams" || name == "ipInUnknownProtos" || name == "ipInDiscards" || name == "ipInDelivers" || name == "ipOutRequests" || name == "ipOutDiscards" || name == "ipOutNoRoutes" || name == "ipReasmTimeout" || name == "ipReasmReqds" || name == "ipReasmOKs" || name == "ipReasmFails" || name == "ipFragOKs" || name == "ipFragFails" || name == "ipFragCreates" || name == "ipRoutingDiscards")
        return true;
    return false;
}

RFC1213MIB::Icmp::Icmp()
    :
    icmpinmsgs{YType::uint32, "icmpInMsgs"},
    icmpinerrors{YType::uint32, "icmpInErrors"},
    icmpindestunreachs{YType::uint32, "icmpInDestUnreachs"},
    icmpintimeexcds{YType::uint32, "icmpInTimeExcds"},
    icmpinparmprobs{YType::uint32, "icmpInParmProbs"},
    icmpinsrcquenchs{YType::uint32, "icmpInSrcQuenchs"},
    icmpinredirects{YType::uint32, "icmpInRedirects"},
    icmpinechos{YType::uint32, "icmpInEchos"},
    icmpinechoreps{YType::uint32, "icmpInEchoReps"},
    icmpintimestamps{YType::uint32, "icmpInTimestamps"},
    icmpintimestampreps{YType::uint32, "icmpInTimestampReps"},
    icmpinaddrmasks{YType::uint32, "icmpInAddrMasks"},
    icmpinaddrmaskreps{YType::uint32, "icmpInAddrMaskReps"},
    icmpoutmsgs{YType::uint32, "icmpOutMsgs"},
    icmpouterrors{YType::uint32, "icmpOutErrors"},
    icmpoutdestunreachs{YType::uint32, "icmpOutDestUnreachs"},
    icmpouttimeexcds{YType::uint32, "icmpOutTimeExcds"},
    icmpoutparmprobs{YType::uint32, "icmpOutParmProbs"},
    icmpoutsrcquenchs{YType::uint32, "icmpOutSrcQuenchs"},
    icmpoutredirects{YType::uint32, "icmpOutRedirects"},
    icmpoutechos{YType::uint32, "icmpOutEchos"},
    icmpoutechoreps{YType::uint32, "icmpOutEchoReps"},
    icmpouttimestamps{YType::uint32, "icmpOutTimestamps"},
    icmpouttimestampreps{YType::uint32, "icmpOutTimestampReps"},
    icmpoutaddrmasks{YType::uint32, "icmpOutAddrMasks"},
    icmpoutaddrmaskreps{YType::uint32, "icmpOutAddrMaskReps"}
{

    yang_name = "icmp"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Icmp::~Icmp()
{
}

bool RFC1213MIB::Icmp::has_data() const
{
    return icmpinmsgs.is_set
	|| icmpinerrors.is_set
	|| icmpindestunreachs.is_set
	|| icmpintimeexcds.is_set
	|| icmpinparmprobs.is_set
	|| icmpinsrcquenchs.is_set
	|| icmpinredirects.is_set
	|| icmpinechos.is_set
	|| icmpinechoreps.is_set
	|| icmpintimestamps.is_set
	|| icmpintimestampreps.is_set
	|| icmpinaddrmasks.is_set
	|| icmpinaddrmaskreps.is_set
	|| icmpoutmsgs.is_set
	|| icmpouterrors.is_set
	|| icmpoutdestunreachs.is_set
	|| icmpouttimeexcds.is_set
	|| icmpoutparmprobs.is_set
	|| icmpoutsrcquenchs.is_set
	|| icmpoutredirects.is_set
	|| icmpoutechos.is_set
	|| icmpoutechoreps.is_set
	|| icmpouttimestamps.is_set
	|| icmpouttimestampreps.is_set
	|| icmpoutaddrmasks.is_set
	|| icmpoutaddrmaskreps.is_set;
}

bool RFC1213MIB::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmpinmsgs.yfilter)
	|| ydk::is_set(icmpinerrors.yfilter)
	|| ydk::is_set(icmpindestunreachs.yfilter)
	|| ydk::is_set(icmpintimeexcds.yfilter)
	|| ydk::is_set(icmpinparmprobs.yfilter)
	|| ydk::is_set(icmpinsrcquenchs.yfilter)
	|| ydk::is_set(icmpinredirects.yfilter)
	|| ydk::is_set(icmpinechos.yfilter)
	|| ydk::is_set(icmpinechoreps.yfilter)
	|| ydk::is_set(icmpintimestamps.yfilter)
	|| ydk::is_set(icmpintimestampreps.yfilter)
	|| ydk::is_set(icmpinaddrmasks.yfilter)
	|| ydk::is_set(icmpinaddrmaskreps.yfilter)
	|| ydk::is_set(icmpoutmsgs.yfilter)
	|| ydk::is_set(icmpouterrors.yfilter)
	|| ydk::is_set(icmpoutdestunreachs.yfilter)
	|| ydk::is_set(icmpouttimeexcds.yfilter)
	|| ydk::is_set(icmpoutparmprobs.yfilter)
	|| ydk::is_set(icmpoutsrcquenchs.yfilter)
	|| ydk::is_set(icmpoutredirects.yfilter)
	|| ydk::is_set(icmpoutechos.yfilter)
	|| ydk::is_set(icmpoutechoreps.yfilter)
	|| ydk::is_set(icmpouttimestamps.yfilter)
	|| ydk::is_set(icmpouttimestampreps.yfilter)
	|| ydk::is_set(icmpoutaddrmasks.yfilter)
	|| ydk::is_set(icmpoutaddrmaskreps.yfilter);
}

std::string RFC1213MIB::Icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmpinmsgs.is_set || is_set(icmpinmsgs.yfilter)) leaf_name_data.push_back(icmpinmsgs.get_name_leafdata());
    if (icmpinerrors.is_set || is_set(icmpinerrors.yfilter)) leaf_name_data.push_back(icmpinerrors.get_name_leafdata());
    if (icmpindestunreachs.is_set || is_set(icmpindestunreachs.yfilter)) leaf_name_data.push_back(icmpindestunreachs.get_name_leafdata());
    if (icmpintimeexcds.is_set || is_set(icmpintimeexcds.yfilter)) leaf_name_data.push_back(icmpintimeexcds.get_name_leafdata());
    if (icmpinparmprobs.is_set || is_set(icmpinparmprobs.yfilter)) leaf_name_data.push_back(icmpinparmprobs.get_name_leafdata());
    if (icmpinsrcquenchs.is_set || is_set(icmpinsrcquenchs.yfilter)) leaf_name_data.push_back(icmpinsrcquenchs.get_name_leafdata());
    if (icmpinredirects.is_set || is_set(icmpinredirects.yfilter)) leaf_name_data.push_back(icmpinredirects.get_name_leafdata());
    if (icmpinechos.is_set || is_set(icmpinechos.yfilter)) leaf_name_data.push_back(icmpinechos.get_name_leafdata());
    if (icmpinechoreps.is_set || is_set(icmpinechoreps.yfilter)) leaf_name_data.push_back(icmpinechoreps.get_name_leafdata());
    if (icmpintimestamps.is_set || is_set(icmpintimestamps.yfilter)) leaf_name_data.push_back(icmpintimestamps.get_name_leafdata());
    if (icmpintimestampreps.is_set || is_set(icmpintimestampreps.yfilter)) leaf_name_data.push_back(icmpintimestampreps.get_name_leafdata());
    if (icmpinaddrmasks.is_set || is_set(icmpinaddrmasks.yfilter)) leaf_name_data.push_back(icmpinaddrmasks.get_name_leafdata());
    if (icmpinaddrmaskreps.is_set || is_set(icmpinaddrmaskreps.yfilter)) leaf_name_data.push_back(icmpinaddrmaskreps.get_name_leafdata());
    if (icmpoutmsgs.is_set || is_set(icmpoutmsgs.yfilter)) leaf_name_data.push_back(icmpoutmsgs.get_name_leafdata());
    if (icmpouterrors.is_set || is_set(icmpouterrors.yfilter)) leaf_name_data.push_back(icmpouterrors.get_name_leafdata());
    if (icmpoutdestunreachs.is_set || is_set(icmpoutdestunreachs.yfilter)) leaf_name_data.push_back(icmpoutdestunreachs.get_name_leafdata());
    if (icmpouttimeexcds.is_set || is_set(icmpouttimeexcds.yfilter)) leaf_name_data.push_back(icmpouttimeexcds.get_name_leafdata());
    if (icmpoutparmprobs.is_set || is_set(icmpoutparmprobs.yfilter)) leaf_name_data.push_back(icmpoutparmprobs.get_name_leafdata());
    if (icmpoutsrcquenchs.is_set || is_set(icmpoutsrcquenchs.yfilter)) leaf_name_data.push_back(icmpoutsrcquenchs.get_name_leafdata());
    if (icmpoutredirects.is_set || is_set(icmpoutredirects.yfilter)) leaf_name_data.push_back(icmpoutredirects.get_name_leafdata());
    if (icmpoutechos.is_set || is_set(icmpoutechos.yfilter)) leaf_name_data.push_back(icmpoutechos.get_name_leafdata());
    if (icmpoutechoreps.is_set || is_set(icmpoutechoreps.yfilter)) leaf_name_data.push_back(icmpoutechoreps.get_name_leafdata());
    if (icmpouttimestamps.is_set || is_set(icmpouttimestamps.yfilter)) leaf_name_data.push_back(icmpouttimestamps.get_name_leafdata());
    if (icmpouttimestampreps.is_set || is_set(icmpouttimestampreps.yfilter)) leaf_name_data.push_back(icmpouttimestampreps.get_name_leafdata());
    if (icmpoutaddrmasks.is_set || is_set(icmpoutaddrmasks.yfilter)) leaf_name_data.push_back(icmpoutaddrmasks.get_name_leafdata());
    if (icmpoutaddrmaskreps.is_set || is_set(icmpoutaddrmaskreps.yfilter)) leaf_name_data.push_back(icmpoutaddrmaskreps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmpInMsgs")
    {
        icmpinmsgs = value;
        icmpinmsgs.value_namespace = name_space;
        icmpinmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInErrors")
    {
        icmpinerrors = value;
        icmpinerrors.value_namespace = name_space;
        icmpinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInDestUnreachs")
    {
        icmpindestunreachs = value;
        icmpindestunreachs.value_namespace = name_space;
        icmpindestunreachs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInTimeExcds")
    {
        icmpintimeexcds = value;
        icmpintimeexcds.value_namespace = name_space;
        icmpintimeexcds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInParmProbs")
    {
        icmpinparmprobs = value;
        icmpinparmprobs.value_namespace = name_space;
        icmpinparmprobs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInSrcQuenchs")
    {
        icmpinsrcquenchs = value;
        icmpinsrcquenchs.value_namespace = name_space;
        icmpinsrcquenchs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInRedirects")
    {
        icmpinredirects = value;
        icmpinredirects.value_namespace = name_space;
        icmpinredirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInEchos")
    {
        icmpinechos = value;
        icmpinechos.value_namespace = name_space;
        icmpinechos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInEchoReps")
    {
        icmpinechoreps = value;
        icmpinechoreps.value_namespace = name_space;
        icmpinechoreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInTimestamps")
    {
        icmpintimestamps = value;
        icmpintimestamps.value_namespace = name_space;
        icmpintimestamps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInTimestampReps")
    {
        icmpintimestampreps = value;
        icmpintimestampreps.value_namespace = name_space;
        icmpintimestampreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInAddrMasks")
    {
        icmpinaddrmasks = value;
        icmpinaddrmasks.value_namespace = name_space;
        icmpinaddrmasks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInAddrMaskReps")
    {
        icmpinaddrmaskreps = value;
        icmpinaddrmaskreps.value_namespace = name_space;
        icmpinaddrmaskreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutMsgs")
    {
        icmpoutmsgs = value;
        icmpoutmsgs.value_namespace = name_space;
        icmpoutmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutErrors")
    {
        icmpouterrors = value;
        icmpouterrors.value_namespace = name_space;
        icmpouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutDestUnreachs")
    {
        icmpoutdestunreachs = value;
        icmpoutdestunreachs.value_namespace = name_space;
        icmpoutdestunreachs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutTimeExcds")
    {
        icmpouttimeexcds = value;
        icmpouttimeexcds.value_namespace = name_space;
        icmpouttimeexcds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutParmProbs")
    {
        icmpoutparmprobs = value;
        icmpoutparmprobs.value_namespace = name_space;
        icmpoutparmprobs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutSrcQuenchs")
    {
        icmpoutsrcquenchs = value;
        icmpoutsrcquenchs.value_namespace = name_space;
        icmpoutsrcquenchs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutRedirects")
    {
        icmpoutredirects = value;
        icmpoutredirects.value_namespace = name_space;
        icmpoutredirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutEchos")
    {
        icmpoutechos = value;
        icmpoutechos.value_namespace = name_space;
        icmpoutechos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutEchoReps")
    {
        icmpoutechoreps = value;
        icmpoutechoreps.value_namespace = name_space;
        icmpoutechoreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutTimestamps")
    {
        icmpouttimestamps = value;
        icmpouttimestamps.value_namespace = name_space;
        icmpouttimestamps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutTimestampReps")
    {
        icmpouttimestampreps = value;
        icmpouttimestampreps.value_namespace = name_space;
        icmpouttimestampreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutAddrMasks")
    {
        icmpoutaddrmasks = value;
        icmpoutaddrmasks.value_namespace = name_space;
        icmpoutaddrmasks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutAddrMaskReps")
    {
        icmpoutaddrmaskreps = value;
        icmpoutaddrmaskreps.value_namespace = name_space;
        icmpoutaddrmaskreps.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmpInMsgs")
    {
        icmpinmsgs.yfilter = yfilter;
    }
    if(value_path == "icmpInErrors")
    {
        icmpinerrors.yfilter = yfilter;
    }
    if(value_path == "icmpInDestUnreachs")
    {
        icmpindestunreachs.yfilter = yfilter;
    }
    if(value_path == "icmpInTimeExcds")
    {
        icmpintimeexcds.yfilter = yfilter;
    }
    if(value_path == "icmpInParmProbs")
    {
        icmpinparmprobs.yfilter = yfilter;
    }
    if(value_path == "icmpInSrcQuenchs")
    {
        icmpinsrcquenchs.yfilter = yfilter;
    }
    if(value_path == "icmpInRedirects")
    {
        icmpinredirects.yfilter = yfilter;
    }
    if(value_path == "icmpInEchos")
    {
        icmpinechos.yfilter = yfilter;
    }
    if(value_path == "icmpInEchoReps")
    {
        icmpinechoreps.yfilter = yfilter;
    }
    if(value_path == "icmpInTimestamps")
    {
        icmpintimestamps.yfilter = yfilter;
    }
    if(value_path == "icmpInTimestampReps")
    {
        icmpintimestampreps.yfilter = yfilter;
    }
    if(value_path == "icmpInAddrMasks")
    {
        icmpinaddrmasks.yfilter = yfilter;
    }
    if(value_path == "icmpInAddrMaskReps")
    {
        icmpinaddrmaskreps.yfilter = yfilter;
    }
    if(value_path == "icmpOutMsgs")
    {
        icmpoutmsgs.yfilter = yfilter;
    }
    if(value_path == "icmpOutErrors")
    {
        icmpouterrors.yfilter = yfilter;
    }
    if(value_path == "icmpOutDestUnreachs")
    {
        icmpoutdestunreachs.yfilter = yfilter;
    }
    if(value_path == "icmpOutTimeExcds")
    {
        icmpouttimeexcds.yfilter = yfilter;
    }
    if(value_path == "icmpOutParmProbs")
    {
        icmpoutparmprobs.yfilter = yfilter;
    }
    if(value_path == "icmpOutSrcQuenchs")
    {
        icmpoutsrcquenchs.yfilter = yfilter;
    }
    if(value_path == "icmpOutRedirects")
    {
        icmpoutredirects.yfilter = yfilter;
    }
    if(value_path == "icmpOutEchos")
    {
        icmpoutechos.yfilter = yfilter;
    }
    if(value_path == "icmpOutEchoReps")
    {
        icmpoutechoreps.yfilter = yfilter;
    }
    if(value_path == "icmpOutTimestamps")
    {
        icmpouttimestamps.yfilter = yfilter;
    }
    if(value_path == "icmpOutTimestampReps")
    {
        icmpouttimestampreps.yfilter = yfilter;
    }
    if(value_path == "icmpOutAddrMasks")
    {
        icmpoutaddrmasks.yfilter = yfilter;
    }
    if(value_path == "icmpOutAddrMaskReps")
    {
        icmpoutaddrmaskreps.yfilter = yfilter;
    }
}

bool RFC1213MIB::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmpInMsgs" || name == "icmpInErrors" || name == "icmpInDestUnreachs" || name == "icmpInTimeExcds" || name == "icmpInParmProbs" || name == "icmpInSrcQuenchs" || name == "icmpInRedirects" || name == "icmpInEchos" || name == "icmpInEchoReps" || name == "icmpInTimestamps" || name == "icmpInTimestampReps" || name == "icmpInAddrMasks" || name == "icmpInAddrMaskReps" || name == "icmpOutMsgs" || name == "icmpOutErrors" || name == "icmpOutDestUnreachs" || name == "icmpOutTimeExcds" || name == "icmpOutParmProbs" || name == "icmpOutSrcQuenchs" || name == "icmpOutRedirects" || name == "icmpOutEchos" || name == "icmpOutEchoReps" || name == "icmpOutTimestamps" || name == "icmpOutTimestampReps" || name == "icmpOutAddrMasks" || name == "icmpOutAddrMaskReps")
        return true;
    return false;
}

RFC1213MIB::Tcp::Tcp()
    :
    tcprtoalgorithm{YType::enumeration, "tcpRtoAlgorithm"},
    tcprtomin{YType::int32, "tcpRtoMin"},
    tcprtomax{YType::int32, "tcpRtoMax"},
    tcpmaxconn{YType::int32, "tcpMaxConn"},
    tcpactiveopens{YType::uint32, "tcpActiveOpens"},
    tcppassiveopens{YType::uint32, "tcpPassiveOpens"},
    tcpattemptfails{YType::uint32, "tcpAttemptFails"},
    tcpestabresets{YType::uint32, "tcpEstabResets"},
    tcpcurrestab{YType::uint32, "tcpCurrEstab"},
    tcpinsegs{YType::uint32, "tcpInSegs"},
    tcpoutsegs{YType::uint32, "tcpOutSegs"},
    tcpretranssegs{YType::uint32, "tcpRetransSegs"},
    tcpinerrs{YType::uint32, "tcpInErrs"},
    tcpoutrsts{YType::uint32, "tcpOutRsts"}
{

    yang_name = "tcp"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Tcp::~Tcp()
{
}

bool RFC1213MIB::Tcp::has_data() const
{
    return tcprtoalgorithm.is_set
	|| tcprtomin.is_set
	|| tcprtomax.is_set
	|| tcpmaxconn.is_set
	|| tcpactiveopens.is_set
	|| tcppassiveopens.is_set
	|| tcpattemptfails.is_set
	|| tcpestabresets.is_set
	|| tcpcurrestab.is_set
	|| tcpinsegs.is_set
	|| tcpoutsegs.is_set
	|| tcpretranssegs.is_set
	|| tcpinerrs.is_set
	|| tcpoutrsts.is_set;
}

bool RFC1213MIB::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcprtoalgorithm.yfilter)
	|| ydk::is_set(tcprtomin.yfilter)
	|| ydk::is_set(tcprtomax.yfilter)
	|| ydk::is_set(tcpmaxconn.yfilter)
	|| ydk::is_set(tcpactiveopens.yfilter)
	|| ydk::is_set(tcppassiveopens.yfilter)
	|| ydk::is_set(tcpattemptfails.yfilter)
	|| ydk::is_set(tcpestabresets.yfilter)
	|| ydk::is_set(tcpcurrestab.yfilter)
	|| ydk::is_set(tcpinsegs.yfilter)
	|| ydk::is_set(tcpoutsegs.yfilter)
	|| ydk::is_set(tcpretranssegs.yfilter)
	|| ydk::is_set(tcpinerrs.yfilter)
	|| ydk::is_set(tcpoutrsts.yfilter);
}

std::string RFC1213MIB::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcprtoalgorithm.is_set || is_set(tcprtoalgorithm.yfilter)) leaf_name_data.push_back(tcprtoalgorithm.get_name_leafdata());
    if (tcprtomin.is_set || is_set(tcprtomin.yfilter)) leaf_name_data.push_back(tcprtomin.get_name_leafdata());
    if (tcprtomax.is_set || is_set(tcprtomax.yfilter)) leaf_name_data.push_back(tcprtomax.get_name_leafdata());
    if (tcpmaxconn.is_set || is_set(tcpmaxconn.yfilter)) leaf_name_data.push_back(tcpmaxconn.get_name_leafdata());
    if (tcpactiveopens.is_set || is_set(tcpactiveopens.yfilter)) leaf_name_data.push_back(tcpactiveopens.get_name_leafdata());
    if (tcppassiveopens.is_set || is_set(tcppassiveopens.yfilter)) leaf_name_data.push_back(tcppassiveopens.get_name_leafdata());
    if (tcpattemptfails.is_set || is_set(tcpattemptfails.yfilter)) leaf_name_data.push_back(tcpattemptfails.get_name_leafdata());
    if (tcpestabresets.is_set || is_set(tcpestabresets.yfilter)) leaf_name_data.push_back(tcpestabresets.get_name_leafdata());
    if (tcpcurrestab.is_set || is_set(tcpcurrestab.yfilter)) leaf_name_data.push_back(tcpcurrestab.get_name_leafdata());
    if (tcpinsegs.is_set || is_set(tcpinsegs.yfilter)) leaf_name_data.push_back(tcpinsegs.get_name_leafdata());
    if (tcpoutsegs.is_set || is_set(tcpoutsegs.yfilter)) leaf_name_data.push_back(tcpoutsegs.get_name_leafdata());
    if (tcpretranssegs.is_set || is_set(tcpretranssegs.yfilter)) leaf_name_data.push_back(tcpretranssegs.get_name_leafdata());
    if (tcpinerrs.is_set || is_set(tcpinerrs.yfilter)) leaf_name_data.push_back(tcpinerrs.get_name_leafdata());
    if (tcpoutrsts.is_set || is_set(tcpoutrsts.yfilter)) leaf_name_data.push_back(tcpoutrsts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpRtoAlgorithm")
    {
        tcprtoalgorithm = value;
        tcprtoalgorithm.value_namespace = name_space;
        tcprtoalgorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpRtoMin")
    {
        tcprtomin = value;
        tcprtomin.value_namespace = name_space;
        tcprtomin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpRtoMax")
    {
        tcprtomax = value;
        tcprtomax.value_namespace = name_space;
        tcprtomax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpMaxConn")
    {
        tcpmaxconn = value;
        tcpmaxconn.value_namespace = name_space;
        tcpmaxconn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpActiveOpens")
    {
        tcpactiveopens = value;
        tcpactiveopens.value_namespace = name_space;
        tcpactiveopens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpPassiveOpens")
    {
        tcppassiveopens = value;
        tcppassiveopens.value_namespace = name_space;
        tcppassiveopens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpAttemptFails")
    {
        tcpattemptfails = value;
        tcpattemptfails.value_namespace = name_space;
        tcpattemptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpEstabResets")
    {
        tcpestabresets = value;
        tcpestabresets.value_namespace = name_space;
        tcpestabresets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpCurrEstab")
    {
        tcpcurrestab = value;
        tcpcurrestab.value_namespace = name_space;
        tcpcurrestab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpInSegs")
    {
        tcpinsegs = value;
        tcpinsegs.value_namespace = name_space;
        tcpinsegs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpOutSegs")
    {
        tcpoutsegs = value;
        tcpoutsegs.value_namespace = name_space;
        tcpoutsegs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpRetransSegs")
    {
        tcpretranssegs = value;
        tcpretranssegs.value_namespace = name_space;
        tcpretranssegs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpInErrs")
    {
        tcpinerrs = value;
        tcpinerrs.value_namespace = name_space;
        tcpinerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpOutRsts")
    {
        tcpoutrsts = value;
        tcpoutrsts.value_namespace = name_space;
        tcpoutrsts.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpRtoAlgorithm")
    {
        tcprtoalgorithm.yfilter = yfilter;
    }
    if(value_path == "tcpRtoMin")
    {
        tcprtomin.yfilter = yfilter;
    }
    if(value_path == "tcpRtoMax")
    {
        tcprtomax.yfilter = yfilter;
    }
    if(value_path == "tcpMaxConn")
    {
        tcpmaxconn.yfilter = yfilter;
    }
    if(value_path == "tcpActiveOpens")
    {
        tcpactiveopens.yfilter = yfilter;
    }
    if(value_path == "tcpPassiveOpens")
    {
        tcppassiveopens.yfilter = yfilter;
    }
    if(value_path == "tcpAttemptFails")
    {
        tcpattemptfails.yfilter = yfilter;
    }
    if(value_path == "tcpEstabResets")
    {
        tcpestabresets.yfilter = yfilter;
    }
    if(value_path == "tcpCurrEstab")
    {
        tcpcurrestab.yfilter = yfilter;
    }
    if(value_path == "tcpInSegs")
    {
        tcpinsegs.yfilter = yfilter;
    }
    if(value_path == "tcpOutSegs")
    {
        tcpoutsegs.yfilter = yfilter;
    }
    if(value_path == "tcpRetransSegs")
    {
        tcpretranssegs.yfilter = yfilter;
    }
    if(value_path == "tcpInErrs")
    {
        tcpinerrs.yfilter = yfilter;
    }
    if(value_path == "tcpOutRsts")
    {
        tcpoutrsts.yfilter = yfilter;
    }
}

bool RFC1213MIB::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpRtoAlgorithm" || name == "tcpRtoMin" || name == "tcpRtoMax" || name == "tcpMaxConn" || name == "tcpActiveOpens" || name == "tcpPassiveOpens" || name == "tcpAttemptFails" || name == "tcpEstabResets" || name == "tcpCurrEstab" || name == "tcpInSegs" || name == "tcpOutSegs" || name == "tcpRetransSegs" || name == "tcpInErrs" || name == "tcpOutRsts")
        return true;
    return false;
}

RFC1213MIB::Udp::Udp()
    :
    udpindatagrams{YType::uint32, "udpInDatagrams"},
    udpnoports{YType::uint32, "udpNoPorts"},
    udpinerrors{YType::uint32, "udpInErrors"},
    udpoutdatagrams{YType::uint32, "udpOutDatagrams"}
{

    yang_name = "udp"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Udp::~Udp()
{
}

bool RFC1213MIB::Udp::has_data() const
{
    return udpindatagrams.is_set
	|| udpnoports.is_set
	|| udpinerrors.is_set
	|| udpoutdatagrams.is_set;
}

bool RFC1213MIB::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udpindatagrams.yfilter)
	|| ydk::is_set(udpnoports.yfilter)
	|| ydk::is_set(udpinerrors.yfilter)
	|| ydk::is_set(udpoutdatagrams.yfilter);
}

std::string RFC1213MIB::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udpindatagrams.is_set || is_set(udpindatagrams.yfilter)) leaf_name_data.push_back(udpindatagrams.get_name_leafdata());
    if (udpnoports.is_set || is_set(udpnoports.yfilter)) leaf_name_data.push_back(udpnoports.get_name_leafdata());
    if (udpinerrors.is_set || is_set(udpinerrors.yfilter)) leaf_name_data.push_back(udpinerrors.get_name_leafdata());
    if (udpoutdatagrams.is_set || is_set(udpoutdatagrams.yfilter)) leaf_name_data.push_back(udpoutdatagrams.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udpInDatagrams")
    {
        udpindatagrams = value;
        udpindatagrams.value_namespace = name_space;
        udpindatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpNoPorts")
    {
        udpnoports = value;
        udpnoports.value_namespace = name_space;
        udpnoports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpInErrors")
    {
        udpinerrors = value;
        udpinerrors.value_namespace = name_space;
        udpinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpOutDatagrams")
    {
        udpoutdatagrams = value;
        udpoutdatagrams.value_namespace = name_space;
        udpoutdatagrams.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udpInDatagrams")
    {
        udpindatagrams.yfilter = yfilter;
    }
    if(value_path == "udpNoPorts")
    {
        udpnoports.yfilter = yfilter;
    }
    if(value_path == "udpInErrors")
    {
        udpinerrors.yfilter = yfilter;
    }
    if(value_path == "udpOutDatagrams")
    {
        udpoutdatagrams.yfilter = yfilter;
    }
}

bool RFC1213MIB::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpInDatagrams" || name == "udpNoPorts" || name == "udpInErrors" || name == "udpOutDatagrams")
        return true;
    return false;
}

RFC1213MIB::Egp::Egp()
    :
    egpinmsgs{YType::uint32, "egpInMsgs"},
    egpinerrors{YType::uint32, "egpInErrors"},
    egpoutmsgs{YType::uint32, "egpOutMsgs"},
    egpouterrors{YType::uint32, "egpOutErrors"},
    egpas{YType::int32, "egpAs"}
{

    yang_name = "egp"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Egp::~Egp()
{
}

bool RFC1213MIB::Egp::has_data() const
{
    return egpinmsgs.is_set
	|| egpinerrors.is_set
	|| egpoutmsgs.is_set
	|| egpouterrors.is_set
	|| egpas.is_set;
}

bool RFC1213MIB::Egp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egpinmsgs.yfilter)
	|| ydk::is_set(egpinerrors.yfilter)
	|| ydk::is_set(egpoutmsgs.yfilter)
	|| ydk::is_set(egpouterrors.yfilter)
	|| ydk::is_set(egpas.yfilter);
}

std::string RFC1213MIB::Egp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Egp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Egp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egpinmsgs.is_set || is_set(egpinmsgs.yfilter)) leaf_name_data.push_back(egpinmsgs.get_name_leafdata());
    if (egpinerrors.is_set || is_set(egpinerrors.yfilter)) leaf_name_data.push_back(egpinerrors.get_name_leafdata());
    if (egpoutmsgs.is_set || is_set(egpoutmsgs.yfilter)) leaf_name_data.push_back(egpoutmsgs.get_name_leafdata());
    if (egpouterrors.is_set || is_set(egpouterrors.yfilter)) leaf_name_data.push_back(egpouterrors.get_name_leafdata());
    if (egpas.is_set || is_set(egpas.yfilter)) leaf_name_data.push_back(egpas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Egp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Egp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Egp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egpInMsgs")
    {
        egpinmsgs = value;
        egpinmsgs.value_namespace = name_space;
        egpinmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpInErrors")
    {
        egpinerrors = value;
        egpinerrors.value_namespace = name_space;
        egpinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpOutMsgs")
    {
        egpoutmsgs = value;
        egpoutmsgs.value_namespace = name_space;
        egpoutmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpOutErrors")
    {
        egpouterrors = value;
        egpouterrors.value_namespace = name_space;
        egpouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpAs")
    {
        egpas = value;
        egpas.value_namespace = name_space;
        egpas.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Egp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egpInMsgs")
    {
        egpinmsgs.yfilter = yfilter;
    }
    if(value_path == "egpInErrors")
    {
        egpinerrors.yfilter = yfilter;
    }
    if(value_path == "egpOutMsgs")
    {
        egpoutmsgs.yfilter = yfilter;
    }
    if(value_path == "egpOutErrors")
    {
        egpouterrors.yfilter = yfilter;
    }
    if(value_path == "egpAs")
    {
        egpas.yfilter = yfilter;
    }
}

bool RFC1213MIB::Egp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egpInMsgs" || name == "egpInErrors" || name == "egpOutMsgs" || name == "egpOutErrors" || name == "egpAs")
        return true;
    return false;
}

RFC1213MIB::Snmp::Snmp()
    :
    snmpinpkts{YType::uint32, "snmpInPkts"},
    snmpoutpkts{YType::uint32, "snmpOutPkts"},
    snmpinbadversions{YType::uint32, "snmpInBadVersions"},
    snmpinbadcommunitynames{YType::uint32, "snmpInBadCommunityNames"},
    snmpinbadcommunityuses{YType::uint32, "snmpInBadCommunityUses"},
    snmpinasnparseerrs{YType::uint32, "snmpInASNParseErrs"},
    snmpintoobigs{YType::uint32, "snmpInTooBigs"},
    snmpinnosuchnames{YType::uint32, "snmpInNoSuchNames"},
    snmpinbadvalues{YType::uint32, "snmpInBadValues"},
    snmpinreadonlys{YType::uint32, "snmpInReadOnlys"},
    snmpingenerrs{YType::uint32, "snmpInGenErrs"},
    snmpintotalreqvars{YType::uint32, "snmpInTotalReqVars"},
    snmpintotalsetvars{YType::uint32, "snmpInTotalSetVars"},
    snmpingetrequests{YType::uint32, "snmpInGetRequests"},
    snmpingetnexts{YType::uint32, "snmpInGetNexts"},
    snmpinsetrequests{YType::uint32, "snmpInSetRequests"},
    snmpingetresponses{YType::uint32, "snmpInGetResponses"},
    snmpintraps{YType::uint32, "snmpInTraps"},
    snmpouttoobigs{YType::uint32, "snmpOutTooBigs"},
    snmpoutnosuchnames{YType::uint32, "snmpOutNoSuchNames"},
    snmpoutbadvalues{YType::uint32, "snmpOutBadValues"},
    snmpoutgenerrs{YType::uint32, "snmpOutGenErrs"},
    snmpoutgetrequests{YType::uint32, "snmpOutGetRequests"},
    snmpoutgetnexts{YType::uint32, "snmpOutGetNexts"},
    snmpoutsetrequests{YType::uint32, "snmpOutSetRequests"},
    snmpoutgetresponses{YType::uint32, "snmpOutGetResponses"},
    snmpouttraps{YType::uint32, "snmpOutTraps"},
    snmpenableauthentraps{YType::enumeration, "snmpEnableAuthenTraps"}
{

    yang_name = "snmp"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Snmp::~Snmp()
{
}

bool RFC1213MIB::Snmp::has_data() const
{
    return snmpinpkts.is_set
	|| snmpoutpkts.is_set
	|| snmpinbadversions.is_set
	|| snmpinbadcommunitynames.is_set
	|| snmpinbadcommunityuses.is_set
	|| snmpinasnparseerrs.is_set
	|| snmpintoobigs.is_set
	|| snmpinnosuchnames.is_set
	|| snmpinbadvalues.is_set
	|| snmpinreadonlys.is_set
	|| snmpingenerrs.is_set
	|| snmpintotalreqvars.is_set
	|| snmpintotalsetvars.is_set
	|| snmpingetrequests.is_set
	|| snmpingetnexts.is_set
	|| snmpinsetrequests.is_set
	|| snmpingetresponses.is_set
	|| snmpintraps.is_set
	|| snmpouttoobigs.is_set
	|| snmpoutnosuchnames.is_set
	|| snmpoutbadvalues.is_set
	|| snmpoutgenerrs.is_set
	|| snmpoutgetrequests.is_set
	|| snmpoutgetnexts.is_set
	|| snmpoutsetrequests.is_set
	|| snmpoutgetresponses.is_set
	|| snmpouttraps.is_set
	|| snmpenableauthentraps.is_set;
}

bool RFC1213MIB::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpinpkts.yfilter)
	|| ydk::is_set(snmpoutpkts.yfilter)
	|| ydk::is_set(snmpinbadversions.yfilter)
	|| ydk::is_set(snmpinbadcommunitynames.yfilter)
	|| ydk::is_set(snmpinbadcommunityuses.yfilter)
	|| ydk::is_set(snmpinasnparseerrs.yfilter)
	|| ydk::is_set(snmpintoobigs.yfilter)
	|| ydk::is_set(snmpinnosuchnames.yfilter)
	|| ydk::is_set(snmpinbadvalues.yfilter)
	|| ydk::is_set(snmpinreadonlys.yfilter)
	|| ydk::is_set(snmpingenerrs.yfilter)
	|| ydk::is_set(snmpintotalreqvars.yfilter)
	|| ydk::is_set(snmpintotalsetvars.yfilter)
	|| ydk::is_set(snmpingetrequests.yfilter)
	|| ydk::is_set(snmpingetnexts.yfilter)
	|| ydk::is_set(snmpinsetrequests.yfilter)
	|| ydk::is_set(snmpingetresponses.yfilter)
	|| ydk::is_set(snmpintraps.yfilter)
	|| ydk::is_set(snmpouttoobigs.yfilter)
	|| ydk::is_set(snmpoutnosuchnames.yfilter)
	|| ydk::is_set(snmpoutbadvalues.yfilter)
	|| ydk::is_set(snmpoutgenerrs.yfilter)
	|| ydk::is_set(snmpoutgetrequests.yfilter)
	|| ydk::is_set(snmpoutgetnexts.yfilter)
	|| ydk::is_set(snmpoutsetrequests.yfilter)
	|| ydk::is_set(snmpoutgetresponses.yfilter)
	|| ydk::is_set(snmpouttraps.yfilter)
	|| ydk::is_set(snmpenableauthentraps.yfilter);
}

std::string RFC1213MIB::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpinpkts.is_set || is_set(snmpinpkts.yfilter)) leaf_name_data.push_back(snmpinpkts.get_name_leafdata());
    if (snmpoutpkts.is_set || is_set(snmpoutpkts.yfilter)) leaf_name_data.push_back(snmpoutpkts.get_name_leafdata());
    if (snmpinbadversions.is_set || is_set(snmpinbadversions.yfilter)) leaf_name_data.push_back(snmpinbadversions.get_name_leafdata());
    if (snmpinbadcommunitynames.is_set || is_set(snmpinbadcommunitynames.yfilter)) leaf_name_data.push_back(snmpinbadcommunitynames.get_name_leafdata());
    if (snmpinbadcommunityuses.is_set || is_set(snmpinbadcommunityuses.yfilter)) leaf_name_data.push_back(snmpinbadcommunityuses.get_name_leafdata());
    if (snmpinasnparseerrs.is_set || is_set(snmpinasnparseerrs.yfilter)) leaf_name_data.push_back(snmpinasnparseerrs.get_name_leafdata());
    if (snmpintoobigs.is_set || is_set(snmpintoobigs.yfilter)) leaf_name_data.push_back(snmpintoobigs.get_name_leafdata());
    if (snmpinnosuchnames.is_set || is_set(snmpinnosuchnames.yfilter)) leaf_name_data.push_back(snmpinnosuchnames.get_name_leafdata());
    if (snmpinbadvalues.is_set || is_set(snmpinbadvalues.yfilter)) leaf_name_data.push_back(snmpinbadvalues.get_name_leafdata());
    if (snmpinreadonlys.is_set || is_set(snmpinreadonlys.yfilter)) leaf_name_data.push_back(snmpinreadonlys.get_name_leafdata());
    if (snmpingenerrs.is_set || is_set(snmpingenerrs.yfilter)) leaf_name_data.push_back(snmpingenerrs.get_name_leafdata());
    if (snmpintotalreqvars.is_set || is_set(snmpintotalreqvars.yfilter)) leaf_name_data.push_back(snmpintotalreqvars.get_name_leafdata());
    if (snmpintotalsetvars.is_set || is_set(snmpintotalsetvars.yfilter)) leaf_name_data.push_back(snmpintotalsetvars.get_name_leafdata());
    if (snmpingetrequests.is_set || is_set(snmpingetrequests.yfilter)) leaf_name_data.push_back(snmpingetrequests.get_name_leafdata());
    if (snmpingetnexts.is_set || is_set(snmpingetnexts.yfilter)) leaf_name_data.push_back(snmpingetnexts.get_name_leafdata());
    if (snmpinsetrequests.is_set || is_set(snmpinsetrequests.yfilter)) leaf_name_data.push_back(snmpinsetrequests.get_name_leafdata());
    if (snmpingetresponses.is_set || is_set(snmpingetresponses.yfilter)) leaf_name_data.push_back(snmpingetresponses.get_name_leafdata());
    if (snmpintraps.is_set || is_set(snmpintraps.yfilter)) leaf_name_data.push_back(snmpintraps.get_name_leafdata());
    if (snmpouttoobigs.is_set || is_set(snmpouttoobigs.yfilter)) leaf_name_data.push_back(snmpouttoobigs.get_name_leafdata());
    if (snmpoutnosuchnames.is_set || is_set(snmpoutnosuchnames.yfilter)) leaf_name_data.push_back(snmpoutnosuchnames.get_name_leafdata());
    if (snmpoutbadvalues.is_set || is_set(snmpoutbadvalues.yfilter)) leaf_name_data.push_back(snmpoutbadvalues.get_name_leafdata());
    if (snmpoutgenerrs.is_set || is_set(snmpoutgenerrs.yfilter)) leaf_name_data.push_back(snmpoutgenerrs.get_name_leafdata());
    if (snmpoutgetrequests.is_set || is_set(snmpoutgetrequests.yfilter)) leaf_name_data.push_back(snmpoutgetrequests.get_name_leafdata());
    if (snmpoutgetnexts.is_set || is_set(snmpoutgetnexts.yfilter)) leaf_name_data.push_back(snmpoutgetnexts.get_name_leafdata());
    if (snmpoutsetrequests.is_set || is_set(snmpoutsetrequests.yfilter)) leaf_name_data.push_back(snmpoutsetrequests.get_name_leafdata());
    if (snmpoutgetresponses.is_set || is_set(snmpoutgetresponses.yfilter)) leaf_name_data.push_back(snmpoutgetresponses.get_name_leafdata());
    if (snmpouttraps.is_set || is_set(snmpouttraps.yfilter)) leaf_name_data.push_back(snmpouttraps.get_name_leafdata());
    if (snmpenableauthentraps.is_set || is_set(snmpenableauthentraps.yfilter)) leaf_name_data.push_back(snmpenableauthentraps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpInPkts")
    {
        snmpinpkts = value;
        snmpinpkts.value_namespace = name_space;
        snmpinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutPkts")
    {
        snmpoutpkts = value;
        snmpoutpkts.value_namespace = name_space;
        snmpoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInBadVersions")
    {
        snmpinbadversions = value;
        snmpinbadversions.value_namespace = name_space;
        snmpinbadversions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInBadCommunityNames")
    {
        snmpinbadcommunitynames = value;
        snmpinbadcommunitynames.value_namespace = name_space;
        snmpinbadcommunitynames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInBadCommunityUses")
    {
        snmpinbadcommunityuses = value;
        snmpinbadcommunityuses.value_namespace = name_space;
        snmpinbadcommunityuses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInASNParseErrs")
    {
        snmpinasnparseerrs = value;
        snmpinasnparseerrs.value_namespace = name_space;
        snmpinasnparseerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInTooBigs")
    {
        snmpintoobigs = value;
        snmpintoobigs.value_namespace = name_space;
        snmpintoobigs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInNoSuchNames")
    {
        snmpinnosuchnames = value;
        snmpinnosuchnames.value_namespace = name_space;
        snmpinnosuchnames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInBadValues")
    {
        snmpinbadvalues = value;
        snmpinbadvalues.value_namespace = name_space;
        snmpinbadvalues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInReadOnlys")
    {
        snmpinreadonlys = value;
        snmpinreadonlys.value_namespace = name_space;
        snmpinreadonlys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInGenErrs")
    {
        snmpingenerrs = value;
        snmpingenerrs.value_namespace = name_space;
        snmpingenerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInTotalReqVars")
    {
        snmpintotalreqvars = value;
        snmpintotalreqvars.value_namespace = name_space;
        snmpintotalreqvars.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInTotalSetVars")
    {
        snmpintotalsetvars = value;
        snmpintotalsetvars.value_namespace = name_space;
        snmpintotalsetvars.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInGetRequests")
    {
        snmpingetrequests = value;
        snmpingetrequests.value_namespace = name_space;
        snmpingetrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInGetNexts")
    {
        snmpingetnexts = value;
        snmpingetnexts.value_namespace = name_space;
        snmpingetnexts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInSetRequests")
    {
        snmpinsetrequests = value;
        snmpinsetrequests.value_namespace = name_space;
        snmpinsetrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInGetResponses")
    {
        snmpingetresponses = value;
        snmpingetresponses.value_namespace = name_space;
        snmpingetresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpInTraps")
    {
        snmpintraps = value;
        snmpintraps.value_namespace = name_space;
        snmpintraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutTooBigs")
    {
        snmpouttoobigs = value;
        snmpouttoobigs.value_namespace = name_space;
        snmpouttoobigs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutNoSuchNames")
    {
        snmpoutnosuchnames = value;
        snmpoutnosuchnames.value_namespace = name_space;
        snmpoutnosuchnames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutBadValues")
    {
        snmpoutbadvalues = value;
        snmpoutbadvalues.value_namespace = name_space;
        snmpoutbadvalues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutGenErrs")
    {
        snmpoutgenerrs = value;
        snmpoutgenerrs.value_namespace = name_space;
        snmpoutgenerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutGetRequests")
    {
        snmpoutgetrequests = value;
        snmpoutgetrequests.value_namespace = name_space;
        snmpoutgetrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutGetNexts")
    {
        snmpoutgetnexts = value;
        snmpoutgetnexts.value_namespace = name_space;
        snmpoutgetnexts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutSetRequests")
    {
        snmpoutsetrequests = value;
        snmpoutsetrequests.value_namespace = name_space;
        snmpoutsetrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutGetResponses")
    {
        snmpoutgetresponses = value;
        snmpoutgetresponses.value_namespace = name_space;
        snmpoutgetresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpOutTraps")
    {
        snmpouttraps = value;
        snmpouttraps.value_namespace = name_space;
        snmpouttraps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpEnableAuthenTraps")
    {
        snmpenableauthentraps = value;
        snmpenableauthentraps.value_namespace = name_space;
        snmpenableauthentraps.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpInPkts")
    {
        snmpinpkts.yfilter = yfilter;
    }
    if(value_path == "snmpOutPkts")
    {
        snmpoutpkts.yfilter = yfilter;
    }
    if(value_path == "snmpInBadVersions")
    {
        snmpinbadversions.yfilter = yfilter;
    }
    if(value_path == "snmpInBadCommunityNames")
    {
        snmpinbadcommunitynames.yfilter = yfilter;
    }
    if(value_path == "snmpInBadCommunityUses")
    {
        snmpinbadcommunityuses.yfilter = yfilter;
    }
    if(value_path == "snmpInASNParseErrs")
    {
        snmpinasnparseerrs.yfilter = yfilter;
    }
    if(value_path == "snmpInTooBigs")
    {
        snmpintoobigs.yfilter = yfilter;
    }
    if(value_path == "snmpInNoSuchNames")
    {
        snmpinnosuchnames.yfilter = yfilter;
    }
    if(value_path == "snmpInBadValues")
    {
        snmpinbadvalues.yfilter = yfilter;
    }
    if(value_path == "snmpInReadOnlys")
    {
        snmpinreadonlys.yfilter = yfilter;
    }
    if(value_path == "snmpInGenErrs")
    {
        snmpingenerrs.yfilter = yfilter;
    }
    if(value_path == "snmpInTotalReqVars")
    {
        snmpintotalreqvars.yfilter = yfilter;
    }
    if(value_path == "snmpInTotalSetVars")
    {
        snmpintotalsetvars.yfilter = yfilter;
    }
    if(value_path == "snmpInGetRequests")
    {
        snmpingetrequests.yfilter = yfilter;
    }
    if(value_path == "snmpInGetNexts")
    {
        snmpingetnexts.yfilter = yfilter;
    }
    if(value_path == "snmpInSetRequests")
    {
        snmpinsetrequests.yfilter = yfilter;
    }
    if(value_path == "snmpInGetResponses")
    {
        snmpingetresponses.yfilter = yfilter;
    }
    if(value_path == "snmpInTraps")
    {
        snmpintraps.yfilter = yfilter;
    }
    if(value_path == "snmpOutTooBigs")
    {
        snmpouttoobigs.yfilter = yfilter;
    }
    if(value_path == "snmpOutNoSuchNames")
    {
        snmpoutnosuchnames.yfilter = yfilter;
    }
    if(value_path == "snmpOutBadValues")
    {
        snmpoutbadvalues.yfilter = yfilter;
    }
    if(value_path == "snmpOutGenErrs")
    {
        snmpoutgenerrs.yfilter = yfilter;
    }
    if(value_path == "snmpOutGetRequests")
    {
        snmpoutgetrequests.yfilter = yfilter;
    }
    if(value_path == "snmpOutGetNexts")
    {
        snmpoutgetnexts.yfilter = yfilter;
    }
    if(value_path == "snmpOutSetRequests")
    {
        snmpoutsetrequests.yfilter = yfilter;
    }
    if(value_path == "snmpOutGetResponses")
    {
        snmpoutgetresponses.yfilter = yfilter;
    }
    if(value_path == "snmpOutTraps")
    {
        snmpouttraps.yfilter = yfilter;
    }
    if(value_path == "snmpEnableAuthenTraps")
    {
        snmpenableauthentraps.yfilter = yfilter;
    }
}

bool RFC1213MIB::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpInPkts" || name == "snmpOutPkts" || name == "snmpInBadVersions" || name == "snmpInBadCommunityNames" || name == "snmpInBadCommunityUses" || name == "snmpInASNParseErrs" || name == "snmpInTooBigs" || name == "snmpInNoSuchNames" || name == "snmpInBadValues" || name == "snmpInReadOnlys" || name == "snmpInGenErrs" || name == "snmpInTotalReqVars" || name == "snmpInTotalSetVars" || name == "snmpInGetRequests" || name == "snmpInGetNexts" || name == "snmpInSetRequests" || name == "snmpInGetResponses" || name == "snmpInTraps" || name == "snmpOutTooBigs" || name == "snmpOutNoSuchNames" || name == "snmpOutBadValues" || name == "snmpOutGenErrs" || name == "snmpOutGetRequests" || name == "snmpOutGetNexts" || name == "snmpOutSetRequests" || name == "snmpOutGetResponses" || name == "snmpOutTraps" || name == "snmpEnableAuthenTraps")
        return true;
    return false;
}

RFC1213MIB::Iftable::Iftable()
{

    yang_name = "ifTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Iftable::~Iftable()
{
}

bool RFC1213MIB::Iftable::has_data() const
{
    for (std::size_t index=0; index<ifentry.size(); index++)
    {
        if(ifentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Iftable::has_operation() const
{
    for (std::size_t index=0; index<ifentry.size(); index++)
    {
        if(ifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Iftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Iftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Iftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Iftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifEntry")
    {
        for(auto const & c : ifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Iftable::Ifentry>();
        c->parent = this;
        ifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Iftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Iftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Iftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Iftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifEntry")
        return true;
    return false;
}

RFC1213MIB::Iftable::Ifentry::Ifentry()
    :
    ifindex{YType::int32, "ifIndex"},
    ifdescr{YType::str, "ifDescr"},
    iftype{YType::enumeration, "ifType"},
    ifmtu{YType::int32, "ifMtu"},
    ifspeed{YType::uint32, "ifSpeed"},
    ifphysaddress{YType::str, "ifPhysAddress"},
    ifadminstatus{YType::enumeration, "ifAdminStatus"},
    ifoperstatus{YType::enumeration, "ifOperStatus"},
    iflastchange{YType::uint32, "ifLastChange"},
    ifinoctets{YType::uint32, "ifInOctets"},
    ifinucastpkts{YType::uint32, "ifInUcastPkts"},
    ifinnucastpkts{YType::uint32, "ifInNUcastPkts"},
    ifindiscards{YType::uint32, "ifInDiscards"},
    ifinerrors{YType::uint32, "ifInErrors"},
    ifinunknownprotos{YType::uint32, "ifInUnknownProtos"},
    ifoutoctets{YType::uint32, "ifOutOctets"},
    ifoutucastpkts{YType::uint32, "ifOutUcastPkts"},
    ifoutnucastpkts{YType::uint32, "ifOutNUcastPkts"},
    ifoutdiscards{YType::uint32, "ifOutDiscards"},
    ifouterrors{YType::uint32, "ifOutErrors"},
    ifoutqlen{YType::uint32, "ifOutQLen"},
    ifspecific{YType::str, "ifSpecific"}
{

    yang_name = "ifEntry"; yang_parent_name = "ifTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Iftable::Ifentry::~Ifentry()
{
}

bool RFC1213MIB::Iftable::Ifentry::has_data() const
{
    return ifindex.is_set
	|| ifdescr.is_set
	|| iftype.is_set
	|| ifmtu.is_set
	|| ifspeed.is_set
	|| ifphysaddress.is_set
	|| ifadminstatus.is_set
	|| ifoperstatus.is_set
	|| iflastchange.is_set
	|| ifinoctets.is_set
	|| ifinucastpkts.is_set
	|| ifinnucastpkts.is_set
	|| ifindiscards.is_set
	|| ifinerrors.is_set
	|| ifinunknownprotos.is_set
	|| ifoutoctets.is_set
	|| ifoutucastpkts.is_set
	|| ifoutnucastpkts.is_set
	|| ifoutdiscards.is_set
	|| ifouterrors.is_set
	|| ifoutqlen.is_set
	|| ifspecific.is_set;
}

bool RFC1213MIB::Iftable::Ifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ifdescr.yfilter)
	|| ydk::is_set(iftype.yfilter)
	|| ydk::is_set(ifmtu.yfilter)
	|| ydk::is_set(ifspeed.yfilter)
	|| ydk::is_set(ifphysaddress.yfilter)
	|| ydk::is_set(ifadminstatus.yfilter)
	|| ydk::is_set(ifoperstatus.yfilter)
	|| ydk::is_set(iflastchange.yfilter)
	|| ydk::is_set(ifinoctets.yfilter)
	|| ydk::is_set(ifinucastpkts.yfilter)
	|| ydk::is_set(ifinnucastpkts.yfilter)
	|| ydk::is_set(ifindiscards.yfilter)
	|| ydk::is_set(ifinerrors.yfilter)
	|| ydk::is_set(ifinunknownprotos.yfilter)
	|| ydk::is_set(ifoutoctets.yfilter)
	|| ydk::is_set(ifoutucastpkts.yfilter)
	|| ydk::is_set(ifoutnucastpkts.yfilter)
	|| ydk::is_set(ifoutdiscards.yfilter)
	|| ydk::is_set(ifouterrors.yfilter)
	|| ydk::is_set(ifoutqlen.yfilter)
	|| ydk::is_set(ifspecific.yfilter);
}

std::string RFC1213MIB::Iftable::Ifentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/ifTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Iftable::Ifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Iftable::Ifentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ifdescr.is_set || is_set(ifdescr.yfilter)) leaf_name_data.push_back(ifdescr.get_name_leafdata());
    if (iftype.is_set || is_set(iftype.yfilter)) leaf_name_data.push_back(iftype.get_name_leafdata());
    if (ifmtu.is_set || is_set(ifmtu.yfilter)) leaf_name_data.push_back(ifmtu.get_name_leafdata());
    if (ifspeed.is_set || is_set(ifspeed.yfilter)) leaf_name_data.push_back(ifspeed.get_name_leafdata());
    if (ifphysaddress.is_set || is_set(ifphysaddress.yfilter)) leaf_name_data.push_back(ifphysaddress.get_name_leafdata());
    if (ifadminstatus.is_set || is_set(ifadminstatus.yfilter)) leaf_name_data.push_back(ifadminstatus.get_name_leafdata());
    if (ifoperstatus.is_set || is_set(ifoperstatus.yfilter)) leaf_name_data.push_back(ifoperstatus.get_name_leafdata());
    if (iflastchange.is_set || is_set(iflastchange.yfilter)) leaf_name_data.push_back(iflastchange.get_name_leafdata());
    if (ifinoctets.is_set || is_set(ifinoctets.yfilter)) leaf_name_data.push_back(ifinoctets.get_name_leafdata());
    if (ifinucastpkts.is_set || is_set(ifinucastpkts.yfilter)) leaf_name_data.push_back(ifinucastpkts.get_name_leafdata());
    if (ifinnucastpkts.is_set || is_set(ifinnucastpkts.yfilter)) leaf_name_data.push_back(ifinnucastpkts.get_name_leafdata());
    if (ifindiscards.is_set || is_set(ifindiscards.yfilter)) leaf_name_data.push_back(ifindiscards.get_name_leafdata());
    if (ifinerrors.is_set || is_set(ifinerrors.yfilter)) leaf_name_data.push_back(ifinerrors.get_name_leafdata());
    if (ifinunknownprotos.is_set || is_set(ifinunknownprotos.yfilter)) leaf_name_data.push_back(ifinunknownprotos.get_name_leafdata());
    if (ifoutoctets.is_set || is_set(ifoutoctets.yfilter)) leaf_name_data.push_back(ifoutoctets.get_name_leafdata());
    if (ifoutucastpkts.is_set || is_set(ifoutucastpkts.yfilter)) leaf_name_data.push_back(ifoutucastpkts.get_name_leafdata());
    if (ifoutnucastpkts.is_set || is_set(ifoutnucastpkts.yfilter)) leaf_name_data.push_back(ifoutnucastpkts.get_name_leafdata());
    if (ifoutdiscards.is_set || is_set(ifoutdiscards.yfilter)) leaf_name_data.push_back(ifoutdiscards.get_name_leafdata());
    if (ifouterrors.is_set || is_set(ifouterrors.yfilter)) leaf_name_data.push_back(ifouterrors.get_name_leafdata());
    if (ifoutqlen.is_set || is_set(ifoutqlen.yfilter)) leaf_name_data.push_back(ifoutqlen.get_name_leafdata());
    if (ifspecific.is_set || is_set(ifspecific.yfilter)) leaf_name_data.push_back(ifspecific.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Iftable::Ifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Iftable::Ifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Iftable::Ifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDescr")
    {
        ifdescr = value;
        ifdescr.value_namespace = name_space;
        ifdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifType")
    {
        iftype = value;
        iftype.value_namespace = name_space;
        iftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifMtu")
    {
        ifmtu = value;
        ifmtu.value_namespace = name_space;
        ifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifSpeed")
    {
        ifspeed = value;
        ifspeed.value_namespace = name_space;
        ifspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifPhysAddress")
    {
        ifphysaddress = value;
        ifphysaddress.value_namespace = name_space;
        ifphysaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAdminStatus")
    {
        ifadminstatus = value;
        ifadminstatus.value_namespace = name_space;
        ifadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOperStatus")
    {
        ifoperstatus = value;
        ifoperstatus.value_namespace = name_space;
        ifoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLastChange")
    {
        iflastchange = value;
        iflastchange.value_namespace = name_space;
        iflastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInOctets")
    {
        ifinoctets = value;
        ifinoctets.value_namespace = name_space;
        ifinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInUcastPkts")
    {
        ifinucastpkts = value;
        ifinucastpkts.value_namespace = name_space;
        ifinucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInNUcastPkts")
    {
        ifinnucastpkts = value;
        ifinnucastpkts.value_namespace = name_space;
        ifinnucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInDiscards")
    {
        ifindiscards = value;
        ifindiscards.value_namespace = name_space;
        ifindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInErrors")
    {
        ifinerrors = value;
        ifinerrors.value_namespace = name_space;
        ifinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInUnknownProtos")
    {
        ifinunknownprotos = value;
        ifinunknownprotos.value_namespace = name_space;
        ifinunknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutOctets")
    {
        ifoutoctets = value;
        ifoutoctets.value_namespace = name_space;
        ifoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutUcastPkts")
    {
        ifoutucastpkts = value;
        ifoutucastpkts.value_namespace = name_space;
        ifoutucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutNUcastPkts")
    {
        ifoutnucastpkts = value;
        ifoutnucastpkts.value_namespace = name_space;
        ifoutnucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutDiscards")
    {
        ifoutdiscards = value;
        ifoutdiscards.value_namespace = name_space;
        ifoutdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutErrors")
    {
        ifouterrors = value;
        ifouterrors.value_namespace = name_space;
        ifouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutQLen")
    {
        ifoutqlen = value;
        ifoutqlen.value_namespace = name_space;
        ifoutqlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifSpecific")
    {
        ifspecific = value;
        ifspecific.value_namespace = name_space;
        ifspecific.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Iftable::Ifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ifDescr")
    {
        ifdescr.yfilter = yfilter;
    }
    if(value_path == "ifType")
    {
        iftype.yfilter = yfilter;
    }
    if(value_path == "ifMtu")
    {
        ifmtu.yfilter = yfilter;
    }
    if(value_path == "ifSpeed")
    {
        ifspeed.yfilter = yfilter;
    }
    if(value_path == "ifPhysAddress")
    {
        ifphysaddress.yfilter = yfilter;
    }
    if(value_path == "ifAdminStatus")
    {
        ifadminstatus.yfilter = yfilter;
    }
    if(value_path == "ifOperStatus")
    {
        ifoperstatus.yfilter = yfilter;
    }
    if(value_path == "ifLastChange")
    {
        iflastchange.yfilter = yfilter;
    }
    if(value_path == "ifInOctets")
    {
        ifinoctets.yfilter = yfilter;
    }
    if(value_path == "ifInUcastPkts")
    {
        ifinucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInNUcastPkts")
    {
        ifinnucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInDiscards")
    {
        ifindiscards.yfilter = yfilter;
    }
    if(value_path == "ifInErrors")
    {
        ifinerrors.yfilter = yfilter;
    }
    if(value_path == "ifInUnknownProtos")
    {
        ifinunknownprotos.yfilter = yfilter;
    }
    if(value_path == "ifOutOctets")
    {
        ifoutoctets.yfilter = yfilter;
    }
    if(value_path == "ifOutUcastPkts")
    {
        ifoutucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutNUcastPkts")
    {
        ifoutnucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutDiscards")
    {
        ifoutdiscards.yfilter = yfilter;
    }
    if(value_path == "ifOutErrors")
    {
        ifouterrors.yfilter = yfilter;
    }
    if(value_path == "ifOutQLen")
    {
        ifoutqlen.yfilter = yfilter;
    }
    if(value_path == "ifSpecific")
    {
        ifspecific.yfilter = yfilter;
    }
}

bool RFC1213MIB::Iftable::Ifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ifDescr" || name == "ifType" || name == "ifMtu" || name == "ifSpeed" || name == "ifPhysAddress" || name == "ifAdminStatus" || name == "ifOperStatus" || name == "ifLastChange" || name == "ifInOctets" || name == "ifInUcastPkts" || name == "ifInNUcastPkts" || name == "ifInDiscards" || name == "ifInErrors" || name == "ifInUnknownProtos" || name == "ifOutOctets" || name == "ifOutUcastPkts" || name == "ifOutNUcastPkts" || name == "ifOutDiscards" || name == "ifOutErrors" || name == "ifOutQLen" || name == "ifSpecific")
        return true;
    return false;
}

RFC1213MIB::Attable::Attable()
{

    yang_name = "atTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Attable::~Attable()
{
}

bool RFC1213MIB::Attable::has_data() const
{
    for (std::size_t index=0; index<atentry.size(); index++)
    {
        if(atentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Attable::has_operation() const
{
    for (std::size_t index=0; index<atentry.size(); index++)
    {
        if(atentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Attable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Attable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Attable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Attable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atEntry")
    {
        for(auto const & c : atentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Attable::Atentry>();
        c->parent = this;
        atentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Attable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Attable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Attable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Attable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atEntry")
        return true;
    return false;
}

RFC1213MIB::Attable::Atentry::Atentry()
    :
    atifindex{YType::int32, "atIfIndex"},
    atifindex_2{YType::int32, "atIfIndex_2"},
    atnetaddress{YType::str, "atNetAddress"},
    atphysaddress{YType::str, "atPhysAddress"}
{

    yang_name = "atEntry"; yang_parent_name = "atTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Attable::Atentry::~Atentry()
{
}

bool RFC1213MIB::Attable::Atentry::has_data() const
{
    return atifindex.is_set
	|| atifindex_2.is_set
	|| atnetaddress.is_set
	|| atphysaddress.is_set;
}

bool RFC1213MIB::Attable::Atentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atifindex.yfilter)
	|| ydk::is_set(atifindex_2.yfilter)
	|| ydk::is_set(atnetaddress.yfilter)
	|| ydk::is_set(atphysaddress.yfilter);
}

std::string RFC1213MIB::Attable::Atentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/atTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Attable::Atentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atEntry" <<"[atIfIndex='" <<atifindex <<"']" <<"[atIfIndex_2='" <<atifindex_2 <<"']" <<"[atNetAddress='" <<atnetaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Attable::Atentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atifindex.is_set || is_set(atifindex.yfilter)) leaf_name_data.push_back(atifindex.get_name_leafdata());
    if (atifindex_2.is_set || is_set(atifindex_2.yfilter)) leaf_name_data.push_back(atifindex_2.get_name_leafdata());
    if (atnetaddress.is_set || is_set(atnetaddress.yfilter)) leaf_name_data.push_back(atnetaddress.get_name_leafdata());
    if (atphysaddress.is_set || is_set(atphysaddress.yfilter)) leaf_name_data.push_back(atphysaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Attable::Atentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Attable::Atentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Attable::Atentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atIfIndex")
    {
        atifindex = value;
        atifindex.value_namespace = name_space;
        atifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atIfIndex_2")
    {
        atifindex_2 = value;
        atifindex_2.value_namespace = name_space;
        atifindex_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atNetAddress")
    {
        atnetaddress = value;
        atnetaddress.value_namespace = name_space;
        atnetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atPhysAddress")
    {
        atphysaddress = value;
        atphysaddress.value_namespace = name_space;
        atphysaddress.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Attable::Atentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atIfIndex")
    {
        atifindex.yfilter = yfilter;
    }
    if(value_path == "atIfIndex_2")
    {
        atifindex_2.yfilter = yfilter;
    }
    if(value_path == "atNetAddress")
    {
        atnetaddress.yfilter = yfilter;
    }
    if(value_path == "atPhysAddress")
    {
        atphysaddress.yfilter = yfilter;
    }
}

bool RFC1213MIB::Attable::Atentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atIfIndex" || name == "atIfIndex_2" || name == "atNetAddress" || name == "atPhysAddress")
        return true;
    return false;
}

RFC1213MIB::Ipaddrtable::Ipaddrtable()
{

    yang_name = "ipAddrTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Ipaddrtable::~Ipaddrtable()
{
}

bool RFC1213MIB::Ipaddrtable::has_data() const
{
    for (std::size_t index=0; index<ipaddrentry.size(); index++)
    {
        if(ipaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Ipaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ipaddrentry.size(); index++)
    {
        if(ipaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Ipaddrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Ipaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Ipaddrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Ipaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipAddrEntry")
    {
        for(auto const & c : ipaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Ipaddrtable::Ipaddrentry>();
        c->parent = this;
        ipaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Ipaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Ipaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Ipaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Ipaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddrEntry")
        return true;
    return false;
}

RFC1213MIB::Ipaddrtable::Ipaddrentry::Ipaddrentry()
    :
    ipadentaddr{YType::str, "ipAdEntAddr"},
    ipadentifindex{YType::int32, "ipAdEntIfIndex"},
    ipadentnetmask{YType::str, "ipAdEntNetMask"},
    ipadentbcastaddr{YType::int32, "ipAdEntBcastAddr"},
    ipadentreasmmaxsize{YType::int32, "ipAdEntReasmMaxSize"}
{

    yang_name = "ipAddrEntry"; yang_parent_name = "ipAddrTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Ipaddrtable::Ipaddrentry::~Ipaddrentry()
{
}

bool RFC1213MIB::Ipaddrtable::Ipaddrentry::has_data() const
{
    return ipadentaddr.is_set
	|| ipadentifindex.is_set
	|| ipadentnetmask.is_set
	|| ipadentbcastaddr.is_set
	|| ipadentreasmmaxsize.is_set;
}

bool RFC1213MIB::Ipaddrtable::Ipaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipadentaddr.yfilter)
	|| ydk::is_set(ipadentifindex.yfilter)
	|| ydk::is_set(ipadentnetmask.yfilter)
	|| ydk::is_set(ipadentbcastaddr.yfilter)
	|| ydk::is_set(ipadentreasmmaxsize.yfilter);
}

std::string RFC1213MIB::Ipaddrtable::Ipaddrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/ipAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Ipaddrtable::Ipaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddrEntry" <<"[ipAdEntAddr='" <<ipadentaddr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Ipaddrtable::Ipaddrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipadentaddr.is_set || is_set(ipadentaddr.yfilter)) leaf_name_data.push_back(ipadentaddr.get_name_leafdata());
    if (ipadentifindex.is_set || is_set(ipadentifindex.yfilter)) leaf_name_data.push_back(ipadentifindex.get_name_leafdata());
    if (ipadentnetmask.is_set || is_set(ipadentnetmask.yfilter)) leaf_name_data.push_back(ipadentnetmask.get_name_leafdata());
    if (ipadentbcastaddr.is_set || is_set(ipadentbcastaddr.yfilter)) leaf_name_data.push_back(ipadentbcastaddr.get_name_leafdata());
    if (ipadentreasmmaxsize.is_set || is_set(ipadentreasmmaxsize.yfilter)) leaf_name_data.push_back(ipadentreasmmaxsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Ipaddrtable::Ipaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Ipaddrtable::Ipaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Ipaddrtable::Ipaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAdEntAddr")
    {
        ipadentaddr = value;
        ipadentaddr.value_namespace = name_space;
        ipadentaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAdEntIfIndex")
    {
        ipadentifindex = value;
        ipadentifindex.value_namespace = name_space;
        ipadentifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAdEntNetMask")
    {
        ipadentnetmask = value;
        ipadentnetmask.value_namespace = name_space;
        ipadentnetmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAdEntBcastAddr")
    {
        ipadentbcastaddr = value;
        ipadentbcastaddr.value_namespace = name_space;
        ipadentbcastaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAdEntReasmMaxSize")
    {
        ipadentreasmmaxsize = value;
        ipadentreasmmaxsize.value_namespace = name_space;
        ipadentreasmmaxsize.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Ipaddrtable::Ipaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAdEntAddr")
    {
        ipadentaddr.yfilter = yfilter;
    }
    if(value_path == "ipAdEntIfIndex")
    {
        ipadentifindex.yfilter = yfilter;
    }
    if(value_path == "ipAdEntNetMask")
    {
        ipadentnetmask.yfilter = yfilter;
    }
    if(value_path == "ipAdEntBcastAddr")
    {
        ipadentbcastaddr.yfilter = yfilter;
    }
    if(value_path == "ipAdEntReasmMaxSize")
    {
        ipadentreasmmaxsize.yfilter = yfilter;
    }
}

bool RFC1213MIB::Ipaddrtable::Ipaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAdEntAddr" || name == "ipAdEntIfIndex" || name == "ipAdEntNetMask" || name == "ipAdEntBcastAddr" || name == "ipAdEntReasmMaxSize")
        return true;
    return false;
}

RFC1213MIB::Iproutetable::Iproutetable()
{

    yang_name = "ipRouteTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Iproutetable::~Iproutetable()
{
}

bool RFC1213MIB::Iproutetable::has_data() const
{
    for (std::size_t index=0; index<iprouteentry.size(); index++)
    {
        if(iprouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Iproutetable::has_operation() const
{
    for (std::size_t index=0; index<iprouteentry.size(); index++)
    {
        if(iprouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Iproutetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Iproutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Iproutetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Iproutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipRouteEntry")
    {
        for(auto const & c : iprouteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Iproutetable::Iprouteentry>();
        c->parent = this;
        iprouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Iproutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iprouteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Iproutetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Iproutetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Iproutetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipRouteEntry")
        return true;
    return false;
}

RFC1213MIB::Iproutetable::Iprouteentry::Iprouteentry()
    :
    iproutedest{YType::str, "ipRouteDest"},
    iprouteifindex{YType::int32, "ipRouteIfIndex"},
    iproutemetric1{YType::int32, "ipRouteMetric1"},
    iproutemetric2{YType::int32, "ipRouteMetric2"},
    iproutemetric3{YType::int32, "ipRouteMetric3"},
    iproutemetric4{YType::int32, "ipRouteMetric4"},
    iproutenexthop{YType::str, "ipRouteNextHop"},
    iproutetype{YType::enumeration, "ipRouteType"},
    iprouteproto{YType::enumeration, "ipRouteProto"},
    iprouteage{YType::int32, "ipRouteAge"},
    iproutemask{YType::str, "ipRouteMask"},
    iproutemetric5{YType::int32, "ipRouteMetric5"},
    iprouteinfo{YType::str, "ipRouteInfo"}
{

    yang_name = "ipRouteEntry"; yang_parent_name = "ipRouteTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Iproutetable::Iprouteentry::~Iprouteentry()
{
}

bool RFC1213MIB::Iproutetable::Iprouteentry::has_data() const
{
    return iproutedest.is_set
	|| iprouteifindex.is_set
	|| iproutemetric1.is_set
	|| iproutemetric2.is_set
	|| iproutemetric3.is_set
	|| iproutemetric4.is_set
	|| iproutenexthop.is_set
	|| iproutetype.is_set
	|| iprouteproto.is_set
	|| iprouteage.is_set
	|| iproutemask.is_set
	|| iproutemetric5.is_set
	|| iprouteinfo.is_set;
}

bool RFC1213MIB::Iproutetable::Iprouteentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iproutedest.yfilter)
	|| ydk::is_set(iprouteifindex.yfilter)
	|| ydk::is_set(iproutemetric1.yfilter)
	|| ydk::is_set(iproutemetric2.yfilter)
	|| ydk::is_set(iproutemetric3.yfilter)
	|| ydk::is_set(iproutemetric4.yfilter)
	|| ydk::is_set(iproutenexthop.yfilter)
	|| ydk::is_set(iproutetype.yfilter)
	|| ydk::is_set(iprouteproto.yfilter)
	|| ydk::is_set(iprouteage.yfilter)
	|| ydk::is_set(iproutemask.yfilter)
	|| ydk::is_set(iproutemetric5.yfilter)
	|| ydk::is_set(iprouteinfo.yfilter);
}

std::string RFC1213MIB::Iproutetable::Iprouteentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/ipRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Iproutetable::Iprouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRouteEntry" <<"[ipRouteDest='" <<iproutedest <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Iproutetable::Iprouteentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iproutedest.is_set || is_set(iproutedest.yfilter)) leaf_name_data.push_back(iproutedest.get_name_leafdata());
    if (iprouteifindex.is_set || is_set(iprouteifindex.yfilter)) leaf_name_data.push_back(iprouteifindex.get_name_leafdata());
    if (iproutemetric1.is_set || is_set(iproutemetric1.yfilter)) leaf_name_data.push_back(iproutemetric1.get_name_leafdata());
    if (iproutemetric2.is_set || is_set(iproutemetric2.yfilter)) leaf_name_data.push_back(iproutemetric2.get_name_leafdata());
    if (iproutemetric3.is_set || is_set(iproutemetric3.yfilter)) leaf_name_data.push_back(iproutemetric3.get_name_leafdata());
    if (iproutemetric4.is_set || is_set(iproutemetric4.yfilter)) leaf_name_data.push_back(iproutemetric4.get_name_leafdata());
    if (iproutenexthop.is_set || is_set(iproutenexthop.yfilter)) leaf_name_data.push_back(iproutenexthop.get_name_leafdata());
    if (iproutetype.is_set || is_set(iproutetype.yfilter)) leaf_name_data.push_back(iproutetype.get_name_leafdata());
    if (iprouteproto.is_set || is_set(iprouteproto.yfilter)) leaf_name_data.push_back(iprouteproto.get_name_leafdata());
    if (iprouteage.is_set || is_set(iprouteage.yfilter)) leaf_name_data.push_back(iprouteage.get_name_leafdata());
    if (iproutemask.is_set || is_set(iproutemask.yfilter)) leaf_name_data.push_back(iproutemask.get_name_leafdata());
    if (iproutemetric5.is_set || is_set(iproutemetric5.yfilter)) leaf_name_data.push_back(iproutemetric5.get_name_leafdata());
    if (iprouteinfo.is_set || is_set(iprouteinfo.yfilter)) leaf_name_data.push_back(iprouteinfo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Iproutetable::Iprouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Iproutetable::Iprouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Iproutetable::Iprouteentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipRouteDest")
    {
        iproutedest = value;
        iproutedest.value_namespace = name_space;
        iproutedest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteIfIndex")
    {
        iprouteifindex = value;
        iprouteifindex.value_namespace = name_space;
        iprouteifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteMetric1")
    {
        iproutemetric1 = value;
        iproutemetric1.value_namespace = name_space;
        iproutemetric1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteMetric2")
    {
        iproutemetric2 = value;
        iproutemetric2.value_namespace = name_space;
        iproutemetric2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteMetric3")
    {
        iproutemetric3 = value;
        iproutemetric3.value_namespace = name_space;
        iproutemetric3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteMetric4")
    {
        iproutemetric4 = value;
        iproutemetric4.value_namespace = name_space;
        iproutemetric4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteNextHop")
    {
        iproutenexthop = value;
        iproutenexthop.value_namespace = name_space;
        iproutenexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteType")
    {
        iproutetype = value;
        iproutetype.value_namespace = name_space;
        iproutetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteProto")
    {
        iprouteproto = value;
        iprouteproto.value_namespace = name_space;
        iprouteproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteAge")
    {
        iprouteage = value;
        iprouteage.value_namespace = name_space;
        iprouteage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteMask")
    {
        iproutemask = value;
        iproutemask.value_namespace = name_space;
        iproutemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteMetric5")
    {
        iproutemetric5 = value;
        iproutemetric5.value_namespace = name_space;
        iproutemetric5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRouteInfo")
    {
        iprouteinfo = value;
        iprouteinfo.value_namespace = name_space;
        iprouteinfo.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Iproutetable::Iprouteentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipRouteDest")
    {
        iproutedest.yfilter = yfilter;
    }
    if(value_path == "ipRouteIfIndex")
    {
        iprouteifindex.yfilter = yfilter;
    }
    if(value_path == "ipRouteMetric1")
    {
        iproutemetric1.yfilter = yfilter;
    }
    if(value_path == "ipRouteMetric2")
    {
        iproutemetric2.yfilter = yfilter;
    }
    if(value_path == "ipRouteMetric3")
    {
        iproutemetric3.yfilter = yfilter;
    }
    if(value_path == "ipRouteMetric4")
    {
        iproutemetric4.yfilter = yfilter;
    }
    if(value_path == "ipRouteNextHop")
    {
        iproutenexthop.yfilter = yfilter;
    }
    if(value_path == "ipRouteType")
    {
        iproutetype.yfilter = yfilter;
    }
    if(value_path == "ipRouteProto")
    {
        iprouteproto.yfilter = yfilter;
    }
    if(value_path == "ipRouteAge")
    {
        iprouteage.yfilter = yfilter;
    }
    if(value_path == "ipRouteMask")
    {
        iproutemask.yfilter = yfilter;
    }
    if(value_path == "ipRouteMetric5")
    {
        iproutemetric5.yfilter = yfilter;
    }
    if(value_path == "ipRouteInfo")
    {
        iprouteinfo.yfilter = yfilter;
    }
}

bool RFC1213MIB::Iproutetable::Iprouteentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipRouteDest" || name == "ipRouteIfIndex" || name == "ipRouteMetric1" || name == "ipRouteMetric2" || name == "ipRouteMetric3" || name == "ipRouteMetric4" || name == "ipRouteNextHop" || name == "ipRouteType" || name == "ipRouteProto" || name == "ipRouteAge" || name == "ipRouteMask" || name == "ipRouteMetric5" || name == "ipRouteInfo")
        return true;
    return false;
}

RFC1213MIB::Ipnettomediatable::Ipnettomediatable()
{

    yang_name = "ipNetToMediaTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Ipnettomediatable::~Ipnettomediatable()
{
}

bool RFC1213MIB::Ipnettomediatable::has_data() const
{
    for (std::size_t index=0; index<ipnettomediaentry.size(); index++)
    {
        if(ipnettomediaentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Ipnettomediatable::has_operation() const
{
    for (std::size_t index=0; index<ipnettomediaentry.size(); index++)
    {
        if(ipnettomediaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Ipnettomediatable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Ipnettomediatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToMediaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Ipnettomediatable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Ipnettomediatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipNetToMediaEntry")
    {
        for(auto const & c : ipnettomediaentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Ipnettomediatable::Ipnettomediaentry>();
        c->parent = this;
        ipnettomediaentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Ipnettomediatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipnettomediaentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Ipnettomediatable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Ipnettomediatable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Ipnettomediatable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipNetToMediaEntry")
        return true;
    return false;
}

RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediaentry()
    :
    ipnettomediaifindex{YType::int32, "ipNetToMediaIfIndex"},
    ipnettomedianetaddress{YType::str, "ipNetToMediaNetAddress"},
    ipnettomediaphysaddress{YType::str, "ipNetToMediaPhysAddress"},
    ipnettomediatype{YType::enumeration, "ipNetToMediaType"}
{

    yang_name = "ipNetToMediaEntry"; yang_parent_name = "ipNetToMediaTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::~Ipnettomediaentry()
{
}

bool RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::has_data() const
{
    return ipnettomediaifindex.is_set
	|| ipnettomedianetaddress.is_set
	|| ipnettomediaphysaddress.is_set
	|| ipnettomediatype.is_set;
}

bool RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipnettomediaifindex.yfilter)
	|| ydk::is_set(ipnettomedianetaddress.yfilter)
	|| ydk::is_set(ipnettomediaphysaddress.yfilter)
	|| ydk::is_set(ipnettomediatype.yfilter);
}

std::string RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/ipNetToMediaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToMediaEntry" <<"[ipNetToMediaIfIndex='" <<ipnettomediaifindex <<"']" <<"[ipNetToMediaNetAddress='" <<ipnettomedianetaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipnettomediaifindex.is_set || is_set(ipnettomediaifindex.yfilter)) leaf_name_data.push_back(ipnettomediaifindex.get_name_leafdata());
    if (ipnettomedianetaddress.is_set || is_set(ipnettomedianetaddress.yfilter)) leaf_name_data.push_back(ipnettomedianetaddress.get_name_leafdata());
    if (ipnettomediaphysaddress.is_set || is_set(ipnettomediaphysaddress.yfilter)) leaf_name_data.push_back(ipnettomediaphysaddress.get_name_leafdata());
    if (ipnettomediatype.is_set || is_set(ipnettomediatype.yfilter)) leaf_name_data.push_back(ipnettomediatype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipNetToMediaIfIndex")
    {
        ipnettomediaifindex = value;
        ipnettomediaifindex.value_namespace = name_space;
        ipnettomediaifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToMediaNetAddress")
    {
        ipnettomedianetaddress = value;
        ipnettomedianetaddress.value_namespace = name_space;
        ipnettomedianetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToMediaPhysAddress")
    {
        ipnettomediaphysaddress = value;
        ipnettomediaphysaddress.value_namespace = name_space;
        ipnettomediaphysaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToMediaType")
    {
        ipnettomediatype = value;
        ipnettomediatype.value_namespace = name_space;
        ipnettomediatype.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipNetToMediaIfIndex")
    {
        ipnettomediaifindex.yfilter = yfilter;
    }
    if(value_path == "ipNetToMediaNetAddress")
    {
        ipnettomedianetaddress.yfilter = yfilter;
    }
    if(value_path == "ipNetToMediaPhysAddress")
    {
        ipnettomediaphysaddress.yfilter = yfilter;
    }
    if(value_path == "ipNetToMediaType")
    {
        ipnettomediatype.yfilter = yfilter;
    }
}

bool RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipNetToMediaIfIndex" || name == "ipNetToMediaNetAddress" || name == "ipNetToMediaPhysAddress" || name == "ipNetToMediaType")
        return true;
    return false;
}

RFC1213MIB::Tcpconntable::Tcpconntable()
{

    yang_name = "tcpConnTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Tcpconntable::~Tcpconntable()
{
}

bool RFC1213MIB::Tcpconntable::has_data() const
{
    for (std::size_t index=0; index<tcpconnentry.size(); index++)
    {
        if(tcpconnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Tcpconntable::has_operation() const
{
    for (std::size_t index=0; index<tcpconnentry.size(); index++)
    {
        if(tcpconnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Tcpconntable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Tcpconntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Tcpconntable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Tcpconntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcpConnEntry")
    {
        for(auto const & c : tcpconnentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Tcpconntable::Tcpconnentry>();
        c->parent = this;
        tcpconnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Tcpconntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tcpconnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Tcpconntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Tcpconntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Tcpconntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpConnEntry")
        return true;
    return false;
}

RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnentry()
    :
    tcpconnlocaladdress{YType::str, "tcpConnLocalAddress"},
    tcpconnlocalport{YType::int32, "tcpConnLocalPort"},
    tcpconnremaddress{YType::str, "tcpConnRemAddress"},
    tcpconnremport{YType::int32, "tcpConnRemPort"},
    tcpconnstate{YType::enumeration, "tcpConnState"}
{

    yang_name = "tcpConnEntry"; yang_parent_name = "tcpConnTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Tcpconntable::Tcpconnentry::~Tcpconnentry()
{
}

bool RFC1213MIB::Tcpconntable::Tcpconnentry::has_data() const
{
    return tcpconnlocaladdress.is_set
	|| tcpconnlocalport.is_set
	|| tcpconnremaddress.is_set
	|| tcpconnremport.is_set
	|| tcpconnstate.is_set;
}

bool RFC1213MIB::Tcpconntable::Tcpconnentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcpconnlocaladdress.yfilter)
	|| ydk::is_set(tcpconnlocalport.yfilter)
	|| ydk::is_set(tcpconnremaddress.yfilter)
	|| ydk::is_set(tcpconnremport.yfilter)
	|| ydk::is_set(tcpconnstate.yfilter);
}

std::string RFC1213MIB::Tcpconntable::Tcpconnentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/tcpConnTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Tcpconntable::Tcpconnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnEntry" <<"[tcpConnLocalAddress='" <<tcpconnlocaladdress <<"']" <<"[tcpConnLocalPort='" <<tcpconnlocalport <<"']" <<"[tcpConnRemAddress='" <<tcpconnremaddress <<"']" <<"[tcpConnRemPort='" <<tcpconnremport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Tcpconntable::Tcpconnentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpconnlocaladdress.is_set || is_set(tcpconnlocaladdress.yfilter)) leaf_name_data.push_back(tcpconnlocaladdress.get_name_leafdata());
    if (tcpconnlocalport.is_set || is_set(tcpconnlocalport.yfilter)) leaf_name_data.push_back(tcpconnlocalport.get_name_leafdata());
    if (tcpconnremaddress.is_set || is_set(tcpconnremaddress.yfilter)) leaf_name_data.push_back(tcpconnremaddress.get_name_leafdata());
    if (tcpconnremport.is_set || is_set(tcpconnremport.yfilter)) leaf_name_data.push_back(tcpconnremport.get_name_leafdata());
    if (tcpconnstate.is_set || is_set(tcpconnstate.yfilter)) leaf_name_data.push_back(tcpconnstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Tcpconntable::Tcpconnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Tcpconntable::Tcpconnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Tcpconntable::Tcpconnentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpConnLocalAddress")
    {
        tcpconnlocaladdress = value;
        tcpconnlocaladdress.value_namespace = name_space;
        tcpconnlocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnLocalPort")
    {
        tcpconnlocalport = value;
        tcpconnlocalport.value_namespace = name_space;
        tcpconnlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnRemAddress")
    {
        tcpconnremaddress = value;
        tcpconnremaddress.value_namespace = name_space;
        tcpconnremaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnRemPort")
    {
        tcpconnremport = value;
        tcpconnremport.value_namespace = name_space;
        tcpconnremport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnState")
    {
        tcpconnstate = value;
        tcpconnstate.value_namespace = name_space;
        tcpconnstate.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Tcpconntable::Tcpconnentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpConnLocalAddress")
    {
        tcpconnlocaladdress.yfilter = yfilter;
    }
    if(value_path == "tcpConnLocalPort")
    {
        tcpconnlocalport.yfilter = yfilter;
    }
    if(value_path == "tcpConnRemAddress")
    {
        tcpconnremaddress.yfilter = yfilter;
    }
    if(value_path == "tcpConnRemPort")
    {
        tcpconnremport.yfilter = yfilter;
    }
    if(value_path == "tcpConnState")
    {
        tcpconnstate.yfilter = yfilter;
    }
}

bool RFC1213MIB::Tcpconntable::Tcpconnentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpConnLocalAddress" || name == "tcpConnLocalPort" || name == "tcpConnRemAddress" || name == "tcpConnRemPort" || name == "tcpConnState")
        return true;
    return false;
}

RFC1213MIB::Udptable::Udptable()
{

    yang_name = "udpTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Udptable::~Udptable()
{
}

bool RFC1213MIB::Udptable::has_data() const
{
    for (std::size_t index=0; index<udpentry.size(); index++)
    {
        if(udpentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Udptable::has_operation() const
{
    for (std::size_t index=0; index<udpentry.size(); index++)
    {
        if(udpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Udptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Udptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Udptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Udptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udpEntry")
    {
        for(auto const & c : udpentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Udptable::Udpentry>();
        c->parent = this;
        udpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Udptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Udptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Udptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Udptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEntry")
        return true;
    return false;
}

RFC1213MIB::Udptable::Udpentry::Udpentry()
    :
    udplocaladdress{YType::str, "udpLocalAddress"},
    udplocalport{YType::int32, "udpLocalPort"}
{

    yang_name = "udpEntry"; yang_parent_name = "udpTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Udptable::Udpentry::~Udpentry()
{
}

bool RFC1213MIB::Udptable::Udpentry::has_data() const
{
    return udplocaladdress.is_set
	|| udplocalport.is_set;
}

bool RFC1213MIB::Udptable::Udpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udplocaladdress.yfilter)
	|| ydk::is_set(udplocalport.yfilter);
}

std::string RFC1213MIB::Udptable::Udpentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/udpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Udptable::Udpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEntry" <<"[udpLocalAddress='" <<udplocaladdress <<"']" <<"[udpLocalPort='" <<udplocalport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Udptable::Udpentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udplocaladdress.is_set || is_set(udplocaladdress.yfilter)) leaf_name_data.push_back(udplocaladdress.get_name_leafdata());
    if (udplocalport.is_set || is_set(udplocalport.yfilter)) leaf_name_data.push_back(udplocalport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Udptable::Udpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Udptable::Udpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Udptable::Udpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udpLocalAddress")
    {
        udplocaladdress = value;
        udplocaladdress.value_namespace = name_space;
        udplocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpLocalPort")
    {
        udplocalport = value;
        udplocalport.value_namespace = name_space;
        udplocalport.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Udptable::Udpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udpLocalAddress")
    {
        udplocaladdress.yfilter = yfilter;
    }
    if(value_path == "udpLocalPort")
    {
        udplocalport.yfilter = yfilter;
    }
}

bool RFC1213MIB::Udptable::Udpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpLocalAddress" || name == "udpLocalPort")
        return true;
    return false;
}

RFC1213MIB::Egpneightable::Egpneightable()
{

    yang_name = "egpNeighTable"; yang_parent_name = "RFC1213-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Egpneightable::~Egpneightable()
{
}

bool RFC1213MIB::Egpneightable::has_data() const
{
    for (std::size_t index=0; index<egpneighentry.size(); index++)
    {
        if(egpneighentry[index]->has_data())
            return true;
    }
    return false;
}

bool RFC1213MIB::Egpneightable::has_operation() const
{
    for (std::size_t index=0; index<egpneighentry.size(); index++)
    {
        if(egpneighentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RFC1213MIB::Egpneightable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Egpneightable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egpNeighTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Egpneightable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Egpneightable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egpNeighEntry")
    {
        for(auto const & c : egpneighentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RFC1213MIB::Egpneightable::Egpneighentry>();
        c->parent = this;
        egpneighentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Egpneightable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : egpneighentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RFC1213MIB::Egpneightable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RFC1213MIB::Egpneightable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RFC1213MIB::Egpneightable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egpNeighEntry")
        return true;
    return false;
}

RFC1213MIB::Egpneightable::Egpneighentry::Egpneighentry()
    :
    egpneighaddr{YType::str, "egpNeighAddr"},
    egpneighstate{YType::enumeration, "egpNeighState"},
    egpneighas{YType::int32, "egpNeighAs"},
    egpneighinmsgs{YType::uint32, "egpNeighInMsgs"},
    egpneighinerrs{YType::uint32, "egpNeighInErrs"},
    egpneighoutmsgs{YType::uint32, "egpNeighOutMsgs"},
    egpneighouterrs{YType::uint32, "egpNeighOutErrs"},
    egpneighinerrmsgs{YType::uint32, "egpNeighInErrMsgs"},
    egpneighouterrmsgs{YType::uint32, "egpNeighOutErrMsgs"},
    egpneighstateups{YType::uint32, "egpNeighStateUps"},
    egpneighstatedowns{YType::uint32, "egpNeighStateDowns"},
    egpneighintervalhello{YType::int32, "egpNeighIntervalHello"},
    egpneighintervalpoll{YType::int32, "egpNeighIntervalPoll"},
    egpneighmode{YType::enumeration, "egpNeighMode"},
    egpneigheventtrigger{YType::enumeration, "egpNeighEventTrigger"}
{

    yang_name = "egpNeighEntry"; yang_parent_name = "egpNeighTable"; is_top_level_class = false; has_list_ancestor = false;
}

RFC1213MIB::Egpneightable::Egpneighentry::~Egpneighentry()
{
}

bool RFC1213MIB::Egpneightable::Egpneighentry::has_data() const
{
    return egpneighaddr.is_set
	|| egpneighstate.is_set
	|| egpneighas.is_set
	|| egpneighinmsgs.is_set
	|| egpneighinerrs.is_set
	|| egpneighoutmsgs.is_set
	|| egpneighouterrs.is_set
	|| egpneighinerrmsgs.is_set
	|| egpneighouterrmsgs.is_set
	|| egpneighstateups.is_set
	|| egpneighstatedowns.is_set
	|| egpneighintervalhello.is_set
	|| egpneighintervalpoll.is_set
	|| egpneighmode.is_set
	|| egpneigheventtrigger.is_set;
}

bool RFC1213MIB::Egpneightable::Egpneighentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egpneighaddr.yfilter)
	|| ydk::is_set(egpneighstate.yfilter)
	|| ydk::is_set(egpneighas.yfilter)
	|| ydk::is_set(egpneighinmsgs.yfilter)
	|| ydk::is_set(egpneighinerrs.yfilter)
	|| ydk::is_set(egpneighoutmsgs.yfilter)
	|| ydk::is_set(egpneighouterrs.yfilter)
	|| ydk::is_set(egpneighinerrmsgs.yfilter)
	|| ydk::is_set(egpneighouterrmsgs.yfilter)
	|| ydk::is_set(egpneighstateups.yfilter)
	|| ydk::is_set(egpneighstatedowns.yfilter)
	|| ydk::is_set(egpneighintervalhello.yfilter)
	|| ydk::is_set(egpneighintervalpoll.yfilter)
	|| ydk::is_set(egpneighmode.yfilter)
	|| ydk::is_set(egpneigheventtrigger.yfilter);
}

std::string RFC1213MIB::Egpneightable::Egpneighentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RFC1213-MIB:RFC1213-MIB/egpNeighTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RFC1213MIB::Egpneightable::Egpneighentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egpNeighEntry" <<"[egpNeighAddr='" <<egpneighaddr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RFC1213MIB::Egpneightable::Egpneighentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egpneighaddr.is_set || is_set(egpneighaddr.yfilter)) leaf_name_data.push_back(egpneighaddr.get_name_leafdata());
    if (egpneighstate.is_set || is_set(egpneighstate.yfilter)) leaf_name_data.push_back(egpneighstate.get_name_leafdata());
    if (egpneighas.is_set || is_set(egpneighas.yfilter)) leaf_name_data.push_back(egpneighas.get_name_leafdata());
    if (egpneighinmsgs.is_set || is_set(egpneighinmsgs.yfilter)) leaf_name_data.push_back(egpneighinmsgs.get_name_leafdata());
    if (egpneighinerrs.is_set || is_set(egpneighinerrs.yfilter)) leaf_name_data.push_back(egpneighinerrs.get_name_leafdata());
    if (egpneighoutmsgs.is_set || is_set(egpneighoutmsgs.yfilter)) leaf_name_data.push_back(egpneighoutmsgs.get_name_leafdata());
    if (egpneighouterrs.is_set || is_set(egpneighouterrs.yfilter)) leaf_name_data.push_back(egpneighouterrs.get_name_leafdata());
    if (egpneighinerrmsgs.is_set || is_set(egpneighinerrmsgs.yfilter)) leaf_name_data.push_back(egpneighinerrmsgs.get_name_leafdata());
    if (egpneighouterrmsgs.is_set || is_set(egpneighouterrmsgs.yfilter)) leaf_name_data.push_back(egpneighouterrmsgs.get_name_leafdata());
    if (egpneighstateups.is_set || is_set(egpneighstateups.yfilter)) leaf_name_data.push_back(egpneighstateups.get_name_leafdata());
    if (egpneighstatedowns.is_set || is_set(egpneighstatedowns.yfilter)) leaf_name_data.push_back(egpneighstatedowns.get_name_leafdata());
    if (egpneighintervalhello.is_set || is_set(egpneighintervalhello.yfilter)) leaf_name_data.push_back(egpneighintervalhello.get_name_leafdata());
    if (egpneighintervalpoll.is_set || is_set(egpneighintervalpoll.yfilter)) leaf_name_data.push_back(egpneighintervalpoll.get_name_leafdata());
    if (egpneighmode.is_set || is_set(egpneighmode.yfilter)) leaf_name_data.push_back(egpneighmode.get_name_leafdata());
    if (egpneigheventtrigger.is_set || is_set(egpneigheventtrigger.yfilter)) leaf_name_data.push_back(egpneigheventtrigger.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RFC1213MIB::Egpneightable::Egpneighentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RFC1213MIB::Egpneightable::Egpneighentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RFC1213MIB::Egpneightable::Egpneighentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egpNeighAddr")
    {
        egpneighaddr = value;
        egpneighaddr.value_namespace = name_space;
        egpneighaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighState")
    {
        egpneighstate = value;
        egpneighstate.value_namespace = name_space;
        egpneighstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighAs")
    {
        egpneighas = value;
        egpneighas.value_namespace = name_space;
        egpneighas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighInMsgs")
    {
        egpneighinmsgs = value;
        egpneighinmsgs.value_namespace = name_space;
        egpneighinmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighInErrs")
    {
        egpneighinerrs = value;
        egpneighinerrs.value_namespace = name_space;
        egpneighinerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighOutMsgs")
    {
        egpneighoutmsgs = value;
        egpneighoutmsgs.value_namespace = name_space;
        egpneighoutmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighOutErrs")
    {
        egpneighouterrs = value;
        egpneighouterrs.value_namespace = name_space;
        egpneighouterrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighInErrMsgs")
    {
        egpneighinerrmsgs = value;
        egpneighinerrmsgs.value_namespace = name_space;
        egpneighinerrmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighOutErrMsgs")
    {
        egpneighouterrmsgs = value;
        egpneighouterrmsgs.value_namespace = name_space;
        egpneighouterrmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighStateUps")
    {
        egpneighstateups = value;
        egpneighstateups.value_namespace = name_space;
        egpneighstateups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighStateDowns")
    {
        egpneighstatedowns = value;
        egpneighstatedowns.value_namespace = name_space;
        egpneighstatedowns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighIntervalHello")
    {
        egpneighintervalhello = value;
        egpneighintervalhello.value_namespace = name_space;
        egpneighintervalhello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighIntervalPoll")
    {
        egpneighintervalpoll = value;
        egpneighintervalpoll.value_namespace = name_space;
        egpneighintervalpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighMode")
    {
        egpneighmode = value;
        egpneighmode.value_namespace = name_space;
        egpneighmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egpNeighEventTrigger")
    {
        egpneigheventtrigger = value;
        egpneigheventtrigger.value_namespace = name_space;
        egpneigheventtrigger.value_namespace_prefix = name_space_prefix;
    }
}

void RFC1213MIB::Egpneightable::Egpneighentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egpNeighAddr")
    {
        egpneighaddr.yfilter = yfilter;
    }
    if(value_path == "egpNeighState")
    {
        egpneighstate.yfilter = yfilter;
    }
    if(value_path == "egpNeighAs")
    {
        egpneighas.yfilter = yfilter;
    }
    if(value_path == "egpNeighInMsgs")
    {
        egpneighinmsgs.yfilter = yfilter;
    }
    if(value_path == "egpNeighInErrs")
    {
        egpneighinerrs.yfilter = yfilter;
    }
    if(value_path == "egpNeighOutMsgs")
    {
        egpneighoutmsgs.yfilter = yfilter;
    }
    if(value_path == "egpNeighOutErrs")
    {
        egpneighouterrs.yfilter = yfilter;
    }
    if(value_path == "egpNeighInErrMsgs")
    {
        egpneighinerrmsgs.yfilter = yfilter;
    }
    if(value_path == "egpNeighOutErrMsgs")
    {
        egpneighouterrmsgs.yfilter = yfilter;
    }
    if(value_path == "egpNeighStateUps")
    {
        egpneighstateups.yfilter = yfilter;
    }
    if(value_path == "egpNeighStateDowns")
    {
        egpneighstatedowns.yfilter = yfilter;
    }
    if(value_path == "egpNeighIntervalHello")
    {
        egpneighintervalhello.yfilter = yfilter;
    }
    if(value_path == "egpNeighIntervalPoll")
    {
        egpneighintervalpoll.yfilter = yfilter;
    }
    if(value_path == "egpNeighMode")
    {
        egpneighmode.yfilter = yfilter;
    }
    if(value_path == "egpNeighEventTrigger")
    {
        egpneigheventtrigger.yfilter = yfilter;
    }
}

bool RFC1213MIB::Egpneightable::Egpneighentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egpNeighAddr" || name == "egpNeighState" || name == "egpNeighAs" || name == "egpNeighInMsgs" || name == "egpNeighInErrs" || name == "egpNeighOutMsgs" || name == "egpNeighOutErrs" || name == "egpNeighInErrMsgs" || name == "egpNeighOutErrMsgs" || name == "egpNeighStateUps" || name == "egpNeighStateDowns" || name == "egpNeighIntervalHello" || name == "egpNeighIntervalPoll" || name == "egpNeighMode" || name == "egpNeighEventTrigger")
        return true;
    return false;
}

const Enum::YLeaf RFC1213MIB::Ip::Ipforwarding::forwarding {1, "forwarding"};
const Enum::YLeaf RFC1213MIB::Ip::Ipforwarding::not_forwarding {2, "not-forwarding"};

const Enum::YLeaf RFC1213MIB::Tcp::Tcprtoalgorithm::other {1, "other"};
const Enum::YLeaf RFC1213MIB::Tcp::Tcprtoalgorithm::constant {2, "constant"};
const Enum::YLeaf RFC1213MIB::Tcp::Tcprtoalgorithm::rsre {3, "rsre"};
const Enum::YLeaf RFC1213MIB::Tcp::Tcprtoalgorithm::vanj {4, "vanj"};
const Enum::YLeaf RFC1213MIB::Tcp::Tcprtoalgorithm::rfc2988 {5, "rfc2988"};

const Enum::YLeaf RFC1213MIB::Snmp::Snmpenableauthentraps::enabled {1, "enabled"};
const Enum::YLeaf RFC1213MIB::Snmp::Snmpenableauthentraps::disabled {2, "disabled"};

const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifadminstatus::up {1, "up"};
const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifadminstatus::down {2, "down"};
const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifadminstatus::testing {3, "testing"};

const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifoperstatus::up {1, "up"};
const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifoperstatus::down {2, "down"};
const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifoperstatus::testing {3, "testing"};
const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifoperstatus::unknown {4, "unknown"};
const Enum::YLeaf RFC1213MIB::Iftable::Ifentry::Ifoperstatus::dormant {5, "dormant"};

const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iproutetype::other {1, "other"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iproutetype::invalid {2, "invalid"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iproutetype::direct {3, "direct"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iproutetype::indirect {4, "indirect"};

const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::other {1, "other"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::local {2, "local"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::netmgmt {3, "netmgmt"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::icmp {4, "icmp"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::egp {5, "egp"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::ggp {6, "ggp"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::hello {7, "hello"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::rip {8, "rip"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::is_is {9, "is-is"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::es_is {10, "es-is"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::ospf {13, "ospf"};
const Enum::YLeaf RFC1213MIB::Iproutetable::Iprouteentry::Iprouteproto::bgp {14, "bgp"};

const Enum::YLeaf RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::other {1, "other"};
const Enum::YLeaf RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::invalid {2, "invalid"};
const Enum::YLeaf RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::dynamic {3, "dynamic"};
const Enum::YLeaf RFC1213MIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::static_ {4, "static"};

const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::closed {1, "closed"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::listen {2, "listen"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::synSent {3, "synSent"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::synReceived {4, "synReceived"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::established {5, "established"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::finWait1 {6, "finWait1"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::finWait2 {7, "finWait2"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::closeWait {8, "closeWait"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::lastAck {9, "lastAck"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::closing {10, "closing"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::timeWait {11, "timeWait"};
const Enum::YLeaf RFC1213MIB::Tcpconntable::Tcpconnentry::Tcpconnstate::deleteTCB {12, "deleteTCB"};

const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneighstate::idle {1, "idle"};
const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneighstate::acquisition {2, "acquisition"};
const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneighstate::down {3, "down"};
const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneighstate::up {4, "up"};
const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneighstate::cease {5, "cease"};

const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneighmode::active {1, "active"};
const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneighmode::passive {2, "passive"};

const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneigheventtrigger::start {1, "start"};
const Enum::YLeaf RFC1213MIB::Egpneightable::Egpneighentry::Egpneigheventtrigger::stop {2, "stop"};


}
}

