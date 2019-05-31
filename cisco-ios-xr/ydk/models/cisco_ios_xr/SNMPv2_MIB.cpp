
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMPv2_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMPv2_MIB {

SNMPv2MIB::SNMPv2MIB()
    :
    system(std::make_shared<SNMPv2MIB::System>())
    , snmp(std::make_shared<SNMPv2MIB::Snmp>())
    , snmpset(std::make_shared<SNMPv2MIB::SnmpSet>())
    , sysortable(std::make_shared<SNMPv2MIB::SysORTable>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> SNMPv2MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            snmpset = std::make_shared<SNMPv2MIB::SnmpSet>();
        }
        return snmpset;
    }

    if(child_yang_name == "sysORTable")
    {
        if(sysortable == nullptr)
        {
            sysortable = std::make_shared<SNMPv2MIB::SysORTable>();
        }
        return sysortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPv2MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(snmpset != nullptr)
    {
        _children["snmpSet"] = snmpset;
    }

    if(sysortable != nullptr)
    {
        _children["sysORTable"] = sysortable;
    }

    return _children;
}

void SNMPv2MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPv2MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPv2MIB::clone_ptr() const
{
    return std::make_shared<SNMPv2MIB>();
}

std::string SNMPv2MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SNMPv2MIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SNMPv2MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPv2MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> SNMPv2MIB::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPv2MIB::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    snmpinbadversions{YType::uint32, "snmpInBadVersions"},
    snmpinbadcommunitynames{YType::uint32, "snmpInBadCommunityNames"},
    snmpinbadcommunityuses{YType::uint32, "snmpInBadCommunityUses"},
    snmpinasnparseerrs{YType::uint32, "snmpInASNParseErrs"},
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
    if (is_presence_container) return true;
    return snmpinpkts.is_set
	|| snmpinbadversions.is_set
	|| snmpinbadcommunitynames.is_set
	|| snmpinbadcommunityuses.is_set
	|| snmpinasnparseerrs.is_set
	|| snmpenableauthentraps.is_set
	|| snmpsilentdrops.is_set
	|| snmpproxydrops.is_set;
}

bool SNMPv2MIB::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpinpkts.yfilter)
	|| ydk::is_set(snmpinbadversions.yfilter)
	|| ydk::is_set(snmpinbadcommunitynames.yfilter)
	|| ydk::is_set(snmpinbadcommunityuses.yfilter)
	|| ydk::is_set(snmpinasnparseerrs.yfilter)
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
    if (snmpinbadversions.is_set || is_set(snmpinbadversions.yfilter)) leaf_name_data.push_back(snmpinbadversions.get_name_leafdata());
    if (snmpinbadcommunitynames.is_set || is_set(snmpinbadcommunitynames.yfilter)) leaf_name_data.push_back(snmpinbadcommunitynames.get_name_leafdata());
    if (snmpinbadcommunityuses.is_set || is_set(snmpinbadcommunityuses.yfilter)) leaf_name_data.push_back(snmpinbadcommunityuses.get_name_leafdata());
    if (snmpinasnparseerrs.is_set || is_set(snmpinasnparseerrs.yfilter)) leaf_name_data.push_back(snmpinasnparseerrs.get_name_leafdata());
    if (snmpenableauthentraps.is_set || is_set(snmpenableauthentraps.yfilter)) leaf_name_data.push_back(snmpenableauthentraps.get_name_leafdata());
    if (snmpsilentdrops.is_set || is_set(snmpsilentdrops.yfilter)) leaf_name_data.push_back(snmpsilentdrops.get_name_leafdata());
    if (snmpproxydrops.is_set || is_set(snmpproxydrops.yfilter)) leaf_name_data.push_back(snmpproxydrops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPv2MIB::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPv2MIB::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPv2MIB::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpInPkts")
    {
        snmpinpkts = value;
        snmpinpkts.value_namespace = name_space;
        snmpinpkts.value_namespace_prefix = name_space_prefix;
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
    if(name == "snmpInPkts" || name == "snmpInBadVersions" || name == "snmpInBadCommunityNames" || name == "snmpInBadCommunityUses" || name == "snmpInASNParseErrs" || name == "snmpEnableAuthenTraps" || name == "snmpSilentDrops" || name == "snmpProxyDrops")
        return true;
    return false;
}

SNMPv2MIB::SnmpSet::SnmpSet()
    :
    snmpsetserialno{YType::int32, "snmpSetSerialNo"}
{

    yang_name = "snmpSet"; yang_parent_name = "SNMPv2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPv2MIB::SnmpSet::~SnmpSet()
{
}

bool SNMPv2MIB::SnmpSet::has_data() const
{
    if (is_presence_container) return true;
    return snmpsetserialno.is_set;
}

bool SNMPv2MIB::SnmpSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpsetserialno.yfilter);
}

