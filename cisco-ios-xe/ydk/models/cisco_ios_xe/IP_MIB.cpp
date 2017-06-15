
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IP_MIB.hpp"

namespace ydk {
namespace IP_MIB {

IpMib::IpMib()
    :
    icmp_(std::make_shared<IpMib::Icmp>())
	,icmpmsgstatstable_(std::make_shared<IpMib::Icmpmsgstatstable>())
	,icmpstatstable_(std::make_shared<IpMib::Icmpstatstable>())
	,ip_(std::make_shared<IpMib::Ip>())
	,ipaddressprefixtable_(std::make_shared<IpMib::Ipaddressprefixtable>())
	,ipaddresstable_(std::make_shared<IpMib::Ipaddresstable>())
	,ipaddrtable_(std::make_shared<IpMib::Ipaddrtable>())
	,ipdefaultroutertable_(std::make_shared<IpMib::Ipdefaultroutertable>())
	,ipifstatstable_(std::make_shared<IpMib::Ipifstatstable>())
	,ipnettomediatable_(std::make_shared<IpMib::Ipnettomediatable>())
	,ipnettophysicaltable_(std::make_shared<IpMib::Ipnettophysicaltable>())
	,ipsystemstatstable_(std::make_shared<IpMib::Ipsystemstatstable>())
	,iptrafficstats_(std::make_shared<IpMib::Iptrafficstats>())
	,ipv4interfacetable_(std::make_shared<IpMib::Ipv4Interfacetable>())
	,ipv6interfacetable_(std::make_shared<IpMib::Ipv6Interfacetable>())
	,ipv6routeradverttable_(std::make_shared<IpMib::Ipv6Routeradverttable>())
	,ipv6scopezoneindextable_(std::make_shared<IpMib::Ipv6Scopezoneindextable>())
{
    icmp_->parent = this;

    icmpmsgstatstable_->parent = this;

    icmpstatstable_->parent = this;

    ip_->parent = this;

    ipaddressprefixtable_->parent = this;

    ipaddresstable_->parent = this;

    ipaddrtable_->parent = this;

    ipdefaultroutertable_->parent = this;

    ipifstatstable_->parent = this;

    ipnettomediatable_->parent = this;

    ipnettophysicaltable_->parent = this;

    ipsystemstatstable_->parent = this;

    iptrafficstats_->parent = this;

    ipv4interfacetable_->parent = this;

    ipv6interfacetable_->parent = this;

    ipv6routeradverttable_->parent = this;

    ipv6scopezoneindextable_->parent = this;

    yang_name = "IP-MIB"; yang_parent_name = "IP-MIB";
}

IpMib::~IpMib()
{
}

bool IpMib::has_data() const
{
    return (icmp_ !=  nullptr && icmp_->has_data())
	|| (icmpmsgstatstable_ !=  nullptr && icmpmsgstatstable_->has_data())
	|| (icmpstatstable_ !=  nullptr && icmpstatstable_->has_data())
	|| (ip_ !=  nullptr && ip_->has_data())
	|| (ipaddressprefixtable_ !=  nullptr && ipaddressprefixtable_->has_data())
	|| (ipaddresstable_ !=  nullptr && ipaddresstable_->has_data())
	|| (ipaddrtable_ !=  nullptr && ipaddrtable_->has_data())
	|| (ipdefaultroutertable_ !=  nullptr && ipdefaultroutertable_->has_data())
	|| (ipifstatstable_ !=  nullptr && ipifstatstable_->has_data())
	|| (ipnettomediatable_ !=  nullptr && ipnettomediatable_->has_data())
	|| (ipnettophysicaltable_ !=  nullptr && ipnettophysicaltable_->has_data())
	|| (ipsystemstatstable_ !=  nullptr && ipsystemstatstable_->has_data())
	|| (iptrafficstats_ !=  nullptr && iptrafficstats_->has_data())
	|| (ipv4interfacetable_ !=  nullptr && ipv4interfacetable_->has_data())
	|| (ipv6interfacetable_ !=  nullptr && ipv6interfacetable_->has_data())
	|| (ipv6routeradverttable_ !=  nullptr && ipv6routeradverttable_->has_data())
	|| (ipv6scopezoneindextable_ !=  nullptr && ipv6scopezoneindextable_->has_data());
}

bool IpMib::has_operation() const
{
    return is_set(operation)
	|| (icmp_ !=  nullptr && icmp_->has_operation())
	|| (icmpmsgstatstable_ !=  nullptr && icmpmsgstatstable_->has_operation())
	|| (icmpstatstable_ !=  nullptr && icmpstatstable_->has_operation())
	|| (ip_ !=  nullptr && ip_->has_operation())
	|| (ipaddressprefixtable_ !=  nullptr && ipaddressprefixtable_->has_operation())
	|| (ipaddresstable_ !=  nullptr && ipaddresstable_->has_operation())
	|| (ipaddrtable_ !=  nullptr && ipaddrtable_->has_operation())
	|| (ipdefaultroutertable_ !=  nullptr && ipdefaultroutertable_->has_operation())
	|| (ipifstatstable_ !=  nullptr && ipifstatstable_->has_operation())
	|| (ipnettomediatable_ !=  nullptr && ipnettomediatable_->has_operation())
	|| (ipnettophysicaltable_ !=  nullptr && ipnettophysicaltable_->has_operation())
	|| (ipsystemstatstable_ !=  nullptr && ipsystemstatstable_->has_operation())
	|| (iptrafficstats_ !=  nullptr && iptrafficstats_->has_operation())
	|| (ipv4interfacetable_ !=  nullptr && ipv4interfacetable_->has_operation())
	|| (ipv6interfacetable_ !=  nullptr && ipv6interfacetable_->has_operation())
	|| (ipv6routeradverttable_ !=  nullptr && ipv6routeradverttable_->has_operation())
	|| (ipv6scopezoneindextable_ !=  nullptr && ipv6scopezoneindextable_->has_operation());
}

std::string IpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB";

    return path_buffer.str();

}

const EntityPath IpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> IpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp")
    {
        if(icmp_ == nullptr)
        {
            icmp_ = std::make_shared<IpMib::Icmp>();
        }
        return icmp_;
    }

    if(child_yang_name == "icmpMsgStatsTable")
    {
        if(icmpmsgstatstable_ == nullptr)
        {
            icmpmsgstatstable_ = std::make_shared<IpMib::Icmpmsgstatstable>();
        }
        return icmpmsgstatstable_;
    }

    if(child_yang_name == "icmpStatsTable")
    {
        if(icmpstatstable_ == nullptr)
        {
            icmpstatstable_ = std::make_shared<IpMib::Icmpstatstable>();
        }
        return icmpstatstable_;
    }

    if(child_yang_name == "ip")
    {
        if(ip_ == nullptr)
        {
            ip_ = std::make_shared<IpMib::Ip>();
        }
        return ip_;
    }

    if(child_yang_name == "ipAddressPrefixTable")
    {
        if(ipaddressprefixtable_ == nullptr)
        {
            ipaddressprefixtable_ = std::make_shared<IpMib::Ipaddressprefixtable>();
        }
        return ipaddressprefixtable_;
    }

    if(child_yang_name == "ipAddressTable")
    {
        if(ipaddresstable_ == nullptr)
        {
            ipaddresstable_ = std::make_shared<IpMib::Ipaddresstable>();
        }
        return ipaddresstable_;
    }

    if(child_yang_name == "ipAddrTable")
    {
        if(ipaddrtable_ == nullptr)
        {
            ipaddrtable_ = std::make_shared<IpMib::Ipaddrtable>();
        }
        return ipaddrtable_;
    }

    if(child_yang_name == "ipDefaultRouterTable")
    {
        if(ipdefaultroutertable_ == nullptr)
        {
            ipdefaultroutertable_ = std::make_shared<IpMib::Ipdefaultroutertable>();
        }
        return ipdefaultroutertable_;
    }

    if(child_yang_name == "ipIfStatsTable")
    {
        if(ipifstatstable_ == nullptr)
        {
            ipifstatstable_ = std::make_shared<IpMib::Ipifstatstable>();
        }
        return ipifstatstable_;
    }

    if(child_yang_name == "ipNetToMediaTable")
    {
        if(ipnettomediatable_ == nullptr)
        {
            ipnettomediatable_ = std::make_shared<IpMib::Ipnettomediatable>();
        }
        return ipnettomediatable_;
    }

    if(child_yang_name == "ipNetToPhysicalTable")
    {
        if(ipnettophysicaltable_ == nullptr)
        {
            ipnettophysicaltable_ = std::make_shared<IpMib::Ipnettophysicaltable>();
        }
        return ipnettophysicaltable_;
    }

    if(child_yang_name == "ipSystemStatsTable")
    {
        if(ipsystemstatstable_ == nullptr)
        {
            ipsystemstatstable_ = std::make_shared<IpMib::Ipsystemstatstable>();
        }
        return ipsystemstatstable_;
    }

    if(child_yang_name == "ipTrafficStats")
    {
        if(iptrafficstats_ == nullptr)
        {
            iptrafficstats_ = std::make_shared<IpMib::Iptrafficstats>();
        }
        return iptrafficstats_;
    }

    if(child_yang_name == "ipv4InterfaceTable")
    {
        if(ipv4interfacetable_ == nullptr)
        {
            ipv4interfacetable_ = std::make_shared<IpMib::Ipv4Interfacetable>();
        }
        return ipv4interfacetable_;
    }

    if(child_yang_name == "ipv6InterfaceTable")
    {
        if(ipv6interfacetable_ == nullptr)
        {
            ipv6interfacetable_ = std::make_shared<IpMib::Ipv6Interfacetable>();
        }
        return ipv6interfacetable_;
    }

    if(child_yang_name == "ipv6RouterAdvertTable")
    {
        if(ipv6routeradverttable_ == nullptr)
        {
            ipv6routeradverttable_ = std::make_shared<IpMib::Ipv6Routeradverttable>();
        }
        return ipv6routeradverttable_;
    }

    if(child_yang_name == "ipv6ScopeZoneIndexTable")
    {
        if(ipv6scopezoneindextable_ == nullptr)
        {
            ipv6scopezoneindextable_ = std::make_shared<IpMib::Ipv6Scopezoneindextable>();
        }
        return ipv6scopezoneindextable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp_ != nullptr)
    {
        children["icmp"] = icmp_;
    }

    if(icmpmsgstatstable_ != nullptr)
    {
        children["icmpMsgStatsTable"] = icmpmsgstatstable_;
    }

    if(icmpstatstable_ != nullptr)
    {
        children["icmpStatsTable"] = icmpstatstable_;
    }

    if(ip_ != nullptr)
    {
        children["ip"] = ip_;
    }

    if(ipaddressprefixtable_ != nullptr)
    {
        children["ipAddressPrefixTable"] = ipaddressprefixtable_;
    }

    if(ipaddresstable_ != nullptr)
    {
        children["ipAddressTable"] = ipaddresstable_;
    }

    if(ipaddrtable_ != nullptr)
    {
        children["ipAddrTable"] = ipaddrtable_;
    }

    if(ipdefaultroutertable_ != nullptr)
    {
        children["ipDefaultRouterTable"] = ipdefaultroutertable_;
    }

    if(ipifstatstable_ != nullptr)
    {
        children["ipIfStatsTable"] = ipifstatstable_;
    }

    if(ipnettomediatable_ != nullptr)
    {
        children["ipNetToMediaTable"] = ipnettomediatable_;
    }

    if(ipnettophysicaltable_ != nullptr)
    {
        children["ipNetToPhysicalTable"] = ipnettophysicaltable_;
    }

    if(ipsystemstatstable_ != nullptr)
    {
        children["ipSystemStatsTable"] = ipsystemstatstable_;
    }

    if(iptrafficstats_ != nullptr)
    {
        children["ipTrafficStats"] = iptrafficstats_;
    }

    if(ipv4interfacetable_ != nullptr)
    {
        children["ipv4InterfaceTable"] = ipv4interfacetable_;
    }

    if(ipv6interfacetable_ != nullptr)
    {
        children["ipv6InterfaceTable"] = ipv6interfacetable_;
    }

    if(ipv6routeradverttable_ != nullptr)
    {
        children["ipv6RouterAdvertTable"] = ipv6routeradverttable_;
    }

    if(ipv6scopezoneindextable_ != nullptr)
    {
        children["ipv6ScopeZoneIndexTable"] = ipv6scopezoneindextable_;
    }

    return children;
}

void IpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IpMib::clone_ptr() const
{
    return std::make_shared<IpMib>();
}

std::string IpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

IpMib::Ip::Ip()
    :
    ipaddressspinlock{YType::int32, "ipAddressSpinLock"},
    ipdefaultttl{YType::int32, "ipDefaultTTL"},
    ipforwarding{YType::enumeration, "ipForwarding"},
    ipforwdatagrams{YType::uint32, "ipForwDatagrams"},
    ipfragcreates{YType::uint32, "ipFragCreates"},
    ipfragfails{YType::uint32, "ipFragFails"},
    ipfragoks{YType::uint32, "ipFragOKs"},
    ipinaddrerrors{YType::uint32, "ipInAddrErrors"},
    ipindelivers{YType::uint32, "ipInDelivers"},
    ipindiscards{YType::uint32, "ipInDiscards"},
    ipinhdrerrors{YType::uint32, "ipInHdrErrors"},
    ipinreceives{YType::uint32, "ipInReceives"},
    ipinunknownprotos{YType::uint32, "ipInUnknownProtos"},
    ipoutdiscards{YType::uint32, "ipOutDiscards"},
    ipoutnoroutes{YType::uint32, "ipOutNoRoutes"},
    ipoutrequests{YType::uint32, "ipOutRequests"},
    ipreasmfails{YType::uint32, "ipReasmFails"},
    ipreasmoks{YType::uint32, "ipReasmOKs"},
    ipreasmreqds{YType::uint32, "ipReasmReqds"},
    ipreasmtimeout{YType::int32, "ipReasmTimeout"},
    iproutingdiscards{YType::uint32, "ipRoutingDiscards"},
    ipv4interfacetablelastchange{YType::uint32, "ipv4InterfaceTableLastChange"},
    ipv6interfacetablelastchange{YType::uint32, "ipv6InterfaceTableLastChange"},
    ipv6ipdefaulthoplimit{YType::int32, "ipv6IpDefaultHopLimit"},
    ipv6ipforwarding{YType::enumeration, "ipv6IpForwarding"},
    ipv6routeradvertspinlock{YType::int32, "ipv6RouterAdvertSpinLock"}
{
    yang_name = "ip"; yang_parent_name = "IP-MIB";
}

IpMib::Ip::~Ip()
{
}

bool IpMib::Ip::has_data() const
{
    return ipaddressspinlock.is_set
	|| ipdefaultttl.is_set
	|| ipforwarding.is_set
	|| ipforwdatagrams.is_set
	|| ipfragcreates.is_set
	|| ipfragfails.is_set
	|| ipfragoks.is_set
	|| ipinaddrerrors.is_set
	|| ipindelivers.is_set
	|| ipindiscards.is_set
	|| ipinhdrerrors.is_set
	|| ipinreceives.is_set
	|| ipinunknownprotos.is_set
	|| ipoutdiscards.is_set
	|| ipoutnoroutes.is_set
	|| ipoutrequests.is_set
	|| ipreasmfails.is_set
	|| ipreasmoks.is_set
	|| ipreasmreqds.is_set
	|| ipreasmtimeout.is_set
	|| iproutingdiscards.is_set
	|| ipv4interfacetablelastchange.is_set
	|| ipv6interfacetablelastchange.is_set
	|| ipv6ipdefaulthoplimit.is_set
	|| ipv6ipforwarding.is_set
	|| ipv6routeradvertspinlock.is_set;
}

bool IpMib::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(ipaddressspinlock.operation)
	|| is_set(ipdefaultttl.operation)
	|| is_set(ipforwarding.operation)
	|| is_set(ipforwdatagrams.operation)
	|| is_set(ipfragcreates.operation)
	|| is_set(ipfragfails.operation)
	|| is_set(ipfragoks.operation)
	|| is_set(ipinaddrerrors.operation)
	|| is_set(ipindelivers.operation)
	|| is_set(ipindiscards.operation)
	|| is_set(ipinhdrerrors.operation)
	|| is_set(ipinreceives.operation)
	|| is_set(ipinunknownprotos.operation)
	|| is_set(ipoutdiscards.operation)
	|| is_set(ipoutnoroutes.operation)
	|| is_set(ipoutrequests.operation)
	|| is_set(ipreasmfails.operation)
	|| is_set(ipreasmoks.operation)
	|| is_set(ipreasmreqds.operation)
	|| is_set(ipreasmtimeout.operation)
	|| is_set(iproutingdiscards.operation)
	|| is_set(ipv4interfacetablelastchange.operation)
	|| is_set(ipv6interfacetablelastchange.operation)
	|| is_set(ipv6ipdefaulthoplimit.operation)
	|| is_set(ipv6ipforwarding.operation)
	|| is_set(ipv6routeradvertspinlock.operation);
}

