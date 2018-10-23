
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VTP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VTP_MIB {

CISCOVTPMIB::CISCOVTPMIB()
    :
    vtpstatus(std::make_shared<CISCOVTPMIB::VtpStatus>())
    , internalvlaninfo(std::make_shared<CISCOVTPMIB::InternalVlanInfo>())
    , vlantrunkports(std::make_shared<CISCOVTPMIB::VlanTrunkPorts>())
    , vlanstatistics(std::make_shared<CISCOVTPMIB::VlanStatistics>())
    , managementdomaintable(std::make_shared<CISCOVTPMIB::ManagementDomainTable>())
    , vtpvlantable(std::make_shared<CISCOVTPMIB::VtpVlanTable>())
    , vtpinternalvlantable(std::make_shared<CISCOVTPMIB::VtpInternalVlanTable>())
    , vtpvlanedittable(std::make_shared<CISCOVTPMIB::VtpVlanEditTable>())
    , vtpvlanlocalshutdowntable(std::make_shared<CISCOVTPMIB::VtpVlanLocalShutdownTable>())
    , vlantrunkporttable(std::make_shared<CISCOVTPMIB::VlanTrunkPortTable>())
    , vtpdiscovertable(std::make_shared<CISCOVTPMIB::VtpDiscoverTable>())
    , vtpdiscoverresulttable(std::make_shared<CISCOVTPMIB::VtpDiscoverResultTable>())
    , vtpdatabasetable(std::make_shared<CISCOVTPMIB::VtpDatabaseTable>())
    , vtpauthenticationtable(std::make_shared<CISCOVTPMIB::VtpAuthenticationTable>())
{
    vtpstatus->parent = this;
    internalvlaninfo->parent = this;
    vlantrunkports->parent = this;
    vlanstatistics->parent = this;
    managementdomaintable->parent = this;
    vtpvlantable->parent = this;
    vtpinternalvlantable->parent = this;
    vtpvlanedittable->parent = this;
    vtpvlanlocalshutdowntable->parent = this;
    vlantrunkporttable->parent = this;
    vtpdiscovertable->parent = this;
    vtpdiscoverresulttable->parent = this;
    vtpdatabasetable->parent = this;
    vtpauthenticationtable->parent = this;

    yang_name = "CISCO-VTP-MIB"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOVTPMIB::~CISCOVTPMIB()
{
}

bool CISCOVTPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (vtpstatus !=  nullptr && vtpstatus->has_data())
	|| (internalvlaninfo !=  nullptr && internalvlaninfo->has_data())
	|| (vlantrunkports !=  nullptr && vlantrunkports->has_data())
	|| (vlanstatistics !=  nullptr && vlanstatistics->has_data())
	|| (managementdomaintable !=  nullptr && managementdomaintable->has_data())
	|| (vtpvlantable !=  nullptr && vtpvlantable->has_data())
	|| (vtpinternalvlantable !=  nullptr && vtpinternalvlantable->has_data())
	|| (vtpvlanedittable !=  nullptr && vtpvlanedittable->has_data())
	|| (vtpvlanlocalshutdowntable !=  nullptr && vtpvlanlocalshutdowntable->has_data())
	|| (vlantrunkporttable !=  nullptr && vlantrunkporttable->has_data())
	|| (vtpdiscovertable !=  nullptr && vtpdiscovertable->has_data())
	|| (vtpdiscoverresulttable !=  nullptr && vtpdiscoverresulttable->has_data())
	|| (vtpdatabasetable !=  nullptr && vtpdatabasetable->has_data())
	|| (vtpauthenticationtable !=  nullptr && vtpauthenticationtable->has_data());
}

bool CISCOVTPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (vtpstatus !=  nullptr && vtpstatus->has_operation())
	|| (internalvlaninfo !=  nullptr && internalvlaninfo->has_operation())
	|| (vlantrunkports !=  nullptr && vlantrunkports->has_operation())
	|| (vlanstatistics !=  nullptr && vlanstatistics->has_operation())
	|| (managementdomaintable !=  nullptr && managementdomaintable->has_operation())
	|| (vtpvlantable !=  nullptr && vtpvlantable->has_operation())
	|| (vtpinternalvlantable !=  nullptr && vtpinternalvlantable->has_operation())
	|| (vtpvlanedittable !=  nullptr && vtpvlanedittable->has_operation())
	|| (vtpvlanlocalshutdowntable !=  nullptr && vtpvlanlocalshutdowntable->has_operation())
	|| (vlantrunkporttable !=  nullptr && vlantrunkporttable->has_operation())
	|| (vtpdiscovertable !=  nullptr && vtpdiscovertable->has_operation())
	|| (vtpdiscoverresulttable !=  nullptr && vtpdiscoverresulttable->has_operation())
	|| (vtpdatabasetable !=  nullptr && vtpdatabasetable->has_operation())
	|| (vtpauthenticationtable !=  nullptr && vtpauthenticationtable->has_operation());
}

std::string CISCOVTPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpStatus")
    {
        if(vtpstatus == nullptr)
        {
            vtpstatus = std::make_shared<CISCOVTPMIB::VtpStatus>();
        }
        return vtpstatus;
    }

    if(child_yang_name == "internalVlanInfo")
    {
        if(internalvlaninfo == nullptr)
        {
            internalvlaninfo = std::make_shared<CISCOVTPMIB::InternalVlanInfo>();
        }
        return internalvlaninfo;
    }

    if(child_yang_name == "vlanTrunkPorts")
    {
        if(vlantrunkports == nullptr)
        {
            vlantrunkports = std::make_shared<CISCOVTPMIB::VlanTrunkPorts>();
        }
        return vlantrunkports;
    }

    if(child_yang_name == "vlanStatistics")
    {
        if(vlanstatistics == nullptr)
        {
            vlanstatistics = std::make_shared<CISCOVTPMIB::VlanStatistics>();
        }
        return vlanstatistics;
    }

    if(child_yang_name == "managementDomainTable")
    {
        if(managementdomaintable == nullptr)
        {
            managementdomaintable = std::make_shared<CISCOVTPMIB::ManagementDomainTable>();
        }
        return managementdomaintable;
    }

    if(child_yang_name == "vtpVlanTable")
    {
        if(vtpvlantable == nullptr)
        {
            vtpvlantable = std::make_shared<CISCOVTPMIB::VtpVlanTable>();
        }
        return vtpvlantable;
    }

    if(child_yang_name == "vtpInternalVlanTable")
    {
        if(vtpinternalvlantable == nullptr)
        {
            vtpinternalvlantable = std::make_shared<CISCOVTPMIB::VtpInternalVlanTable>();
        }
        return vtpinternalvlantable;
    }

    if(child_yang_name == "vtpVlanEditTable")
    {
        if(vtpvlanedittable == nullptr)
        {
            vtpvlanedittable = std::make_shared<CISCOVTPMIB::VtpVlanEditTable>();
        }
        return vtpvlanedittable;
    }

    if(child_yang_name == "vtpVlanLocalShutdownTable")
    {
        if(vtpvlanlocalshutdowntable == nullptr)
        {
            vtpvlanlocalshutdowntable = std::make_shared<CISCOVTPMIB::VtpVlanLocalShutdownTable>();
        }
        return vtpvlanlocalshutdowntable;
    }

    if(child_yang_name == "vlanTrunkPortTable")
    {
        if(vlantrunkporttable == nullptr)
        {
            vlantrunkporttable = std::make_shared<CISCOVTPMIB::VlanTrunkPortTable>();
        }
        return vlantrunkporttable;
    }

    if(child_yang_name == "vtpDiscoverTable")
    {
        if(vtpdiscovertable == nullptr)
        {
            vtpdiscovertable = std::make_shared<CISCOVTPMIB::VtpDiscoverTable>();
        }
        return vtpdiscovertable;
    }

    if(child_yang_name == "vtpDiscoverResultTable")
    {
        if(vtpdiscoverresulttable == nullptr)
        {
            vtpdiscoverresulttable = std::make_shared<CISCOVTPMIB::VtpDiscoverResultTable>();
        }
        return vtpdiscoverresulttable;
    }

    if(child_yang_name == "vtpDatabaseTable")
    {
        if(vtpdatabasetable == nullptr)
        {
            vtpdatabasetable = std::make_shared<CISCOVTPMIB::VtpDatabaseTable>();
        }
        return vtpdatabasetable;
    }

    if(child_yang_name == "vtpAuthenticationTable")
    {
        if(vtpauthenticationtable == nullptr)
        {
            vtpauthenticationtable = std::make_shared<CISCOVTPMIB::VtpAuthenticationTable>();
        }
        return vtpauthenticationtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vtpstatus != nullptr)
    {
        _children["vtpStatus"] = vtpstatus;
    }

    if(internalvlaninfo != nullptr)
    {
        _children["internalVlanInfo"] = internalvlaninfo;
    }

    if(vlantrunkports != nullptr)
    {
        _children["vlanTrunkPorts"] = vlantrunkports;
    }

    if(vlanstatistics != nullptr)
    {
        _children["vlanStatistics"] = vlanstatistics;
    }

    if(managementdomaintable != nullptr)
    {
        _children["managementDomainTable"] = managementdomaintable;
    }

    if(vtpvlantable != nullptr)
    {
        _children["vtpVlanTable"] = vtpvlantable;
    }

    if(vtpinternalvlantable != nullptr)
    {
        _children["vtpInternalVlanTable"] = vtpinternalvlantable;
    }

    if(vtpvlanedittable != nullptr)
    {
        _children["vtpVlanEditTable"] = vtpvlanedittable;
    }

    if(vtpvlanlocalshutdowntable != nullptr)
    {
        _children["vtpVlanLocalShutdownTable"] = vtpvlanlocalshutdowntable;
    }

    if(vlantrunkporttable != nullptr)
    {
        _children["vlanTrunkPortTable"] = vlantrunkporttable;
    }

    if(vtpdiscovertable != nullptr)
    {
        _children["vtpDiscoverTable"] = vtpdiscovertable;
    }

    if(vtpdiscoverresulttable != nullptr)
    {
        _children["vtpDiscoverResultTable"] = vtpdiscoverresulttable;
    }

    if(vtpdatabasetable != nullptr)
    {
        _children["vtpDatabaseTable"] = vtpdatabasetable;
    }

    if(vtpauthenticationtable != nullptr)
    {
        _children["vtpAuthenticationTable"] = vtpauthenticationtable;
    }

    return _children;
}

void CISCOVTPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::clone_ptr() const
{
    return std::make_shared<CISCOVTPMIB>();
}

std::string CISCOVTPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVTPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVTPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVTPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVTPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpStatus" || name == "internalVlanInfo" || name == "vlanTrunkPorts" || name == "vlanStatistics" || name == "managementDomainTable" || name == "vtpVlanTable" || name == "vtpInternalVlanTable" || name == "vtpVlanEditTable" || name == "vtpVlanLocalShutdownTable" || name == "vlanTrunkPortTable" || name == "vtpDiscoverTable" || name == "vtpDiscoverResultTable" || name == "vtpDatabaseTable" || name == "vtpAuthenticationTable")
        return true;
    return false;
}

CISCOVTPMIB::VtpStatus::VtpStatus()
    :
    vtpversion{YType::enumeration, "vtpVersion"},
    vtpmaxvlanstorage{YType::int32, "vtpMaxVlanStorage"},
    vtpnotificationsenabled{YType::boolean, "vtpNotificationsEnabled"},
    vtpvlancreatednotifenabled{YType::boolean, "vtpVlanCreatedNotifEnabled"},
    vtpvlandeletednotifenabled{YType::boolean, "vtpVlanDeletedNotifEnabled"}
{

    yang_name = "vtpStatus"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpStatus::~VtpStatus()
{
}

bool CISCOVTPMIB::VtpStatus::has_data() const
{
    if (is_presence_container) return true;
    return vtpversion.is_set
	|| vtpmaxvlanstorage.is_set
	|| vtpnotificationsenabled.is_set
	|| vtpvlancreatednotifenabled.is_set
	|| vtpvlandeletednotifenabled.is_set;
}

bool CISCOVTPMIB::VtpStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtpversion.yfilter)
	|| ydk::is_set(vtpmaxvlanstorage.yfilter)
	|| ydk::is_set(vtpnotificationsenabled.yfilter)
	|| ydk::is_set(vtpvlancreatednotifenabled.yfilter)
	|| ydk::is_set(vtpvlandeletednotifenabled.yfilter);
}