std::string SNMPv2MIB::SnmpSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::SnmpSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpSet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::SnmpSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpsetserialno.is_set || is_set(snmpsetserialno.yfilter)) leaf_name_data.push_back(snmpsetserialno.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPv2MIB::SnmpSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPv2MIB::SnmpSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPv2MIB::SnmpSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpSetSerialNo")
    {
        snmpsetserialno = value;
        snmpsetserialno.value_namespace = name_space;
        snmpsetserialno.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPv2MIB::SnmpSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpSetSerialNo")
    {
        snmpsetserialno.yfilter = yfilter;
    }
}

bool SNMPv2MIB::SnmpSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpSetSerialNo")
        return true;
    return false;
}

SNMPv2MIB::SysORTable::SysORTable()
    :
    sysorentry(this, {"sysorindex"})
{

    yang_name = "sysORTable"; yang_parent_name = "SNMPv2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPv2MIB::SysORTable::~SysORTable()
{
}

bool SNMPv2MIB::SysORTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sysorentry.len(); index++)
    {
        if(sysorentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPv2MIB::SysORTable::has_operation() const
{
    for (std::size_t index=0; index<sysorentry.len(); index++)
    {
        if(sysorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPv2MIB::SysORTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::SysORTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysORTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::SysORTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPv2MIB::SysORTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sysOREntry")
    {
        auto ent_ = std::make_shared<SNMPv2MIB::SysORTable::SysOREntry>();
        ent_->parent = this;
        sysorentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPv2MIB::SysORTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sysorentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPv2MIB::SysORTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPv2MIB::SysORTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPv2MIB::SysORTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysOREntry")
        return true;
    return false;
}

SNMPv2MIB::SysORTable::SysOREntry::SysOREntry()
    :
    sysorindex{YType::int32, "sysORIndex"},
    sysorid{YType::str, "sysORID"},
    sysordescr{YType::str, "sysORDescr"},
    sysoruptime{YType::uint32, "sysORUpTime"}
{

    yang_name = "sysOREntry"; yang_parent_name = "sysORTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPv2MIB::SysORTable::SysOREntry::~SysOREntry()
{
}

bool SNMPv2MIB::SysORTable::SysOREntry::has_data() const
{
    if (is_presence_container) return true;
    return sysorindex.is_set
	|| sysorid.is_set
	|| sysordescr.is_set
	|| sysoruptime.is_set;
}

bool SNMPv2MIB::SysORTable::SysOREntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysorindex.yfilter)
	|| ydk::is_set(sysorid.yfilter)
	|| ydk::is_set(sysordescr.yfilter)
	|| ydk::is_set(sysoruptime.yfilter);
}

std::string SNMPv2MIB::SysORTable::SysOREntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB/sysORTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPv2MIB::SysORTable::SysOREntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysOREntry";
    ADD_KEY_TOKEN(sysorindex, "sysORIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPv2MIB::SysORTable::SysOREntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysorindex.is_set || is_set(sysorindex.yfilter)) leaf_name_data.push_back(sysorindex.get_name_leafdata());
    if (sysorid.is_set || is_set(sysorid.yfilter)) leaf_name_data.push_back(sysorid.get_name_leafdata());
    if (sysordescr.is_set || is_set(sysordescr.yfilter)) leaf_name_data.push_back(sysordescr.get_name_leafdata());
    if (sysoruptime.is_set || is_set(sysoruptime.yfilter)) leaf_name_data.push_back(sysoruptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPv2MIB::SysORTable::SysOREntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPv2MIB::SysORTable::SysOREntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPv2MIB::SysORTable::SysOREntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SNMPv2MIB::SysORTable::SysOREntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SNMPv2MIB::SysORTable::SysOREntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysORIndex" || name == "sysORID" || name == "sysORDescr" || name == "sysORUpTime")
        return true;
    return false;
}

const Enum::YLeaf SnmpEnableAuthenTrapsType::enabled {1, "enabled"};
const Enum::YLeaf SnmpEnableAuthenTrapsType::disabled {2, "disabled"};


}
}

