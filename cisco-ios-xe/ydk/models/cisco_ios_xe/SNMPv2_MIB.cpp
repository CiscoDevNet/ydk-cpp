
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMPv2_MIB.hpp"

namespace ydk {
namespace SNMPv2_MIB {

Snmpv2Mib::Snmpv2Mib()
    :
    snmp(std::make_shared<Snmpv2Mib::Snmp>())
	,snmpset(std::make_shared<Snmpv2Mib::Snmpset>())
	,sysortable(std::make_shared<Snmpv2Mib::Sysortable>())
	,system(std::make_shared<Snmpv2Mib::System>())
{
    snmp->parent = this;

    snmpset->parent = this;

    sysortable->parent = this;

    system->parent = this;

    yang_name = "SNMPv2-MIB"; yang_parent_name = "SNMPv2-MIB";
}

Snmpv2Mib::~Snmpv2Mib()
{
}

bool Snmpv2Mib::has_data() const
{
    return (snmp !=  nullptr && snmp->has_data())
	|| (snmpset !=  nullptr && snmpset->has_data())
	|| (sysortable !=  nullptr && sysortable->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool Snmpv2Mib::has_operation() const
{
    return is_set(operation)
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (snmpset !=  nullptr && snmpset->has_operation())
	|| (sysortable !=  nullptr && sysortable->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string Snmpv2Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMPv2-MIB:SNMPv2-MIB";

    return path_buffer.str();

}

const EntityPath Snmpv2Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Snmpv2Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Snmpv2Mib::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "snmpSet")
    {
        if(snmpset == nullptr)
        {
            snmpset = std::make_shared<Snmpv2Mib::Snmpset>();
        }
        return snmpset;
    }

    if(child_yang_name == "sysORTable")
    {
        if(sysortable == nullptr)
        {
            sysortable = std::make_shared<Snmpv2Mib::Sysortable>();
        }
        return sysortable;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Snmpv2Mib::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmpv2Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void Snmpv2Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Snmpv2Mib::clone_ptr() const
{
    return std::make_shared<Snmpv2Mib>();
}

std::string Snmpv2Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Snmpv2Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Snmpv2Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Snmpv2Mib::System::System()
    :
    syscontact{YType::str, "sysContact"},
    sysdescr{YType::str, "sysDescr"},
    syslocation{YType::str, "sysLocation"},
    sysname{YType::str, "sysName"},
    sysobjectid{YType::str, "sysObjectID"},
    sysorlastchange{YType::uint32, "sysORLastChange"},
    sysservices{YType::int32, "sysServices"},
    sysuptime{YType::uint32, "sysUpTime"}
{
    yang_name = "system"; yang_parent_name = "SNMPv2-MIB";
}

Snmpv2Mib::System::~System()
{
}

bool Snmpv2Mib::System::has_data() const
{
    return syscontact.is_set
	|| sysdescr.is_set
	|| syslocation.is_set
	|| sysname.is_set
	|| sysobjectid.is_set
	|| sysorlastchange.is_set
	|| sysservices.is_set
	|| sysuptime.is_set;
}

bool Snmpv2Mib::System::has_operation() const
{
    return is_set(operation)
	|| is_set(syscontact.operation)
	|| is_set(sysdescr.operation)
	|| is_set(syslocation.operation)
	|| is_set(sysname.operation)
	|| is_set(sysobjectid.operation)
	|| is_set(sysorlastchange.operation)
	|| is_set(sysservices.operation)
	|| is_set(sysuptime.operation);
}

std::string Snmpv2Mib::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath Snmpv2Mib::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syscontact.is_set || is_set(syscontact.operation)) leaf_name_data.push_back(syscontact.get_name_leafdata());
    if (sysdescr.is_set || is_set(sysdescr.operation)) leaf_name_data.push_back(sysdescr.get_name_leafdata());
    if (syslocation.is_set || is_set(syslocation.operation)) leaf_name_data.push_back(syslocation.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.operation)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (sysobjectid.is_set || is_set(sysobjectid.operation)) leaf_name_data.push_back(sysobjectid.get_name_leafdata());
    if (sysorlastchange.is_set || is_set(sysorlastchange.operation)) leaf_name_data.push_back(sysorlastchange.get_name_leafdata());
    if (sysservices.is_set || is_set(sysservices.operation)) leaf_name_data.push_back(sysservices.get_name_leafdata());
    if (sysuptime.is_set || is_set(sysuptime.operation)) leaf_name_data.push_back(sysuptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmpv2Mib::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmpv2Mib::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmpv2Mib::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sysContact")
    {
        syscontact = value;
    }
    if(value_path == "sysDescr")
    {
        sysdescr = value;
    }
    if(value_path == "sysLocation")
    {
        syslocation = value;
    }
    if(value_path == "sysName")
    {
        sysname = value;
    }
    if(value_path == "sysObjectID")
    {
        sysobjectid = value;
    }
    if(value_path == "sysORLastChange")
    {
        sysorlastchange = value;
    }
    if(value_path == "sysServices")
    {
        sysservices = value;
    }
    if(value_path == "sysUpTime")
    {
        sysuptime = value;
    }
}

Snmpv2Mib::Snmp::Snmp()
    :
    snmpenableauthentraps{YType::enumeration, "snmpEnableAuthenTraps"},
    snmpinasnparseerrs{YType::uint32, "snmpInASNParseErrs"},
    snmpinbadcommunitynames{YType::uint32, "snmpInBadCommunityNames"},
    snmpinbadcommunityuses{YType::uint32, "snmpInBadCommunityUses"},
    snmpinbadvalues{YType::uint32, "snmpInBadValues"},
    snmpinbadversions{YType::uint32, "snmpInBadVersions"},
    snmpingenerrs{YType::uint32, "snmpInGenErrs"},
    snmpingetnexts{YType::uint32, "snmpInGetNexts"},
    snmpingetrequests{YType::uint32, "snmpInGetRequests"},
    snmpingetresponses{YType::uint32, "snmpInGetResponses"},
    snmpinnosuchnames{YType::uint32, "snmpInNoSuchNames"},
    snmpinpkts{YType::uint32, "snmpInPkts"},
    snmpinreadonlys{YType::uint32, "snmpInReadOnlys"},
    snmpinsetrequests{YType::uint32, "snmpInSetRequests"},
    snmpintoobigs{YType::uint32, "snmpInTooBigs"},
    snmpintotalreqvars{YType::uint32, "snmpInTotalReqVars"},
    snmpintotalsetvars{YType::uint32, "snmpInTotalSetVars"},
    snmpintraps{YType::uint32, "snmpInTraps"},
    snmpoutbadvalues{YType::uint32, "snmpOutBadValues"},
    snmpoutgenerrs{YType::uint32, "snmpOutGenErrs"},
    snmpoutgetnexts{YType::uint32, "snmpOutGetNexts"},
    snmpoutgetrequests{YType::uint32, "snmpOutGetRequests"},
    snmpoutgetresponses{YType::uint32, "snmpOutGetResponses"},
    snmpoutnosuchnames{YType::uint32, "snmpOutNoSuchNames"},
    snmpoutpkts{YType::uint32, "snmpOutPkts"},
    snmpoutsetrequests{YType::uint32, "snmpOutSetRequests"},
    snmpouttoobigs{YType::uint32, "snmpOutTooBigs"},
    snmpouttraps{YType::uint32, "snmpOutTraps"},
    snmpproxydrops{YType::uint32, "snmpProxyDrops"},
    snmpsilentdrops{YType::uint32, "snmpSilentDrops"}
{
    yang_name = "snmp"; yang_parent_name = "SNMPv2-MIB";
}

Snmpv2Mib::Snmp::~Snmp()
{
}

bool Snmpv2Mib::Snmp::has_data() const
{
    return snmpenableauthentraps.is_set
	|| snmpinasnparseerrs.is_set
	|| snmpinbadcommunitynames.is_set
	|| snmpinbadcommunityuses.is_set
	|| snmpinbadvalues.is_set
	|| snmpinbadversions.is_set
	|| snmpingenerrs.is_set
	|| snmpingetnexts.is_set
	|| snmpingetrequests.is_set
	|| snmpingetresponses.is_set
	|| snmpinnosuchnames.is_set
	|| snmpinpkts.is_set
	|| snmpinreadonlys.is_set
	|| snmpinsetrequests.is_set
	|| snmpintoobigs.is_set
	|| snmpintotalreqvars.is_set
	|| snmpintotalsetvars.is_set
	|| snmpintraps.is_set
	|| snmpoutbadvalues.is_set
	|| snmpoutgenerrs.is_set
	|| snmpoutgetnexts.is_set
	|| snmpoutgetrequests.is_set
	|| snmpoutgetresponses.is_set
	|| snmpoutnosuchnames.is_set
	|| snmpoutpkts.is_set
	|| snmpoutsetrequests.is_set
	|| snmpouttoobigs.is_set
	|| snmpouttraps.is_set
	|| snmpproxydrops.is_set
	|| snmpsilentdrops.is_set;
}

bool Snmpv2Mib::Snmp::has_operation() const
{
    return is_set(operation)
	|| is_set(snmpenableauthentraps.operation)
	|| is_set(snmpinasnparseerrs.operation)
	|| is_set(snmpinbadcommunitynames.operation)
	|| is_set(snmpinbadcommunityuses.operation)
	|| is_set(snmpinbadvalues.operation)
	|| is_set(snmpinbadversions.operation)
	|| is_set(snmpingenerrs.operation)
	|| is_set(snmpingetnexts.operation)
	|| is_set(snmpingetrequests.operation)
	|| is_set(snmpingetresponses.operation)
	|| is_set(snmpinnosuchnames.operation)
	|| is_set(snmpinpkts.operation)
	|| is_set(snmpinreadonlys.operation)
	|| is_set(snmpinsetrequests.operation)
	|| is_set(snmpintoobigs.operation)
	|| is_set(snmpintotalreqvars.operation)
	|| is_set(snmpintotalsetvars.operation)
	|| is_set(snmpintraps.operation)
	|| is_set(snmpoutbadvalues.operation)
	|| is_set(snmpoutgenerrs.operation)
	|| is_set(snmpoutgetnexts.operation)
	|| is_set(snmpoutgetrequests.operation)
	|| is_set(snmpoutgetresponses.operation)
	|| is_set(snmpoutnosuchnames.operation)
	|| is_set(snmpoutpkts.operation)
	|| is_set(snmpoutsetrequests.operation)
	|| is_set(snmpouttoobigs.operation)
	|| is_set(snmpouttraps.operation)
	|| is_set(snmpproxydrops.operation)
	|| is_set(snmpsilentdrops.operation);
}

std::string Snmpv2Mib::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Snmpv2Mib::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpenableauthentraps.is_set || is_set(snmpenableauthentraps.operation)) leaf_name_data.push_back(snmpenableauthentraps.get_name_leafdata());
    if (snmpinasnparseerrs.is_set || is_set(snmpinasnparseerrs.operation)) leaf_name_data.push_back(snmpinasnparseerrs.get_name_leafdata());
    if (snmpinbadcommunitynames.is_set || is_set(snmpinbadcommunitynames.operation)) leaf_name_data.push_back(snmpinbadcommunitynames.get_name_leafdata());
    if (snmpinbadcommunityuses.is_set || is_set(snmpinbadcommunityuses.operation)) leaf_name_data.push_back(snmpinbadcommunityuses.get_name_leafdata());
    if (snmpinbadvalues.is_set || is_set(snmpinbadvalues.operation)) leaf_name_data.push_back(snmpinbadvalues.get_name_leafdata());
    if (snmpinbadversions.is_set || is_set(snmpinbadversions.operation)) leaf_name_data.push_back(snmpinbadversions.get_name_leafdata());
    if (snmpingenerrs.is_set || is_set(snmpingenerrs.operation)) leaf_name_data.push_back(snmpingenerrs.get_name_leafdata());
    if (snmpingetnexts.is_set || is_set(snmpingetnexts.operation)) leaf_name_data.push_back(snmpingetnexts.get_name_leafdata());
    if (snmpingetrequests.is_set || is_set(snmpingetrequests.operation)) leaf_name_data.push_back(snmpingetrequests.get_name_leafdata());
    if (snmpingetresponses.is_set || is_set(snmpingetresponses.operation)) leaf_name_data.push_back(snmpingetresponses.get_name_leafdata());
    if (snmpinnosuchnames.is_set || is_set(snmpinnosuchnames.operation)) leaf_name_data.push_back(snmpinnosuchnames.get_name_leafdata());
    if (snmpinpkts.is_set || is_set(snmpinpkts.operation)) leaf_name_data.push_back(snmpinpkts.get_name_leafdata());
    if (snmpinreadonlys.is_set || is_set(snmpinreadonlys.operation)) leaf_name_data.push_back(snmpinreadonlys.get_name_leafdata());
    if (snmpinsetrequests.is_set || is_set(snmpinsetrequests.operation)) leaf_name_data.push_back(snmpinsetrequests.get_name_leafdata());
    if (snmpintoobigs.is_set || is_set(snmpintoobigs.operation)) leaf_name_data.push_back(snmpintoobigs.get_name_leafdata());
    if (snmpintotalreqvars.is_set || is_set(snmpintotalreqvars.operation)) leaf_name_data.push_back(snmpintotalreqvars.get_name_leafdata());
    if (snmpintotalsetvars.is_set || is_set(snmpintotalsetvars.operation)) leaf_name_data.push_back(snmpintotalsetvars.get_name_leafdata());
    if (snmpintraps.is_set || is_set(snmpintraps.operation)) leaf_name_data.push_back(snmpintraps.get_name_leafdata());
    if (snmpoutbadvalues.is_set || is_set(snmpoutbadvalues.operation)) leaf_name_data.push_back(snmpoutbadvalues.get_name_leafdata());
    if (snmpoutgenerrs.is_set || is_set(snmpoutgenerrs.operation)) leaf_name_data.push_back(snmpoutgenerrs.get_name_leafdata());
    if (snmpoutgetnexts.is_set || is_set(snmpoutgetnexts.operation)) leaf_name_data.push_back(snmpoutgetnexts.get_name_leafdata());
    if (snmpoutgetrequests.is_set || is_set(snmpoutgetrequests.operation)) leaf_name_data.push_back(snmpoutgetrequests.get_name_leafdata());
    if (snmpoutgetresponses.is_set || is_set(snmpoutgetresponses.operation)) leaf_name_data.push_back(snmpoutgetresponses.get_name_leafdata());
    if (snmpoutnosuchnames.is_set || is_set(snmpoutnosuchnames.operation)) leaf_name_data.push_back(snmpoutnosuchnames.get_name_leafdata());
    if (snmpoutpkts.is_set || is_set(snmpoutpkts.operation)) leaf_name_data.push_back(snmpoutpkts.get_name_leafdata());
    if (snmpoutsetrequests.is_set || is_set(snmpoutsetrequests.operation)) leaf_name_data.push_back(snmpoutsetrequests.get_name_leafdata());
    if (snmpouttoobigs.is_set || is_set(snmpouttoobigs.operation)) leaf_name_data.push_back(snmpouttoobigs.get_name_leafdata());
    if (snmpouttraps.is_set || is_set(snmpouttraps.operation)) leaf_name_data.push_back(snmpouttraps.get_name_leafdata());
    if (snmpproxydrops.is_set || is_set(snmpproxydrops.operation)) leaf_name_data.push_back(snmpproxydrops.get_name_leafdata());
    if (snmpsilentdrops.is_set || is_set(snmpsilentdrops.operation)) leaf_name_data.push_back(snmpsilentdrops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmpv2Mib::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmpv2Mib::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmpv2Mib::Snmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmpEnableAuthenTraps")
    {
        snmpenableauthentraps = value;
    }
    if(value_path == "snmpInASNParseErrs")
    {
        snmpinasnparseerrs = value;
    }
    if(value_path == "snmpInBadCommunityNames")
    {
        snmpinbadcommunitynames = value;
    }
    if(value_path == "snmpInBadCommunityUses")
    {
        snmpinbadcommunityuses = value;
    }
    if(value_path == "snmpInBadValues")
    {
        snmpinbadvalues = value;
    }
    if(value_path == "snmpInBadVersions")
    {
        snmpinbadversions = value;
    }
    if(value_path == "snmpInGenErrs")
    {
        snmpingenerrs = value;
    }
    if(value_path == "snmpInGetNexts")
    {
        snmpingetnexts = value;
    }
    if(value_path == "snmpInGetRequests")
    {
        snmpingetrequests = value;
    }
    if(value_path == "snmpInGetResponses")
    {
        snmpingetresponses = value;
    }
    if(value_path == "snmpInNoSuchNames")
    {
        snmpinnosuchnames = value;
    }
    if(value_path == "snmpInPkts")
    {
        snmpinpkts = value;
    }
    if(value_path == "snmpInReadOnlys")
    {
        snmpinreadonlys = value;
    }
    if(value_path == "snmpInSetRequests")
    {
        snmpinsetrequests = value;
    }
    if(value_path == "snmpInTooBigs")
    {
        snmpintoobigs = value;
    }
    if(value_path == "snmpInTotalReqVars")
    {
        snmpintotalreqvars = value;
    }
    if(value_path == "snmpInTotalSetVars")
    {
        snmpintotalsetvars = value;
    }
    if(value_path == "snmpInTraps")
    {
        snmpintraps = value;
    }
    if(value_path == "snmpOutBadValues")
    {
        snmpoutbadvalues = value;
    }
    if(value_path == "snmpOutGenErrs")
    {
        snmpoutgenerrs = value;
    }
    if(value_path == "snmpOutGetNexts")
    {
        snmpoutgetnexts = value;
    }
    if(value_path == "snmpOutGetRequests")
    {
        snmpoutgetrequests = value;
    }
    if(value_path == "snmpOutGetResponses")
    {
        snmpoutgetresponses = value;
    }
    if(value_path == "snmpOutNoSuchNames")
    {
        snmpoutnosuchnames = value;
    }
    if(value_path == "snmpOutPkts")
    {
        snmpoutpkts = value;
    }
    if(value_path == "snmpOutSetRequests")
    {
        snmpoutsetrequests = value;
    }
    if(value_path == "snmpOutTooBigs")
    {
        snmpouttoobigs = value;
    }
    if(value_path == "snmpOutTraps")
    {
        snmpouttraps = value;
    }
    if(value_path == "snmpProxyDrops")
    {
        snmpproxydrops = value;
    }
    if(value_path == "snmpSilentDrops")
    {
        snmpsilentdrops = value;
    }
}

Snmpv2Mib::Snmpset::Snmpset()
    :
    snmpsetserialno{YType::int32, "snmpSetSerialNo"}
{
    yang_name = "snmpSet"; yang_parent_name = "SNMPv2-MIB";
}

Snmpv2Mib::Snmpset::~Snmpset()
{
}

bool Snmpv2Mib::Snmpset::has_data() const
{
    return snmpsetserialno.is_set;
}

bool Snmpv2Mib::Snmpset::has_operation() const
{
    return is_set(operation)
	|| is_set(snmpsetserialno.operation);
}

std::string Snmpv2Mib::Snmpset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpSet";

    return path_buffer.str();

}

const EntityPath Snmpv2Mib::Snmpset::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpsetserialno.is_set || is_set(snmpsetserialno.operation)) leaf_name_data.push_back(snmpsetserialno.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmpv2Mib::Snmpset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmpv2Mib::Snmpset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmpv2Mib::Snmpset::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmpSetSerialNo")
    {
        snmpsetserialno = value;
    }
}

Snmpv2Mib::Sysortable::Sysortable()
{
    yang_name = "sysORTable"; yang_parent_name = "SNMPv2-MIB";
}

Snmpv2Mib::Sysortable::~Sysortable()
{
}

bool Snmpv2Mib::Sysortable::has_data() const
{
    for (std::size_t index=0; index<sysorentry.size(); index++)
    {
        if(sysorentry[index]->has_data())
            return true;
    }
    return false;
}

bool Snmpv2Mib::Sysortable::has_operation() const
{
    for (std::size_t index=0; index<sysorentry.size(); index++)
    {
        if(sysorentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Snmpv2Mib::Sysortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysORTable";

    return path_buffer.str();

}

const EntityPath Snmpv2Mib::Sysortable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMPv2-MIB:SNMPv2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmpv2Mib::Sysortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Snmpv2Mib::Sysortable::Sysorentry>();
        c->parent = this;
        sysorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmpv2Mib::Sysortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sysorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Snmpv2Mib::Sysortable::set_value(const std::string & value_path, std::string value)
{
}

Snmpv2Mib::Sysortable::Sysorentry::Sysorentry()
    :
    sysorindex{YType::int32, "sysORIndex"},
    sysordescr{YType::str, "sysORDescr"},
    sysorid{YType::str, "sysORID"},
    sysoruptime{YType::uint32, "sysORUpTime"}
{
    yang_name = "sysOREntry"; yang_parent_name = "sysORTable";
}

Snmpv2Mib::Sysortable::Sysorentry::~Sysorentry()
{
}

bool Snmpv2Mib::Sysortable::Sysorentry::has_data() const
{
    return sysorindex.is_set
	|| sysordescr.is_set
	|| sysorid.is_set
	|| sysoruptime.is_set;
}

bool Snmpv2Mib::Sysortable::Sysorentry::has_operation() const
{
    return is_set(operation)
	|| is_set(sysorindex.operation)
	|| is_set(sysordescr.operation)
	|| is_set(sysorid.operation)
	|| is_set(sysoruptime.operation);
}

std::string Snmpv2Mib::Sysortable::Sysorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysOREntry" <<"[sysORIndex='" <<sysorindex <<"']";

    return path_buffer.str();

}

const EntityPath Snmpv2Mib::Sysortable::Sysorentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMPv2-MIB:SNMPv2-MIB/sysORTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysorindex.is_set || is_set(sysorindex.operation)) leaf_name_data.push_back(sysorindex.get_name_leafdata());
    if (sysordescr.is_set || is_set(sysordescr.operation)) leaf_name_data.push_back(sysordescr.get_name_leafdata());
    if (sysorid.is_set || is_set(sysorid.operation)) leaf_name_data.push_back(sysorid.get_name_leafdata());
    if (sysoruptime.is_set || is_set(sysoruptime.operation)) leaf_name_data.push_back(sysoruptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Snmpv2Mib::Sysortable::Sysorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Snmpv2Mib::Sysortable::Sysorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Snmpv2Mib::Sysortable::Sysorentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sysORIndex")
    {
        sysorindex = value;
    }
    if(value_path == "sysORDescr")
    {
        sysordescr = value;
    }
    if(value_path == "sysORID")
    {
        sysorid = value;
    }
    if(value_path == "sysORUpTime")
    {
        sysoruptime = value;
    }
}

const Enum::YLeaf Snmpv2Mib::Snmp::SnmpenableauthentrapsEnum::enabled {1, "enabled"};
const Enum::YLeaf Snmpv2Mib::Snmp::SnmpenableauthentrapsEnum::disabled {2, "disabled"};


}
}

