
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IP_MIB {

IPMIB::IPMIB()
    :
    icmp(std::make_shared<IPMIB::Icmp>())
	,icmpmsgstatstable(std::make_shared<IPMIB::Icmpmsgstatstable>())
	,icmpstatstable(std::make_shared<IPMIB::Icmpstatstable>())
	,ip(std::make_shared<IPMIB::Ip>())
	,ipaddressprefixtable(std::make_shared<IPMIB::Ipaddressprefixtable>())
	,ipaddresstable(std::make_shared<IPMIB::Ipaddresstable>())
	,ipaddrtable(std::make_shared<IPMIB::Ipaddrtable>())
	,ipdefaultroutertable(std::make_shared<IPMIB::Ipdefaultroutertable>())
	,ipifstatstable(std::make_shared<IPMIB::Ipifstatstable>())
	,ipnettomediatable(std::make_shared<IPMIB::Ipnettomediatable>())
	,ipnettophysicaltable(std::make_shared<IPMIB::Ipnettophysicaltable>())
	,ipsystemstatstable(std::make_shared<IPMIB::Ipsystemstatstable>())
	,iptrafficstats(std::make_shared<IPMIB::Iptrafficstats>())
	,ipv4interfacetable(std::make_shared<IPMIB::Ipv4Interfacetable>())
	,ipv6interfacetable(std::make_shared<IPMIB::Ipv6Interfacetable>())
	,ipv6routeradverttable(std::make_shared<IPMIB::Ipv6Routeradverttable>())
	,ipv6scopezoneindextable(std::make_shared<IPMIB::Ipv6Scopezoneindextable>())
{
    icmp->parent = this;
    icmpmsgstatstable->parent = this;
    icmpstatstable->parent = this;
    ip->parent = this;
    ipaddressprefixtable->parent = this;
    ipaddresstable->parent = this;
    ipaddrtable->parent = this;
    ipdefaultroutertable->parent = this;
    ipifstatstable->parent = this;
    ipnettomediatable->parent = this;
    ipnettophysicaltable->parent = this;
    ipsystemstatstable->parent = this;
    iptrafficstats->parent = this;
    ipv4interfacetable->parent = this;
    ipv6interfacetable->parent = this;
    ipv6routeradverttable->parent = this;
    ipv6scopezoneindextable->parent = this;

    yang_name = "IP-MIB"; yang_parent_name = "IP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

IPMIB::~IPMIB()
{
}

bool IPMIB::has_data() const
{
    return (icmp !=  nullptr && icmp->has_data())
	|| (icmpmsgstatstable !=  nullptr && icmpmsgstatstable->has_data())
	|| (icmpstatstable !=  nullptr && icmpstatstable->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipaddressprefixtable !=  nullptr && ipaddressprefixtable->has_data())
	|| (ipaddresstable !=  nullptr && ipaddresstable->has_data())
	|| (ipaddrtable !=  nullptr && ipaddrtable->has_data())
	|| (ipdefaultroutertable !=  nullptr && ipdefaultroutertable->has_data())
	|| (ipifstatstable !=  nullptr && ipifstatstable->has_data())
	|| (ipnettomediatable !=  nullptr && ipnettomediatable->has_data())
	|| (ipnettophysicaltable !=  nullptr && ipnettophysicaltable->has_data())
	|| (ipsystemstatstable !=  nullptr && ipsystemstatstable->has_data())
	|| (iptrafficstats !=  nullptr && iptrafficstats->has_data())
	|| (ipv4interfacetable !=  nullptr && ipv4interfacetable->has_data())
	|| (ipv6interfacetable !=  nullptr && ipv6interfacetable->has_data())
	|| (ipv6routeradverttable !=  nullptr && ipv6routeradverttable->has_data())
	|| (ipv6scopezoneindextable !=  nullptr && ipv6scopezoneindextable->has_data());
}

bool IPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (icmpmsgstatstable !=  nullptr && icmpmsgstatstable->has_operation())
	|| (icmpstatstable !=  nullptr && icmpstatstable->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipaddressprefixtable !=  nullptr && ipaddressprefixtable->has_operation())
	|| (ipaddresstable !=  nullptr && ipaddresstable->has_operation())
	|| (ipaddrtable !=  nullptr && ipaddrtable->has_operation())
	|| (ipdefaultroutertable !=  nullptr && ipdefaultroutertable->has_operation())
	|| (ipifstatstable !=  nullptr && ipifstatstable->has_operation())
	|| (ipnettomediatable !=  nullptr && ipnettomediatable->has_operation())
	|| (ipnettophysicaltable !=  nullptr && ipnettophysicaltable->has_operation())
	|| (ipsystemstatstable !=  nullptr && ipsystemstatstable->has_operation())
	|| (iptrafficstats !=  nullptr && iptrafficstats->has_operation())
	|| (ipv4interfacetable !=  nullptr && ipv4interfacetable->has_operation())
	|| (ipv6interfacetable !=  nullptr && ipv6interfacetable->has_operation())
	|| (ipv6routeradverttable !=  nullptr && ipv6routeradverttable->has_operation())
	|| (ipv6scopezoneindextable !=  nullptr && ipv6scopezoneindextable->has_operation());
}

std::string IPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<IPMIB::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "icmpMsgStatsTable")
    {
        if(icmpmsgstatstable == nullptr)
        {
            icmpmsgstatstable = std::make_shared<IPMIB::Icmpmsgstatstable>();
        }
        return icmpmsgstatstable;
    }

    if(child_yang_name == "icmpStatsTable")
    {
        if(icmpstatstable == nullptr)
        {
            icmpstatstable = std::make_shared<IPMIB::Icmpstatstable>();
        }
        return icmpstatstable;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<IPMIB::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipAddressPrefixTable")
    {
        if(ipaddressprefixtable == nullptr)
        {
            ipaddressprefixtable = std::make_shared<IPMIB::Ipaddressprefixtable>();
        }
        return ipaddressprefixtable;
    }

    if(child_yang_name == "ipAddressTable")
    {
        if(ipaddresstable == nullptr)
        {
            ipaddresstable = std::make_shared<IPMIB::Ipaddresstable>();
        }
        return ipaddresstable;
    }

    if(child_yang_name == "ipAddrTable")
    {
        if(ipaddrtable == nullptr)
        {
            ipaddrtable = std::make_shared<IPMIB::Ipaddrtable>();
        }
        return ipaddrtable;
    }

    if(child_yang_name == "ipDefaultRouterTable")
    {
        if(ipdefaultroutertable == nullptr)
        {
            ipdefaultroutertable = std::make_shared<IPMIB::Ipdefaultroutertable>();
        }
        return ipdefaultroutertable;
    }

    if(child_yang_name == "ipIfStatsTable")
    {
        if(ipifstatstable == nullptr)
        {
            ipifstatstable = std::make_shared<IPMIB::Ipifstatstable>();
        }
        return ipifstatstable;
    }

    if(child_yang_name == "ipNetToMediaTable")
    {
        if(ipnettomediatable == nullptr)
        {
            ipnettomediatable = std::make_shared<IPMIB::Ipnettomediatable>();
        }
        return ipnettomediatable;
    }

    if(child_yang_name == "ipNetToPhysicalTable")
    {
        if(ipnettophysicaltable == nullptr)
        {
            ipnettophysicaltable = std::make_shared<IPMIB::Ipnettophysicaltable>();
        }
        return ipnettophysicaltable;
    }

    if(child_yang_name == "ipSystemStatsTable")
    {
        if(ipsystemstatstable == nullptr)
        {
            ipsystemstatstable = std::make_shared<IPMIB::Ipsystemstatstable>();
        }
        return ipsystemstatstable;
    }

    if(child_yang_name == "ipTrafficStats")
    {
        if(iptrafficstats == nullptr)
        {
            iptrafficstats = std::make_shared<IPMIB::Iptrafficstats>();
        }
        return iptrafficstats;
    }

    if(child_yang_name == "ipv4InterfaceTable")
    {
        if(ipv4interfacetable == nullptr)
        {
            ipv4interfacetable = std::make_shared<IPMIB::Ipv4Interfacetable>();
        }
        return ipv4interfacetable;
    }

    if(child_yang_name == "ipv6InterfaceTable")
    {
        if(ipv6interfacetable == nullptr)
        {
            ipv6interfacetable = std::make_shared<IPMIB::Ipv6Interfacetable>();
        }
        return ipv6interfacetable;
    }

    if(child_yang_name == "ipv6RouterAdvertTable")
    {
        if(ipv6routeradverttable == nullptr)
        {
            ipv6routeradverttable = std::make_shared<IPMIB::Ipv6Routeradverttable>();
        }
        return ipv6routeradverttable;
    }

    if(child_yang_name == "ipv6ScopeZoneIndexTable")
    {
        if(ipv6scopezoneindextable == nullptr)
        {
            ipv6scopezoneindextable = std::make_shared<IPMIB::Ipv6Scopezoneindextable>();
        }
        return ipv6scopezoneindextable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(icmpmsgstatstable != nullptr)
    {
        children["icmpMsgStatsTable"] = icmpmsgstatstable;
    }

    if(icmpstatstable != nullptr)
    {
        children["icmpStatsTable"] = icmpstatstable;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipaddressprefixtable != nullptr)
    {
        children["ipAddressPrefixTable"] = ipaddressprefixtable;
    }

    if(ipaddresstable != nullptr)
    {
        children["ipAddressTable"] = ipaddresstable;
    }

    if(ipaddrtable != nullptr)
    {
        children["ipAddrTable"] = ipaddrtable;
    }

    if(ipdefaultroutertable != nullptr)
    {
        children["ipDefaultRouterTable"] = ipdefaultroutertable;
    }

    if(ipifstatstable != nullptr)
    {
        children["ipIfStatsTable"] = ipifstatstable;
    }

    if(ipnettomediatable != nullptr)
    {
        children["ipNetToMediaTable"] = ipnettomediatable;
    }

    if(ipnettophysicaltable != nullptr)
    {
        children["ipNetToPhysicalTable"] = ipnettophysicaltable;
    }

    if(ipsystemstatstable != nullptr)
    {
        children["ipSystemStatsTable"] = ipsystemstatstable;
    }

    if(iptrafficstats != nullptr)
    {
        children["ipTrafficStats"] = iptrafficstats;
    }

    if(ipv4interfacetable != nullptr)
    {
        children["ipv4InterfaceTable"] = ipv4interfacetable;
    }

    if(ipv6interfacetable != nullptr)
    {
        children["ipv6InterfaceTable"] = ipv6interfacetable;
    }

    if(ipv6routeradverttable != nullptr)
    {
        children["ipv6RouterAdvertTable"] = ipv6routeradverttable;
    }

    if(ipv6scopezoneindextable != nullptr)
    {
        children["ipv6ScopeZoneIndexTable"] = ipv6scopezoneindextable;
    }

    return children;
}

void IPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IPMIB::clone_ptr() const
{
    return std::make_shared<IPMIB>();
}

std::string IPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp" || name == "icmpMsgStatsTable" || name == "icmpStatsTable" || name == "ip" || name == "ipAddressPrefixTable" || name == "ipAddressTable" || name == "ipAddrTable" || name == "ipDefaultRouterTable" || name == "ipIfStatsTable" || name == "ipNetToMediaTable" || name == "ipNetToPhysicalTable" || name == "ipSystemStatsTable" || name == "ipTrafficStats" || name == "ipv4InterfaceTable" || name == "ipv6InterfaceTable" || name == "ipv6RouterAdvertTable" || name == "ipv6ScopeZoneIndexTable")
        return true;
    return false;
}

IPMIB::Icmp::Icmp()
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

    yang_name = "icmp"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Icmp::~Icmp()
{
}

bool IPMIB::Icmp::has_data() const
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

bool IPMIB::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmpinaddrmaskreps.yfilter)
	|| ydk::is_set(icmpinaddrmasks.yfilter)
	|| ydk::is_set(icmpindestunreachs.yfilter)
	|| ydk::is_set(icmpinechoreps.yfilter)
	|| ydk::is_set(icmpinechos.yfilter)
	|| ydk::is_set(icmpinerrors.yfilter)
	|| ydk::is_set(icmpinmsgs.yfilter)
	|| ydk::is_set(icmpinparmprobs.yfilter)
	|| ydk::is_set(icmpinredirects.yfilter)
	|| ydk::is_set(icmpinsrcquenchs.yfilter)
	|| ydk::is_set(icmpintimeexcds.yfilter)
	|| ydk::is_set(icmpintimestampreps.yfilter)
	|| ydk::is_set(icmpintimestamps.yfilter)
	|| ydk::is_set(icmpoutaddrmaskreps.yfilter)
	|| ydk::is_set(icmpoutaddrmasks.yfilter)
	|| ydk::is_set(icmpoutdestunreachs.yfilter)
	|| ydk::is_set(icmpoutechoreps.yfilter)
	|| ydk::is_set(icmpoutechos.yfilter)
	|| ydk::is_set(icmpouterrors.yfilter)
	|| ydk::is_set(icmpoutmsgs.yfilter)
	|| ydk::is_set(icmpoutparmprobs.yfilter)
	|| ydk::is_set(icmpoutredirects.yfilter)
	|| ydk::is_set(icmpoutsrcquenchs.yfilter)
	|| ydk::is_set(icmpouttimeexcds.yfilter)
	|| ydk::is_set(icmpouttimestampreps.yfilter)
	|| ydk::is_set(icmpouttimestamps.yfilter);
}