std::string IpMib::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath IpMib::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddressspinlock.is_set || is_set(ipaddressspinlock.operation)) leaf_name_data.push_back(ipaddressspinlock.get_name_leafdata());
    if (ipdefaultttl.is_set || is_set(ipdefaultttl.operation)) leaf_name_data.push_back(ipdefaultttl.get_name_leafdata());
    if (ipforwarding.is_set || is_set(ipforwarding.operation)) leaf_name_data.push_back(ipforwarding.get_name_leafdata());
    if (ipforwdatagrams.is_set || is_set(ipforwdatagrams.operation)) leaf_name_data.push_back(ipforwdatagrams.get_name_leafdata());
    if (ipfragcreates.is_set || is_set(ipfragcreates.operation)) leaf_name_data.push_back(ipfragcreates.get_name_leafdata());
    if (ipfragfails.is_set || is_set(ipfragfails.operation)) leaf_name_data.push_back(ipfragfails.get_name_leafdata());
    if (ipfragoks.is_set || is_set(ipfragoks.operation)) leaf_name_data.push_back(ipfragoks.get_name_leafdata());
    if (ipinaddrerrors.is_set || is_set(ipinaddrerrors.operation)) leaf_name_data.push_back(ipinaddrerrors.get_name_leafdata());
    if (ipindelivers.is_set || is_set(ipindelivers.operation)) leaf_name_data.push_back(ipindelivers.get_name_leafdata());
    if (ipindiscards.is_set || is_set(ipindiscards.operation)) leaf_name_data.push_back(ipindiscards.get_name_leafdata());
    if (ipinhdrerrors.is_set || is_set(ipinhdrerrors.operation)) leaf_name_data.push_back(ipinhdrerrors.get_name_leafdata());
    if (ipinreceives.is_set || is_set(ipinreceives.operation)) leaf_name_data.push_back(ipinreceives.get_name_leafdata());
    if (ipinunknownprotos.is_set || is_set(ipinunknownprotos.operation)) leaf_name_data.push_back(ipinunknownprotos.get_name_leafdata());
    if (ipoutdiscards.is_set || is_set(ipoutdiscards.operation)) leaf_name_data.push_back(ipoutdiscards.get_name_leafdata());
    if (ipoutnoroutes.is_set || is_set(ipoutnoroutes.operation)) leaf_name_data.push_back(ipoutnoroutes.get_name_leafdata());
    if (ipoutrequests.is_set || is_set(ipoutrequests.operation)) leaf_name_data.push_back(ipoutrequests.get_name_leafdata());
    if (ipreasmfails.is_set || is_set(ipreasmfails.operation)) leaf_name_data.push_back(ipreasmfails.get_name_leafdata());
    if (ipreasmoks.is_set || is_set(ipreasmoks.operation)) leaf_name_data.push_back(ipreasmoks.get_name_leafdata());
    if (ipreasmreqds.is_set || is_set(ipreasmreqds.operation)) leaf_name_data.push_back(ipreasmreqds.get_name_leafdata());
    if (ipreasmtimeout.is_set || is_set(ipreasmtimeout.operation)) leaf_name_data.push_back(ipreasmtimeout.get_name_leafdata());
    if (iproutingdiscards.is_set || is_set(iproutingdiscards.operation)) leaf_name_data.push_back(iproutingdiscards.get_name_leafdata());
    if (ipv4interfacetablelastchange.is_set || is_set(ipv4interfacetablelastchange.operation)) leaf_name_data.push_back(ipv4interfacetablelastchange.get_name_leafdata());
    if (ipv6interfacetablelastchange.is_set || is_set(ipv6interfacetablelastchange.operation)) leaf_name_data.push_back(ipv6interfacetablelastchange.get_name_leafdata());
    if (ipv6ipdefaulthoplimit.is_set || is_set(ipv6ipdefaulthoplimit.operation)) leaf_name_data.push_back(ipv6ipdefaulthoplimit.get_name_leafdata());
    if (ipv6ipforwarding.is_set || is_set(ipv6ipforwarding.operation)) leaf_name_data.push_back(ipv6ipforwarding.get_name_leafdata());
    if (ipv6routeradvertspinlock.is_set || is_set(ipv6routeradvertspinlock.operation)) leaf_name_data.push_back(ipv6routeradvertspinlock.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipAddressSpinLock")
    {
        ipaddressspinlock = value;
    }
    if(value_path == "ipDefaultTTL")
    {
        ipdefaultttl = value;
    }
    if(value_path == "ipForwarding")
    {
        ipforwarding = value;
    }
    if(value_path == "ipForwDatagrams")
    {
        ipforwdatagrams = value;
    }
    if(value_path == "ipFragCreates")
    {
        ipfragcreates = value;
    }
    if(value_path == "ipFragFails")
    {
        ipfragfails = value;
    }
    if(value_path == "ipFragOKs")
    {
        ipfragoks = value;
    }
    if(value_path == "ipInAddrErrors")
    {
        ipinaddrerrors = value;
    }
    if(value_path == "ipInDelivers")
    {
        ipindelivers = value;
    }
    if(value_path == "ipInDiscards")
    {
        ipindiscards = value;
    }
    if(value_path == "ipInHdrErrors")
    {
        ipinhdrerrors = value;
    }
    if(value_path == "ipInReceives")
    {
        ipinreceives = value;
    }
    if(value_path == "ipInUnknownProtos")
    {
        ipinunknownprotos = value;
    }
    if(value_path == "ipOutDiscards")
    {
        ipoutdiscards = value;
    }
    if(value_path == "ipOutNoRoutes")
    {
        ipoutnoroutes = value;
    }
    if(value_path == "ipOutRequests")
    {
        ipoutrequests = value;
    }
    if(value_path == "ipReasmFails")
    {
        ipreasmfails = value;
    }
    if(value_path == "ipReasmOKs")
    {
        ipreasmoks = value;
    }
    if(value_path == "ipReasmReqds")
    {
        ipreasmreqds = value;
    }
    if(value_path == "ipReasmTimeout")
    {
        ipreasmtimeout = value;
    }
    if(value_path == "ipRoutingDiscards")
    {
        iproutingdiscards = value;
    }
    if(value_path == "ipv4InterfaceTableLastChange")
    {
        ipv4interfacetablelastchange = value;
    }
    if(value_path == "ipv6InterfaceTableLastChange")
    {
        ipv6interfacetablelastchange = value;
    }
    if(value_path == "ipv6IpDefaultHopLimit")
    {
        ipv6ipdefaulthoplimit = value;
    }
    if(value_path == "ipv6IpForwarding")
    {
        ipv6ipforwarding = value;
    }
    if(value_path == "ipv6RouterAdvertSpinLock")
    {
        ipv6routeradvertspinlock = value;
    }
}

IpMib::Iptrafficstats::Iptrafficstats()
    :
    ipifstatstablelastchange{YType::uint32, "ipIfStatsTableLastChange"}
{
    yang_name = "ipTrafficStats"; yang_parent_name = "IP-MIB";
}

IpMib::Iptrafficstats::~Iptrafficstats()
{
}

bool IpMib::Iptrafficstats::has_data() const
{
    return ipifstatstablelastchange.is_set;
}

bool IpMib::Iptrafficstats::has_operation() const
{
    return is_set(operation)
	|| is_set(ipifstatstablelastchange.operation);
}

std::string IpMib::Iptrafficstats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipTrafficStats";

    return path_buffer.str();

}

const EntityPath IpMib::Iptrafficstats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipifstatstablelastchange.is_set || is_set(ipifstatstablelastchange.operation)) leaf_name_data.push_back(ipifstatstablelastchange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Iptrafficstats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Iptrafficstats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Iptrafficstats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipIfStatsTableLastChange")
    {
        ipifstatstablelastchange = value;
    }
}

IpMib::Icmp::Icmp()
    :
    icmpinaddrmaskreps{YType::uint32, "icmpInAddrMaskReps"},
    icmpinaddrmasks{YType::uint32, "icmpInAddrMasks"},
    icmpindestunreachs{YType::uint32, "icmpInDestUnreachs"},
    icmpinechoreps{YType::uint32, "icmpInEchoReps"},
    icmpinechos{YType::uint32, "icmpInEchos"},
    icmpinerrors{YType::uint32, "icmpInErrors"},
    icmpinmsgs{YType::uint32, "icmpInMsgs"},
    icmpinparmprobs{YType::uint32, "icmpInParmProbs"},
    icmpinredirects{YType::uint32, "icmpInRedirects"},
    icmpinsrcquenchs{YType::uint32, "icmpInSrcQuenchs"},
    icmpintimeexcds{YType::uint32, "icmpInTimeExcds"},
    icmpintimestampreps{YType::uint32, "icmpInTimestampReps"},
    icmpintimestamps{YType::uint32, "icmpInTimestamps"},
    icmpoutaddrmaskreps{YType::uint32, "icmpOutAddrMaskReps"},
    icmpoutaddrmasks{YType::uint32, "icmpOutAddrMasks"},
    icmpoutdestunreachs{YType::uint32, "icmpOutDestUnreachs"},
    icmpoutechoreps{YType::uint32, "icmpOutEchoReps"},
    icmpoutechos{YType::uint32, "icmpOutEchos"},
    icmpouterrors{YType::uint32, "icmpOutErrors"},
    icmpoutmsgs{YType::uint32, "icmpOutMsgs"},
    icmpoutparmprobs{YType::uint32, "icmpOutParmProbs"},
    icmpoutredirects{YType::uint32, "icmpOutRedirects"},
    icmpoutsrcquenchs{YType::uint32, "icmpOutSrcQuenchs"},
    icmpouttimeexcds{YType::uint32, "icmpOutTimeExcds"},
    icmpouttimestampreps{YType::uint32, "icmpOutTimestampReps"},
    icmpouttimestamps{YType::uint32, "icmpOutTimestamps"}
{
    yang_name = "icmp"; yang_parent_name = "IP-MIB";
}

IpMib::Icmp::~Icmp()
{
}

bool IpMib::Icmp::has_data() const
{
    return icmpinaddrmaskreps.is_set
	|| icmpinaddrmasks.is_set
	|| icmpindestunreachs.is_set
	|| icmpinechoreps.is_set
	|| icmpinechos.is_set
	|| icmpinerrors.is_set
	|| icmpinmsgs.is_set
	|| icmpinparmprobs.is_set
	|| icmpinredirects.is_set
	|| icmpinsrcquenchs.is_set
	|| icmpintimeexcds.is_set
	|| icmpintimestampreps.is_set
	|| icmpintimestamps.is_set
	|| icmpoutaddrmaskreps.is_set
	|| icmpoutaddrmasks.is_set
	|| icmpoutdestunreachs.is_set
	|| icmpoutechoreps.is_set
	|| icmpoutechos.is_set
	|| icmpouterrors.is_set
	|| icmpoutmsgs.is_set
	|| icmpoutparmprobs.is_set
	|| icmpoutredirects.is_set
	|| icmpoutsrcquenchs.is_set
	|| icmpouttimeexcds.is_set
	|| icmpouttimestampreps.is_set
	|| icmpouttimestamps.is_set;
}

bool IpMib::Icmp::has_operation() const
{
    return is_set(operation)
	|| is_set(icmpinaddrmaskreps.operation)
	|| is_set(icmpinaddrmasks.operation)
	|| is_set(icmpindestunreachs.operation)
	|| is_set(icmpinechoreps.operation)
	|| is_set(icmpinechos.operation)
	|| is_set(icmpinerrors.operation)
	|| is_set(icmpinmsgs.operation)
	|| is_set(icmpinparmprobs.operation)
	|| is_set(icmpinredirects.operation)
	|| is_set(icmpinsrcquenchs.operation)
	|| is_set(icmpintimeexcds.operation)
	|| is_set(icmpintimestampreps.operation)
	|| is_set(icmpintimestamps.operation)
	|| is_set(icmpoutaddrmaskreps.operation)
	|| is_set(icmpoutaddrmasks.operation)
	|| is_set(icmpoutdestunreachs.operation)
	|| is_set(icmpoutechoreps.operation)
	|| is_set(icmpoutechos.operation)
	|| is_set(icmpouterrors.operation)
	|| is_set(icmpoutmsgs.operation)
	|| is_set(icmpoutparmprobs.operation)
	|| is_set(icmpoutredirects.operation)
	|| is_set(icmpoutsrcquenchs.operation)
	|| is_set(icmpouttimeexcds.operation)
	|| is_set(icmpouttimestampreps.operation)
	|| is_set(icmpouttimestamps.operation);
}

std::string IpMib::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";

    return path_buffer.str();

}

const EntityPath IpMib::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmpinaddrmaskreps.is_set || is_set(icmpinaddrmaskreps.operation)) leaf_name_data.push_back(icmpinaddrmaskreps.get_name_leafdata());
    if (icmpinaddrmasks.is_set || is_set(icmpinaddrmasks.operation)) leaf_name_data.push_back(icmpinaddrmasks.get_name_leafdata());
    if (icmpindestunreachs.is_set || is_set(icmpindestunreachs.operation)) leaf_name_data.push_back(icmpindestunreachs.get_name_leafdata());
    if (icmpinechoreps.is_set || is_set(icmpinechoreps.operation)) leaf_name_data.push_back(icmpinechoreps.get_name_leafdata());
    if (icmpinechos.is_set || is_set(icmpinechos.operation)) leaf_name_data.push_back(icmpinechos.get_name_leafdata());
    if (icmpinerrors.is_set || is_set(icmpinerrors.operation)) leaf_name_data.push_back(icmpinerrors.get_name_leafdata());
    if (icmpinmsgs.is_set || is_set(icmpinmsgs.operation)) leaf_name_data.push_back(icmpinmsgs.get_name_leafdata());
    if (icmpinparmprobs.is_set || is_set(icmpinparmprobs.operation)) leaf_name_data.push_back(icmpinparmprobs.get_name_leafdata());
    if (icmpinredirects.is_set || is_set(icmpinredirects.operation)) leaf_name_data.push_back(icmpinredirects.get_name_leafdata());
    if (icmpinsrcquenchs.is_set || is_set(icmpinsrcquenchs.operation)) leaf_name_data.push_back(icmpinsrcquenchs.get_name_leafdata());
    if (icmpintimeexcds.is_set || is_set(icmpintimeexcds.operation)) leaf_name_data.push_back(icmpintimeexcds.get_name_leafdata());
    if (icmpintimestampreps.is_set || is_set(icmpintimestampreps.operation)) leaf_name_data.push_back(icmpintimestampreps.get_name_leafdata());
    if (icmpintimestamps.is_set || is_set(icmpintimestamps.operation)) leaf_name_data.push_back(icmpintimestamps.get_name_leafdata());
    if (icmpoutaddrmaskreps.is_set || is_set(icmpoutaddrmaskreps.operation)) leaf_name_data.push_back(icmpoutaddrmaskreps.get_name_leafdata());
    if (icmpoutaddrmasks.is_set || is_set(icmpoutaddrmasks.operation)) leaf_name_data.push_back(icmpoutaddrmasks.get_name_leafdata());
    if (icmpoutdestunreachs.is_set || is_set(icmpoutdestunreachs.operation)) leaf_name_data.push_back(icmpoutdestunreachs.get_name_leafdata());
    if (icmpoutechoreps.is_set || is_set(icmpoutechoreps.operation)) leaf_name_data.push_back(icmpoutechoreps.get_name_leafdata());
    if (icmpoutechos.is_set || is_set(icmpoutechos.operation)) leaf_name_data.push_back(icmpoutechos.get_name_leafdata());
    if (icmpouterrors.is_set || is_set(icmpouterrors.operation)) leaf_name_data.push_back(icmpouterrors.get_name_leafdata());
    if (icmpoutmsgs.is_set || is_set(icmpoutmsgs.operation)) leaf_name_data.push_back(icmpoutmsgs.get_name_leafdata());
    if (icmpoutparmprobs.is_set || is_set(icmpoutparmprobs.operation)) leaf_name_data.push_back(icmpoutparmprobs.get_name_leafdata());
    if (icmpoutredirects.is_set || is_set(icmpoutredirects.operation)) leaf_name_data.push_back(icmpoutredirects.get_name_leafdata());
    if (icmpoutsrcquenchs.is_set || is_set(icmpoutsrcquenchs.operation)) leaf_name_data.push_back(icmpoutsrcquenchs.get_name_leafdata());
    if (icmpouttimeexcds.is_set || is_set(icmpouttimeexcds.operation)) leaf_name_data.push_back(icmpouttimeexcds.get_name_leafdata());
    if (icmpouttimestampreps.is_set || is_set(icmpouttimestampreps.operation)) leaf_name_data.push_back(icmpouttimestampreps.get_name_leafdata());
    if (icmpouttimestamps.is_set || is_set(icmpouttimestamps.operation)) leaf_name_data.push_back(icmpouttimestamps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Icmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icmpInAddrMaskReps")
    {
        icmpinaddrmaskreps = value;
    }
    if(value_path == "icmpInAddrMasks")
    {
        icmpinaddrmasks = value;
    }
    if(value_path == "icmpInDestUnreachs")
    {
        icmpindestunreachs = value;
    }
    if(value_path == "icmpInEchoReps")
    {
        icmpinechoreps = value;
    }
    if(value_path == "icmpInEchos")
    {
        icmpinechos = value;
    }
    if(value_path == "icmpInErrors")
    {
        icmpinerrors = value;
    }
    if(value_path == "icmpInMsgs")
    {
        icmpinmsgs = value;
    }
    if(value_path == "icmpInParmProbs")
    {
        icmpinparmprobs = value;
    }
    if(value_path == "icmpInRedirects")
    {
        icmpinredirects = value;
    }
    if(value_path == "icmpInSrcQuenchs")
    {
        icmpinsrcquenchs = value;
    }
    if(value_path == "icmpInTimeExcds")
    {
        icmpintimeexcds = value;
    }
    if(value_path == "icmpInTimestampReps")
    {
        icmpintimestampreps = value;
    }
    if(value_path == "icmpInTimestamps")
    {
        icmpintimestamps = value;
    }
    if(value_path == "icmpOutAddrMaskReps")
    {
        icmpoutaddrmaskreps = value;
    }
    if(value_path == "icmpOutAddrMasks")
    {
        icmpoutaddrmasks = value;
    }
    if(value_path == "icmpOutDestUnreachs")
    {
        icmpoutdestunreachs = value;
    }
    if(value_path == "icmpOutEchoReps")
    {
        icmpoutechoreps = value;
    }
    if(value_path == "icmpOutEchos")
    {
        icmpoutechos = value;
    }
    if(value_path == "icmpOutErrors")
    {
        icmpouterrors = value;
    }
    if(value_path == "icmpOutMsgs")
    {
        icmpoutmsgs = value;
    }
    if(value_path == "icmpOutParmProbs")
    {
        icmpoutparmprobs = value;
    }
    if(value_path == "icmpOutRedirects")
    {
        icmpoutredirects = value;
    }
    if(value_path == "icmpOutSrcQuenchs")
    {
        icmpoutsrcquenchs = value;
    }
    if(value_path == "icmpOutTimeExcds")
    {
        icmpouttimeexcds = value;
    }
    if(value_path == "icmpOutTimestampReps")
    {
        icmpouttimestampreps = value;
    }
    if(value_path == "icmpOutTimestamps")
    {
        icmpouttimestamps = value;
    }
}

