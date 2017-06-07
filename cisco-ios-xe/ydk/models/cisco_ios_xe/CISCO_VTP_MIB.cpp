
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VTP_MIB.hpp"

namespace ydk {
namespace CISCO_VTP_MIB {

CiscoVtpMib::CiscoVtpMib()
    :
    internalvlaninfo(std::make_shared<CiscoVtpMib::Internalvlaninfo>())
	,managementdomaintable(std::make_shared<CiscoVtpMib::Managementdomaintable>())
	,vlanstatistics(std::make_shared<CiscoVtpMib::Vlanstatistics>())
	,vlantrunkports(std::make_shared<CiscoVtpMib::Vlantrunkports>())
	,vlantrunkporttable(std::make_shared<CiscoVtpMib::Vlantrunkporttable>())
	,vtpauthenticationtable(std::make_shared<CiscoVtpMib::Vtpauthenticationtable>())
	,vtpdatabasetable(std::make_shared<CiscoVtpMib::Vtpdatabasetable>())
	,vtpdiscoverresulttable(std::make_shared<CiscoVtpMib::Vtpdiscoverresulttable>())
	,vtpdiscovertable(std::make_shared<CiscoVtpMib::Vtpdiscovertable>())
	,vtpinternalvlantable(std::make_shared<CiscoVtpMib::Vtpinternalvlantable>())
	,vtpstatus(std::make_shared<CiscoVtpMib::Vtpstatus>())
	,vtpvlanedittable(std::make_shared<CiscoVtpMib::Vtpvlanedittable>())
	,vtpvlanlocalshutdowntable(std::make_shared<CiscoVtpMib::Vtpvlanlocalshutdowntable>())
	,vtpvlantable(std::make_shared<CiscoVtpMib::Vtpvlantable>())
{
    internalvlaninfo->parent = this;

    managementdomaintable->parent = this;

    vlanstatistics->parent = this;

    vlantrunkports->parent = this;

    vlantrunkporttable->parent = this;

    vtpauthenticationtable->parent = this;

    vtpdatabasetable->parent = this;

    vtpdiscoverresulttable->parent = this;

    vtpdiscovertable->parent = this;

    vtpinternalvlantable->parent = this;

    vtpstatus->parent = this;

    vtpvlanedittable->parent = this;

    vtpvlanlocalshutdowntable->parent = this;

    vtpvlantable->parent = this;

    yang_name = "CISCO-VTP-MIB"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::~CiscoVtpMib()
{
}

bool CiscoVtpMib::has_data() const
{
    return (internalvlaninfo !=  nullptr && internalvlaninfo->has_data())
	|| (managementdomaintable !=  nullptr && managementdomaintable->has_data())
	|| (vlanstatistics !=  nullptr && vlanstatistics->has_data())
	|| (vlantrunkports !=  nullptr && vlantrunkports->has_data())
	|| (vlantrunkporttable !=  nullptr && vlantrunkporttable->has_data())
	|| (vtpauthenticationtable !=  nullptr && vtpauthenticationtable->has_data())
	|| (vtpdatabasetable !=  nullptr && vtpdatabasetable->has_data())
	|| (vtpdiscoverresulttable !=  nullptr && vtpdiscoverresulttable->has_data())
	|| (vtpdiscovertable !=  nullptr && vtpdiscovertable->has_data())
	|| (vtpinternalvlantable !=  nullptr && vtpinternalvlantable->has_data())
	|| (vtpstatus !=  nullptr && vtpstatus->has_data())
	|| (vtpvlanedittable !=  nullptr && vtpvlanedittable->has_data())
	|| (vtpvlanlocalshutdowntable !=  nullptr && vtpvlanlocalshutdowntable->has_data())
	|| (vtpvlantable !=  nullptr && vtpvlantable->has_data());
}

bool CiscoVtpMib::has_operation() const
{
    return is_set(operation)
	|| (internalvlaninfo !=  nullptr && internalvlaninfo->has_operation())
	|| (managementdomaintable !=  nullptr && managementdomaintable->has_operation())
	|| (vlanstatistics !=  nullptr && vlanstatistics->has_operation())
	|| (vlantrunkports !=  nullptr && vlantrunkports->has_operation())
	|| (vlantrunkporttable !=  nullptr && vlantrunkporttable->has_operation())
	|| (vtpauthenticationtable !=  nullptr && vtpauthenticationtable->has_operation())
	|| (vtpdatabasetable !=  nullptr && vtpdatabasetable->has_operation())
	|| (vtpdiscoverresulttable !=  nullptr && vtpdiscoverresulttable->has_operation())
	|| (vtpdiscovertable !=  nullptr && vtpdiscovertable->has_operation())
	|| (vtpinternalvlantable !=  nullptr && vtpinternalvlantable->has_operation())
	|| (vtpstatus !=  nullptr && vtpstatus->has_operation())
	|| (vtpvlanedittable !=  nullptr && vtpvlanedittable->has_operation())
	|| (vtpvlanlocalshutdowntable !=  nullptr && vtpvlanlocalshutdowntable->has_operation())
	|| (vtpvlantable !=  nullptr && vtpvlantable->has_operation());
}

std::string CiscoVtpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoVtpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internalVlanInfo")
    {
        if(internalvlaninfo == nullptr)
        {
            internalvlaninfo = std::make_shared<CiscoVtpMib::Internalvlaninfo>();
        }
        return internalvlaninfo;
    }

    if(child_yang_name == "managementDomainTable")
    {
        if(managementdomaintable == nullptr)
        {
            managementdomaintable = std::make_shared<CiscoVtpMib::Managementdomaintable>();
        }
        return managementdomaintable;
    }

    if(child_yang_name == "vlanStatistics")
    {
        if(vlanstatistics == nullptr)
        {
            vlanstatistics = std::make_shared<CiscoVtpMib::Vlanstatistics>();
        }
        return vlanstatistics;
    }

    if(child_yang_name == "vlanTrunkPorts")
    {
        if(vlantrunkports == nullptr)
        {
            vlantrunkports = std::make_shared<CiscoVtpMib::Vlantrunkports>();
        }
        return vlantrunkports;
    }

    if(child_yang_name == "vlanTrunkPortTable")
    {
        if(vlantrunkporttable == nullptr)
        {
            vlantrunkporttable = std::make_shared<CiscoVtpMib::Vlantrunkporttable>();
        }
        return vlantrunkporttable;
    }

    if(child_yang_name == "vtpAuthenticationTable")
    {
        if(vtpauthenticationtable == nullptr)
        {
            vtpauthenticationtable = std::make_shared<CiscoVtpMib::Vtpauthenticationtable>();
        }
        return vtpauthenticationtable;
    }

    if(child_yang_name == "vtpDatabaseTable")
    {
        if(vtpdatabasetable == nullptr)
        {
            vtpdatabasetable = std::make_shared<CiscoVtpMib::Vtpdatabasetable>();
        }
        return vtpdatabasetable;
    }

    if(child_yang_name == "vtpDiscoverResultTable")
    {
        if(vtpdiscoverresulttable == nullptr)
        {
            vtpdiscoverresulttable = std::make_shared<CiscoVtpMib::Vtpdiscoverresulttable>();
        }
        return vtpdiscoverresulttable;
    }

    if(child_yang_name == "vtpDiscoverTable")
    {
        if(vtpdiscovertable == nullptr)
        {
            vtpdiscovertable = std::make_shared<CiscoVtpMib::Vtpdiscovertable>();
        }
        return vtpdiscovertable;
    }

    if(child_yang_name == "vtpInternalVlanTable")
    {
        if(vtpinternalvlantable == nullptr)
        {
            vtpinternalvlantable = std::make_shared<CiscoVtpMib::Vtpinternalvlantable>();
        }
        return vtpinternalvlantable;
    }

    if(child_yang_name == "vtpStatus")
    {
        if(vtpstatus == nullptr)
        {
            vtpstatus = std::make_shared<CiscoVtpMib::Vtpstatus>();
        }
        return vtpstatus;
    }

    if(child_yang_name == "vtpVlanEditTable")
    {
        if(vtpvlanedittable == nullptr)
        {
            vtpvlanedittable = std::make_shared<CiscoVtpMib::Vtpvlanedittable>();
        }
        return vtpvlanedittable;
    }

    if(child_yang_name == "vtpVlanLocalShutdownTable")
    {
        if(vtpvlanlocalshutdowntable == nullptr)
        {
            vtpvlanlocalshutdowntable = std::make_shared<CiscoVtpMib::Vtpvlanlocalshutdowntable>();
        }
        return vtpvlanlocalshutdowntable;
    }

    if(child_yang_name == "vtpVlanTable")
    {
        if(vtpvlantable == nullptr)
        {
            vtpvlantable = std::make_shared<CiscoVtpMib::Vtpvlantable>();
        }
        return vtpvlantable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(internalvlaninfo != nullptr)
    {
        children["internalVlanInfo"] = internalvlaninfo;
    }

    if(managementdomaintable != nullptr)
    {
        children["managementDomainTable"] = managementdomaintable;
    }

    if(vlanstatistics != nullptr)
    {
        children["vlanStatistics"] = vlanstatistics;
    }

    if(vlantrunkports != nullptr)
    {
        children["vlanTrunkPorts"] = vlantrunkports;
    }

    if(vlantrunkporttable != nullptr)
    {
        children["vlanTrunkPortTable"] = vlantrunkporttable;
    }

    if(vtpauthenticationtable != nullptr)
    {
        children["vtpAuthenticationTable"] = vtpauthenticationtable;
    }

    if(vtpdatabasetable != nullptr)
    {
        children["vtpDatabaseTable"] = vtpdatabasetable;
    }

    if(vtpdiscoverresulttable != nullptr)
    {
        children["vtpDiscoverResultTable"] = vtpdiscoverresulttable;
    }

    if(vtpdiscovertable != nullptr)
    {
        children["vtpDiscoverTable"] = vtpdiscovertable;
    }

    if(vtpinternalvlantable != nullptr)
    {
        children["vtpInternalVlanTable"] = vtpinternalvlantable;
    }

    if(vtpstatus != nullptr)
    {
        children["vtpStatus"] = vtpstatus;
    }

    if(vtpvlanedittable != nullptr)
    {
        children["vtpVlanEditTable"] = vtpvlanedittable;
    }

    if(vtpvlanlocalshutdowntable != nullptr)
    {
        children["vtpVlanLocalShutdownTable"] = vtpvlanlocalshutdowntable;
    }

    if(vtpvlantable != nullptr)
    {
        children["vtpVlanTable"] = vtpvlantable;
    }

    return children;
}

void CiscoVtpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoVtpMib::clone_ptr() const
{
    return std::make_shared<CiscoVtpMib>();
}

std::string CiscoVtpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoVtpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoVtpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoVtpMib::Vtpstatus::Vtpstatus()
    :
    vtpmaxvlanstorage{YType::int32, "vtpMaxVlanStorage"},
    vtpnotificationsenabled{YType::boolean, "vtpNotificationsEnabled"},
    vtpversion{YType::enumeration, "vtpVersion"},
    vtpvlancreatednotifenabled{YType::boolean, "vtpVlanCreatedNotifEnabled"},
    vtpvlandeletednotifenabled{YType::boolean, "vtpVlanDeletedNotifEnabled"}
{
    yang_name = "vtpStatus"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpstatus::~Vtpstatus()
{
}

bool CiscoVtpMib::Vtpstatus::has_data() const
{
    return vtpmaxvlanstorage.is_set
	|| vtpnotificationsenabled.is_set
	|| vtpversion.is_set
	|| vtpvlancreatednotifenabled.is_set
	|| vtpvlandeletednotifenabled.is_set;
}

bool CiscoVtpMib::Vtpstatus::has_operation() const
{
    return is_set(operation)
	|| is_set(vtpmaxvlanstorage.operation)
	|| is_set(vtpnotificationsenabled.operation)
	|| is_set(vtpversion.operation)
	|| is_set(vtpvlancreatednotifenabled.operation)
	|| is_set(vtpvlandeletednotifenabled.operation);
}

std::string CiscoVtpMib::Vtpstatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpStatus";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpstatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtpmaxvlanstorage.is_set || is_set(vtpmaxvlanstorage.operation)) leaf_name_data.push_back(vtpmaxvlanstorage.get_name_leafdata());
    if (vtpnotificationsenabled.is_set || is_set(vtpnotificationsenabled.operation)) leaf_name_data.push_back(vtpnotificationsenabled.get_name_leafdata());
    if (vtpversion.is_set || is_set(vtpversion.operation)) leaf_name_data.push_back(vtpversion.get_name_leafdata());
    if (vtpvlancreatednotifenabled.is_set || is_set(vtpvlancreatednotifenabled.operation)) leaf_name_data.push_back(vtpvlancreatednotifenabled.get_name_leafdata());
    if (vtpvlandeletednotifenabled.is_set || is_set(vtpvlandeletednotifenabled.operation)) leaf_name_data.push_back(vtpvlandeletednotifenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpstatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpstatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpstatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vtpMaxVlanStorage")
    {
        vtpmaxvlanstorage = value;
    }
    if(value_path == "vtpNotificationsEnabled")
    {
        vtpnotificationsenabled = value;
    }
    if(value_path == "vtpVersion")
    {
        vtpversion = value;
    }
    if(value_path == "vtpVlanCreatedNotifEnabled")
    {
        vtpvlancreatednotifenabled = value;
    }
    if(value_path == "vtpVlanDeletedNotifEnabled")
    {
        vtpvlandeletednotifenabled = value;
    }
}

CiscoVtpMib::Internalvlaninfo::Internalvlaninfo()
    :
    vtpinternalvlanallocpolicy{YType::enumeration, "vtpInternalVlanAllocPolicy"}
{
    yang_name = "internalVlanInfo"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Internalvlaninfo::~Internalvlaninfo()
{
}

bool CiscoVtpMib::Internalvlaninfo::has_data() const
{
    return vtpinternalvlanallocpolicy.is_set;
}

bool CiscoVtpMib::Internalvlaninfo::has_operation() const
{
    return is_set(operation)
	|| is_set(vtpinternalvlanallocpolicy.operation);
}

std::string CiscoVtpMib::Internalvlaninfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalVlanInfo";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Internalvlaninfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtpinternalvlanallocpolicy.is_set || is_set(vtpinternalvlanallocpolicy.operation)) leaf_name_data.push_back(vtpinternalvlanallocpolicy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Internalvlaninfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Internalvlaninfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Internalvlaninfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vtpInternalVlanAllocPolicy")
    {
        vtpinternalvlanallocpolicy = value;
    }
}

CiscoVtpMib::Vlantrunkports::Vlantrunkports()
    :
    vlantrunkportsdot1qtag{YType::boolean, "vlanTrunkPortsDot1qTag"},
    vlantrunkportsetserialno{YType::int32, "vlanTrunkPortSetSerialNo"}
{
    yang_name = "vlanTrunkPorts"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vlantrunkports::~Vlantrunkports()
{
}

bool CiscoVtpMib::Vlantrunkports::has_data() const
{
    return vlantrunkportsdot1qtag.is_set
	|| vlantrunkportsetserialno.is_set;
}

bool CiscoVtpMib::Vlantrunkports::has_operation() const
{
    return is_set(operation)
	|| is_set(vlantrunkportsdot1qtag.operation)
	|| is_set(vlantrunkportsetserialno.operation);
}

std::string CiscoVtpMib::Vlantrunkports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPorts";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vlantrunkports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlantrunkportsdot1qtag.is_set || is_set(vlantrunkportsdot1qtag.operation)) leaf_name_data.push_back(vlantrunkportsdot1qtag.get_name_leafdata());
    if (vlantrunkportsetserialno.is_set || is_set(vlantrunkportsetserialno.operation)) leaf_name_data.push_back(vlantrunkportsetserialno.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vlantrunkports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vlantrunkports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vlantrunkports::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlanTrunkPortsDot1qTag")
    {
        vlantrunkportsdot1qtag = value;
    }
    if(value_path == "vlanTrunkPortSetSerialNo")
    {
        vlantrunkportsetserialno = value;
    }
}

CiscoVtpMib::Vlanstatistics::Vlanstatistics()
    :
    vlanstatsextendedvlans{YType::uint32, "vlanStatsExtendedVlans"},
    vlanstatsfreevlans{YType::uint32, "vlanStatsFreeVlans"},
    vlanstatsinternalvlans{YType::uint32, "vlanStatsInternalVlans"},
    vlanstatsvlans{YType::uint32, "vlanStatsVlans"}
{
    yang_name = "vlanStatistics"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vlanstatistics::~Vlanstatistics()
{
}

bool CiscoVtpMib::Vlanstatistics::has_data() const
{
    return vlanstatsextendedvlans.is_set
	|| vlanstatsfreevlans.is_set
	|| vlanstatsinternalvlans.is_set
	|| vlanstatsvlans.is_set;
}

bool CiscoVtpMib::Vlanstatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(vlanstatsextendedvlans.operation)
	|| is_set(vlanstatsfreevlans.operation)
	|| is_set(vlanstatsinternalvlans.operation)
	|| is_set(vlanstatsvlans.operation);
}

std::string CiscoVtpMib::Vlanstatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanStatistics";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vlanstatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanstatsextendedvlans.is_set || is_set(vlanstatsextendedvlans.operation)) leaf_name_data.push_back(vlanstatsextendedvlans.get_name_leafdata());
    if (vlanstatsfreevlans.is_set || is_set(vlanstatsfreevlans.operation)) leaf_name_data.push_back(vlanstatsfreevlans.get_name_leafdata());
    if (vlanstatsinternalvlans.is_set || is_set(vlanstatsinternalvlans.operation)) leaf_name_data.push_back(vlanstatsinternalvlans.get_name_leafdata());
    if (vlanstatsvlans.is_set || is_set(vlanstatsvlans.operation)) leaf_name_data.push_back(vlanstatsvlans.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vlanstatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vlanstatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vlanstatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlanStatsExtendedVlans")
    {
        vlanstatsextendedvlans = value;
    }
    if(value_path == "vlanStatsFreeVlans")
    {
        vlanstatsfreevlans = value;
    }
    if(value_path == "vlanStatsInternalVlans")
    {
        vlanstatsinternalvlans = value;
    }
    if(value_path == "vlanStatsVlans")
    {
        vlanstatsvlans = value;
    }
}

CiscoVtpMib::Managementdomaintable::Managementdomaintable()
{
    yang_name = "managementDomainTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Managementdomaintable::~Managementdomaintable()
{
}

bool CiscoVtpMib::Managementdomaintable::has_data() const
{
    for (std::size_t index=0; index<managementdomainentry.size(); index++)
    {
        if(managementdomainentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Managementdomaintable::has_operation() const
{
    for (std::size_t index=0; index<managementdomainentry.size(); index++)
    {
        if(managementdomainentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Managementdomaintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "managementDomainTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Managementdomaintable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Managementdomaintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "managementDomainEntry")
    {
        for(auto const & c : managementdomainentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Managementdomaintable::Managementdomainentry>();
        c->parent = this;
        managementdomainentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Managementdomaintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : managementdomainentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Managementdomaintable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Managementdomaintable::Managementdomainentry::Managementdomainentry()
    :
    managementdomainindex{YType::int32, "managementDomainIndex"},
    managementdomainadminsrcif{YType::str, "managementDomainAdminSrcIf"},
    managementdomainconfigfile{YType::str, "managementDomainConfigFile"},
    managementdomainconfigrevnumber{YType::uint32, "managementDomainConfigRevNumber"},
    managementdomaindeviceid{YType::str, "managementDomainDeviceID"},
    managementdomainlastchange{YType::str, "managementDomainLastChange"},
    managementdomainlastupdater{YType::str, "managementDomainLastUpdater"},
    managementdomainlocalmode{YType::enumeration, "managementDomainLocalMode"},
    managementdomainlocalupdater{YType::str, "managementDomainLocalUpdater"},
    managementdomainlocalupdatertype{YType::enumeration, "managementDomainLocalUpdaterType"},
    managementdomainname{YType::str, "managementDomainName"},
    managementdomainopersrcif{YType::str, "managementDomainOperSrcIf"},
    managementdomainpruningstate{YType::enumeration, "managementDomainPruningState"},
    managementdomainpruningstateoper{YType::enumeration, "managementDomainPruningStateOper"},
    managementdomainrowstatus{YType::enumeration, "managementDomainRowStatus"},
    managementdomainsourceonlymode{YType::boolean, "managementDomainSourceOnlyMode"},
    managementdomaintftppathname{YType::str, "managementDomainTftpPathname"},
    managementdomaintftpserver{YType::str, "managementDomainTftpServer"},
    managementdomainversioninuse{YType::enumeration, "managementDomainVersionInUse"},
    vtpconfigdigesterrors{YType::uint32, "vtpConfigDigestErrors"},
    vtpconfigrevnumbererrors{YType::uint32, "vtpConfigRevNumberErrors"},
    vtpinadvertrequests{YType::uint32, "vtpInAdvertRequests"},
    vtpinsubsetadverts{YType::uint32, "vtpInSubsetAdverts"},
    vtpinsummaryadverts{YType::uint32, "vtpInSummaryAdverts"},
    vtpoutadvertrequests{YType::uint32, "vtpOutAdvertRequests"},
    vtpoutsubsetadverts{YType::uint32, "vtpOutSubsetAdverts"},
    vtpoutsummaryadverts{YType::uint32, "vtpOutSummaryAdverts"},
    vtpvlanapplystatus{YType::enumeration, "vtpVlanApplyStatus"},
    vtpvlaneditbufferowner{YType::str, "vtpVlanEditBufferOwner"},
    vtpvlaneditconfigrevnumber{YType::uint32, "vtpVlanEditConfigRevNumber"},
    vtpvlaneditmodifiedvlan{YType::int32, "vtpVlanEditModifiedVlan"},
    vtpvlaneditoperation{YType::enumeration, "vtpVlanEditOperation"}
{
    yang_name = "managementDomainEntry"; yang_parent_name = "managementDomainTable";
}

CiscoVtpMib::Managementdomaintable::Managementdomainentry::~Managementdomainentry()
{
}

bool CiscoVtpMib::Managementdomaintable::Managementdomainentry::has_data() const
{
    return managementdomainindex.is_set
	|| managementdomainadminsrcif.is_set
	|| managementdomainconfigfile.is_set
	|| managementdomainconfigrevnumber.is_set
	|| managementdomaindeviceid.is_set
	|| managementdomainlastchange.is_set
	|| managementdomainlastupdater.is_set
	|| managementdomainlocalmode.is_set
	|| managementdomainlocalupdater.is_set
	|| managementdomainlocalupdatertype.is_set
	|| managementdomainname.is_set
	|| managementdomainopersrcif.is_set
	|| managementdomainpruningstate.is_set
	|| managementdomainpruningstateoper.is_set
	|| managementdomainrowstatus.is_set
	|| managementdomainsourceonlymode.is_set
	|| managementdomaintftppathname.is_set
	|| managementdomaintftpserver.is_set
	|| managementdomainversioninuse.is_set
	|| vtpconfigdigesterrors.is_set
	|| vtpconfigrevnumbererrors.is_set
	|| vtpinadvertrequests.is_set
	|| vtpinsubsetadverts.is_set
	|| vtpinsummaryadverts.is_set
	|| vtpoutadvertrequests.is_set
	|| vtpoutsubsetadverts.is_set
	|| vtpoutsummaryadverts.is_set
	|| vtpvlanapplystatus.is_set
	|| vtpvlaneditbufferowner.is_set
	|| vtpvlaneditconfigrevnumber.is_set
	|| vtpvlaneditmodifiedvlan.is_set
	|| vtpvlaneditoperation.is_set;
}

bool CiscoVtpMib::Managementdomaintable::Managementdomainentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(managementdomainadminsrcif.operation)
	|| is_set(managementdomainconfigfile.operation)
	|| is_set(managementdomainconfigrevnumber.operation)
	|| is_set(managementdomaindeviceid.operation)
	|| is_set(managementdomainlastchange.operation)
	|| is_set(managementdomainlastupdater.operation)
	|| is_set(managementdomainlocalmode.operation)
	|| is_set(managementdomainlocalupdater.operation)
	|| is_set(managementdomainlocalupdatertype.operation)
	|| is_set(managementdomainname.operation)
	|| is_set(managementdomainopersrcif.operation)
	|| is_set(managementdomainpruningstate.operation)
	|| is_set(managementdomainpruningstateoper.operation)
	|| is_set(managementdomainrowstatus.operation)
	|| is_set(managementdomainsourceonlymode.operation)
	|| is_set(managementdomaintftppathname.operation)
	|| is_set(managementdomaintftpserver.operation)
	|| is_set(managementdomainversioninuse.operation)
	|| is_set(vtpconfigdigesterrors.operation)
	|| is_set(vtpconfigrevnumbererrors.operation)
	|| is_set(vtpinadvertrequests.operation)
	|| is_set(vtpinsubsetadverts.operation)
	|| is_set(vtpinsummaryadverts.operation)
	|| is_set(vtpoutadvertrequests.operation)
	|| is_set(vtpoutsubsetadverts.operation)
	|| is_set(vtpoutsummaryadverts.operation)
	|| is_set(vtpvlanapplystatus.operation)
	|| is_set(vtpvlaneditbufferowner.operation)
	|| is_set(vtpvlaneditconfigrevnumber.operation)
	|| is_set(vtpvlaneditmodifiedvlan.operation)
	|| is_set(vtpvlaneditoperation.operation);
}

std::string CiscoVtpMib::Managementdomaintable::Managementdomainentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "managementDomainEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Managementdomaintable::Managementdomainentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/managementDomainTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (managementdomainadminsrcif.is_set || is_set(managementdomainadminsrcif.operation)) leaf_name_data.push_back(managementdomainadminsrcif.get_name_leafdata());
    if (managementdomainconfigfile.is_set || is_set(managementdomainconfigfile.operation)) leaf_name_data.push_back(managementdomainconfigfile.get_name_leafdata());
    if (managementdomainconfigrevnumber.is_set || is_set(managementdomainconfigrevnumber.operation)) leaf_name_data.push_back(managementdomainconfigrevnumber.get_name_leafdata());
    if (managementdomaindeviceid.is_set || is_set(managementdomaindeviceid.operation)) leaf_name_data.push_back(managementdomaindeviceid.get_name_leafdata());
    if (managementdomainlastchange.is_set || is_set(managementdomainlastchange.operation)) leaf_name_data.push_back(managementdomainlastchange.get_name_leafdata());
    if (managementdomainlastupdater.is_set || is_set(managementdomainlastupdater.operation)) leaf_name_data.push_back(managementdomainlastupdater.get_name_leafdata());
    if (managementdomainlocalmode.is_set || is_set(managementdomainlocalmode.operation)) leaf_name_data.push_back(managementdomainlocalmode.get_name_leafdata());
    if (managementdomainlocalupdater.is_set || is_set(managementdomainlocalupdater.operation)) leaf_name_data.push_back(managementdomainlocalupdater.get_name_leafdata());
    if (managementdomainlocalupdatertype.is_set || is_set(managementdomainlocalupdatertype.operation)) leaf_name_data.push_back(managementdomainlocalupdatertype.get_name_leafdata());
    if (managementdomainname.is_set || is_set(managementdomainname.operation)) leaf_name_data.push_back(managementdomainname.get_name_leafdata());
    if (managementdomainopersrcif.is_set || is_set(managementdomainopersrcif.operation)) leaf_name_data.push_back(managementdomainopersrcif.get_name_leafdata());
    if (managementdomainpruningstate.is_set || is_set(managementdomainpruningstate.operation)) leaf_name_data.push_back(managementdomainpruningstate.get_name_leafdata());
    if (managementdomainpruningstateoper.is_set || is_set(managementdomainpruningstateoper.operation)) leaf_name_data.push_back(managementdomainpruningstateoper.get_name_leafdata());
    if (managementdomainrowstatus.is_set || is_set(managementdomainrowstatus.operation)) leaf_name_data.push_back(managementdomainrowstatus.get_name_leafdata());
    if (managementdomainsourceonlymode.is_set || is_set(managementdomainsourceonlymode.operation)) leaf_name_data.push_back(managementdomainsourceonlymode.get_name_leafdata());
    if (managementdomaintftppathname.is_set || is_set(managementdomaintftppathname.operation)) leaf_name_data.push_back(managementdomaintftppathname.get_name_leafdata());
    if (managementdomaintftpserver.is_set || is_set(managementdomaintftpserver.operation)) leaf_name_data.push_back(managementdomaintftpserver.get_name_leafdata());
    if (managementdomainversioninuse.is_set || is_set(managementdomainversioninuse.operation)) leaf_name_data.push_back(managementdomainversioninuse.get_name_leafdata());
    if (vtpconfigdigesterrors.is_set || is_set(vtpconfigdigesterrors.operation)) leaf_name_data.push_back(vtpconfigdigesterrors.get_name_leafdata());
    if (vtpconfigrevnumbererrors.is_set || is_set(vtpconfigrevnumbererrors.operation)) leaf_name_data.push_back(vtpconfigrevnumbererrors.get_name_leafdata());
    if (vtpinadvertrequests.is_set || is_set(vtpinadvertrequests.operation)) leaf_name_data.push_back(vtpinadvertrequests.get_name_leafdata());
    if (vtpinsubsetadverts.is_set || is_set(vtpinsubsetadverts.operation)) leaf_name_data.push_back(vtpinsubsetadverts.get_name_leafdata());
    if (vtpinsummaryadverts.is_set || is_set(vtpinsummaryadverts.operation)) leaf_name_data.push_back(vtpinsummaryadverts.get_name_leafdata());
    if (vtpoutadvertrequests.is_set || is_set(vtpoutadvertrequests.operation)) leaf_name_data.push_back(vtpoutadvertrequests.get_name_leafdata());
    if (vtpoutsubsetadverts.is_set || is_set(vtpoutsubsetadverts.operation)) leaf_name_data.push_back(vtpoutsubsetadverts.get_name_leafdata());
    if (vtpoutsummaryadverts.is_set || is_set(vtpoutsummaryadverts.operation)) leaf_name_data.push_back(vtpoutsummaryadverts.get_name_leafdata());
    if (vtpvlanapplystatus.is_set || is_set(vtpvlanapplystatus.operation)) leaf_name_data.push_back(vtpvlanapplystatus.get_name_leafdata());
    if (vtpvlaneditbufferowner.is_set || is_set(vtpvlaneditbufferowner.operation)) leaf_name_data.push_back(vtpvlaneditbufferowner.get_name_leafdata());
    if (vtpvlaneditconfigrevnumber.is_set || is_set(vtpvlaneditconfigrevnumber.operation)) leaf_name_data.push_back(vtpvlaneditconfigrevnumber.get_name_leafdata());
    if (vtpvlaneditmodifiedvlan.is_set || is_set(vtpvlaneditmodifiedvlan.operation)) leaf_name_data.push_back(vtpvlaneditmodifiedvlan.get_name_leafdata());
    if (vtpvlaneditoperation.is_set || is_set(vtpvlaneditoperation.operation)) leaf_name_data.push_back(vtpvlaneditoperation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Managementdomaintable::Managementdomainentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Managementdomaintable::Managementdomainentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Managementdomaintable::Managementdomainentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "managementDomainAdminSrcIf")
    {
        managementdomainadminsrcif = value;
    }
    if(value_path == "managementDomainConfigFile")
    {
        managementdomainconfigfile = value;
    }
    if(value_path == "managementDomainConfigRevNumber")
    {
        managementdomainconfigrevnumber = value;
    }
    if(value_path == "managementDomainDeviceID")
    {
        managementdomaindeviceid = value;
    }
    if(value_path == "managementDomainLastChange")
    {
        managementdomainlastchange = value;
    }
    if(value_path == "managementDomainLastUpdater")
    {
        managementdomainlastupdater = value;
    }
    if(value_path == "managementDomainLocalMode")
    {
        managementdomainlocalmode = value;
    }
    if(value_path == "managementDomainLocalUpdater")
    {
        managementdomainlocalupdater = value;
    }
    if(value_path == "managementDomainLocalUpdaterType")
    {
        managementdomainlocalupdatertype = value;
    }
    if(value_path == "managementDomainName")
    {
        managementdomainname = value;
    }
    if(value_path == "managementDomainOperSrcIf")
    {
        managementdomainopersrcif = value;
    }
    if(value_path == "managementDomainPruningState")
    {
        managementdomainpruningstate = value;
    }
    if(value_path == "managementDomainPruningStateOper")
    {
        managementdomainpruningstateoper = value;
    }
    if(value_path == "managementDomainRowStatus")
    {
        managementdomainrowstatus = value;
    }
    if(value_path == "managementDomainSourceOnlyMode")
    {
        managementdomainsourceonlymode = value;
    }
    if(value_path == "managementDomainTftpPathname")
    {
        managementdomaintftppathname = value;
    }
    if(value_path == "managementDomainTftpServer")
    {
        managementdomaintftpserver = value;
    }
    if(value_path == "managementDomainVersionInUse")
    {
        managementdomainversioninuse = value;
    }
    if(value_path == "vtpConfigDigestErrors")
    {
        vtpconfigdigesterrors = value;
    }
    if(value_path == "vtpConfigRevNumberErrors")
    {
        vtpconfigrevnumbererrors = value;
    }
    if(value_path == "vtpInAdvertRequests")
    {
        vtpinadvertrequests = value;
    }
    if(value_path == "vtpInSubsetAdverts")
    {
        vtpinsubsetadverts = value;
    }
    if(value_path == "vtpInSummaryAdverts")
    {
        vtpinsummaryadverts = value;
    }
    if(value_path == "vtpOutAdvertRequests")
    {
        vtpoutadvertrequests = value;
    }
    if(value_path == "vtpOutSubsetAdverts")
    {
        vtpoutsubsetadverts = value;
    }
    if(value_path == "vtpOutSummaryAdverts")
    {
        vtpoutsummaryadverts = value;
    }
    if(value_path == "vtpVlanApplyStatus")
    {
        vtpvlanapplystatus = value;
    }
    if(value_path == "vtpVlanEditBufferOwner")
    {
        vtpvlaneditbufferowner = value;
    }
    if(value_path == "vtpVlanEditConfigRevNumber")
    {
        vtpvlaneditconfigrevnumber = value;
    }
    if(value_path == "vtpVlanEditModifiedVlan")
    {
        vtpvlaneditmodifiedvlan = value;
    }
    if(value_path == "vtpVlanEditOperation")
    {
        vtpvlaneditoperation = value;
    }
}

CiscoVtpMib::Vtpvlantable::Vtpvlantable()
{
    yang_name = "vtpVlanTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpvlantable::~Vtpvlantable()
{
}

bool CiscoVtpMib::Vtpvlantable::has_data() const
{
    for (std::size_t index=0; index<vtpvlanentry.size(); index++)
    {
        if(vtpvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpvlantable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlanentry.size(); index++)
    {
        if(vtpvlanentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpvlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpvlantable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpvlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpVlanEntry")
    {
        for(auto const & c : vtpvlanentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpvlantable::Vtpvlanentry>();
        c->parent = this;
        vtpvlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpvlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpvlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpvlantable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpvlantable::Vtpvlanentry::Vtpvlanentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::int32, "vtpVlanIndex"},
    stpxvlanmistpinstmapinstindex{YType::int32, "CISCO-STP-EXTENSIONS-MIB:stpxVlanMISTPInstMapInstIndex"},
    vtpvlanarehopcount{YType::int32, "vtpVlanAreHopCount"},
    vtpvlanbridgenumber{YType::int32, "vtpVlanBridgeNumber"},
    vtpvlanbridgetype{YType::enumeration, "vtpVlanBridgeType"},
    vtpvlandot10said{YType::str, "vtpVlanDot10Said"},
    vtpvlanifindex{YType::int32, "vtpVlanIfIndex"},
    vtpvlaniscrfbackup{YType::boolean, "vtpVlanIsCRFBackup"},
    vtpvlanmtu{YType::int32, "vtpVlanMtu"},
    vtpvlanname{YType::str, "vtpVlanName"},
    vtpvlanparentvlan{YType::int32, "vtpVlanParentVlan"},
    vtpvlanringnumber{YType::int32, "vtpVlanRingNumber"},
    vtpvlanstate{YType::enumeration, "vtpVlanState"},
    vtpvlanstehopcount{YType::int32, "vtpVlanSteHopCount"},
    vtpvlanstptype{YType::enumeration, "vtpVlanStpType"},
    vtpvlantranslationalvlan1{YType::int32, "vtpVlanTranslationalVlan1"},
    vtpvlantranslationalvlan2{YType::int32, "vtpVlanTranslationalVlan2"},
    vtpvlantype{YType::enumeration, "vtpVlanType"},
    vtpvlantypeext{YType::bits, "vtpVlanTypeExt"}
{
    yang_name = "vtpVlanEntry"; yang_parent_name = "vtpVlanTable";
}

CiscoVtpMib::Vtpvlantable::Vtpvlanentry::~Vtpvlanentry()
{
}

bool CiscoVtpMib::Vtpvlantable::Vtpvlanentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| stpxvlanmistpinstmapinstindex.is_set
	|| vtpvlanarehopcount.is_set
	|| vtpvlanbridgenumber.is_set
	|| vtpvlanbridgetype.is_set
	|| vtpvlandot10said.is_set
	|| vtpvlanifindex.is_set
	|| vtpvlaniscrfbackup.is_set
	|| vtpvlanmtu.is_set
	|| vtpvlanname.is_set
	|| vtpvlanparentvlan.is_set
	|| vtpvlanringnumber.is_set
	|| vtpvlanstate.is_set
	|| vtpvlanstehopcount.is_set
	|| vtpvlanstptype.is_set
	|| vtpvlantranslationalvlan1.is_set
	|| vtpvlantranslationalvlan2.is_set
	|| vtpvlantype.is_set
	|| vtpvlantypeext.is_set;
}

bool CiscoVtpMib::Vtpvlantable::Vtpvlanentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpvlanindex.operation)
	|| is_set(stpxvlanmistpinstmapinstindex.operation)
	|| is_set(vtpvlanarehopcount.operation)
	|| is_set(vtpvlanbridgenumber.operation)
	|| is_set(vtpvlanbridgetype.operation)
	|| is_set(vtpvlandot10said.operation)
	|| is_set(vtpvlanifindex.operation)
	|| is_set(vtpvlaniscrfbackup.operation)
	|| is_set(vtpvlanmtu.operation)
	|| is_set(vtpvlanname.operation)
	|| is_set(vtpvlanparentvlan.operation)
	|| is_set(vtpvlanringnumber.operation)
	|| is_set(vtpvlanstate.operation)
	|| is_set(vtpvlanstehopcount.operation)
	|| is_set(vtpvlanstptype.operation)
	|| is_set(vtpvlantranslationalvlan1.operation)
	|| is_set(vtpvlantranslationalvlan2.operation)
	|| is_set(vtpvlantype.operation)
	|| is_set(vtpvlantypeext.operation);
}

std::string CiscoVtpMib::Vtpvlantable::Vtpvlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanIndex='" <<vtpvlanindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpvlantable::Vtpvlanentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.operation)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (stpxvlanmistpinstmapinstindex.is_set || is_set(stpxvlanmistpinstmapinstindex.operation)) leaf_name_data.push_back(stpxvlanmistpinstmapinstindex.get_name_leafdata());
    if (vtpvlanarehopcount.is_set || is_set(vtpvlanarehopcount.operation)) leaf_name_data.push_back(vtpvlanarehopcount.get_name_leafdata());
    if (vtpvlanbridgenumber.is_set || is_set(vtpvlanbridgenumber.operation)) leaf_name_data.push_back(vtpvlanbridgenumber.get_name_leafdata());
    if (vtpvlanbridgetype.is_set || is_set(vtpvlanbridgetype.operation)) leaf_name_data.push_back(vtpvlanbridgetype.get_name_leafdata());
    if (vtpvlandot10said.is_set || is_set(vtpvlandot10said.operation)) leaf_name_data.push_back(vtpvlandot10said.get_name_leafdata());
    if (vtpvlanifindex.is_set || is_set(vtpvlanifindex.operation)) leaf_name_data.push_back(vtpvlanifindex.get_name_leafdata());
    if (vtpvlaniscrfbackup.is_set || is_set(vtpvlaniscrfbackup.operation)) leaf_name_data.push_back(vtpvlaniscrfbackup.get_name_leafdata());
    if (vtpvlanmtu.is_set || is_set(vtpvlanmtu.operation)) leaf_name_data.push_back(vtpvlanmtu.get_name_leafdata());
    if (vtpvlanname.is_set || is_set(vtpvlanname.operation)) leaf_name_data.push_back(vtpvlanname.get_name_leafdata());
    if (vtpvlanparentvlan.is_set || is_set(vtpvlanparentvlan.operation)) leaf_name_data.push_back(vtpvlanparentvlan.get_name_leafdata());
    if (vtpvlanringnumber.is_set || is_set(vtpvlanringnumber.operation)) leaf_name_data.push_back(vtpvlanringnumber.get_name_leafdata());
    if (vtpvlanstate.is_set || is_set(vtpvlanstate.operation)) leaf_name_data.push_back(vtpvlanstate.get_name_leafdata());
    if (vtpvlanstehopcount.is_set || is_set(vtpvlanstehopcount.operation)) leaf_name_data.push_back(vtpvlanstehopcount.get_name_leafdata());
    if (vtpvlanstptype.is_set || is_set(vtpvlanstptype.operation)) leaf_name_data.push_back(vtpvlanstptype.get_name_leafdata());
    if (vtpvlantranslationalvlan1.is_set || is_set(vtpvlantranslationalvlan1.operation)) leaf_name_data.push_back(vtpvlantranslationalvlan1.get_name_leafdata());
    if (vtpvlantranslationalvlan2.is_set || is_set(vtpvlantranslationalvlan2.operation)) leaf_name_data.push_back(vtpvlantranslationalvlan2.get_name_leafdata());
    if (vtpvlantype.is_set || is_set(vtpvlantype.operation)) leaf_name_data.push_back(vtpvlantype.get_name_leafdata());
    if (vtpvlantypeext.is_set || is_set(vtpvlantypeext.operation)) leaf_name_data.push_back(vtpvlantypeext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpvlantable::Vtpvlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpvlantable::Vtpvlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpvlantable::Vtpvlanentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex = value;
    }
    if(value_path == "stpxVlanMISTPInstMapInstIndex")
    {
        stpxvlanmistpinstmapinstindex = value;
    }
    if(value_path == "vtpVlanAreHopCount")
    {
        vtpvlanarehopcount = value;
    }
    if(value_path == "vtpVlanBridgeNumber")
    {
        vtpvlanbridgenumber = value;
    }
    if(value_path == "vtpVlanBridgeType")
    {
        vtpvlanbridgetype = value;
    }
    if(value_path == "vtpVlanDot10Said")
    {
        vtpvlandot10said = value;
    }
    if(value_path == "vtpVlanIfIndex")
    {
        vtpvlanifindex = value;
    }
    if(value_path == "vtpVlanIsCRFBackup")
    {
        vtpvlaniscrfbackup = value;
    }
    if(value_path == "vtpVlanMtu")
    {
        vtpvlanmtu = value;
    }
    if(value_path == "vtpVlanName")
    {
        vtpvlanname = value;
    }
    if(value_path == "vtpVlanParentVlan")
    {
        vtpvlanparentvlan = value;
    }
    if(value_path == "vtpVlanRingNumber")
    {
        vtpvlanringnumber = value;
    }
    if(value_path == "vtpVlanState")
    {
        vtpvlanstate = value;
    }
    if(value_path == "vtpVlanSteHopCount")
    {
        vtpvlanstehopcount = value;
    }
    if(value_path == "vtpVlanStpType")
    {
        vtpvlanstptype = value;
    }
    if(value_path == "vtpVlanTranslationalVlan1")
    {
        vtpvlantranslationalvlan1 = value;
    }
    if(value_path == "vtpVlanTranslationalVlan2")
    {
        vtpvlantranslationalvlan2 = value;
    }
    if(value_path == "vtpVlanType")
    {
        vtpvlantype = value;
    }
    if(value_path == "vtpVlanTypeExt")
    {
        vtpvlantypeext[value] = true;
    }
}

CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlantable()
{
    yang_name = "vtpInternalVlanTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpinternalvlantable::~Vtpinternalvlantable()
{
}

bool CiscoVtpMib::Vtpinternalvlantable::has_data() const
{
    for (std::size_t index=0; index<vtpinternalvlanentry.size(); index++)
    {
        if(vtpinternalvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpinternalvlantable::has_operation() const
{
    for (std::size_t index=0; index<vtpinternalvlanentry.size(); index++)
    {
        if(vtpinternalvlanentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpinternalvlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpInternalVlanTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpinternalvlantable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpinternalvlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpInternalVlanEntry")
    {
        for(auto const & c : vtpinternalvlanentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry>();
        c->parent = this;
        vtpinternalvlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpinternalvlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpinternalvlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpinternalvlantable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::Vtpinternalvlanentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::str, "vtpVlanIndex"},
    vtpinternalvlanowner{YType::str, "vtpInternalVlanOwner"}
{
    yang_name = "vtpInternalVlanEntry"; yang_parent_name = "vtpInternalVlanTable";
}

CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::~Vtpinternalvlanentry()
{
}

bool CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| vtpinternalvlanowner.is_set;
}

bool CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpvlanindex.operation)
	|| is_set(vtpinternalvlanowner.operation);
}

std::string CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpInternalVlanEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanIndex='" <<vtpvlanindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpInternalVlanTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.operation)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (vtpinternalvlanowner.is_set || is_set(vtpinternalvlanowner.operation)) leaf_name_data.push_back(vtpinternalvlanowner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex = value;
    }
    if(value_path == "vtpInternalVlanOwner")
    {
        vtpinternalvlanowner = value;
    }
}

CiscoVtpMib::Vtpvlanedittable::Vtpvlanedittable()
{
    yang_name = "vtpVlanEditTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpvlanedittable::~Vtpvlanedittable()
{
}

bool CiscoVtpMib::Vtpvlanedittable::has_data() const
{
    for (std::size_t index=0; index<vtpvlaneditentry.size(); index++)
    {
        if(vtpvlaneditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpvlanedittable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlaneditentry.size(); index++)
    {
        if(vtpvlaneditentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpvlanedittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEditTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpvlanedittable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpvlanedittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpVlanEditEntry")
    {
        for(auto const & c : vtpvlaneditentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry>();
        c->parent = this;
        vtpvlaneditentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpvlanedittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpvlaneditentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpvlanedittable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlaneditindex{YType::int32, "vtpVlanEditIndex"},
    stpxvlanmistpinstmapeditinstindex{YType::int32, "CISCO-STP-EXTENSIONS-MIB:stpxVlanMISTPInstMapEditInstIndex"},
    vtpvlaneditarehopcount{YType::int32, "vtpVlanEditAreHopCount"},
    vtpvlaneditbridgenumber{YType::int32, "vtpVlanEditBridgeNumber"},
    vtpvlaneditbridgetype{YType::enumeration, "vtpVlanEditBridgeType"},
    vtpvlaneditdot10said{YType::str, "vtpVlanEditDot10Said"},
    vtpvlaneditiscrfbackup{YType::boolean, "vtpVlanEditIsCRFBackup"},
    vtpvlaneditmtu{YType::int32, "vtpVlanEditMtu"},
    vtpvlaneditname{YType::str, "vtpVlanEditName"},
    vtpvlaneditparentvlan{YType::int32, "vtpVlanEditParentVlan"},
    vtpvlaneditringnumber{YType::int32, "vtpVlanEditRingNumber"},
    vtpvlaneditrowstatus{YType::enumeration, "vtpVlanEditRowStatus"},
    vtpvlaneditstate{YType::enumeration, "vtpVlanEditState"},
    vtpvlaneditstehopcount{YType::int32, "vtpVlanEditSteHopCount"},
    vtpvlaneditstptype{YType::enumeration, "vtpVlanEditStpType"},
    vtpvlanedittranslationalvlan1{YType::int32, "vtpVlanEditTranslationalVlan1"},
    vtpvlanedittranslationalvlan2{YType::int32, "vtpVlanEditTranslationalVlan2"},
    vtpvlanedittype{YType::enumeration, "vtpVlanEditType"},
    vtpvlanedittypeext{YType::bits, "vtpVlanEditTypeExt"},
    vtpvlanedittypeext2{YType::bits, "vtpVlanEditTypeExt2"}
{
    yang_name = "vtpVlanEditEntry"; yang_parent_name = "vtpVlanEditTable";
}

CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::~Vtpvlaneditentry()
{
}

bool CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpvlaneditindex.is_set
	|| stpxvlanmistpinstmapeditinstindex.is_set
	|| vtpvlaneditarehopcount.is_set
	|| vtpvlaneditbridgenumber.is_set
	|| vtpvlaneditbridgetype.is_set
	|| vtpvlaneditdot10said.is_set
	|| vtpvlaneditiscrfbackup.is_set
	|| vtpvlaneditmtu.is_set
	|| vtpvlaneditname.is_set
	|| vtpvlaneditparentvlan.is_set
	|| vtpvlaneditringnumber.is_set
	|| vtpvlaneditrowstatus.is_set
	|| vtpvlaneditstate.is_set
	|| vtpvlaneditstehopcount.is_set
	|| vtpvlaneditstptype.is_set
	|| vtpvlanedittranslationalvlan1.is_set
	|| vtpvlanedittranslationalvlan2.is_set
	|| vtpvlanedittype.is_set
	|| vtpvlanedittypeext.is_set
	|| vtpvlanedittypeext2.is_set;
}

bool CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpvlaneditindex.operation)
	|| is_set(stpxvlanmistpinstmapeditinstindex.operation)
	|| is_set(vtpvlaneditarehopcount.operation)
	|| is_set(vtpvlaneditbridgenumber.operation)
	|| is_set(vtpvlaneditbridgetype.operation)
	|| is_set(vtpvlaneditdot10said.operation)
	|| is_set(vtpvlaneditiscrfbackup.operation)
	|| is_set(vtpvlaneditmtu.operation)
	|| is_set(vtpvlaneditname.operation)
	|| is_set(vtpvlaneditparentvlan.operation)
	|| is_set(vtpvlaneditringnumber.operation)
	|| is_set(vtpvlaneditrowstatus.operation)
	|| is_set(vtpvlaneditstate.operation)
	|| is_set(vtpvlaneditstehopcount.operation)
	|| is_set(vtpvlaneditstptype.operation)
	|| is_set(vtpvlanedittranslationalvlan1.operation)
	|| is_set(vtpvlanedittranslationalvlan2.operation)
	|| is_set(vtpvlanedittype.operation)
	|| is_set(vtpvlanedittypeext.operation)
	|| is_set(vtpvlanedittypeext2.operation);
}

std::string CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEditEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanEditIndex='" <<vtpvlaneditindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanEditTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlaneditindex.is_set || is_set(vtpvlaneditindex.operation)) leaf_name_data.push_back(vtpvlaneditindex.get_name_leafdata());
    if (stpxvlanmistpinstmapeditinstindex.is_set || is_set(stpxvlanmistpinstmapeditinstindex.operation)) leaf_name_data.push_back(stpxvlanmistpinstmapeditinstindex.get_name_leafdata());
    if (vtpvlaneditarehopcount.is_set || is_set(vtpvlaneditarehopcount.operation)) leaf_name_data.push_back(vtpvlaneditarehopcount.get_name_leafdata());
    if (vtpvlaneditbridgenumber.is_set || is_set(vtpvlaneditbridgenumber.operation)) leaf_name_data.push_back(vtpvlaneditbridgenumber.get_name_leafdata());
    if (vtpvlaneditbridgetype.is_set || is_set(vtpvlaneditbridgetype.operation)) leaf_name_data.push_back(vtpvlaneditbridgetype.get_name_leafdata());
    if (vtpvlaneditdot10said.is_set || is_set(vtpvlaneditdot10said.operation)) leaf_name_data.push_back(vtpvlaneditdot10said.get_name_leafdata());
    if (vtpvlaneditiscrfbackup.is_set || is_set(vtpvlaneditiscrfbackup.operation)) leaf_name_data.push_back(vtpvlaneditiscrfbackup.get_name_leafdata());
    if (vtpvlaneditmtu.is_set || is_set(vtpvlaneditmtu.operation)) leaf_name_data.push_back(vtpvlaneditmtu.get_name_leafdata());
    if (vtpvlaneditname.is_set || is_set(vtpvlaneditname.operation)) leaf_name_data.push_back(vtpvlaneditname.get_name_leafdata());
    if (vtpvlaneditparentvlan.is_set || is_set(vtpvlaneditparentvlan.operation)) leaf_name_data.push_back(vtpvlaneditparentvlan.get_name_leafdata());
    if (vtpvlaneditringnumber.is_set || is_set(vtpvlaneditringnumber.operation)) leaf_name_data.push_back(vtpvlaneditringnumber.get_name_leafdata());
    if (vtpvlaneditrowstatus.is_set || is_set(vtpvlaneditrowstatus.operation)) leaf_name_data.push_back(vtpvlaneditrowstatus.get_name_leafdata());
    if (vtpvlaneditstate.is_set || is_set(vtpvlaneditstate.operation)) leaf_name_data.push_back(vtpvlaneditstate.get_name_leafdata());
    if (vtpvlaneditstehopcount.is_set || is_set(vtpvlaneditstehopcount.operation)) leaf_name_data.push_back(vtpvlaneditstehopcount.get_name_leafdata());
    if (vtpvlaneditstptype.is_set || is_set(vtpvlaneditstptype.operation)) leaf_name_data.push_back(vtpvlaneditstptype.get_name_leafdata());
    if (vtpvlanedittranslationalvlan1.is_set || is_set(vtpvlanedittranslationalvlan1.operation)) leaf_name_data.push_back(vtpvlanedittranslationalvlan1.get_name_leafdata());
    if (vtpvlanedittranslationalvlan2.is_set || is_set(vtpvlanedittranslationalvlan2.operation)) leaf_name_data.push_back(vtpvlanedittranslationalvlan2.get_name_leafdata());
    if (vtpvlanedittype.is_set || is_set(vtpvlanedittype.operation)) leaf_name_data.push_back(vtpvlanedittype.get_name_leafdata());
    if (vtpvlanedittypeext.is_set || is_set(vtpvlanedittypeext.operation)) leaf_name_data.push_back(vtpvlanedittypeext.get_name_leafdata());
    if (vtpvlanedittypeext2.is_set || is_set(vtpvlanedittypeext2.operation)) leaf_name_data.push_back(vtpvlanedittypeext2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpVlanEditIndex")
    {
        vtpvlaneditindex = value;
    }
    if(value_path == "stpxVlanMISTPInstMapEditInstIndex")
    {
        stpxvlanmistpinstmapeditinstindex = value;
    }
    if(value_path == "vtpVlanEditAreHopCount")
    {
        vtpvlaneditarehopcount = value;
    }
    if(value_path == "vtpVlanEditBridgeNumber")
    {
        vtpvlaneditbridgenumber = value;
    }
    if(value_path == "vtpVlanEditBridgeType")
    {
        vtpvlaneditbridgetype = value;
    }
    if(value_path == "vtpVlanEditDot10Said")
    {
        vtpvlaneditdot10said = value;
    }
    if(value_path == "vtpVlanEditIsCRFBackup")
    {
        vtpvlaneditiscrfbackup = value;
    }
    if(value_path == "vtpVlanEditMtu")
    {
        vtpvlaneditmtu = value;
    }
    if(value_path == "vtpVlanEditName")
    {
        vtpvlaneditname = value;
    }
    if(value_path == "vtpVlanEditParentVlan")
    {
        vtpvlaneditparentvlan = value;
    }
    if(value_path == "vtpVlanEditRingNumber")
    {
        vtpvlaneditringnumber = value;
    }
    if(value_path == "vtpVlanEditRowStatus")
    {
        vtpvlaneditrowstatus = value;
    }
    if(value_path == "vtpVlanEditState")
    {
        vtpvlaneditstate = value;
    }
    if(value_path == "vtpVlanEditSteHopCount")
    {
        vtpvlaneditstehopcount = value;
    }
    if(value_path == "vtpVlanEditStpType")
    {
        vtpvlaneditstptype = value;
    }
    if(value_path == "vtpVlanEditTranslationalVlan1")
    {
        vtpvlanedittranslationalvlan1 = value;
    }
    if(value_path == "vtpVlanEditTranslationalVlan2")
    {
        vtpvlanedittranslationalvlan2 = value;
    }
    if(value_path == "vtpVlanEditType")
    {
        vtpvlanedittype = value;
    }
    if(value_path == "vtpVlanEditTypeExt")
    {
        vtpvlanedittypeext[value] = true;
    }
    if(value_path == "vtpVlanEditTypeExt2")
    {
        vtpvlanedittypeext2[value] = true;
    }
}

CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdowntable()
{
    yang_name = "vtpVlanLocalShutdownTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpvlanlocalshutdowntable::~Vtpvlanlocalshutdowntable()
{
}

bool CiscoVtpMib::Vtpvlanlocalshutdowntable::has_data() const
{
    for (std::size_t index=0; index<vtpvlanlocalshutdownentry.size(); index++)
    {
        if(vtpvlanlocalshutdownentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpvlanlocalshutdowntable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlanlocalshutdownentry.size(); index++)
    {
        if(vtpvlanlocalshutdownentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpvlanlocalshutdowntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanLocalShutdownTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpvlanlocalshutdowntable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpvlanlocalshutdowntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpVlanLocalShutdownEntry")
    {
        for(auto const & c : vtpvlanlocalshutdownentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry>();
        c->parent = this;
        vtpvlanlocalshutdownentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpvlanlocalshutdowntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpvlanlocalshutdownentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpvlanlocalshutdowntable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::Vtpvlanlocalshutdownentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::str, "vtpVlanIndex"},
    vtpvlanlocalshutdown{YType::enumeration, "vtpVlanLocalShutdown"}
{
    yang_name = "vtpVlanLocalShutdownEntry"; yang_parent_name = "vtpVlanLocalShutdownTable";
}

CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::~Vtpvlanlocalshutdownentry()
{
}

bool CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| vtpvlanlocalshutdown.is_set;
}

bool CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpvlanindex.operation)
	|| is_set(vtpvlanlocalshutdown.operation);
}

std::string CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanLocalShutdownEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanIndex='" <<vtpvlanindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanLocalShutdownTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.operation)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (vtpvlanlocalshutdown.is_set || is_set(vtpvlanlocalshutdown.operation)) leaf_name_data.push_back(vtpvlanlocalshutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex = value;
    }
    if(value_path == "vtpVlanLocalShutdown")
    {
        vtpvlanlocalshutdown = value;
    }
}

CiscoVtpMib::Vlantrunkporttable::Vlantrunkporttable()
{
    yang_name = "vlanTrunkPortTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vlantrunkporttable::~Vlantrunkporttable()
{
}

bool CiscoVtpMib::Vlantrunkporttable::has_data() const
{
    for (std::size_t index=0; index<vlantrunkportentry.size(); index++)
    {
        if(vlantrunkportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vlantrunkporttable::has_operation() const
{
    for (std::size_t index=0; index<vlantrunkportentry.size(); index++)
    {
        if(vlantrunkportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vlantrunkporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPortTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vlantrunkporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vlantrunkporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlanTrunkPortEntry")
    {
        for(auto const & c : vlantrunkportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry>();
        c->parent = this;
        vlantrunkportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vlantrunkporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlantrunkportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vlantrunkporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportentry()
    :
    vlantrunkportifindex{YType::int32, "vlanTrunkPortIfIndex"},
    stpxpreferredmistpinstancesmap{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredMISTPInstancesMap"},
    stpxpreferredmstinstancesmap{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredMSTInstancesMap"},
    stpxpreferredvlansmap{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap"},
    stpxpreferredvlansmap2k{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap2k"},
    stpxpreferredvlansmap3k{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap3k"},
    stpxpreferredvlansmap4k{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap4k"},
    vlantrunkportdot1qtunnel{YType::enumeration, "vlanTrunkPortDot1qTunnel"},
    vlantrunkportdynamicstate{YType::enumeration, "vlanTrunkPortDynamicState"},
    vlantrunkportdynamicstatus{YType::enumeration, "vlanTrunkPortDynamicStatus"},
    vlantrunkportencapsulationopertype{YType::enumeration, "vlanTrunkPortEncapsulationOperType"},
    vlantrunkportencapsulationtype{YType::enumeration, "vlanTrunkPortEncapsulationType"},
    vlantrunkportinjoins{YType::uint32, "vlanTrunkPortInJoins"},
    vlantrunkportmanagementdomain{YType::int32, "vlanTrunkPortManagementDomain"},
    vlantrunkportnativevlan{YType::int32, "vlanTrunkPortNativeVlan"},
    vlantrunkportoldadverts{YType::uint32, "vlanTrunkPortOldAdverts"},
    vlantrunkportoutjoins{YType::uint32, "vlanTrunkPortOutJoins"},
    vlantrunkportrowstatus{YType::enumeration, "vlanTrunkPortRowStatus"},
    vlantrunkportvlansactivefirst2k{YType::str, "vlanTrunkPortVlansActiveFirst2k"},
    vlantrunkportvlansactivesecond2k{YType::str, "vlanTrunkPortVlansActiveSecond2k"},
    vlantrunkportvlansenabled{YType::str, "vlanTrunkPortVlansEnabled"},
    vlantrunkportvlansenabled2k{YType::str, "vlanTrunkPortVlansEnabled2k"},
    vlantrunkportvlansenabled3k{YType::str, "vlanTrunkPortVlansEnabled3k"},
    vlantrunkportvlansenabled4k{YType::str, "vlanTrunkPortVlansEnabled4k"},
    vlantrunkportvlanspruningeligible{YType::str, "vlanTrunkPortVlansPruningEligible"},
    vlantrunkportvlansrcvjoined{YType::str, "vlanTrunkPortVlansRcvJoined"},
    vlantrunkportvlansrcvjoined2k{YType::str, "vlanTrunkPortVlansRcvJoined2k"},
    vlantrunkportvlansrcvjoined3k{YType::str, "vlanTrunkPortVlansRcvJoined3k"},
    vlantrunkportvlansrcvjoined4k{YType::str, "vlanTrunkPortVlansRcvJoined4k"},
    vlantrunkportvlansxmitjoined{YType::str, "vlanTrunkPortVlansXmitJoined"},
    vlantrunkportvlansxmitjoined2k{YType::str, "vlanTrunkPortVlansXmitJoined2k"},
    vlantrunkportvlansxmitjoined3k{YType::str, "vlanTrunkPortVlansXmitJoined3k"},
    vlantrunkportvlansxmitjoined4k{YType::str, "vlanTrunkPortVlansXmitJoined4k"},
    vlantrunkportvtpenabled{YType::boolean, "vlanTrunkPortVtpEnabled"},
    vtpvlanspruningeligible2k{YType::str, "vtpVlansPruningEligible2k"},
    vtpvlanspruningeligible3k{YType::str, "vtpVlansPruningEligible3k"},
    vtpvlanspruningeligible4k{YType::str, "vtpVlansPruningEligible4k"}
{
    yang_name = "vlanTrunkPortEntry"; yang_parent_name = "vlanTrunkPortTable";
}

CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::~Vlantrunkportentry()
{
}

bool CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::has_data() const
{
    return vlantrunkportifindex.is_set
	|| stpxpreferredmistpinstancesmap.is_set
	|| stpxpreferredmstinstancesmap.is_set
	|| stpxpreferredvlansmap.is_set
	|| stpxpreferredvlansmap2k.is_set
	|| stpxpreferredvlansmap3k.is_set
	|| stpxpreferredvlansmap4k.is_set
	|| vlantrunkportdot1qtunnel.is_set
	|| vlantrunkportdynamicstate.is_set
	|| vlantrunkportdynamicstatus.is_set
	|| vlantrunkportencapsulationopertype.is_set
	|| vlantrunkportencapsulationtype.is_set
	|| vlantrunkportinjoins.is_set
	|| vlantrunkportmanagementdomain.is_set
	|| vlantrunkportnativevlan.is_set
	|| vlantrunkportoldadverts.is_set
	|| vlantrunkportoutjoins.is_set
	|| vlantrunkportrowstatus.is_set
	|| vlantrunkportvlansactivefirst2k.is_set
	|| vlantrunkportvlansactivesecond2k.is_set
	|| vlantrunkportvlansenabled.is_set
	|| vlantrunkportvlansenabled2k.is_set
	|| vlantrunkportvlansenabled3k.is_set
	|| vlantrunkportvlansenabled4k.is_set
	|| vlantrunkportvlanspruningeligible.is_set
	|| vlantrunkportvlansrcvjoined.is_set
	|| vlantrunkportvlansrcvjoined2k.is_set
	|| vlantrunkportvlansrcvjoined3k.is_set
	|| vlantrunkportvlansrcvjoined4k.is_set
	|| vlantrunkportvlansxmitjoined.is_set
	|| vlantrunkportvlansxmitjoined2k.is_set
	|| vlantrunkportvlansxmitjoined3k.is_set
	|| vlantrunkportvlansxmitjoined4k.is_set
	|| vlantrunkportvtpenabled.is_set
	|| vtpvlanspruningeligible2k.is_set
	|| vtpvlanspruningeligible3k.is_set
	|| vtpvlanspruningeligible4k.is_set;
}

bool CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(vlantrunkportifindex.operation)
	|| is_set(stpxpreferredmistpinstancesmap.operation)
	|| is_set(stpxpreferredmstinstancesmap.operation)
	|| is_set(stpxpreferredvlansmap.operation)
	|| is_set(stpxpreferredvlansmap2k.operation)
	|| is_set(stpxpreferredvlansmap3k.operation)
	|| is_set(stpxpreferredvlansmap4k.operation)
	|| is_set(vlantrunkportdot1qtunnel.operation)
	|| is_set(vlantrunkportdynamicstate.operation)
	|| is_set(vlantrunkportdynamicstatus.operation)
	|| is_set(vlantrunkportencapsulationopertype.operation)
	|| is_set(vlantrunkportencapsulationtype.operation)
	|| is_set(vlantrunkportinjoins.operation)
	|| is_set(vlantrunkportmanagementdomain.operation)
	|| is_set(vlantrunkportnativevlan.operation)
	|| is_set(vlantrunkportoldadverts.operation)
	|| is_set(vlantrunkportoutjoins.operation)
	|| is_set(vlantrunkportrowstatus.operation)
	|| is_set(vlantrunkportvlansactivefirst2k.operation)
	|| is_set(vlantrunkportvlansactivesecond2k.operation)
	|| is_set(vlantrunkportvlansenabled.operation)
	|| is_set(vlantrunkportvlansenabled2k.operation)
	|| is_set(vlantrunkportvlansenabled3k.operation)
	|| is_set(vlantrunkportvlansenabled4k.operation)
	|| is_set(vlantrunkportvlanspruningeligible.operation)
	|| is_set(vlantrunkportvlansrcvjoined.operation)
	|| is_set(vlantrunkportvlansrcvjoined2k.operation)
	|| is_set(vlantrunkportvlansrcvjoined3k.operation)
	|| is_set(vlantrunkportvlansrcvjoined4k.operation)
	|| is_set(vlantrunkportvlansxmitjoined.operation)
	|| is_set(vlantrunkportvlansxmitjoined2k.operation)
	|| is_set(vlantrunkportvlansxmitjoined3k.operation)
	|| is_set(vlantrunkportvlansxmitjoined4k.operation)
	|| is_set(vlantrunkportvtpenabled.operation)
	|| is_set(vtpvlanspruningeligible2k.operation)
	|| is_set(vtpvlanspruningeligible3k.operation)
	|| is_set(vtpvlanspruningeligible4k.operation);
}

std::string CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPortEntry" <<"[vlanTrunkPortIfIndex='" <<vlantrunkportifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vlanTrunkPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlantrunkportifindex.is_set || is_set(vlantrunkportifindex.operation)) leaf_name_data.push_back(vlantrunkportifindex.get_name_leafdata());
    if (stpxpreferredmistpinstancesmap.is_set || is_set(stpxpreferredmistpinstancesmap.operation)) leaf_name_data.push_back(stpxpreferredmistpinstancesmap.get_name_leafdata());
    if (stpxpreferredmstinstancesmap.is_set || is_set(stpxpreferredmstinstancesmap.operation)) leaf_name_data.push_back(stpxpreferredmstinstancesmap.get_name_leafdata());
    if (stpxpreferredvlansmap.is_set || is_set(stpxpreferredvlansmap.operation)) leaf_name_data.push_back(stpxpreferredvlansmap.get_name_leafdata());
    if (stpxpreferredvlansmap2k.is_set || is_set(stpxpreferredvlansmap2k.operation)) leaf_name_data.push_back(stpxpreferredvlansmap2k.get_name_leafdata());
    if (stpxpreferredvlansmap3k.is_set || is_set(stpxpreferredvlansmap3k.operation)) leaf_name_data.push_back(stpxpreferredvlansmap3k.get_name_leafdata());
    if (stpxpreferredvlansmap4k.is_set || is_set(stpxpreferredvlansmap4k.operation)) leaf_name_data.push_back(stpxpreferredvlansmap4k.get_name_leafdata());
    if (vlantrunkportdot1qtunnel.is_set || is_set(vlantrunkportdot1qtunnel.operation)) leaf_name_data.push_back(vlantrunkportdot1qtunnel.get_name_leafdata());
    if (vlantrunkportdynamicstate.is_set || is_set(vlantrunkportdynamicstate.operation)) leaf_name_data.push_back(vlantrunkportdynamicstate.get_name_leafdata());
    if (vlantrunkportdynamicstatus.is_set || is_set(vlantrunkportdynamicstatus.operation)) leaf_name_data.push_back(vlantrunkportdynamicstatus.get_name_leafdata());
    if (vlantrunkportencapsulationopertype.is_set || is_set(vlantrunkportencapsulationopertype.operation)) leaf_name_data.push_back(vlantrunkportencapsulationopertype.get_name_leafdata());
    if (vlantrunkportencapsulationtype.is_set || is_set(vlantrunkportencapsulationtype.operation)) leaf_name_data.push_back(vlantrunkportencapsulationtype.get_name_leafdata());
    if (vlantrunkportinjoins.is_set || is_set(vlantrunkportinjoins.operation)) leaf_name_data.push_back(vlantrunkportinjoins.get_name_leafdata());
    if (vlantrunkportmanagementdomain.is_set || is_set(vlantrunkportmanagementdomain.operation)) leaf_name_data.push_back(vlantrunkportmanagementdomain.get_name_leafdata());
    if (vlantrunkportnativevlan.is_set || is_set(vlantrunkportnativevlan.operation)) leaf_name_data.push_back(vlantrunkportnativevlan.get_name_leafdata());
    if (vlantrunkportoldadverts.is_set || is_set(vlantrunkportoldadverts.operation)) leaf_name_data.push_back(vlantrunkportoldadverts.get_name_leafdata());
    if (vlantrunkportoutjoins.is_set || is_set(vlantrunkportoutjoins.operation)) leaf_name_data.push_back(vlantrunkportoutjoins.get_name_leafdata());
    if (vlantrunkportrowstatus.is_set || is_set(vlantrunkportrowstatus.operation)) leaf_name_data.push_back(vlantrunkportrowstatus.get_name_leafdata());
    if (vlantrunkportvlansactivefirst2k.is_set || is_set(vlantrunkportvlansactivefirst2k.operation)) leaf_name_data.push_back(vlantrunkportvlansactivefirst2k.get_name_leafdata());
    if (vlantrunkportvlansactivesecond2k.is_set || is_set(vlantrunkportvlansactivesecond2k.operation)) leaf_name_data.push_back(vlantrunkportvlansactivesecond2k.get_name_leafdata());
    if (vlantrunkportvlansenabled.is_set || is_set(vlantrunkportvlansenabled.operation)) leaf_name_data.push_back(vlantrunkportvlansenabled.get_name_leafdata());
    if (vlantrunkportvlansenabled2k.is_set || is_set(vlantrunkportvlansenabled2k.operation)) leaf_name_data.push_back(vlantrunkportvlansenabled2k.get_name_leafdata());
    if (vlantrunkportvlansenabled3k.is_set || is_set(vlantrunkportvlansenabled3k.operation)) leaf_name_data.push_back(vlantrunkportvlansenabled3k.get_name_leafdata());
    if (vlantrunkportvlansenabled4k.is_set || is_set(vlantrunkportvlansenabled4k.operation)) leaf_name_data.push_back(vlantrunkportvlansenabled4k.get_name_leafdata());
    if (vlantrunkportvlanspruningeligible.is_set || is_set(vlantrunkportvlanspruningeligible.operation)) leaf_name_data.push_back(vlantrunkportvlanspruningeligible.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined.is_set || is_set(vlantrunkportvlansrcvjoined.operation)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined2k.is_set || is_set(vlantrunkportvlansrcvjoined2k.operation)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined2k.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined3k.is_set || is_set(vlantrunkportvlansrcvjoined3k.operation)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined3k.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined4k.is_set || is_set(vlantrunkportvlansrcvjoined4k.operation)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined4k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined.is_set || is_set(vlantrunkportvlansxmitjoined.operation)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined2k.is_set || is_set(vlantrunkportvlansxmitjoined2k.operation)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined2k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined3k.is_set || is_set(vlantrunkportvlansxmitjoined3k.operation)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined3k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined4k.is_set || is_set(vlantrunkportvlansxmitjoined4k.operation)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined4k.get_name_leafdata());
    if (vlantrunkportvtpenabled.is_set || is_set(vlantrunkportvtpenabled.operation)) leaf_name_data.push_back(vlantrunkportvtpenabled.get_name_leafdata());
    if (vtpvlanspruningeligible2k.is_set || is_set(vtpvlanspruningeligible2k.operation)) leaf_name_data.push_back(vtpvlanspruningeligible2k.get_name_leafdata());
    if (vtpvlanspruningeligible3k.is_set || is_set(vtpvlanspruningeligible3k.operation)) leaf_name_data.push_back(vtpvlanspruningeligible3k.get_name_leafdata());
    if (vtpvlanspruningeligible4k.is_set || is_set(vtpvlanspruningeligible4k.operation)) leaf_name_data.push_back(vtpvlanspruningeligible4k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlanTrunkPortIfIndex")
    {
        vlantrunkportifindex = value;
    }
    if(value_path == "stpxPreferredMISTPInstancesMap")
    {
        stpxpreferredmistpinstancesmap = value;
    }
    if(value_path == "stpxPreferredMSTInstancesMap")
    {
        stpxpreferredmstinstancesmap = value;
    }
    if(value_path == "stpxPreferredVlansMap")
    {
        stpxpreferredvlansmap = value;
    }
    if(value_path == "stpxPreferredVlansMap2k")
    {
        stpxpreferredvlansmap2k = value;
    }
    if(value_path == "stpxPreferredVlansMap3k")
    {
        stpxpreferredvlansmap3k = value;
    }
    if(value_path == "stpxPreferredVlansMap4k")
    {
        stpxpreferredvlansmap4k = value;
    }
    if(value_path == "vlanTrunkPortDot1qTunnel")
    {
        vlantrunkportdot1qtunnel = value;
    }
    if(value_path == "vlanTrunkPortDynamicState")
    {
        vlantrunkportdynamicstate = value;
    }
    if(value_path == "vlanTrunkPortDynamicStatus")
    {
        vlantrunkportdynamicstatus = value;
    }
    if(value_path == "vlanTrunkPortEncapsulationOperType")
    {
        vlantrunkportencapsulationopertype = value;
    }
    if(value_path == "vlanTrunkPortEncapsulationType")
    {
        vlantrunkportencapsulationtype = value;
    }
    if(value_path == "vlanTrunkPortInJoins")
    {
        vlantrunkportinjoins = value;
    }
    if(value_path == "vlanTrunkPortManagementDomain")
    {
        vlantrunkportmanagementdomain = value;
    }
    if(value_path == "vlanTrunkPortNativeVlan")
    {
        vlantrunkportnativevlan = value;
    }
    if(value_path == "vlanTrunkPortOldAdverts")
    {
        vlantrunkportoldadverts = value;
    }
    if(value_path == "vlanTrunkPortOutJoins")
    {
        vlantrunkportoutjoins = value;
    }
    if(value_path == "vlanTrunkPortRowStatus")
    {
        vlantrunkportrowstatus = value;
    }
    if(value_path == "vlanTrunkPortVlansActiveFirst2k")
    {
        vlantrunkportvlansactivefirst2k = value;
    }
    if(value_path == "vlanTrunkPortVlansActiveSecond2k")
    {
        vlantrunkportvlansactivesecond2k = value;
    }
    if(value_path == "vlanTrunkPortVlansEnabled")
    {
        vlantrunkportvlansenabled = value;
    }
    if(value_path == "vlanTrunkPortVlansEnabled2k")
    {
        vlantrunkportvlansenabled2k = value;
    }
    if(value_path == "vlanTrunkPortVlansEnabled3k")
    {
        vlantrunkportvlansenabled3k = value;
    }
    if(value_path == "vlanTrunkPortVlansEnabled4k")
    {
        vlantrunkportvlansenabled4k = value;
    }
    if(value_path == "vlanTrunkPortVlansPruningEligible")
    {
        vlantrunkportvlanspruningeligible = value;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined")
    {
        vlantrunkportvlansrcvjoined = value;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined2k")
    {
        vlantrunkportvlansrcvjoined2k = value;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined3k")
    {
        vlantrunkportvlansrcvjoined3k = value;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined4k")
    {
        vlantrunkportvlansrcvjoined4k = value;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined")
    {
        vlantrunkportvlansxmitjoined = value;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined2k")
    {
        vlantrunkportvlansxmitjoined2k = value;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined3k")
    {
        vlantrunkportvlansxmitjoined3k = value;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined4k")
    {
        vlantrunkportvlansxmitjoined4k = value;
    }
    if(value_path == "vlanTrunkPortVtpEnabled")
    {
        vlantrunkportvtpenabled = value;
    }
    if(value_path == "vtpVlansPruningEligible2k")
    {
        vtpvlanspruningeligible2k = value;
    }
    if(value_path == "vtpVlansPruningEligible3k")
    {
        vtpvlanspruningeligible3k = value;
    }
    if(value_path == "vtpVlansPruningEligible4k")
    {
        vtpvlanspruningeligible4k = value;
    }
}

CiscoVtpMib::Vtpdiscovertable::Vtpdiscovertable()
{
    yang_name = "vtpDiscoverTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpdiscovertable::~Vtpdiscovertable()
{
}

bool CiscoVtpMib::Vtpdiscovertable::has_data() const
{
    for (std::size_t index=0; index<vtpdiscoverentry.size(); index++)
    {
        if(vtpdiscoverentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpdiscovertable::has_operation() const
{
    for (std::size_t index=0; index<vtpdiscoverentry.size(); index++)
    {
        if(vtpdiscoverentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpdiscovertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpdiscovertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpdiscovertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpDiscoverEntry")
    {
        for(auto const & c : vtpdiscoverentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry>();
        c->parent = this;
        vtpdiscoverentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpdiscovertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpdiscoverentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpdiscovertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpdiscoveraction{YType::enumeration, "vtpDiscoverAction"},
    vtpdiscoverstatus{YType::enumeration, "vtpDiscoverStatus"},
    vtplastdiscovertime{YType::uint32, "vtpLastDiscoverTime"}
{
    yang_name = "vtpDiscoverEntry"; yang_parent_name = "vtpDiscoverTable";
}

CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::~Vtpdiscoverentry()
{
}

bool CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpdiscoveraction.is_set
	|| vtpdiscoverstatus.is_set
	|| vtplastdiscovertime.is_set;
}

bool CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpdiscoveraction.operation)
	|| is_set(vtpdiscoverstatus.operation)
	|| is_set(vtplastdiscovertime.operation);
}

std::string CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDiscoverTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdiscoveraction.is_set || is_set(vtpdiscoveraction.operation)) leaf_name_data.push_back(vtpdiscoveraction.get_name_leafdata());
    if (vtpdiscoverstatus.is_set || is_set(vtpdiscoverstatus.operation)) leaf_name_data.push_back(vtpdiscoverstatus.get_name_leafdata());
    if (vtplastdiscovertime.is_set || is_set(vtplastdiscovertime.operation)) leaf_name_data.push_back(vtplastdiscovertime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpDiscoverAction")
    {
        vtpdiscoveraction = value;
    }
    if(value_path == "vtpDiscoverStatus")
    {
        vtpdiscoverstatus = value;
    }
    if(value_path == "vtpLastDiscoverTime")
    {
        vtplastdiscovertime = value;
    }
}

CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresulttable()
{
    yang_name = "vtpDiscoverResultTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpdiscoverresulttable::~Vtpdiscoverresulttable()
{
}

bool CiscoVtpMib::Vtpdiscoverresulttable::has_data() const
{
    for (std::size_t index=0; index<vtpdiscoverresultentry.size(); index++)
    {
        if(vtpdiscoverresultentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpdiscoverresulttable::has_operation() const
{
    for (std::size_t index=0; index<vtpdiscoverresultentry.size(); index++)
    {
        if(vtpdiscoverresultentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpdiscoverresulttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverResultTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpdiscoverresulttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpdiscoverresulttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpDiscoverResultEntry")
    {
        for(auto const & c : vtpdiscoverresultentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry>();
        c->parent = this;
        vtpdiscoverresultentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpdiscoverresulttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpdiscoverresultentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpdiscoverresulttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::Vtpdiscoverresultentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpdiscoverresultindex{YType::uint32, "vtpDiscoverResultIndex"},
    vtpdiscoverresultconflicting{YType::boolean, "vtpDiscoverResultConflicting"},
    vtpdiscoverresultdatabasename{YType::str, "vtpDiscoverResultDatabaseName"},
    vtpdiscoverresultdeviceid{YType::str, "vtpDiscoverResultDeviceId"},
    vtpdiscoverresultprimaryserver{YType::str, "vtpDiscoverResultPrimaryServer"},
    vtpdiscoverresultrevnumber{YType::uint32, "vtpDiscoverResultRevNumber"},
    vtpdiscoverresultsystemname{YType::str, "vtpDiscoverResultSystemName"}
{
    yang_name = "vtpDiscoverResultEntry"; yang_parent_name = "vtpDiscoverResultTable";
}

CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::~Vtpdiscoverresultentry()
{
}

bool CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpdiscoverresultindex.is_set
	|| vtpdiscoverresultconflicting.is_set
	|| vtpdiscoverresultdatabasename.is_set
	|| vtpdiscoverresultdeviceid.is_set
	|| vtpdiscoverresultprimaryserver.is_set
	|| vtpdiscoverresultrevnumber.is_set
	|| vtpdiscoverresultsystemname.is_set;
}

bool CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpdiscoverresultindex.operation)
	|| is_set(vtpdiscoverresultconflicting.operation)
	|| is_set(vtpdiscoverresultdatabasename.operation)
	|| is_set(vtpdiscoverresultdeviceid.operation)
	|| is_set(vtpdiscoverresultprimaryserver.operation)
	|| is_set(vtpdiscoverresultrevnumber.operation)
	|| is_set(vtpdiscoverresultsystemname.operation);
}

std::string CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverResultEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpDiscoverResultIndex='" <<vtpdiscoverresultindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDiscoverResultTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdiscoverresultindex.is_set || is_set(vtpdiscoverresultindex.operation)) leaf_name_data.push_back(vtpdiscoverresultindex.get_name_leafdata());
    if (vtpdiscoverresultconflicting.is_set || is_set(vtpdiscoverresultconflicting.operation)) leaf_name_data.push_back(vtpdiscoverresultconflicting.get_name_leafdata());
    if (vtpdiscoverresultdatabasename.is_set || is_set(vtpdiscoverresultdatabasename.operation)) leaf_name_data.push_back(vtpdiscoverresultdatabasename.get_name_leafdata());
    if (vtpdiscoverresultdeviceid.is_set || is_set(vtpdiscoverresultdeviceid.operation)) leaf_name_data.push_back(vtpdiscoverresultdeviceid.get_name_leafdata());
    if (vtpdiscoverresultprimaryserver.is_set || is_set(vtpdiscoverresultprimaryserver.operation)) leaf_name_data.push_back(vtpdiscoverresultprimaryserver.get_name_leafdata());
    if (vtpdiscoverresultrevnumber.is_set || is_set(vtpdiscoverresultrevnumber.operation)) leaf_name_data.push_back(vtpdiscoverresultrevnumber.get_name_leafdata());
    if (vtpdiscoverresultsystemname.is_set || is_set(vtpdiscoverresultsystemname.operation)) leaf_name_data.push_back(vtpdiscoverresultsystemname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpDiscoverResultIndex")
    {
        vtpdiscoverresultindex = value;
    }
    if(value_path == "vtpDiscoverResultConflicting")
    {
        vtpdiscoverresultconflicting = value;
    }
    if(value_path == "vtpDiscoverResultDatabaseName")
    {
        vtpdiscoverresultdatabasename = value;
    }
    if(value_path == "vtpDiscoverResultDeviceId")
    {
        vtpdiscoverresultdeviceid = value;
    }
    if(value_path == "vtpDiscoverResultPrimaryServer")
    {
        vtpdiscoverresultprimaryserver = value;
    }
    if(value_path == "vtpDiscoverResultRevNumber")
    {
        vtpdiscoverresultrevnumber = value;
    }
    if(value_path == "vtpDiscoverResultSystemName")
    {
        vtpdiscoverresultsystemname = value;
    }
}

CiscoVtpMib::Vtpdatabasetable::Vtpdatabasetable()
{
    yang_name = "vtpDatabaseTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpdatabasetable::~Vtpdatabasetable()
{
}

bool CiscoVtpMib::Vtpdatabasetable::has_data() const
{
    for (std::size_t index=0; index<vtpdatabaseentry.size(); index++)
    {
        if(vtpdatabaseentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpdatabasetable::has_operation() const
{
    for (std::size_t index=0; index<vtpdatabaseentry.size(); index++)
    {
        if(vtpdatabaseentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpdatabasetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDatabaseTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpdatabasetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpdatabasetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpDatabaseEntry")
    {
        for(auto const & c : vtpdatabaseentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry>();
        c->parent = this;
        vtpdatabaseentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpdatabasetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpdatabaseentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpdatabasetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaseentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpdatabaseindex{YType::uint32, "vtpDatabaseIndex"},
    vtpdatabaselocalmode{YType::enumeration, "vtpDatabaseLocalMode"},
    vtpdatabasename{YType::str, "vtpDatabaseName"},
    vtpdatabaseprimaryserver{YType::boolean, "vtpDatabasePrimaryServer"},
    vtpdatabaseprimaryserverid{YType::str, "vtpDatabasePrimaryServerId"},
    vtpdatabaserevnumber{YType::uint32, "vtpDatabaseRevNumber"},
    vtpdatabasetakeoverpassword{YType::str, "vtpDatabaseTakeOverPassword"},
    vtpdatabasetakeoverprimary{YType::boolean, "vtpDatabaseTakeOverPrimary"}
{
    yang_name = "vtpDatabaseEntry"; yang_parent_name = "vtpDatabaseTable";
}

CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::~Vtpdatabaseentry()
{
}

bool CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpdatabaseindex.is_set
	|| vtpdatabaselocalmode.is_set
	|| vtpdatabasename.is_set
	|| vtpdatabaseprimaryserver.is_set
	|| vtpdatabaseprimaryserverid.is_set
	|| vtpdatabaserevnumber.is_set
	|| vtpdatabasetakeoverpassword.is_set
	|| vtpdatabasetakeoverprimary.is_set;
}

bool CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpdatabaseindex.operation)
	|| is_set(vtpdatabaselocalmode.operation)
	|| is_set(vtpdatabasename.operation)
	|| is_set(vtpdatabaseprimaryserver.operation)
	|| is_set(vtpdatabaseprimaryserverid.operation)
	|| is_set(vtpdatabaserevnumber.operation)
	|| is_set(vtpdatabasetakeoverpassword.operation)
	|| is_set(vtpdatabasetakeoverprimary.operation);
}

std::string CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDatabaseEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpDatabaseIndex='" <<vtpdatabaseindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDatabaseTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdatabaseindex.is_set || is_set(vtpdatabaseindex.operation)) leaf_name_data.push_back(vtpdatabaseindex.get_name_leafdata());
    if (vtpdatabaselocalmode.is_set || is_set(vtpdatabaselocalmode.operation)) leaf_name_data.push_back(vtpdatabaselocalmode.get_name_leafdata());
    if (vtpdatabasename.is_set || is_set(vtpdatabasename.operation)) leaf_name_data.push_back(vtpdatabasename.get_name_leafdata());
    if (vtpdatabaseprimaryserver.is_set || is_set(vtpdatabaseprimaryserver.operation)) leaf_name_data.push_back(vtpdatabaseprimaryserver.get_name_leafdata());
    if (vtpdatabaseprimaryserverid.is_set || is_set(vtpdatabaseprimaryserverid.operation)) leaf_name_data.push_back(vtpdatabaseprimaryserverid.get_name_leafdata());
    if (vtpdatabaserevnumber.is_set || is_set(vtpdatabaserevnumber.operation)) leaf_name_data.push_back(vtpdatabaserevnumber.get_name_leafdata());
    if (vtpdatabasetakeoverpassword.is_set || is_set(vtpdatabasetakeoverpassword.operation)) leaf_name_data.push_back(vtpdatabasetakeoverpassword.get_name_leafdata());
    if (vtpdatabasetakeoverprimary.is_set || is_set(vtpdatabasetakeoverprimary.operation)) leaf_name_data.push_back(vtpdatabasetakeoverprimary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpDatabaseIndex")
    {
        vtpdatabaseindex = value;
    }
    if(value_path == "vtpDatabaseLocalMode")
    {
        vtpdatabaselocalmode = value;
    }
    if(value_path == "vtpDatabaseName")
    {
        vtpdatabasename = value;
    }
    if(value_path == "vtpDatabasePrimaryServer")
    {
        vtpdatabaseprimaryserver = value;
    }
    if(value_path == "vtpDatabasePrimaryServerId")
    {
        vtpdatabaseprimaryserverid = value;
    }
    if(value_path == "vtpDatabaseRevNumber")
    {
        vtpdatabaserevnumber = value;
    }
    if(value_path == "vtpDatabaseTakeOverPassword")
    {
        vtpdatabasetakeoverpassword = value;
    }
    if(value_path == "vtpDatabaseTakeOverPrimary")
    {
        vtpdatabasetakeoverprimary = value;
    }
}

CiscoVtpMib::Vtpauthenticationtable::Vtpauthenticationtable()
{
    yang_name = "vtpAuthenticationTable"; yang_parent_name = "CISCO-VTP-MIB";
}

CiscoVtpMib::Vtpauthenticationtable::~Vtpauthenticationtable()
{
}

bool CiscoVtpMib::Vtpauthenticationtable::has_data() const
{
    for (std::size_t index=0; index<vtpauthentry.size(); index++)
    {
        if(vtpauthentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVtpMib::Vtpauthenticationtable::has_operation() const
{
    for (std::size_t index=0; index<vtpauthentry.size(); index++)
    {
        if(vtpauthentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVtpMib::Vtpauthenticationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpAuthenticationTable";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpauthenticationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpauthenticationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpAuthEntry")
    {
        for(auto const & c : vtpauthentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry>();
        c->parent = this;
        vtpauthentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpauthenticationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpauthentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVtpMib::Vtpauthenticationtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::Vtpauthentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpauthpassword{YType::str, "vtpAuthPassword"},
    vtpauthpasswordtype{YType::enumeration, "vtpAuthPasswordType"},
    vtpauthsecretkey{YType::str, "vtpAuthSecretKey"}
{
    yang_name = "vtpAuthEntry"; yang_parent_name = "vtpAuthenticationTable";
}

CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::~Vtpauthentry()
{
}

bool CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpauthpassword.is_set
	|| vtpauthpasswordtype.is_set
	|| vtpauthsecretkey.is_set;
}

bool CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::has_operation() const
{
    return is_set(operation)
	|| is_set(managementdomainindex.operation)
	|| is_set(vtpauthpassword.operation)
	|| is_set(vtpauthpasswordtype.operation)
	|| is_set(vtpauthsecretkey.operation);
}

std::string CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpAuthEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpAuthenticationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.operation)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpauthpassword.is_set || is_set(vtpauthpassword.operation)) leaf_name_data.push_back(vtpauthpassword.get_name_leafdata());
    if (vtpauthpasswordtype.is_set || is_set(vtpauthpasswordtype.operation)) leaf_name_data.push_back(vtpauthpasswordtype.get_name_leafdata());
    if (vtpauthsecretkey.is_set || is_set(vtpauthsecretkey.operation)) leaf_name_data.push_back(vtpauthsecretkey.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
    }
    if(value_path == "vtpAuthPassword")
    {
        vtpauthpassword = value;
    }
    if(value_path == "vtpAuthPasswordType")
    {
        vtpauthpasswordtype = value;
    }
    if(value_path == "vtpAuthSecretKey")
    {
        vtpauthsecretkey = value;
    }
}

const Enum::YLeaf VlantypeEnum::ethernet {1, "ethernet"};
const Enum::YLeaf VlantypeEnum::fddi {2, "fddi"};
const Enum::YLeaf VlantypeEnum::tokenRing {3, "tokenRing"};
const Enum::YLeaf VlantypeEnum::fddiNet {4, "fddiNet"};
const Enum::YLeaf VlantypeEnum::trNet {5, "trNet"};
const Enum::YLeaf VlantypeEnum::deprecated {6, "deprecated"};

const Enum::YLeaf CiscoVtpMib::Vtpstatus::VtpversionEnum::one {1, "one"};
const Enum::YLeaf CiscoVtpMib::Vtpstatus::VtpversionEnum::two {2, "two"};
const Enum::YLeaf CiscoVtpMib::Vtpstatus::VtpversionEnum::none {3, "none"};
const Enum::YLeaf CiscoVtpMib::Vtpstatus::VtpversionEnum::three {4, "three"};

const Enum::YLeaf CiscoVtpMib::Internalvlaninfo::VtpinternalvlanallocpolicyEnum::ascending {1, "ascending"};
const Enum::YLeaf CiscoVtpMib::Internalvlaninfo::VtpinternalvlanallocpolicyEnum::descending {2, "descending"};

const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainlocalmodeEnum::client {1, "client"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainlocalmodeEnum::server {2, "server"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainlocalmodeEnum::transparent {3, "transparent"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainlocalmodeEnum::off {4, "off"};

const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainpruningstateEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainpruningstateEnum::disabled {2, "disabled"};

const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainversioninuseEnum::version1 {1, "version1"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainversioninuseEnum::version2 {2, "version2"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainversioninuseEnum::none {3, "none"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainversioninuseEnum::version3 {4, "version3"};

const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainpruningstateoperEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainpruningstateoperEnum::disabled {2, "disabled"};

const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlaneditoperationEnum::none {1, "none"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlaneditoperationEnum::copy {2, "copy"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlaneditoperationEnum::apply {3, "apply"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlaneditoperationEnum::release {4, "release"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlaneditoperationEnum::restartTimer {5, "restartTimer"};

const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::inProgress {1, "inProgress"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::succeeded {2, "succeeded"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::configNumberError {3, "configNumberError"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::inconsistentEdit {4, "inconsistentEdit"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::tooBig {5, "tooBig"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::localNVStoreFail {6, "localNVStoreFail"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::remoteNVStoreFail {7, "remoteNVStoreFail"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::editBufferEmpty {8, "editBufferEmpty"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::someOtherError {9, "someOtherError"};
const Enum::YLeaf CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum::notPrimaryServer {10, "notPrimaryServer"};

const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstateEnum::operational {1, "operational"};
const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstateEnum::suspended {2, "suspended"};
const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstateEnum::mtuTooBigForDevice {3, "mtuTooBigForDevice"};
const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstateEnum::mtuTooBigForTrunk {4, "mtuTooBigForTrunk"};

const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstptypeEnum::ieee {1, "ieee"};
const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstptypeEnum::ibm {2, "ibm"};
const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstptypeEnum::hybrid {3, "hybrid"};

const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanbridgetypeEnum::none {0, "none"};
const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanbridgetypeEnum::srt {1, "srt"};
const Enum::YLeaf CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanbridgetypeEnum::srb {2, "srb"};

const Enum::YLeaf CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditstateEnum::operational {1, "operational"};
const Enum::YLeaf CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditstateEnum::suspended {2, "suspended"};

const Enum::YLeaf CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditstptypeEnum::ieee {1, "ieee"};
const Enum::YLeaf CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditstptypeEnum::ibm {2, "ibm"};
const Enum::YLeaf CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditstptypeEnum::auto_ {3, "auto"};

const Enum::YLeaf CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditbridgetypeEnum::srt {1, "srt"};
const Enum::YLeaf CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditbridgetypeEnum::srb {2, "srb"};

const Enum::YLeaf CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::VtpvlanlocalshutdownEnum::up {1, "up"};
const Enum::YLeaf CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::VtpvlanlocalshutdownEnum::down {2, "down"};

const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationtypeEnum::isl {1, "isl"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationtypeEnum::dot10 {2, "dot10"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationtypeEnum::lane {3, "lane"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationtypeEnum::dot1Q {4, "dot1Q"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationtypeEnum::negotiate {5, "negotiate"};

const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstateEnum::on {1, "on"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstateEnum::off {2, "off"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstateEnum::desirable {3, "desirable"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstateEnum::auto_ {4, "auto"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstateEnum::onNoNegotiate {5, "onNoNegotiate"};

const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstatusEnum::trunking {1, "trunking"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstatusEnum::notTrunking {2, "notTrunking"};

const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationopertypeEnum::isl {1, "isl"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationopertypeEnum::dot10 {2, "dot10"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationopertypeEnum::lane {3, "lane"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationopertypeEnum::dot1Q {4, "dot1Q"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationopertypeEnum::negotiating {5, "negotiating"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationopertypeEnum::notApplicable {6, "notApplicable"};

const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1QtunnelEnum::trunk {1, "trunk"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1QtunnelEnum::access {2, "access"};
const Enum::YLeaf CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1QtunnelEnum::disabled {3, "disabled"};

const Enum::YLeaf CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoveractionEnum::discover {1, "discover"};
const Enum::YLeaf CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoveractionEnum::noOperation {2, "noOperation"};
const Enum::YLeaf CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoveractionEnum::purgeResult {3, "purgeResult"};

const Enum::YLeaf CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoverstatusEnum::inProgress {1, "inProgress"};
const Enum::YLeaf CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoverstatusEnum::succeeded {2, "succeeded"};
const Enum::YLeaf CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoverstatusEnum::resourceUnavailable {3, "resourceUnavailable"};
const Enum::YLeaf CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoverstatusEnum::someOtherError {4, "someOtherError"};

const Enum::YLeaf CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::VtpdatabaselocalmodeEnum::client {1, "client"};
const Enum::YLeaf CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::VtpdatabaselocalmodeEnum::server {2, "server"};
const Enum::YLeaf CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::VtpdatabaselocalmodeEnum::transparent {3, "transparent"};
const Enum::YLeaf CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::VtpdatabaselocalmodeEnum::off {4, "off"};

const Enum::YLeaf CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::VtpauthpasswordtypeEnum::plaintext {1, "plaintext"};
const Enum::YLeaf CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::VtpauthpasswordtypeEnum::hidden {2, "hidden"};


}
}

