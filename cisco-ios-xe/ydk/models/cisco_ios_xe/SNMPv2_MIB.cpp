
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMPv2_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SNMPv2_MIB {

SNMPv2MIB::SNMPv2MIB()
    :
    system(std::make_shared<SNMPv2MIB::System>())
	,snmp(std::make_shared<SNMPv2MIB::Snmp>())
	,snmpset(std::make_shared<SNMPv2MIB::Snmpset>())
	,sysortable(std::make_shared<SNMPv2MIB::Sysortable>())
{
    system->parent = this;
    snmp->parent = this;
    snmpset->parent = this;
    sysortable->parent = this;

    yang_name = "SNMPv2-MIB"; yang_parent_name = "SNMPv2-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

SNMPv2MIB::~SNMPv2MIB()
{
}

bool SNMPv2MIB::has_data() const
{
    return (system !=  nullptr && system->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (snmpset !=  nullptr && snmpset->has_data())
	|| (sysortable !=  nullptr && sysortable->has_data());
}

bool SNMPv2MIB::has_operation() const
{
    return is_set(yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (snmpset !=  nullptr && snmpset->has_operation())
	|| (sysortable !=  nullptr && sysortable->has_operation());
}

std::string SNMPv2MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPv2MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<SNMPv2MIB::System>();
        }
        return system;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<SNMPv2MIB::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "snmpSet")
    {
        if(snmpset == nullptr)
        {
            snmpset = std::make_shared<SNMPv2MIB::Snmpset>();
        }
        return snmpset;
    }

    if(child_yang_name == "sysORTable")
    {
        if(sysortable == nullptr)
        {
            sysortable = std::make_shared<SNMPv2MIB::Sysortable>();
        }
        return sysortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPv2MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(snmpset != nullptr)
    {
        children["snmpSet"] = snmpset;
    }

    if(sysortable != nullptr)
    {
        children["sysORTable"] = sysortable;
    }

    return children;
}

void SNMPv2MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPv2MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SNMPv2MIB::clone_ptr() const
{
    return std::make_shared<SNMPv2MIB>();
}

std::string SNMPv2MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SNMPv2MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SNMPv2MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPv2MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SNMPv2MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "snmp" || name == "snmpSet" || name == "sysORTable")
        return true;
    return false;
}

SNMPv2MIB::System::System()
    :
    sysdescr{YType::str, "sysDescr"},
    sysobjectid{YType::str, "sysObjectID"},
    sysuptime{YType::uint32, "sysUpTime"},
    syscontact{YType::str, "sysContact"},
    sysname{YType::str, "sysName"},
    syslocation{YType::str, "sysLocation"},
    sysservices{YType::int32, "sysServices"},
    sysorlastchange{YType::uint32, "sysORLastChange"}
{

    yang_name = "system"; yang_parent_name = "SNMPv2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPv2MIB::System::~System()
{
}

bool SNMPv2MIB::System::has_data() const
{
    return sysdescr.is_set
	|| sysobjectid.is_set
	|| sysuptime.is_set
	|| syscontact.is_set
	|| sysname.is_set
	|| syslocation.is_set
	|| sysservices.is_set
	|| sysorlastchange.is_set;
}

bool SNMPv2MIB::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysdescr.yfilter)
	|| ydk::is_set(sysobjectid.yfilter)
	|| ydk::is_set(sysuptime.yfilter)
	|| ydk::is_set(syscontact.yfilter)
	|| ydk::is_set(sysname.yfilter)
	|| ydk::is_set(syslocation.yfilter)
	|| ydk::is_set(sysservices.yfilter)
	|| ydk::is_set(sysorlastchange.yfilter);
}

std::string SNMPv2MIB::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysdescr.is_set || is_set(sysdescr.yfilter)) leaf_name_data.push_back(sysdescr.get_name_leafdata());
    if (sysobjectid.is_set || is_set(sysobjectid.yfilter)) leaf_name_data.push_back(sysobjectid.get_name_leafdata());
    if (sysuptime.is_set || is_set(sysuptime.yfilter)) leaf_name_data.push_back(sysuptime.get_name_leafdata());
    if (syscontact.is_set || is_set(syscontact.yfilter)) leaf_name_data.push_back(syscontact.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.yfilter)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (syslocation.is_set || is_set(syslocation.yfilter)) leaf_name_data.push_back(syslocation.get_name_leafdata());
    if (sysservices.is_set || is_set(sysservices.yfilter)) leaf_name_data.push_back(sysservices.get_name_leafdata());
    if (sysorlastchange.is_set || is_set(sysorlastchange.yfilter)) leaf_name_data.push_back(sysorlastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPv2MIB::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPv2MIB::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SNMPv2MIB::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sysORLastChange")
    {
        sysorlastchange = value;
        sysorlastchange.value_namespace = name_space;
        sysorlastchange.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPv2MIB::System::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "sysORLastChange")
    {
        sysorlastchange.yfilter = yfilter;
    }
}