std::string IPMIB::Icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmpinaddrmaskreps.is_set || is_set(icmpinaddrmaskreps.yfilter)) leaf_name_data.push_back(icmpinaddrmaskreps.get_name_leafdata());
    if (icmpinaddrmasks.is_set || is_set(icmpinaddrmasks.yfilter)) leaf_name_data.push_back(icmpinaddrmasks.get_name_leafdata());
    if (icmpindestunreachs.is_set || is_set(icmpindestunreachs.yfilter)) leaf_name_data.push_back(icmpindestunreachs.get_name_leafdata());
    if (icmpinechoreps.is_set || is_set(icmpinechoreps.yfilter)) leaf_name_data.push_back(icmpinechoreps.get_name_leafdata());
    if (icmpinechos.is_set || is_set(icmpinechos.yfilter)) leaf_name_data.push_back(icmpinechos.get_name_leafdata());
    if (icmpinerrors.is_set || is_set(icmpinerrors.yfilter)) leaf_name_data.push_back(icmpinerrors.get_name_leafdata());
    if (icmpinmsgs.is_set || is_set(icmpinmsgs.yfilter)) leaf_name_data.push_back(icmpinmsgs.get_name_leafdata());
    if (icmpinparmprobs.is_set || is_set(icmpinparmprobs.yfilter)) leaf_name_data.push_back(icmpinparmprobs.get_name_leafdata());
    if (icmpinredirects.is_set || is_set(icmpinredirects.yfilter)) leaf_name_data.push_back(icmpinredirects.get_name_leafdata());
    if (icmpinsrcquenchs.is_set || is_set(icmpinsrcquenchs.yfilter)) leaf_name_data.push_back(icmpinsrcquenchs.get_name_leafdata());
    if (icmpintimeexcds.is_set || is_set(icmpintimeexcds.yfilter)) leaf_name_data.push_back(icmpintimeexcds.get_name_leafdata());
    if (icmpintimestampreps.is_set || is_set(icmpintimestampreps.yfilter)) leaf_name_data.push_back(icmpintimestampreps.get_name_leafdata());
    if (icmpintimestamps.is_set || is_set(icmpintimestamps.yfilter)) leaf_name_data.push_back(icmpintimestamps.get_name_leafdata());
    if (icmpoutaddrmaskreps.is_set || is_set(icmpoutaddrmaskreps.yfilter)) leaf_name_data.push_back(icmpoutaddrmaskreps.get_name_leafdata());
    if (icmpoutaddrmasks.is_set || is_set(icmpoutaddrmasks.yfilter)) leaf_name_data.push_back(icmpoutaddrmasks.get_name_leafdata());
    if (icmpoutdestunreachs.is_set || is_set(icmpoutdestunreachs.yfilter)) leaf_name_data.push_back(icmpoutdestunreachs.get_name_leafdata());
    if (icmpoutechoreps.is_set || is_set(icmpoutechoreps.yfilter)) leaf_name_data.push_back(icmpoutechoreps.get_name_leafdata());
    if (icmpoutechos.is_set || is_set(icmpoutechos.yfilter)) leaf_name_data.push_back(icmpoutechos.get_name_leafdata());
    if (icmpouterrors.is_set || is_set(icmpouterrors.yfilter)) leaf_name_data.push_back(icmpouterrors.get_name_leafdata());
    if (icmpoutmsgs.is_set || is_set(icmpoutmsgs.yfilter)) leaf_name_data.push_back(icmpoutmsgs.get_name_leafdata());
    if (icmpoutparmprobs.is_set || is_set(icmpoutparmprobs.yfilter)) leaf_name_data.push_back(icmpoutparmprobs.get_name_leafdata());
    if (icmpoutredirects.is_set || is_set(icmpoutredirects.yfilter)) leaf_name_data.push_back(icmpoutredirects.get_name_leafdata());
    if (icmpoutsrcquenchs.is_set || is_set(icmpoutsrcquenchs.yfilter)) leaf_name_data.push_back(icmpoutsrcquenchs.get_name_leafdata());
    if (icmpouttimeexcds.is_set || is_set(icmpouttimeexcds.yfilter)) leaf_name_data.push_back(icmpouttimeexcds.get_name_leafdata());
    if (icmpouttimestampreps.is_set || is_set(icmpouttimestampreps.yfilter)) leaf_name_data.push_back(icmpouttimestampreps.get_name_leafdata());
    if (icmpouttimestamps.is_set || is_set(icmpouttimestamps.yfilter)) leaf_name_data.push_back(icmpouttimestamps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmpInAddrMaskReps")
    {
        icmpinaddrmaskreps = value;
        icmpinaddrmaskreps.value_namespace = name_space;
        icmpinaddrmaskreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInAddrMasks")
    {
        icmpinaddrmasks = value;
        icmpinaddrmasks.value_namespace = name_space;
        icmpinaddrmasks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInDestUnreachs")
    {
        icmpindestunreachs = value;
        icmpindestunreachs.value_namespace = name_space;
        icmpindestunreachs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInEchoReps")
    {
        icmpinechoreps = value;
        icmpinechoreps.value_namespace = name_space;
        icmpinechoreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInEchos")
    {
        icmpinechos = value;
        icmpinechos.value_namespace = name_space;
        icmpinechos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInErrors")
    {
        icmpinerrors = value;
        icmpinerrors.value_namespace = name_space;
        icmpinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInMsgs")
    {
        icmpinmsgs = value;
        icmpinmsgs.value_namespace = name_space;
        icmpinmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInParmProbs")
    {
        icmpinparmprobs = value;
        icmpinparmprobs.value_namespace = name_space;
        icmpinparmprobs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInRedirects")
    {
        icmpinredirects = value;
        icmpinredirects.value_namespace = name_space;
        icmpinredirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInSrcQuenchs")
    {
        icmpinsrcquenchs = value;
        icmpinsrcquenchs.value_namespace = name_space;
        icmpinsrcquenchs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInTimeExcds")
    {
        icmpintimeexcds = value;
        icmpintimeexcds.value_namespace = name_space;
        icmpintimeexcds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInTimestampReps")
    {
        icmpintimestampreps = value;
        icmpintimestampreps.value_namespace = name_space;
        icmpintimestampreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpInTimestamps")
    {
        icmpintimestamps = value;
        icmpintimestamps.value_namespace = name_space;
        icmpintimestamps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutAddrMaskReps")
    {
        icmpoutaddrmaskreps = value;
        icmpoutaddrmaskreps.value_namespace = name_space;
        icmpoutaddrmaskreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutAddrMasks")
    {
        icmpoutaddrmasks = value;
        icmpoutaddrmasks.value_namespace = name_space;
        icmpoutaddrmasks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutDestUnreachs")
    {
        icmpoutdestunreachs = value;
        icmpoutdestunreachs.value_namespace = name_space;
        icmpoutdestunreachs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutEchoReps")
    {
        icmpoutechoreps = value;
        icmpoutechoreps.value_namespace = name_space;
        icmpoutechoreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutEchos")
    {
        icmpoutechos = value;
        icmpoutechos.value_namespace = name_space;
        icmpoutechos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutErrors")
    {
        icmpouterrors = value;
        icmpouterrors.value_namespace = name_space;
        icmpouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutMsgs")
    {
        icmpoutmsgs = value;
        icmpoutmsgs.value_namespace = name_space;
        icmpoutmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutParmProbs")
    {
        icmpoutparmprobs = value;
        icmpoutparmprobs.value_namespace = name_space;
        icmpoutparmprobs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutRedirects")
    {
        icmpoutredirects = value;
        icmpoutredirects.value_namespace = name_space;
        icmpoutredirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutSrcQuenchs")
    {
        icmpoutsrcquenchs = value;
        icmpoutsrcquenchs.value_namespace = name_space;
        icmpoutsrcquenchs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutTimeExcds")
    {
        icmpouttimeexcds = value;
        icmpouttimeexcds.value_namespace = name_space;
        icmpouttimeexcds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutTimestampReps")
    {
        icmpouttimestampreps = value;
        icmpouttimestampreps.value_namespace = name_space;
        icmpouttimestampreps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpOutTimestamps")
    {
        icmpouttimestamps = value;
        icmpouttimestamps.value_namespace = name_space;
        icmpouttimestamps.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmpInAddrMaskReps")
    {
        icmpinaddrmaskreps.yfilter = yfilter;
    }
    if(value_path == "icmpInAddrMasks")
    {
        icmpinaddrmasks.yfilter = yfilter;
    }
    if(value_path == "icmpInDestUnreachs")
    {
        icmpindestunreachs.yfilter = yfilter;
    }
    if(value_path == "icmpInEchoReps")
    {
        icmpinechoreps.yfilter = yfilter;
    }
    if(value_path == "icmpInEchos")
    {
        icmpinechos.yfilter = yfilter;
    }
    if(value_path == "icmpInErrors")
    {
        icmpinerrors.yfilter = yfilter;
    }
    if(value_path == "icmpInMsgs")
    {
        icmpinmsgs.yfilter = yfilter;
    }
    if(value_path == "icmpInParmProbs")
    {
        icmpinparmprobs.yfilter = yfilter;
    }
    if(value_path == "icmpInRedirects")
    {
        icmpinredirects.yfilter = yfilter;
    }
    if(value_path == "icmpInSrcQuenchs")
    {
        icmpinsrcquenchs.yfilter = yfilter;
    }
    if(value_path == "icmpInTimeExcds")
    {
        icmpintimeexcds.yfilter = yfilter;
    }
    if(value_path == "icmpInTimestampReps")
    {
        icmpintimestampreps.yfilter = yfilter;
    }
    if(value_path == "icmpInTimestamps")
    {
        icmpintimestamps.yfilter = yfilter;
    }
    if(value_path == "icmpOutAddrMaskReps")
    {
        icmpoutaddrmaskreps.yfilter = yfilter;
    }
    if(value_path == "icmpOutAddrMasks")
    {
        icmpoutaddrmasks.yfilter = yfilter;
    }
    if(value_path == "icmpOutDestUnreachs")
    {
        icmpoutdestunreachs.yfilter = yfilter;
    }
    if(value_path == "icmpOutEchoReps")
    {
        icmpoutechoreps.yfilter = yfilter;
    }
    if(value_path == "icmpOutEchos")
    {
        icmpoutechos.yfilter = yfilter;
    }
    if(value_path == "icmpOutErrors")
    {
        icmpouterrors.yfilter = yfilter;
    }
    if(value_path == "icmpOutMsgs")
    {
        icmpoutmsgs.yfilter = yfilter;
    }
    if(value_path == "icmpOutParmProbs")
    {
        icmpoutparmprobs.yfilter = yfilter;
    }
    if(value_path == "icmpOutRedirects")
    {
        icmpoutredirects.yfilter = yfilter;
    }
    if(value_path == "icmpOutSrcQuenchs")
    {
        icmpoutsrcquenchs.yfilter = yfilter;
    }
    if(value_path == "icmpOutTimeExcds")
    {
        icmpouttimeexcds.yfilter = yfilter;
    }
    if(value_path == "icmpOutTimestampReps")
    {
        icmpouttimestampreps.yfilter = yfilter;
    }
    if(value_path == "icmpOutTimestamps")
    {
        icmpouttimestamps.yfilter = yfilter;
    }
}

bool IPMIB::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmpInAddrMaskReps" || name == "icmpInAddrMasks" || name == "icmpInDestUnreachs" || name == "icmpInEchoReps" || name == "icmpInEchos" || name == "icmpInErrors" || name == "icmpInMsgs" || name == "icmpInParmProbs" || name == "icmpInRedirects" || name == "icmpInSrcQuenchs" || name == "icmpInTimeExcds" || name == "icmpInTimestampReps" || name == "icmpInTimestamps" || name == "icmpOutAddrMaskReps" || name == "icmpOutAddrMasks" || name == "icmpOutDestUnreachs" || name == "icmpOutEchoReps" || name == "icmpOutEchos" || name == "icmpOutErrors" || name == "icmpOutMsgs" || name == "icmpOutParmProbs" || name == "icmpOutRedirects" || name == "icmpOutSrcQuenchs" || name == "icmpOutTimeExcds" || name == "icmpOutTimestampReps" || name == "icmpOutTimestamps")
        return true;
    return false;
}

IPMIB::Icmpmsgstatstable::Icmpmsgstatstable()
{

    yang_name = "icmpMsgStatsTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Icmpmsgstatstable::~Icmpmsgstatstable()
{
}

bool IPMIB::Icmpmsgstatstable::has_data() const
{
    for (std::size_t index=0; index<icmpmsgstatsentry.size(); index++)
    {
        if(icmpmsgstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Icmpmsgstatstable::has_operation() const
{
    for (std::size_t index=0; index<icmpmsgstatsentry.size(); index++)
    {
        if(icmpmsgstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Icmpmsgstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Icmpmsgstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpMsgStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Icmpmsgstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Icmpmsgstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmpMsgStatsEntry")
    {
        for(auto const & c : icmpmsgstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry>();
        c->parent = this;
        icmpmsgstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Icmpmsgstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : icmpmsgstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Icmpmsgstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Icmpmsgstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Icmpmsgstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmpMsgStatsEntry")
        return true;
    return false;
}

IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::Icmpmsgstatsentry()
    :
    icmpmsgstatsipversion{YType::enumeration, "icmpMsgStatsIPVersion"},
    icmpmsgstatstype{YType::int32, "icmpMsgStatsType"},
    icmpmsgstatsinpkts{YType::uint32, "icmpMsgStatsInPkts"},
    icmpmsgstatsoutpkts{YType::uint32, "icmpMsgStatsOutPkts"}
{

    yang_name = "icmpMsgStatsEntry"; yang_parent_name = "icmpMsgStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::~Icmpmsgstatsentry()
{
}

bool IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::has_data() const
{
    return icmpmsgstatsipversion.is_set
	|| icmpmsgstatstype.is_set
	|| icmpmsgstatsinpkts.is_set
	|| icmpmsgstatsoutpkts.is_set;
}

bool IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmpmsgstatsipversion.yfilter)
	|| ydk::is_set(icmpmsgstatstype.yfilter)
	|| ydk::is_set(icmpmsgstatsinpkts.yfilter)
	|| ydk::is_set(icmpmsgstatsoutpkts.yfilter);
}

std::string IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/icmpMsgStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpMsgStatsEntry" <<"[icmpMsgStatsIPVersion='" <<icmpmsgstatsipversion <<"']" <<"[icmpMsgStatsType='" <<icmpmsgstatstype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmpmsgstatsipversion.is_set || is_set(icmpmsgstatsipversion.yfilter)) leaf_name_data.push_back(icmpmsgstatsipversion.get_name_leafdata());
    if (icmpmsgstatstype.is_set || is_set(icmpmsgstatstype.yfilter)) leaf_name_data.push_back(icmpmsgstatstype.get_name_leafdata());
    if (icmpmsgstatsinpkts.is_set || is_set(icmpmsgstatsinpkts.yfilter)) leaf_name_data.push_back(icmpmsgstatsinpkts.get_name_leafdata());
    if (icmpmsgstatsoutpkts.is_set || is_set(icmpmsgstatsoutpkts.yfilter)) leaf_name_data.push_back(icmpmsgstatsoutpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmpMsgStatsIPVersion")
    {
        icmpmsgstatsipversion = value;
        icmpmsgstatsipversion.value_namespace = name_space;
        icmpmsgstatsipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpMsgStatsType")
    {
        icmpmsgstatstype = value;
        icmpmsgstatstype.value_namespace = name_space;
        icmpmsgstatstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpMsgStatsInPkts")
    {
        icmpmsgstatsinpkts = value;
        icmpmsgstatsinpkts.value_namespace = name_space;
        icmpmsgstatsinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpMsgStatsOutPkts")
    {
        icmpmsgstatsoutpkts = value;
        icmpmsgstatsoutpkts.value_namespace = name_space;
        icmpmsgstatsoutpkts.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmpMsgStatsIPVersion")
    {
        icmpmsgstatsipversion.yfilter = yfilter;
    }
    if(value_path == "icmpMsgStatsType")
    {
        icmpmsgstatstype.yfilter = yfilter;
    }
    if(value_path == "icmpMsgStatsInPkts")
    {
        icmpmsgstatsinpkts.yfilter = yfilter;
    }
    if(value_path == "icmpMsgStatsOutPkts")
    {
        icmpmsgstatsoutpkts.yfilter = yfilter;
    }
}

bool IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmpMsgStatsIPVersion" || name == "icmpMsgStatsType" || name == "icmpMsgStatsInPkts" || name == "icmpMsgStatsOutPkts")
        return true;
    return false;
}

IPMIB::Icmpstatstable::Icmpstatstable()
{

    yang_name = "icmpStatsTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Icmpstatstable::~Icmpstatstable()
{
}

bool IPMIB::Icmpstatstable::has_data() const
{
    for (std::size_t index=0; index<icmpstatsentry.size(); index++)
    {
        if(icmpstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Icmpstatstable::has_operation() const
{
    for (std::size_t index=0; index<icmpstatsentry.size(); index++)
    {
        if(icmpstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Icmpstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Icmpstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Icmpstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Icmpstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmpStatsEntry")
    {
        for(auto const & c : icmpstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Icmpstatstable::Icmpstatsentry>();
        c->parent = this;
        icmpstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Icmpstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : icmpstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Icmpstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Icmpstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Icmpstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmpStatsEntry")
        return true;
    return false;
}

IPMIB::Icmpstatstable::Icmpstatsentry::Icmpstatsentry()
    :
    icmpstatsipversion{YType::enumeration, "icmpStatsIPVersion"},
    icmpstatsinerrors{YType::uint32, "icmpStatsInErrors"},
    icmpstatsinmsgs{YType::uint32, "icmpStatsInMsgs"},
    icmpstatsouterrors{YType::uint32, "icmpStatsOutErrors"},
    icmpstatsoutmsgs{YType::uint32, "icmpStatsOutMsgs"}
{

    yang_name = "icmpStatsEntry"; yang_parent_name = "icmpStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Icmpstatstable::Icmpstatsentry::~Icmpstatsentry()
{
}

bool IPMIB::Icmpstatstable::Icmpstatsentry::has_data() const
{
    return icmpstatsipversion.is_set
	|| icmpstatsinerrors.is_set
	|| icmpstatsinmsgs.is_set
	|| icmpstatsouterrors.is_set
	|| icmpstatsoutmsgs.is_set;
}

bool IPMIB::Icmpstatstable::Icmpstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(icmpstatsipversion.yfilter)
	|| ydk::is_set(icmpstatsinerrors.yfilter)
	|| ydk::is_set(icmpstatsinmsgs.yfilter)
	|| ydk::is_set(icmpstatsouterrors.yfilter)
	|| ydk::is_set(icmpstatsoutmsgs.yfilter);
}

std::string IPMIB::Icmpstatstable::Icmpstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/icmpStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Icmpstatstable::Icmpstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpStatsEntry" <<"[icmpStatsIPVersion='" <<icmpstatsipversion <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Icmpstatstable::Icmpstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (icmpstatsipversion.is_set || is_set(icmpstatsipversion.yfilter)) leaf_name_data.push_back(icmpstatsipversion.get_name_leafdata());
    if (icmpstatsinerrors.is_set || is_set(icmpstatsinerrors.yfilter)) leaf_name_data.push_back(icmpstatsinerrors.get_name_leafdata());
    if (icmpstatsinmsgs.is_set || is_set(icmpstatsinmsgs.yfilter)) leaf_name_data.push_back(icmpstatsinmsgs.get_name_leafdata());
    if (icmpstatsouterrors.is_set || is_set(icmpstatsouterrors.yfilter)) leaf_name_data.push_back(icmpstatsouterrors.get_name_leafdata());
    if (icmpstatsoutmsgs.is_set || is_set(icmpstatsoutmsgs.yfilter)) leaf_name_data.push_back(icmpstatsoutmsgs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Icmpstatstable::Icmpstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Icmpstatstable::Icmpstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Icmpstatstable::Icmpstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "icmpStatsIPVersion")
    {
        icmpstatsipversion = value;
        icmpstatsipversion.value_namespace = name_space;
        icmpstatsipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpStatsInErrors")
    {
        icmpstatsinerrors = value;
        icmpstatsinerrors.value_namespace = name_space;
        icmpstatsinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpStatsInMsgs")
    {
        icmpstatsinmsgs = value;
        icmpstatsinmsgs.value_namespace = name_space;
        icmpstatsinmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpStatsOutErrors")
    {
        icmpstatsouterrors = value;
        icmpstatsouterrors.value_namespace = name_space;
        icmpstatsouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpStatsOutMsgs")
    {
        icmpstatsoutmsgs = value;
        icmpstatsoutmsgs.value_namespace = name_space;
        icmpstatsoutmsgs.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Icmpstatstable::Icmpstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "icmpStatsIPVersion")
    {
        icmpstatsipversion.yfilter = yfilter;
    }
    if(value_path == "icmpStatsInErrors")
    {
        icmpstatsinerrors.yfilter = yfilter;
    }
    if(value_path == "icmpStatsInMsgs")
    {
        icmpstatsinmsgs.yfilter = yfilter;
    }
    if(value_path == "icmpStatsOutErrors")
    {
        icmpstatsouterrors.yfilter = yfilter;
    }
    if(value_path == "icmpStatsOutMsgs")
    {
        icmpstatsoutmsgs.yfilter = yfilter;
    }
}

bool IPMIB::Icmpstatstable::Icmpstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmpStatsIPVersion" || name == "icmpStatsInErrors" || name == "icmpStatsInMsgs" || name == "icmpStatsOutErrors" || name == "icmpStatsOutMsgs")
        return true;
    return false;
}

IPMIB::Ip::Ip()
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

    yang_name = "ip"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ip::~Ip()
{
}

bool IPMIB::Ip::has_data() const
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

bool IPMIB::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddressspinlock.yfilter)
	|| ydk::is_set(ipdefaultttl.yfilter)
	|| ydk::is_set(ipforwarding.yfilter)
	|| ydk::is_set(ipforwdatagrams.yfilter)
	|| ydk::is_set(ipfragcreates.yfilter)
	|| ydk::is_set(ipfragfails.yfilter)
	|| ydk::is_set(ipfragoks.yfilter)
	|| ydk::is_set(ipinaddrerrors.yfilter)
	|| ydk::is_set(ipindelivers.yfilter)
	|| ydk::is_set(ipindiscards.yfilter)
	|| ydk::is_set(ipinhdrerrors.yfilter)
	|| ydk::is_set(ipinreceives.yfilter)
	|| ydk::is_set(ipinunknownprotos.yfilter)
	|| ydk::is_set(ipoutdiscards.yfilter)
	|| ydk::is_set(ipoutnoroutes.yfilter)
	|| ydk::is_set(ipoutrequests.yfilter)
	|| ydk::is_set(ipreasmfails.yfilter)
	|| ydk::is_set(ipreasmoks.yfilter)
	|| ydk::is_set(ipreasmreqds.yfilter)
	|| ydk::is_set(ipreasmtimeout.yfilter)
	|| ydk::is_set(iproutingdiscards.yfilter)
	|| ydk::is_set(ipv4interfacetablelastchange.yfilter)
	|| ydk::is_set(ipv6interfacetablelastchange.yfilter)
	|| ydk::is_set(ipv6ipdefaulthoplimit.yfilter)
	|| ydk::is_set(ipv6ipforwarding.yfilter)
	|| ydk::is_set(ipv6routeradvertspinlock.yfilter);
}

std::string IPMIB::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddressspinlock.is_set || is_set(ipaddressspinlock.yfilter)) leaf_name_data.push_back(ipaddressspinlock.get_name_leafdata());
    if (ipdefaultttl.is_set || is_set(ipdefaultttl.yfilter)) leaf_name_data.push_back(ipdefaultttl.get_name_leafdata());
    if (ipforwarding.is_set || is_set(ipforwarding.yfilter)) leaf_name_data.push_back(ipforwarding.get_name_leafdata());
    if (ipforwdatagrams.is_set || is_set(ipforwdatagrams.yfilter)) leaf_name_data.push_back(ipforwdatagrams.get_name_leafdata());
    if (ipfragcreates.is_set || is_set(ipfragcreates.yfilter)) leaf_name_data.push_back(ipfragcreates.get_name_leafdata());
    if (ipfragfails.is_set || is_set(ipfragfails.yfilter)) leaf_name_data.push_back(ipfragfails.get_name_leafdata());
    if (ipfragoks.is_set || is_set(ipfragoks.yfilter)) leaf_name_data.push_back(ipfragoks.get_name_leafdata());
    if (ipinaddrerrors.is_set || is_set(ipinaddrerrors.yfilter)) leaf_name_data.push_back(ipinaddrerrors.get_name_leafdata());
    if (ipindelivers.is_set || is_set(ipindelivers.yfilter)) leaf_name_data.push_back(ipindelivers.get_name_leafdata());
    if (ipindiscards.is_set || is_set(ipindiscards.yfilter)) leaf_name_data.push_back(ipindiscards.get_name_leafdata());
    if (ipinhdrerrors.is_set || is_set(ipinhdrerrors.yfilter)) leaf_name_data.push_back(ipinhdrerrors.get_name_leafdata());
    if (ipinreceives.is_set || is_set(ipinreceives.yfilter)) leaf_name_data.push_back(ipinreceives.get_name_leafdata());
    if (ipinunknownprotos.is_set || is_set(ipinunknownprotos.yfilter)) leaf_name_data.push_back(ipinunknownprotos.get_name_leafdata());
    if (ipoutdiscards.is_set || is_set(ipoutdiscards.yfilter)) leaf_name_data.push_back(ipoutdiscards.get_name_leafdata());
    if (ipoutnoroutes.is_set || is_set(ipoutnoroutes.yfilter)) leaf_name_data.push_back(ipoutnoroutes.get_name_leafdata());
    if (ipoutrequests.is_set || is_set(ipoutrequests.yfilter)) leaf_name_data.push_back(ipoutrequests.get_name_leafdata());
    if (ipreasmfails.is_set || is_set(ipreasmfails.yfilter)) leaf_name_data.push_back(ipreasmfails.get_name_leafdata());
    if (ipreasmoks.is_set || is_set(ipreasmoks.yfilter)) leaf_name_data.push_back(ipreasmoks.get_name_leafdata());
    if (ipreasmreqds.is_set || is_set(ipreasmreqds.yfilter)) leaf_name_data.push_back(ipreasmreqds.get_name_leafdata());
    if (ipreasmtimeout.is_set || is_set(ipreasmtimeout.yfilter)) leaf_name_data.push_back(ipreasmtimeout.get_name_leafdata());
    if (iproutingdiscards.is_set || is_set(iproutingdiscards.yfilter)) leaf_name_data.push_back(iproutingdiscards.get_name_leafdata());
    if (ipv4interfacetablelastchange.is_set || is_set(ipv4interfacetablelastchange.yfilter)) leaf_name_data.push_back(ipv4interfacetablelastchange.get_name_leafdata());
    if (ipv6interfacetablelastchange.is_set || is_set(ipv6interfacetablelastchange.yfilter)) leaf_name_data.push_back(ipv6interfacetablelastchange.get_name_leafdata());
    if (ipv6ipdefaulthoplimit.is_set || is_set(ipv6ipdefaulthoplimit.yfilter)) leaf_name_data.push_back(ipv6ipdefaulthoplimit.get_name_leafdata());
    if (ipv6ipforwarding.is_set || is_set(ipv6ipforwarding.yfilter)) leaf_name_data.push_back(ipv6ipforwarding.get_name_leafdata());
    if (ipv6routeradvertspinlock.is_set || is_set(ipv6routeradvertspinlock.yfilter)) leaf_name_data.push_back(ipv6routeradvertspinlock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAddressSpinLock")
    {
        ipaddressspinlock = value;
        ipaddressspinlock.value_namespace = name_space;
        ipaddressspinlock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDefaultTTL")
    {
        ipdefaultttl = value;
        ipdefaultttl.value_namespace = name_space;
        ipdefaultttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwarding")
    {
        ipforwarding = value;
        ipforwarding.value_namespace = name_space;
        ipforwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwDatagrams")
    {
        ipforwdatagrams = value;
        ipforwdatagrams.value_namespace = name_space;
        ipforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipFragCreates")
    {
        ipfragcreates = value;
        ipfragcreates.value_namespace = name_space;
        ipfragcreates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipFragFails")
    {
        ipfragfails = value;
        ipfragfails.value_namespace = name_space;
        ipfragfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipFragOKs")
    {
        ipfragoks = value;
        ipfragoks.value_namespace = name_space;
        ipfragoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInAddrErrors")
    {
        ipinaddrerrors = value;
        ipinaddrerrors.value_namespace = name_space;
        ipinaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInDelivers")
    {
        ipindelivers = value;
        ipindelivers.value_namespace = name_space;
        ipindelivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInDiscards")
    {
        ipindiscards = value;
        ipindiscards.value_namespace = name_space;
        ipindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInHdrErrors")
    {
        ipinhdrerrors = value;
        ipinhdrerrors.value_namespace = name_space;
        ipinhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInReceives")
    {
        ipinreceives = value;
        ipinreceives.value_namespace = name_space;
        ipinreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipInUnknownProtos")
    {
        ipinunknownprotos = value;
        ipinunknownprotos.value_namespace = name_space;
        ipinunknownprotos.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipOutRequests")
    {
        ipoutrequests = value;
        ipoutrequests.value_namespace = name_space;
        ipoutrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmFails")
    {
        ipreasmfails = value;
        ipreasmfails.value_namespace = name_space;
        ipreasmfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmOKs")
    {
        ipreasmoks = value;
        ipreasmoks.value_namespace = name_space;
        ipreasmoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmReqds")
    {
        ipreasmreqds = value;
        ipreasmreqds.value_namespace = name_space;
        ipreasmreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipReasmTimeout")
    {
        ipreasmtimeout = value;
        ipreasmtimeout.value_namespace = name_space;
        ipreasmtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipRoutingDiscards")
    {
        iproutingdiscards = value;
        iproutingdiscards.value_namespace = name_space;
        iproutingdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4InterfaceTableLastChange")
    {
        ipv4interfacetablelastchange = value;
        ipv4interfacetablelastchange.value_namespace = name_space;
        ipv4interfacetablelastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6InterfaceTableLastChange")
    {
        ipv6interfacetablelastchange = value;
        ipv6interfacetablelastchange.value_namespace = name_space;
        ipv6interfacetablelastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6IpDefaultHopLimit")
    {
        ipv6ipdefaulthoplimit = value;
        ipv6ipdefaulthoplimit.value_namespace = name_space;
        ipv6ipdefaulthoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6IpForwarding")
    {
        ipv6ipforwarding = value;
        ipv6ipforwarding.value_namespace = name_space;
        ipv6ipforwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertSpinLock")
    {
        ipv6routeradvertspinlock = value;
        ipv6routeradvertspinlock.value_namespace = name_space;
        ipv6routeradvertspinlock.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAddressSpinLock")
    {
        ipaddressspinlock.yfilter = yfilter;
    }
    if(value_path == "ipDefaultTTL")
    {
        ipdefaultttl.yfilter = yfilter;
    }
    if(value_path == "ipForwarding")
    {
        ipforwarding.yfilter = yfilter;
    }
    if(value_path == "ipForwDatagrams")
    {
        ipforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipFragCreates")
    {
        ipfragcreates.yfilter = yfilter;
    }
    if(value_path == "ipFragFails")
    {
        ipfragfails.yfilter = yfilter;
    }
    if(value_path == "ipFragOKs")
    {
        ipfragoks.yfilter = yfilter;
    }
    if(value_path == "ipInAddrErrors")
    {
        ipinaddrerrors.yfilter = yfilter;
    }
    if(value_path == "ipInDelivers")
    {
        ipindelivers.yfilter = yfilter;
    }
    if(value_path == "ipInDiscards")
    {
        ipindiscards.yfilter = yfilter;
    }
    if(value_path == "ipInHdrErrors")
    {
        ipinhdrerrors.yfilter = yfilter;
    }
    if(value_path == "ipInReceives")
    {
        ipinreceives.yfilter = yfilter;
    }
    if(value_path == "ipInUnknownProtos")
    {
        ipinunknownprotos.yfilter = yfilter;
    }
    if(value_path == "ipOutDiscards")
    {
        ipoutdiscards.yfilter = yfilter;
    }
    if(value_path == "ipOutNoRoutes")
    {
        ipoutnoroutes.yfilter = yfilter;
    }
    if(value_path == "ipOutRequests")
    {
        ipoutrequests.yfilter = yfilter;
    }
    if(value_path == "ipReasmFails")
    {
        ipreasmfails.yfilter = yfilter;
    }
    if(value_path == "ipReasmOKs")
    {
        ipreasmoks.yfilter = yfilter;
    }
    if(value_path == "ipReasmReqds")
    {
        ipreasmreqds.yfilter = yfilter;
    }
    if(value_path == "ipReasmTimeout")
    {
        ipreasmtimeout.yfilter = yfilter;
    }
    if(value_path == "ipRoutingDiscards")
    {
        iproutingdiscards.yfilter = yfilter;
    }
    if(value_path == "ipv4InterfaceTableLastChange")
    {
        ipv4interfacetablelastchange.yfilter = yfilter;
    }
    if(value_path == "ipv6InterfaceTableLastChange")
    {
        ipv6interfacetablelastchange.yfilter = yfilter;
    }
    if(value_path == "ipv6IpDefaultHopLimit")
    {
        ipv6ipdefaulthoplimit.yfilter = yfilter;
    }
    if(value_path == "ipv6IpForwarding")
    {
        ipv6ipforwarding.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertSpinLock")
    {
        ipv6routeradvertspinlock.yfilter = yfilter;
    }
}

bool IPMIB::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddressSpinLock" || name == "ipDefaultTTL" || name == "ipForwarding" || name == "ipForwDatagrams" || name == "ipFragCreates" || name == "ipFragFails" || name == "ipFragOKs" || name == "ipInAddrErrors" || name == "ipInDelivers" || name == "ipInDiscards" || name == "ipInHdrErrors" || name == "ipInReceives" || name == "ipInUnknownProtos" || name == "ipOutDiscards" || name == "ipOutNoRoutes" || name == "ipOutRequests" || name == "ipReasmFails" || name == "ipReasmOKs" || name == "ipReasmReqds" || name == "ipReasmTimeout" || name == "ipRoutingDiscards" || name == "ipv4InterfaceTableLastChange" || name == "ipv6InterfaceTableLastChange" || name == "ipv6IpDefaultHopLimit" || name == "ipv6IpForwarding" || name == "ipv6RouterAdvertSpinLock")
        return true;
    return false;
}

IPMIB::Ipaddressprefixtable::Ipaddressprefixtable()
{

    yang_name = "ipAddressPrefixTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipaddressprefixtable::~Ipaddressprefixtable()
{
}

bool IPMIB::Ipaddressprefixtable::has_data() const
{
    for (std::size_t index=0; index<ipaddressprefixentry.size(); index++)
    {
        if(ipaddressprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipaddressprefixtable::has_operation() const
{
    for (std::size_t index=0; index<ipaddressprefixentry.size(); index++)
    {
        if(ipaddressprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipaddressprefixtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipaddressprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipaddressprefixtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipaddressprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipAddressPrefixEntry")
    {
        for(auto const & c : ipaddressprefixentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipaddressprefixtable::Ipaddressprefixentry>();
        c->parent = this;
        ipaddressprefixentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipaddressprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddressprefixentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipaddressprefixtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipaddressprefixtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipaddressprefixtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddressPrefixEntry")
        return true;
    return false;
}

IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::Ipaddressprefixentry()
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

    yang_name = "ipAddressPrefixEntry"; yang_parent_name = "ipAddressPrefixTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::~Ipaddressprefixentry()
{
}

bool IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::has_data() const
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

bool IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddressprefixifindex.yfilter)
	|| ydk::is_set(ipaddressprefixtype.yfilter)
	|| ydk::is_set(ipaddressprefixprefix.yfilter)
	|| ydk::is_set(ipaddressprefixlength.yfilter)
	|| ydk::is_set(ipaddressprefixadvpreferredlifetime.yfilter)
	|| ydk::is_set(ipaddressprefixadvvalidlifetime.yfilter)
	|| ydk::is_set(ipaddressprefixautonomousflag.yfilter)
	|| ydk::is_set(ipaddressprefixonlinkflag.yfilter)
	|| ydk::is_set(ipaddressprefixorigin.yfilter);
}

std::string IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipAddressPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressPrefixEntry" <<"[ipAddressPrefixIfIndex='" <<ipaddressprefixifindex <<"']" <<"[ipAddressPrefixType='" <<ipaddressprefixtype <<"']" <<"[ipAddressPrefixPrefix='" <<ipaddressprefixprefix <<"']" <<"[ipAddressPrefixLength='" <<ipaddressprefixlength <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddressprefixifindex.is_set || is_set(ipaddressprefixifindex.yfilter)) leaf_name_data.push_back(ipaddressprefixifindex.get_name_leafdata());
    if (ipaddressprefixtype.is_set || is_set(ipaddressprefixtype.yfilter)) leaf_name_data.push_back(ipaddressprefixtype.get_name_leafdata());
    if (ipaddressprefixprefix.is_set || is_set(ipaddressprefixprefix.yfilter)) leaf_name_data.push_back(ipaddressprefixprefix.get_name_leafdata());
    if (ipaddressprefixlength.is_set || is_set(ipaddressprefixlength.yfilter)) leaf_name_data.push_back(ipaddressprefixlength.get_name_leafdata());
    if (ipaddressprefixadvpreferredlifetime.is_set || is_set(ipaddressprefixadvpreferredlifetime.yfilter)) leaf_name_data.push_back(ipaddressprefixadvpreferredlifetime.get_name_leafdata());
    if (ipaddressprefixadvvalidlifetime.is_set || is_set(ipaddressprefixadvvalidlifetime.yfilter)) leaf_name_data.push_back(ipaddressprefixadvvalidlifetime.get_name_leafdata());
    if (ipaddressprefixautonomousflag.is_set || is_set(ipaddressprefixautonomousflag.yfilter)) leaf_name_data.push_back(ipaddressprefixautonomousflag.get_name_leafdata());
    if (ipaddressprefixonlinkflag.is_set || is_set(ipaddressprefixonlinkflag.yfilter)) leaf_name_data.push_back(ipaddressprefixonlinkflag.get_name_leafdata());
    if (ipaddressprefixorigin.is_set || is_set(ipaddressprefixorigin.yfilter)) leaf_name_data.push_back(ipaddressprefixorigin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAddressPrefixIfIndex")
    {
        ipaddressprefixifindex = value;
        ipaddressprefixifindex.value_namespace = name_space;
        ipaddressprefixifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixType")
    {
        ipaddressprefixtype = value;
        ipaddressprefixtype.value_namespace = name_space;
        ipaddressprefixtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixPrefix")
    {
        ipaddressprefixprefix = value;
        ipaddressprefixprefix.value_namespace = name_space;
        ipaddressprefixprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixLength")
    {
        ipaddressprefixlength = value;
        ipaddressprefixlength.value_namespace = name_space;
        ipaddressprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixAdvPreferredLifetime")
    {
        ipaddressprefixadvpreferredlifetime = value;
        ipaddressprefixadvpreferredlifetime.value_namespace = name_space;
        ipaddressprefixadvpreferredlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixAdvValidLifetime")
    {
        ipaddressprefixadvvalidlifetime = value;
        ipaddressprefixadvvalidlifetime.value_namespace = name_space;
        ipaddressprefixadvvalidlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixAutonomousFlag")
    {
        ipaddressprefixautonomousflag = value;
        ipaddressprefixautonomousflag.value_namespace = name_space;
        ipaddressprefixautonomousflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixOnLinkFlag")
    {
        ipaddressprefixonlinkflag = value;
        ipaddressprefixonlinkflag.value_namespace = name_space;
        ipaddressprefixonlinkflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefixOrigin")
    {
        ipaddressprefixorigin = value;
        ipaddressprefixorigin.value_namespace = name_space;
        ipaddressprefixorigin.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAddressPrefixIfIndex")
    {
        ipaddressprefixifindex.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixType")
    {
        ipaddressprefixtype.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixPrefix")
    {
        ipaddressprefixprefix.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixLength")
    {
        ipaddressprefixlength.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixAdvPreferredLifetime")
    {
        ipaddressprefixadvpreferredlifetime.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixAdvValidLifetime")
    {
        ipaddressprefixadvvalidlifetime.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixAutonomousFlag")
    {
        ipaddressprefixautonomousflag.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixOnLinkFlag")
    {
        ipaddressprefixonlinkflag.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefixOrigin")
    {
        ipaddressprefixorigin.yfilter = yfilter;
    }
}

bool IPMIB::Ipaddressprefixtable::Ipaddressprefixentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddressPrefixIfIndex" || name == "ipAddressPrefixType" || name == "ipAddressPrefixPrefix" || name == "ipAddressPrefixLength" || name == "ipAddressPrefixAdvPreferredLifetime" || name == "ipAddressPrefixAdvValidLifetime" || name == "ipAddressPrefixAutonomousFlag" || name == "ipAddressPrefixOnLinkFlag" || name == "ipAddressPrefixOrigin")
        return true;
    return false;
}

IPMIB::Ipaddresstable::Ipaddresstable()
{

    yang_name = "ipAddressTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipaddresstable::~Ipaddresstable()
{
}

bool IPMIB::Ipaddresstable::has_data() const
{
    for (std::size_t index=0; index<ipaddressentry.size(); index++)
    {
        if(ipaddressentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipaddresstable::has_operation() const
{
    for (std::size_t index=0; index<ipaddressentry.size(); index++)
    {
        if(ipaddressentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipaddresstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipaddresstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipaddresstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipaddresstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipAddressEntry")
    {
        for(auto const & c : ipaddressentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipaddresstable::Ipaddressentry>();
        c->parent = this;
        ipaddressentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipaddresstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddressentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipaddresstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipaddresstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipaddresstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddressEntry")
        return true;
    return false;
}

IPMIB::Ipaddresstable::Ipaddressentry::Ipaddressentry()
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

    yang_name = "ipAddressEntry"; yang_parent_name = "ipAddressTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipaddresstable::Ipaddressentry::~Ipaddressentry()
{
}

bool IPMIB::Ipaddresstable::Ipaddressentry::has_data() const
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

bool IPMIB::Ipaddresstable::Ipaddressentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddressaddrtype.yfilter)
	|| ydk::is_set(ipaddressaddr.yfilter)
	|| ydk::is_set(ipaddresscreated.yfilter)
	|| ydk::is_set(ipaddressifindex.yfilter)
	|| ydk::is_set(ipaddresslastchanged.yfilter)
	|| ydk::is_set(ipaddressorigin.yfilter)
	|| ydk::is_set(ipaddressprefix.yfilter)
	|| ydk::is_set(ipaddressrowstatus.yfilter)
	|| ydk::is_set(ipaddressstatus.yfilter)
	|| ydk::is_set(ipaddressstoragetype.yfilter)
	|| ydk::is_set(ipaddresstype.yfilter);
}

std::string IPMIB::Ipaddresstable::Ipaddressentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipAddressTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipaddresstable::Ipaddressentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddressEntry" <<"[ipAddressAddrType='" <<ipaddressaddrtype <<"']" <<"[ipAddressAddr='" <<ipaddressaddr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipaddresstable::Ipaddressentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddressaddrtype.is_set || is_set(ipaddressaddrtype.yfilter)) leaf_name_data.push_back(ipaddressaddrtype.get_name_leafdata());
    if (ipaddressaddr.is_set || is_set(ipaddressaddr.yfilter)) leaf_name_data.push_back(ipaddressaddr.get_name_leafdata());
    if (ipaddresscreated.is_set || is_set(ipaddresscreated.yfilter)) leaf_name_data.push_back(ipaddresscreated.get_name_leafdata());
    if (ipaddressifindex.is_set || is_set(ipaddressifindex.yfilter)) leaf_name_data.push_back(ipaddressifindex.get_name_leafdata());
    if (ipaddresslastchanged.is_set || is_set(ipaddresslastchanged.yfilter)) leaf_name_data.push_back(ipaddresslastchanged.get_name_leafdata());
    if (ipaddressorigin.is_set || is_set(ipaddressorigin.yfilter)) leaf_name_data.push_back(ipaddressorigin.get_name_leafdata());
    if (ipaddressprefix.is_set || is_set(ipaddressprefix.yfilter)) leaf_name_data.push_back(ipaddressprefix.get_name_leafdata());
    if (ipaddressrowstatus.is_set || is_set(ipaddressrowstatus.yfilter)) leaf_name_data.push_back(ipaddressrowstatus.get_name_leafdata());
    if (ipaddressstatus.is_set || is_set(ipaddressstatus.yfilter)) leaf_name_data.push_back(ipaddressstatus.get_name_leafdata());
    if (ipaddressstoragetype.is_set || is_set(ipaddressstoragetype.yfilter)) leaf_name_data.push_back(ipaddressstoragetype.get_name_leafdata());
    if (ipaddresstype.is_set || is_set(ipaddresstype.yfilter)) leaf_name_data.push_back(ipaddresstype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipaddresstable::Ipaddressentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipaddresstable::Ipaddressentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipaddresstable::Ipaddressentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAddressAddrType")
    {
        ipaddressaddrtype = value;
        ipaddressaddrtype.value_namespace = name_space;
        ipaddressaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressAddr")
    {
        ipaddressaddr = value;
        ipaddressaddr.value_namespace = name_space;
        ipaddressaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressCreated")
    {
        ipaddresscreated = value;
        ipaddresscreated.value_namespace = name_space;
        ipaddresscreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressIfIndex")
    {
        ipaddressifindex = value;
        ipaddressifindex.value_namespace = name_space;
        ipaddressifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressLastChanged")
    {
        ipaddresslastchanged = value;
        ipaddresslastchanged.value_namespace = name_space;
        ipaddresslastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressOrigin")
    {
        ipaddressorigin = value;
        ipaddressorigin.value_namespace = name_space;
        ipaddressorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressPrefix")
    {
        ipaddressprefix = value;
        ipaddressprefix.value_namespace = name_space;
        ipaddressprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressRowStatus")
    {
        ipaddressrowstatus = value;
        ipaddressrowstatus.value_namespace = name_space;
        ipaddressrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressStatus")
    {
        ipaddressstatus = value;
        ipaddressstatus.value_namespace = name_space;
        ipaddressstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressStorageType")
    {
        ipaddressstoragetype = value;
        ipaddressstoragetype.value_namespace = name_space;
        ipaddressstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddressType")
    {
        ipaddresstype = value;
        ipaddresstype.value_namespace = name_space;
        ipaddresstype.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipaddresstable::Ipaddressentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAddressAddrType")
    {
        ipaddressaddrtype.yfilter = yfilter;
    }
    if(value_path == "ipAddressAddr")
    {
        ipaddressaddr.yfilter = yfilter;
    }
    if(value_path == "ipAddressCreated")
    {
        ipaddresscreated.yfilter = yfilter;
    }
    if(value_path == "ipAddressIfIndex")
    {
        ipaddressifindex.yfilter = yfilter;
    }
    if(value_path == "ipAddressLastChanged")
    {
        ipaddresslastchanged.yfilter = yfilter;
    }
    if(value_path == "ipAddressOrigin")
    {
        ipaddressorigin.yfilter = yfilter;
    }
    if(value_path == "ipAddressPrefix")
    {
        ipaddressprefix.yfilter = yfilter;
    }
    if(value_path == "ipAddressRowStatus")
    {
        ipaddressrowstatus.yfilter = yfilter;
    }
    if(value_path == "ipAddressStatus")
    {
        ipaddressstatus.yfilter = yfilter;
    }
    if(value_path == "ipAddressStorageType")
    {
        ipaddressstoragetype.yfilter = yfilter;
    }
    if(value_path == "ipAddressType")
    {
        ipaddresstype.yfilter = yfilter;
    }
}

bool IPMIB::Ipaddresstable::Ipaddressentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddressAddrType" || name == "ipAddressAddr" || name == "ipAddressCreated" || name == "ipAddressIfIndex" || name == "ipAddressLastChanged" || name == "ipAddressOrigin" || name == "ipAddressPrefix" || name == "ipAddressRowStatus" || name == "ipAddressStatus" || name == "ipAddressStorageType" || name == "ipAddressType")
        return true;
    return false;
}

IPMIB::Ipaddrtable::Ipaddrtable()
{

    yang_name = "ipAddrTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipaddrtable::~Ipaddrtable()
{
}

bool IPMIB::Ipaddrtable::has_data() const
{
    for (std::size_t index=0; index<ipaddrentry.size(); index++)
    {
        if(ipaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ipaddrentry.size(); index++)
    {
        if(ipaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipaddrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipaddrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<IPMIB::Ipaddrtable::Ipaddrentry>();
        c->parent = this;
        ipaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddrEntry")
        return true;
    return false;
}

IPMIB::Ipaddrtable::Ipaddrentry::Ipaddrentry()
    :
    ipadentaddr{YType::str, "ipAdEntAddr"},
    ipadentbcastaddr{YType::int32, "ipAdEntBcastAddr"},
    ipadentifindex{YType::int32, "ipAdEntIfIndex"},
    ipadentnetmask{YType::str, "ipAdEntNetMask"},
    ipadentreasmmaxsize{YType::int32, "ipAdEntReasmMaxSize"}
{

    yang_name = "ipAddrEntry"; yang_parent_name = "ipAddrTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipaddrtable::Ipaddrentry::~Ipaddrentry()
{
}

bool IPMIB::Ipaddrtable::Ipaddrentry::has_data() const
{
    return ipadentaddr.is_set
	|| ipadentbcastaddr.is_set
	|| ipadentifindex.is_set
	|| ipadentnetmask.is_set
	|| ipadentreasmmaxsize.is_set;
}

bool IPMIB::Ipaddrtable::Ipaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipadentaddr.yfilter)
	|| ydk::is_set(ipadentbcastaddr.yfilter)
	|| ydk::is_set(ipadentifindex.yfilter)
	|| ydk::is_set(ipadentnetmask.yfilter)
	|| ydk::is_set(ipadentreasmmaxsize.yfilter);
}

std::string IPMIB::Ipaddrtable::Ipaddrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipaddrtable::Ipaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipAddrEntry" <<"[ipAdEntAddr='" <<ipadentaddr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipaddrtable::Ipaddrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipadentaddr.is_set || is_set(ipadentaddr.yfilter)) leaf_name_data.push_back(ipadentaddr.get_name_leafdata());
    if (ipadentbcastaddr.is_set || is_set(ipadentbcastaddr.yfilter)) leaf_name_data.push_back(ipadentbcastaddr.get_name_leafdata());
    if (ipadentifindex.is_set || is_set(ipadentifindex.yfilter)) leaf_name_data.push_back(ipadentifindex.get_name_leafdata());
    if (ipadentnetmask.is_set || is_set(ipadentnetmask.yfilter)) leaf_name_data.push_back(ipadentnetmask.get_name_leafdata());
    if (ipadentreasmmaxsize.is_set || is_set(ipadentreasmmaxsize.yfilter)) leaf_name_data.push_back(ipadentreasmmaxsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipaddrtable::Ipaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipaddrtable::Ipaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipaddrtable::Ipaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAdEntAddr")
    {
        ipadentaddr = value;
        ipadentaddr.value_namespace = name_space;
        ipadentaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAdEntBcastAddr")
    {
        ipadentbcastaddr = value;
        ipadentbcastaddr.value_namespace = name_space;
        ipadentbcastaddr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipAdEntReasmMaxSize")
    {
        ipadentreasmmaxsize = value;
        ipadentreasmmaxsize.value_namespace = name_space;
        ipadentreasmmaxsize.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipaddrtable::Ipaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAdEntAddr")
    {
        ipadentaddr.yfilter = yfilter;
    }
    if(value_path == "ipAdEntBcastAddr")
    {
        ipadentbcastaddr.yfilter = yfilter;
    }
    if(value_path == "ipAdEntIfIndex")
    {
        ipadentifindex.yfilter = yfilter;
    }
    if(value_path == "ipAdEntNetMask")
    {
        ipadentnetmask.yfilter = yfilter;
    }
    if(value_path == "ipAdEntReasmMaxSize")
    {
        ipadentreasmmaxsize.yfilter = yfilter;
    }
}

bool IPMIB::Ipaddrtable::Ipaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAdEntAddr" || name == "ipAdEntBcastAddr" || name == "ipAdEntIfIndex" || name == "ipAdEntNetMask" || name == "ipAdEntReasmMaxSize")
        return true;
    return false;
}

IPMIB::Ipdefaultroutertable::Ipdefaultroutertable()
{

    yang_name = "ipDefaultRouterTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipdefaultroutertable::~Ipdefaultroutertable()
{
}

bool IPMIB::Ipdefaultroutertable::has_data() const
{
    for (std::size_t index=0; index<ipdefaultrouterentry.size(); index++)
    {
        if(ipdefaultrouterentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipdefaultroutertable::has_operation() const
{
    for (std::size_t index=0; index<ipdefaultrouterentry.size(); index++)
    {
        if(ipdefaultrouterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipdefaultroutertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipdefaultroutertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipDefaultRouterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipdefaultroutertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipdefaultroutertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipDefaultRouterEntry")
    {
        for(auto const & c : ipdefaultrouterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry>();
        c->parent = this;
        ipdefaultrouterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipdefaultroutertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipdefaultrouterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipdefaultroutertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipdefaultroutertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipdefaultroutertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipDefaultRouterEntry")
        return true;
    return false;
}

IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::Ipdefaultrouterentry()
    :
    ipdefaultrouteraddresstype{YType::enumeration, "ipDefaultRouterAddressType"},
    ipdefaultrouteraddress{YType::str, "ipDefaultRouterAddress"},
    ipdefaultrouterifindex{YType::int32, "ipDefaultRouterIfIndex"},
    ipdefaultrouterlifetime{YType::uint32, "ipDefaultRouterLifetime"},
    ipdefaultrouterpreference{YType::enumeration, "ipDefaultRouterPreference"}
{

    yang_name = "ipDefaultRouterEntry"; yang_parent_name = "ipDefaultRouterTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::~Ipdefaultrouterentry()
{
}

bool IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::has_data() const
{
    return ipdefaultrouteraddresstype.is_set
	|| ipdefaultrouteraddress.is_set
	|| ipdefaultrouterifindex.is_set
	|| ipdefaultrouterlifetime.is_set
	|| ipdefaultrouterpreference.is_set;
}

bool IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipdefaultrouteraddresstype.yfilter)
	|| ydk::is_set(ipdefaultrouteraddress.yfilter)
	|| ydk::is_set(ipdefaultrouterifindex.yfilter)
	|| ydk::is_set(ipdefaultrouterlifetime.yfilter)
	|| ydk::is_set(ipdefaultrouterpreference.yfilter);
}

std::string IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipDefaultRouterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipDefaultRouterEntry" <<"[ipDefaultRouterAddressType='" <<ipdefaultrouteraddresstype <<"']" <<"[ipDefaultRouterAddress='" <<ipdefaultrouteraddress <<"']" <<"[ipDefaultRouterIfIndex='" <<ipdefaultrouterifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipdefaultrouteraddresstype.is_set || is_set(ipdefaultrouteraddresstype.yfilter)) leaf_name_data.push_back(ipdefaultrouteraddresstype.get_name_leafdata());
    if (ipdefaultrouteraddress.is_set || is_set(ipdefaultrouteraddress.yfilter)) leaf_name_data.push_back(ipdefaultrouteraddress.get_name_leafdata());
    if (ipdefaultrouterifindex.is_set || is_set(ipdefaultrouterifindex.yfilter)) leaf_name_data.push_back(ipdefaultrouterifindex.get_name_leafdata());
    if (ipdefaultrouterlifetime.is_set || is_set(ipdefaultrouterlifetime.yfilter)) leaf_name_data.push_back(ipdefaultrouterlifetime.get_name_leafdata());
    if (ipdefaultrouterpreference.is_set || is_set(ipdefaultrouterpreference.yfilter)) leaf_name_data.push_back(ipdefaultrouterpreference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipDefaultRouterAddressType")
    {
        ipdefaultrouteraddresstype = value;
        ipdefaultrouteraddresstype.value_namespace = name_space;
        ipdefaultrouteraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDefaultRouterAddress")
    {
        ipdefaultrouteraddress = value;
        ipdefaultrouteraddress.value_namespace = name_space;
        ipdefaultrouteraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDefaultRouterIfIndex")
    {
        ipdefaultrouterifindex = value;
        ipdefaultrouterifindex.value_namespace = name_space;
        ipdefaultrouterifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDefaultRouterLifetime")
    {
        ipdefaultrouterlifetime = value;
        ipdefaultrouterlifetime.value_namespace = name_space;
        ipdefaultrouterlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDefaultRouterPreference")
    {
        ipdefaultrouterpreference = value;
        ipdefaultrouterpreference.value_namespace = name_space;
        ipdefaultrouterpreference.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipDefaultRouterAddressType")
    {
        ipdefaultrouteraddresstype.yfilter = yfilter;
    }
    if(value_path == "ipDefaultRouterAddress")
    {
        ipdefaultrouteraddress.yfilter = yfilter;
    }
    if(value_path == "ipDefaultRouterIfIndex")
    {
        ipdefaultrouterifindex.yfilter = yfilter;
    }
    if(value_path == "ipDefaultRouterLifetime")
    {
        ipdefaultrouterlifetime.yfilter = yfilter;
    }
    if(value_path == "ipDefaultRouterPreference")
    {
        ipdefaultrouterpreference.yfilter = yfilter;
    }
}

bool IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipDefaultRouterAddressType" || name == "ipDefaultRouterAddress" || name == "ipDefaultRouterIfIndex" || name == "ipDefaultRouterLifetime" || name == "ipDefaultRouterPreference")
        return true;
    return false;
}

IPMIB::Ipifstatstable::Ipifstatstable()
{

    yang_name = "ipIfStatsTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipifstatstable::~Ipifstatstable()
{
}

bool IPMIB::Ipifstatstable::has_data() const
{
    for (std::size_t index=0; index<ipifstatsentry.size(); index++)
    {
        if(ipifstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipifstatstable::has_operation() const
{
    for (std::size_t index=0; index<ipifstatsentry.size(); index++)
    {
        if(ipifstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipifstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipifstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipIfStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipifstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipifstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipIfStatsEntry")
    {
        for(auto const & c : ipifstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipifstatstable::Ipifstatsentry>();
        c->parent = this;
        ipifstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipifstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipifstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipifstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipifstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipifstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipIfStatsEntry")
        return true;
    return false;
}

IPMIB::Ipifstatstable::Ipifstatsentry::Ipifstatsentry()
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

    yang_name = "ipIfStatsEntry"; yang_parent_name = "ipIfStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipifstatstable::Ipifstatsentry::~Ipifstatsentry()
{
}

bool IPMIB::Ipifstatstable::Ipifstatsentry::has_data() const
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

bool IPMIB::Ipifstatstable::Ipifstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipifstatsipversion.yfilter)
	|| ydk::is_set(ipifstatsifindex.yfilter)
	|| ydk::is_set(ipifstatsdiscontinuitytime.yfilter)
	|| ydk::is_set(ipifstatshcinbcastpkts.yfilter)
	|| ydk::is_set(ipifstatshcindelivers.yfilter)
	|| ydk::is_set(ipifstatshcinforwdatagrams.yfilter)
	|| ydk::is_set(ipifstatshcinmcastoctets.yfilter)
	|| ydk::is_set(ipifstatshcinmcastpkts.yfilter)
	|| ydk::is_set(ipifstatshcinoctets.yfilter)
	|| ydk::is_set(ipifstatshcinreceives.yfilter)
	|| ydk::is_set(ipifstatshcoutbcastpkts.yfilter)
	|| ydk::is_set(ipifstatshcoutforwdatagrams.yfilter)
	|| ydk::is_set(ipifstatshcoutmcastoctets.yfilter)
	|| ydk::is_set(ipifstatshcoutmcastpkts.yfilter)
	|| ydk::is_set(ipifstatshcoutoctets.yfilter)
	|| ydk::is_set(ipifstatshcoutrequests.yfilter)
	|| ydk::is_set(ipifstatshcouttransmits.yfilter)
	|| ydk::is_set(ipifstatsinaddrerrors.yfilter)
	|| ydk::is_set(ipifstatsinbcastpkts.yfilter)
	|| ydk::is_set(ipifstatsindelivers.yfilter)
	|| ydk::is_set(ipifstatsindiscards.yfilter)
	|| ydk::is_set(ipifstatsinforwdatagrams.yfilter)
	|| ydk::is_set(ipifstatsinhdrerrors.yfilter)
	|| ydk::is_set(ipifstatsinmcastoctets.yfilter)
	|| ydk::is_set(ipifstatsinmcastpkts.yfilter)
	|| ydk::is_set(ipifstatsinnoroutes.yfilter)
	|| ydk::is_set(ipifstatsinoctets.yfilter)
	|| ydk::is_set(ipifstatsinreceives.yfilter)
	|| ydk::is_set(ipifstatsintruncatedpkts.yfilter)
	|| ydk::is_set(ipifstatsinunknownprotos.yfilter)
	|| ydk::is_set(ipifstatsoutbcastpkts.yfilter)
	|| ydk::is_set(ipifstatsoutdiscards.yfilter)
	|| ydk::is_set(ipifstatsoutforwdatagrams.yfilter)
	|| ydk::is_set(ipifstatsoutfragcreates.yfilter)
	|| ydk::is_set(ipifstatsoutfragfails.yfilter)
	|| ydk::is_set(ipifstatsoutfragoks.yfilter)
	|| ydk::is_set(ipifstatsoutfragreqds.yfilter)
	|| ydk::is_set(ipifstatsoutmcastoctets.yfilter)
	|| ydk::is_set(ipifstatsoutmcastpkts.yfilter)
	|| ydk::is_set(ipifstatsoutoctets.yfilter)
	|| ydk::is_set(ipifstatsoutrequests.yfilter)
	|| ydk::is_set(ipifstatsouttransmits.yfilter)
	|| ydk::is_set(ipifstatsreasmfails.yfilter)
	|| ydk::is_set(ipifstatsreasmoks.yfilter)
	|| ydk::is_set(ipifstatsreasmreqds.yfilter)
	|| ydk::is_set(ipifstatsrefreshrate.yfilter);
}

std::string IPMIB::Ipifstatstable::Ipifstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipIfStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipifstatstable::Ipifstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipIfStatsEntry" <<"[ipIfStatsIPVersion='" <<ipifstatsipversion <<"']" <<"[ipIfStatsIfIndex='" <<ipifstatsifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipifstatstable::Ipifstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipifstatsipversion.is_set || is_set(ipifstatsipversion.yfilter)) leaf_name_data.push_back(ipifstatsipversion.get_name_leafdata());
    if (ipifstatsifindex.is_set || is_set(ipifstatsifindex.yfilter)) leaf_name_data.push_back(ipifstatsifindex.get_name_leafdata());
    if (ipifstatsdiscontinuitytime.is_set || is_set(ipifstatsdiscontinuitytime.yfilter)) leaf_name_data.push_back(ipifstatsdiscontinuitytime.get_name_leafdata());
    if (ipifstatshcinbcastpkts.is_set || is_set(ipifstatshcinbcastpkts.yfilter)) leaf_name_data.push_back(ipifstatshcinbcastpkts.get_name_leafdata());
    if (ipifstatshcindelivers.is_set || is_set(ipifstatshcindelivers.yfilter)) leaf_name_data.push_back(ipifstatshcindelivers.get_name_leafdata());
    if (ipifstatshcinforwdatagrams.is_set || is_set(ipifstatshcinforwdatagrams.yfilter)) leaf_name_data.push_back(ipifstatshcinforwdatagrams.get_name_leafdata());
    if (ipifstatshcinmcastoctets.is_set || is_set(ipifstatshcinmcastoctets.yfilter)) leaf_name_data.push_back(ipifstatshcinmcastoctets.get_name_leafdata());
    if (ipifstatshcinmcastpkts.is_set || is_set(ipifstatshcinmcastpkts.yfilter)) leaf_name_data.push_back(ipifstatshcinmcastpkts.get_name_leafdata());
    if (ipifstatshcinoctets.is_set || is_set(ipifstatshcinoctets.yfilter)) leaf_name_data.push_back(ipifstatshcinoctets.get_name_leafdata());
    if (ipifstatshcinreceives.is_set || is_set(ipifstatshcinreceives.yfilter)) leaf_name_data.push_back(ipifstatshcinreceives.get_name_leafdata());
    if (ipifstatshcoutbcastpkts.is_set || is_set(ipifstatshcoutbcastpkts.yfilter)) leaf_name_data.push_back(ipifstatshcoutbcastpkts.get_name_leafdata());
    if (ipifstatshcoutforwdatagrams.is_set || is_set(ipifstatshcoutforwdatagrams.yfilter)) leaf_name_data.push_back(ipifstatshcoutforwdatagrams.get_name_leafdata());
    if (ipifstatshcoutmcastoctets.is_set || is_set(ipifstatshcoutmcastoctets.yfilter)) leaf_name_data.push_back(ipifstatshcoutmcastoctets.get_name_leafdata());
    if (ipifstatshcoutmcastpkts.is_set || is_set(ipifstatshcoutmcastpkts.yfilter)) leaf_name_data.push_back(ipifstatshcoutmcastpkts.get_name_leafdata());
    if (ipifstatshcoutoctets.is_set || is_set(ipifstatshcoutoctets.yfilter)) leaf_name_data.push_back(ipifstatshcoutoctets.get_name_leafdata());
    if (ipifstatshcoutrequests.is_set || is_set(ipifstatshcoutrequests.yfilter)) leaf_name_data.push_back(ipifstatshcoutrequests.get_name_leafdata());
    if (ipifstatshcouttransmits.is_set || is_set(ipifstatshcouttransmits.yfilter)) leaf_name_data.push_back(ipifstatshcouttransmits.get_name_leafdata());
    if (ipifstatsinaddrerrors.is_set || is_set(ipifstatsinaddrerrors.yfilter)) leaf_name_data.push_back(ipifstatsinaddrerrors.get_name_leafdata());
    if (ipifstatsinbcastpkts.is_set || is_set(ipifstatsinbcastpkts.yfilter)) leaf_name_data.push_back(ipifstatsinbcastpkts.get_name_leafdata());
    if (ipifstatsindelivers.is_set || is_set(ipifstatsindelivers.yfilter)) leaf_name_data.push_back(ipifstatsindelivers.get_name_leafdata());
    if (ipifstatsindiscards.is_set || is_set(ipifstatsindiscards.yfilter)) leaf_name_data.push_back(ipifstatsindiscards.get_name_leafdata());
    if (ipifstatsinforwdatagrams.is_set || is_set(ipifstatsinforwdatagrams.yfilter)) leaf_name_data.push_back(ipifstatsinforwdatagrams.get_name_leafdata());
    if (ipifstatsinhdrerrors.is_set || is_set(ipifstatsinhdrerrors.yfilter)) leaf_name_data.push_back(ipifstatsinhdrerrors.get_name_leafdata());
    if (ipifstatsinmcastoctets.is_set || is_set(ipifstatsinmcastoctets.yfilter)) leaf_name_data.push_back(ipifstatsinmcastoctets.get_name_leafdata());
    if (ipifstatsinmcastpkts.is_set || is_set(ipifstatsinmcastpkts.yfilter)) leaf_name_data.push_back(ipifstatsinmcastpkts.get_name_leafdata());
    if (ipifstatsinnoroutes.is_set || is_set(ipifstatsinnoroutes.yfilter)) leaf_name_data.push_back(ipifstatsinnoroutes.get_name_leafdata());
    if (ipifstatsinoctets.is_set || is_set(ipifstatsinoctets.yfilter)) leaf_name_data.push_back(ipifstatsinoctets.get_name_leafdata());
    if (ipifstatsinreceives.is_set || is_set(ipifstatsinreceives.yfilter)) leaf_name_data.push_back(ipifstatsinreceives.get_name_leafdata());
    if (ipifstatsintruncatedpkts.is_set || is_set(ipifstatsintruncatedpkts.yfilter)) leaf_name_data.push_back(ipifstatsintruncatedpkts.get_name_leafdata());
    if (ipifstatsinunknownprotos.is_set || is_set(ipifstatsinunknownprotos.yfilter)) leaf_name_data.push_back(ipifstatsinunknownprotos.get_name_leafdata());
    if (ipifstatsoutbcastpkts.is_set || is_set(ipifstatsoutbcastpkts.yfilter)) leaf_name_data.push_back(ipifstatsoutbcastpkts.get_name_leafdata());
    if (ipifstatsoutdiscards.is_set || is_set(ipifstatsoutdiscards.yfilter)) leaf_name_data.push_back(ipifstatsoutdiscards.get_name_leafdata());
    if (ipifstatsoutforwdatagrams.is_set || is_set(ipifstatsoutforwdatagrams.yfilter)) leaf_name_data.push_back(ipifstatsoutforwdatagrams.get_name_leafdata());
    if (ipifstatsoutfragcreates.is_set || is_set(ipifstatsoutfragcreates.yfilter)) leaf_name_data.push_back(ipifstatsoutfragcreates.get_name_leafdata());
    if (ipifstatsoutfragfails.is_set || is_set(ipifstatsoutfragfails.yfilter)) leaf_name_data.push_back(ipifstatsoutfragfails.get_name_leafdata());
    if (ipifstatsoutfragoks.is_set || is_set(ipifstatsoutfragoks.yfilter)) leaf_name_data.push_back(ipifstatsoutfragoks.get_name_leafdata());
    if (ipifstatsoutfragreqds.is_set || is_set(ipifstatsoutfragreqds.yfilter)) leaf_name_data.push_back(ipifstatsoutfragreqds.get_name_leafdata());
    if (ipifstatsoutmcastoctets.is_set || is_set(ipifstatsoutmcastoctets.yfilter)) leaf_name_data.push_back(ipifstatsoutmcastoctets.get_name_leafdata());
    if (ipifstatsoutmcastpkts.is_set || is_set(ipifstatsoutmcastpkts.yfilter)) leaf_name_data.push_back(ipifstatsoutmcastpkts.get_name_leafdata());
    if (ipifstatsoutoctets.is_set || is_set(ipifstatsoutoctets.yfilter)) leaf_name_data.push_back(ipifstatsoutoctets.get_name_leafdata());
    if (ipifstatsoutrequests.is_set || is_set(ipifstatsoutrequests.yfilter)) leaf_name_data.push_back(ipifstatsoutrequests.get_name_leafdata());
    if (ipifstatsouttransmits.is_set || is_set(ipifstatsouttransmits.yfilter)) leaf_name_data.push_back(ipifstatsouttransmits.get_name_leafdata());
    if (ipifstatsreasmfails.is_set || is_set(ipifstatsreasmfails.yfilter)) leaf_name_data.push_back(ipifstatsreasmfails.get_name_leafdata());
    if (ipifstatsreasmoks.is_set || is_set(ipifstatsreasmoks.yfilter)) leaf_name_data.push_back(ipifstatsreasmoks.get_name_leafdata());
    if (ipifstatsreasmreqds.is_set || is_set(ipifstatsreasmreqds.yfilter)) leaf_name_data.push_back(ipifstatsreasmreqds.get_name_leafdata());
    if (ipifstatsrefreshrate.is_set || is_set(ipifstatsrefreshrate.yfilter)) leaf_name_data.push_back(ipifstatsrefreshrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipifstatstable::Ipifstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipifstatstable::Ipifstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipifstatstable::Ipifstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipIfStatsIPVersion")
    {
        ipifstatsipversion = value;
        ipifstatsipversion.value_namespace = name_space;
        ipifstatsipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsIfIndex")
    {
        ipifstatsifindex = value;
        ipifstatsifindex.value_namespace = name_space;
        ipifstatsifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsDiscontinuityTime")
    {
        ipifstatsdiscontinuitytime = value;
        ipifstatsdiscontinuitytime.value_namespace = name_space;
        ipifstatsdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCInBcastPkts")
    {
        ipifstatshcinbcastpkts = value;
        ipifstatshcinbcastpkts.value_namespace = name_space;
        ipifstatshcinbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCInDelivers")
    {
        ipifstatshcindelivers = value;
        ipifstatshcindelivers.value_namespace = name_space;
        ipifstatshcindelivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCInForwDatagrams")
    {
        ipifstatshcinforwdatagrams = value;
        ipifstatshcinforwdatagrams.value_namespace = name_space;
        ipifstatshcinforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCInMcastOctets")
    {
        ipifstatshcinmcastoctets = value;
        ipifstatshcinmcastoctets.value_namespace = name_space;
        ipifstatshcinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCInMcastPkts")
    {
        ipifstatshcinmcastpkts = value;
        ipifstatshcinmcastpkts.value_namespace = name_space;
        ipifstatshcinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCInOctets")
    {
        ipifstatshcinoctets = value;
        ipifstatshcinoctets.value_namespace = name_space;
        ipifstatshcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCInReceives")
    {
        ipifstatshcinreceives = value;
        ipifstatshcinreceives.value_namespace = name_space;
        ipifstatshcinreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCOutBcastPkts")
    {
        ipifstatshcoutbcastpkts = value;
        ipifstatshcoutbcastpkts.value_namespace = name_space;
        ipifstatshcoutbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCOutForwDatagrams")
    {
        ipifstatshcoutforwdatagrams = value;
        ipifstatshcoutforwdatagrams.value_namespace = name_space;
        ipifstatshcoutforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCOutMcastOctets")
    {
        ipifstatshcoutmcastoctets = value;
        ipifstatshcoutmcastoctets.value_namespace = name_space;
        ipifstatshcoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCOutMcastPkts")
    {
        ipifstatshcoutmcastpkts = value;
        ipifstatshcoutmcastpkts.value_namespace = name_space;
        ipifstatshcoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCOutOctets")
    {
        ipifstatshcoutoctets = value;
        ipifstatshcoutoctets.value_namespace = name_space;
        ipifstatshcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCOutRequests")
    {
        ipifstatshcoutrequests = value;
        ipifstatshcoutrequests.value_namespace = name_space;
        ipifstatshcoutrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsHCOutTransmits")
    {
        ipifstatshcouttransmits = value;
        ipifstatshcouttransmits.value_namespace = name_space;
        ipifstatshcouttransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInAddrErrors")
    {
        ipifstatsinaddrerrors = value;
        ipifstatsinaddrerrors.value_namespace = name_space;
        ipifstatsinaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInBcastPkts")
    {
        ipifstatsinbcastpkts = value;
        ipifstatsinbcastpkts.value_namespace = name_space;
        ipifstatsinbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInDelivers")
    {
        ipifstatsindelivers = value;
        ipifstatsindelivers.value_namespace = name_space;
        ipifstatsindelivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInDiscards")
    {
        ipifstatsindiscards = value;
        ipifstatsindiscards.value_namespace = name_space;
        ipifstatsindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInForwDatagrams")
    {
        ipifstatsinforwdatagrams = value;
        ipifstatsinforwdatagrams.value_namespace = name_space;
        ipifstatsinforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInHdrErrors")
    {
        ipifstatsinhdrerrors = value;
        ipifstatsinhdrerrors.value_namespace = name_space;
        ipifstatsinhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInMcastOctets")
    {
        ipifstatsinmcastoctets = value;
        ipifstatsinmcastoctets.value_namespace = name_space;
        ipifstatsinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInMcastPkts")
    {
        ipifstatsinmcastpkts = value;
        ipifstatsinmcastpkts.value_namespace = name_space;
        ipifstatsinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInNoRoutes")
    {
        ipifstatsinnoroutes = value;
        ipifstatsinnoroutes.value_namespace = name_space;
        ipifstatsinnoroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInOctets")
    {
        ipifstatsinoctets = value;
        ipifstatsinoctets.value_namespace = name_space;
        ipifstatsinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInReceives")
    {
        ipifstatsinreceives = value;
        ipifstatsinreceives.value_namespace = name_space;
        ipifstatsinreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInTruncatedPkts")
    {
        ipifstatsintruncatedpkts = value;
        ipifstatsintruncatedpkts.value_namespace = name_space;
        ipifstatsintruncatedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsInUnknownProtos")
    {
        ipifstatsinunknownprotos = value;
        ipifstatsinunknownprotos.value_namespace = name_space;
        ipifstatsinunknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutBcastPkts")
    {
        ipifstatsoutbcastpkts = value;
        ipifstatsoutbcastpkts.value_namespace = name_space;
        ipifstatsoutbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutDiscards")
    {
        ipifstatsoutdiscards = value;
        ipifstatsoutdiscards.value_namespace = name_space;
        ipifstatsoutdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutForwDatagrams")
    {
        ipifstatsoutforwdatagrams = value;
        ipifstatsoutforwdatagrams.value_namespace = name_space;
        ipifstatsoutforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutFragCreates")
    {
        ipifstatsoutfragcreates = value;
        ipifstatsoutfragcreates.value_namespace = name_space;
        ipifstatsoutfragcreates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutFragFails")
    {
        ipifstatsoutfragfails = value;
        ipifstatsoutfragfails.value_namespace = name_space;
        ipifstatsoutfragfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutFragOKs")
    {
        ipifstatsoutfragoks = value;
        ipifstatsoutfragoks.value_namespace = name_space;
        ipifstatsoutfragoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutFragReqds")
    {
        ipifstatsoutfragreqds = value;
        ipifstatsoutfragreqds.value_namespace = name_space;
        ipifstatsoutfragreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutMcastOctets")
    {
        ipifstatsoutmcastoctets = value;
        ipifstatsoutmcastoctets.value_namespace = name_space;
        ipifstatsoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutMcastPkts")
    {
        ipifstatsoutmcastpkts = value;
        ipifstatsoutmcastpkts.value_namespace = name_space;
        ipifstatsoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutOctets")
    {
        ipifstatsoutoctets = value;
        ipifstatsoutoctets.value_namespace = name_space;
        ipifstatsoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutRequests")
    {
        ipifstatsoutrequests = value;
        ipifstatsoutrequests.value_namespace = name_space;
        ipifstatsoutrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsOutTransmits")
    {
        ipifstatsouttransmits = value;
        ipifstatsouttransmits.value_namespace = name_space;
        ipifstatsouttransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsReasmFails")
    {
        ipifstatsreasmfails = value;
        ipifstatsreasmfails.value_namespace = name_space;
        ipifstatsreasmfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsReasmOKs")
    {
        ipifstatsreasmoks = value;
        ipifstatsreasmoks.value_namespace = name_space;
        ipifstatsreasmoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsReasmReqds")
    {
        ipifstatsreasmreqds = value;
        ipifstatsreasmreqds.value_namespace = name_space;
        ipifstatsreasmreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIfStatsRefreshRate")
    {
        ipifstatsrefreshrate = value;
        ipifstatsrefreshrate.value_namespace = name_space;
        ipifstatsrefreshrate.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipifstatstable::Ipifstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipIfStatsIPVersion")
    {
        ipifstatsipversion.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsIfIndex")
    {
        ipifstatsifindex.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsDiscontinuityTime")
    {
        ipifstatsdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCInBcastPkts")
    {
        ipifstatshcinbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCInDelivers")
    {
        ipifstatshcindelivers.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCInForwDatagrams")
    {
        ipifstatshcinforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCInMcastOctets")
    {
        ipifstatshcinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCInMcastPkts")
    {
        ipifstatshcinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCInOctets")
    {
        ipifstatshcinoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCInReceives")
    {
        ipifstatshcinreceives.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCOutBcastPkts")
    {
        ipifstatshcoutbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCOutForwDatagrams")
    {
        ipifstatshcoutforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCOutMcastOctets")
    {
        ipifstatshcoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCOutMcastPkts")
    {
        ipifstatshcoutmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCOutOctets")
    {
        ipifstatshcoutoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCOutRequests")
    {
        ipifstatshcoutrequests.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsHCOutTransmits")
    {
        ipifstatshcouttransmits.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInAddrErrors")
    {
        ipifstatsinaddrerrors.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInBcastPkts")
    {
        ipifstatsinbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInDelivers")
    {
        ipifstatsindelivers.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInDiscards")
    {
        ipifstatsindiscards.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInForwDatagrams")
    {
        ipifstatsinforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInHdrErrors")
    {
        ipifstatsinhdrerrors.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInMcastOctets")
    {
        ipifstatsinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInMcastPkts")
    {
        ipifstatsinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInNoRoutes")
    {
        ipifstatsinnoroutes.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInOctets")
    {
        ipifstatsinoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInReceives")
    {
        ipifstatsinreceives.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInTruncatedPkts")
    {
        ipifstatsintruncatedpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsInUnknownProtos")
    {
        ipifstatsinunknownprotos.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutBcastPkts")
    {
        ipifstatsoutbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutDiscards")
    {
        ipifstatsoutdiscards.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutForwDatagrams")
    {
        ipifstatsoutforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutFragCreates")
    {
        ipifstatsoutfragcreates.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutFragFails")
    {
        ipifstatsoutfragfails.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutFragOKs")
    {
        ipifstatsoutfragoks.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutFragReqds")
    {
        ipifstatsoutfragreqds.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutMcastOctets")
    {
        ipifstatsoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutMcastPkts")
    {
        ipifstatsoutmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutOctets")
    {
        ipifstatsoutoctets.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutRequests")
    {
        ipifstatsoutrequests.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsOutTransmits")
    {
        ipifstatsouttransmits.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsReasmFails")
    {
        ipifstatsreasmfails.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsReasmOKs")
    {
        ipifstatsreasmoks.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsReasmReqds")
    {
        ipifstatsreasmreqds.yfilter = yfilter;
    }
    if(value_path == "ipIfStatsRefreshRate")
    {
        ipifstatsrefreshrate.yfilter = yfilter;
    }
}

bool IPMIB::Ipifstatstable::Ipifstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipIfStatsIPVersion" || name == "ipIfStatsIfIndex" || name == "ipIfStatsDiscontinuityTime" || name == "ipIfStatsHCInBcastPkts" || name == "ipIfStatsHCInDelivers" || name == "ipIfStatsHCInForwDatagrams" || name == "ipIfStatsHCInMcastOctets" || name == "ipIfStatsHCInMcastPkts" || name == "ipIfStatsHCInOctets" || name == "ipIfStatsHCInReceives" || name == "ipIfStatsHCOutBcastPkts" || name == "ipIfStatsHCOutForwDatagrams" || name == "ipIfStatsHCOutMcastOctets" || name == "ipIfStatsHCOutMcastPkts" || name == "ipIfStatsHCOutOctets" || name == "ipIfStatsHCOutRequests" || name == "ipIfStatsHCOutTransmits" || name == "ipIfStatsInAddrErrors" || name == "ipIfStatsInBcastPkts" || name == "ipIfStatsInDelivers" || name == "ipIfStatsInDiscards" || name == "ipIfStatsInForwDatagrams" || name == "ipIfStatsInHdrErrors" || name == "ipIfStatsInMcastOctets" || name == "ipIfStatsInMcastPkts" || name == "ipIfStatsInNoRoutes" || name == "ipIfStatsInOctets" || name == "ipIfStatsInReceives" || name == "ipIfStatsInTruncatedPkts" || name == "ipIfStatsInUnknownProtos" || name == "ipIfStatsOutBcastPkts" || name == "ipIfStatsOutDiscards" || name == "ipIfStatsOutForwDatagrams" || name == "ipIfStatsOutFragCreates" || name == "ipIfStatsOutFragFails" || name == "ipIfStatsOutFragOKs" || name == "ipIfStatsOutFragReqds" || name == "ipIfStatsOutMcastOctets" || name == "ipIfStatsOutMcastPkts" || name == "ipIfStatsOutOctets" || name == "ipIfStatsOutRequests" || name == "ipIfStatsOutTransmits" || name == "ipIfStatsReasmFails" || name == "ipIfStatsReasmOKs" || name == "ipIfStatsReasmReqds" || name == "ipIfStatsRefreshRate")
        return true;
    return false;
}

IPMIB::Ipnettomediatable::Ipnettomediatable()
{

    yang_name = "ipNetToMediaTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipnettomediatable::~Ipnettomediatable()
{
}

bool IPMIB::Ipnettomediatable::has_data() const
{
    for (std::size_t index=0; index<ipnettomediaentry.size(); index++)
    {
        if(ipnettomediaentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipnettomediatable::has_operation() const
{
    for (std::size_t index=0; index<ipnettomediaentry.size(); index++)
    {
        if(ipnettomediaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipnettomediatable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipnettomediatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToMediaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipnettomediatable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipnettomediatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<IPMIB::Ipnettomediatable::Ipnettomediaentry>();
        c->parent = this;
        ipnettomediaentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipnettomediatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipnettomediaentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipnettomediatable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipnettomediatable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipnettomediatable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipNetToMediaEntry")
        return true;
    return false;
}

IPMIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediaentry()
    :
    ipnettomediaifindex{YType::int32, "ipNetToMediaIfIndex"},
    ipnettomedianetaddress{YType::str, "ipNetToMediaNetAddress"},
    ipnettomediaphysaddress{YType::str, "ipNetToMediaPhysAddress"},
    ipnettomediatype{YType::enumeration, "ipNetToMediaType"}
{

    yang_name = "ipNetToMediaEntry"; yang_parent_name = "ipNetToMediaTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipnettomediatable::Ipnettomediaentry::~Ipnettomediaentry()
{
}

bool IPMIB::Ipnettomediatable::Ipnettomediaentry::has_data() const
{
    return ipnettomediaifindex.is_set
	|| ipnettomedianetaddress.is_set
	|| ipnettomediaphysaddress.is_set
	|| ipnettomediatype.is_set;
}

bool IPMIB::Ipnettomediatable::Ipnettomediaentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipnettomediaifindex.yfilter)
	|| ydk::is_set(ipnettomedianetaddress.yfilter)
	|| ydk::is_set(ipnettomediaphysaddress.yfilter)
	|| ydk::is_set(ipnettomediatype.yfilter);
}

std::string IPMIB::Ipnettomediatable::Ipnettomediaentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipNetToMediaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipnettomediatable::Ipnettomediaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToMediaEntry" <<"[ipNetToMediaIfIndex='" <<ipnettomediaifindex <<"']" <<"[ipNetToMediaNetAddress='" <<ipnettomedianetaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipnettomediatable::Ipnettomediaentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipnettomediaifindex.is_set || is_set(ipnettomediaifindex.yfilter)) leaf_name_data.push_back(ipnettomediaifindex.get_name_leafdata());
    if (ipnettomedianetaddress.is_set || is_set(ipnettomedianetaddress.yfilter)) leaf_name_data.push_back(ipnettomedianetaddress.get_name_leafdata());
    if (ipnettomediaphysaddress.is_set || is_set(ipnettomediaphysaddress.yfilter)) leaf_name_data.push_back(ipnettomediaphysaddress.get_name_leafdata());
    if (ipnettomediatype.is_set || is_set(ipnettomediatype.yfilter)) leaf_name_data.push_back(ipnettomediatype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipnettomediatable::Ipnettomediaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipnettomediatable::Ipnettomediaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipnettomediatable::Ipnettomediaentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void IPMIB::Ipnettomediatable::Ipnettomediaentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool IPMIB::Ipnettomediatable::Ipnettomediaentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipNetToMediaIfIndex" || name == "ipNetToMediaNetAddress" || name == "ipNetToMediaPhysAddress" || name == "ipNetToMediaType")
        return true;
    return false;
}

IPMIB::Ipnettophysicaltable::Ipnettophysicaltable()
{

    yang_name = "ipNetToPhysicalTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipnettophysicaltable::~Ipnettophysicaltable()
{
}

bool IPMIB::Ipnettophysicaltable::has_data() const
{
    for (std::size_t index=0; index<ipnettophysicalentry.size(); index++)
    {
        if(ipnettophysicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipnettophysicaltable::has_operation() const
{
    for (std::size_t index=0; index<ipnettophysicalentry.size(); index++)
    {
        if(ipnettophysicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipnettophysicaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipnettophysicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToPhysicalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipnettophysicaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipnettophysicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipNetToPhysicalEntry")
    {
        for(auto const & c : ipnettophysicalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipnettophysicaltable::Ipnettophysicalentry>();
        c->parent = this;
        ipnettophysicalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipnettophysicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipnettophysicalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipnettophysicaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipnettophysicaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipnettophysicaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipNetToPhysicalEntry")
        return true;
    return false;
}

IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalentry()
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

    yang_name = "ipNetToPhysicalEntry"; yang_parent_name = "ipNetToPhysicalTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::~Ipnettophysicalentry()
{
}

bool IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::has_data() const
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

bool IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipnettophysicalifindex.yfilter)
	|| ydk::is_set(ipnettophysicalnetaddresstype.yfilter)
	|| ydk::is_set(ipnettophysicalnetaddress.yfilter)
	|| ydk::is_set(ipnettophysicallastupdated.yfilter)
	|| ydk::is_set(ipnettophysicalphysaddress.yfilter)
	|| ydk::is_set(ipnettophysicalrowstatus.yfilter)
	|| ydk::is_set(ipnettophysicalstate.yfilter)
	|| ydk::is_set(ipnettophysicaltype.yfilter);
}

std::string IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipNetToPhysicalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipNetToPhysicalEntry" <<"[ipNetToPhysicalIfIndex='" <<ipnettophysicalifindex <<"']" <<"[ipNetToPhysicalNetAddressType='" <<ipnettophysicalnetaddresstype <<"']" <<"[ipNetToPhysicalNetAddress='" <<ipnettophysicalnetaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipnettophysicalifindex.is_set || is_set(ipnettophysicalifindex.yfilter)) leaf_name_data.push_back(ipnettophysicalifindex.get_name_leafdata());
    if (ipnettophysicalnetaddresstype.is_set || is_set(ipnettophysicalnetaddresstype.yfilter)) leaf_name_data.push_back(ipnettophysicalnetaddresstype.get_name_leafdata());
    if (ipnettophysicalnetaddress.is_set || is_set(ipnettophysicalnetaddress.yfilter)) leaf_name_data.push_back(ipnettophysicalnetaddress.get_name_leafdata());
    if (ipnettophysicallastupdated.is_set || is_set(ipnettophysicallastupdated.yfilter)) leaf_name_data.push_back(ipnettophysicallastupdated.get_name_leafdata());
    if (ipnettophysicalphysaddress.is_set || is_set(ipnettophysicalphysaddress.yfilter)) leaf_name_data.push_back(ipnettophysicalphysaddress.get_name_leafdata());
    if (ipnettophysicalrowstatus.is_set || is_set(ipnettophysicalrowstatus.yfilter)) leaf_name_data.push_back(ipnettophysicalrowstatus.get_name_leafdata());
    if (ipnettophysicalstate.is_set || is_set(ipnettophysicalstate.yfilter)) leaf_name_data.push_back(ipnettophysicalstate.get_name_leafdata());
    if (ipnettophysicaltype.is_set || is_set(ipnettophysicaltype.yfilter)) leaf_name_data.push_back(ipnettophysicaltype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipNetToPhysicalIfIndex")
    {
        ipnettophysicalifindex = value;
        ipnettophysicalifindex.value_namespace = name_space;
        ipnettophysicalifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToPhysicalNetAddressType")
    {
        ipnettophysicalnetaddresstype = value;
        ipnettophysicalnetaddresstype.value_namespace = name_space;
        ipnettophysicalnetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToPhysicalNetAddress")
    {
        ipnettophysicalnetaddress = value;
        ipnettophysicalnetaddress.value_namespace = name_space;
        ipnettophysicalnetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToPhysicalLastUpdated")
    {
        ipnettophysicallastupdated = value;
        ipnettophysicallastupdated.value_namespace = name_space;
        ipnettophysicallastupdated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToPhysicalPhysAddress")
    {
        ipnettophysicalphysaddress = value;
        ipnettophysicalphysaddress.value_namespace = name_space;
        ipnettophysicalphysaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToPhysicalRowStatus")
    {
        ipnettophysicalrowstatus = value;
        ipnettophysicalrowstatus.value_namespace = name_space;
        ipnettophysicalrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToPhysicalState")
    {
        ipnettophysicalstate = value;
        ipnettophysicalstate.value_namespace = name_space;
        ipnettophysicalstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNetToPhysicalType")
    {
        ipnettophysicaltype = value;
        ipnettophysicaltype.value_namespace = name_space;
        ipnettophysicaltype.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipNetToPhysicalIfIndex")
    {
        ipnettophysicalifindex.yfilter = yfilter;
    }
    if(value_path == "ipNetToPhysicalNetAddressType")
    {
        ipnettophysicalnetaddresstype.yfilter = yfilter;
    }
    if(value_path == "ipNetToPhysicalNetAddress")
    {
        ipnettophysicalnetaddress.yfilter = yfilter;
    }
    if(value_path == "ipNetToPhysicalLastUpdated")
    {
        ipnettophysicallastupdated.yfilter = yfilter;
    }
    if(value_path == "ipNetToPhysicalPhysAddress")
    {
        ipnettophysicalphysaddress.yfilter = yfilter;
    }
    if(value_path == "ipNetToPhysicalRowStatus")
    {
        ipnettophysicalrowstatus.yfilter = yfilter;
    }
    if(value_path == "ipNetToPhysicalState")
    {
        ipnettophysicalstate.yfilter = yfilter;
    }
    if(value_path == "ipNetToPhysicalType")
    {
        ipnettophysicaltype.yfilter = yfilter;
    }
}

bool IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipNetToPhysicalIfIndex" || name == "ipNetToPhysicalNetAddressType" || name == "ipNetToPhysicalNetAddress" || name == "ipNetToPhysicalLastUpdated" || name == "ipNetToPhysicalPhysAddress" || name == "ipNetToPhysicalRowStatus" || name == "ipNetToPhysicalState" || name == "ipNetToPhysicalType")
        return true;
    return false;
}

IPMIB::Ipsystemstatstable::Ipsystemstatstable()
{

    yang_name = "ipSystemStatsTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipsystemstatstable::~Ipsystemstatstable()
{
}

bool IPMIB::Ipsystemstatstable::has_data() const
{
    for (std::size_t index=0; index<ipsystemstatsentry.size(); index++)
    {
        if(ipsystemstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipsystemstatstable::has_operation() const
{
    for (std::size_t index=0; index<ipsystemstatsentry.size(); index++)
    {
        if(ipsystemstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipsystemstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipsystemstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSystemStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipsystemstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipsystemstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipSystemStatsEntry")
    {
        for(auto const & c : ipsystemstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipsystemstatstable::Ipsystemstatsentry>();
        c->parent = this;
        ipsystemstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipsystemstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipsystemstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipsystemstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipsystemstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipsystemstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipSystemStatsEntry")
        return true;
    return false;
}

IPMIB::Ipsystemstatstable::Ipsystemstatsentry::Ipsystemstatsentry()
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

    yang_name = "ipSystemStatsEntry"; yang_parent_name = "ipSystemStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipsystemstatstable::Ipsystemstatsentry::~Ipsystemstatsentry()
{
}

bool IPMIB::Ipsystemstatstable::Ipsystemstatsentry::has_data() const
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

bool IPMIB::Ipsystemstatstable::Ipsystemstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsystemstatsipversion.yfilter)
	|| ydk::is_set(ipsystemstatsdiscontinuitytime.yfilter)
	|| ydk::is_set(ipsystemstatshcinbcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatshcindelivers.yfilter)
	|| ydk::is_set(ipsystemstatshcinforwdatagrams.yfilter)
	|| ydk::is_set(ipsystemstatshcinmcastoctets.yfilter)
	|| ydk::is_set(ipsystemstatshcinmcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatshcinoctets.yfilter)
	|| ydk::is_set(ipsystemstatshcinreceives.yfilter)
	|| ydk::is_set(ipsystemstatshcoutbcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatshcoutforwdatagrams.yfilter)
	|| ydk::is_set(ipsystemstatshcoutmcastoctets.yfilter)
	|| ydk::is_set(ipsystemstatshcoutmcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatshcoutoctets.yfilter)
	|| ydk::is_set(ipsystemstatshcoutrequests.yfilter)
	|| ydk::is_set(ipsystemstatshcouttransmits.yfilter)
	|| ydk::is_set(ipsystemstatsinaddrerrors.yfilter)
	|| ydk::is_set(ipsystemstatsinbcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatsindelivers.yfilter)
	|| ydk::is_set(ipsystemstatsindiscards.yfilter)
	|| ydk::is_set(ipsystemstatsinforwdatagrams.yfilter)
	|| ydk::is_set(ipsystemstatsinhdrerrors.yfilter)
	|| ydk::is_set(ipsystemstatsinmcastoctets.yfilter)
	|| ydk::is_set(ipsystemstatsinmcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatsinnoroutes.yfilter)
	|| ydk::is_set(ipsystemstatsinoctets.yfilter)
	|| ydk::is_set(ipsystemstatsinreceives.yfilter)
	|| ydk::is_set(ipsystemstatsintruncatedpkts.yfilter)
	|| ydk::is_set(ipsystemstatsinunknownprotos.yfilter)
	|| ydk::is_set(ipsystemstatsoutbcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatsoutdiscards.yfilter)
	|| ydk::is_set(ipsystemstatsoutforwdatagrams.yfilter)
	|| ydk::is_set(ipsystemstatsoutfragcreates.yfilter)
	|| ydk::is_set(ipsystemstatsoutfragfails.yfilter)
	|| ydk::is_set(ipsystemstatsoutfragoks.yfilter)
	|| ydk::is_set(ipsystemstatsoutfragreqds.yfilter)
	|| ydk::is_set(ipsystemstatsoutmcastoctets.yfilter)
	|| ydk::is_set(ipsystemstatsoutmcastpkts.yfilter)
	|| ydk::is_set(ipsystemstatsoutnoroutes.yfilter)
	|| ydk::is_set(ipsystemstatsoutoctets.yfilter)
	|| ydk::is_set(ipsystemstatsoutrequests.yfilter)
	|| ydk::is_set(ipsystemstatsouttransmits.yfilter)
	|| ydk::is_set(ipsystemstatsreasmfails.yfilter)
	|| ydk::is_set(ipsystemstatsreasmoks.yfilter)
	|| ydk::is_set(ipsystemstatsreasmreqds.yfilter)
	|| ydk::is_set(ipsystemstatsrefreshrate.yfilter);
}

std::string IPMIB::Ipsystemstatstable::Ipsystemstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipSystemStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipsystemstatstable::Ipsystemstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSystemStatsEntry" <<"[ipSystemStatsIPVersion='" <<ipsystemstatsipversion <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipsystemstatstable::Ipsystemstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsystemstatsipversion.is_set || is_set(ipsystemstatsipversion.yfilter)) leaf_name_data.push_back(ipsystemstatsipversion.get_name_leafdata());
    if (ipsystemstatsdiscontinuitytime.is_set || is_set(ipsystemstatsdiscontinuitytime.yfilter)) leaf_name_data.push_back(ipsystemstatsdiscontinuitytime.get_name_leafdata());
    if (ipsystemstatshcinbcastpkts.is_set || is_set(ipsystemstatshcinbcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatshcinbcastpkts.get_name_leafdata());
    if (ipsystemstatshcindelivers.is_set || is_set(ipsystemstatshcindelivers.yfilter)) leaf_name_data.push_back(ipsystemstatshcindelivers.get_name_leafdata());
    if (ipsystemstatshcinforwdatagrams.is_set || is_set(ipsystemstatshcinforwdatagrams.yfilter)) leaf_name_data.push_back(ipsystemstatshcinforwdatagrams.get_name_leafdata());
    if (ipsystemstatshcinmcastoctets.is_set || is_set(ipsystemstatshcinmcastoctets.yfilter)) leaf_name_data.push_back(ipsystemstatshcinmcastoctets.get_name_leafdata());
    if (ipsystemstatshcinmcastpkts.is_set || is_set(ipsystemstatshcinmcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatshcinmcastpkts.get_name_leafdata());
    if (ipsystemstatshcinoctets.is_set || is_set(ipsystemstatshcinoctets.yfilter)) leaf_name_data.push_back(ipsystemstatshcinoctets.get_name_leafdata());
    if (ipsystemstatshcinreceives.is_set || is_set(ipsystemstatshcinreceives.yfilter)) leaf_name_data.push_back(ipsystemstatshcinreceives.get_name_leafdata());
    if (ipsystemstatshcoutbcastpkts.is_set || is_set(ipsystemstatshcoutbcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatshcoutbcastpkts.get_name_leafdata());
    if (ipsystemstatshcoutforwdatagrams.is_set || is_set(ipsystemstatshcoutforwdatagrams.yfilter)) leaf_name_data.push_back(ipsystemstatshcoutforwdatagrams.get_name_leafdata());
    if (ipsystemstatshcoutmcastoctets.is_set || is_set(ipsystemstatshcoutmcastoctets.yfilter)) leaf_name_data.push_back(ipsystemstatshcoutmcastoctets.get_name_leafdata());
    if (ipsystemstatshcoutmcastpkts.is_set || is_set(ipsystemstatshcoutmcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatshcoutmcastpkts.get_name_leafdata());
    if (ipsystemstatshcoutoctets.is_set || is_set(ipsystemstatshcoutoctets.yfilter)) leaf_name_data.push_back(ipsystemstatshcoutoctets.get_name_leafdata());
    if (ipsystemstatshcoutrequests.is_set || is_set(ipsystemstatshcoutrequests.yfilter)) leaf_name_data.push_back(ipsystemstatshcoutrequests.get_name_leafdata());
    if (ipsystemstatshcouttransmits.is_set || is_set(ipsystemstatshcouttransmits.yfilter)) leaf_name_data.push_back(ipsystemstatshcouttransmits.get_name_leafdata());
    if (ipsystemstatsinaddrerrors.is_set || is_set(ipsystemstatsinaddrerrors.yfilter)) leaf_name_data.push_back(ipsystemstatsinaddrerrors.get_name_leafdata());
    if (ipsystemstatsinbcastpkts.is_set || is_set(ipsystemstatsinbcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatsinbcastpkts.get_name_leafdata());
    if (ipsystemstatsindelivers.is_set || is_set(ipsystemstatsindelivers.yfilter)) leaf_name_data.push_back(ipsystemstatsindelivers.get_name_leafdata());
    if (ipsystemstatsindiscards.is_set || is_set(ipsystemstatsindiscards.yfilter)) leaf_name_data.push_back(ipsystemstatsindiscards.get_name_leafdata());
    if (ipsystemstatsinforwdatagrams.is_set || is_set(ipsystemstatsinforwdatagrams.yfilter)) leaf_name_data.push_back(ipsystemstatsinforwdatagrams.get_name_leafdata());
    if (ipsystemstatsinhdrerrors.is_set || is_set(ipsystemstatsinhdrerrors.yfilter)) leaf_name_data.push_back(ipsystemstatsinhdrerrors.get_name_leafdata());
    if (ipsystemstatsinmcastoctets.is_set || is_set(ipsystemstatsinmcastoctets.yfilter)) leaf_name_data.push_back(ipsystemstatsinmcastoctets.get_name_leafdata());
    if (ipsystemstatsinmcastpkts.is_set || is_set(ipsystemstatsinmcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatsinmcastpkts.get_name_leafdata());
    if (ipsystemstatsinnoroutes.is_set || is_set(ipsystemstatsinnoroutes.yfilter)) leaf_name_data.push_back(ipsystemstatsinnoroutes.get_name_leafdata());
    if (ipsystemstatsinoctets.is_set || is_set(ipsystemstatsinoctets.yfilter)) leaf_name_data.push_back(ipsystemstatsinoctets.get_name_leafdata());
    if (ipsystemstatsinreceives.is_set || is_set(ipsystemstatsinreceives.yfilter)) leaf_name_data.push_back(ipsystemstatsinreceives.get_name_leafdata());
    if (ipsystemstatsintruncatedpkts.is_set || is_set(ipsystemstatsintruncatedpkts.yfilter)) leaf_name_data.push_back(ipsystemstatsintruncatedpkts.get_name_leafdata());
    if (ipsystemstatsinunknownprotos.is_set || is_set(ipsystemstatsinunknownprotos.yfilter)) leaf_name_data.push_back(ipsystemstatsinunknownprotos.get_name_leafdata());
    if (ipsystemstatsoutbcastpkts.is_set || is_set(ipsystemstatsoutbcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatsoutbcastpkts.get_name_leafdata());
    if (ipsystemstatsoutdiscards.is_set || is_set(ipsystemstatsoutdiscards.yfilter)) leaf_name_data.push_back(ipsystemstatsoutdiscards.get_name_leafdata());
    if (ipsystemstatsoutforwdatagrams.is_set || is_set(ipsystemstatsoutforwdatagrams.yfilter)) leaf_name_data.push_back(ipsystemstatsoutforwdatagrams.get_name_leafdata());
    if (ipsystemstatsoutfragcreates.is_set || is_set(ipsystemstatsoutfragcreates.yfilter)) leaf_name_data.push_back(ipsystemstatsoutfragcreates.get_name_leafdata());
    if (ipsystemstatsoutfragfails.is_set || is_set(ipsystemstatsoutfragfails.yfilter)) leaf_name_data.push_back(ipsystemstatsoutfragfails.get_name_leafdata());
    if (ipsystemstatsoutfragoks.is_set || is_set(ipsystemstatsoutfragoks.yfilter)) leaf_name_data.push_back(ipsystemstatsoutfragoks.get_name_leafdata());
    if (ipsystemstatsoutfragreqds.is_set || is_set(ipsystemstatsoutfragreqds.yfilter)) leaf_name_data.push_back(ipsystemstatsoutfragreqds.get_name_leafdata());
    if (ipsystemstatsoutmcastoctets.is_set || is_set(ipsystemstatsoutmcastoctets.yfilter)) leaf_name_data.push_back(ipsystemstatsoutmcastoctets.get_name_leafdata());
    if (ipsystemstatsoutmcastpkts.is_set || is_set(ipsystemstatsoutmcastpkts.yfilter)) leaf_name_data.push_back(ipsystemstatsoutmcastpkts.get_name_leafdata());
    if (ipsystemstatsoutnoroutes.is_set || is_set(ipsystemstatsoutnoroutes.yfilter)) leaf_name_data.push_back(ipsystemstatsoutnoroutes.get_name_leafdata());
    if (ipsystemstatsoutoctets.is_set || is_set(ipsystemstatsoutoctets.yfilter)) leaf_name_data.push_back(ipsystemstatsoutoctets.get_name_leafdata());
    if (ipsystemstatsoutrequests.is_set || is_set(ipsystemstatsoutrequests.yfilter)) leaf_name_data.push_back(ipsystemstatsoutrequests.get_name_leafdata());
    if (ipsystemstatsouttransmits.is_set || is_set(ipsystemstatsouttransmits.yfilter)) leaf_name_data.push_back(ipsystemstatsouttransmits.get_name_leafdata());
    if (ipsystemstatsreasmfails.is_set || is_set(ipsystemstatsreasmfails.yfilter)) leaf_name_data.push_back(ipsystemstatsreasmfails.get_name_leafdata());
    if (ipsystemstatsreasmoks.is_set || is_set(ipsystemstatsreasmoks.yfilter)) leaf_name_data.push_back(ipsystemstatsreasmoks.get_name_leafdata());
    if (ipsystemstatsreasmreqds.is_set || is_set(ipsystemstatsreasmreqds.yfilter)) leaf_name_data.push_back(ipsystemstatsreasmreqds.get_name_leafdata());
    if (ipsystemstatsrefreshrate.is_set || is_set(ipsystemstatsrefreshrate.yfilter)) leaf_name_data.push_back(ipsystemstatsrefreshrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipsystemstatstable::Ipsystemstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipsystemstatstable::Ipsystemstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipsystemstatstable::Ipsystemstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipSystemStatsIPVersion")
    {
        ipsystemstatsipversion = value;
        ipsystemstatsipversion.value_namespace = name_space;
        ipsystemstatsipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsDiscontinuityTime")
    {
        ipsystemstatsdiscontinuitytime = value;
        ipsystemstatsdiscontinuitytime.value_namespace = name_space;
        ipsystemstatsdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCInBcastPkts")
    {
        ipsystemstatshcinbcastpkts = value;
        ipsystemstatshcinbcastpkts.value_namespace = name_space;
        ipsystemstatshcinbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCInDelivers")
    {
        ipsystemstatshcindelivers = value;
        ipsystemstatshcindelivers.value_namespace = name_space;
        ipsystemstatshcindelivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCInForwDatagrams")
    {
        ipsystemstatshcinforwdatagrams = value;
        ipsystemstatshcinforwdatagrams.value_namespace = name_space;
        ipsystemstatshcinforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCInMcastOctets")
    {
        ipsystemstatshcinmcastoctets = value;
        ipsystemstatshcinmcastoctets.value_namespace = name_space;
        ipsystemstatshcinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCInMcastPkts")
    {
        ipsystemstatshcinmcastpkts = value;
        ipsystemstatshcinmcastpkts.value_namespace = name_space;
        ipsystemstatshcinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCInOctets")
    {
        ipsystemstatshcinoctets = value;
        ipsystemstatshcinoctets.value_namespace = name_space;
        ipsystemstatshcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCInReceives")
    {
        ipsystemstatshcinreceives = value;
        ipsystemstatshcinreceives.value_namespace = name_space;
        ipsystemstatshcinreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCOutBcastPkts")
    {
        ipsystemstatshcoutbcastpkts = value;
        ipsystemstatshcoutbcastpkts.value_namespace = name_space;
        ipsystemstatshcoutbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCOutForwDatagrams")
    {
        ipsystemstatshcoutforwdatagrams = value;
        ipsystemstatshcoutforwdatagrams.value_namespace = name_space;
        ipsystemstatshcoutforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCOutMcastOctets")
    {
        ipsystemstatshcoutmcastoctets = value;
        ipsystemstatshcoutmcastoctets.value_namespace = name_space;
        ipsystemstatshcoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCOutMcastPkts")
    {
        ipsystemstatshcoutmcastpkts = value;
        ipsystemstatshcoutmcastpkts.value_namespace = name_space;
        ipsystemstatshcoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCOutOctets")
    {
        ipsystemstatshcoutoctets = value;
        ipsystemstatshcoutoctets.value_namespace = name_space;
        ipsystemstatshcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCOutRequests")
    {
        ipsystemstatshcoutrequests = value;
        ipsystemstatshcoutrequests.value_namespace = name_space;
        ipsystemstatshcoutrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsHCOutTransmits")
    {
        ipsystemstatshcouttransmits = value;
        ipsystemstatshcouttransmits.value_namespace = name_space;
        ipsystemstatshcouttransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInAddrErrors")
    {
        ipsystemstatsinaddrerrors = value;
        ipsystemstatsinaddrerrors.value_namespace = name_space;
        ipsystemstatsinaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInBcastPkts")
    {
        ipsystemstatsinbcastpkts = value;
        ipsystemstatsinbcastpkts.value_namespace = name_space;
        ipsystemstatsinbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInDelivers")
    {
        ipsystemstatsindelivers = value;
        ipsystemstatsindelivers.value_namespace = name_space;
        ipsystemstatsindelivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInDiscards")
    {
        ipsystemstatsindiscards = value;
        ipsystemstatsindiscards.value_namespace = name_space;
        ipsystemstatsindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInForwDatagrams")
    {
        ipsystemstatsinforwdatagrams = value;
        ipsystemstatsinforwdatagrams.value_namespace = name_space;
        ipsystemstatsinforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInHdrErrors")
    {
        ipsystemstatsinhdrerrors = value;
        ipsystemstatsinhdrerrors.value_namespace = name_space;
        ipsystemstatsinhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInMcastOctets")
    {
        ipsystemstatsinmcastoctets = value;
        ipsystemstatsinmcastoctets.value_namespace = name_space;
        ipsystemstatsinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInMcastPkts")
    {
        ipsystemstatsinmcastpkts = value;
        ipsystemstatsinmcastpkts.value_namespace = name_space;
        ipsystemstatsinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInNoRoutes")
    {
        ipsystemstatsinnoroutes = value;
        ipsystemstatsinnoroutes.value_namespace = name_space;
        ipsystemstatsinnoroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInOctets")
    {
        ipsystemstatsinoctets = value;
        ipsystemstatsinoctets.value_namespace = name_space;
        ipsystemstatsinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInReceives")
    {
        ipsystemstatsinreceives = value;
        ipsystemstatsinreceives.value_namespace = name_space;
        ipsystemstatsinreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInTruncatedPkts")
    {
        ipsystemstatsintruncatedpkts = value;
        ipsystemstatsintruncatedpkts.value_namespace = name_space;
        ipsystemstatsintruncatedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsInUnknownProtos")
    {
        ipsystemstatsinunknownprotos = value;
        ipsystemstatsinunknownprotos.value_namespace = name_space;
        ipsystemstatsinunknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutBcastPkts")
    {
        ipsystemstatsoutbcastpkts = value;
        ipsystemstatsoutbcastpkts.value_namespace = name_space;
        ipsystemstatsoutbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutDiscards")
    {
        ipsystemstatsoutdiscards = value;
        ipsystemstatsoutdiscards.value_namespace = name_space;
        ipsystemstatsoutdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutForwDatagrams")
    {
        ipsystemstatsoutforwdatagrams = value;
        ipsystemstatsoutforwdatagrams.value_namespace = name_space;
        ipsystemstatsoutforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutFragCreates")
    {
        ipsystemstatsoutfragcreates = value;
        ipsystemstatsoutfragcreates.value_namespace = name_space;
        ipsystemstatsoutfragcreates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutFragFails")
    {
        ipsystemstatsoutfragfails = value;
        ipsystemstatsoutfragfails.value_namespace = name_space;
        ipsystemstatsoutfragfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutFragOKs")
    {
        ipsystemstatsoutfragoks = value;
        ipsystemstatsoutfragoks.value_namespace = name_space;
        ipsystemstatsoutfragoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutFragReqds")
    {
        ipsystemstatsoutfragreqds = value;
        ipsystemstatsoutfragreqds.value_namespace = name_space;
        ipsystemstatsoutfragreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutMcastOctets")
    {
        ipsystemstatsoutmcastoctets = value;
        ipsystemstatsoutmcastoctets.value_namespace = name_space;
        ipsystemstatsoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutMcastPkts")
    {
        ipsystemstatsoutmcastpkts = value;
        ipsystemstatsoutmcastpkts.value_namespace = name_space;
        ipsystemstatsoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutNoRoutes")
    {
        ipsystemstatsoutnoroutes = value;
        ipsystemstatsoutnoroutes.value_namespace = name_space;
        ipsystemstatsoutnoroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutOctets")
    {
        ipsystemstatsoutoctets = value;
        ipsystemstatsoutoctets.value_namespace = name_space;
        ipsystemstatsoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutRequests")
    {
        ipsystemstatsoutrequests = value;
        ipsystemstatsoutrequests.value_namespace = name_space;
        ipsystemstatsoutrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsOutTransmits")
    {
        ipsystemstatsouttransmits = value;
        ipsystemstatsouttransmits.value_namespace = name_space;
        ipsystemstatsouttransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsReasmFails")
    {
        ipsystemstatsreasmfails = value;
        ipsystemstatsreasmfails.value_namespace = name_space;
        ipsystemstatsreasmfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsReasmOKs")
    {
        ipsystemstatsreasmoks = value;
        ipsystemstatsreasmoks.value_namespace = name_space;
        ipsystemstatsreasmoks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsReasmReqds")
    {
        ipsystemstatsreasmreqds = value;
        ipsystemstatsreasmreqds.value_namespace = name_space;
        ipsystemstatsreasmreqds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSystemStatsRefreshRate")
    {
        ipsystemstatsrefreshrate = value;
        ipsystemstatsrefreshrate.value_namespace = name_space;
        ipsystemstatsrefreshrate.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipsystemstatstable::Ipsystemstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipSystemStatsIPVersion")
    {
        ipsystemstatsipversion.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsDiscontinuityTime")
    {
        ipsystemstatsdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCInBcastPkts")
    {
        ipsystemstatshcinbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCInDelivers")
    {
        ipsystemstatshcindelivers.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCInForwDatagrams")
    {
        ipsystemstatshcinforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCInMcastOctets")
    {
        ipsystemstatshcinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCInMcastPkts")
    {
        ipsystemstatshcinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCInOctets")
    {
        ipsystemstatshcinoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCInReceives")
    {
        ipsystemstatshcinreceives.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCOutBcastPkts")
    {
        ipsystemstatshcoutbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCOutForwDatagrams")
    {
        ipsystemstatshcoutforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCOutMcastOctets")
    {
        ipsystemstatshcoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCOutMcastPkts")
    {
        ipsystemstatshcoutmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCOutOctets")
    {
        ipsystemstatshcoutoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCOutRequests")
    {
        ipsystemstatshcoutrequests.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsHCOutTransmits")
    {
        ipsystemstatshcouttransmits.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInAddrErrors")
    {
        ipsystemstatsinaddrerrors.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInBcastPkts")
    {
        ipsystemstatsinbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInDelivers")
    {
        ipsystemstatsindelivers.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInDiscards")
    {
        ipsystemstatsindiscards.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInForwDatagrams")
    {
        ipsystemstatsinforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInHdrErrors")
    {
        ipsystemstatsinhdrerrors.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInMcastOctets")
    {
        ipsystemstatsinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInMcastPkts")
    {
        ipsystemstatsinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInNoRoutes")
    {
        ipsystemstatsinnoroutes.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInOctets")
    {
        ipsystemstatsinoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInReceives")
    {
        ipsystemstatsinreceives.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInTruncatedPkts")
    {
        ipsystemstatsintruncatedpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsInUnknownProtos")
    {
        ipsystemstatsinunknownprotos.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutBcastPkts")
    {
        ipsystemstatsoutbcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutDiscards")
    {
        ipsystemstatsoutdiscards.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutForwDatagrams")
    {
        ipsystemstatsoutforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutFragCreates")
    {
        ipsystemstatsoutfragcreates.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutFragFails")
    {
        ipsystemstatsoutfragfails.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutFragOKs")
    {
        ipsystemstatsoutfragoks.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutFragReqds")
    {
        ipsystemstatsoutfragreqds.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutMcastOctets")
    {
        ipsystemstatsoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutMcastPkts")
    {
        ipsystemstatsoutmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutNoRoutes")
    {
        ipsystemstatsoutnoroutes.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutOctets")
    {
        ipsystemstatsoutoctets.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutRequests")
    {
        ipsystemstatsoutrequests.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsOutTransmits")
    {
        ipsystemstatsouttransmits.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsReasmFails")
    {
        ipsystemstatsreasmfails.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsReasmOKs")
    {
        ipsystemstatsreasmoks.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsReasmReqds")
    {
        ipsystemstatsreasmreqds.yfilter = yfilter;
    }
    if(value_path == "ipSystemStatsRefreshRate")
    {
        ipsystemstatsrefreshrate.yfilter = yfilter;
    }
}

bool IPMIB::Ipsystemstatstable::Ipsystemstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipSystemStatsIPVersion" || name == "ipSystemStatsDiscontinuityTime" || name == "ipSystemStatsHCInBcastPkts" || name == "ipSystemStatsHCInDelivers" || name == "ipSystemStatsHCInForwDatagrams" || name == "ipSystemStatsHCInMcastOctets" || name == "ipSystemStatsHCInMcastPkts" || name == "ipSystemStatsHCInOctets" || name == "ipSystemStatsHCInReceives" || name == "ipSystemStatsHCOutBcastPkts" || name == "ipSystemStatsHCOutForwDatagrams" || name == "ipSystemStatsHCOutMcastOctets" || name == "ipSystemStatsHCOutMcastPkts" || name == "ipSystemStatsHCOutOctets" || name == "ipSystemStatsHCOutRequests" || name == "ipSystemStatsHCOutTransmits" || name == "ipSystemStatsInAddrErrors" || name == "ipSystemStatsInBcastPkts" || name == "ipSystemStatsInDelivers" || name == "ipSystemStatsInDiscards" || name == "ipSystemStatsInForwDatagrams" || name == "ipSystemStatsInHdrErrors" || name == "ipSystemStatsInMcastOctets" || name == "ipSystemStatsInMcastPkts" || name == "ipSystemStatsInNoRoutes" || name == "ipSystemStatsInOctets" || name == "ipSystemStatsInReceives" || name == "ipSystemStatsInTruncatedPkts" || name == "ipSystemStatsInUnknownProtos" || name == "ipSystemStatsOutBcastPkts" || name == "ipSystemStatsOutDiscards" || name == "ipSystemStatsOutForwDatagrams" || name == "ipSystemStatsOutFragCreates" || name == "ipSystemStatsOutFragFails" || name == "ipSystemStatsOutFragOKs" || name == "ipSystemStatsOutFragReqds" || name == "ipSystemStatsOutMcastOctets" || name == "ipSystemStatsOutMcastPkts" || name == "ipSystemStatsOutNoRoutes" || name == "ipSystemStatsOutOctets" || name == "ipSystemStatsOutRequests" || name == "ipSystemStatsOutTransmits" || name == "ipSystemStatsReasmFails" || name == "ipSystemStatsReasmOKs" || name == "ipSystemStatsReasmReqds" || name == "ipSystemStatsRefreshRate")
        return true;
    return false;
}

IPMIB::Iptrafficstats::Iptrafficstats()
    :
    ipifstatstablelastchange{YType::uint32, "ipIfStatsTableLastChange"}
{

    yang_name = "ipTrafficStats"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Iptrafficstats::~Iptrafficstats()
{
}

bool IPMIB::Iptrafficstats::has_data() const
{
    return ipifstatstablelastchange.is_set;
}

bool IPMIB::Iptrafficstats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipifstatstablelastchange.yfilter);
}

std::string IPMIB::Iptrafficstats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Iptrafficstats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipTrafficStats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Iptrafficstats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipifstatstablelastchange.is_set || is_set(ipifstatstablelastchange.yfilter)) leaf_name_data.push_back(ipifstatstablelastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Iptrafficstats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Iptrafficstats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Iptrafficstats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipIfStatsTableLastChange")
    {
        ipifstatstablelastchange = value;
        ipifstatstablelastchange.value_namespace = name_space;
        ipifstatstablelastchange.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Iptrafficstats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipIfStatsTableLastChange")
    {
        ipifstatstablelastchange.yfilter = yfilter;
    }
}

bool IPMIB::Iptrafficstats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipIfStatsTableLastChange")
        return true;
    return false;
}

IPMIB::Ipv4Interfacetable::Ipv4Interfacetable()
{

    yang_name = "ipv4InterfaceTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv4Interfacetable::~Ipv4Interfacetable()
{
}

bool IPMIB::Ipv4Interfacetable::has_data() const
{
    for (std::size_t index=0; index<ipv4interfaceentry.size(); index++)
    {
        if(ipv4interfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipv4Interfacetable::has_operation() const
{
    for (std::size_t index=0; index<ipv4interfaceentry.size(); index++)
    {
        if(ipv4interfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipv4Interfacetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv4Interfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4InterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv4Interfacetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv4Interfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4InterfaceEntry")
    {
        for(auto const & c : ipv4interfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry>();
        c->parent = this;
        ipv4interfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv4Interfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4interfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipv4Interfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipv4Interfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipv4Interfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4InterfaceEntry")
        return true;
    return false;
}

IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4Interfaceentry()
    :
    ipv4interfaceifindex{YType::int32, "ipv4InterfaceIfIndex"},
    ipv4interfaceenablestatus{YType::enumeration, "ipv4InterfaceEnableStatus"},
    ipv4interfacereasmmaxsize{YType::int32, "ipv4InterfaceReasmMaxSize"},
    ipv4interfaceretransmittime{YType::uint32, "ipv4InterfaceRetransmitTime"}
{

    yang_name = "ipv4InterfaceEntry"; yang_parent_name = "ipv4InterfaceTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::~Ipv4Interfaceentry()
{
}

bool IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::has_data() const
{
    return ipv4interfaceifindex.is_set
	|| ipv4interfaceenablestatus.is_set
	|| ipv4interfacereasmmaxsize.is_set
	|| ipv4interfaceretransmittime.is_set;
}

bool IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4interfaceifindex.yfilter)
	|| ydk::is_set(ipv4interfaceenablestatus.yfilter)
	|| ydk::is_set(ipv4interfacereasmmaxsize.yfilter)
	|| ydk::is_set(ipv4interfaceretransmittime.yfilter);
}

std::string IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipv4InterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4InterfaceEntry" <<"[ipv4InterfaceIfIndex='" <<ipv4interfaceifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4interfaceifindex.is_set || is_set(ipv4interfaceifindex.yfilter)) leaf_name_data.push_back(ipv4interfaceifindex.get_name_leafdata());
    if (ipv4interfaceenablestatus.is_set || is_set(ipv4interfaceenablestatus.yfilter)) leaf_name_data.push_back(ipv4interfaceenablestatus.get_name_leafdata());
    if (ipv4interfacereasmmaxsize.is_set || is_set(ipv4interfacereasmmaxsize.yfilter)) leaf_name_data.push_back(ipv4interfacereasmmaxsize.get_name_leafdata());
    if (ipv4interfaceretransmittime.is_set || is_set(ipv4interfaceretransmittime.yfilter)) leaf_name_data.push_back(ipv4interfaceretransmittime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4InterfaceIfIndex")
    {
        ipv4interfaceifindex = value;
        ipv4interfaceifindex.value_namespace = name_space;
        ipv4interfaceifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4InterfaceEnableStatus")
    {
        ipv4interfaceenablestatus = value;
        ipv4interfaceenablestatus.value_namespace = name_space;
        ipv4interfaceenablestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4InterfaceReasmMaxSize")
    {
        ipv4interfacereasmmaxsize = value;
        ipv4interfacereasmmaxsize.value_namespace = name_space;
        ipv4interfacereasmmaxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4InterfaceRetransmitTime")
    {
        ipv4interfaceretransmittime = value;
        ipv4interfaceretransmittime.value_namespace = name_space;
        ipv4interfaceretransmittime.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4InterfaceIfIndex")
    {
        ipv4interfaceifindex.yfilter = yfilter;
    }
    if(value_path == "ipv4InterfaceEnableStatus")
    {
        ipv4interfaceenablestatus.yfilter = yfilter;
    }
    if(value_path == "ipv4InterfaceReasmMaxSize")
    {
        ipv4interfacereasmmaxsize.yfilter = yfilter;
    }
    if(value_path == "ipv4InterfaceRetransmitTime")
    {
        ipv4interfaceretransmittime.yfilter = yfilter;
    }
}

bool IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4InterfaceIfIndex" || name == "ipv4InterfaceEnableStatus" || name == "ipv4InterfaceReasmMaxSize" || name == "ipv4InterfaceRetransmitTime")
        return true;
    return false;
}

IPMIB::Ipv6Interfacetable::Ipv6Interfacetable()
{

    yang_name = "ipv6InterfaceTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv6Interfacetable::~Ipv6Interfacetable()
{
}

bool IPMIB::Ipv6Interfacetable::has_data() const
{
    for (std::size_t index=0; index<ipv6interfaceentry.size(); index++)
    {
        if(ipv6interfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipv6Interfacetable::has_operation() const
{
    for (std::size_t index=0; index<ipv6interfaceentry.size(); index++)
    {
        if(ipv6interfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipv6Interfacetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv6Interfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6InterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv6Interfacetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv6Interfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6InterfaceEntry")
    {
        for(auto const & c : ipv6interfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry>();
        c->parent = this;
        ipv6interfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv6Interfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6interfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipv6Interfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipv6Interfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipv6Interfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6InterfaceEntry")
        return true;
    return false;
}

IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceentry()
    :
    ipv6interfaceifindex{YType::int32, "ipv6InterfaceIfIndex"},
    ipv6interfaceenablestatus{YType::enumeration, "ipv6InterfaceEnableStatus"},
    ipv6interfaceforwarding{YType::enumeration, "ipv6InterfaceForwarding"},
    ipv6interfaceidentifier{YType::str, "ipv6InterfaceIdentifier"},
    ipv6interfacereachabletime{YType::uint32, "ipv6InterfaceReachableTime"},
    ipv6interfacereasmmaxsize{YType::uint32, "ipv6InterfaceReasmMaxSize"},
    ipv6interfaceretransmittime{YType::uint32, "ipv6InterfaceRetransmitTime"}
{

    yang_name = "ipv6InterfaceEntry"; yang_parent_name = "ipv6InterfaceTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::~Ipv6Interfaceentry()
{
}

bool IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::has_data() const
{
    return ipv6interfaceifindex.is_set
	|| ipv6interfaceenablestatus.is_set
	|| ipv6interfaceforwarding.is_set
	|| ipv6interfaceidentifier.is_set
	|| ipv6interfacereachabletime.is_set
	|| ipv6interfacereasmmaxsize.is_set
	|| ipv6interfaceretransmittime.is_set;
}

bool IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6interfaceifindex.yfilter)
	|| ydk::is_set(ipv6interfaceenablestatus.yfilter)
	|| ydk::is_set(ipv6interfaceforwarding.yfilter)
	|| ydk::is_set(ipv6interfaceidentifier.yfilter)
	|| ydk::is_set(ipv6interfacereachabletime.yfilter)
	|| ydk::is_set(ipv6interfacereasmmaxsize.yfilter)
	|| ydk::is_set(ipv6interfaceretransmittime.yfilter);
}

std::string IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipv6InterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6InterfaceEntry" <<"[ipv6InterfaceIfIndex='" <<ipv6interfaceifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6interfaceifindex.is_set || is_set(ipv6interfaceifindex.yfilter)) leaf_name_data.push_back(ipv6interfaceifindex.get_name_leafdata());
    if (ipv6interfaceenablestatus.is_set || is_set(ipv6interfaceenablestatus.yfilter)) leaf_name_data.push_back(ipv6interfaceenablestatus.get_name_leafdata());
    if (ipv6interfaceforwarding.is_set || is_set(ipv6interfaceforwarding.yfilter)) leaf_name_data.push_back(ipv6interfaceforwarding.get_name_leafdata());
    if (ipv6interfaceidentifier.is_set || is_set(ipv6interfaceidentifier.yfilter)) leaf_name_data.push_back(ipv6interfaceidentifier.get_name_leafdata());
    if (ipv6interfacereachabletime.is_set || is_set(ipv6interfacereachabletime.yfilter)) leaf_name_data.push_back(ipv6interfacereachabletime.get_name_leafdata());
    if (ipv6interfacereasmmaxsize.is_set || is_set(ipv6interfacereasmmaxsize.yfilter)) leaf_name_data.push_back(ipv6interfacereasmmaxsize.get_name_leafdata());
    if (ipv6interfaceretransmittime.is_set || is_set(ipv6interfaceretransmittime.yfilter)) leaf_name_data.push_back(ipv6interfaceretransmittime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6InterfaceIfIndex")
    {
        ipv6interfaceifindex = value;
        ipv6interfaceifindex.value_namespace = name_space;
        ipv6interfaceifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6InterfaceEnableStatus")
    {
        ipv6interfaceenablestatus = value;
        ipv6interfaceenablestatus.value_namespace = name_space;
        ipv6interfaceenablestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6InterfaceForwarding")
    {
        ipv6interfaceforwarding = value;
        ipv6interfaceforwarding.value_namespace = name_space;
        ipv6interfaceforwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6InterfaceIdentifier")
    {
        ipv6interfaceidentifier = value;
        ipv6interfaceidentifier.value_namespace = name_space;
        ipv6interfaceidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6InterfaceReachableTime")
    {
        ipv6interfacereachabletime = value;
        ipv6interfacereachabletime.value_namespace = name_space;
        ipv6interfacereachabletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6InterfaceReasmMaxSize")
    {
        ipv6interfacereasmmaxsize = value;
        ipv6interfacereasmmaxsize.value_namespace = name_space;
        ipv6interfacereasmmaxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6InterfaceRetransmitTime")
    {
        ipv6interfaceretransmittime = value;
        ipv6interfaceretransmittime.value_namespace = name_space;
        ipv6interfaceretransmittime.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6InterfaceIfIndex")
    {
        ipv6interfaceifindex.yfilter = yfilter;
    }
    if(value_path == "ipv6InterfaceEnableStatus")
    {
        ipv6interfaceenablestatus.yfilter = yfilter;
    }
    if(value_path == "ipv6InterfaceForwarding")
    {
        ipv6interfaceforwarding.yfilter = yfilter;
    }
    if(value_path == "ipv6InterfaceIdentifier")
    {
        ipv6interfaceidentifier.yfilter = yfilter;
    }
    if(value_path == "ipv6InterfaceReachableTime")
    {
        ipv6interfacereachabletime.yfilter = yfilter;
    }
    if(value_path == "ipv6InterfaceReasmMaxSize")
    {
        ipv6interfacereasmmaxsize.yfilter = yfilter;
    }
    if(value_path == "ipv6InterfaceRetransmitTime")
    {
        ipv6interfaceretransmittime.yfilter = yfilter;
    }
}

bool IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6InterfaceIfIndex" || name == "ipv6InterfaceEnableStatus" || name == "ipv6InterfaceForwarding" || name == "ipv6InterfaceIdentifier" || name == "ipv6InterfaceReachableTime" || name == "ipv6InterfaceReasmMaxSize" || name == "ipv6InterfaceRetransmitTime")
        return true;
    return false;
}

IPMIB::Ipv6Routeradverttable::Ipv6Routeradverttable()
{

    yang_name = "ipv6RouterAdvertTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv6Routeradverttable::~Ipv6Routeradverttable()
{
}

bool IPMIB::Ipv6Routeradverttable::has_data() const
{
    for (std::size_t index=0; index<ipv6routeradvertentry.size(); index++)
    {
        if(ipv6routeradvertentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipv6Routeradverttable::has_operation() const
{
    for (std::size_t index=0; index<ipv6routeradvertentry.size(); index++)
    {
        if(ipv6routeradvertentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipv6Routeradverttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv6Routeradverttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6RouterAdvertTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv6Routeradverttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv6Routeradverttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6RouterAdvertEntry")
    {
        for(auto const & c : ipv6routeradvertentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry>();
        c->parent = this;
        ipv6routeradvertentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv6Routeradverttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6routeradvertentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipv6Routeradverttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipv6Routeradverttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipv6Routeradverttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6RouterAdvertEntry")
        return true;
    return false;
}

IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::Ipv6Routeradvertentry()
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

    yang_name = "ipv6RouterAdvertEntry"; yang_parent_name = "ipv6RouterAdvertTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::~Ipv6Routeradvertentry()
{
}

bool IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::has_data() const
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

bool IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6routeradvertifindex.yfilter)
	|| ydk::is_set(ipv6routeradvertcurhoplimit.yfilter)
	|| ydk::is_set(ipv6routeradvertdefaultlifetime.yfilter)
	|| ydk::is_set(ipv6routeradvertlinkmtu.yfilter)
	|| ydk::is_set(ipv6routeradvertmanagedflag.yfilter)
	|| ydk::is_set(ipv6routeradvertmaxinterval.yfilter)
	|| ydk::is_set(ipv6routeradvertmininterval.yfilter)
	|| ydk::is_set(ipv6routeradvertotherconfigflag.yfilter)
	|| ydk::is_set(ipv6routeradvertreachabletime.yfilter)
	|| ydk::is_set(ipv6routeradvertretransmittime.yfilter)
	|| ydk::is_set(ipv6routeradvertrowstatus.yfilter)
	|| ydk::is_set(ipv6routeradvertsendadverts.yfilter);
}

std::string IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipv6RouterAdvertTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6RouterAdvertEntry" <<"[ipv6RouterAdvertIfIndex='" <<ipv6routeradvertifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6routeradvertifindex.is_set || is_set(ipv6routeradvertifindex.yfilter)) leaf_name_data.push_back(ipv6routeradvertifindex.get_name_leafdata());
    if (ipv6routeradvertcurhoplimit.is_set || is_set(ipv6routeradvertcurhoplimit.yfilter)) leaf_name_data.push_back(ipv6routeradvertcurhoplimit.get_name_leafdata());
    if (ipv6routeradvertdefaultlifetime.is_set || is_set(ipv6routeradvertdefaultlifetime.yfilter)) leaf_name_data.push_back(ipv6routeradvertdefaultlifetime.get_name_leafdata());
    if (ipv6routeradvertlinkmtu.is_set || is_set(ipv6routeradvertlinkmtu.yfilter)) leaf_name_data.push_back(ipv6routeradvertlinkmtu.get_name_leafdata());
    if (ipv6routeradvertmanagedflag.is_set || is_set(ipv6routeradvertmanagedflag.yfilter)) leaf_name_data.push_back(ipv6routeradvertmanagedflag.get_name_leafdata());
    if (ipv6routeradvertmaxinterval.is_set || is_set(ipv6routeradvertmaxinterval.yfilter)) leaf_name_data.push_back(ipv6routeradvertmaxinterval.get_name_leafdata());
    if (ipv6routeradvertmininterval.is_set || is_set(ipv6routeradvertmininterval.yfilter)) leaf_name_data.push_back(ipv6routeradvertmininterval.get_name_leafdata());
    if (ipv6routeradvertotherconfigflag.is_set || is_set(ipv6routeradvertotherconfigflag.yfilter)) leaf_name_data.push_back(ipv6routeradvertotherconfigflag.get_name_leafdata());
    if (ipv6routeradvertreachabletime.is_set || is_set(ipv6routeradvertreachabletime.yfilter)) leaf_name_data.push_back(ipv6routeradvertreachabletime.get_name_leafdata());
    if (ipv6routeradvertretransmittime.is_set || is_set(ipv6routeradvertretransmittime.yfilter)) leaf_name_data.push_back(ipv6routeradvertretransmittime.get_name_leafdata());
    if (ipv6routeradvertrowstatus.is_set || is_set(ipv6routeradvertrowstatus.yfilter)) leaf_name_data.push_back(ipv6routeradvertrowstatus.get_name_leafdata());
    if (ipv6routeradvertsendadverts.is_set || is_set(ipv6routeradvertsendadverts.yfilter)) leaf_name_data.push_back(ipv6routeradvertsendadverts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6RouterAdvertIfIndex")
    {
        ipv6routeradvertifindex = value;
        ipv6routeradvertifindex.value_namespace = name_space;
        ipv6routeradvertifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertCurHopLimit")
    {
        ipv6routeradvertcurhoplimit = value;
        ipv6routeradvertcurhoplimit.value_namespace = name_space;
        ipv6routeradvertcurhoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertDefaultLifetime")
    {
        ipv6routeradvertdefaultlifetime = value;
        ipv6routeradvertdefaultlifetime.value_namespace = name_space;
        ipv6routeradvertdefaultlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertLinkMTU")
    {
        ipv6routeradvertlinkmtu = value;
        ipv6routeradvertlinkmtu.value_namespace = name_space;
        ipv6routeradvertlinkmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertManagedFlag")
    {
        ipv6routeradvertmanagedflag = value;
        ipv6routeradvertmanagedflag.value_namespace = name_space;
        ipv6routeradvertmanagedflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertMaxInterval")
    {
        ipv6routeradvertmaxinterval = value;
        ipv6routeradvertmaxinterval.value_namespace = name_space;
        ipv6routeradvertmaxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertMinInterval")
    {
        ipv6routeradvertmininterval = value;
        ipv6routeradvertmininterval.value_namespace = name_space;
        ipv6routeradvertmininterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertOtherConfigFlag")
    {
        ipv6routeradvertotherconfigflag = value;
        ipv6routeradvertotherconfigflag.value_namespace = name_space;
        ipv6routeradvertotherconfigflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertReachableTime")
    {
        ipv6routeradvertreachabletime = value;
        ipv6routeradvertreachabletime.value_namespace = name_space;
        ipv6routeradvertreachabletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertRetransmitTime")
    {
        ipv6routeradvertretransmittime = value;
        ipv6routeradvertretransmittime.value_namespace = name_space;
        ipv6routeradvertretransmittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertRowStatus")
    {
        ipv6routeradvertrowstatus = value;
        ipv6routeradvertrowstatus.value_namespace = name_space;
        ipv6routeradvertrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RouterAdvertSendAdverts")
    {
        ipv6routeradvertsendadverts = value;
        ipv6routeradvertsendadverts.value_namespace = name_space;
        ipv6routeradvertsendadverts.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6RouterAdvertIfIndex")
    {
        ipv6routeradvertifindex.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertCurHopLimit")
    {
        ipv6routeradvertcurhoplimit.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertDefaultLifetime")
    {
        ipv6routeradvertdefaultlifetime.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertLinkMTU")
    {
        ipv6routeradvertlinkmtu.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertManagedFlag")
    {
        ipv6routeradvertmanagedflag.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertMaxInterval")
    {
        ipv6routeradvertmaxinterval.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertMinInterval")
    {
        ipv6routeradvertmininterval.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertOtherConfigFlag")
    {
        ipv6routeradvertotherconfigflag.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertReachableTime")
    {
        ipv6routeradvertreachabletime.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertRetransmitTime")
    {
        ipv6routeradvertretransmittime.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertRowStatus")
    {
        ipv6routeradvertrowstatus.yfilter = yfilter;
    }
    if(value_path == "ipv6RouterAdvertSendAdverts")
    {
        ipv6routeradvertsendadverts.yfilter = yfilter;
    }
}

bool IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6RouterAdvertIfIndex" || name == "ipv6RouterAdvertCurHopLimit" || name == "ipv6RouterAdvertDefaultLifetime" || name == "ipv6RouterAdvertLinkMTU" || name == "ipv6RouterAdvertManagedFlag" || name == "ipv6RouterAdvertMaxInterval" || name == "ipv6RouterAdvertMinInterval" || name == "ipv6RouterAdvertOtherConfigFlag" || name == "ipv6RouterAdvertReachableTime" || name == "ipv6RouterAdvertRetransmitTime" || name == "ipv6RouterAdvertRowStatus" || name == "ipv6RouterAdvertSendAdverts")
        return true;
    return false;
}

IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindextable()
{

    yang_name = "ipv6ScopeZoneIndexTable"; yang_parent_name = "IP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv6Scopezoneindextable::~Ipv6Scopezoneindextable()
{
}

bool IPMIB::Ipv6Scopezoneindextable::has_data() const
{
    for (std::size_t index=0; index<ipv6scopezoneindexentry.size(); index++)
    {
        if(ipv6scopezoneindexentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMIB::Ipv6Scopezoneindextable::has_operation() const
{
    for (std::size_t index=0; index<ipv6scopezoneindexentry.size(); index++)
    {
        if(ipv6scopezoneindexentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMIB::Ipv6Scopezoneindextable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv6Scopezoneindextable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ScopeZoneIndexTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv6Scopezoneindextable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv6Scopezoneindextable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6ScopeZoneIndexEntry")
    {
        for(auto const & c : ipv6scopezoneindexentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry>();
        c->parent = this;
        ipv6scopezoneindexentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv6Scopezoneindextable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6scopezoneindexentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMIB::Ipv6Scopezoneindextable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMIB::Ipv6Scopezoneindextable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMIB::Ipv6Scopezoneindextable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6ScopeZoneIndexEntry")
        return true;
    return false;
}

IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::Ipv6Scopezoneindexentry()
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

    yang_name = "ipv6ScopeZoneIndexEntry"; yang_parent_name = "ipv6ScopeZoneIndexTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::~Ipv6Scopezoneindexentry()
{
}

bool IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::has_data() const
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

bool IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6scopezoneindexifindex.yfilter)
	|| ydk::is_set(ipv6scopezoneindex3.yfilter)
	|| ydk::is_set(ipv6scopezoneindex6.yfilter)
	|| ydk::is_set(ipv6scopezoneindex7.yfilter)
	|| ydk::is_set(ipv6scopezoneindex9.yfilter)
	|| ydk::is_set(ipv6scopezoneindexa.yfilter)
	|| ydk::is_set(ipv6scopezoneindexadminlocal.yfilter)
	|| ydk::is_set(ipv6scopezoneindexb.yfilter)
	|| ydk::is_set(ipv6scopezoneindexc.yfilter)
	|| ydk::is_set(ipv6scopezoneindexd.yfilter)
	|| ydk::is_set(ipv6scopezoneindexlinklocal.yfilter)
	|| ydk::is_set(ipv6scopezoneindexorganizationlocal.yfilter)
	|| ydk::is_set(ipv6scopezoneindexsitelocal.yfilter);
}

std::string IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-MIB:IP-MIB/ipv6ScopeZoneIndexTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ScopeZoneIndexEntry" <<"[ipv6ScopeZoneIndexIfIndex='" <<ipv6scopezoneindexifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6scopezoneindexifindex.is_set || is_set(ipv6scopezoneindexifindex.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexifindex.get_name_leafdata());
    if (ipv6scopezoneindex3.is_set || is_set(ipv6scopezoneindex3.yfilter)) leaf_name_data.push_back(ipv6scopezoneindex3.get_name_leafdata());
    if (ipv6scopezoneindex6.is_set || is_set(ipv6scopezoneindex6.yfilter)) leaf_name_data.push_back(ipv6scopezoneindex6.get_name_leafdata());
    if (ipv6scopezoneindex7.is_set || is_set(ipv6scopezoneindex7.yfilter)) leaf_name_data.push_back(ipv6scopezoneindex7.get_name_leafdata());
    if (ipv6scopezoneindex9.is_set || is_set(ipv6scopezoneindex9.yfilter)) leaf_name_data.push_back(ipv6scopezoneindex9.get_name_leafdata());
    if (ipv6scopezoneindexa.is_set || is_set(ipv6scopezoneindexa.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexa.get_name_leafdata());
    if (ipv6scopezoneindexadminlocal.is_set || is_set(ipv6scopezoneindexadminlocal.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexadminlocal.get_name_leafdata());
    if (ipv6scopezoneindexb.is_set || is_set(ipv6scopezoneindexb.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexb.get_name_leafdata());
    if (ipv6scopezoneindexc.is_set || is_set(ipv6scopezoneindexc.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexc.get_name_leafdata());
    if (ipv6scopezoneindexd.is_set || is_set(ipv6scopezoneindexd.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexd.get_name_leafdata());
    if (ipv6scopezoneindexlinklocal.is_set || is_set(ipv6scopezoneindexlinklocal.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexlinklocal.get_name_leafdata());
    if (ipv6scopezoneindexorganizationlocal.is_set || is_set(ipv6scopezoneindexorganizationlocal.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexorganizationlocal.get_name_leafdata());
    if (ipv6scopezoneindexsitelocal.is_set || is_set(ipv6scopezoneindexsitelocal.yfilter)) leaf_name_data.push_back(ipv6scopezoneindexsitelocal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6ScopeZoneIndexIfIndex")
    {
        ipv6scopezoneindexifindex = value;
        ipv6scopezoneindexifindex.value_namespace = name_space;
        ipv6scopezoneindexifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndex3")
    {
        ipv6scopezoneindex3 = value;
        ipv6scopezoneindex3.value_namespace = name_space;
        ipv6scopezoneindex3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndex6")
    {
        ipv6scopezoneindex6 = value;
        ipv6scopezoneindex6.value_namespace = name_space;
        ipv6scopezoneindex6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndex7")
    {
        ipv6scopezoneindex7 = value;
        ipv6scopezoneindex7.value_namespace = name_space;
        ipv6scopezoneindex7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndex9")
    {
        ipv6scopezoneindex9 = value;
        ipv6scopezoneindex9.value_namespace = name_space;
        ipv6scopezoneindex9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexA")
    {
        ipv6scopezoneindexa = value;
        ipv6scopezoneindexa.value_namespace = name_space;
        ipv6scopezoneindexa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexAdminLocal")
    {
        ipv6scopezoneindexadminlocal = value;
        ipv6scopezoneindexadminlocal.value_namespace = name_space;
        ipv6scopezoneindexadminlocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexB")
    {
        ipv6scopezoneindexb = value;
        ipv6scopezoneindexb.value_namespace = name_space;
        ipv6scopezoneindexb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexC")
    {
        ipv6scopezoneindexc = value;
        ipv6scopezoneindexc.value_namespace = name_space;
        ipv6scopezoneindexc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexD")
    {
        ipv6scopezoneindexd = value;
        ipv6scopezoneindexd.value_namespace = name_space;
        ipv6scopezoneindexd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexLinkLocal")
    {
        ipv6scopezoneindexlinklocal = value;
        ipv6scopezoneindexlinklocal.value_namespace = name_space;
        ipv6scopezoneindexlinklocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexOrganizationLocal")
    {
        ipv6scopezoneindexorganizationlocal = value;
        ipv6scopezoneindexorganizationlocal.value_namespace = name_space;
        ipv6scopezoneindexorganizationlocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6ScopeZoneIndexSiteLocal")
    {
        ipv6scopezoneindexsitelocal = value;
        ipv6scopezoneindexsitelocal.value_namespace = name_space;
        ipv6scopezoneindexsitelocal.value_namespace_prefix = name_space_prefix;
    }
}

void IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6ScopeZoneIndexIfIndex")
    {
        ipv6scopezoneindexifindex.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndex3")
    {
        ipv6scopezoneindex3.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndex6")
    {
        ipv6scopezoneindex6.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndex7")
    {
        ipv6scopezoneindex7.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndex9")
    {
        ipv6scopezoneindex9.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexA")
    {
        ipv6scopezoneindexa.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexAdminLocal")
    {
        ipv6scopezoneindexadminlocal.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexB")
    {
        ipv6scopezoneindexb.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexC")
    {
        ipv6scopezoneindexc.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexD")
    {
        ipv6scopezoneindexd.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexLinkLocal")
    {
        ipv6scopezoneindexlinklocal.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexOrganizationLocal")
    {
        ipv6scopezoneindexorganizationlocal.yfilter = yfilter;
    }
    if(value_path == "ipv6ScopeZoneIndexSiteLocal")
    {
        ipv6scopezoneindexsitelocal.yfilter = yfilter;
    }
}

bool IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6ScopeZoneIndexIfIndex" || name == "ipv6ScopeZoneIndex3" || name == "ipv6ScopeZoneIndex6" || name == "ipv6ScopeZoneIndex7" || name == "ipv6ScopeZoneIndex9" || name == "ipv6ScopeZoneIndexA" || name == "ipv6ScopeZoneIndexAdminLocal" || name == "ipv6ScopeZoneIndexB" || name == "ipv6ScopeZoneIndexC" || name == "ipv6ScopeZoneIndexD" || name == "ipv6ScopeZoneIndexLinkLocal" || name == "ipv6ScopeZoneIndexOrganizationLocal" || name == "ipv6ScopeZoneIndexSiteLocal")
        return true;
    return false;
}

const Enum::YLeaf IpAddressOriginTC::other {1, "other"};
const Enum::YLeaf IpAddressOriginTC::manual {2, "manual"};
const Enum::YLeaf IpAddressOriginTC::dhcp {4, "dhcp"};
const Enum::YLeaf IpAddressOriginTC::linklayer {5, "linklayer"};
const Enum::YLeaf IpAddressOriginTC::random {6, "random"};

const Enum::YLeaf IpAddressPrefixOriginTC::other {1, "other"};
const Enum::YLeaf IpAddressPrefixOriginTC::manual {2, "manual"};
const Enum::YLeaf IpAddressPrefixOriginTC::wellknown {3, "wellknown"};
const Enum::YLeaf IpAddressPrefixOriginTC::dhcp {4, "dhcp"};
const Enum::YLeaf IpAddressPrefixOriginTC::routeradv {5, "routeradv"};

const Enum::YLeaf IpAddressStatusTC::preferred {1, "preferred"};
const Enum::YLeaf IpAddressStatusTC::deprecated {2, "deprecated"};
const Enum::YLeaf IpAddressStatusTC::invalid {3, "invalid"};
const Enum::YLeaf IpAddressStatusTC::inaccessible {4, "inaccessible"};
const Enum::YLeaf IpAddressStatusTC::unknown {5, "unknown"};
const Enum::YLeaf IpAddressStatusTC::tentative {6, "tentative"};
const Enum::YLeaf IpAddressStatusTC::duplicate {7, "duplicate"};
const Enum::YLeaf IpAddressStatusTC::optimistic {8, "optimistic"};

const Enum::YLeaf IPMIB::Ip::Ipforwarding::forwarding {1, "forwarding"};
const Enum::YLeaf IPMIB::Ip::Ipforwarding::notForwarding {2, "notForwarding"};

const Enum::YLeaf IPMIB::Ip::Ipv6Ipforwarding::forwarding {1, "forwarding"};
const Enum::YLeaf IPMIB::Ip::Ipv6Ipforwarding::notForwarding {2, "notForwarding"};

const Enum::YLeaf IPMIB::Ipaddresstable::Ipaddressentry::Ipaddresstype::unicast {1, "unicast"};
const Enum::YLeaf IPMIB::Ipaddresstable::Ipaddressentry::Ipaddresstype::anycast {2, "anycast"};
const Enum::YLeaf IPMIB::Ipaddresstable::Ipaddressentry::Ipaddresstype::broadcast {3, "broadcast"};

const Enum::YLeaf IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::Ipdefaultrouterpreference::reserved {-2, "reserved"};
const Enum::YLeaf IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::Ipdefaultrouterpreference::low {-1, "low"};
const Enum::YLeaf IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::Ipdefaultrouterpreference::medium {0, "medium"};
const Enum::YLeaf IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::Ipdefaultrouterpreference::high {1, "high"};

const Enum::YLeaf IPMIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::other {1, "other"};
const Enum::YLeaf IPMIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::invalid {2, "invalid"};
const Enum::YLeaf IPMIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::dynamic {3, "dynamic"};
const Enum::YLeaf IPMIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype::static_ {4, "static"};

const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicaltype::other {1, "other"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicaltype::invalid {2, "invalid"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicaltype::dynamic {3, "dynamic"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicaltype::static_ {4, "static"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicaltype::local {5, "local"};

const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate::reachable {1, "reachable"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate::stale {2, "stale"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate::delay {3, "delay"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate::probe {4, "probe"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate::invalid {5, "invalid"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate::unknown {6, "unknown"};
const Enum::YLeaf IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate::incomplete {7, "incomplete"};

const Enum::YLeaf IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4Interfaceenablestatus::up {1, "up"};
const Enum::YLeaf IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4Interfaceenablestatus::down {2, "down"};

const Enum::YLeaf IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceenablestatus::up {1, "up"};
const Enum::YLeaf IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceenablestatus::down {2, "down"};

const Enum::YLeaf IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceforwarding::forwarding {1, "forwarding"};
const Enum::YLeaf IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceforwarding::notForwarding {2, "notForwarding"};


}
}