std::string CISCOVTPMIB::VtpStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpStatus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtpversion.is_set || is_set(vtpversion.yfilter)) leaf_name_data.push_back(vtpversion.get_name_leafdata());
    if (vtpmaxvlanstorage.is_set || is_set(vtpmaxvlanstorage.yfilter)) leaf_name_data.push_back(vtpmaxvlanstorage.get_name_leafdata());
    if (vtpnotificationsenabled.is_set || is_set(vtpnotificationsenabled.yfilter)) leaf_name_data.push_back(vtpnotificationsenabled.get_name_leafdata());
    if (vtpvlancreatednotifenabled.is_set || is_set(vtpvlancreatednotifenabled.yfilter)) leaf_name_data.push_back(vtpvlancreatednotifenabled.get_name_leafdata());
    if (vtpvlandeletednotifenabled.is_set || is_set(vtpvlandeletednotifenabled.yfilter)) leaf_name_data.push_back(vtpvlandeletednotifenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vtpVersion")
    {
        vtpversion = value;
        vtpversion.value_namespace = name_space;
        vtpversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpMaxVlanStorage")
    {
        vtpmaxvlanstorage = value;
        vtpmaxvlanstorage.value_namespace = name_space;
        vtpmaxvlanstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpNotificationsEnabled")
    {
        vtpnotificationsenabled = value;
        vtpnotificationsenabled.value_namespace = name_space;
        vtpnotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanCreatedNotifEnabled")
    {
        vtpvlancreatednotifenabled = value;
        vtpvlancreatednotifenabled.value_namespace = name_space;
        vtpvlancreatednotifenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanDeletedNotifEnabled")
    {
        vtpvlandeletednotifenabled = value;
        vtpvlandeletednotifenabled.value_namespace = name_space;
        vtpvlandeletednotifenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtpVersion")
    {
        vtpversion.yfilter = yfilter;
    }
    if(value_path == "vtpMaxVlanStorage")
    {
        vtpmaxvlanstorage.yfilter = yfilter;
    }
    if(value_path == "vtpNotificationsEnabled")
    {
        vtpnotificationsenabled.yfilter = yfilter;
    }
    if(value_path == "vtpVlanCreatedNotifEnabled")
    {
        vtpvlancreatednotifenabled.yfilter = yfilter;
    }
    if(value_path == "vtpVlanDeletedNotifEnabled")
    {
        vtpvlandeletednotifenabled.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpVersion" || name == "vtpMaxVlanStorage" || name == "vtpNotificationsEnabled" || name == "vtpVlanCreatedNotifEnabled" || name == "vtpVlanDeletedNotifEnabled")
        return true;
    return false;
}

CISCOVTPMIB::InternalVlanInfo::InternalVlanInfo()
    :
    vtpinternalvlanallocpolicy{YType::enumeration, "vtpInternalVlanAllocPolicy"}
{

    yang_name = "internalVlanInfo"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::InternalVlanInfo::~InternalVlanInfo()
{
}

bool CISCOVTPMIB::InternalVlanInfo::has_data() const
{
    if (is_presence_container) return true;
    return vtpinternalvlanallocpolicy.is_set;
}

bool CISCOVTPMIB::InternalVlanInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtpinternalvlanallocpolicy.yfilter);
}

std::string CISCOVTPMIB::InternalVlanInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::InternalVlanInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalVlanInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::InternalVlanInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtpinternalvlanallocpolicy.is_set || is_set(vtpinternalvlanallocpolicy.yfilter)) leaf_name_data.push_back(vtpinternalvlanallocpolicy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::InternalVlanInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::InternalVlanInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::InternalVlanInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vtpInternalVlanAllocPolicy")
    {
        vtpinternalvlanallocpolicy = value;
        vtpinternalvlanallocpolicy.value_namespace = name_space;
        vtpinternalvlanallocpolicy.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::InternalVlanInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtpInternalVlanAllocPolicy")
    {
        vtpinternalvlanallocpolicy.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::InternalVlanInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpInternalVlanAllocPolicy")
        return true;
    return false;
}

CISCOVTPMIB::VlanTrunkPorts::VlanTrunkPorts()
    :
    vlantrunkportsetserialno{YType::int32, "vlanTrunkPortSetSerialNo"},
    vlantrunkportsdot1qtag{YType::boolean, "vlanTrunkPortsDot1qTag"}
{

    yang_name = "vlanTrunkPorts"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VlanTrunkPorts::~VlanTrunkPorts()
{
}

bool CISCOVTPMIB::VlanTrunkPorts::has_data() const
{
    if (is_presence_container) return true;
    return vlantrunkportsetserialno.is_set
	|| vlantrunkportsdot1qtag.is_set;
}

bool CISCOVTPMIB::VlanTrunkPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlantrunkportsetserialno.yfilter)
	|| ydk::is_set(vlantrunkportsdot1qtag.yfilter);
}

std::string CISCOVTPMIB::VlanTrunkPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VlanTrunkPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPorts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VlanTrunkPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlantrunkportsetserialno.is_set || is_set(vlantrunkportsetserialno.yfilter)) leaf_name_data.push_back(vlantrunkportsetserialno.get_name_leafdata());
    if (vlantrunkportsdot1qtag.is_set || is_set(vlantrunkportsdot1qtag.yfilter)) leaf_name_data.push_back(vlantrunkportsdot1qtag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VlanTrunkPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VlanTrunkPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VlanTrunkPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanTrunkPortSetSerialNo")
    {
        vlantrunkportsetserialno = value;
        vlantrunkportsetserialno.value_namespace = name_space;
        vlantrunkportsetserialno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortsDot1qTag")
    {
        vlantrunkportsdot1qtag = value;
        vlantrunkportsdot1qtag.value_namespace = name_space;
        vlantrunkportsdot1qtag.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VlanTrunkPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanTrunkPortSetSerialNo")
    {
        vlantrunkportsetserialno.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortsDot1qTag")
    {
        vlantrunkportsdot1qtag.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VlanTrunkPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanTrunkPortSetSerialNo" || name == "vlanTrunkPortsDot1qTag")
        return true;
    return false;
}

CISCOVTPMIB::VlanStatistics::VlanStatistics()
    :
    vlanstatsvlans{YType::uint32, "vlanStatsVlans"},
    vlanstatsextendedvlans{YType::uint32, "vlanStatsExtendedVlans"},
    vlanstatsinternalvlans{YType::uint32, "vlanStatsInternalVlans"},
    vlanstatsfreevlans{YType::uint32, "vlanStatsFreeVlans"}
{

    yang_name = "vlanStatistics"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VlanStatistics::~VlanStatistics()
{
}

bool CISCOVTPMIB::VlanStatistics::has_data() const
{
    if (is_presence_container) return true;
    return vlanstatsvlans.is_set
	|| vlanstatsextendedvlans.is_set
	|| vlanstatsinternalvlans.is_set
	|| vlanstatsfreevlans.is_set;
}

bool CISCOVTPMIB::VlanStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanstatsvlans.yfilter)
	|| ydk::is_set(vlanstatsextendedvlans.yfilter)
	|| ydk::is_set(vlanstatsinternalvlans.yfilter)
	|| ydk::is_set(vlanstatsfreevlans.yfilter);
}

std::string CISCOVTPMIB::VlanStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VlanStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanStatistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VlanStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanstatsvlans.is_set || is_set(vlanstatsvlans.yfilter)) leaf_name_data.push_back(vlanstatsvlans.get_name_leafdata());
    if (vlanstatsextendedvlans.is_set || is_set(vlanstatsextendedvlans.yfilter)) leaf_name_data.push_back(vlanstatsextendedvlans.get_name_leafdata());
    if (vlanstatsinternalvlans.is_set || is_set(vlanstatsinternalvlans.yfilter)) leaf_name_data.push_back(vlanstatsinternalvlans.get_name_leafdata());
    if (vlanstatsfreevlans.is_set || is_set(vlanstatsfreevlans.yfilter)) leaf_name_data.push_back(vlanstatsfreevlans.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VlanStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VlanStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VlanStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanStatsVlans")
    {
        vlanstatsvlans = value;
        vlanstatsvlans.value_namespace = name_space;
        vlanstatsvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanStatsExtendedVlans")
    {
        vlanstatsextendedvlans = value;
        vlanstatsextendedvlans.value_namespace = name_space;
        vlanstatsextendedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanStatsInternalVlans")
    {
        vlanstatsinternalvlans = value;
        vlanstatsinternalvlans.value_namespace = name_space;
        vlanstatsinternalvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanStatsFreeVlans")
    {
        vlanstatsfreevlans = value;
        vlanstatsfreevlans.value_namespace = name_space;
        vlanstatsfreevlans.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VlanStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanStatsVlans")
    {
        vlanstatsvlans.yfilter = yfilter;
    }
    if(value_path == "vlanStatsExtendedVlans")
    {
        vlanstatsextendedvlans.yfilter = yfilter;
    }
    if(value_path == "vlanStatsInternalVlans")
    {
        vlanstatsinternalvlans.yfilter = yfilter;
    }
    if(value_path == "vlanStatsFreeVlans")
    {
        vlanstatsfreevlans.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VlanStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanStatsVlans" || name == "vlanStatsExtendedVlans" || name == "vlanStatsInternalVlans" || name == "vlanStatsFreeVlans")
        return true;
    return false;
}

CISCOVTPMIB::ManagementDomainTable::ManagementDomainTable()
    :
    managementdomainentry(this, {"managementdomainindex"})
{

    yang_name = "managementDomainTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::ManagementDomainTable::~ManagementDomainTable()
{
}

bool CISCOVTPMIB::ManagementDomainTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<managementdomainentry.len(); index++)
    {
        if(managementdomainentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::ManagementDomainTable::has_operation() const
{
    for (std::size_t index=0; index<managementdomainentry.len(); index++)
    {
        if(managementdomainentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::ManagementDomainTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::ManagementDomainTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "managementDomainTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::ManagementDomainTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::ManagementDomainTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "managementDomainEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry>();
        ent_->parent = this;
        managementdomainentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::ManagementDomainTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : managementdomainentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::ManagementDomainTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::ManagementDomainTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::ManagementDomainTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainEntry")
        return true;
    return false;
}

CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainEntry()
    :
    managementdomainindex{YType::int32, "managementDomainIndex"},
    managementdomainname{YType::str, "managementDomainName"},
    managementdomainlocalmode{YType::enumeration, "managementDomainLocalMode"},
    managementdomainconfigrevnumber{YType::uint32, "managementDomainConfigRevNumber"},
    managementdomainlastupdater{YType::str, "managementDomainLastUpdater"},
    managementdomainlastchange{YType::str, "managementDomainLastChange"},
    managementdomainrowstatus{YType::enumeration, "managementDomainRowStatus"},
    managementdomaintftpserver{YType::str, "managementDomainTftpServer"},
    managementdomaintftppathname{YType::str, "managementDomainTftpPathname"},
    managementdomainpruningstate{YType::enumeration, "managementDomainPruningState"},
    managementdomainversioninuse{YType::enumeration, "managementDomainVersionInUse"},
    managementdomainpruningstateoper{YType::enumeration, "managementDomainPruningStateOper"},
    managementdomainadminsrcif{YType::str, "managementDomainAdminSrcIf"},
    managementdomainsourceonlymode{YType::boolean, "managementDomainSourceOnlyMode"},
    managementdomainopersrcif{YType::str, "managementDomainOperSrcIf"},
    managementdomainconfigfile{YType::str, "managementDomainConfigFile"},
    managementdomainlocalupdatertype{YType::enumeration, "managementDomainLocalUpdaterType"},
    managementdomainlocalupdater{YType::str, "managementDomainLocalUpdater"},
    managementdomaindeviceid{YType::str, "managementDomainDeviceID"},
    vtpvlaneditoperation{YType::enumeration, "vtpVlanEditOperation"},
    vtpvlanapplystatus{YType::enumeration, "vtpVlanApplyStatus"},
    vtpvlaneditbufferowner{YType::str, "vtpVlanEditBufferOwner"},
    vtpvlaneditconfigrevnumber{YType::uint32, "vtpVlanEditConfigRevNumber"},
    vtpvlaneditmodifiedvlan{YType::int32, "vtpVlanEditModifiedVlan"},
    vtpinsummaryadverts{YType::uint32, "vtpInSummaryAdverts"},
    vtpinsubsetadverts{YType::uint32, "vtpInSubsetAdverts"},
    vtpinadvertrequests{YType::uint32, "vtpInAdvertRequests"},
    vtpoutsummaryadverts{YType::uint32, "vtpOutSummaryAdverts"},
    vtpoutsubsetadverts{YType::uint32, "vtpOutSubsetAdverts"},
    vtpoutadvertrequests{YType::uint32, "vtpOutAdvertRequests"},
    vtpconfigrevnumbererrors{YType::uint32, "vtpConfigRevNumberErrors"},
    vtpconfigdigesterrors{YType::uint32, "vtpConfigDigestErrors"}
{

    yang_name = "managementDomainEntry"; yang_parent_name = "managementDomainTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::~ManagementDomainEntry()
{
}

bool CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| managementdomainname.is_set
	|| managementdomainlocalmode.is_set
	|| managementdomainconfigrevnumber.is_set
	|| managementdomainlastupdater.is_set
	|| managementdomainlastchange.is_set
	|| managementdomainrowstatus.is_set
	|| managementdomaintftpserver.is_set
	|| managementdomaintftppathname.is_set
	|| managementdomainpruningstate.is_set
	|| managementdomainversioninuse.is_set
	|| managementdomainpruningstateoper.is_set
	|| managementdomainadminsrcif.is_set
	|| managementdomainsourceonlymode.is_set
	|| managementdomainopersrcif.is_set
	|| managementdomainconfigfile.is_set
	|| managementdomainlocalupdatertype.is_set
	|| managementdomainlocalupdater.is_set
	|| managementdomaindeviceid.is_set
	|| vtpvlaneditoperation.is_set
	|| vtpvlanapplystatus.is_set
	|| vtpvlaneditbufferowner.is_set
	|| vtpvlaneditconfigrevnumber.is_set
	|| vtpvlaneditmodifiedvlan.is_set
	|| vtpinsummaryadverts.is_set
	|| vtpinsubsetadverts.is_set
	|| vtpinadvertrequests.is_set
	|| vtpoutsummaryadverts.is_set
	|| vtpoutsubsetadverts.is_set
	|| vtpoutadvertrequests.is_set
	|| vtpconfigrevnumbererrors.is_set
	|| vtpconfigdigesterrors.is_set;
}

bool CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(managementdomainname.yfilter)
	|| ydk::is_set(managementdomainlocalmode.yfilter)
	|| ydk::is_set(managementdomainconfigrevnumber.yfilter)
	|| ydk::is_set(managementdomainlastupdater.yfilter)
	|| ydk::is_set(managementdomainlastchange.yfilter)
	|| ydk::is_set(managementdomainrowstatus.yfilter)
	|| ydk::is_set(managementdomaintftpserver.yfilter)
	|| ydk::is_set(managementdomaintftppathname.yfilter)
	|| ydk::is_set(managementdomainpruningstate.yfilter)
	|| ydk::is_set(managementdomainversioninuse.yfilter)
	|| ydk::is_set(managementdomainpruningstateoper.yfilter)
	|| ydk::is_set(managementdomainadminsrcif.yfilter)
	|| ydk::is_set(managementdomainsourceonlymode.yfilter)
	|| ydk::is_set(managementdomainopersrcif.yfilter)
	|| ydk::is_set(managementdomainconfigfile.yfilter)
	|| ydk::is_set(managementdomainlocalupdatertype.yfilter)
	|| ydk::is_set(managementdomainlocalupdater.yfilter)
	|| ydk::is_set(managementdomaindeviceid.yfilter)
	|| ydk::is_set(vtpvlaneditoperation.yfilter)
	|| ydk::is_set(vtpvlanapplystatus.yfilter)
	|| ydk::is_set(vtpvlaneditbufferowner.yfilter)
	|| ydk::is_set(vtpvlaneditconfigrevnumber.yfilter)
	|| ydk::is_set(vtpvlaneditmodifiedvlan.yfilter)
	|| ydk::is_set(vtpinsummaryadverts.yfilter)
	|| ydk::is_set(vtpinsubsetadverts.yfilter)
	|| ydk::is_set(vtpinadvertrequests.yfilter)
	|| ydk::is_set(vtpoutsummaryadverts.yfilter)
	|| ydk::is_set(vtpoutsubsetadverts.yfilter)
	|| ydk::is_set(vtpoutadvertrequests.yfilter)
	|| ydk::is_set(vtpconfigrevnumbererrors.yfilter)
	|| ydk::is_set(vtpconfigdigesterrors.yfilter);
}

std::string CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/managementDomainTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "managementDomainEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (managementdomainname.is_set || is_set(managementdomainname.yfilter)) leaf_name_data.push_back(managementdomainname.get_name_leafdata());
    if (managementdomainlocalmode.is_set || is_set(managementdomainlocalmode.yfilter)) leaf_name_data.push_back(managementdomainlocalmode.get_name_leafdata());
    if (managementdomainconfigrevnumber.is_set || is_set(managementdomainconfigrevnumber.yfilter)) leaf_name_data.push_back(managementdomainconfigrevnumber.get_name_leafdata());
    if (managementdomainlastupdater.is_set || is_set(managementdomainlastupdater.yfilter)) leaf_name_data.push_back(managementdomainlastupdater.get_name_leafdata());
    if (managementdomainlastchange.is_set || is_set(managementdomainlastchange.yfilter)) leaf_name_data.push_back(managementdomainlastchange.get_name_leafdata());
    if (managementdomainrowstatus.is_set || is_set(managementdomainrowstatus.yfilter)) leaf_name_data.push_back(managementdomainrowstatus.get_name_leafdata());
    if (managementdomaintftpserver.is_set || is_set(managementdomaintftpserver.yfilter)) leaf_name_data.push_back(managementdomaintftpserver.get_name_leafdata());
    if (managementdomaintftppathname.is_set || is_set(managementdomaintftppathname.yfilter)) leaf_name_data.push_back(managementdomaintftppathname.get_name_leafdata());
    if (managementdomainpruningstate.is_set || is_set(managementdomainpruningstate.yfilter)) leaf_name_data.push_back(managementdomainpruningstate.get_name_leafdata());
    if (managementdomainversioninuse.is_set || is_set(managementdomainversioninuse.yfilter)) leaf_name_data.push_back(managementdomainversioninuse.get_name_leafdata());
    if (managementdomainpruningstateoper.is_set || is_set(managementdomainpruningstateoper.yfilter)) leaf_name_data.push_back(managementdomainpruningstateoper.get_name_leafdata());
    if (managementdomainadminsrcif.is_set || is_set(managementdomainadminsrcif.yfilter)) leaf_name_data.push_back(managementdomainadminsrcif.get_name_leafdata());
    if (managementdomainsourceonlymode.is_set || is_set(managementdomainsourceonlymode.yfilter)) leaf_name_data.push_back(managementdomainsourceonlymode.get_name_leafdata());
    if (managementdomainopersrcif.is_set || is_set(managementdomainopersrcif.yfilter)) leaf_name_data.push_back(managementdomainopersrcif.get_name_leafdata());
    if (managementdomainconfigfile.is_set || is_set(managementdomainconfigfile.yfilter)) leaf_name_data.push_back(managementdomainconfigfile.get_name_leafdata());
    if (managementdomainlocalupdatertype.is_set || is_set(managementdomainlocalupdatertype.yfilter)) leaf_name_data.push_back(managementdomainlocalupdatertype.get_name_leafdata());
    if (managementdomainlocalupdater.is_set || is_set(managementdomainlocalupdater.yfilter)) leaf_name_data.push_back(managementdomainlocalupdater.get_name_leafdata());
    if (managementdomaindeviceid.is_set || is_set(managementdomaindeviceid.yfilter)) leaf_name_data.push_back(managementdomaindeviceid.get_name_leafdata());
    if (vtpvlaneditoperation.is_set || is_set(vtpvlaneditoperation.yfilter)) leaf_name_data.push_back(vtpvlaneditoperation.get_name_leafdata());
    if (vtpvlanapplystatus.is_set || is_set(vtpvlanapplystatus.yfilter)) leaf_name_data.push_back(vtpvlanapplystatus.get_name_leafdata());
    if (vtpvlaneditbufferowner.is_set || is_set(vtpvlaneditbufferowner.yfilter)) leaf_name_data.push_back(vtpvlaneditbufferowner.get_name_leafdata());
    if (vtpvlaneditconfigrevnumber.is_set || is_set(vtpvlaneditconfigrevnumber.yfilter)) leaf_name_data.push_back(vtpvlaneditconfigrevnumber.get_name_leafdata());
    if (vtpvlaneditmodifiedvlan.is_set || is_set(vtpvlaneditmodifiedvlan.yfilter)) leaf_name_data.push_back(vtpvlaneditmodifiedvlan.get_name_leafdata());
    if (vtpinsummaryadverts.is_set || is_set(vtpinsummaryadverts.yfilter)) leaf_name_data.push_back(vtpinsummaryadverts.get_name_leafdata());
    if (vtpinsubsetadverts.is_set || is_set(vtpinsubsetadverts.yfilter)) leaf_name_data.push_back(vtpinsubsetadverts.get_name_leafdata());
    if (vtpinadvertrequests.is_set || is_set(vtpinadvertrequests.yfilter)) leaf_name_data.push_back(vtpinadvertrequests.get_name_leafdata());
    if (vtpoutsummaryadverts.is_set || is_set(vtpoutsummaryadverts.yfilter)) leaf_name_data.push_back(vtpoutsummaryadverts.get_name_leafdata());
    if (vtpoutsubsetadverts.is_set || is_set(vtpoutsubsetadverts.yfilter)) leaf_name_data.push_back(vtpoutsubsetadverts.get_name_leafdata());
    if (vtpoutadvertrequests.is_set || is_set(vtpoutadvertrequests.yfilter)) leaf_name_data.push_back(vtpoutadvertrequests.get_name_leafdata());
    if (vtpconfigrevnumbererrors.is_set || is_set(vtpconfigrevnumbererrors.yfilter)) leaf_name_data.push_back(vtpconfigrevnumbererrors.get_name_leafdata());
    if (vtpconfigdigesterrors.is_set || is_set(vtpconfigdigesterrors.yfilter)) leaf_name_data.push_back(vtpconfigdigesterrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainName")
    {
        managementdomainname = value;
        managementdomainname.value_namespace = name_space;
        managementdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLocalMode")
    {
        managementdomainlocalmode = value;
        managementdomainlocalmode.value_namespace = name_space;
        managementdomainlocalmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainConfigRevNumber")
    {
        managementdomainconfigrevnumber = value;
        managementdomainconfigrevnumber.value_namespace = name_space;
        managementdomainconfigrevnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLastUpdater")
    {
        managementdomainlastupdater = value;
        managementdomainlastupdater.value_namespace = name_space;
        managementdomainlastupdater.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLastChange")
    {
        managementdomainlastchange = value;
        managementdomainlastchange.value_namespace = name_space;
        managementdomainlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainRowStatus")
    {
        managementdomainrowstatus = value;
        managementdomainrowstatus.value_namespace = name_space;
        managementdomainrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainTftpServer")
    {
        managementdomaintftpserver = value;
        managementdomaintftpserver.value_namespace = name_space;
        managementdomaintftpserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainTftpPathname")
    {
        managementdomaintftppathname = value;
        managementdomaintftppathname.value_namespace = name_space;
        managementdomaintftppathname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainPruningState")
    {
        managementdomainpruningstate = value;
        managementdomainpruningstate.value_namespace = name_space;
        managementdomainpruningstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainVersionInUse")
    {
        managementdomainversioninuse = value;
        managementdomainversioninuse.value_namespace = name_space;
        managementdomainversioninuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainPruningStateOper")
    {
        managementdomainpruningstateoper = value;
        managementdomainpruningstateoper.value_namespace = name_space;
        managementdomainpruningstateoper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainAdminSrcIf")
    {
        managementdomainadminsrcif = value;
        managementdomainadminsrcif.value_namespace = name_space;
        managementdomainadminsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainSourceOnlyMode")
    {
        managementdomainsourceonlymode = value;
        managementdomainsourceonlymode.value_namespace = name_space;
        managementdomainsourceonlymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainOperSrcIf")
    {
        managementdomainopersrcif = value;
        managementdomainopersrcif.value_namespace = name_space;
        managementdomainopersrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainConfigFile")
    {
        managementdomainconfigfile = value;
        managementdomainconfigfile.value_namespace = name_space;
        managementdomainconfigfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLocalUpdaterType")
    {
        managementdomainlocalupdatertype = value;
        managementdomainlocalupdatertype.value_namespace = name_space;
        managementdomainlocalupdatertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLocalUpdater")
    {
        managementdomainlocalupdater = value;
        managementdomainlocalupdater.value_namespace = name_space;
        managementdomainlocalupdater.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainDeviceID")
    {
        managementdomaindeviceid = value;
        managementdomaindeviceid.value_namespace = name_space;
        managementdomaindeviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditOperation")
    {
        vtpvlaneditoperation = value;
        vtpvlaneditoperation.value_namespace = name_space;
        vtpvlaneditoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanApplyStatus")
    {
        vtpvlanapplystatus = value;
        vtpvlanapplystatus.value_namespace = name_space;
        vtpvlanapplystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditBufferOwner")
    {
        vtpvlaneditbufferowner = value;
        vtpvlaneditbufferowner.value_namespace = name_space;
        vtpvlaneditbufferowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditConfigRevNumber")
    {
        vtpvlaneditconfigrevnumber = value;
        vtpvlaneditconfigrevnumber.value_namespace = name_space;
        vtpvlaneditconfigrevnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditModifiedVlan")
    {
        vtpvlaneditmodifiedvlan = value;
        vtpvlaneditmodifiedvlan.value_namespace = name_space;
        vtpvlaneditmodifiedvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpInSummaryAdverts")
    {
        vtpinsummaryadverts = value;
        vtpinsummaryadverts.value_namespace = name_space;
        vtpinsummaryadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpInSubsetAdverts")
    {
        vtpinsubsetadverts = value;
        vtpinsubsetadverts.value_namespace = name_space;
        vtpinsubsetadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpInAdvertRequests")
    {
        vtpinadvertrequests = value;
        vtpinadvertrequests.value_namespace = name_space;
        vtpinadvertrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpOutSummaryAdverts")
    {
        vtpoutsummaryadverts = value;
        vtpoutsummaryadverts.value_namespace = name_space;
        vtpoutsummaryadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpOutSubsetAdverts")
    {
        vtpoutsubsetadverts = value;
        vtpoutsubsetadverts.value_namespace = name_space;
        vtpoutsubsetadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpOutAdvertRequests")
    {
        vtpoutadvertrequests = value;
        vtpoutadvertrequests.value_namespace = name_space;
        vtpoutadvertrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpConfigRevNumberErrors")
    {
        vtpconfigrevnumbererrors = value;
        vtpconfigrevnumbererrors.value_namespace = name_space;
        vtpconfigrevnumbererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpConfigDigestErrors")
    {
        vtpconfigdigesterrors = value;
        vtpconfigdigesterrors.value_namespace = name_space;
        vtpconfigdigesterrors.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "managementDomainName")
    {
        managementdomainname.yfilter = yfilter;
    }
    if(value_path == "managementDomainLocalMode")
    {
        managementdomainlocalmode.yfilter = yfilter;
    }
    if(value_path == "managementDomainConfigRevNumber")
    {
        managementdomainconfigrevnumber.yfilter = yfilter;
    }
    if(value_path == "managementDomainLastUpdater")
    {
        managementdomainlastupdater.yfilter = yfilter;
    }
    if(value_path == "managementDomainLastChange")
    {
        managementdomainlastchange.yfilter = yfilter;
    }
    if(value_path == "managementDomainRowStatus")
    {
        managementdomainrowstatus.yfilter = yfilter;
    }
    if(value_path == "managementDomainTftpServer")
    {
        managementdomaintftpserver.yfilter = yfilter;
    }
    if(value_path == "managementDomainTftpPathname")
    {
        managementdomaintftppathname.yfilter = yfilter;
    }
    if(value_path == "managementDomainPruningState")
    {
        managementdomainpruningstate.yfilter = yfilter;
    }
    if(value_path == "managementDomainVersionInUse")
    {
        managementdomainversioninuse.yfilter = yfilter;
    }
    if(value_path == "managementDomainPruningStateOper")
    {
        managementdomainpruningstateoper.yfilter = yfilter;
    }
    if(value_path == "managementDomainAdminSrcIf")
    {
        managementdomainadminsrcif.yfilter = yfilter;
    }
    if(value_path == "managementDomainSourceOnlyMode")
    {
        managementdomainsourceonlymode.yfilter = yfilter;
    }
    if(value_path == "managementDomainOperSrcIf")
    {
        managementdomainopersrcif.yfilter = yfilter;
    }
    if(value_path == "managementDomainConfigFile")
    {
        managementdomainconfigfile.yfilter = yfilter;
    }
    if(value_path == "managementDomainLocalUpdaterType")
    {
        managementdomainlocalupdatertype.yfilter = yfilter;
    }
    if(value_path == "managementDomainLocalUpdater")
    {
        managementdomainlocalupdater.yfilter = yfilter;
    }
    if(value_path == "managementDomainDeviceID")
    {
        managementdomaindeviceid.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditOperation")
    {
        vtpvlaneditoperation.yfilter = yfilter;
    }
    if(value_path == "vtpVlanApplyStatus")
    {
        vtpvlanapplystatus.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditBufferOwner")
    {
        vtpvlaneditbufferowner.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditConfigRevNumber")
    {
        vtpvlaneditconfigrevnumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditModifiedVlan")
    {
        vtpvlaneditmodifiedvlan.yfilter = yfilter;
    }
    if(value_path == "vtpInSummaryAdverts")
    {
        vtpinsummaryadverts.yfilter = yfilter;
    }
    if(value_path == "vtpInSubsetAdverts")
    {
        vtpinsubsetadverts.yfilter = yfilter;
    }
    if(value_path == "vtpInAdvertRequests")
    {
        vtpinadvertrequests.yfilter = yfilter;
    }
    if(value_path == "vtpOutSummaryAdverts")
    {
        vtpoutsummaryadverts.yfilter = yfilter;
    }
    if(value_path == "vtpOutSubsetAdverts")
    {
        vtpoutsubsetadverts.yfilter = yfilter;
    }
    if(value_path == "vtpOutAdvertRequests")
    {
        vtpoutadvertrequests.yfilter = yfilter;
    }
    if(value_path == "vtpConfigRevNumberErrors")
    {
        vtpconfigrevnumbererrors.yfilter = yfilter;
    }
    if(value_path == "vtpConfigDigestErrors")
    {
        vtpconfigdigesterrors.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "managementDomainName" || name == "managementDomainLocalMode" || name == "managementDomainConfigRevNumber" || name == "managementDomainLastUpdater" || name == "managementDomainLastChange" || name == "managementDomainRowStatus" || name == "managementDomainTftpServer" || name == "managementDomainTftpPathname" || name == "managementDomainPruningState" || name == "managementDomainVersionInUse" || name == "managementDomainPruningStateOper" || name == "managementDomainAdminSrcIf" || name == "managementDomainSourceOnlyMode" || name == "managementDomainOperSrcIf" || name == "managementDomainConfigFile" || name == "managementDomainLocalUpdaterType" || name == "managementDomainLocalUpdater" || name == "managementDomainDeviceID" || name == "vtpVlanEditOperation" || name == "vtpVlanApplyStatus" || name == "vtpVlanEditBufferOwner" || name == "vtpVlanEditConfigRevNumber" || name == "vtpVlanEditModifiedVlan" || name == "vtpInSummaryAdverts" || name == "vtpInSubsetAdverts" || name == "vtpInAdvertRequests" || name == "vtpOutSummaryAdverts" || name == "vtpOutSubsetAdverts" || name == "vtpOutAdvertRequests" || name == "vtpConfigRevNumberErrors" || name == "vtpConfigDigestErrors")
        return true;
    return false;
}

CISCOVTPMIB::VtpVlanTable::VtpVlanTable()
    :
    vtpvlanentry(this, {"managementdomainindex", "vtpvlanindex"})
{

    yang_name = "vtpVlanTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpVlanTable::~VtpVlanTable()
{
}

bool CISCOVTPMIB::VtpVlanTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpvlanentry.len(); index++)
    {
        if(vtpvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpVlanTable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlanentry.len(); index++)
    {
        if(vtpvlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpVlanTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpVlanTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpVlanTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpVlanTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpVlanEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpVlanTable::VtpVlanEntry>();
        ent_->parent = this;
        vtpvlanentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpVlanTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpvlanentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpVlanTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpVlanTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpVlanTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpVlanEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::int32, "vtpVlanIndex"},
    vtpvlanstate{YType::enumeration, "vtpVlanState"},
    vtpvlantype{YType::enumeration, "vtpVlanType"},
    vtpvlanname{YType::str, "vtpVlanName"},
    vtpvlanmtu{YType::int32, "vtpVlanMtu"},
    vtpvlandot10said{YType::str, "vtpVlanDot10Said"},
    vtpvlanringnumber{YType::int32, "vtpVlanRingNumber"},
    vtpvlanbridgenumber{YType::int32, "vtpVlanBridgeNumber"},
    vtpvlanstptype{YType::enumeration, "vtpVlanStpType"},
    vtpvlanparentvlan{YType::int32, "vtpVlanParentVlan"},
    vtpvlantranslationalvlan1{YType::int32, "vtpVlanTranslationalVlan1"},
    vtpvlantranslationalvlan2{YType::int32, "vtpVlanTranslationalVlan2"},
    vtpvlanbridgetype{YType::enumeration, "vtpVlanBridgeType"},
    vtpvlanarehopcount{YType::int32, "vtpVlanAreHopCount"},
    vtpvlanstehopcount{YType::int32, "vtpVlanSteHopCount"},
    vtpvlaniscrfbackup{YType::boolean, "vtpVlanIsCRFBackup"},
    vtpvlantypeext{YType::bits, "vtpVlanTypeExt"},
    vtpvlanifindex{YType::int32, "vtpVlanIfIndex"},
    stpxvlanmistpinstmapinstindex{YType::int32, "CISCO-STP-EXTENSIONS-MIB:stpxVlanMISTPInstMapInstIndex"}
{

    yang_name = "vtpVlanEntry"; yang_parent_name = "vtpVlanTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::~VtpVlanEntry()
{
}

bool CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| vtpvlanstate.is_set
	|| vtpvlantype.is_set
	|| vtpvlanname.is_set
	|| vtpvlanmtu.is_set
	|| vtpvlandot10said.is_set
	|| vtpvlanringnumber.is_set
	|| vtpvlanbridgenumber.is_set
	|| vtpvlanstptype.is_set
	|| vtpvlanparentvlan.is_set
	|| vtpvlantranslationalvlan1.is_set
	|| vtpvlantranslationalvlan2.is_set
	|| vtpvlanbridgetype.is_set
	|| vtpvlanarehopcount.is_set
	|| vtpvlanstehopcount.is_set
	|| vtpvlaniscrfbackup.is_set
	|| vtpvlantypeext.is_set
	|| vtpvlanifindex.is_set
	|| stpxvlanmistpinstmapinstindex.is_set;
}

bool CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlanindex.yfilter)
	|| ydk::is_set(vtpvlanstate.yfilter)
	|| ydk::is_set(vtpvlantype.yfilter)
	|| ydk::is_set(vtpvlanname.yfilter)
	|| ydk::is_set(vtpvlanmtu.yfilter)
	|| ydk::is_set(vtpvlandot10said.yfilter)
	|| ydk::is_set(vtpvlanringnumber.yfilter)
	|| ydk::is_set(vtpvlanbridgenumber.yfilter)
	|| ydk::is_set(vtpvlanstptype.yfilter)
	|| ydk::is_set(vtpvlanparentvlan.yfilter)
	|| ydk::is_set(vtpvlantranslationalvlan1.yfilter)
	|| ydk::is_set(vtpvlantranslationalvlan2.yfilter)
	|| ydk::is_set(vtpvlanbridgetype.yfilter)
	|| ydk::is_set(vtpvlanarehopcount.yfilter)
	|| ydk::is_set(vtpvlanstehopcount.yfilter)
	|| ydk::is_set(vtpvlaniscrfbackup.yfilter)
	|| ydk::is_set(vtpvlantypeext.yfilter)
	|| ydk::is_set(vtpvlanifindex.yfilter)
	|| ydk::is_set(stpxvlanmistpinstmapinstindex.yfilter);
}

std::string CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    ADD_KEY_TOKEN(vtpvlanindex, "vtpVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.yfilter)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (vtpvlanstate.is_set || is_set(vtpvlanstate.yfilter)) leaf_name_data.push_back(vtpvlanstate.get_name_leafdata());
    if (vtpvlantype.is_set || is_set(vtpvlantype.yfilter)) leaf_name_data.push_back(vtpvlantype.get_name_leafdata());
    if (vtpvlanname.is_set || is_set(vtpvlanname.yfilter)) leaf_name_data.push_back(vtpvlanname.get_name_leafdata());
    if (vtpvlanmtu.is_set || is_set(vtpvlanmtu.yfilter)) leaf_name_data.push_back(vtpvlanmtu.get_name_leafdata());
    if (vtpvlandot10said.is_set || is_set(vtpvlandot10said.yfilter)) leaf_name_data.push_back(vtpvlandot10said.get_name_leafdata());
    if (vtpvlanringnumber.is_set || is_set(vtpvlanringnumber.yfilter)) leaf_name_data.push_back(vtpvlanringnumber.get_name_leafdata());
    if (vtpvlanbridgenumber.is_set || is_set(vtpvlanbridgenumber.yfilter)) leaf_name_data.push_back(vtpvlanbridgenumber.get_name_leafdata());
    if (vtpvlanstptype.is_set || is_set(vtpvlanstptype.yfilter)) leaf_name_data.push_back(vtpvlanstptype.get_name_leafdata());
    if (vtpvlanparentvlan.is_set || is_set(vtpvlanparentvlan.yfilter)) leaf_name_data.push_back(vtpvlanparentvlan.get_name_leafdata());
    if (vtpvlantranslationalvlan1.is_set || is_set(vtpvlantranslationalvlan1.yfilter)) leaf_name_data.push_back(vtpvlantranslationalvlan1.get_name_leafdata());
    if (vtpvlantranslationalvlan2.is_set || is_set(vtpvlantranslationalvlan2.yfilter)) leaf_name_data.push_back(vtpvlantranslationalvlan2.get_name_leafdata());
    if (vtpvlanbridgetype.is_set || is_set(vtpvlanbridgetype.yfilter)) leaf_name_data.push_back(vtpvlanbridgetype.get_name_leafdata());
    if (vtpvlanarehopcount.is_set || is_set(vtpvlanarehopcount.yfilter)) leaf_name_data.push_back(vtpvlanarehopcount.get_name_leafdata());
    if (vtpvlanstehopcount.is_set || is_set(vtpvlanstehopcount.yfilter)) leaf_name_data.push_back(vtpvlanstehopcount.get_name_leafdata());
    if (vtpvlaniscrfbackup.is_set || is_set(vtpvlaniscrfbackup.yfilter)) leaf_name_data.push_back(vtpvlaniscrfbackup.get_name_leafdata());
    if (vtpvlantypeext.is_set || is_set(vtpvlantypeext.yfilter)) leaf_name_data.push_back(vtpvlantypeext.get_name_leafdata());
    if (vtpvlanifindex.is_set || is_set(vtpvlanifindex.yfilter)) leaf_name_data.push_back(vtpvlanifindex.get_name_leafdata());
    if (stpxvlanmistpinstmapinstindex.is_set || is_set(stpxvlanmistpinstmapinstindex.yfilter)) leaf_name_data.push_back(stpxvlanmistpinstmapinstindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex = value;
        vtpvlanindex.value_namespace = name_space;
        vtpvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanState")
    {
        vtpvlanstate = value;
        vtpvlanstate.value_namespace = name_space;
        vtpvlanstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanType")
    {
        vtpvlantype = value;
        vtpvlantype.value_namespace = name_space;
        vtpvlantype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanName")
    {
        vtpvlanname = value;
        vtpvlanname.value_namespace = name_space;
        vtpvlanname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanMtu")
    {
        vtpvlanmtu = value;
        vtpvlanmtu.value_namespace = name_space;
        vtpvlanmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanDot10Said")
    {
        vtpvlandot10said = value;
        vtpvlandot10said.value_namespace = name_space;
        vtpvlandot10said.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanRingNumber")
    {
        vtpvlanringnumber = value;
        vtpvlanringnumber.value_namespace = name_space;
        vtpvlanringnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanBridgeNumber")
    {
        vtpvlanbridgenumber = value;
        vtpvlanbridgenumber.value_namespace = name_space;
        vtpvlanbridgenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanStpType")
    {
        vtpvlanstptype = value;
        vtpvlanstptype.value_namespace = name_space;
        vtpvlanstptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanParentVlan")
    {
        vtpvlanparentvlan = value;
        vtpvlanparentvlan.value_namespace = name_space;
        vtpvlanparentvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanTranslationalVlan1")
    {
        vtpvlantranslationalvlan1 = value;
        vtpvlantranslationalvlan1.value_namespace = name_space;
        vtpvlantranslationalvlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanTranslationalVlan2")
    {
        vtpvlantranslationalvlan2 = value;
        vtpvlantranslationalvlan2.value_namespace = name_space;
        vtpvlantranslationalvlan2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanBridgeType")
    {
        vtpvlanbridgetype = value;
        vtpvlanbridgetype.value_namespace = name_space;
        vtpvlanbridgetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanAreHopCount")
    {
        vtpvlanarehopcount = value;
        vtpvlanarehopcount.value_namespace = name_space;
        vtpvlanarehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanSteHopCount")
    {
        vtpvlanstehopcount = value;
        vtpvlanstehopcount.value_namespace = name_space;
        vtpvlanstehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanIsCRFBackup")
    {
        vtpvlaniscrfbackup = value;
        vtpvlaniscrfbackup.value_namespace = name_space;
        vtpvlaniscrfbackup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanTypeExt")
    {
        vtpvlantypeext[value] = true;
    }
    if(value_path == "vtpVlanIfIndex")
    {
        vtpvlanifindex = value;
        vtpvlanifindex.value_namespace = name_space;
        vtpvlanifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxVlanMISTPInstMapInstIndex")
    {
        stpxvlanmistpinstmapinstindex = value;
        stpxvlanmistpinstmapinstindex.value_namespace = name_space;
        stpxvlanmistpinstmapinstindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanState")
    {
        vtpvlanstate.yfilter = yfilter;
    }
    if(value_path == "vtpVlanType")
    {
        vtpvlantype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanName")
    {
        vtpvlanname.yfilter = yfilter;
    }
    if(value_path == "vtpVlanMtu")
    {
        vtpvlanmtu.yfilter = yfilter;
    }
    if(value_path == "vtpVlanDot10Said")
    {
        vtpvlandot10said.yfilter = yfilter;
    }
    if(value_path == "vtpVlanRingNumber")
    {
        vtpvlanringnumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanBridgeNumber")
    {
        vtpvlanbridgenumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanStpType")
    {
        vtpvlanstptype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanParentVlan")
    {
        vtpvlanparentvlan.yfilter = yfilter;
    }
    if(value_path == "vtpVlanTranslationalVlan1")
    {
        vtpvlantranslationalvlan1.yfilter = yfilter;
    }
    if(value_path == "vtpVlanTranslationalVlan2")
    {
        vtpvlantranslationalvlan2.yfilter = yfilter;
    }
    if(value_path == "vtpVlanBridgeType")
    {
        vtpvlanbridgetype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanAreHopCount")
    {
        vtpvlanarehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanSteHopCount")
    {
        vtpvlanstehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIsCRFBackup")
    {
        vtpvlaniscrfbackup.yfilter = yfilter;
    }
    if(value_path == "vtpVlanTypeExt")
    {
        vtpvlantypeext.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIfIndex")
    {
        vtpvlanifindex.yfilter = yfilter;
    }
    if(value_path == "stpxVlanMISTPInstMapInstIndex")
    {
        stpxvlanmistpinstmapinstindex.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanIndex" || name == "vtpVlanState" || name == "vtpVlanType" || name == "vtpVlanName" || name == "vtpVlanMtu" || name == "vtpVlanDot10Said" || name == "vtpVlanRingNumber" || name == "vtpVlanBridgeNumber" || name == "vtpVlanStpType" || name == "vtpVlanParentVlan" || name == "vtpVlanTranslationalVlan1" || name == "vtpVlanTranslationalVlan2" || name == "vtpVlanBridgeType" || name == "vtpVlanAreHopCount" || name == "vtpVlanSteHopCount" || name == "vtpVlanIsCRFBackup" || name == "vtpVlanTypeExt" || name == "vtpVlanIfIndex" || name == "stpxVlanMISTPInstMapInstIndex")
        return true;
    return false;
}

CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanTable()
    :
    vtpinternalvlanentry(this, {"managementdomainindex", "vtpvlanindex"})
{

    yang_name = "vtpInternalVlanTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpInternalVlanTable::~VtpInternalVlanTable()
{
}

bool CISCOVTPMIB::VtpInternalVlanTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpinternalvlanentry.len(); index++)
    {
        if(vtpinternalvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpInternalVlanTable::has_operation() const
{
    for (std::size_t index=0; index<vtpinternalvlanentry.len(); index++)
    {
        if(vtpinternalvlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpInternalVlanTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpInternalVlanTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpInternalVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpInternalVlanTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpInternalVlanTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpInternalVlanEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry>();
        ent_->parent = this;
        vtpinternalvlanentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpInternalVlanTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpinternalvlanentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpInternalVlanTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpInternalVlanTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpInternalVlanTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpInternalVlanEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::VtpInternalVlanEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::str, "vtpVlanIndex"},
    vtpinternalvlanowner{YType::str, "vtpInternalVlanOwner"}
{

    yang_name = "vtpInternalVlanEntry"; yang_parent_name = "vtpInternalVlanTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::~VtpInternalVlanEntry()
{
}

bool CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| vtpinternalvlanowner.is_set;
}

bool CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlanindex.yfilter)
	|| ydk::is_set(vtpinternalvlanowner.yfilter);
}

std::string CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpInternalVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpInternalVlanEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    ADD_KEY_TOKEN(vtpvlanindex, "vtpVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.yfilter)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (vtpinternalvlanowner.is_set || is_set(vtpinternalvlanowner.yfilter)) leaf_name_data.push_back(vtpinternalvlanowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex = value;
        vtpvlanindex.value_namespace = name_space;
        vtpvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpInternalVlanOwner")
    {
        vtpinternalvlanowner = value;
        vtpinternalvlanowner.value_namespace = name_space;
        vtpinternalvlanowner.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex.yfilter = yfilter;
    }
    if(value_path == "vtpInternalVlanOwner")
    {
        vtpinternalvlanowner.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanIndex" || name == "vtpInternalVlanOwner")
        return true;
    return false;
}

CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditTable()
    :
    vtpvlaneditentry(this, {"managementdomainindex", "vtpvlaneditindex"})
{

    yang_name = "vtpVlanEditTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpVlanEditTable::~VtpVlanEditTable()
{
}

bool CISCOVTPMIB::VtpVlanEditTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpvlaneditentry.len(); index++)
    {
        if(vtpvlaneditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpVlanEditTable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlaneditentry.len(); index++)
    {
        if(vtpvlaneditentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpVlanEditTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpVlanEditTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEditTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpVlanEditTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpVlanEditTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpVlanEditEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry>();
        ent_->parent = this;
        vtpvlaneditentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpVlanEditTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpvlaneditentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpVlanEditTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpVlanEditTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpVlanEditTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpVlanEditEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlaneditindex{YType::int32, "vtpVlanEditIndex"},
    vtpvlaneditstate{YType::enumeration, "vtpVlanEditState"},
    vtpvlanedittype{YType::enumeration, "vtpVlanEditType"},
    vtpvlaneditname{YType::str, "vtpVlanEditName"},
    vtpvlaneditmtu{YType::int32, "vtpVlanEditMtu"},
    vtpvlaneditdot10said{YType::str, "vtpVlanEditDot10Said"},
    vtpvlaneditringnumber{YType::int32, "vtpVlanEditRingNumber"},
    vtpvlaneditbridgenumber{YType::int32, "vtpVlanEditBridgeNumber"},
    vtpvlaneditstptype{YType::enumeration, "vtpVlanEditStpType"},
    vtpvlaneditparentvlan{YType::int32, "vtpVlanEditParentVlan"},
    vtpvlaneditrowstatus{YType::enumeration, "vtpVlanEditRowStatus"},
    vtpvlanedittranslationalvlan1{YType::int32, "vtpVlanEditTranslationalVlan1"},
    vtpvlanedittranslationalvlan2{YType::int32, "vtpVlanEditTranslationalVlan2"},
    vtpvlaneditbridgetype{YType::enumeration, "vtpVlanEditBridgeType"},
    vtpvlaneditarehopcount{YType::int32, "vtpVlanEditAreHopCount"},
    vtpvlaneditstehopcount{YType::int32, "vtpVlanEditSteHopCount"},
    vtpvlaneditiscrfbackup{YType::boolean, "vtpVlanEditIsCRFBackup"},
    vtpvlanedittypeext{YType::bits, "vtpVlanEditTypeExt"},
    vtpvlanedittypeext2{YType::bits, "vtpVlanEditTypeExt2"},
    stpxvlanmistpinstmapeditinstindex{YType::int32, "CISCO-STP-EXTENSIONS-MIB:stpxVlanMISTPInstMapEditInstIndex"}
{

    yang_name = "vtpVlanEditEntry"; yang_parent_name = "vtpVlanEditTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::~VtpVlanEditEntry()
{
}

bool CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpvlaneditindex.is_set
	|| vtpvlaneditstate.is_set
	|| vtpvlanedittype.is_set
	|| vtpvlaneditname.is_set
	|| vtpvlaneditmtu.is_set
	|| vtpvlaneditdot10said.is_set
	|| vtpvlaneditringnumber.is_set
	|| vtpvlaneditbridgenumber.is_set
	|| vtpvlaneditstptype.is_set
	|| vtpvlaneditparentvlan.is_set
	|| vtpvlaneditrowstatus.is_set
	|| vtpvlanedittranslationalvlan1.is_set
	|| vtpvlanedittranslationalvlan2.is_set
	|| vtpvlaneditbridgetype.is_set
	|| vtpvlaneditarehopcount.is_set
	|| vtpvlaneditstehopcount.is_set
	|| vtpvlaneditiscrfbackup.is_set
	|| vtpvlanedittypeext.is_set
	|| vtpvlanedittypeext2.is_set
	|| stpxvlanmistpinstmapeditinstindex.is_set;
}

bool CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlaneditindex.yfilter)
	|| ydk::is_set(vtpvlaneditstate.yfilter)
	|| ydk::is_set(vtpvlanedittype.yfilter)
	|| ydk::is_set(vtpvlaneditname.yfilter)
	|| ydk::is_set(vtpvlaneditmtu.yfilter)
	|| ydk::is_set(vtpvlaneditdot10said.yfilter)
	|| ydk::is_set(vtpvlaneditringnumber.yfilter)
	|| ydk::is_set(vtpvlaneditbridgenumber.yfilter)
	|| ydk::is_set(vtpvlaneditstptype.yfilter)
	|| ydk::is_set(vtpvlaneditparentvlan.yfilter)
	|| ydk::is_set(vtpvlaneditrowstatus.yfilter)
	|| ydk::is_set(vtpvlanedittranslationalvlan1.yfilter)
	|| ydk::is_set(vtpvlanedittranslationalvlan2.yfilter)
	|| ydk::is_set(vtpvlaneditbridgetype.yfilter)
	|| ydk::is_set(vtpvlaneditarehopcount.yfilter)
	|| ydk::is_set(vtpvlaneditstehopcount.yfilter)
	|| ydk::is_set(vtpvlaneditiscrfbackup.yfilter)
	|| ydk::is_set(vtpvlanedittypeext.yfilter)
	|| ydk::is_set(vtpvlanedittypeext2.yfilter)
	|| ydk::is_set(stpxvlanmistpinstmapeditinstindex.yfilter);
}

std::string CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanEditTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEditEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    ADD_KEY_TOKEN(vtpvlaneditindex, "vtpVlanEditIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlaneditindex.is_set || is_set(vtpvlaneditindex.yfilter)) leaf_name_data.push_back(vtpvlaneditindex.get_name_leafdata());
    if (vtpvlaneditstate.is_set || is_set(vtpvlaneditstate.yfilter)) leaf_name_data.push_back(vtpvlaneditstate.get_name_leafdata());
    if (vtpvlanedittype.is_set || is_set(vtpvlanedittype.yfilter)) leaf_name_data.push_back(vtpvlanedittype.get_name_leafdata());
    if (vtpvlaneditname.is_set || is_set(vtpvlaneditname.yfilter)) leaf_name_data.push_back(vtpvlaneditname.get_name_leafdata());
    if (vtpvlaneditmtu.is_set || is_set(vtpvlaneditmtu.yfilter)) leaf_name_data.push_back(vtpvlaneditmtu.get_name_leafdata());
    if (vtpvlaneditdot10said.is_set || is_set(vtpvlaneditdot10said.yfilter)) leaf_name_data.push_back(vtpvlaneditdot10said.get_name_leafdata());
    if (vtpvlaneditringnumber.is_set || is_set(vtpvlaneditringnumber.yfilter)) leaf_name_data.push_back(vtpvlaneditringnumber.get_name_leafdata());
    if (vtpvlaneditbridgenumber.is_set || is_set(vtpvlaneditbridgenumber.yfilter)) leaf_name_data.push_back(vtpvlaneditbridgenumber.get_name_leafdata());
    if (vtpvlaneditstptype.is_set || is_set(vtpvlaneditstptype.yfilter)) leaf_name_data.push_back(vtpvlaneditstptype.get_name_leafdata());
    if (vtpvlaneditparentvlan.is_set || is_set(vtpvlaneditparentvlan.yfilter)) leaf_name_data.push_back(vtpvlaneditparentvlan.get_name_leafdata());
    if (vtpvlaneditrowstatus.is_set || is_set(vtpvlaneditrowstatus.yfilter)) leaf_name_data.push_back(vtpvlaneditrowstatus.get_name_leafdata());
    if (vtpvlanedittranslationalvlan1.is_set || is_set(vtpvlanedittranslationalvlan1.yfilter)) leaf_name_data.push_back(vtpvlanedittranslationalvlan1.get_name_leafdata());
    if (vtpvlanedittranslationalvlan2.is_set || is_set(vtpvlanedittranslationalvlan2.yfilter)) leaf_name_data.push_back(vtpvlanedittranslationalvlan2.get_name_leafdata());
    if (vtpvlaneditbridgetype.is_set || is_set(vtpvlaneditbridgetype.yfilter)) leaf_name_data.push_back(vtpvlaneditbridgetype.get_name_leafdata());
    if (vtpvlaneditarehopcount.is_set || is_set(vtpvlaneditarehopcount.yfilter)) leaf_name_data.push_back(vtpvlaneditarehopcount.get_name_leafdata());
    if (vtpvlaneditstehopcount.is_set || is_set(vtpvlaneditstehopcount.yfilter)) leaf_name_data.push_back(vtpvlaneditstehopcount.get_name_leafdata());
    if (vtpvlaneditiscrfbackup.is_set || is_set(vtpvlaneditiscrfbackup.yfilter)) leaf_name_data.push_back(vtpvlaneditiscrfbackup.get_name_leafdata());
    if (vtpvlanedittypeext.is_set || is_set(vtpvlanedittypeext.yfilter)) leaf_name_data.push_back(vtpvlanedittypeext.get_name_leafdata());
    if (vtpvlanedittypeext2.is_set || is_set(vtpvlanedittypeext2.yfilter)) leaf_name_data.push_back(vtpvlanedittypeext2.get_name_leafdata());
    if (stpxvlanmistpinstmapeditinstindex.is_set || is_set(stpxvlanmistpinstmapeditinstindex.yfilter)) leaf_name_data.push_back(stpxvlanmistpinstmapeditinstindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditIndex")
    {
        vtpvlaneditindex = value;
        vtpvlaneditindex.value_namespace = name_space;
        vtpvlaneditindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditState")
    {
        vtpvlaneditstate = value;
        vtpvlaneditstate.value_namespace = name_space;
        vtpvlaneditstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditType")
    {
        vtpvlanedittype = value;
        vtpvlanedittype.value_namespace = name_space;
        vtpvlanedittype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditName")
    {
        vtpvlaneditname = value;
        vtpvlaneditname.value_namespace = name_space;
        vtpvlaneditname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditMtu")
    {
        vtpvlaneditmtu = value;
        vtpvlaneditmtu.value_namespace = name_space;
        vtpvlaneditmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditDot10Said")
    {
        vtpvlaneditdot10said = value;
        vtpvlaneditdot10said.value_namespace = name_space;
        vtpvlaneditdot10said.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditRingNumber")
    {
        vtpvlaneditringnumber = value;
        vtpvlaneditringnumber.value_namespace = name_space;
        vtpvlaneditringnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditBridgeNumber")
    {
        vtpvlaneditbridgenumber = value;
        vtpvlaneditbridgenumber.value_namespace = name_space;
        vtpvlaneditbridgenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditStpType")
    {
        vtpvlaneditstptype = value;
        vtpvlaneditstptype.value_namespace = name_space;
        vtpvlaneditstptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditParentVlan")
    {
        vtpvlaneditparentvlan = value;
        vtpvlaneditparentvlan.value_namespace = name_space;
        vtpvlaneditparentvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditRowStatus")
    {
        vtpvlaneditrowstatus = value;
        vtpvlaneditrowstatus.value_namespace = name_space;
        vtpvlaneditrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditTranslationalVlan1")
    {
        vtpvlanedittranslationalvlan1 = value;
        vtpvlanedittranslationalvlan1.value_namespace = name_space;
        vtpvlanedittranslationalvlan1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditTranslationalVlan2")
    {
        vtpvlanedittranslationalvlan2 = value;
        vtpvlanedittranslationalvlan2.value_namespace = name_space;
        vtpvlanedittranslationalvlan2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditBridgeType")
    {
        vtpvlaneditbridgetype = value;
        vtpvlaneditbridgetype.value_namespace = name_space;
        vtpvlaneditbridgetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditAreHopCount")
    {
        vtpvlaneditarehopcount = value;
        vtpvlaneditarehopcount.value_namespace = name_space;
        vtpvlaneditarehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditSteHopCount")
    {
        vtpvlaneditstehopcount = value;
        vtpvlaneditstehopcount.value_namespace = name_space;
        vtpvlaneditstehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditIsCRFBackup")
    {
        vtpvlaneditiscrfbackup = value;
        vtpvlaneditiscrfbackup.value_namespace = name_space;
        vtpvlaneditiscrfbackup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditTypeExt")
    {
        vtpvlanedittypeext[value] = true;
    }
    if(value_path == "vtpVlanEditTypeExt2")
    {
        vtpvlanedittypeext2[value] = true;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxVlanMISTPInstMapEditInstIndex")
    {
        stpxvlanmistpinstmapeditinstindex = value;
        stpxvlanmistpinstmapeditinstindex.value_namespace = name_space;
        stpxvlanmistpinstmapeditinstindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditIndex")
    {
        vtpvlaneditindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditState")
    {
        vtpvlaneditstate.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditType")
    {
        vtpvlanedittype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditName")
    {
        vtpvlaneditname.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditMtu")
    {
        vtpvlaneditmtu.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditDot10Said")
    {
        vtpvlaneditdot10said.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditRingNumber")
    {
        vtpvlaneditringnumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditBridgeNumber")
    {
        vtpvlaneditbridgenumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditStpType")
    {
        vtpvlaneditstptype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditParentVlan")
    {
        vtpvlaneditparentvlan.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditRowStatus")
    {
        vtpvlaneditrowstatus.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTranslationalVlan1")
    {
        vtpvlanedittranslationalvlan1.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTranslationalVlan2")
    {
        vtpvlanedittranslationalvlan2.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditBridgeType")
    {
        vtpvlaneditbridgetype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditAreHopCount")
    {
        vtpvlaneditarehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditSteHopCount")
    {
        vtpvlaneditstehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditIsCRFBackup")
    {
        vtpvlaneditiscrfbackup.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTypeExt")
    {
        vtpvlanedittypeext.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTypeExt2")
    {
        vtpvlanedittypeext2.yfilter = yfilter;
    }
    if(value_path == "stpxVlanMISTPInstMapEditInstIndex")
    {
        stpxvlanmistpinstmapeditinstindex.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanEditIndex" || name == "vtpVlanEditState" || name == "vtpVlanEditType" || name == "vtpVlanEditName" || name == "vtpVlanEditMtu" || name == "vtpVlanEditDot10Said" || name == "vtpVlanEditRingNumber" || name == "vtpVlanEditBridgeNumber" || name == "vtpVlanEditStpType" || name == "vtpVlanEditParentVlan" || name == "vtpVlanEditRowStatus" || name == "vtpVlanEditTranslationalVlan1" || name == "vtpVlanEditTranslationalVlan2" || name == "vtpVlanEditBridgeType" || name == "vtpVlanEditAreHopCount" || name == "vtpVlanEditSteHopCount" || name == "vtpVlanEditIsCRFBackup" || name == "vtpVlanEditTypeExt" || name == "vtpVlanEditTypeExt2" || name == "stpxVlanMISTPInstMapEditInstIndex")
        return true;
    return false;
}

CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownTable()
    :
    vtpvlanlocalshutdownentry(this, {"managementdomainindex", "vtpvlanindex"})
{

    yang_name = "vtpVlanLocalShutdownTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpVlanLocalShutdownTable::~VtpVlanLocalShutdownTable()
{
}

bool CISCOVTPMIB::VtpVlanLocalShutdownTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpvlanlocalshutdownentry.len(); index++)
    {
        if(vtpvlanlocalshutdownentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpVlanLocalShutdownTable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlanlocalshutdownentry.len(); index++)
    {
        if(vtpvlanlocalshutdownentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpVlanLocalShutdownTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpVlanLocalShutdownTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanLocalShutdownTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpVlanLocalShutdownTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpVlanLocalShutdownTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpVlanLocalShutdownEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry>();
        ent_->parent = this;
        vtpvlanlocalshutdownentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpVlanLocalShutdownTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpvlanlocalshutdownentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpVlanLocalShutdownTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpVlanLocalShutdownTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpVlanLocalShutdownTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpVlanLocalShutdownEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::VtpVlanLocalShutdownEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::str, "vtpVlanIndex"},
    vtpvlanlocalshutdown{YType::enumeration, "vtpVlanLocalShutdown"}
{

    yang_name = "vtpVlanLocalShutdownEntry"; yang_parent_name = "vtpVlanLocalShutdownTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::~VtpVlanLocalShutdownEntry()
{
}

bool CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| vtpvlanlocalshutdown.is_set;
}

bool CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlanindex.yfilter)
	|| ydk::is_set(vtpvlanlocalshutdown.yfilter);
}

std::string CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanLocalShutdownTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanLocalShutdownEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    ADD_KEY_TOKEN(vtpvlanindex, "vtpVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.yfilter)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (vtpvlanlocalshutdown.is_set || is_set(vtpvlanlocalshutdown.yfilter)) leaf_name_data.push_back(vtpvlanlocalshutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex = value;
        vtpvlanindex.value_namespace = name_space;
        vtpvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanLocalShutdown")
    {
        vtpvlanlocalshutdown = value;
        vtpvlanlocalshutdown.value_namespace = name_space;
        vtpvlanlocalshutdown.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanLocalShutdown")
    {
        vtpvlanlocalshutdown.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanIndex" || name == "vtpVlanLocalShutdown")
        return true;
    return false;
}

CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortTable()
    :
    vlantrunkportentry(this, {"vlantrunkportifindex"})
{

    yang_name = "vlanTrunkPortTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VlanTrunkPortTable::~VlanTrunkPortTable()
{
}

bool CISCOVTPMIB::VlanTrunkPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlantrunkportentry.len(); index++)
    {
        if(vlantrunkportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VlanTrunkPortTable::has_operation() const
{
    for (std::size_t index=0; index<vlantrunkportentry.len(); index++)
    {
        if(vlantrunkportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VlanTrunkPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VlanTrunkPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VlanTrunkPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VlanTrunkPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlanTrunkPortEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry>();
        ent_->parent = this;
        vlantrunkportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VlanTrunkPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlantrunkportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VlanTrunkPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VlanTrunkPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VlanTrunkPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanTrunkPortEntry")
        return true;
    return false;
}

CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEntry()
    :
    vlantrunkportifindex{YType::int32, "vlanTrunkPortIfIndex"},
    vlantrunkportmanagementdomain{YType::int32, "vlanTrunkPortManagementDomain"},
    vlantrunkportencapsulationtype{YType::enumeration, "vlanTrunkPortEncapsulationType"},
    vlantrunkportvlansenabled{YType::str, "vlanTrunkPortVlansEnabled"},
    vlantrunkportnativevlan{YType::int32, "vlanTrunkPortNativeVlan"},
    vlantrunkportrowstatus{YType::enumeration, "vlanTrunkPortRowStatus"},
    vlantrunkportinjoins{YType::uint32, "vlanTrunkPortInJoins"},
    vlantrunkportoutjoins{YType::uint32, "vlanTrunkPortOutJoins"},
    vlantrunkportoldadverts{YType::uint32, "vlanTrunkPortOldAdverts"},
    vlantrunkportvlanspruningeligible{YType::str, "vlanTrunkPortVlansPruningEligible"},
    vlantrunkportvlansxmitjoined{YType::str, "vlanTrunkPortVlansXmitJoined"},
    vlantrunkportvlansrcvjoined{YType::str, "vlanTrunkPortVlansRcvJoined"},
    vlantrunkportdynamicstate{YType::enumeration, "vlanTrunkPortDynamicState"},
    vlantrunkportdynamicstatus{YType::enumeration, "vlanTrunkPortDynamicStatus"},
    vlantrunkportvtpenabled{YType::boolean, "vlanTrunkPortVtpEnabled"},
    vlantrunkportencapsulationopertype{YType::enumeration, "vlanTrunkPortEncapsulationOperType"},
    vlantrunkportvlansenabled2k{YType::str, "vlanTrunkPortVlansEnabled2k"},
    vlantrunkportvlansenabled3k{YType::str, "vlanTrunkPortVlansEnabled3k"},
    vlantrunkportvlansenabled4k{YType::str, "vlanTrunkPortVlansEnabled4k"},
    vtpvlanspruningeligible2k{YType::str, "vtpVlansPruningEligible2k"},
    vtpvlanspruningeligible3k{YType::str, "vtpVlansPruningEligible3k"},
    vtpvlanspruningeligible4k{YType::str, "vtpVlansPruningEligible4k"},
    vlantrunkportvlansxmitjoined2k{YType::str, "vlanTrunkPortVlansXmitJoined2k"},
    vlantrunkportvlansxmitjoined3k{YType::str, "vlanTrunkPortVlansXmitJoined3k"},
    vlantrunkportvlansxmitjoined4k{YType::str, "vlanTrunkPortVlansXmitJoined4k"},
    vlantrunkportvlansrcvjoined2k{YType::str, "vlanTrunkPortVlansRcvJoined2k"},
    vlantrunkportvlansrcvjoined3k{YType::str, "vlanTrunkPortVlansRcvJoined3k"},
    vlantrunkportvlansrcvjoined4k{YType::str, "vlanTrunkPortVlansRcvJoined4k"},
    vlantrunkportdot1qtunnel{YType::enumeration, "vlanTrunkPortDot1qTunnel"},
    vlantrunkportvlansactivefirst2k{YType::str, "vlanTrunkPortVlansActiveFirst2k"},
    vlantrunkportvlansactivesecond2k{YType::str, "vlanTrunkPortVlansActiveSecond2k"},
    stpxpreferredvlansmap{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap"},
    stpxpreferredvlansmap2k{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap2k"},
    stpxpreferredvlansmap3k{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap3k"},
    stpxpreferredvlansmap4k{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap4k"},
    stpxpreferredmistpinstancesmap{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredMISTPInstancesMap"},
    stpxpreferredmstinstancesmap{YType::str, "CISCO-STP-EXTENSIONS-MIB:stpxPreferredMSTInstancesMap"}
{

    yang_name = "vlanTrunkPortEntry"; yang_parent_name = "vlanTrunkPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::~VlanTrunkPortEntry()
{
}

bool CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return vlantrunkportifindex.is_set
	|| vlantrunkportmanagementdomain.is_set
	|| vlantrunkportencapsulationtype.is_set
	|| vlantrunkportvlansenabled.is_set
	|| vlantrunkportnativevlan.is_set
	|| vlantrunkportrowstatus.is_set
	|| vlantrunkportinjoins.is_set
	|| vlantrunkportoutjoins.is_set
	|| vlantrunkportoldadverts.is_set
	|| vlantrunkportvlanspruningeligible.is_set
	|| vlantrunkportvlansxmitjoined.is_set
	|| vlantrunkportvlansrcvjoined.is_set
	|| vlantrunkportdynamicstate.is_set
	|| vlantrunkportdynamicstatus.is_set
	|| vlantrunkportvtpenabled.is_set
	|| vlantrunkportencapsulationopertype.is_set
	|| vlantrunkportvlansenabled2k.is_set
	|| vlantrunkportvlansenabled3k.is_set
	|| vlantrunkportvlansenabled4k.is_set
	|| vtpvlanspruningeligible2k.is_set
	|| vtpvlanspruningeligible3k.is_set
	|| vtpvlanspruningeligible4k.is_set
	|| vlantrunkportvlansxmitjoined2k.is_set
	|| vlantrunkportvlansxmitjoined3k.is_set
	|| vlantrunkportvlansxmitjoined4k.is_set
	|| vlantrunkportvlansrcvjoined2k.is_set
	|| vlantrunkportvlansrcvjoined3k.is_set
	|| vlantrunkportvlansrcvjoined4k.is_set
	|| vlantrunkportdot1qtunnel.is_set
	|| vlantrunkportvlansactivefirst2k.is_set
	|| vlantrunkportvlansactivesecond2k.is_set
	|| stpxpreferredvlansmap.is_set
	|| stpxpreferredvlansmap2k.is_set
	|| stpxpreferredvlansmap3k.is_set
	|| stpxpreferredvlansmap4k.is_set
	|| stpxpreferredmistpinstancesmap.is_set
	|| stpxpreferredmstinstancesmap.is_set;
}

bool CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlantrunkportifindex.yfilter)
	|| ydk::is_set(vlantrunkportmanagementdomain.yfilter)
	|| ydk::is_set(vlantrunkportencapsulationtype.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled.yfilter)
	|| ydk::is_set(vlantrunkportnativevlan.yfilter)
	|| ydk::is_set(vlantrunkportrowstatus.yfilter)
	|| ydk::is_set(vlantrunkportinjoins.yfilter)
	|| ydk::is_set(vlantrunkportoutjoins.yfilter)
	|| ydk::is_set(vlantrunkportoldadverts.yfilter)
	|| ydk::is_set(vlantrunkportvlanspruningeligible.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined.yfilter)
	|| ydk::is_set(vlantrunkportdynamicstate.yfilter)
	|| ydk::is_set(vlantrunkportdynamicstatus.yfilter)
	|| ydk::is_set(vlantrunkportvtpenabled.yfilter)
	|| ydk::is_set(vlantrunkportencapsulationopertype.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled3k.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled4k.yfilter)
	|| ydk::is_set(vtpvlanspruningeligible2k.yfilter)
	|| ydk::is_set(vtpvlanspruningeligible3k.yfilter)
	|| ydk::is_set(vtpvlanspruningeligible4k.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined3k.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined4k.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined3k.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined4k.yfilter)
	|| ydk::is_set(vlantrunkportdot1qtunnel.yfilter)
	|| ydk::is_set(vlantrunkportvlansactivefirst2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansactivesecond2k.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap2k.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap3k.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap4k.yfilter)
	|| ydk::is_set(stpxpreferredmistpinstancesmap.yfilter)
	|| ydk::is_set(stpxpreferredmstinstancesmap.yfilter);
}

std::string CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vlanTrunkPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPortEntry";
    ADD_KEY_TOKEN(vlantrunkportifindex, "vlanTrunkPortIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlantrunkportifindex.is_set || is_set(vlantrunkportifindex.yfilter)) leaf_name_data.push_back(vlantrunkportifindex.get_name_leafdata());
    if (vlantrunkportmanagementdomain.is_set || is_set(vlantrunkportmanagementdomain.yfilter)) leaf_name_data.push_back(vlantrunkportmanagementdomain.get_name_leafdata());
    if (vlantrunkportencapsulationtype.is_set || is_set(vlantrunkportencapsulationtype.yfilter)) leaf_name_data.push_back(vlantrunkportencapsulationtype.get_name_leafdata());
    if (vlantrunkportvlansenabled.is_set || is_set(vlantrunkportvlansenabled.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled.get_name_leafdata());
    if (vlantrunkportnativevlan.is_set || is_set(vlantrunkportnativevlan.yfilter)) leaf_name_data.push_back(vlantrunkportnativevlan.get_name_leafdata());
    if (vlantrunkportrowstatus.is_set || is_set(vlantrunkportrowstatus.yfilter)) leaf_name_data.push_back(vlantrunkportrowstatus.get_name_leafdata());
    if (vlantrunkportinjoins.is_set || is_set(vlantrunkportinjoins.yfilter)) leaf_name_data.push_back(vlantrunkportinjoins.get_name_leafdata());
    if (vlantrunkportoutjoins.is_set || is_set(vlantrunkportoutjoins.yfilter)) leaf_name_data.push_back(vlantrunkportoutjoins.get_name_leafdata());
    if (vlantrunkportoldadverts.is_set || is_set(vlantrunkportoldadverts.yfilter)) leaf_name_data.push_back(vlantrunkportoldadverts.get_name_leafdata());
    if (vlantrunkportvlanspruningeligible.is_set || is_set(vlantrunkportvlanspruningeligible.yfilter)) leaf_name_data.push_back(vlantrunkportvlanspruningeligible.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined.is_set || is_set(vlantrunkportvlansxmitjoined.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined.is_set || is_set(vlantrunkportvlansrcvjoined.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined.get_name_leafdata());
    if (vlantrunkportdynamicstate.is_set || is_set(vlantrunkportdynamicstate.yfilter)) leaf_name_data.push_back(vlantrunkportdynamicstate.get_name_leafdata());
    if (vlantrunkportdynamicstatus.is_set || is_set(vlantrunkportdynamicstatus.yfilter)) leaf_name_data.push_back(vlantrunkportdynamicstatus.get_name_leafdata());
    if (vlantrunkportvtpenabled.is_set || is_set(vlantrunkportvtpenabled.yfilter)) leaf_name_data.push_back(vlantrunkportvtpenabled.get_name_leafdata());
    if (vlantrunkportencapsulationopertype.is_set || is_set(vlantrunkportencapsulationopertype.yfilter)) leaf_name_data.push_back(vlantrunkportencapsulationopertype.get_name_leafdata());
    if (vlantrunkportvlansenabled2k.is_set || is_set(vlantrunkportvlansenabled2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled2k.get_name_leafdata());
    if (vlantrunkportvlansenabled3k.is_set || is_set(vlantrunkportvlansenabled3k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled3k.get_name_leafdata());
    if (vlantrunkportvlansenabled4k.is_set || is_set(vlantrunkportvlansenabled4k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled4k.get_name_leafdata());
    if (vtpvlanspruningeligible2k.is_set || is_set(vtpvlanspruningeligible2k.yfilter)) leaf_name_data.push_back(vtpvlanspruningeligible2k.get_name_leafdata());
    if (vtpvlanspruningeligible3k.is_set || is_set(vtpvlanspruningeligible3k.yfilter)) leaf_name_data.push_back(vtpvlanspruningeligible3k.get_name_leafdata());
    if (vtpvlanspruningeligible4k.is_set || is_set(vtpvlanspruningeligible4k.yfilter)) leaf_name_data.push_back(vtpvlanspruningeligible4k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined2k.is_set || is_set(vlantrunkportvlansxmitjoined2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined2k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined3k.is_set || is_set(vlantrunkportvlansxmitjoined3k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined3k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined4k.is_set || is_set(vlantrunkportvlansxmitjoined4k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined4k.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined2k.is_set || is_set(vlantrunkportvlansrcvjoined2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined2k.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined3k.is_set || is_set(vlantrunkportvlansrcvjoined3k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined3k.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined4k.is_set || is_set(vlantrunkportvlansrcvjoined4k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined4k.get_name_leafdata());
    if (vlantrunkportdot1qtunnel.is_set || is_set(vlantrunkportdot1qtunnel.yfilter)) leaf_name_data.push_back(vlantrunkportdot1qtunnel.get_name_leafdata());
    if (vlantrunkportvlansactivefirst2k.is_set || is_set(vlantrunkportvlansactivefirst2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansactivefirst2k.get_name_leafdata());
    if (vlantrunkportvlansactivesecond2k.is_set || is_set(vlantrunkportvlansactivesecond2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansactivesecond2k.get_name_leafdata());
    if (stpxpreferredvlansmap.is_set || is_set(stpxpreferredvlansmap.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap.get_name_leafdata());
    if (stpxpreferredvlansmap2k.is_set || is_set(stpxpreferredvlansmap2k.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap2k.get_name_leafdata());
    if (stpxpreferredvlansmap3k.is_set || is_set(stpxpreferredvlansmap3k.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap3k.get_name_leafdata());
    if (stpxpreferredvlansmap4k.is_set || is_set(stpxpreferredvlansmap4k.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap4k.get_name_leafdata());
    if (stpxpreferredmistpinstancesmap.is_set || is_set(stpxpreferredmistpinstancesmap.yfilter)) leaf_name_data.push_back(stpxpreferredmistpinstancesmap.get_name_leafdata());
    if (stpxpreferredmstinstancesmap.is_set || is_set(stpxpreferredmstinstancesmap.yfilter)) leaf_name_data.push_back(stpxpreferredmstinstancesmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanTrunkPortIfIndex")
    {
        vlantrunkportifindex = value;
        vlantrunkportifindex.value_namespace = name_space;
        vlantrunkportifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortManagementDomain")
    {
        vlantrunkportmanagementdomain = value;
        vlantrunkportmanagementdomain.value_namespace = name_space;
        vlantrunkportmanagementdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortEncapsulationType")
    {
        vlantrunkportencapsulationtype = value;
        vlantrunkportencapsulationtype.value_namespace = name_space;
        vlantrunkportencapsulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansEnabled")
    {
        vlantrunkportvlansenabled = value;
        vlantrunkportvlansenabled.value_namespace = name_space;
        vlantrunkportvlansenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortNativeVlan")
    {
        vlantrunkportnativevlan = value;
        vlantrunkportnativevlan.value_namespace = name_space;
        vlantrunkportnativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortRowStatus")
    {
        vlantrunkportrowstatus = value;
        vlantrunkportrowstatus.value_namespace = name_space;
        vlantrunkportrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortInJoins")
    {
        vlantrunkportinjoins = value;
        vlantrunkportinjoins.value_namespace = name_space;
        vlantrunkportinjoins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortOutJoins")
    {
        vlantrunkportoutjoins = value;
        vlantrunkportoutjoins.value_namespace = name_space;
        vlantrunkportoutjoins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortOldAdverts")
    {
        vlantrunkportoldadverts = value;
        vlantrunkportoldadverts.value_namespace = name_space;
        vlantrunkportoldadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansPruningEligible")
    {
        vlantrunkportvlanspruningeligible = value;
        vlantrunkportvlanspruningeligible.value_namespace = name_space;
        vlantrunkportvlanspruningeligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined")
    {
        vlantrunkportvlansxmitjoined = value;
        vlantrunkportvlansxmitjoined.value_namespace = name_space;
        vlantrunkportvlansxmitjoined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined")
    {
        vlantrunkportvlansrcvjoined = value;
        vlantrunkportvlansrcvjoined.value_namespace = name_space;
        vlantrunkportvlansrcvjoined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortDynamicState")
    {
        vlantrunkportdynamicstate = value;
        vlantrunkportdynamicstate.value_namespace = name_space;
        vlantrunkportdynamicstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortDynamicStatus")
    {
        vlantrunkportdynamicstatus = value;
        vlantrunkportdynamicstatus.value_namespace = name_space;
        vlantrunkportdynamicstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVtpEnabled")
    {
        vlantrunkportvtpenabled = value;
        vlantrunkportvtpenabled.value_namespace = name_space;
        vlantrunkportvtpenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortEncapsulationOperType")
    {
        vlantrunkportencapsulationopertype = value;
        vlantrunkportencapsulationopertype.value_namespace = name_space;
        vlantrunkportencapsulationopertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansEnabled2k")
    {
        vlantrunkportvlansenabled2k = value;
        vlantrunkportvlansenabled2k.value_namespace = name_space;
        vlantrunkportvlansenabled2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansEnabled3k")
    {
        vlantrunkportvlansenabled3k = value;
        vlantrunkportvlansenabled3k.value_namespace = name_space;
        vlantrunkportvlansenabled3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansEnabled4k")
    {
        vlantrunkportvlansenabled4k = value;
        vlantrunkportvlansenabled4k.value_namespace = name_space;
        vlantrunkportvlansenabled4k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlansPruningEligible2k")
    {
        vtpvlanspruningeligible2k = value;
        vtpvlanspruningeligible2k.value_namespace = name_space;
        vtpvlanspruningeligible2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlansPruningEligible3k")
    {
        vtpvlanspruningeligible3k = value;
        vtpvlanspruningeligible3k.value_namespace = name_space;
        vtpvlanspruningeligible3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlansPruningEligible4k")
    {
        vtpvlanspruningeligible4k = value;
        vtpvlanspruningeligible4k.value_namespace = name_space;
        vtpvlanspruningeligible4k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined2k")
    {
        vlantrunkportvlansxmitjoined2k = value;
        vlantrunkportvlansxmitjoined2k.value_namespace = name_space;
        vlantrunkportvlansxmitjoined2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined3k")
    {
        vlantrunkportvlansxmitjoined3k = value;
        vlantrunkportvlansxmitjoined3k.value_namespace = name_space;
        vlantrunkportvlansxmitjoined3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined4k")
    {
        vlantrunkportvlansxmitjoined4k = value;
        vlantrunkportvlansxmitjoined4k.value_namespace = name_space;
        vlantrunkportvlansxmitjoined4k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined2k")
    {
        vlantrunkportvlansrcvjoined2k = value;
        vlantrunkportvlansrcvjoined2k.value_namespace = name_space;
        vlantrunkportvlansrcvjoined2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined3k")
    {
        vlantrunkportvlansrcvjoined3k = value;
        vlantrunkportvlansrcvjoined3k.value_namespace = name_space;
        vlantrunkportvlansrcvjoined3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined4k")
    {
        vlantrunkportvlansrcvjoined4k = value;
        vlantrunkportvlansrcvjoined4k.value_namespace = name_space;
        vlantrunkportvlansrcvjoined4k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortDot1qTunnel")
    {
        vlantrunkportdot1qtunnel = value;
        vlantrunkportdot1qtunnel.value_namespace = name_space;
        vlantrunkportdot1qtunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansActiveFirst2k")
    {
        vlantrunkportvlansactivefirst2k = value;
        vlantrunkportvlansactivefirst2k.value_namespace = name_space;
        vlantrunkportvlansactivefirst2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansActiveSecond2k")
    {
        vlantrunkportvlansactivesecond2k = value;
        vlantrunkportvlansactivesecond2k.value_namespace = name_space;
        vlantrunkportvlansactivesecond2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap")
    {
        stpxpreferredvlansmap = value;
        stpxpreferredvlansmap.value_namespace = name_space;
        stpxpreferredvlansmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap2k")
    {
        stpxpreferredvlansmap2k = value;
        stpxpreferredvlansmap2k.value_namespace = name_space;
        stpxpreferredvlansmap2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap3k")
    {
        stpxpreferredvlansmap3k = value;
        stpxpreferredvlansmap3k.value_namespace = name_space;
        stpxpreferredvlansmap3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxPreferredVlansMap4k")
    {
        stpxpreferredvlansmap4k = value;
        stpxpreferredvlansmap4k.value_namespace = name_space;
        stpxpreferredvlansmap4k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxPreferredMISTPInstancesMap")
    {
        stpxpreferredmistpinstancesmap = value;
        stpxpreferredmistpinstancesmap.value_namespace = name_space;
        stpxpreferredmistpinstancesmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxPreferredMSTInstancesMap")
    {
        stpxpreferredmstinstancesmap = value;
        stpxpreferredmstinstancesmap.value_namespace = name_space;
        stpxpreferredmstinstancesmap.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanTrunkPortIfIndex")
    {
        vlantrunkportifindex.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortManagementDomain")
    {
        vlantrunkportmanagementdomain.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortEncapsulationType")
    {
        vlantrunkportencapsulationtype.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansEnabled")
    {
        vlantrunkportvlansenabled.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortNativeVlan")
    {
        vlantrunkportnativevlan.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortRowStatus")
    {
        vlantrunkportrowstatus.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortInJoins")
    {
        vlantrunkportinjoins.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortOutJoins")
    {
        vlantrunkportoutjoins.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortOldAdverts")
    {
        vlantrunkportoldadverts.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansPruningEligible")
    {
        vlantrunkportvlanspruningeligible.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined")
    {
        vlantrunkportvlansxmitjoined.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined")
    {
        vlantrunkportvlansrcvjoined.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortDynamicState")
    {
        vlantrunkportdynamicstate.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortDynamicStatus")
    {
        vlantrunkportdynamicstatus.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVtpEnabled")
    {
        vlantrunkportvtpenabled.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortEncapsulationOperType")
    {
        vlantrunkportencapsulationopertype.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansEnabled2k")
    {
        vlantrunkportvlansenabled2k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansEnabled3k")
    {
        vlantrunkportvlansenabled3k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansEnabled4k")
    {
        vlantrunkportvlansenabled4k.yfilter = yfilter;
    }
    if(value_path == "vtpVlansPruningEligible2k")
    {
        vtpvlanspruningeligible2k.yfilter = yfilter;
    }
    if(value_path == "vtpVlansPruningEligible3k")
    {
        vtpvlanspruningeligible3k.yfilter = yfilter;
    }
    if(value_path == "vtpVlansPruningEligible4k")
    {
        vtpvlanspruningeligible4k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined2k")
    {
        vlantrunkportvlansxmitjoined2k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined3k")
    {
        vlantrunkportvlansxmitjoined3k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansXmitJoined4k")
    {
        vlantrunkportvlansxmitjoined4k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined2k")
    {
        vlantrunkportvlansrcvjoined2k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined3k")
    {
        vlantrunkportvlansrcvjoined3k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined4k")
    {
        vlantrunkportvlansrcvjoined4k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortDot1qTunnel")
    {
        vlantrunkportdot1qtunnel.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansActiveFirst2k")
    {
        vlantrunkportvlansactivefirst2k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansActiveSecond2k")
    {
        vlantrunkportvlansactivesecond2k.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredVlansMap")
    {
        stpxpreferredvlansmap.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredVlansMap2k")
    {
        stpxpreferredvlansmap2k.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredVlansMap3k")
    {
        stpxpreferredvlansmap3k.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredVlansMap4k")
    {
        stpxpreferredvlansmap4k.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredMISTPInstancesMap")
    {
        stpxpreferredmistpinstancesmap.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredMSTInstancesMap")
    {
        stpxpreferredmstinstancesmap.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanTrunkPortIfIndex" || name == "vlanTrunkPortManagementDomain" || name == "vlanTrunkPortEncapsulationType" || name == "vlanTrunkPortVlansEnabled" || name == "vlanTrunkPortNativeVlan" || name == "vlanTrunkPortRowStatus" || name == "vlanTrunkPortInJoins" || name == "vlanTrunkPortOutJoins" || name == "vlanTrunkPortOldAdverts" || name == "vlanTrunkPortVlansPruningEligible" || name == "vlanTrunkPortVlansXmitJoined" || name == "vlanTrunkPortVlansRcvJoined" || name == "vlanTrunkPortDynamicState" || name == "vlanTrunkPortDynamicStatus" || name == "vlanTrunkPortVtpEnabled" || name == "vlanTrunkPortEncapsulationOperType" || name == "vlanTrunkPortVlansEnabled2k" || name == "vlanTrunkPortVlansEnabled3k" || name == "vlanTrunkPortVlansEnabled4k" || name == "vtpVlansPruningEligible2k" || name == "vtpVlansPruningEligible3k" || name == "vtpVlansPruningEligible4k" || name == "vlanTrunkPortVlansXmitJoined2k" || name == "vlanTrunkPortVlansXmitJoined3k" || name == "vlanTrunkPortVlansXmitJoined4k" || name == "vlanTrunkPortVlansRcvJoined2k" || name == "vlanTrunkPortVlansRcvJoined3k" || name == "vlanTrunkPortVlansRcvJoined4k" || name == "vlanTrunkPortDot1qTunnel" || name == "vlanTrunkPortVlansActiveFirst2k" || name == "vlanTrunkPortVlansActiveSecond2k" || name == "stpxPreferredVlansMap" || name == "stpxPreferredVlansMap2k" || name == "stpxPreferredVlansMap3k" || name == "stpxPreferredVlansMap4k" || name == "stpxPreferredMISTPInstancesMap" || name == "stpxPreferredMSTInstancesMap")
        return true;
    return false;
}

CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverTable()
    :
    vtpdiscoverentry(this, {"managementdomainindex"})
{

    yang_name = "vtpDiscoverTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpDiscoverTable::~VtpDiscoverTable()
{
}

bool CISCOVTPMIB::VtpDiscoverTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpdiscoverentry.len(); index++)
    {
        if(vtpdiscoverentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpDiscoverTable::has_operation() const
{
    for (std::size_t index=0; index<vtpdiscoverentry.len(); index++)
    {
        if(vtpdiscoverentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpDiscoverTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpDiscoverTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpDiscoverTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpDiscoverTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpDiscoverEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry>();
        ent_->parent = this;
        vtpdiscoverentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpDiscoverTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpdiscoverentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpDiscoverTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpDiscoverTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpDiscoverTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpDiscoverEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpdiscoveraction{YType::enumeration, "vtpDiscoverAction"},
    vtpdiscoverstatus{YType::enumeration, "vtpDiscoverStatus"},
    vtplastdiscovertime{YType::uint32, "vtpLastDiscoverTime"}
{

    yang_name = "vtpDiscoverEntry"; yang_parent_name = "vtpDiscoverTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::~VtpDiscoverEntry()
{
}

bool CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpdiscoveraction.is_set
	|| vtpdiscoverstatus.is_set
	|| vtplastdiscovertime.is_set;
}

bool CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpdiscoveraction.yfilter)
	|| ydk::is_set(vtpdiscoverstatus.yfilter)
	|| ydk::is_set(vtplastdiscovertime.yfilter);
}

std::string CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDiscoverTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdiscoveraction.is_set || is_set(vtpdiscoveraction.yfilter)) leaf_name_data.push_back(vtpdiscoveraction.get_name_leafdata());
    if (vtpdiscoverstatus.is_set || is_set(vtpdiscoverstatus.yfilter)) leaf_name_data.push_back(vtpdiscoverstatus.get_name_leafdata());
    if (vtplastdiscovertime.is_set || is_set(vtplastdiscovertime.yfilter)) leaf_name_data.push_back(vtplastdiscovertime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverAction")
    {
        vtpdiscoveraction = value;
        vtpdiscoveraction.value_namespace = name_space;
        vtpdiscoveraction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverStatus")
    {
        vtpdiscoverstatus = value;
        vtpdiscoverstatus.value_namespace = name_space;
        vtpdiscoverstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpLastDiscoverTime")
    {
        vtplastdiscovertime = value;
        vtplastdiscovertime.value_namespace = name_space;
        vtplastdiscovertime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverAction")
    {
        vtpdiscoveraction.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverStatus")
    {
        vtpdiscoverstatus.yfilter = yfilter;
    }
    if(value_path == "vtpLastDiscoverTime")
    {
        vtplastdiscovertime.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpDiscoverAction" || name == "vtpDiscoverStatus" || name == "vtpLastDiscoverTime")
        return true;
    return false;
}

CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultTable()
    :
    vtpdiscoverresultentry(this, {"managementdomainindex", "vtpdiscoverresultindex"})
{

    yang_name = "vtpDiscoverResultTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpDiscoverResultTable::~VtpDiscoverResultTable()
{
}

bool CISCOVTPMIB::VtpDiscoverResultTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpdiscoverresultentry.len(); index++)
    {
        if(vtpdiscoverresultentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpDiscoverResultTable::has_operation() const
{
    for (std::size_t index=0; index<vtpdiscoverresultentry.len(); index++)
    {
        if(vtpdiscoverresultentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpDiscoverResultTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpDiscoverResultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverResultTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpDiscoverResultTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpDiscoverResultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpDiscoverResultEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry>();
        ent_->parent = this;
        vtpdiscoverresultentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpDiscoverResultTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpdiscoverresultentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpDiscoverResultTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpDiscoverResultTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpDiscoverResultTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpDiscoverResultEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::VtpDiscoverResultEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpdiscoverresultindex{YType::uint32, "vtpDiscoverResultIndex"},
    vtpdiscoverresultdatabasename{YType::str, "vtpDiscoverResultDatabaseName"},
    vtpdiscoverresultconflicting{YType::boolean, "vtpDiscoverResultConflicting"},
    vtpdiscoverresultdeviceid{YType::str, "vtpDiscoverResultDeviceId"},
    vtpdiscoverresultprimaryserver{YType::str, "vtpDiscoverResultPrimaryServer"},
    vtpdiscoverresultrevnumber{YType::uint32, "vtpDiscoverResultRevNumber"},
    vtpdiscoverresultsystemname{YType::str, "vtpDiscoverResultSystemName"}
{

    yang_name = "vtpDiscoverResultEntry"; yang_parent_name = "vtpDiscoverResultTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::~VtpDiscoverResultEntry()
{
}

bool CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpdiscoverresultindex.is_set
	|| vtpdiscoverresultdatabasename.is_set
	|| vtpdiscoverresultconflicting.is_set
	|| vtpdiscoverresultdeviceid.is_set
	|| vtpdiscoverresultprimaryserver.is_set
	|| vtpdiscoverresultrevnumber.is_set
	|| vtpdiscoverresultsystemname.is_set;
}

bool CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpdiscoverresultindex.yfilter)
	|| ydk::is_set(vtpdiscoverresultdatabasename.yfilter)
	|| ydk::is_set(vtpdiscoverresultconflicting.yfilter)
	|| ydk::is_set(vtpdiscoverresultdeviceid.yfilter)
	|| ydk::is_set(vtpdiscoverresultprimaryserver.yfilter)
	|| ydk::is_set(vtpdiscoverresultrevnumber.yfilter)
	|| ydk::is_set(vtpdiscoverresultsystemname.yfilter);
}

std::string CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDiscoverResultTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverResultEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    ADD_KEY_TOKEN(vtpdiscoverresultindex, "vtpDiscoverResultIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdiscoverresultindex.is_set || is_set(vtpdiscoverresultindex.yfilter)) leaf_name_data.push_back(vtpdiscoverresultindex.get_name_leafdata());
    if (vtpdiscoverresultdatabasename.is_set || is_set(vtpdiscoverresultdatabasename.yfilter)) leaf_name_data.push_back(vtpdiscoverresultdatabasename.get_name_leafdata());
    if (vtpdiscoverresultconflicting.is_set || is_set(vtpdiscoverresultconflicting.yfilter)) leaf_name_data.push_back(vtpdiscoverresultconflicting.get_name_leafdata());
    if (vtpdiscoverresultdeviceid.is_set || is_set(vtpdiscoverresultdeviceid.yfilter)) leaf_name_data.push_back(vtpdiscoverresultdeviceid.get_name_leafdata());
    if (vtpdiscoverresultprimaryserver.is_set || is_set(vtpdiscoverresultprimaryserver.yfilter)) leaf_name_data.push_back(vtpdiscoverresultprimaryserver.get_name_leafdata());
    if (vtpdiscoverresultrevnumber.is_set || is_set(vtpdiscoverresultrevnumber.yfilter)) leaf_name_data.push_back(vtpdiscoverresultrevnumber.get_name_leafdata());
    if (vtpdiscoverresultsystemname.is_set || is_set(vtpdiscoverresultsystemname.yfilter)) leaf_name_data.push_back(vtpdiscoverresultsystemname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultIndex")
    {
        vtpdiscoverresultindex = value;
        vtpdiscoverresultindex.value_namespace = name_space;
        vtpdiscoverresultindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultDatabaseName")
    {
        vtpdiscoverresultdatabasename = value;
        vtpdiscoverresultdatabasename.value_namespace = name_space;
        vtpdiscoverresultdatabasename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultConflicting")
    {
        vtpdiscoverresultconflicting = value;
        vtpdiscoverresultconflicting.value_namespace = name_space;
        vtpdiscoverresultconflicting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultDeviceId")
    {
        vtpdiscoverresultdeviceid = value;
        vtpdiscoverresultdeviceid.value_namespace = name_space;
        vtpdiscoverresultdeviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultPrimaryServer")
    {
        vtpdiscoverresultprimaryserver = value;
        vtpdiscoverresultprimaryserver.value_namespace = name_space;
        vtpdiscoverresultprimaryserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultRevNumber")
    {
        vtpdiscoverresultrevnumber = value;
        vtpdiscoverresultrevnumber.value_namespace = name_space;
        vtpdiscoverresultrevnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultSystemName")
    {
        vtpdiscoverresultsystemname = value;
        vtpdiscoverresultsystemname.value_namespace = name_space;
        vtpdiscoverresultsystemname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultIndex")
    {
        vtpdiscoverresultindex.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultDatabaseName")
    {
        vtpdiscoverresultdatabasename.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultConflicting")
    {
        vtpdiscoverresultconflicting.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultDeviceId")
    {
        vtpdiscoverresultdeviceid.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultPrimaryServer")
    {
        vtpdiscoverresultprimaryserver.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultRevNumber")
    {
        vtpdiscoverresultrevnumber.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultSystemName")
    {
        vtpdiscoverresultsystemname.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpDiscoverResultIndex" || name == "vtpDiscoverResultDatabaseName" || name == "vtpDiscoverResultConflicting" || name == "vtpDiscoverResultDeviceId" || name == "vtpDiscoverResultPrimaryServer" || name == "vtpDiscoverResultRevNumber" || name == "vtpDiscoverResultSystemName")
        return true;
    return false;
}

CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseTable()
    :
    vtpdatabaseentry(this, {"managementdomainindex", "vtpdatabaseindex"})
{

    yang_name = "vtpDatabaseTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpDatabaseTable::~VtpDatabaseTable()
{
}

bool CISCOVTPMIB::VtpDatabaseTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpdatabaseentry.len(); index++)
    {
        if(vtpdatabaseentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpDatabaseTable::has_operation() const
{
    for (std::size_t index=0; index<vtpdatabaseentry.len(); index++)
    {
        if(vtpdatabaseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpDatabaseTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpDatabaseTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDatabaseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpDatabaseTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpDatabaseTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpDatabaseEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry>();
        ent_->parent = this;
        vtpdatabaseentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpDatabaseTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpdatabaseentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpDatabaseTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpDatabaseTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpDatabaseTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpDatabaseEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::VtpDatabaseEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpdatabaseindex{YType::uint32, "vtpDatabaseIndex"},
    vtpdatabasename{YType::str, "vtpDatabaseName"},
    vtpdatabaselocalmode{YType::enumeration, "vtpDatabaseLocalMode"},
    vtpdatabaserevnumber{YType::uint32, "vtpDatabaseRevNumber"},
    vtpdatabaseprimaryserver{YType::boolean, "vtpDatabasePrimaryServer"},
    vtpdatabaseprimaryserverid{YType::str, "vtpDatabasePrimaryServerId"},
    vtpdatabasetakeoverprimary{YType::boolean, "vtpDatabaseTakeOverPrimary"},
    vtpdatabasetakeoverpassword{YType::str, "vtpDatabaseTakeOverPassword"}
{

    yang_name = "vtpDatabaseEntry"; yang_parent_name = "vtpDatabaseTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::~VtpDatabaseEntry()
{
}

bool CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpdatabaseindex.is_set
	|| vtpdatabasename.is_set
	|| vtpdatabaselocalmode.is_set
	|| vtpdatabaserevnumber.is_set
	|| vtpdatabaseprimaryserver.is_set
	|| vtpdatabaseprimaryserverid.is_set
	|| vtpdatabasetakeoverprimary.is_set
	|| vtpdatabasetakeoverpassword.is_set;
}

bool CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpdatabaseindex.yfilter)
	|| ydk::is_set(vtpdatabasename.yfilter)
	|| ydk::is_set(vtpdatabaselocalmode.yfilter)
	|| ydk::is_set(vtpdatabaserevnumber.yfilter)
	|| ydk::is_set(vtpdatabaseprimaryserver.yfilter)
	|| ydk::is_set(vtpdatabaseprimaryserverid.yfilter)
	|| ydk::is_set(vtpdatabasetakeoverprimary.yfilter)
	|| ydk::is_set(vtpdatabasetakeoverpassword.yfilter);
}

std::string CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDatabaseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDatabaseEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    ADD_KEY_TOKEN(vtpdatabaseindex, "vtpDatabaseIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdatabaseindex.is_set || is_set(vtpdatabaseindex.yfilter)) leaf_name_data.push_back(vtpdatabaseindex.get_name_leafdata());
    if (vtpdatabasename.is_set || is_set(vtpdatabasename.yfilter)) leaf_name_data.push_back(vtpdatabasename.get_name_leafdata());
    if (vtpdatabaselocalmode.is_set || is_set(vtpdatabaselocalmode.yfilter)) leaf_name_data.push_back(vtpdatabaselocalmode.get_name_leafdata());
    if (vtpdatabaserevnumber.is_set || is_set(vtpdatabaserevnumber.yfilter)) leaf_name_data.push_back(vtpdatabaserevnumber.get_name_leafdata());
    if (vtpdatabaseprimaryserver.is_set || is_set(vtpdatabaseprimaryserver.yfilter)) leaf_name_data.push_back(vtpdatabaseprimaryserver.get_name_leafdata());
    if (vtpdatabaseprimaryserverid.is_set || is_set(vtpdatabaseprimaryserverid.yfilter)) leaf_name_data.push_back(vtpdatabaseprimaryserverid.get_name_leafdata());
    if (vtpdatabasetakeoverprimary.is_set || is_set(vtpdatabasetakeoverprimary.yfilter)) leaf_name_data.push_back(vtpdatabasetakeoverprimary.get_name_leafdata());
    if (vtpdatabasetakeoverpassword.is_set || is_set(vtpdatabasetakeoverpassword.yfilter)) leaf_name_data.push_back(vtpdatabasetakeoverpassword.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseIndex")
    {
        vtpdatabaseindex = value;
        vtpdatabaseindex.value_namespace = name_space;
        vtpdatabaseindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseName")
    {
        vtpdatabasename = value;
        vtpdatabasename.value_namespace = name_space;
        vtpdatabasename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseLocalMode")
    {
        vtpdatabaselocalmode = value;
        vtpdatabaselocalmode.value_namespace = name_space;
        vtpdatabaselocalmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseRevNumber")
    {
        vtpdatabaserevnumber = value;
        vtpdatabaserevnumber.value_namespace = name_space;
        vtpdatabaserevnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabasePrimaryServer")
    {
        vtpdatabaseprimaryserver = value;
        vtpdatabaseprimaryserver.value_namespace = name_space;
        vtpdatabaseprimaryserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabasePrimaryServerId")
    {
        vtpdatabaseprimaryserverid = value;
        vtpdatabaseprimaryserverid.value_namespace = name_space;
        vtpdatabaseprimaryserverid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseTakeOverPrimary")
    {
        vtpdatabasetakeoverprimary = value;
        vtpdatabasetakeoverprimary.value_namespace = name_space;
        vtpdatabasetakeoverprimary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseTakeOverPassword")
    {
        vtpdatabasetakeoverpassword = value;
        vtpdatabasetakeoverpassword.value_namespace = name_space;
        vtpdatabasetakeoverpassword.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseIndex")
    {
        vtpdatabaseindex.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseName")
    {
        vtpdatabasename.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseLocalMode")
    {
        vtpdatabaselocalmode.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseRevNumber")
    {
        vtpdatabaserevnumber.yfilter = yfilter;
    }
    if(value_path == "vtpDatabasePrimaryServer")
    {
        vtpdatabaseprimaryserver.yfilter = yfilter;
    }
    if(value_path == "vtpDatabasePrimaryServerId")
    {
        vtpdatabaseprimaryserverid.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseTakeOverPrimary")
    {
        vtpdatabasetakeoverprimary.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseTakeOverPassword")
    {
        vtpdatabasetakeoverpassword.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpDatabaseIndex" || name == "vtpDatabaseName" || name == "vtpDatabaseLocalMode" || name == "vtpDatabaseRevNumber" || name == "vtpDatabasePrimaryServer" || name == "vtpDatabasePrimaryServerId" || name == "vtpDatabaseTakeOverPrimary" || name == "vtpDatabaseTakeOverPassword")
        return true;
    return false;
}

CISCOVTPMIB::VtpAuthenticationTable::VtpAuthenticationTable()
    :
    vtpauthentry(this, {"managementdomainindex"})
{

    yang_name = "vtpAuthenticationTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpAuthenticationTable::~VtpAuthenticationTable()
{
}

bool CISCOVTPMIB::VtpAuthenticationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vtpauthentry.len(); index++)
    {
        if(vtpauthentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::VtpAuthenticationTable::has_operation() const
{
    for (std::size_t index=0; index<vtpauthentry.len(); index++)
    {
        if(vtpauthentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::VtpAuthenticationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpAuthenticationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpAuthenticationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpAuthenticationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpAuthenticationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtpAuthEntry")
    {
        auto ent_ = std::make_shared<CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry>();
        ent_->parent = this;
        vtpauthentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpAuthenticationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vtpauthentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOVTPMIB::VtpAuthenticationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::VtpAuthenticationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::VtpAuthenticationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpAuthEntry")
        return true;
    return false;
}

CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::VtpAuthEntry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpauthpassword{YType::str, "vtpAuthPassword"},
    vtpauthpasswordtype{YType::enumeration, "vtpAuthPasswordType"},
    vtpauthsecretkey{YType::str, "vtpAuthSecretKey"}
{

    yang_name = "vtpAuthEntry"; yang_parent_name = "vtpAuthenticationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::~VtpAuthEntry()
{
}

bool CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::has_data() const
{
    if (is_presence_container) return true;
    return managementdomainindex.is_set
	|| vtpauthpassword.is_set
	|| vtpauthpasswordtype.is_set
	|| vtpauthsecretkey.is_set;
}

bool CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpauthpassword.yfilter)
	|| ydk::is_set(vtpauthpasswordtype.yfilter)
	|| ydk::is_set(vtpauthsecretkey.yfilter);
}

std::string CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpAuthenticationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpAuthEntry";
    ADD_KEY_TOKEN(managementdomainindex, "managementDomainIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpauthpassword.is_set || is_set(vtpauthpassword.yfilter)) leaf_name_data.push_back(vtpauthpassword.get_name_leafdata());
    if (vtpauthpasswordtype.is_set || is_set(vtpauthpasswordtype.yfilter)) leaf_name_data.push_back(vtpauthpasswordtype.get_name_leafdata());
    if (vtpauthsecretkey.is_set || is_set(vtpauthsecretkey.yfilter)) leaf_name_data.push_back(vtpauthsecretkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpAuthPassword")
    {
        vtpauthpassword = value;
        vtpauthpassword.value_namespace = name_space;
        vtpauthpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpAuthPasswordType")
    {
        vtpauthpasswordtype = value;
        vtpauthpasswordtype.value_namespace = name_space;
        vtpauthpasswordtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpAuthSecretKey")
    {
        vtpauthsecretkey = value;
        vtpauthsecretkey.value_namespace = name_space;
        vtpauthsecretkey.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpAuthPassword")
    {
        vtpauthpassword.yfilter = yfilter;
    }
    if(value_path == "vtpAuthPasswordType")
    {
        vtpauthpasswordtype.yfilter = yfilter;
    }
    if(value_path == "vtpAuthSecretKey")
    {
        vtpauthsecretkey.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpAuthPassword" || name == "vtpAuthPasswordType" || name == "vtpAuthSecretKey")
        return true;
    return false;
}

const Enum::YLeaf VlanType::ethernet {1, "ethernet"};
const Enum::YLeaf VlanType::fddi {2, "fddi"};
const Enum::YLeaf VlanType::tokenRing {3, "tokenRing"};
const Enum::YLeaf VlanType::fddiNet {4, "fddiNet"};
const Enum::YLeaf VlanType::trNet {5, "trNet"};
const Enum::YLeaf VlanType::deprecated {6, "deprecated"};

const Enum::YLeaf CISCOVTPMIB::VtpStatus::VtpVersion::one {1, "one"};
const Enum::YLeaf CISCOVTPMIB::VtpStatus::VtpVersion::two {2, "two"};
const Enum::YLeaf CISCOVTPMIB::VtpStatus::VtpVersion::none {3, "none"};
const Enum::YLeaf CISCOVTPMIB::VtpStatus::VtpVersion::three {4, "three"};

const Enum::YLeaf CISCOVTPMIB::InternalVlanInfo::VtpInternalVlanAllocPolicy::ascending {1, "ascending"};
const Enum::YLeaf CISCOVTPMIB::InternalVlanInfo::VtpInternalVlanAllocPolicy::descending {2, "descending"};

const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainLocalMode::client {1, "client"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainLocalMode::server {2, "server"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainLocalMode::transparent {3, "transparent"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainLocalMode::off {4, "off"};

const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainPruningState::enabled {1, "enabled"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainPruningState::disabled {2, "disabled"};

const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainVersionInUse::version1 {1, "version1"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainVersionInUse::version2 {2, "version2"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainVersionInUse::none {3, "none"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainVersionInUse::version3 {4, "version3"};

const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainPruningStateOper::enabled {1, "enabled"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainPruningStateOper::disabled {2, "disabled"};

const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanEditOperation::none {1, "none"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanEditOperation::copy {2, "copy"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanEditOperation::apply {3, "apply"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanEditOperation::release {4, "release"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanEditOperation::restartTimer {5, "restartTimer"};

const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::inProgress {1, "inProgress"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::succeeded {2, "succeeded"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::configNumberError {3, "configNumberError"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::inconsistentEdit {4, "inconsistentEdit"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::tooBig {5, "tooBig"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::localNVStoreFail {6, "localNVStoreFail"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::remoteNVStoreFail {7, "remoteNVStoreFail"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::editBufferEmpty {8, "editBufferEmpty"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::someOtherError {9, "someOtherError"};
const Enum::YLeaf CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus::notPrimaryServer {10, "notPrimaryServer"};

const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanState::operational {1, "operational"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanState::suspended {2, "suspended"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanState::mtuTooBigForDevice {3, "mtuTooBigForDevice"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanState::mtuTooBigForTrunk {4, "mtuTooBigForTrunk"};

const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanStpType::ieee {1, "ieee"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanStpType::ibm {2, "ibm"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanStpType::hybrid {3, "hybrid"};

const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanBridgeType::none {0, "none"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanBridgeType::srt {1, "srt"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanBridgeType::srb {2, "srb"};

const Enum::YLeaf CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditState::operational {1, "operational"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditState::suspended {2, "suspended"};

const Enum::YLeaf CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditStpType::ieee {1, "ieee"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditStpType::ibm {2, "ibm"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditStpType::auto_ {3, "auto"};

const Enum::YLeaf CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditBridgeType::srt {1, "srt"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditBridgeType::srb {2, "srb"};

const Enum::YLeaf CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::VtpVlanLocalShutdown::up {1, "up"};
const Enum::YLeaf CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::VtpVlanLocalShutdown::down {2, "down"};

const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationType::isl {1, "isl"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationType::dot10 {2, "dot10"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationType::lane {3, "lane"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationType::dot1Q {4, "dot1Q"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationType::negotiate {5, "negotiate"};

const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicState::on {1, "on"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicState::off {2, "off"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicState::desirable {3, "desirable"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicState::auto_ {4, "auto"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicState::onNoNegotiate {5, "onNoNegotiate"};

const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicStatus::trunking {1, "trunking"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicStatus::notTrunking {2, "notTrunking"};

const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationOperType::isl {1, "isl"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationOperType::dot10 {2, "dot10"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationOperType::lane {3, "lane"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationOperType::dot1Q {4, "dot1Q"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationOperType::negotiating {5, "negotiating"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationOperType::notApplicable {6, "notApplicable"};

const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDot1qTunnel::trunk {1, "trunk"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDot1qTunnel::access {2, "access"};
const Enum::YLeaf CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDot1qTunnel::disabled {3, "disabled"};

const Enum::YLeaf CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverAction::discover {1, "discover"};
const Enum::YLeaf CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverAction::noOperation {2, "noOperation"};
const Enum::YLeaf CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverAction::purgeResult {3, "purgeResult"};

const Enum::YLeaf CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverStatus::inProgress {1, "inProgress"};
const Enum::YLeaf CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverStatus::succeeded {2, "succeeded"};
const Enum::YLeaf CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverStatus::resourceUnavailable {3, "resourceUnavailable"};
const Enum::YLeaf CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverStatus::someOtherError {4, "someOtherError"};

const Enum::YLeaf CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::VtpDatabaseLocalMode::client {1, "client"};
const Enum::YLeaf CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::VtpDatabaseLocalMode::server {2, "server"};
const Enum::YLeaf CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::VtpDatabaseLocalMode::transparent {3, "transparent"};
const Enum::YLeaf CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::VtpDatabaseLocalMode::off {4, "off"};

const Enum::YLeaf CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::VtpAuthPasswordType::plaintext {1, "plaintext"};
const Enum::YLeaf CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::VtpAuthPasswordType::hidden {2, "hidden"};


}
}