bool SNMPv2MIB::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysDescr" || name == "sysObjectID" || name == "sysUpTime" || name == "sysContact" || name == "sysName" || name == "sysLocation" || name == "sysServices" || name == "sysORLastChange")
        return true;
    return false;
}

SNMPv2MIB::Snmp::Snmp()
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
    snmpenableauthentraps{YType::enumeration, "snmpEnableAuthenTraps"},
    snmpsilentdrops{YType::uint32, "snmpSilentDrops"},
    snmpproxydrops{YType::uint32, "snmpProxyDrops"}
{

    yang_name = "snmp"; yang_parent_name = "SNMPv2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPv2MIB::Snmp::~Snmp()
{
}

bool SNMPv2MIB::Snmp::has_data() const
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
	|| snmpenableauthentraps.is_set
	|| snmpsilentdrops.is_set
	|| snmpproxydrops.is_set;
}

bool SNMPv2MIB::Snmp::has_operation() const
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
	|| ydk::is_set(snmpenableauthentraps.yfilter)
	|| ydk::is_set(snmpsilentdrops.yfilter)
	|| ydk::is_set(snmpproxydrops.yfilter);
}

std::string SNMPv2MIB::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::Snmp::get_name_leaf_data() const
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
    if (snmpsilentdrops.is_set || is_set(snmpsilentdrops.yfilter)) leaf_name_data.push_back(snmpsilentdrops.get_name_leafdata());
    if (snmpproxydrops.is_set || is_set(snmpproxydrops.yfilter)) leaf_name_data.push_back(snmpproxydrops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPv2MIB::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPv2MIB::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SNMPv2MIB::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "snmpSilentDrops")
    {
        snmpsilentdrops = value;
        snmpsilentdrops.value_namespace = name_space;
        snmpsilentdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpProxyDrops")
    {
        snmpproxydrops = value;
        snmpproxydrops.value_namespace = name_space;
        snmpproxydrops.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPv2MIB::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "snmpSilentDrops")
    {
        snmpsilentdrops.yfilter = yfilter;
    }
    if(value_path == "snmpProxyDrops")
    {
        snmpproxydrops.yfilter = yfilter;
    }
}

bool SNMPv2MIB::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpInPkts" || name == "snmpOutPkts" || name == "snmpInBadVersions" || name == "snmpInBadCommunityNames" || name == "snmpInBadCommunityUses" || name == "snmpInASNParseErrs" || name == "snmpInTooBigs" || name == "snmpInNoSuchNames" || name == "snmpInBadValues" || name == "snmpInReadOnlys" || name == "snmpInGenErrs" || name == "snmpInTotalReqVars" || name == "snmpInTotalSetVars" || name == "snmpInGetRequests" || name == "snmpInGetNexts" || name == "snmpInSetRequests" || name == "snmpInGetResponses" || name == "snmpInTraps" || name == "snmpOutTooBigs" || name == "snmpOutNoSuchNames" || name == "snmpOutBadValues" || name == "snmpOutGenErrs" || name == "snmpOutGetRequests" || name == "snmpOutGetNexts" || name == "snmpOutSetRequests" || name == "snmpOutGetResponses" || name == "snmpOutTraps" || name == "snmpEnableAuthenTraps" || name == "snmpSilentDrops" || name == "snmpProxyDrops")
        return true;
    return false;
}

SNMPv2MIB::Snmpset::Snmpset()
    :
    snmpsetserialno{YType::int32, "snmpSetSerialNo"}
{

    yang_name = "snmpSet"; yang_parent_name = "SNMPv2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPv2MIB::Snmpset::~Snmpset()
{
}

bool SNMPv2MIB::Snmpset::has_data() const
{
    return snmpsetserialno.is_set;
}

bool SNMPv2MIB::Snmpset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpsetserialno.yfilter);
}