IpMib::Ipaddrtable::Ipaddrtable()
{
    yang_name = "ipAddrTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipaddrtable::~Ipaddrtable()
{
}

bool IpMib::Ipaddrtable::has_data() const
{
    for (std::size_t index=0; index<ipaddrentry_.size(); index++)
    {
        if(ipaddrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ipaddrentry_.size(); index++)
    {
        if(ipaddrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddrTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipAddrEntry")
    {
        for(auto const & c : ipaddrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipaddrtable::Ipaddrentry>();
        c->parent = this;
        ipaddrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipaddrtable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipaddrtable::Ipaddrentry::Ipaddrentry()
    :
    ipadentaddr{YType::str, "ipAdEntAddr"},
    ipadentbcastaddr{YType::int32, "ipAdEntBcastAddr"},
    ipadentifindex{YType::int32, "ipAdEntIfIndex"},
    ipadentnetmask{YType::str, "ipAdEntNetMask"},
    ipadentreasmmaxsize{YType::int32, "ipAdEntReasmMaxSize"}
{
    yang_name = "ipAddrEntry"; yang_parent_name = "ipAddrTable";
}

IpMib::Ipaddrtable::Ipaddrentry::~Ipaddrentry()
{
}

bool IpMib::Ipaddrtable::Ipaddrentry::has_data() const
{
    return ipadentaddr.is_set
	|| ipadentbcastaddr.is_set
	|| ipadentifindex.is_set
	|| ipadentnetmask.is_set
	|| ipadentreasmmaxsize.is_set;
}

bool IpMib::Ipaddrtable::Ipaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipadentaddr.operation)
	|| is_set(ipadentbcastaddr.operation)
	|| is_set(ipadentifindex.operation)
	|| is_set(ipadentnetmask.operation)
	|| is_set(ipadentreasmmaxsize.operation);
}

std::string IpMib::Ipaddrtable::Ipaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddrEntry" <<"[ipAdEntAddr='" <<ipadentaddr <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipaddrtable::Ipaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipadentaddr.is_set || is_set(ipadentaddr.operation)) leaf_name_data.push_back(ipadentaddr.get_name_leafdata());
    if (ipadentbcastaddr.is_set || is_set(ipadentbcastaddr.operation)) leaf_name_data.push_back(ipadentbcastaddr.get_name_leafdata());
    if (ipadentifindex.is_set || is_set(ipadentifindex.operation)) leaf_name_data.push_back(ipadentifindex.get_name_leafdata());
    if (ipadentnetmask.is_set || is_set(ipadentnetmask.operation)) leaf_name_data.push_back(ipadentnetmask.get_name_leafdata());
    if (ipadentreasmmaxsize.is_set || is_set(ipadentreasmmaxsize.operation)) leaf_name_data.push_back(ipadentreasmmaxsize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipaddrtable::Ipaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipaddrtable::Ipaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipaddrtable::Ipaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipAdEntAddr")
    {
        ipadentaddr = value;
    }
    if(value_path == "ipAdEntBcastAddr")
    {
        ipadentbcastaddr = value;
    }
    if(value_path == "ipAdEntIfIndex")
    {
        ipadentifindex = value;
    }
    if(value_path == "ipAdEntNetMask")
    {
        ipadentnetmask = value;
    }
    if(value_path == "ipAdEntReasmMaxSize")
    {
        ipadentreasmmaxsize = value;
    }
}

IpMib::Ipnettomediatable::Ipnettomediatable()
{
    yang_name = "ipNetToMediaTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipnettomediatable::~Ipnettomediatable()
{
}

bool IpMib::Ipnettomediatable::has_data() const
{
    for (std::size_t index=0; index<ipnettomediaentry_.size(); index++)
    {
        if(ipnettomediaentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipnettomediatable::has_operation() const
{
    for (std::size_t index=0; index<ipnettomediaentry_.size(); index++)
    {
        if(ipnettomediaentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipnettomediatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToMediaTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipnettomediatable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipnettomediatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipNetToMediaEntry")
    {
        for(auto const & c : ipnettomediaentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipnettomediatable::Ipnettomediaentry>();
        c->parent = this;
        ipnettomediaentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipnettomediatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipnettomediaentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipnettomediatable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipnettomediatable::Ipnettomediaentry::Ipnettomediaentry()
    :
    ipnettomediaifindex{YType::int32, "ipNetToMediaIfIndex"},
    ipnettomedianetaddress{YType::str, "ipNetToMediaNetAddress"},
    ipnettomediaphysaddress{YType::str, "ipNetToMediaPhysAddress"},
    ipnettomediatype{YType::enumeration, "ipNetToMediaType"}
{
    yang_name = "ipNetToMediaEntry"; yang_parent_name = "ipNetToMediaTable";
}

IpMib::Ipnettomediatable::Ipnettomediaentry::~Ipnettomediaentry()
{
}

bool IpMib::Ipnettomediatable::Ipnettomediaentry::has_data() const
{
    return ipnettomediaifindex.is_set
	|| ipnettomedianetaddress.is_set
	|| ipnettomediaphysaddress.is_set
	|| ipnettomediatype.is_set;
}

bool IpMib::Ipnettomediatable::Ipnettomediaentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipnettomediaifindex.operation)
	|| is_set(ipnettomedianetaddress.operation)
	|| is_set(ipnettomediaphysaddress.operation)
	|| is_set(ipnettomediatype.operation);
}

std::string IpMib::Ipnettomediatable::Ipnettomediaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToMediaEntry" <<"[ipNetToMediaIfIndex='" <<ipnettomediaifindex <<"']" <<"[ipNetToMediaNetAddress='" <<ipnettomedianetaddress <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipnettomediatable::Ipnettomediaentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipNetToMediaTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipnettomediaifindex.is_set || is_set(ipnettomediaifindex.operation)) leaf_name_data.push_back(ipnettomediaifindex.get_name_leafdata());
    if (ipnettomedianetaddress.is_set || is_set(ipnettomedianetaddress.operation)) leaf_name_data.push_back(ipnettomedianetaddress.get_name_leafdata());
    if (ipnettomediaphysaddress.is_set || is_set(ipnettomediaphysaddress.operation)) leaf_name_data.push_back(ipnettomediaphysaddress.get_name_leafdata());
    if (ipnettomediatype.is_set || is_set(ipnettomediatype.operation)) leaf_name_data.push_back(ipnettomediatype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipnettomediatable::Ipnettomediaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipnettomediatable::Ipnettomediaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipnettomediatable::Ipnettomediaentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipNetToMediaIfIndex")
    {
        ipnettomediaifindex = value;
    }
    if(value_path == "ipNetToMediaNetAddress")
    {
        ipnettomedianetaddress = value;
    }
    if(value_path == "ipNetToMediaPhysAddress")
    {
        ipnettomediaphysaddress = value;
    }
    if(value_path == "ipNetToMediaType")
    {
        ipnettomediatype = value;
    }
}

IpMib::Ipv4Interfacetable::Ipv4Interfacetable()
{
    yang_name = "ipv4InterfaceTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipv4Interfacetable::~Ipv4Interfacetable()
{
}

bool IpMib::Ipv4Interfacetable::has_data() const
{
    for (std::size_t index=0; index<ipv4interfaceentry_.size(); index++)
    {
        if(ipv4interfaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipv4Interfacetable::has_operation() const
{
    for (std::size_t index=0; index<ipv4interfaceentry_.size(); index++)
    {
        if(ipv4interfaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipv4Interfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4InterfaceTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv4Interfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv4Interfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4InterfaceEntry")
    {
        for(auto const & c : ipv4interfaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipv4Interfacetable::Ipv4Interfaceentry>();
        c->parent = this;
        ipv4interfaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv4Interfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4interfaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipv4Interfacetable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4Interfaceentry()
    :
    ipv4interfaceifindex{YType::int32, "ipv4InterfaceIfIndex"},
    ipv4interfaceenablestatus{YType::enumeration, "ipv4InterfaceEnableStatus"},
    ipv4interfacereasmmaxsize{YType::int32, "ipv4InterfaceReasmMaxSize"},
    ipv4interfaceretransmittime{YType::uint32, "ipv4InterfaceRetransmitTime"}
{
    yang_name = "ipv4InterfaceEntry"; yang_parent_name = "ipv4InterfaceTable";
}

IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::~Ipv4Interfaceentry()
{
}

bool IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::has_data() const
{
    return ipv4interfaceifindex.is_set
	|| ipv4interfaceenablestatus.is_set
	|| ipv4interfacereasmmaxsize.is_set
	|| ipv4interfaceretransmittime.is_set;
}

bool IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4interfaceifindex.operation)
	|| is_set(ipv4interfaceenablestatus.operation)
	|| is_set(ipv4interfacereasmmaxsize.operation)
	|| is_set(ipv4interfaceretransmittime.operation);
}

std::string IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4InterfaceEntry" <<"[ipv4InterfaceIfIndex='" <<ipv4interfaceifindex <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipv4InterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4interfaceifindex.is_set || is_set(ipv4interfaceifindex.operation)) leaf_name_data.push_back(ipv4interfaceifindex.get_name_leafdata());
    if (ipv4interfaceenablestatus.is_set || is_set(ipv4interfaceenablestatus.operation)) leaf_name_data.push_back(ipv4interfaceenablestatus.get_name_leafdata());
    if (ipv4interfacereasmmaxsize.is_set || is_set(ipv4interfacereasmmaxsize.operation)) leaf_name_data.push_back(ipv4interfacereasmmaxsize.get_name_leafdata());
    if (ipv4interfaceretransmittime.is_set || is_set(ipv4interfaceretransmittime.operation)) leaf_name_data.push_back(ipv4interfaceretransmittime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4InterfaceIfIndex")
    {
        ipv4interfaceifindex = value;
    }
    if(value_path == "ipv4InterfaceEnableStatus")
    {
        ipv4interfaceenablestatus = value;
    }
    if(value_path == "ipv4InterfaceReasmMaxSize")
    {
        ipv4interfacereasmmaxsize = value;
    }
    if(value_path == "ipv4InterfaceRetransmitTime")
    {
        ipv4interfaceretransmittime = value;
    }
}

IpMib::Ipv6Interfacetable::Ipv6Interfacetable()
{
    yang_name = "ipv6InterfaceTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipv6Interfacetable::~Ipv6Interfacetable()
{
}

bool IpMib::Ipv6Interfacetable::has_data() const
{
    for (std::size_t index=0; index<ipv6interfaceentry_.size(); index++)
    {
        if(ipv6interfaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipv6Interfacetable::has_operation() const
{
    for (std::size_t index=0; index<ipv6interfaceentry_.size(); index++)
    {
        if(ipv6interfaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipv6Interfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6InterfaceTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv6Interfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv6Interfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6InterfaceEntry")
    {
        for(auto const & c : ipv6interfaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipv6Interfacetable::Ipv6Interfaceentry>();
        c->parent = this;
        ipv6interfaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv6Interfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6interfaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipv6Interfacetable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceentry()
    :
    ipv6interfaceifindex{YType::int32, "ipv6InterfaceIfIndex"},
    ipv6interfaceenablestatus{YType::enumeration, "ipv6InterfaceEnableStatus"},
    ipv6interfaceforwarding{YType::enumeration, "ipv6InterfaceForwarding"},
    ipv6interfaceidentifier{YType::str, "ipv6InterfaceIdentifier"},
    ipv6interfacereachabletime{YType::uint32, "ipv6InterfaceReachableTime"},
    ipv6interfacereasmmaxsize{YType::uint32, "ipv6InterfaceReasmMaxSize"},
    ipv6interfaceretransmittime{YType::uint32, "ipv6InterfaceRetransmitTime"}
{
    yang_name = "ipv6InterfaceEntry"; yang_parent_name = "ipv6InterfaceTable";
}

IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::~Ipv6Interfaceentry()
{
}

bool IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::has_data() const
{
    return ipv6interfaceifindex.is_set
	|| ipv6interfaceenablestatus.is_set
	|| ipv6interfaceforwarding.is_set
	|| ipv6interfaceidentifier.is_set
	|| ipv6interfacereachabletime.is_set
	|| ipv6interfacereasmmaxsize.is_set
	|| ipv6interfaceretransmittime.is_set;
}

bool IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6interfaceifindex.operation)
	|| is_set(ipv6interfaceenablestatus.operation)
	|| is_set(ipv6interfaceforwarding.operation)
	|| is_set(ipv6interfaceidentifier.operation)
	|| is_set(ipv6interfacereachabletime.operation)
	|| is_set(ipv6interfacereasmmaxsize.operation)
	|| is_set(ipv6interfaceretransmittime.operation);
}

std::string IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6InterfaceEntry" <<"[ipv6InterfaceIfIndex='" <<ipv6interfaceifindex <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipv6InterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6interfaceifindex.is_set || is_set(ipv6interfaceifindex.operation)) leaf_name_data.push_back(ipv6interfaceifindex.get_name_leafdata());
    if (ipv6interfaceenablestatus.is_set || is_set(ipv6interfaceenablestatus.operation)) leaf_name_data.push_back(ipv6interfaceenablestatus.get_name_leafdata());
    if (ipv6interfaceforwarding.is_set || is_set(ipv6interfaceforwarding.operation)) leaf_name_data.push_back(ipv6interfaceforwarding.get_name_leafdata());
    if (ipv6interfaceidentifier.is_set || is_set(ipv6interfaceidentifier.operation)) leaf_name_data.push_back(ipv6interfaceidentifier.get_name_leafdata());
    if (ipv6interfacereachabletime.is_set || is_set(ipv6interfacereachabletime.operation)) leaf_name_data.push_back(ipv6interfacereachabletime.get_name_leafdata());
    if (ipv6interfacereasmmaxsize.is_set || is_set(ipv6interfacereasmmaxsize.operation)) leaf_name_data.push_back(ipv6interfacereasmmaxsize.get_name_leafdata());
    if (ipv6interfaceretransmittime.is_set || is_set(ipv6interfaceretransmittime.operation)) leaf_name_data.push_back(ipv6interfaceretransmittime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6InterfaceIfIndex")
    {
        ipv6interfaceifindex = value;
    }
    if(value_path == "ipv6InterfaceEnableStatus")
    {
        ipv6interfaceenablestatus = value;
    }
    if(value_path == "ipv6InterfaceForwarding")
    {
        ipv6interfaceforwarding = value;
    }
    if(value_path == "ipv6InterfaceIdentifier")
    {
        ipv6interfaceidentifier = value;
    }
    if(value_path == "ipv6InterfaceReachableTime")
    {
        ipv6interfacereachabletime = value;
    }
    if(value_path == "ipv6InterfaceReasmMaxSize")
    {
        ipv6interfacereasmmaxsize = value;
    }
    if(value_path == "ipv6InterfaceRetransmitTime")
    {
        ipv6interfaceretransmittime = value;
    }
}

IpMib::Ipsystemstatstable::Ipsystemstatstable()
{
    yang_name = "ipSystemStatsTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipsystemstatstable::~Ipsystemstatstable()
{
}

bool IpMib::Ipsystemstatstable::has_data() const
{
    for (std::size_t index=0; index<ipsystemstatsentry_.size(); index++)
    {
        if(ipsystemstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipsystemstatstable::has_operation() const
{
    for (std::size_t index=0; index<ipsystemstatsentry_.size(); index++)
    {
        if(ipsystemstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipsystemstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSystemStatsTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipsystemstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipsystemstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipSystemStatsEntry")
    {
        for(auto const & c : ipsystemstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipsystemstatstable::Ipsystemstatsentry>();
        c->parent = this;
        ipsystemstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipsystemstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipsystemstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipsystemstatstable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipsystemstatstable::Ipsystemstatsentry::Ipsystemstatsentry()
    :
    ipsystemstatsipversion{YType::enumeration, "ipSystemStatsIPVersion"},
    ipsystemstatsdiscontinuitytime{YType::uint32, "ipSystemStatsDiscontinuityTime"},
    ipsystemstatshcinbcastpkts{YType::uint64, "ipSystemStatsHCInBcastPkts"},
    ipsystemstatshcindelivers{YType::uint64, "ipSystemStatsHCInDelivers"},
    ipsystemstatshcinforwdatagrams{YType::uint64, "ipSystemStatsHCInForwDatagrams"},
    ipsystemstatshcinmcastoctets{YType::uint64, "ipSystemStatsHCInMcastOctets"},
    ipsystemstatshcinmcastpkts{YType::uint64, "ipSystemStatsHCInMcastPkts"},
    ipsystemstatshcinoctets{YType::uint64, "ipSystemStatsHCInOctets"},
    ipsystemstatshcinreceives{YType::uint64, "ipSystemStatsHCInReceives"},
    ipsystemstatshcoutbcastpkts{YType::uint64, "ipSystemStatsHCOutBcastPkts"},
    ipsystemstatshcoutforwdatagrams{YType::uint64, "ipSystemStatsHCOutForwDatagrams"},
    ipsystemstatshcoutmcastoctets{YType::uint64, "ipSystemStatsHCOutMcastOctets"},
    ipsystemstatshcoutmcastpkts{YType::uint64, "ipSystemStatsHCOutMcastPkts"},
    ipsystemstatshcoutoctets{YType::uint64, "ipSystemStatsHCOutOctets"},
    ipsystemstatshcoutrequests{YType::uint64, "ipSystemStatsHCOutRequests"},
    ipsystemstatshcouttransmits{YType::uint64, "ipSystemStatsHCOutTransmits"},
    ipsystemstatsinaddrerrors{YType::uint32, "ipSystemStatsInAddrErrors"},
    ipsystemstatsinbcastpkts{YType::uint32, "ipSystemStatsInBcastPkts"},
    ipsystemstatsindelivers{YType::uint32, "ipSystemStatsInDelivers"},
    ipsystemstatsindiscards{YType::uint32, "ipSystemStatsInDiscards"},
    ipsystemstatsinforwdatagrams{YType::uint32, "ipSystemStatsInForwDatagrams"},
    ipsystemstatsinhdrerrors{YType::uint32, "ipSystemStatsInHdrErrors"},
    ipsystemstatsinmcastoctets{YType::uint32, "ipSystemStatsInMcastOctets"},
    ipsystemstatsinmcastpkts{YType::uint32, "ipSystemStatsInMcastPkts"},
    ipsystemstatsinnoroutes{YType::uint32, "ipSystemStatsInNoRoutes"},
    ipsystemstatsinoctets{YType::uint32, "ipSystemStatsInOctets"},
    ipsystemstatsinreceives{YType::uint32, "ipSystemStatsInReceives"},
    ipsystemstatsintruncatedpkts{YType::uint32, "ipSystemStatsInTruncatedPkts"},
    ipsystemstatsinunknownprotos{YType::uint32, "ipSystemStatsInUnknownProtos"},
    ipsystemstatsoutbcastpkts{YType::uint32, "ipSystemStatsOutBcastPkts"},
    ipsystemstatsoutdiscards{YType::uint32, "ipSystemStatsOutDiscards"},
    ipsystemstatsoutforwdatagrams{YType::uint32, "ipSystemStatsOutForwDatagrams"},
    ipsystemstatsoutfragcreates{YType::uint32, "ipSystemStatsOutFragCreates"},
    ipsystemstatsoutfragfails{YType::uint32, "ipSystemStatsOutFragFails"},
    ipsystemstatsoutfragoks{YType::uint32, "ipSystemStatsOutFragOKs"},
    ipsystemstatsoutfragreqds{YType::uint32, "ipSystemStatsOutFragReqds"},
    ipsystemstatsoutmcastoctets{YType::uint32, "ipSystemStatsOutMcastOctets"},
    ipsystemstatsoutmcastpkts{YType::uint32, "ipSystemStatsOutMcastPkts"},
    ipsystemstatsoutnoroutes{YType::uint32, "ipSystemStatsOutNoRoutes"},
    ipsystemstatsoutoctets{YType::uint32, "ipSystemStatsOutOctets"},
    ipsystemstatsoutrequests{YType::uint32, "ipSystemStatsOutRequests"},
    ipsystemstatsouttransmits{YType::uint32, "ipSystemStatsOutTransmits"},
    ipsystemstatsreasmfails{YType::uint32, "ipSystemStatsReasmFails"},
    ipsystemstatsreasmoks{YType::uint32, "ipSystemStatsReasmOKs"},
    ipsystemstatsreasmreqds{YType::uint32, "ipSystemStatsReasmReqds"},
    ipsystemstatsrefreshrate{YType::uint32, "ipSystemStatsRefreshRate"}
{
    yang_name = "ipSystemStatsEntry"; yang_parent_name = "ipSystemStatsTable";
}

IpMib::Ipsystemstatstable::Ipsystemstatsentry::~Ipsystemstatsentry()
{
}

bool IpMib::Ipsystemstatstable::Ipsystemstatsentry::has_data() const
{
    return ipsystemstatsipversion.is_set
	|| ipsystemstatsdiscontinuitytime.is_set
	|| ipsystemstatshcinbcastpkts.is_set
	|| ipsystemstatshcindelivers.is_set
	|| ipsystemstatshcinforwdatagrams.is_set
	|| ipsystemstatshcinmcastoctets.is_set
	|| ipsystemstatshcinmcastpkts.is_set
	|| ipsystemstatshcinoctets.is_set
	|| ipsystemstatshcinreceives.is_set
	|| ipsystemstatshcoutbcastpkts.is_set
	|| ipsystemstatshcoutforwdatagrams.is_set
	|| ipsystemstatshcoutmcastoctets.is_set
	|| ipsystemstatshcoutmcastpkts.is_set
	|| ipsystemstatshcoutoctets.is_set
	|| ipsystemstatshcoutrequests.is_set
	|| ipsystemstatshcouttransmits.is_set
	|| ipsystemstatsinaddrerrors.is_set
	|| ipsystemstatsinbcastpkts.is_set
	|| ipsystemstatsindelivers.is_set
	|| ipsystemstatsindiscards.is_set
	|| ipsystemstatsinforwdatagrams.is_set
	|| ipsystemstatsinhdrerrors.is_set
	|| ipsystemstatsinmcastoctets.is_set
	|| ipsystemstatsinmcastpkts.is_set
	|| ipsystemstatsinnoroutes.is_set
	|| ipsystemstatsinoctets.is_set
	|| ipsystemstatsinreceives.is_set
	|| ipsystemstatsintruncatedpkts.is_set
	|| ipsystemstatsinunknownprotos.is_set
	|| ipsystemstatsoutbcastpkts.is_set
	|| ipsystemstatsoutdiscards.is_set
	|| ipsystemstatsoutforwdatagrams.is_set
	|| ipsystemstatsoutfragcreates.is_set
	|| ipsystemstatsoutfragfails.is_set
	|| ipsystemstatsoutfragoks.is_set
	|| ipsystemstatsoutfragreqds.is_set
	|| ipsystemstatsoutmcastoctets.is_set
	|| ipsystemstatsoutmcastpkts.is_set
	|| ipsystemstatsoutnoroutes.is_set
	|| ipsystemstatsoutoctets.is_set
	|| ipsystemstatsoutrequests.is_set
	|| ipsystemstatsouttransmits.is_set
	|| ipsystemstatsreasmfails.is_set
	|| ipsystemstatsreasmoks.is_set
	|| ipsystemstatsreasmreqds.is_set
	|| ipsystemstatsrefreshrate.is_set;
}

bool IpMib::Ipsystemstatstable::Ipsystemstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsystemstatsipversion.operation)
	|| is_set(ipsystemstatsdiscontinuitytime.operation)
	|| is_set(ipsystemstatshcinbcastpkts.operation)
	|| is_set(ipsystemstatshcindelivers.operation)
	|| is_set(ipsystemstatshcinforwdatagrams.operation)
	|| is_set(ipsystemstatshcinmcastoctets.operation)
	|| is_set(ipsystemstatshcinmcastpkts.operation)
	|| is_set(ipsystemstatshcinoctets.operation)
	|| is_set(ipsystemstatshcinreceives.operation)
	|| is_set(ipsystemstatshcoutbcastpkts.operation)
	|| is_set(ipsystemstatshcoutforwdatagrams.operation)
	|| is_set(ipsystemstatshcoutmcastoctets.operation)
	|| is_set(ipsystemstatshcoutmcastpkts.operation)
	|| is_set(ipsystemstatshcoutoctets.operation)
	|| is_set(ipsystemstatshcoutrequests.operation)
	|| is_set(ipsystemstatshcouttransmits.operation)
	|| is_set(ipsystemstatsinaddrerrors.operation)
	|| is_set(ipsystemstatsinbcastpkts.operation)
	|| is_set(ipsystemstatsindelivers.operation)
	|| is_set(ipsystemstatsindiscards.operation)
	|| is_set(ipsystemstatsinforwdatagrams.operation)
	|| is_set(ipsystemstatsinhdrerrors.operation)
	|| is_set(ipsystemstatsinmcastoctets.operation)
	|| is_set(ipsystemstatsinmcastpkts.operation)
	|| is_set(ipsystemstatsinnoroutes.operation)
	|| is_set(ipsystemstatsinoctets.operation)
	|| is_set(ipsystemstatsinreceives.operation)
	|| is_set(ipsystemstatsintruncatedpkts.operation)
	|| is_set(ipsystemstatsinunknownprotos.operation)
	|| is_set(ipsystemstatsoutbcastpkts.operation)
	|| is_set(ipsystemstatsoutdiscards.operation)
	|| is_set(ipsystemstatsoutforwdatagrams.operation)
	|| is_set(ipsystemstatsoutfragcreates.operation)
	|| is_set(ipsystemstatsoutfragfails.operation)
	|| is_set(ipsystemstatsoutfragoks.operation)
	|| is_set(ipsystemstatsoutfragreqds.operation)
	|| is_set(ipsystemstatsoutmcastoctets.operation)
	|| is_set(ipsystemstatsoutmcastpkts.operation)
	|| is_set(ipsystemstatsoutnoroutes.operation)
	|| is_set(ipsystemstatsoutoctets.operation)
	|| is_set(ipsystemstatsoutrequests.operation)
	|| is_set(ipsystemstatsouttransmits.operation)
	|| is_set(ipsystemstatsreasmfails.operation)
	|| is_set(ipsystemstatsreasmoks.operation)
	|| is_set(ipsystemstatsreasmreqds.operation)
	|| is_set(ipsystemstatsrefreshrate.operation);
}

std::string IpMib::Ipsystemstatstable::Ipsystemstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSystemStatsEntry" <<"[ipSystemStatsIPVersion='" <<ipsystemstatsipversion <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipsystemstatstable::Ipsystemstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipSystemStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsystemstatsipversion.is_set || is_set(ipsystemstatsipversion.operation)) leaf_name_data.push_back(ipsystemstatsipversion.get_name_leafdata());
    if (ipsystemstatsdiscontinuitytime.is_set || is_set(ipsystemstatsdiscontinuitytime.operation)) leaf_name_data.push_back(ipsystemstatsdiscontinuitytime.get_name_leafdata());
    if (ipsystemstatshcinbcastpkts.is_set || is_set(ipsystemstatshcinbcastpkts.operation)) leaf_name_data.push_back(ipsystemstatshcinbcastpkts.get_name_leafdata());
    if (ipsystemstatshcindelivers.is_set || is_set(ipsystemstatshcindelivers.operation)) leaf_name_data.push_back(ipsystemstatshcindelivers.get_name_leafdata());
    if (ipsystemstatshcinforwdatagrams.is_set || is_set(ipsystemstatshcinforwdatagrams.operation)) leaf_name_data.push_back(ipsystemstatshcinforwdatagrams.get_name_leafdata());
    if (ipsystemstatshcinmcastoctets.is_set || is_set(ipsystemstatshcinmcastoctets.operation)) leaf_name_data.push_back(ipsystemstatshcinmcastoctets.get_name_leafdata());
    if (ipsystemstatshcinmcastpkts.is_set || is_set(ipsystemstatshcinmcastpkts.operation)) leaf_name_data.push_back(ipsystemstatshcinmcastpkts.get_name_leafdata());
    if (ipsystemstatshcinoctets.is_set || is_set(ipsystemstatshcinoctets.operation)) leaf_name_data.push_back(ipsystemstatshcinoctets.get_name_leafdata());
    if (ipsystemstatshcinreceives.is_set || is_set(ipsystemstatshcinreceives.operation)) leaf_name_data.push_back(ipsystemstatshcinreceives.get_name_leafdata());
    if (ipsystemstatshcoutbcastpkts.is_set || is_set(ipsystemstatshcoutbcastpkts.operation)) leaf_name_data.push_back(ipsystemstatshcoutbcastpkts.get_name_leafdata());
    if (ipsystemstatshcoutforwdatagrams.is_set || is_set(ipsystemstatshcoutforwdatagrams.operation)) leaf_name_data.push_back(ipsystemstatshcoutforwdatagrams.get_name_leafdata());
    if (ipsystemstatshcoutmcastoctets.is_set || is_set(ipsystemstatshcoutmcastoctets.operation)) leaf_name_data.push_back(ipsystemstatshcoutmcastoctets.get_name_leafdata());
    if (ipsystemstatshcoutmcastpkts.is_set || is_set(ipsystemstatshcoutmcastpkts.operation)) leaf_name_data.push_back(ipsystemstatshcoutmcastpkts.get_name_leafdata());
    if (ipsystemstatshcoutoctets.is_set || is_set(ipsystemstatshcoutoctets.operation)) leaf_name_data.push_back(ipsystemstatshcoutoctets.get_name_leafdata());
    if (ipsystemstatshcoutrequests.is_set || is_set(ipsystemstatshcoutrequests.operation)) leaf_name_data.push_back(ipsystemstatshcoutrequests.get_name_leafdata());
    if (ipsystemstatshcouttransmits.is_set || is_set(ipsystemstatshcouttransmits.operation)) leaf_name_data.push_back(ipsystemstatshcouttransmits.get_name_leafdata());
    if (ipsystemstatsinaddrerrors.is_set || is_set(ipsystemstatsinaddrerrors.operation)) leaf_name_data.push_back(ipsystemstatsinaddrerrors.get_name_leafdata());
    if (ipsystemstatsinbcastpkts.is_set || is_set(ipsystemstatsinbcastpkts.operation)) leaf_name_data.push_back(ipsystemstatsinbcastpkts.get_name_leafdata());
    if (ipsystemstatsindelivers.is_set || is_set(ipsystemstatsindelivers.operation)) leaf_name_data.push_back(ipsystemstatsindelivers.get_name_leafdata());
    if (ipsystemstatsindiscards.is_set || is_set(ipsystemstatsindiscards.operation)) leaf_name_data.push_back(ipsystemstatsindiscards.get_name_leafdata());
    if (ipsystemstatsinforwdatagrams.is_set || is_set(ipsystemstatsinforwdatagrams.operation)) leaf_name_data.push_back(ipsystemstatsinforwdatagrams.get_name_leafdata());
    if (ipsystemstatsinhdrerrors.is_set || is_set(ipsystemstatsinhdrerrors.operation)) leaf_name_data.push_back(ipsystemstatsinhdrerrors.get_name_leafdata());
    if (ipsystemstatsinmcastoctets.is_set || is_set(ipsystemstatsinmcastoctets.operation)) leaf_name_data.push_back(ipsystemstatsinmcastoctets.get_name_leafdata());
    if (ipsystemstatsinmcastpkts.is_set || is_set(ipsystemstatsinmcastpkts.operation)) leaf_name_data.push_back(ipsystemstatsinmcastpkts.get_name_leafdata());
    if (ipsystemstatsinnoroutes.is_set || is_set(ipsystemstatsinnoroutes.operation)) leaf_name_data.push_back(ipsystemstatsinnoroutes.get_name_leafdata());
    if (ipsystemstatsinoctets.is_set || is_set(ipsystemstatsinoctets.operation)) leaf_name_data.push_back(ipsystemstatsinoctets.get_name_leafdata());
    if (ipsystemstatsinreceives.is_set || is_set(ipsystemstatsinreceives.operation)) leaf_name_data.push_back(ipsystemstatsinreceives.get_name_leafdata());
    if (ipsystemstatsintruncatedpkts.is_set || is_set(ipsystemstatsintruncatedpkts.operation)) leaf_name_data.push_back(ipsystemstatsintruncatedpkts.get_name_leafdata());
    if (ipsystemstatsinunknownprotos.is_set || is_set(ipsystemstatsinunknownprotos.operation)) leaf_name_data.push_back(ipsystemstatsinunknownprotos.get_name_leafdata());
    if (ipsystemstatsoutbcastpkts.is_set || is_set(ipsystemstatsoutbcastpkts.operation)) leaf_name_data.push_back(ipsystemstatsoutbcastpkts.get_name_leafdata());
    if (ipsystemstatsoutdiscards.is_set || is_set(ipsystemstatsoutdiscards.operation)) leaf_name_data.push_back(ipsystemstatsoutdiscards.get_name_leafdata());
    if (ipsystemstatsoutforwdatagrams.is_set || is_set(ipsystemstatsoutforwdatagrams.operation)) leaf_name_data.push_back(ipsystemstatsoutforwdatagrams.get_name_leafdata());
    if (ipsystemstatsoutfragcreates.is_set || is_set(ipsystemstatsoutfragcreates.operation)) leaf_name_data.push_back(ipsystemstatsoutfragcreates.get_name_leafdata());
    if (ipsystemstatsoutfragfails.is_set || is_set(ipsystemstatsoutfragfails.operation)) leaf_name_data.push_back(ipsystemstatsoutfragfails.get_name_leafdata());
    if (ipsystemstatsoutfragoks.is_set || is_set(ipsystemstatsoutfragoks.operation)) leaf_name_data.push_back(ipsystemstatsoutfragoks.get_name_leafdata());
    if (ipsystemstatsoutfragreqds.is_set || is_set(ipsystemstatsoutfragreqds.operation)) leaf_name_data.push_back(ipsystemstatsoutfragreqds.get_name_leafdata());
    if (ipsystemstatsoutmcastoctets.is_set || is_set(ipsystemstatsoutmcastoctets.operation)) leaf_name_data.push_back(ipsystemstatsoutmcastoctets.get_name_leafdata());
    if (ipsystemstatsoutmcastpkts.is_set || is_set(ipsystemstatsoutmcastpkts.operation)) leaf_name_data.push_back(ipsystemstatsoutmcastpkts.get_name_leafdata());
    if (ipsystemstatsoutnoroutes.is_set || is_set(ipsystemstatsoutnoroutes.operation)) leaf_name_data.push_back(ipsystemstatsoutnoroutes.get_name_leafdata());
    if (ipsystemstatsoutoctets.is_set || is_set(ipsystemstatsoutoctets.operation)) leaf_name_data.push_back(ipsystemstatsoutoctets.get_name_leafdata());
    if (ipsystemstatsoutrequests.is_set || is_set(ipsystemstatsoutrequests.operation)) leaf_name_data.push_back(ipsystemstatsoutrequests.get_name_leafdata());
    if (ipsystemstatsouttransmits.is_set || is_set(ipsystemstatsouttransmits.operation)) leaf_name_data.push_back(ipsystemstatsouttransmits.get_name_leafdata());
    if (ipsystemstatsreasmfails.is_set || is_set(ipsystemstatsreasmfails.operation)) leaf_name_data.push_back(ipsystemstatsreasmfails.get_name_leafdata());
    if (ipsystemstatsreasmoks.is_set || is_set(ipsystemstatsreasmoks.operation)) leaf_name_data.push_back(ipsystemstatsreasmoks.get_name_leafdata());
    if (ipsystemstatsreasmreqds.is_set || is_set(ipsystemstatsreasmreqds.operation)) leaf_name_data.push_back(ipsystemstatsreasmreqds.get_name_leafdata());
    if (ipsystemstatsrefreshrate.is_set || is_set(ipsystemstatsrefreshrate.operation)) leaf_name_data.push_back(ipsystemstatsrefreshrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipsystemstatstable::Ipsystemstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipsystemstatstable::Ipsystemstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipsystemstatstable::Ipsystemstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipSystemStatsIPVersion")
    {
        ipsystemstatsipversion = value;
    }
    if(value_path == "ipSystemStatsDiscontinuityTime")
    {
        ipsystemstatsdiscontinuitytime = value;
    }
    if(value_path == "ipSystemStatsHCInBcastPkts")
    {
        ipsystemstatshcinbcastpkts = value;
    }
    if(value_path == "ipSystemStatsHCInDelivers")
    {
        ipsystemstatshcindelivers = value;
    }
    if(value_path == "ipSystemStatsHCInForwDatagrams")
    {
        ipsystemstatshcinforwdatagrams = value;
    }
    if(value_path == "ipSystemStatsHCInMcastOctets")
    {
        ipsystemstatshcinmcastoctets = value;
    }
    if(value_path == "ipSystemStatsHCInMcastPkts")
    {
        ipsystemstatshcinmcastpkts = value;
    }
    if(value_path == "ipSystemStatsHCInOctets")
    {
        ipsystemstatshcinoctets = value;
    }
    if(value_path == "ipSystemStatsHCInReceives")
    {
        ipsystemstatshcinreceives = value;
    }
    if(value_path == "ipSystemStatsHCOutBcastPkts")
    {
        ipsystemstatshcoutbcastpkts = value;
    }
    if(value_path == "ipSystemStatsHCOutForwDatagrams")
    {
        ipsystemstatshcoutforwdatagrams = value;
    }
    if(value_path == "ipSystemStatsHCOutMcastOctets")
    {
        ipsystemstatshcoutmcastoctets = value;
    }
    if(value_path == "ipSystemStatsHCOutMcastPkts")
    {
        ipsystemstatshcoutmcastpkts = value;
    }
    if(value_path == "ipSystemStatsHCOutOctets")
    {
        ipsystemstatshcoutoctets = value;
    }
    if(value_path == "ipSystemStatsHCOutRequests")
    {
        ipsystemstatshcoutrequests = value;
    }
    if(value_path == "ipSystemStatsHCOutTransmits")
    {
        ipsystemstatshcouttransmits = value;
    }
    if(value_path == "ipSystemStatsInAddrErrors")
    {
        ipsystemstatsinaddrerrors = value;
    }
    if(value_path == "ipSystemStatsInBcastPkts")
    {
        ipsystemstatsinbcastpkts = value;
    }
    if(value_path == "ipSystemStatsInDelivers")
    {
        ipsystemstatsindelivers = value;
    }
    if(value_path == "ipSystemStatsInDiscards")
    {
        ipsystemstatsindiscards = value;
    }
    if(value_path == "ipSystemStatsInForwDatagrams")
    {
        ipsystemstatsinforwdatagrams = value;
    }
    if(value_path == "ipSystemStatsInHdrErrors")
    {
        ipsystemstatsinhdrerrors = value;
    }
    if(value_path == "ipSystemStatsInMcastOctets")
    {
        ipsystemstatsinmcastoctets = value;
    }
    if(value_path == "ipSystemStatsInMcastPkts")
    {
        ipsystemstatsinmcastpkts = value;
    }
    if(value_path == "ipSystemStatsInNoRoutes")
    {
        ipsystemstatsinnoroutes = value;
    }
    if(value_path == "ipSystemStatsInOctets")
    {
        ipsystemstatsinoctets = value;
    }
    if(value_path == "ipSystemStatsInReceives")
    {
        ipsystemstatsinreceives = value;
    }
    if(value_path == "ipSystemStatsInTruncatedPkts")
    {
        ipsystemstatsintruncatedpkts = value;
    }
    if(value_path == "ipSystemStatsInUnknownProtos")
    {
        ipsystemstatsinunknownprotos = value;
    }
    if(value_path == "ipSystemStatsOutBcastPkts")
    {
        ipsystemstatsoutbcastpkts = value;
    }
    if(value_path == "ipSystemStatsOutDiscards")
    {
        ipsystemstatsoutdiscards = value;
    }
    if(value_path == "ipSystemStatsOutForwDatagrams")
    {
        ipsystemstatsoutforwdatagrams = value;
    }
    if(value_path == "ipSystemStatsOutFragCreates")
    {
        ipsystemstatsoutfragcreates = value;
    }
    if(value_path == "ipSystemStatsOutFragFails")
    {
        ipsystemstatsoutfragfails = value;
    }
    if(value_path == "ipSystemStatsOutFragOKs")
    {
        ipsystemstatsoutfragoks = value;
    }
    if(value_path == "ipSystemStatsOutFragReqds")
    {
        ipsystemstatsoutfragreqds = value;
    }
    if(value_path == "ipSystemStatsOutMcastOctets")
    {
        ipsystemstatsoutmcastoctets = value;
    }
    if(value_path == "ipSystemStatsOutMcastPkts")
    {
        ipsystemstatsoutmcastpkts = value;
    }
    if(value_path == "ipSystemStatsOutNoRoutes")
    {
        ipsystemstatsoutnoroutes = value;
    }
    if(value_path == "ipSystemStatsOutOctets")
    {
        ipsystemstatsoutoctets = value;
    }
    if(value_path == "ipSystemStatsOutRequests")
    {
        ipsystemstatsoutrequests = value;
    }
    if(value_path == "ipSystemStatsOutTransmits")
    {
        ipsystemstatsouttransmits = value;
    }
    if(value_path == "ipSystemStatsReasmFails")
    {
        ipsystemstatsreasmfails = value;
    }
    if(value_path == "ipSystemStatsReasmOKs")
    {
        ipsystemstatsreasmoks = value;
    }
    if(value_path == "ipSystemStatsReasmReqds")
    {
        ipsystemstatsreasmreqds = value;
    }
    if(value_path == "ipSystemStatsRefreshRate")
    {
        ipsystemstatsrefreshrate = value;
    }
}

IpMib::Ipifstatstable::Ipifstatstable()
{
    yang_name = "ipIfStatsTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipifstatstable::~Ipifstatstable()
{
}

bool IpMib::Ipifstatstable::has_data() const
{
    for (std::size_t index=0; index<ipifstatsentry_.size(); index++)
    {
        if(ipifstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipifstatstable::has_operation() const
{
    for (std::size_t index=0; index<ipifstatsentry_.size(); index++)
    {
        if(ipifstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipifstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipIfStatsTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipifstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipifstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipIfStatsEntry")
    {
        for(auto const & c : ipifstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipifstatstable::Ipifstatsentry>();
        c->parent = this;
        ipifstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipifstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipifstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipifstatstable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipifstatstable::Ipifstatsentry::Ipifstatsentry()
    :
    ipifstatsipversion{YType::enumeration, "ipIfStatsIPVersion"},
    ipifstatsifindex{YType::int32, "ipIfStatsIfIndex"},
    ipifstatsdiscontinuitytime{YType::uint32, "ipIfStatsDiscontinuityTime"},
    ipifstatshcinbcastpkts{YType::uint64, "ipIfStatsHCInBcastPkts"},
    ipifstatshcindelivers{YType::uint64, "ipIfStatsHCInDelivers"},
    ipifstatshcinforwdatagrams{YType::uint64, "ipIfStatsHCInForwDatagrams"},
    ipifstatshcinmcastoctets{YType::uint64, "ipIfStatsHCInMcastOctets"},
    ipifstatshcinmcastpkts{YType::uint64, "ipIfStatsHCInMcastPkts"},
    ipifstatshcinoctets{YType::uint64, "ipIfStatsHCInOctets"},
    ipifstatshcinreceives{YType::uint64, "ipIfStatsHCInReceives"},
    ipifstatshcoutbcastpkts{YType::uint64, "ipIfStatsHCOutBcastPkts"},
    ipifstatshcoutforwdatagrams{YType::uint64, "ipIfStatsHCOutForwDatagrams"},
    ipifstatshcoutmcastoctets{YType::uint64, "ipIfStatsHCOutMcastOctets"},
    ipifstatshcoutmcastpkts{YType::uint64, "ipIfStatsHCOutMcastPkts"},
    ipifstatshcoutoctets{YType::uint64, "ipIfStatsHCOutOctets"},
    ipifstatshcoutrequests{YType::uint64, "ipIfStatsHCOutRequests"},
    ipifstatshcouttransmits{YType::uint64, "ipIfStatsHCOutTransmits"},
    ipifstatsinaddrerrors{YType::uint32, "ipIfStatsInAddrErrors"},
    ipifstatsinbcastpkts{YType::uint32, "ipIfStatsInBcastPkts"},
    ipifstatsindelivers{YType::uint32, "ipIfStatsInDelivers"},
    ipifstatsindiscards{YType::uint32, "ipIfStatsInDiscards"},
    ipifstatsinforwdatagrams{YType::uint32, "ipIfStatsInForwDatagrams"},
    ipifstatsinhdrerrors{YType::uint32, "ipIfStatsInHdrErrors"},
    ipifstatsinmcastoctets{YType::uint32, "ipIfStatsInMcastOctets"},
    ipifstatsinmcastpkts{YType::uint32, "ipIfStatsInMcastPkts"},
    ipifstatsinnoroutes{YType::uint32, "ipIfStatsInNoRoutes"},
    ipifstatsinoctets{YType::uint32, "ipIfStatsInOctets"},
    ipifstatsinreceives{YType::uint32, "ipIfStatsInReceives"},
    ipifstatsintruncatedpkts{YType::uint32, "ipIfStatsInTruncatedPkts"},
    ipifstatsinunknownprotos{YType::uint32, "ipIfStatsInUnknownProtos"},
    ipifstatsoutbcastpkts{YType::uint32, "ipIfStatsOutBcastPkts"},
    ipifstatsoutdiscards{YType::uint32, "ipIfStatsOutDiscards"},
    ipifstatsoutforwdatagrams{YType::uint32, "ipIfStatsOutForwDatagrams"},
    ipifstatsoutfragcreates{YType::uint32, "ipIfStatsOutFragCreates"},
    ipifstatsoutfragfails{YType::uint32, "ipIfStatsOutFragFails"},
    ipifstatsoutfragoks{YType::uint32, "ipIfStatsOutFragOKs"},
    ipifstatsoutfragreqds{YType::uint32, "ipIfStatsOutFragReqds"},
    ipifstatsoutmcastoctets{YType::uint32, "ipIfStatsOutMcastOctets"},
    ipifstatsoutmcastpkts{YType::uint32, "ipIfStatsOutMcastPkts"},
    ipifstatsoutoctets{YType::uint32, "ipIfStatsOutOctets"},
    ipifstatsoutrequests{YType::uint32, "ipIfStatsOutRequests"},
    ipifstatsouttransmits{YType::uint32, "ipIfStatsOutTransmits"},
    ipifstatsreasmfails{YType::uint32, "ipIfStatsReasmFails"},
    ipifstatsreasmoks{YType::uint32, "ipIfStatsReasmOKs"},
    ipifstatsreasmreqds{YType::uint32, "ipIfStatsReasmReqds"},
    ipifstatsrefreshrate{YType::uint32, "ipIfStatsRefreshRate"}
{
    yang_name = "ipIfStatsEntry"; yang_parent_name = "ipIfStatsTable";
}

IpMib::Ipifstatstable::Ipifstatsentry::~Ipifstatsentry()
{
}

bool IpMib::Ipifstatstable::Ipifstatsentry::has_data() const
{
    return ipifstatsipversion.is_set
	|| ipifstatsifindex.is_set
	|| ipifstatsdiscontinuitytime.is_set
	|| ipifstatshcinbcastpkts.is_set
	|| ipifstatshcindelivers.is_set
	|| ipifstatshcinforwdatagrams.is_set
	|| ipifstatshcinmcastoctets.is_set
	|| ipifstatshcinmcastpkts.is_set
	|| ipifstatshcinoctets.is_set
	|| ipifstatshcinreceives.is_set
	|| ipifstatshcoutbcastpkts.is_set
	|| ipifstatshcoutforwdatagrams.is_set
	|| ipifstatshcoutmcastoctets.is_set
	|| ipifstatshcoutmcastpkts.is_set
	|| ipifstatshcoutoctets.is_set
	|| ipifstatshcoutrequests.is_set
	|| ipifstatshcouttransmits.is_set
	|| ipifstatsinaddrerrors.is_set
	|| ipifstatsinbcastpkts.is_set
	|| ipifstatsindelivers.is_set
	|| ipifstatsindiscards.is_set
	|| ipifstatsinforwdatagrams.is_set
	|| ipifstatsinhdrerrors.is_set
	|| ipifstatsinmcastoctets.is_set
	|| ipifstatsinmcastpkts.is_set
	|| ipifstatsinnoroutes.is_set
	|| ipifstatsinoctets.is_set
	|| ipifstatsinreceives.is_set
	|| ipifstatsintruncatedpkts.is_set
	|| ipifstatsinunknownprotos.is_set
	|| ipifstatsoutbcastpkts.is_set
	|| ipifstatsoutdiscards.is_set
	|| ipifstatsoutforwdatagrams.is_set
	|| ipifstatsoutfragcreates.is_set
	|| ipifstatsoutfragfails.is_set
	|| ipifstatsoutfragoks.is_set
	|| ipifstatsoutfragreqds.is_set
	|| ipifstatsoutmcastoctets.is_set
	|| ipifstatsoutmcastpkts.is_set
	|| ipifstatsoutoctets.is_set
	|| ipifstatsoutrequests.is_set
	|| ipifstatsouttransmits.is_set
	|| ipifstatsreasmfails.is_set
	|| ipifstatsreasmoks.is_set
	|| ipifstatsreasmreqds.is_set
	|| ipifstatsrefreshrate.is_set;
}

bool IpMib::Ipifstatstable::Ipifstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipifstatsipversion.operation)
	|| is_set(ipifstatsifindex.operation)
	|| is_set(ipifstatsdiscontinuitytime.operation)
	|| is_set(ipifstatshcinbcastpkts.operation)
	|| is_set(ipifstatshcindelivers.operation)
	|| is_set(ipifstatshcinforwdatagrams.operation)
	|| is_set(ipifstatshcinmcastoctets.operation)
	|| is_set(ipifstatshcinmcastpkts.operation)
	|| is_set(ipifstatshcinoctets.operation)
	|| is_set(ipifstatshcinreceives.operation)
	|| is_set(ipifstatshcoutbcastpkts.operation)
	|| is_set(ipifstatshcoutforwdatagrams.operation)
	|| is_set(ipifstatshcoutmcastoctets.operation)
	|| is_set(ipifstatshcoutmcastpkts.operation)
	|| is_set(ipifstatshcoutoctets.operation)
	|| is_set(ipifstatshcoutrequests.operation)
	|| is_set(ipifstatshcouttransmits.operation)
	|| is_set(ipifstatsinaddrerrors.operation)
	|| is_set(ipifstatsinbcastpkts.operation)
	|| is_set(ipifstatsindelivers.operation)
	|| is_set(ipifstatsindiscards.operation)
	|| is_set(ipifstatsinforwdatagrams.operation)
	|| is_set(ipifstatsinhdrerrors.operation)
	|| is_set(ipifstatsinmcastoctets.operation)
	|| is_set(ipifstatsinmcastpkts.operation)
	|| is_set(ipifstatsinnoroutes.operation)
	|| is_set(ipifstatsinoctets.operation)
	|| is_set(ipifstatsinreceives.operation)
	|| is_set(ipifstatsintruncatedpkts.operation)
	|| is_set(ipifstatsinunknownprotos.operation)
	|| is_set(ipifstatsoutbcastpkts.operation)
	|| is_set(ipifstatsoutdiscards.operation)
	|| is_set(ipifstatsoutforwdatagrams.operation)
	|| is_set(ipifstatsoutfragcreates.operation)
	|| is_set(ipifstatsoutfragfails.operation)
	|| is_set(ipifstatsoutfragoks.operation)
	|| is_set(ipifstatsoutfragreqds.operation)
	|| is_set(ipifstatsoutmcastoctets.operation)
	|| is_set(ipifstatsoutmcastpkts.operation)
	|| is_set(ipifstatsoutoctets.operation)
	|| is_set(ipifstatsoutrequests.operation)
	|| is_set(ipifstatsouttransmits.operation)
	|| is_set(ipifstatsreasmfails.operation)
	|| is_set(ipifstatsreasmoks.operation)
	|| is_set(ipifstatsreasmreqds.operation)
	|| is_set(ipifstatsrefreshrate.operation);
}

std::string IpMib::Ipifstatstable::Ipifstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipIfStatsEntry" <<"[ipIfStatsIPVersion='" <<ipifstatsipversion <<"']" <<"[ipIfStatsIfIndex='" <<ipifstatsifindex <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipifstatstable::Ipifstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipIfStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipifstatsipversion.is_set || is_set(ipifstatsipversion.operation)) leaf_name_data.push_back(ipifstatsipversion.get_name_leafdata());
    if (ipifstatsifindex.is_set || is_set(ipifstatsifindex.operation)) leaf_name_data.push_back(ipifstatsifindex.get_name_leafdata());
    if (ipifstatsdiscontinuitytime.is_set || is_set(ipifstatsdiscontinuitytime.operation)) leaf_name_data.push_back(ipifstatsdiscontinuitytime.get_name_leafdata());
    if (ipifstatshcinbcastpkts.is_set || is_set(ipifstatshcinbcastpkts.operation)) leaf_name_data.push_back(ipifstatshcinbcastpkts.get_name_leafdata());
    if (ipifstatshcindelivers.is_set || is_set(ipifstatshcindelivers.operation)) leaf_name_data.push_back(ipifstatshcindelivers.get_name_leafdata());
    if (ipifstatshcinforwdatagrams.is_set || is_set(ipifstatshcinforwdatagrams.operation)) leaf_name_data.push_back(ipifstatshcinforwdatagrams.get_name_leafdata());
    if (ipifstatshcinmcastoctets.is_set || is_set(ipifstatshcinmcastoctets.operation)) leaf_name_data.push_back(ipifstatshcinmcastoctets.get_name_leafdata());
    if (ipifstatshcinmcastpkts.is_set || is_set(ipifstatshcinmcastpkts.operation)) leaf_name_data.push_back(ipifstatshcinmcastpkts.get_name_leafdata());
    if (ipifstatshcinoctets.is_set || is_set(ipifstatshcinoctets.operation)) leaf_name_data.push_back(ipifstatshcinoctets.get_name_leafdata());
    if (ipifstatshcinreceives.is_set || is_set(ipifstatshcinreceives.operation)) leaf_name_data.push_back(ipifstatshcinreceives.get_name_leafdata());
    if (ipifstatshcoutbcastpkts.is_set || is_set(ipifstatshcoutbcastpkts.operation)) leaf_name_data.push_back(ipifstatshcoutbcastpkts.get_name_leafdata());
    if (ipifstatshcoutforwdatagrams.is_set || is_set(ipifstatshcoutforwdatagrams.operation)) leaf_name_data.push_back(ipifstatshcoutforwdatagrams.get_name_leafdata());
    if (ipifstatshcoutmcastoctets.is_set || is_set(ipifstatshcoutmcastoctets.operation)) leaf_name_data.push_back(ipifstatshcoutmcastoctets.get_name_leafdata());
    if (ipifstatshcoutmcastpkts.is_set || is_set(ipifstatshcoutmcastpkts.operation)) leaf_name_data.push_back(ipifstatshcoutmcastpkts.get_name_leafdata());
    if (ipifstatshcoutoctets.is_set || is_set(ipifstatshcoutoctets.operation)) leaf_name_data.push_back(ipifstatshcoutoctets.get_name_leafdata());
    if (ipifstatshcoutrequests.is_set || is_set(ipifstatshcoutrequests.operation)) leaf_name_data.push_back(ipifstatshcoutrequests.get_name_leafdata());
    if (ipifstatshcouttransmits.is_set || is_set(ipifstatshcouttransmits.operation)) leaf_name_data.push_back(ipifstatshcouttransmits.get_name_leafdata());
    if (ipifstatsinaddrerrors.is_set || is_set(ipifstatsinaddrerrors.operation)) leaf_name_data.push_back(ipifstatsinaddrerrors.get_name_leafdata());
    if (ipifstatsinbcastpkts.is_set || is_set(ipifstatsinbcastpkts.operation)) leaf_name_data.push_back(ipifstatsinbcastpkts.get_name_leafdata());
    if (ipifstatsindelivers.is_set || is_set(ipifstatsindelivers.operation)) leaf_name_data.push_back(ipifstatsindelivers.get_name_leafdata());
    if (ipifstatsindiscards.is_set || is_set(ipifstatsindiscards.operation)) leaf_name_data.push_back(ipifstatsindiscards.get_name_leafdata());
    if (ipifstatsinforwdatagrams.is_set || is_set(ipifstatsinforwdatagrams.operation)) leaf_name_data.push_back(ipifstatsinforwdatagrams.get_name_leafdata());
    if (ipifstatsinhdrerrors.is_set || is_set(ipifstatsinhdrerrors.operation)) leaf_name_data.push_back(ipifstatsinhdrerrors.get_name_leafdata());
    if (ipifstatsinmcastoctets.is_set || is_set(ipifstatsinmcastoctets.operation)) leaf_name_data.push_back(ipifstatsinmcastoctets.get_name_leafdata());
    if (ipifstatsinmcastpkts.is_set || is_set(ipifstatsinmcastpkts.operation)) leaf_name_data.push_back(ipifstatsinmcastpkts.get_name_leafdata());
    if (ipifstatsinnoroutes.is_set || is_set(ipifstatsinnoroutes.operation)) leaf_name_data.push_back(ipifstatsinnoroutes.get_name_leafdata());
    if (ipifstatsinoctets.is_set || is_set(ipifstatsinoctets.operation)) leaf_name_data.push_back(ipifstatsinoctets.get_name_leafdata());
    if (ipifstatsinreceives.is_set || is_set(ipifstatsinreceives.operation)) leaf_name_data.push_back(ipifstatsinreceives.get_name_leafdata());
    if (ipifstatsintruncatedpkts.is_set || is_set(ipifstatsintruncatedpkts.operation)) leaf_name_data.push_back(ipifstatsintruncatedpkts.get_name_leafdata());
    if (ipifstatsinunknownprotos.is_set || is_set(ipifstatsinunknownprotos.operation)) leaf_name_data.push_back(ipifstatsinunknownprotos.get_name_leafdata());
    if (ipifstatsoutbcastpkts.is_set || is_set(ipifstatsoutbcastpkts.operation)) leaf_name_data.push_back(ipifstatsoutbcastpkts.get_name_leafdata());
    if (ipifstatsoutdiscards.is_set || is_set(ipifstatsoutdiscards.operation)) leaf_name_data.push_back(ipifstatsoutdiscards.get_name_leafdata());
    if (ipifstatsoutforwdatagrams.is_set || is_set(ipifstatsoutforwdatagrams.operation)) leaf_name_data.push_back(ipifstatsoutforwdatagrams.get_name_leafdata());
    if (ipifstatsoutfragcreates.is_set || is_set(ipifstatsoutfragcreates.operation)) leaf_name_data.push_back(ipifstatsoutfragcreates.get_name_leafdata());
    if (ipifstatsoutfragfails.is_set || is_set(ipifstatsoutfragfails.operation)) leaf_name_data.push_back(ipifstatsoutfragfails.get_name_leafdata());
    if (ipifstatsoutfragoks.is_set || is_set(ipifstatsoutfragoks.operation)) leaf_name_data.push_back(ipifstatsoutfragoks.get_name_leafdata());
    if (ipifstatsoutfragreqds.is_set || is_set(ipifstatsoutfragreqds.operation)) leaf_name_data.push_back(ipifstatsoutfragreqds.get_name_leafdata());
    if (ipifstatsoutmcastoctets.is_set || is_set(ipifstatsoutmcastoctets.operation)) leaf_name_data.push_back(ipifstatsoutmcastoctets.get_name_leafdata());
    if (ipifstatsoutmcastpkts.is_set || is_set(ipifstatsoutmcastpkts.operation)) leaf_name_data.push_back(ipifstatsoutmcastpkts.get_name_leafdata());
    if (ipifstatsoutoctets.is_set || is_set(ipifstatsoutoctets.operation)) leaf_name_data.push_back(ipifstatsoutoctets.get_name_leafdata());
    if (ipifstatsoutrequests.is_set || is_set(ipifstatsoutrequests.operation)) leaf_name_data.push_back(ipifstatsoutrequests.get_name_leafdata());
    if (ipifstatsouttransmits.is_set || is_set(ipifstatsouttransmits.operation)) leaf_name_data.push_back(ipifstatsouttransmits.get_name_leafdata());
    if (ipifstatsreasmfails.is_set || is_set(ipifstatsreasmfails.operation)) leaf_name_data.push_back(ipifstatsreasmfails.get_name_leafdata());
    if (ipifstatsreasmoks.is_set || is_set(ipifstatsreasmoks.operation)) leaf_name_data.push_back(ipifstatsreasmoks.get_name_leafdata());
    if (ipifstatsreasmreqds.is_set || is_set(ipifstatsreasmreqds.operation)) leaf_name_data.push_back(ipifstatsreasmreqds.get_name_leafdata());
    if (ipifstatsrefreshrate.is_set || is_set(ipifstatsrefreshrate.operation)) leaf_name_data.push_back(ipifstatsrefreshrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipifstatstable::Ipifstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipifstatstable::Ipifstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipifstatstable::Ipifstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipIfStatsIPVersion")
    {
        ipifstatsipversion = value;
    }
    if(value_path == "ipIfStatsIfIndex")
    {
        ipifstatsifindex = value;
    }
    if(value_path == "ipIfStatsDiscontinuityTime")
    {
        ipifstatsdiscontinuitytime = value;
    }
    if(value_path == "ipIfStatsHCInBcastPkts")
    {
        ipifstatshcinbcastpkts = value;
    }
    if(value_path == "ipIfStatsHCInDelivers")
    {
        ipifstatshcindelivers = value;
    }
    if(value_path == "ipIfStatsHCInForwDatagrams")
    {
        ipifstatshcinforwdatagrams = value;
    }
    if(value_path == "ipIfStatsHCInMcastOctets")
    {
        ipifstatshcinmcastoctets = value;
    }
    if(value_path == "ipIfStatsHCInMcastPkts")
    {
        ipifstatshcinmcastpkts = value;
    }
    if(value_path == "ipIfStatsHCInOctets")
    {
        ipifstatshcinoctets = value;
    }
    if(value_path == "ipIfStatsHCInReceives")
    {
        ipifstatshcinreceives = value;
    }
    if(value_path == "ipIfStatsHCOutBcastPkts")
    {
        ipifstatshcoutbcastpkts = value;
    }
    if(value_path == "ipIfStatsHCOutForwDatagrams")
    {
        ipifstatshcoutforwdatagrams = value;
    }
    if(value_path == "ipIfStatsHCOutMcastOctets")
    {
        ipifstatshcoutmcastoctets = value;
    }
    if(value_path == "ipIfStatsHCOutMcastPkts")
    {
        ipifstatshcoutmcastpkts = value;
    }
    if(value_path == "ipIfStatsHCOutOctets")
    {
        ipifstatshcoutoctets = value;
    }
    if(value_path == "ipIfStatsHCOutRequests")
    {
        ipifstatshcoutrequests = value;
    }
    if(value_path == "ipIfStatsHCOutTransmits")
    {
        ipifstatshcouttransmits = value;
    }
    if(value_path == "ipIfStatsInAddrErrors")
    {
        ipifstatsinaddrerrors = value;
    }
    if(value_path == "ipIfStatsInBcastPkts")
    {
        ipifstatsinbcastpkts = value;
    }
    if(value_path == "ipIfStatsInDelivers")
    {
        ipifstatsindelivers = value;
    }
    if(value_path == "ipIfStatsInDiscards")
    {
        ipifstatsindiscards = value;
    }
    if(value_path == "ipIfStatsInForwDatagrams")
    {
        ipifstatsinforwdatagrams = value;
    }
    if(value_path == "ipIfStatsInHdrErrors")
    {
        ipifstatsinhdrerrors = value;
    }
    if(value_path == "ipIfStatsInMcastOctets")
    {
        ipifstatsinmcastoctets = value;
    }
    if(value_path == "ipIfStatsInMcastPkts")
    {
        ipifstatsinmcastpkts = value;
    }
    if(value_path == "ipIfStatsInNoRoutes")
    {
        ipifstatsinnoroutes = value;
    }
    if(value_path == "ipIfStatsInOctets")
    {
        ipifstatsinoctets = value;
    }
    if(value_path == "ipIfStatsInReceives")
    {
        ipifstatsinreceives = value;
    }
    if(value_path == "ipIfStatsInTruncatedPkts")
    {
        ipifstatsintruncatedpkts = value;
    }
    if(value_path == "ipIfStatsInUnknownProtos")
    {
        ipifstatsinunknownprotos = value;
    }
    if(value_path == "ipIfStatsOutBcastPkts")
    {
        ipifstatsoutbcastpkts = value;
    }
    if(value_path == "ipIfStatsOutDiscards")
    {
        ipifstatsoutdiscards = value;
    }
    if(value_path == "ipIfStatsOutForwDatagrams")
    {
        ipifstatsoutforwdatagrams = value;
    }
    if(value_path == "ipIfStatsOutFragCreates")
    {
        ipifstatsoutfragcreates = value;
    }
    if(value_path == "ipIfStatsOutFragFails")
    {
        ipifstatsoutfragfails = value;
    }
    if(value_path == "ipIfStatsOutFragOKs")
    {
        ipifstatsoutfragoks = value;
    }
    if(value_path == "ipIfStatsOutFragReqds")
    {
        ipifstatsoutfragreqds = value;
    }
    if(value_path == "ipIfStatsOutMcastOctets")
    {
        ipifstatsoutmcastoctets = value;
    }
    if(value_path == "ipIfStatsOutMcastPkts")
    {
        ipifstatsoutmcastpkts = value;
    }
    if(value_path == "ipIfStatsOutOctets")
    {
        ipifstatsoutoctets = value;
    }
    if(value_path == "ipIfStatsOutRequests")
    {
        ipifstatsoutrequests = value;
    }
    if(value_path == "ipIfStatsOutTransmits")
    {
        ipifstatsouttransmits = value;
    }
    if(value_path == "ipIfStatsReasmFails")
    {
        ipifstatsreasmfails = value;
    }
    if(value_path == "ipIfStatsReasmOKs")
    {
        ipifstatsreasmoks = value;
    }
    if(value_path == "ipIfStatsReasmReqds")
    {
        ipifstatsreasmreqds = value;
    }
    if(value_path == "ipIfStatsRefreshRate")
    {
        ipifstatsrefreshrate = value;
    }
}

IpMib::Ipaddressprefixtable::Ipaddressprefixtable()
{
    yang_name = "ipAddressPrefixTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipaddressprefixtable::~Ipaddressprefixtable()
{
}

bool IpMib::Ipaddressprefixtable::has_data() const
{
    for (std::size_t index=0; index<ipaddressprefixentry_.size(); index++)
    {
        if(ipaddressprefixentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipaddressprefixtable::has_operation() const
{
    for (std::size_t index=0; index<ipaddressprefixentry_.size(); index++)
    {
        if(ipaddressprefixentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipaddressprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressPrefixTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipaddressprefixtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipaddressprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipAddressPrefixEntry")
    {
        for(auto const & c : ipaddressprefixentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipaddressprefixtable::Ipaddressprefixentry>();
        c->parent = this;
        ipaddressprefixentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipaddressprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddressprefixentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipaddressprefixtable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipaddressprefixtable::Ipaddressprefixentry::Ipaddressprefixentry()
    :
    ipaddressprefixifindex{YType::int32, "ipAddressPrefixIfIndex"},
    ipaddressprefixtype{YType::enumeration, "ipAddressPrefixType"},
    ipaddressprefixprefix{YType::str, "ipAddressPrefixPrefix"},
    ipaddressprefixlength{YType::uint32, "ipAddressPrefixLength"},
    ipaddressprefixadvpreferredlifetime{YType::uint32, "ipAddressPrefixAdvPreferredLifetime"},
    ipaddressprefixadvvalidlifetime{YType::uint32, "ipAddressPrefixAdvValidLifetime"},
    ipaddressprefixautonomousflag{YType::boolean, "ipAddressPrefixAutonomousFlag"},
    ipaddressprefixonlinkflag{YType::boolean, "ipAddressPrefixOnLinkFlag"},
    ipaddressprefixorigin{YType::enumeration, "ipAddressPrefixOrigin"}
{
    yang_name = "ipAddressPrefixEntry"; yang_parent_name = "ipAddressPrefixTable";
}

IpMib::Ipaddressprefixtable::Ipaddressprefixentry::~Ipaddressprefixentry()
{
}

bool IpMib::Ipaddressprefixtable::Ipaddressprefixentry::has_data() const
{
    return ipaddressprefixifindex.is_set
	|| ipaddressprefixtype.is_set
	|| ipaddressprefixprefix.is_set
	|| ipaddressprefixlength.is_set
	|| ipaddressprefixadvpreferredlifetime.is_set
	|| ipaddressprefixadvvalidlifetime.is_set
	|| ipaddressprefixautonomousflag.is_set
	|| ipaddressprefixonlinkflag.is_set
	|| ipaddressprefixorigin.is_set;
}

bool IpMib::Ipaddressprefixtable::Ipaddressprefixentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipaddressprefixifindex.operation)
	|| is_set(ipaddressprefixtype.operation)
	|| is_set(ipaddressprefixprefix.operation)
	|| is_set(ipaddressprefixlength.operation)
	|| is_set(ipaddressprefixadvpreferredlifetime.operation)
	|| is_set(ipaddressprefixadvvalidlifetime.operation)
	|| is_set(ipaddressprefixautonomousflag.operation)
	|| is_set(ipaddressprefixonlinkflag.operation)
	|| is_set(ipaddressprefixorigin.operation);
}

std::string IpMib::Ipaddressprefixtable::Ipaddressprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressPrefixEntry" <<"[ipAddressPrefixIfIndex='" <<ipaddressprefixifindex <<"']" <<"[ipAddressPrefixType='" <<ipaddressprefixtype <<"']" <<"[ipAddressPrefixPrefix='" <<ipaddressprefixprefix <<"']" <<"[ipAddressPrefixLength='" <<ipaddressprefixlength <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipaddressprefixtable::Ipaddressprefixentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipAddressPrefixTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddressprefixifindex.is_set || is_set(ipaddressprefixifindex.operation)) leaf_name_data.push_back(ipaddressprefixifindex.get_name_leafdata());
    if (ipaddressprefixtype.is_set || is_set(ipaddressprefixtype.operation)) leaf_name_data.push_back(ipaddressprefixtype.get_name_leafdata());
    if (ipaddressprefixprefix.is_set || is_set(ipaddressprefixprefix.operation)) leaf_name_data.push_back(ipaddressprefixprefix.get_name_leafdata());
    if (ipaddressprefixlength.is_set || is_set(ipaddressprefixlength.operation)) leaf_name_data.push_back(ipaddressprefixlength.get_name_leafdata());
    if (ipaddressprefixadvpreferredlifetime.is_set || is_set(ipaddressprefixadvpreferredlifetime.operation)) leaf_name_data.push_back(ipaddressprefixadvpreferredlifetime.get_name_leafdata());
    if (ipaddressprefixadvvalidlifetime.is_set || is_set(ipaddressprefixadvvalidlifetime.operation)) leaf_name_data.push_back(ipaddressprefixadvvalidlifetime.get_name_leafdata());
    if (ipaddressprefixautonomousflag.is_set || is_set(ipaddressprefixautonomousflag.operation)) leaf_name_data.push_back(ipaddressprefixautonomousflag.get_name_leafdata());
    if (ipaddressprefixonlinkflag.is_set || is_set(ipaddressprefixonlinkflag.operation)) leaf_name_data.push_back(ipaddressprefixonlinkflag.get_name_leafdata());
    if (ipaddressprefixorigin.is_set || is_set(ipaddressprefixorigin.operation)) leaf_name_data.push_back(ipaddressprefixorigin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipaddressprefixtable::Ipaddressprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipaddressprefixtable::Ipaddressprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipaddressprefixtable::Ipaddressprefixentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipAddressPrefixIfIndex")
    {
        ipaddressprefixifindex = value;
    }
    if(value_path == "ipAddressPrefixType")
    {
        ipaddressprefixtype = value;
    }
    if(value_path == "ipAddressPrefixPrefix")
    {
        ipaddressprefixprefix = value;
    }
    if(value_path == "ipAddressPrefixLength")
    {
        ipaddressprefixlength = value;
    }
    if(value_path == "ipAddressPrefixAdvPreferredLifetime")
    {
        ipaddressprefixadvpreferredlifetime = value;
    }
    if(value_path == "ipAddressPrefixAdvValidLifetime")
    {
        ipaddressprefixadvvalidlifetime = value;
    }
    if(value_path == "ipAddressPrefixAutonomousFlag")
    {
        ipaddressprefixautonomousflag = value;
    }
    if(value_path == "ipAddressPrefixOnLinkFlag")
    {
        ipaddressprefixonlinkflag = value;
    }
    if(value_path == "ipAddressPrefixOrigin")
    {
        ipaddressprefixorigin = value;
    }
}

IpMib::Ipaddresstable::Ipaddresstable()
{
    yang_name = "ipAddressTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipaddresstable::~Ipaddresstable()
{
}

bool IpMib::Ipaddresstable::has_data() const
{
    for (std::size_t index=0; index<ipaddressentry_.size(); index++)
    {
        if(ipaddressentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipaddresstable::has_operation() const
{
    for (std::size_t index=0; index<ipaddressentry_.size(); index++)
    {
        if(ipaddressentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipaddresstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipaddresstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipaddresstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipAddressEntry")
    {
        for(auto const & c : ipaddressentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipaddresstable::Ipaddressentry>();
        c->parent = this;
        ipaddressentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipaddresstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddressentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipaddresstable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipaddresstable::Ipaddressentry::Ipaddressentry()
    :
    ipaddressaddrtype{YType::enumeration, "ipAddressAddrType"},
    ipaddressaddr{YType::str, "ipAddressAddr"},
    ipaddresscreated{YType::uint32, "ipAddressCreated"},
    ipaddressifindex{YType::int32, "ipAddressIfIndex"},
    ipaddresslastchanged{YType::uint32, "ipAddressLastChanged"},
    ipaddressorigin{YType::enumeration, "ipAddressOrigin"},
    ipaddressprefix{YType::str, "ipAddressPrefix"},
    ipaddressrowstatus{YType::enumeration, "ipAddressRowStatus"},
    ipaddressstatus{YType::enumeration, "ipAddressStatus"},
    ipaddressstoragetype{YType::enumeration, "ipAddressStorageType"},
    ipaddresstype{YType::enumeration, "ipAddressType"}
{
    yang_name = "ipAddressEntry"; yang_parent_name = "ipAddressTable";
}

IpMib::Ipaddresstable::Ipaddressentry::~Ipaddressentry()
{
}

bool IpMib::Ipaddresstable::Ipaddressentry::has_data() const
{
    return ipaddressaddrtype.is_set
	|| ipaddressaddr.is_set
	|| ipaddresscreated.is_set
	|| ipaddressifindex.is_set
	|| ipaddresslastchanged.is_set
	|| ipaddressorigin.is_set
	|| ipaddressprefix.is_set
	|| ipaddressrowstatus.is_set
	|| ipaddressstatus.is_set
	|| ipaddressstoragetype.is_set
	|| ipaddresstype.is_set;
}

bool IpMib::Ipaddresstable::Ipaddressentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipaddressaddrtype.operation)
	|| is_set(ipaddressaddr.operation)
	|| is_set(ipaddresscreated.operation)
	|| is_set(ipaddressifindex.operation)
	|| is_set(ipaddresslastchanged.operation)
	|| is_set(ipaddressorigin.operation)
	|| is_set(ipaddressprefix.operation)
	|| is_set(ipaddressrowstatus.operation)
	|| is_set(ipaddressstatus.operation)
	|| is_set(ipaddressstoragetype.operation)
	|| is_set(ipaddresstype.operation);
}

std::string IpMib::Ipaddresstable::Ipaddressentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressEntry" <<"[ipAddressAddrType='" <<ipaddressaddrtype <<"']" <<"[ipAddressAddr='" <<ipaddressaddr <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipaddresstable::Ipaddressentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipAddressTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddressaddrtype.is_set || is_set(ipaddressaddrtype.operation)) leaf_name_data.push_back(ipaddressaddrtype.get_name_leafdata());
    if (ipaddressaddr.is_set || is_set(ipaddressaddr.operation)) leaf_name_data.push_back(ipaddressaddr.get_name_leafdata());
    if (ipaddresscreated.is_set || is_set(ipaddresscreated.operation)) leaf_name_data.push_back(ipaddresscreated.get_name_leafdata());
    if (ipaddressifindex.is_set || is_set(ipaddressifindex.operation)) leaf_name_data.push_back(ipaddressifindex.get_name_leafdata());
    if (ipaddresslastchanged.is_set || is_set(ipaddresslastchanged.operation)) leaf_name_data.push_back(ipaddresslastchanged.get_name_leafdata());
    if (ipaddressorigin.is_set || is_set(ipaddressorigin.operation)) leaf_name_data.push_back(ipaddressorigin.get_name_leafdata());
    if (ipaddressprefix.is_set || is_set(ipaddressprefix.operation)) leaf_name_data.push_back(ipaddressprefix.get_name_leafdata());
    if (ipaddressrowstatus.is_set || is_set(ipaddressrowstatus.operation)) leaf_name_data.push_back(ipaddressrowstatus.get_name_leafdata());
    if (ipaddressstatus.is_set || is_set(ipaddressstatus.operation)) leaf_name_data.push_back(ipaddressstatus.get_name_leafdata());
    if (ipaddressstoragetype.is_set || is_set(ipaddressstoragetype.operation)) leaf_name_data.push_back(ipaddressstoragetype.get_name_leafdata());
    if (ipaddresstype.is_set || is_set(ipaddresstype.operation)) leaf_name_data.push_back(ipaddresstype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipaddresstable::Ipaddressentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipaddresstable::Ipaddressentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipaddresstable::Ipaddressentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipAddressAddrType")
    {
        ipaddressaddrtype = value;
    }
    if(value_path == "ipAddressAddr")
    {
        ipaddressaddr = value;
    }
    if(value_path == "ipAddressCreated")
    {
        ipaddresscreated = value;
    }
    if(value_path == "ipAddressIfIndex")
    {
        ipaddressifindex = value;
    }
    if(value_path == "ipAddressLastChanged")
    {
        ipaddresslastchanged = value;
    }
    if(value_path == "ipAddressOrigin")
    {
        ipaddressorigin = value;
    }
    if(value_path == "ipAddressPrefix")
    {
        ipaddressprefix = value;
    }
    if(value_path == "ipAddressRowStatus")
    {
        ipaddressrowstatus = value;
    }
    if(value_path == "ipAddressStatus")
    {
        ipaddressstatus = value;
    }
    if(value_path == "ipAddressStorageType")
    {
        ipaddressstoragetype = value;
    }
    if(value_path == "ipAddressType")
    {
        ipaddresstype = value;
    }
}

IpMib::Ipnettophysicaltable::Ipnettophysicaltable()
{
    yang_name = "ipNetToPhysicalTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipnettophysicaltable::~Ipnettophysicaltable()
{
}

bool IpMib::Ipnettophysicaltable::has_data() const
{
    for (std::size_t index=0; index<ipnettophysicalentry_.size(); index++)
    {
        if(ipnettophysicalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipnettophysicaltable::has_operation() const
{
    for (std::size_t index=0; index<ipnettophysicalentry_.size(); index++)
    {
        if(ipnettophysicalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipnettophysicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToPhysicalTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipnettophysicaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipnettophysicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipNetToPhysicalEntry")
    {
        for(auto const & c : ipnettophysicalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipnettophysicaltable::Ipnettophysicalentry>();
        c->parent = this;
        ipnettophysicalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipnettophysicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipnettophysicalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipnettophysicaltable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalentry()
    :
    ipnettophysicalifindex{YType::int32, "ipNetToPhysicalIfIndex"},
    ipnettophysicalnetaddresstype{YType::enumeration, "ipNetToPhysicalNetAddressType"},
    ipnettophysicalnetaddress{YType::str, "ipNetToPhysicalNetAddress"},
    ipnettophysicallastupdated{YType::uint32, "ipNetToPhysicalLastUpdated"},
    ipnettophysicalphysaddress{YType::str, "ipNetToPhysicalPhysAddress"},
    ipnettophysicalrowstatus{YType::enumeration, "ipNetToPhysicalRowStatus"},
    ipnettophysicalstate{YType::enumeration, "ipNetToPhysicalState"},
    ipnettophysicaltype{YType::enumeration, "ipNetToPhysicalType"}
{
    yang_name = "ipNetToPhysicalEntry"; yang_parent_name = "ipNetToPhysicalTable";
}

IpMib::Ipnettophysicaltable::Ipnettophysicalentry::~Ipnettophysicalentry()
{
}

bool IpMib::Ipnettophysicaltable::Ipnettophysicalentry::has_data() const
{
    return ipnettophysicalifindex.is_set
	|| ipnettophysicalnetaddresstype.is_set
	|| ipnettophysicalnetaddress.is_set
	|| ipnettophysicallastupdated.is_set
	|| ipnettophysicalphysaddress.is_set
	|| ipnettophysicalrowstatus.is_set
	|| ipnettophysicalstate.is_set
	|| ipnettophysicaltype.is_set;
}

bool IpMib::Ipnettophysicaltable::Ipnettophysicalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipnettophysicalifindex.operation)
	|| is_set(ipnettophysicalnetaddresstype.operation)
	|| is_set(ipnettophysicalnetaddress.operation)
	|| is_set(ipnettophysicallastupdated.operation)
	|| is_set(ipnettophysicalphysaddress.operation)
	|| is_set(ipnettophysicalrowstatus.operation)
	|| is_set(ipnettophysicalstate.operation)
	|| is_set(ipnettophysicaltype.operation);
}

std::string IpMib::Ipnettophysicaltable::Ipnettophysicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToPhysicalEntry" <<"[ipNetToPhysicalIfIndex='" <<ipnettophysicalifindex <<"']" <<"[ipNetToPhysicalNetAddressType='" <<ipnettophysicalnetaddresstype <<"']" <<"[ipNetToPhysicalNetAddress='" <<ipnettophysicalnetaddress <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipnettophysicaltable::Ipnettophysicalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipNetToPhysicalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipnettophysicalifindex.is_set || is_set(ipnettophysicalifindex.operation)) leaf_name_data.push_back(ipnettophysicalifindex.get_name_leafdata());
    if (ipnettophysicalnetaddresstype.is_set || is_set(ipnettophysicalnetaddresstype.operation)) leaf_name_data.push_back(ipnettophysicalnetaddresstype.get_name_leafdata());
    if (ipnettophysicalnetaddress.is_set || is_set(ipnettophysicalnetaddress.operation)) leaf_name_data.push_back(ipnettophysicalnetaddress.get_name_leafdata());
    if (ipnettophysicallastupdated.is_set || is_set(ipnettophysicallastupdated.operation)) leaf_name_data.push_back(ipnettophysicallastupdated.get_name_leafdata());
    if (ipnettophysicalphysaddress.is_set || is_set(ipnettophysicalphysaddress.operation)) leaf_name_data.push_back(ipnettophysicalphysaddress.get_name_leafdata());
    if (ipnettophysicalrowstatus.is_set || is_set(ipnettophysicalrowstatus.operation)) leaf_name_data.push_back(ipnettophysicalrowstatus.get_name_leafdata());
    if (ipnettophysicalstate.is_set || is_set(ipnettophysicalstate.operation)) leaf_name_data.push_back(ipnettophysicalstate.get_name_leafdata());
    if (ipnettophysicaltype.is_set || is_set(ipnettophysicaltype.operation)) leaf_name_data.push_back(ipnettophysicaltype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipnettophysicaltable::Ipnettophysicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipnettophysicaltable::Ipnettophysicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipnettophysicaltable::Ipnettophysicalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipNetToPhysicalIfIndex")
    {
        ipnettophysicalifindex = value;
    }
    if(value_path == "ipNetToPhysicalNetAddressType")
    {
        ipnettophysicalnetaddresstype = value;
    }
    if(value_path == "ipNetToPhysicalNetAddress")
    {
        ipnettophysicalnetaddress = value;
    }
    if(value_path == "ipNetToPhysicalLastUpdated")
    {
        ipnettophysicallastupdated = value;
    }
    if(value_path == "ipNetToPhysicalPhysAddress")
    {
        ipnettophysicalphysaddress = value;
    }
    if(value_path == "ipNetToPhysicalRowStatus")
    {
        ipnettophysicalrowstatus = value;
    }
    if(value_path == "ipNetToPhysicalState")
    {
        ipnettophysicalstate = value;
    }
    if(value_path == "ipNetToPhysicalType")
    {
        ipnettophysicaltype = value;
    }
}

IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindextable()
{
    yang_name = "ipv6ScopeZoneIndexTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipv6Scopezoneindextable::~Ipv6Scopezoneindextable()
{
}

bool IpMib::Ipv6Scopezoneindextable::has_data() const
{
    for (std::size_t index=0; index<ipv6scopezoneindexentry_.size(); index++)
    {
        if(ipv6scopezoneindexentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipv6Scopezoneindextable::has_operation() const
{
    for (std::size_t index=0; index<ipv6scopezoneindexentry_.size(); index++)
    {
        if(ipv6scopezoneindexentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipv6Scopezoneindextable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ScopeZoneIndexTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv6Scopezoneindextable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv6Scopezoneindextable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6ScopeZoneIndexEntry")
    {
        for(auto const & c : ipv6scopezoneindexentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry>();
        c->parent = this;
        ipv6scopezoneindexentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv6Scopezoneindextable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6scopezoneindexentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipv6Scopezoneindextable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::Ipv6Scopezoneindexentry()
    :
    ipv6scopezoneindexifindex{YType::int32, "ipv6ScopeZoneIndexIfIndex"},
    ipv6scopezoneindex3{YType::uint32, "ipv6ScopeZoneIndex3"},
    ipv6scopezoneindex6{YType::uint32, "ipv6ScopeZoneIndex6"},
    ipv6scopezoneindex7{YType::uint32, "ipv6ScopeZoneIndex7"},
    ipv6scopezoneindex9{YType::uint32, "ipv6ScopeZoneIndex9"},
    ipv6scopezoneindexa{YType::uint32, "ipv6ScopeZoneIndexA"},
    ipv6scopezoneindexadminlocal{YType::uint32, "ipv6ScopeZoneIndexAdminLocal"},
    ipv6scopezoneindexb{YType::uint32, "ipv6ScopeZoneIndexB"},
    ipv6scopezoneindexc{YType::uint32, "ipv6ScopeZoneIndexC"},
    ipv6scopezoneindexd{YType::uint32, "ipv6ScopeZoneIndexD"},
    ipv6scopezoneindexlinklocal{YType::uint32, "ipv6ScopeZoneIndexLinkLocal"},
    ipv6scopezoneindexorganizationlocal{YType::uint32, "ipv6ScopeZoneIndexOrganizationLocal"},
    ipv6scopezoneindexsitelocal{YType::uint32, "ipv6ScopeZoneIndexSiteLocal"}
{
    yang_name = "ipv6ScopeZoneIndexEntry"; yang_parent_name = "ipv6ScopeZoneIndexTable";
}

IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::~Ipv6Scopezoneindexentry()
{
}

bool IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::has_data() const
{
    return ipv6scopezoneindexifindex.is_set
	|| ipv6scopezoneindex3.is_set
	|| ipv6scopezoneindex6.is_set
	|| ipv6scopezoneindex7.is_set
	|| ipv6scopezoneindex9.is_set
	|| ipv6scopezoneindexa.is_set
	|| ipv6scopezoneindexadminlocal.is_set
	|| ipv6scopezoneindexb.is_set
	|| ipv6scopezoneindexc.is_set
	|| ipv6scopezoneindexd.is_set
	|| ipv6scopezoneindexlinklocal.is_set
	|| ipv6scopezoneindexorganizationlocal.is_set
	|| ipv6scopezoneindexsitelocal.is_set;
}

bool IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6scopezoneindexifindex.operation)
	|| is_set(ipv6scopezoneindex3.operation)
	|| is_set(ipv6scopezoneindex6.operation)
	|| is_set(ipv6scopezoneindex7.operation)
	|| is_set(ipv6scopezoneindex9.operation)
	|| is_set(ipv6scopezoneindexa.operation)
	|| is_set(ipv6scopezoneindexadminlocal.operation)
	|| is_set(ipv6scopezoneindexb.operation)
	|| is_set(ipv6scopezoneindexc.operation)
	|| is_set(ipv6scopezoneindexd.operation)
	|| is_set(ipv6scopezoneindexlinklocal.operation)
	|| is_set(ipv6scopezoneindexorganizationlocal.operation)
	|| is_set(ipv6scopezoneindexsitelocal.operation);
}

std::string IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ScopeZoneIndexEntry" <<"[ipv6ScopeZoneIndexIfIndex='" <<ipv6scopezoneindexifindex <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipv6ScopeZoneIndexTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6scopezoneindexifindex.is_set || is_set(ipv6scopezoneindexifindex.operation)) leaf_name_data.push_back(ipv6scopezoneindexifindex.get_name_leafdata());
    if (ipv6scopezoneindex3.is_set || is_set(ipv6scopezoneindex3.operation)) leaf_name_data.push_back(ipv6scopezoneindex3.get_name_leafdata());
    if (ipv6scopezoneindex6.is_set || is_set(ipv6scopezoneindex6.operation)) leaf_name_data.push_back(ipv6scopezoneindex6.get_name_leafdata());
    if (ipv6scopezoneindex7.is_set || is_set(ipv6scopezoneindex7.operation)) leaf_name_data.push_back(ipv6scopezoneindex7.get_name_leafdata());
    if (ipv6scopezoneindex9.is_set || is_set(ipv6scopezoneindex9.operation)) leaf_name_data.push_back(ipv6scopezoneindex9.get_name_leafdata());
    if (ipv6scopezoneindexa.is_set || is_set(ipv6scopezoneindexa.operation)) leaf_name_data.push_back(ipv6scopezoneindexa.get_name_leafdata());
    if (ipv6scopezoneindexadminlocal.is_set || is_set(ipv6scopezoneindexadminlocal.operation)) leaf_name_data.push_back(ipv6scopezoneindexadminlocal.get_name_leafdata());
    if (ipv6scopezoneindexb.is_set || is_set(ipv6scopezoneindexb.operation)) leaf_name_data.push_back(ipv6scopezoneindexb.get_name_leafdata());
    if (ipv6scopezoneindexc.is_set || is_set(ipv6scopezoneindexc.operation)) leaf_name_data.push_back(ipv6scopezoneindexc.get_name_leafdata());
    if (ipv6scopezoneindexd.is_set || is_set(ipv6scopezoneindexd.operation)) leaf_name_data.push_back(ipv6scopezoneindexd.get_name_leafdata());
    if (ipv6scopezoneindexlinklocal.is_set || is_set(ipv6scopezoneindexlinklocal.operation)) leaf_name_data.push_back(ipv6scopezoneindexlinklocal.get_name_leafdata());
    if (ipv6scopezoneindexorganizationlocal.is_set || is_set(ipv6scopezoneindexorganizationlocal.operation)) leaf_name_data.push_back(ipv6scopezoneindexorganizationlocal.get_name_leafdata());
    if (ipv6scopezoneindexsitelocal.is_set || is_set(ipv6scopezoneindexsitelocal.operation)) leaf_name_data.push_back(ipv6scopezoneindexsitelocal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6ScopeZoneIndexIfIndex")
    {
        ipv6scopezoneindexifindex = value;
    }
    if(value_path == "ipv6ScopeZoneIndex3")
    {
        ipv6scopezoneindex3 = value;
    }
    if(value_path == "ipv6ScopeZoneIndex6")
    {
        ipv6scopezoneindex6 = value;
    }
    if(value_path == "ipv6ScopeZoneIndex7")
    {
        ipv6scopezoneindex7 = value;
    }
    if(value_path == "ipv6ScopeZoneIndex9")
    {
        ipv6scopezoneindex9 = value;
    }
    if(value_path == "ipv6ScopeZoneIndexA")
    {
        ipv6scopezoneindexa = value;
    }
    if(value_path == "ipv6ScopeZoneIndexAdminLocal")
    {
        ipv6scopezoneindexadminlocal = value;
    }
    if(value_path == "ipv6ScopeZoneIndexB")
    {
        ipv6scopezoneindexb = value;
    }
    if(value_path == "ipv6ScopeZoneIndexC")
    {
        ipv6scopezoneindexc = value;
    }
    if(value_path == "ipv6ScopeZoneIndexD")
    {
        ipv6scopezoneindexd = value;
    }
    if(value_path == "ipv6ScopeZoneIndexLinkLocal")
    {
        ipv6scopezoneindexlinklocal = value;
    }
    if(value_path == "ipv6ScopeZoneIndexOrganizationLocal")
    {
        ipv6scopezoneindexorganizationlocal = value;
    }
    if(value_path == "ipv6ScopeZoneIndexSiteLocal")
    {
        ipv6scopezoneindexsitelocal = value;
    }
}

IpMib::Ipdefaultroutertable::Ipdefaultroutertable()
{
    yang_name = "ipDefaultRouterTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipdefaultroutertable::~Ipdefaultroutertable()
{
}

bool IpMib::Ipdefaultroutertable::has_data() const
{
    for (std::size_t index=0; index<ipdefaultrouterentry_.size(); index++)
    {
        if(ipdefaultrouterentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipdefaultroutertable::has_operation() const
{
    for (std::size_t index=0; index<ipdefaultrouterentry_.size(); index++)
    {
        if(ipdefaultrouterentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipdefaultroutertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipDefaultRouterTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipdefaultroutertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipdefaultroutertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipDefaultRouterEntry")
    {
        for(auto const & c : ipdefaultrouterentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipdefaultroutertable::Ipdefaultrouterentry>();
        c->parent = this;
        ipdefaultrouterentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipdefaultroutertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipdefaultrouterentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipdefaultroutertable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::Ipdefaultrouterentry()
    :
    ipdefaultrouteraddresstype{YType::enumeration, "ipDefaultRouterAddressType"},
    ipdefaultrouteraddress{YType::str, "ipDefaultRouterAddress"},
    ipdefaultrouterifindex{YType::int32, "ipDefaultRouterIfIndex"},
    ipdefaultrouterlifetime{YType::uint32, "ipDefaultRouterLifetime"},
    ipdefaultrouterpreference{YType::enumeration, "ipDefaultRouterPreference"}
{
    yang_name = "ipDefaultRouterEntry"; yang_parent_name = "ipDefaultRouterTable";
}

IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::~Ipdefaultrouterentry()
{
}

bool IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::has_data() const
{
    return ipdefaultrouteraddresstype.is_set
	|| ipdefaultrouteraddress.is_set
	|| ipdefaultrouterifindex.is_set
	|| ipdefaultrouterlifetime.is_set
	|| ipdefaultrouterpreference.is_set;
}

bool IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipdefaultrouteraddresstype.operation)
	|| is_set(ipdefaultrouteraddress.operation)
	|| is_set(ipdefaultrouterifindex.operation)
	|| is_set(ipdefaultrouterlifetime.operation)
	|| is_set(ipdefaultrouterpreference.operation);
}

std::string IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipDefaultRouterEntry" <<"[ipDefaultRouterAddressType='" <<ipdefaultrouteraddresstype <<"']" <<"[ipDefaultRouterAddress='" <<ipdefaultrouteraddress <<"']" <<"[ipDefaultRouterIfIndex='" <<ipdefaultrouterifindex <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipDefaultRouterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipdefaultrouteraddresstype.is_set || is_set(ipdefaultrouteraddresstype.operation)) leaf_name_data.push_back(ipdefaultrouteraddresstype.get_name_leafdata());
    if (ipdefaultrouteraddress.is_set || is_set(ipdefaultrouteraddress.operation)) leaf_name_data.push_back(ipdefaultrouteraddress.get_name_leafdata());
    if (ipdefaultrouterifindex.is_set || is_set(ipdefaultrouterifindex.operation)) leaf_name_data.push_back(ipdefaultrouterifindex.get_name_leafdata());
    if (ipdefaultrouterlifetime.is_set || is_set(ipdefaultrouterlifetime.operation)) leaf_name_data.push_back(ipdefaultrouterlifetime.get_name_leafdata());
    if (ipdefaultrouterpreference.is_set || is_set(ipdefaultrouterpreference.operation)) leaf_name_data.push_back(ipdefaultrouterpreference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipDefaultRouterAddressType")
    {
        ipdefaultrouteraddresstype = value;
    }
    if(value_path == "ipDefaultRouterAddress")
    {
        ipdefaultrouteraddress = value;
    }
    if(value_path == "ipDefaultRouterIfIndex")
    {
        ipdefaultrouterifindex = value;
    }
    if(value_path == "ipDefaultRouterLifetime")
    {
        ipdefaultrouterlifetime = value;
    }
    if(value_path == "ipDefaultRouterPreference")
    {
        ipdefaultrouterpreference = value;
    }
}

IpMib::Ipv6Routeradverttable::Ipv6Routeradverttable()
{
    yang_name = "ipv6RouterAdvertTable"; yang_parent_name = "IP-MIB";
}

IpMib::Ipv6Routeradverttable::~Ipv6Routeradverttable()
{
}

bool IpMib::Ipv6Routeradverttable::has_data() const
{
    for (std::size_t index=0; index<ipv6routeradvertentry_.size(); index++)
    {
        if(ipv6routeradvertentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Ipv6Routeradverttable::has_operation() const
{
    for (std::size_t index=0; index<ipv6routeradvertentry_.size(); index++)
    {
        if(ipv6routeradvertentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Ipv6Routeradverttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6RouterAdvertTable";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv6Routeradverttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv6Routeradverttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6RouterAdvertEntry")
    {
        for(auto const & c : ipv6routeradvertentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry>();
        c->parent = this;
        ipv6routeradvertentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv6Routeradverttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6routeradvertentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Ipv6Routeradverttable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::Ipv6Routeradvertentry()
    :
    ipv6routeradvertifindex{YType::int32, "ipv6RouterAdvertIfIndex"},
    ipv6routeradvertcurhoplimit{YType::uint32, "ipv6RouterAdvertCurHopLimit"},
    ipv6routeradvertdefaultlifetime{YType::uint32, "ipv6RouterAdvertDefaultLifetime"},
    ipv6routeradvertlinkmtu{YType::uint32, "ipv6RouterAdvertLinkMTU"},
    ipv6routeradvertmanagedflag{YType::boolean, "ipv6RouterAdvertManagedFlag"},
    ipv6routeradvertmaxinterval{YType::uint32, "ipv6RouterAdvertMaxInterval"},
    ipv6routeradvertmininterval{YType::uint32, "ipv6RouterAdvertMinInterval"},
    ipv6routeradvertotherconfigflag{YType::boolean, "ipv6RouterAdvertOtherConfigFlag"},
    ipv6routeradvertreachabletime{YType::uint32, "ipv6RouterAdvertReachableTime"},
    ipv6routeradvertretransmittime{YType::uint32, "ipv6RouterAdvertRetransmitTime"},
    ipv6routeradvertrowstatus{YType::enumeration, "ipv6RouterAdvertRowStatus"},
    ipv6routeradvertsendadverts{YType::boolean, "ipv6RouterAdvertSendAdverts"}
{
    yang_name = "ipv6RouterAdvertEntry"; yang_parent_name = "ipv6RouterAdvertTable";
}

IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::~Ipv6Routeradvertentry()
{
}

bool IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::has_data() const
{
    return ipv6routeradvertifindex.is_set
	|| ipv6routeradvertcurhoplimit.is_set
	|| ipv6routeradvertdefaultlifetime.is_set
	|| ipv6routeradvertlinkmtu.is_set
	|| ipv6routeradvertmanagedflag.is_set
	|| ipv6routeradvertmaxinterval.is_set
	|| ipv6routeradvertmininterval.is_set
	|| ipv6routeradvertotherconfigflag.is_set
	|| ipv6routeradvertreachabletime.is_set
	|| ipv6routeradvertretransmittime.is_set
	|| ipv6routeradvertrowstatus.is_set
	|| ipv6routeradvertsendadverts.is_set;
}

bool IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6routeradvertifindex.operation)
	|| is_set(ipv6routeradvertcurhoplimit.operation)
	|| is_set(ipv6routeradvertdefaultlifetime.operation)
	|| is_set(ipv6routeradvertlinkmtu.operation)
	|| is_set(ipv6routeradvertmanagedflag.operation)
	|| is_set(ipv6routeradvertmaxinterval.operation)
	|| is_set(ipv6routeradvertmininterval.operation)
	|| is_set(ipv6routeradvertotherconfigflag.operation)
	|| is_set(ipv6routeradvertreachabletime.operation)
	|| is_set(ipv6routeradvertretransmittime.operation)
	|| is_set(ipv6routeradvertrowstatus.operation)
	|| is_set(ipv6routeradvertsendadverts.operation);
}

std::string IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6RouterAdvertEntry" <<"[ipv6RouterAdvertIfIndex='" <<ipv6routeradvertifindex <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/ipv6RouterAdvertTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6routeradvertifindex.is_set || is_set(ipv6routeradvertifindex.operation)) leaf_name_data.push_back(ipv6routeradvertifindex.get_name_leafdata());
    if (ipv6routeradvertcurhoplimit.is_set || is_set(ipv6routeradvertcurhoplimit.operation)) leaf_name_data.push_back(ipv6routeradvertcurhoplimit.get_name_leafdata());
    if (ipv6routeradvertdefaultlifetime.is_set || is_set(ipv6routeradvertdefaultlifetime.operation)) leaf_name_data.push_back(ipv6routeradvertdefaultlifetime.get_name_leafdata());
    if (ipv6routeradvertlinkmtu.is_set || is_set(ipv6routeradvertlinkmtu.operation)) leaf_name_data.push_back(ipv6routeradvertlinkmtu.get_name_leafdata());
    if (ipv6routeradvertmanagedflag.is_set || is_set(ipv6routeradvertmanagedflag.operation)) leaf_name_data.push_back(ipv6routeradvertmanagedflag.get_name_leafdata());
    if (ipv6routeradvertmaxinterval.is_set || is_set(ipv6routeradvertmaxinterval.operation)) leaf_name_data.push_back(ipv6routeradvertmaxinterval.get_name_leafdata());
    if (ipv6routeradvertmininterval.is_set || is_set(ipv6routeradvertmininterval.operation)) leaf_name_data.push_back(ipv6routeradvertmininterval.get_name_leafdata());
    if (ipv6routeradvertotherconfigflag.is_set || is_set(ipv6routeradvertotherconfigflag.operation)) leaf_name_data.push_back(ipv6routeradvertotherconfigflag.get_name_leafdata());
    if (ipv6routeradvertreachabletime.is_set || is_set(ipv6routeradvertreachabletime.operation)) leaf_name_data.push_back(ipv6routeradvertreachabletime.get_name_leafdata());
    if (ipv6routeradvertretransmittime.is_set || is_set(ipv6routeradvertretransmittime.operation)) leaf_name_data.push_back(ipv6routeradvertretransmittime.get_name_leafdata());
    if (ipv6routeradvertrowstatus.is_set || is_set(ipv6routeradvertrowstatus.operation)) leaf_name_data.push_back(ipv6routeradvertrowstatus.get_name_leafdata());
    if (ipv6routeradvertsendadverts.is_set || is_set(ipv6routeradvertsendadverts.operation)) leaf_name_data.push_back(ipv6routeradvertsendadverts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Ipv6Routeradverttable::Ipv6Routeradvertentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6RouterAdvertIfIndex")
    {
        ipv6routeradvertifindex = value;
    }
    if(value_path == "ipv6RouterAdvertCurHopLimit")
    {
        ipv6routeradvertcurhoplimit = value;
    }
    if(value_path == "ipv6RouterAdvertDefaultLifetime")
    {
        ipv6routeradvertdefaultlifetime = value;
    }
    if(value_path == "ipv6RouterAdvertLinkMTU")
    {
        ipv6routeradvertlinkmtu = value;
    }
    if(value_path == "ipv6RouterAdvertManagedFlag")
    {
        ipv6routeradvertmanagedflag = value;
    }
    if(value_path == "ipv6RouterAdvertMaxInterval")
    {
        ipv6routeradvertmaxinterval = value;
    }
    if(value_path == "ipv6RouterAdvertMinInterval")
    {
        ipv6routeradvertmininterval = value;
    }
    if(value_path == "ipv6RouterAdvertOtherConfigFlag")
    {
        ipv6routeradvertotherconfigflag = value;
    }
    if(value_path == "ipv6RouterAdvertReachableTime")
    {
        ipv6routeradvertreachabletime = value;
    }
    if(value_path == "ipv6RouterAdvertRetransmitTime")
    {
        ipv6routeradvertretransmittime = value;
    }
    if(value_path == "ipv6RouterAdvertRowStatus")
    {
        ipv6routeradvertrowstatus = value;
    }
    if(value_path == "ipv6RouterAdvertSendAdverts")
    {
        ipv6routeradvertsendadverts = value;
    }
}

IpMib::Icmpstatstable::Icmpstatstable()
{
    yang_name = "icmpStatsTable"; yang_parent_name = "IP-MIB";
}

IpMib::Icmpstatstable::~Icmpstatstable()
{
}

bool IpMib::Icmpstatstable::has_data() const
{
    for (std::size_t index=0; index<icmpstatsentry_.size(); index++)
    {
        if(icmpstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Icmpstatstable::has_operation() const
{
    for (std::size_t index=0; index<icmpstatsentry_.size(); index++)
    {
        if(icmpstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Icmpstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpStatsTable";

    return path_buffer.str();

}

const EntityPath IpMib::Icmpstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Icmpstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmpStatsEntry")
    {
        for(auto const & c : icmpstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Icmpstatstable::Icmpstatsentry>();
        c->parent = this;
        icmpstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Icmpstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : icmpstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Icmpstatstable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Icmpstatstable::Icmpstatsentry::Icmpstatsentry()
    :
    icmpstatsipversion{YType::enumeration, "icmpStatsIPVersion"},
    icmpstatsinerrors{YType::uint32, "icmpStatsInErrors"},
    icmpstatsinmsgs{YType::uint32, "icmpStatsInMsgs"},
    icmpstatsouterrors{YType::uint32, "icmpStatsOutErrors"},
    icmpstatsoutmsgs{YType::uint32, "icmpStatsOutMsgs"}
{
    yang_name = "icmpStatsEntry"; yang_parent_name = "icmpStatsTable";
}

IpMib::Icmpstatstable::Icmpstatsentry::~Icmpstatsentry()
{
}

bool IpMib::Icmpstatstable::Icmpstatsentry::has_data() const
{
    return icmpstatsipversion.is_set
	|| icmpstatsinerrors.is_set
	|| icmpstatsinmsgs.is_set
	|| icmpstatsouterrors.is_set
	|| icmpstatsoutmsgs.is_set;
}

bool IpMib::Icmpstatstable::Icmpstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(icmpstatsipversion.operation)
	|| is_set(icmpstatsinerrors.operation)
	|| is_set(icmpstatsinmsgs.operation)
	|| is_set(icmpstatsouterrors.operation)
	|| is_set(icmpstatsoutmsgs.operation);
}

std::string IpMib::Icmpstatstable::Icmpstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpStatsEntry" <<"[icmpStatsIPVersion='" <<icmpstatsipversion <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Icmpstatstable::Icmpstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/icmpStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmpstatsipversion.is_set || is_set(icmpstatsipversion.operation)) leaf_name_data.push_back(icmpstatsipversion.get_name_leafdata());
    if (icmpstatsinerrors.is_set || is_set(icmpstatsinerrors.operation)) leaf_name_data.push_back(icmpstatsinerrors.get_name_leafdata());
    if (icmpstatsinmsgs.is_set || is_set(icmpstatsinmsgs.operation)) leaf_name_data.push_back(icmpstatsinmsgs.get_name_leafdata());
    if (icmpstatsouterrors.is_set || is_set(icmpstatsouterrors.operation)) leaf_name_data.push_back(icmpstatsouterrors.get_name_leafdata());
    if (icmpstatsoutmsgs.is_set || is_set(icmpstatsoutmsgs.operation)) leaf_name_data.push_back(icmpstatsoutmsgs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Icmpstatstable::Icmpstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Icmpstatstable::Icmpstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Icmpstatstable::Icmpstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icmpStatsIPVersion")
    {
        icmpstatsipversion = value;
    }
    if(value_path == "icmpStatsInErrors")
    {
        icmpstatsinerrors = value;
    }
    if(value_path == "icmpStatsInMsgs")
    {
        icmpstatsinmsgs = value;
    }
    if(value_path == "icmpStatsOutErrors")
    {
        icmpstatsouterrors = value;
    }
    if(value_path == "icmpStatsOutMsgs")
    {
        icmpstatsoutmsgs = value;
    }
}

IpMib::Icmpmsgstatstable::Icmpmsgstatstable()
{
    yang_name = "icmpMsgStatsTable"; yang_parent_name = "IP-MIB";
}

IpMib::Icmpmsgstatstable::~Icmpmsgstatstable()
{
}

bool IpMib::Icmpmsgstatstable::has_data() const
{
    for (std::size_t index=0; index<icmpmsgstatsentry_.size(); index++)
    {
        if(icmpmsgstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IpMib::Icmpmsgstatstable::has_operation() const
{
    for (std::size_t index=0; index<icmpmsgstatsentry_.size(); index++)
    {
        if(icmpmsgstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpMib::Icmpmsgstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpMsgStatsTable";

    return path_buffer.str();

}

const EntityPath IpMib::Icmpmsgstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Icmpmsgstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmpMsgStatsEntry")
    {
        for(auto const & c : icmpmsgstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpMib::Icmpmsgstatstable::Icmpmsgstatsentry>();
        c->parent = this;
        icmpmsgstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Icmpmsgstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : icmpmsgstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpMib::Icmpmsgstatstable::set_value(const std::string & value_path, std::string value)
{
}

IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::Icmpmsgstatsentry()
    :
    icmpmsgstatsipversion{YType::enumeration, "icmpMsgStatsIPVersion"},
    icmpmsgstatstype{YType::int32, "icmpMsgStatsType"},
    icmpmsgstatsinpkts{YType::uint32, "icmpMsgStatsInPkts"},
    icmpmsgstatsoutpkts{YType::uint32, "icmpMsgStatsOutPkts"}
{
    yang_name = "icmpMsgStatsEntry"; yang_parent_name = "icmpMsgStatsTable";
}

IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::~Icmpmsgstatsentry()
{
}

bool IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::has_data() const
{
    return icmpmsgstatsipversion.is_set
	|| icmpmsgstatstype.is_set
	|| icmpmsgstatsinpkts.is_set
	|| icmpmsgstatsoutpkts.is_set;
}

bool IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(icmpmsgstatsipversion.operation)
	|| is_set(icmpmsgstatstype.operation)
	|| is_set(icmpmsgstatsinpkts.operation)
	|| is_set(icmpmsgstatsoutpkts.operation);
}

std::string IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpMsgStatsEntry" <<"[icmpMsgStatsIPVersion='" <<icmpmsgstatsipversion <<"']" <<"[icmpMsgStatsType='" <<icmpmsgstatstype <<"']";

    return path_buffer.str();

}

const EntityPath IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IP-MIB:IP-MIB/icmpMsgStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmpmsgstatsipversion.is_set || is_set(icmpmsgstatsipversion.operation)) leaf_name_data.push_back(icmpmsgstatsipversion.get_name_leafdata());
    if (icmpmsgstatstype.is_set || is_set(icmpmsgstatstype.operation)) leaf_name_data.push_back(icmpmsgstatstype.get_name_leafdata());
    if (icmpmsgstatsinpkts.is_set || is_set(icmpmsgstatsinpkts.operation)) leaf_name_data.push_back(icmpmsgstatsinpkts.get_name_leafdata());
    if (icmpmsgstatsoutpkts.is_set || is_set(icmpmsgstatsoutpkts.operation)) leaf_name_data.push_back(icmpmsgstatsoutpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpMib::Icmpmsgstatstable::Icmpmsgstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icmpMsgStatsIPVersion")
    {
        icmpmsgstatsipversion = value;
    }
    if(value_path == "icmpMsgStatsType")
    {
        icmpmsgstatstype = value;
    }
    if(value_path == "icmpMsgStatsInPkts")
    {
        icmpmsgstatsinpkts = value;
    }
    if(value_path == "icmpMsgStatsOutPkts")
    {
        icmpmsgstatsoutpkts = value;
    }
}

const Enum::YLeaf IpaddressprefixorigintcEnum::other {1, "other"};
const Enum::YLeaf IpaddressprefixorigintcEnum::manual {2, "manual"};
const Enum::YLeaf IpaddressprefixorigintcEnum::wellknown {3, "wellknown"};
const Enum::YLeaf IpaddressprefixorigintcEnum::dhcp {4, "dhcp"};
const Enum::YLeaf IpaddressprefixorigintcEnum::routeradv {5, "routeradv"};

const Enum::YLeaf IpaddressorigintcEnum::other {1, "other"};
const Enum::YLeaf IpaddressorigintcEnum::manual {2, "manual"};
const Enum::YLeaf IpaddressorigintcEnum::dhcp {4, "dhcp"};
const Enum::YLeaf IpaddressorigintcEnum::linklayer {5, "linklayer"};
const Enum::YLeaf IpaddressorigintcEnum::random {6, "random"};

const Enum::YLeaf IpaddressstatustcEnum::preferred {1, "preferred"};
const Enum::YLeaf IpaddressstatustcEnum::deprecated {2, "deprecated"};
const Enum::YLeaf IpaddressstatustcEnum::invalid {3, "invalid"};
const Enum::YLeaf IpaddressstatustcEnum::inaccessible {4, "inaccessible"};
const Enum::YLeaf IpaddressstatustcEnum::unknown {5, "unknown"};
const Enum::YLeaf IpaddressstatustcEnum::tentative {6, "tentative"};
const Enum::YLeaf IpaddressstatustcEnum::duplicate {7, "duplicate"};
const Enum::YLeaf IpaddressstatustcEnum::optimistic {8, "optimistic"};

const Enum::YLeaf IpMib::Ip::IpforwardingEnum::forwarding {1, "forwarding"};
const Enum::YLeaf IpMib::Ip::IpforwardingEnum::notForwarding {2, "notForwarding"};

const Enum::YLeaf IpMib::Ip::Ipv6IpforwardingEnum::forwarding {1, "forwarding"};
const Enum::YLeaf IpMib::Ip::Ipv6IpforwardingEnum::notForwarding {2, "notForwarding"};

const Enum::YLeaf IpMib::Ipnettomediatable::Ipnettomediaentry::IpnettomediatypeEnum::other {1, "other"};
const Enum::YLeaf IpMib::Ipnettomediatable::Ipnettomediaentry::IpnettomediatypeEnum::invalid {2, "invalid"};
const Enum::YLeaf IpMib::Ipnettomediatable::Ipnettomediaentry::IpnettomediatypeEnum::dynamic {3, "dynamic"};
const Enum::YLeaf IpMib::Ipnettomediatable::Ipnettomediaentry::IpnettomediatypeEnum::static_ {4, "static"};

const Enum::YLeaf IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4InterfaceenablestatusEnum::up {1, "up"};
const Enum::YLeaf IpMib::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4InterfaceenablestatusEnum::down {2, "down"};

const Enum::YLeaf IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6InterfaceenablestatusEnum::up {1, "up"};
const Enum::YLeaf IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6InterfaceenablestatusEnum::down {2, "down"};

const Enum::YLeaf IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6InterfaceforwardingEnum::forwarding {1, "forwarding"};
const Enum::YLeaf IpMib::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6InterfaceforwardingEnum::notForwarding {2, "notForwarding"};

const Enum::YLeaf IpMib::Ipaddresstable::Ipaddressentry::IpaddresstypeEnum::unicast {1, "unicast"};
const Enum::YLeaf IpMib::Ipaddresstable::Ipaddressentry::IpaddresstypeEnum::anycast {2, "anycast"};
const Enum::YLeaf IpMib::Ipaddresstable::Ipaddressentry::IpaddresstypeEnum::broadcast {3, "broadcast"};

const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicaltypeEnum::other {1, "other"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicaltypeEnum::invalid {2, "invalid"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicaltypeEnum::dynamic {3, "dynamic"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicaltypeEnum::static_ {4, "static"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicaltypeEnum::local {5, "local"};

const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum::reachable {1, "reachable"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum::stale {2, "stale"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum::delay {3, "delay"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum::probe {4, "probe"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum::invalid {5, "invalid"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum::unknown {6, "unknown"};
const Enum::YLeaf IpMib::Ipnettophysicaltable::Ipnettophysicalentry::IpnettophysicalstateEnum::incomplete {7, "incomplete"};

const Enum::YLeaf IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::IpdefaultrouterpreferenceEnum::reserved {-2, "reserved"};
const Enum::YLeaf IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::IpdefaultrouterpreferenceEnum::low {-1, "low"};
const Enum::YLeaf IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::IpdefaultrouterpreferenceEnum::medium {0, "medium"};
const Enum::YLeaf IpMib::Ipdefaultroutertable::Ipdefaultrouterentry::IpdefaultrouterpreferenceEnum::high {1, "high"};


}
}