std::string SNMPv2MIB::Snmpset::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::Snmpset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpSet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::Snmpset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpsetserialno.is_set || is_set(snmpsetserialno.yfilter)) leaf_name_data.push_back(snmpsetserialno.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPv2MIB::Snmpset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPv2MIB::Snmpset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SNMPv2MIB::Snmpset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpSetSerialNo")
    {
        snmpsetserialno = value;
        snmpsetserialno.value_namespace = name_space;
        snmpsetserialno.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPv2MIB::Snmpset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpSetSerialNo")
    {
        snmpsetserialno.yfilter = yfilter;
    }
}

bool SNMPv2MIB::Snmpset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpSetSerialNo")
        return true;
    return false;
}

SNMPv2MIB::Sysortable::Sysortable()
{

    yang_name = "sysORTable"; yang_parent_name = "SNMPv2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPv2MIB::Sysortable::~Sysortable()
{
}

bool SNMPv2MIB::Sysortable::has_data() const
{
    for (std::size_t index=0; index<sysorentry.size(); index++)
    {
        if(sysorentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPv2MIB::Sysortable::has_operation() const
{
    for (std::size_t index=0; index<sysorentry.size(); index++)
    {
        if(sysorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPv2MIB::Sysortable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::Sysortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysORTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::Sysortable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPv2MIB::Sysortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sysOREntry")
    {
        for(auto const & c : sysorentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SNMPv2MIB::Sysortable::Sysorentry>();
        c->parent = this;
        sysorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPv2MIB::Sysortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sysorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SNMPv2MIB::Sysortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPv2MIB::Sysortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPv2MIB::Sysortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysOREntry")
        return true;
    return false;
}

SNMPv2MIB::Sysortable::Sysorentry::Sysorentry()
    :
    sysorindex{YType::int32, "sysORIndex"},
    sysorid{YType::str, "sysORID"},
    sysordescr{YType::str, "sysORDescr"},
    sysoruptime{YType::uint32, "sysORUpTime"}
{

    yang_name = "sysOREntry"; yang_parent_name = "sysORTable"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPv2MIB::Sysortable::Sysorentry::~Sysorentry()
{
}

bool SNMPv2MIB::Sysortable::Sysorentry::has_data() const
{
    return sysorindex.is_set
	|| sysorid.is_set
	|| sysordescr.is_set
	|| sysoruptime.is_set;
}

bool SNMPv2MIB::Sysortable::Sysorentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysorindex.yfilter)
	|| ydk::is_set(sysorid.yfilter)
	|| ydk::is_set(sysordescr.yfilter)
	|| ydk::is_set(sysoruptime.yfilter);
}

std::string SNMPv2MIB::Sysortable::Sysorentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/sysORTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::Sysortable::Sysorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysOREntry" <<"[sysORIndex='" <<sysorindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::Sysortable::Sysorentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysorindex.is_set || is_set(sysorindex.yfilter)) leaf_name_data.push_back(sysorindex.get_name_leafdata());
    if (sysorid.is_set || is_set(sysorid.yfilter)) leaf_name_data.push_back(sysorid.get_name_leafdata());
    if (sysordescr.is_set || is_set(sysordescr.yfilter)) leaf_name_data.push_back(sysordescr.get_name_leafdata());
    if (sysoruptime.is_set || is_set(sysoruptime.yfilter)) leaf_name_data.push_back(sysoruptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPv2MIB::Sysortable::Sysorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPv2MIB::Sysortable::Sysorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SNMPv2MIB::Sysortable::Sysorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysORIndex")
    {
        sysorindex = value;
        sysorindex.value_namespace = name_space;
        sysorindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysORID")
    {
        sysorid = value;
        sysorid.value_namespace = name_space;
        sysorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysORDescr")
    {
        sysordescr = value;
        sysordescr.value_namespace = name_space;
        sysordescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysORUpTime")
    {
        sysoruptime = value;
        sysoruptime.value_namespace = name_space;
        sysoruptime.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPv2MIB::Sysortable::Sysorentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysORIndex")
    {
        sysorindex.yfilter = yfilter;
    }
    if(value_path == "sysORID")
    {
        sysorid.yfilter = yfilter;
    }
    if(value_path == "sysORDescr")
    {
        sysordescr.yfilter = yfilter;
    }
    if(value_path == "sysORUpTime")
    {
        sysoruptime.yfilter = yfilter;
    }
}

bool SNMPv2MIB::Sysortable::Sysorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysORIndex" || name == "sysORID" || name == "sysORDescr" || name == "sysORUpTime")
        return true;
    return false;
}

const Enum::YLeaf SNMPv2MIB::Snmp::Snmpenableauthentraps::enabled {1, "enabled"};
const Enum::YLeaf SNMPv2MIB::Snmp::Snmpenableauthentraps::disabled {2, "disabled"};


}
}

