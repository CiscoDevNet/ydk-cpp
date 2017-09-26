
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
    internalvlaninfo(std::make_shared<CISCOVTPMIB::Internalvlaninfo>())
	,managementdomaintable(std::make_shared<CISCOVTPMIB::Managementdomaintable>())
	,vlanstatistics(std::make_shared<CISCOVTPMIB::Vlanstatistics>())
	,vlantrunkports(std::make_shared<CISCOVTPMIB::Vlantrunkports>())
	,vlantrunkporttable(std::make_shared<CISCOVTPMIB::Vlantrunkporttable>())
	,vtpauthenticationtable(std::make_shared<CISCOVTPMIB::Vtpauthenticationtable>())
	,vtpdatabasetable(std::make_shared<CISCOVTPMIB::Vtpdatabasetable>())
	,vtpdiscoverresulttable(std::make_shared<CISCOVTPMIB::Vtpdiscoverresulttable>())
	,vtpdiscovertable(std::make_shared<CISCOVTPMIB::Vtpdiscovertable>())
	,vtpinternalvlantable(std::make_shared<CISCOVTPMIB::Vtpinternalvlantable>())
	,vtpstatus(std::make_shared<CISCOVTPMIB::Vtpstatus>())
	,vtpvlanedittable(std::make_shared<CISCOVTPMIB::Vtpvlanedittable>())
	,vtpvlanlocalshutdowntable(std::make_shared<CISCOVTPMIB::Vtpvlanlocalshutdowntable>())
	,vtpvlantable(std::make_shared<CISCOVTPMIB::Vtpvlantable>())
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

    yang_name = "CISCO-VTP-MIB"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOVTPMIB::~CISCOVTPMIB()
{
}

bool CISCOVTPMIB::has_data() const
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

bool CISCOVTPMIB::has_operation() const
{
    return is_set(yfilter)
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

std::shared_ptr<Entity> CISCOVTPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internalVlanInfo")
    {
        if(internalvlaninfo == nullptr)
        {
            internalvlaninfo = std::make_shared<CISCOVTPMIB::Internalvlaninfo>();
        }
        return internalvlaninfo;
    }

    if(child_yang_name == "managementDomainTable")
    {
        if(managementdomaintable == nullptr)
        {
            managementdomaintable = std::make_shared<CISCOVTPMIB::Managementdomaintable>();
        }
        return managementdomaintable;
    }

    if(child_yang_name == "vlanStatistics")
    {
        if(vlanstatistics == nullptr)
        {
            vlanstatistics = std::make_shared<CISCOVTPMIB::Vlanstatistics>();
        }
        return vlanstatistics;
    }

    if(child_yang_name == "vlanTrunkPorts")
    {
        if(vlantrunkports == nullptr)
        {
            vlantrunkports = std::make_shared<CISCOVTPMIB::Vlantrunkports>();
        }
        return vlantrunkports;
    }

    if(child_yang_name == "vlanTrunkPortTable")
    {
        if(vlantrunkporttable == nullptr)
        {
            vlantrunkporttable = std::make_shared<CISCOVTPMIB::Vlantrunkporttable>();
        }
        return vlantrunkporttable;
    }

    if(child_yang_name == "vtpAuthenticationTable")
    {
        if(vtpauthenticationtable == nullptr)
        {
            vtpauthenticationtable = std::make_shared<CISCOVTPMIB::Vtpauthenticationtable>();
        }
        return vtpauthenticationtable;
    }

    if(child_yang_name == "vtpDatabaseTable")
    {
        if(vtpdatabasetable == nullptr)
        {
            vtpdatabasetable = std::make_shared<CISCOVTPMIB::Vtpdatabasetable>();
        }
        return vtpdatabasetable;
    }

    if(child_yang_name == "vtpDiscoverResultTable")
    {
        if(vtpdiscoverresulttable == nullptr)
        {
            vtpdiscoverresulttable = std::make_shared<CISCOVTPMIB::Vtpdiscoverresulttable>();
        }
        return vtpdiscoverresulttable;
    }

    if(child_yang_name == "vtpDiscoverTable")
    {
        if(vtpdiscovertable == nullptr)
        {
            vtpdiscovertable = std::make_shared<CISCOVTPMIB::Vtpdiscovertable>();
        }
        return vtpdiscovertable;
    }

    if(child_yang_name == "vtpInternalVlanTable")
    {
        if(vtpinternalvlantable == nullptr)
        {
            vtpinternalvlantable = std::make_shared<CISCOVTPMIB::Vtpinternalvlantable>();
        }
        return vtpinternalvlantable;
    }

    if(child_yang_name == "vtpStatus")
    {
        if(vtpstatus == nullptr)
        {
            vtpstatus = std::make_shared<CISCOVTPMIB::Vtpstatus>();
        }
        return vtpstatus;
    }

    if(child_yang_name == "vtpVlanEditTable")
    {
        if(vtpvlanedittable == nullptr)
        {
            vtpvlanedittable = std::make_shared<CISCOVTPMIB::Vtpvlanedittable>();
        }
        return vtpvlanedittable;
    }

    if(child_yang_name == "vtpVlanLocalShutdownTable")
    {
        if(vtpvlanlocalshutdowntable == nullptr)
        {
            vtpvlanlocalshutdowntable = std::make_shared<CISCOVTPMIB::Vtpvlanlocalshutdowntable>();
        }
        return vtpvlanlocalshutdowntable;
    }

    if(child_yang_name == "vtpVlanTable")
    {
        if(vtpvlantable == nullptr)
        {
            vtpvlantable = std::make_shared<CISCOVTPMIB::Vtpvlantable>();
        }
        return vtpvlantable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::get_children() const
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

void CISCOVTPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOVTPMIB::clone_ptr() const
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
    if(name == "internalVlanInfo" || name == "managementDomainTable" || name == "vlanStatistics" || name == "vlanTrunkPorts" || name == "vlanTrunkPortTable" || name == "vtpAuthenticationTable" || name == "vtpDatabaseTable" || name == "vtpDiscoverResultTable" || name == "vtpDiscoverTable" || name == "vtpInternalVlanTable" || name == "vtpStatus" || name == "vtpVlanEditTable" || name == "vtpVlanLocalShutdownTable" || name == "vtpVlanTable")
        return true;
    return false;
}

CISCOVTPMIB::Internalvlaninfo::Internalvlaninfo()
    :
    vtpinternalvlanallocpolicy{YType::enumeration, "vtpInternalVlanAllocPolicy"}
{

    yang_name = "internalVlanInfo"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Internalvlaninfo::~Internalvlaninfo()
{
}

bool CISCOVTPMIB::Internalvlaninfo::has_data() const
{
    return vtpinternalvlanallocpolicy.is_set;
}

bool CISCOVTPMIB::Internalvlaninfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtpinternalvlanallocpolicy.yfilter);
}

std::string CISCOVTPMIB::Internalvlaninfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Internalvlaninfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalVlanInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Internalvlaninfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtpinternalvlanallocpolicy.is_set || is_set(vtpinternalvlanallocpolicy.yfilter)) leaf_name_data.push_back(vtpinternalvlanallocpolicy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Internalvlaninfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Internalvlaninfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Internalvlaninfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vtpInternalVlanAllocPolicy")
    {
        vtpinternalvlanallocpolicy = value;
        vtpinternalvlanallocpolicy.value_namespace = name_space;
        vtpinternalvlanallocpolicy.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::Internalvlaninfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtpInternalVlanAllocPolicy")
    {
        vtpinternalvlanallocpolicy.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::Internalvlaninfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpInternalVlanAllocPolicy")
        return true;
    return false;
}

CISCOVTPMIB::Managementdomaintable::Managementdomaintable()
{

    yang_name = "managementDomainTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Managementdomaintable::~Managementdomaintable()
{
}

bool CISCOVTPMIB::Managementdomaintable::has_data() const
{
    for (std::size_t index=0; index<managementdomainentry.size(); index++)
    {
        if(managementdomainentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Managementdomaintable::has_operation() const
{
    for (std::size_t index=0; index<managementdomainentry.size(); index++)
    {
        if(managementdomainentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Managementdomaintable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Managementdomaintable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "managementDomainTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Managementdomaintable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Managementdomaintable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Managementdomaintable::Managementdomainentry>();
        c->parent = this;
        managementdomainentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Managementdomaintable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : managementdomainentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Managementdomaintable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Managementdomaintable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Managementdomaintable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainEntry")
        return true;
    return false;
}

CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainentry()
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

    yang_name = "managementDomainEntry"; yang_parent_name = "managementDomainTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Managementdomaintable::Managementdomainentry::~Managementdomainentry()
{
}

bool CISCOVTPMIB::Managementdomaintable::Managementdomainentry::has_data() const
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

bool CISCOVTPMIB::Managementdomaintable::Managementdomainentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(managementdomainadminsrcif.yfilter)
	|| ydk::is_set(managementdomainconfigfile.yfilter)
	|| ydk::is_set(managementdomainconfigrevnumber.yfilter)
	|| ydk::is_set(managementdomaindeviceid.yfilter)
	|| ydk::is_set(managementdomainlastchange.yfilter)
	|| ydk::is_set(managementdomainlastupdater.yfilter)
	|| ydk::is_set(managementdomainlocalmode.yfilter)
	|| ydk::is_set(managementdomainlocalupdater.yfilter)
	|| ydk::is_set(managementdomainlocalupdatertype.yfilter)
	|| ydk::is_set(managementdomainname.yfilter)
	|| ydk::is_set(managementdomainopersrcif.yfilter)
	|| ydk::is_set(managementdomainpruningstate.yfilter)
	|| ydk::is_set(managementdomainpruningstateoper.yfilter)
	|| ydk::is_set(managementdomainrowstatus.yfilter)
	|| ydk::is_set(managementdomainsourceonlymode.yfilter)
	|| ydk::is_set(managementdomaintftppathname.yfilter)
	|| ydk::is_set(managementdomaintftpserver.yfilter)
	|| ydk::is_set(managementdomainversioninuse.yfilter)
	|| ydk::is_set(vtpconfigdigesterrors.yfilter)
	|| ydk::is_set(vtpconfigrevnumbererrors.yfilter)
	|| ydk::is_set(vtpinadvertrequests.yfilter)
	|| ydk::is_set(vtpinsubsetadverts.yfilter)
	|| ydk::is_set(vtpinsummaryadverts.yfilter)
	|| ydk::is_set(vtpoutadvertrequests.yfilter)
	|| ydk::is_set(vtpoutsubsetadverts.yfilter)
	|| ydk::is_set(vtpoutsummaryadverts.yfilter)
	|| ydk::is_set(vtpvlanapplystatus.yfilter)
	|| ydk::is_set(vtpvlaneditbufferowner.yfilter)
	|| ydk::is_set(vtpvlaneditconfigrevnumber.yfilter)
	|| ydk::is_set(vtpvlaneditmodifiedvlan.yfilter)
	|| ydk::is_set(vtpvlaneditoperation.yfilter);
}

std::string CISCOVTPMIB::Managementdomaintable::Managementdomainentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/managementDomainTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Managementdomaintable::Managementdomainentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "managementDomainEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Managementdomaintable::Managementdomainentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (managementdomainadminsrcif.is_set || is_set(managementdomainadminsrcif.yfilter)) leaf_name_data.push_back(managementdomainadminsrcif.get_name_leafdata());
    if (managementdomainconfigfile.is_set || is_set(managementdomainconfigfile.yfilter)) leaf_name_data.push_back(managementdomainconfigfile.get_name_leafdata());
    if (managementdomainconfigrevnumber.is_set || is_set(managementdomainconfigrevnumber.yfilter)) leaf_name_data.push_back(managementdomainconfigrevnumber.get_name_leafdata());
    if (managementdomaindeviceid.is_set || is_set(managementdomaindeviceid.yfilter)) leaf_name_data.push_back(managementdomaindeviceid.get_name_leafdata());
    if (managementdomainlastchange.is_set || is_set(managementdomainlastchange.yfilter)) leaf_name_data.push_back(managementdomainlastchange.get_name_leafdata());
    if (managementdomainlastupdater.is_set || is_set(managementdomainlastupdater.yfilter)) leaf_name_data.push_back(managementdomainlastupdater.get_name_leafdata());
    if (managementdomainlocalmode.is_set || is_set(managementdomainlocalmode.yfilter)) leaf_name_data.push_back(managementdomainlocalmode.get_name_leafdata());
    if (managementdomainlocalupdater.is_set || is_set(managementdomainlocalupdater.yfilter)) leaf_name_data.push_back(managementdomainlocalupdater.get_name_leafdata());
    if (managementdomainlocalupdatertype.is_set || is_set(managementdomainlocalupdatertype.yfilter)) leaf_name_data.push_back(managementdomainlocalupdatertype.get_name_leafdata());
    if (managementdomainname.is_set || is_set(managementdomainname.yfilter)) leaf_name_data.push_back(managementdomainname.get_name_leafdata());
    if (managementdomainopersrcif.is_set || is_set(managementdomainopersrcif.yfilter)) leaf_name_data.push_back(managementdomainopersrcif.get_name_leafdata());
    if (managementdomainpruningstate.is_set || is_set(managementdomainpruningstate.yfilter)) leaf_name_data.push_back(managementdomainpruningstate.get_name_leafdata());
    if (managementdomainpruningstateoper.is_set || is_set(managementdomainpruningstateoper.yfilter)) leaf_name_data.push_back(managementdomainpruningstateoper.get_name_leafdata());
    if (managementdomainrowstatus.is_set || is_set(managementdomainrowstatus.yfilter)) leaf_name_data.push_back(managementdomainrowstatus.get_name_leafdata());
    if (managementdomainsourceonlymode.is_set || is_set(managementdomainsourceonlymode.yfilter)) leaf_name_data.push_back(managementdomainsourceonlymode.get_name_leafdata());
    if (managementdomaintftppathname.is_set || is_set(managementdomaintftppathname.yfilter)) leaf_name_data.push_back(managementdomaintftppathname.get_name_leafdata());
    if (managementdomaintftpserver.is_set || is_set(managementdomaintftpserver.yfilter)) leaf_name_data.push_back(managementdomaintftpserver.get_name_leafdata());
    if (managementdomainversioninuse.is_set || is_set(managementdomainversioninuse.yfilter)) leaf_name_data.push_back(managementdomainversioninuse.get_name_leafdata());
    if (vtpconfigdigesterrors.is_set || is_set(vtpconfigdigesterrors.yfilter)) leaf_name_data.push_back(vtpconfigdigesterrors.get_name_leafdata());
    if (vtpconfigrevnumbererrors.is_set || is_set(vtpconfigrevnumbererrors.yfilter)) leaf_name_data.push_back(vtpconfigrevnumbererrors.get_name_leafdata());
    if (vtpinadvertrequests.is_set || is_set(vtpinadvertrequests.yfilter)) leaf_name_data.push_back(vtpinadvertrequests.get_name_leafdata());
    if (vtpinsubsetadverts.is_set || is_set(vtpinsubsetadverts.yfilter)) leaf_name_data.push_back(vtpinsubsetadverts.get_name_leafdata());
    if (vtpinsummaryadverts.is_set || is_set(vtpinsummaryadverts.yfilter)) leaf_name_data.push_back(vtpinsummaryadverts.get_name_leafdata());
    if (vtpoutadvertrequests.is_set || is_set(vtpoutadvertrequests.yfilter)) leaf_name_data.push_back(vtpoutadvertrequests.get_name_leafdata());
    if (vtpoutsubsetadverts.is_set || is_set(vtpoutsubsetadverts.yfilter)) leaf_name_data.push_back(vtpoutsubsetadverts.get_name_leafdata());
    if (vtpoutsummaryadverts.is_set || is_set(vtpoutsummaryadverts.yfilter)) leaf_name_data.push_back(vtpoutsummaryadverts.get_name_leafdata());
    if (vtpvlanapplystatus.is_set || is_set(vtpvlanapplystatus.yfilter)) leaf_name_data.push_back(vtpvlanapplystatus.get_name_leafdata());
    if (vtpvlaneditbufferowner.is_set || is_set(vtpvlaneditbufferowner.yfilter)) leaf_name_data.push_back(vtpvlaneditbufferowner.get_name_leafdata());
    if (vtpvlaneditconfigrevnumber.is_set || is_set(vtpvlaneditconfigrevnumber.yfilter)) leaf_name_data.push_back(vtpvlaneditconfigrevnumber.get_name_leafdata());
    if (vtpvlaneditmodifiedvlan.is_set || is_set(vtpvlaneditmodifiedvlan.yfilter)) leaf_name_data.push_back(vtpvlaneditmodifiedvlan.get_name_leafdata());
    if (vtpvlaneditoperation.is_set || is_set(vtpvlaneditoperation.yfilter)) leaf_name_data.push_back(vtpvlaneditoperation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Managementdomaintable::Managementdomainentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Managementdomaintable::Managementdomainentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Managementdomaintable::Managementdomainentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex = value;
        managementdomainindex.value_namespace = name_space;
        managementdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainAdminSrcIf")
    {
        managementdomainadminsrcif = value;
        managementdomainadminsrcif.value_namespace = name_space;
        managementdomainadminsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainConfigFile")
    {
        managementdomainconfigfile = value;
        managementdomainconfigfile.value_namespace = name_space;
        managementdomainconfigfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainConfigRevNumber")
    {
        managementdomainconfigrevnumber = value;
        managementdomainconfigrevnumber.value_namespace = name_space;
        managementdomainconfigrevnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainDeviceID")
    {
        managementdomaindeviceid = value;
        managementdomaindeviceid.value_namespace = name_space;
        managementdomaindeviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLastChange")
    {
        managementdomainlastchange = value;
        managementdomainlastchange.value_namespace = name_space;
        managementdomainlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLastUpdater")
    {
        managementdomainlastupdater = value;
        managementdomainlastupdater.value_namespace = name_space;
        managementdomainlastupdater.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLocalMode")
    {
        managementdomainlocalmode = value;
        managementdomainlocalmode.value_namespace = name_space;
        managementdomainlocalmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLocalUpdater")
    {
        managementdomainlocalupdater = value;
        managementdomainlocalupdater.value_namespace = name_space;
        managementdomainlocalupdater.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainLocalUpdaterType")
    {
        managementdomainlocalupdatertype = value;
        managementdomainlocalupdatertype.value_namespace = name_space;
        managementdomainlocalupdatertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainName")
    {
        managementdomainname = value;
        managementdomainname.value_namespace = name_space;
        managementdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainOperSrcIf")
    {
        managementdomainopersrcif = value;
        managementdomainopersrcif.value_namespace = name_space;
        managementdomainopersrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainPruningState")
    {
        managementdomainpruningstate = value;
        managementdomainpruningstate.value_namespace = name_space;
        managementdomainpruningstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainPruningStateOper")
    {
        managementdomainpruningstateoper = value;
        managementdomainpruningstateoper.value_namespace = name_space;
        managementdomainpruningstateoper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainRowStatus")
    {
        managementdomainrowstatus = value;
        managementdomainrowstatus.value_namespace = name_space;
        managementdomainrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainSourceOnlyMode")
    {
        managementdomainsourceonlymode = value;
        managementdomainsourceonlymode.value_namespace = name_space;
        managementdomainsourceonlymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainTftpPathname")
    {
        managementdomaintftppathname = value;
        managementdomaintftppathname.value_namespace = name_space;
        managementdomaintftppathname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainTftpServer")
    {
        managementdomaintftpserver = value;
        managementdomaintftpserver.value_namespace = name_space;
        managementdomaintftpserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managementDomainVersionInUse")
    {
        managementdomainversioninuse = value;
        managementdomainversioninuse.value_namespace = name_space;
        managementdomainversioninuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpConfigDigestErrors")
    {
        vtpconfigdigesterrors = value;
        vtpconfigdigesterrors.value_namespace = name_space;
        vtpconfigdigesterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpConfigRevNumberErrors")
    {
        vtpconfigrevnumbererrors = value;
        vtpconfigrevnumbererrors.value_namespace = name_space;
        vtpconfigrevnumbererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpInAdvertRequests")
    {
        vtpinadvertrequests = value;
        vtpinadvertrequests.value_namespace = name_space;
        vtpinadvertrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpInSubsetAdverts")
    {
        vtpinsubsetadverts = value;
        vtpinsubsetadverts.value_namespace = name_space;
        vtpinsubsetadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpInSummaryAdverts")
    {
        vtpinsummaryadverts = value;
        vtpinsummaryadverts.value_namespace = name_space;
        vtpinsummaryadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpOutAdvertRequests")
    {
        vtpoutadvertrequests = value;
        vtpoutadvertrequests.value_namespace = name_space;
        vtpoutadvertrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpOutSubsetAdverts")
    {
        vtpoutsubsetadverts = value;
        vtpoutsubsetadverts.value_namespace = name_space;
        vtpoutsubsetadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpOutSummaryAdverts")
    {
        vtpoutsummaryadverts = value;
        vtpoutsummaryadverts.value_namespace = name_space;
        vtpoutsummaryadverts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vtpVlanEditOperation")
    {
        vtpvlaneditoperation = value;
        vtpvlaneditoperation.value_namespace = name_space;
        vtpvlaneditoperation.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::Managementdomaintable::Managementdomainentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "managementDomainAdminSrcIf")
    {
        managementdomainadminsrcif.yfilter = yfilter;
    }
    if(value_path == "managementDomainConfigFile")
    {
        managementdomainconfigfile.yfilter = yfilter;
    }
    if(value_path == "managementDomainConfigRevNumber")
    {
        managementdomainconfigrevnumber.yfilter = yfilter;
    }
    if(value_path == "managementDomainDeviceID")
    {
        managementdomaindeviceid.yfilter = yfilter;
    }
    if(value_path == "managementDomainLastChange")
    {
        managementdomainlastchange.yfilter = yfilter;
    }
    if(value_path == "managementDomainLastUpdater")
    {
        managementdomainlastupdater.yfilter = yfilter;
    }
    if(value_path == "managementDomainLocalMode")
    {
        managementdomainlocalmode.yfilter = yfilter;
    }
    if(value_path == "managementDomainLocalUpdater")
    {
        managementdomainlocalupdater.yfilter = yfilter;
    }
    if(value_path == "managementDomainLocalUpdaterType")
    {
        managementdomainlocalupdatertype.yfilter = yfilter;
    }
    if(value_path == "managementDomainName")
    {
        managementdomainname.yfilter = yfilter;
    }
    if(value_path == "managementDomainOperSrcIf")
    {
        managementdomainopersrcif.yfilter = yfilter;
    }
    if(value_path == "managementDomainPruningState")
    {
        managementdomainpruningstate.yfilter = yfilter;
    }
    if(value_path == "managementDomainPruningStateOper")
    {
        managementdomainpruningstateoper.yfilter = yfilter;
    }
    if(value_path == "managementDomainRowStatus")
    {
        managementdomainrowstatus.yfilter = yfilter;
    }
    if(value_path == "managementDomainSourceOnlyMode")
    {
        managementdomainsourceonlymode.yfilter = yfilter;
    }
    if(value_path == "managementDomainTftpPathname")
    {
        managementdomaintftppathname.yfilter = yfilter;
    }
    if(value_path == "managementDomainTftpServer")
    {
        managementdomaintftpserver.yfilter = yfilter;
    }
    if(value_path == "managementDomainVersionInUse")
    {
        managementdomainversioninuse.yfilter = yfilter;
    }
    if(value_path == "vtpConfigDigestErrors")
    {
        vtpconfigdigesterrors.yfilter = yfilter;
    }
    if(value_path == "vtpConfigRevNumberErrors")
    {
        vtpconfigrevnumbererrors.yfilter = yfilter;
    }
    if(value_path == "vtpInAdvertRequests")
    {
        vtpinadvertrequests.yfilter = yfilter;
    }
    if(value_path == "vtpInSubsetAdverts")
    {
        vtpinsubsetadverts.yfilter = yfilter;
    }
    if(value_path == "vtpInSummaryAdverts")
    {
        vtpinsummaryadverts.yfilter = yfilter;
    }
    if(value_path == "vtpOutAdvertRequests")
    {
        vtpoutadvertrequests.yfilter = yfilter;
    }
    if(value_path == "vtpOutSubsetAdverts")
    {
        vtpoutsubsetadverts.yfilter = yfilter;
    }
    if(value_path == "vtpOutSummaryAdverts")
    {
        vtpoutsummaryadverts.yfilter = yfilter;
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
    if(value_path == "vtpVlanEditOperation")
    {
        vtpvlaneditoperation.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::Managementdomaintable::Managementdomainentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "managementDomainAdminSrcIf" || name == "managementDomainConfigFile" || name == "managementDomainConfigRevNumber" || name == "managementDomainDeviceID" || name == "managementDomainLastChange" || name == "managementDomainLastUpdater" || name == "managementDomainLocalMode" || name == "managementDomainLocalUpdater" || name == "managementDomainLocalUpdaterType" || name == "managementDomainName" || name == "managementDomainOperSrcIf" || name == "managementDomainPruningState" || name == "managementDomainPruningStateOper" || name == "managementDomainRowStatus" || name == "managementDomainSourceOnlyMode" || name == "managementDomainTftpPathname" || name == "managementDomainTftpServer" || name == "managementDomainVersionInUse" || name == "vtpConfigDigestErrors" || name == "vtpConfigRevNumberErrors" || name == "vtpInAdvertRequests" || name == "vtpInSubsetAdverts" || name == "vtpInSummaryAdverts" || name == "vtpOutAdvertRequests" || name == "vtpOutSubsetAdverts" || name == "vtpOutSummaryAdverts" || name == "vtpVlanApplyStatus" || name == "vtpVlanEditBufferOwner" || name == "vtpVlanEditConfigRevNumber" || name == "vtpVlanEditModifiedVlan" || name == "vtpVlanEditOperation")
        return true;
    return false;
}

CISCOVTPMIB::Vlanstatistics::Vlanstatistics()
    :
    vlanstatsextendedvlans{YType::uint32, "vlanStatsExtendedVlans"},
    vlanstatsfreevlans{YType::uint32, "vlanStatsFreeVlans"},
    vlanstatsinternalvlans{YType::uint32, "vlanStatsInternalVlans"},
    vlanstatsvlans{YType::uint32, "vlanStatsVlans"}
{

    yang_name = "vlanStatistics"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vlanstatistics::~Vlanstatistics()
{
}

bool CISCOVTPMIB::Vlanstatistics::has_data() const
{
    return vlanstatsextendedvlans.is_set
	|| vlanstatsfreevlans.is_set
	|| vlanstatsinternalvlans.is_set
	|| vlanstatsvlans.is_set;
}

bool CISCOVTPMIB::Vlanstatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanstatsextendedvlans.yfilter)
	|| ydk::is_set(vlanstatsfreevlans.yfilter)
	|| ydk::is_set(vlanstatsinternalvlans.yfilter)
	|| ydk::is_set(vlanstatsvlans.yfilter);
}

std::string CISCOVTPMIB::Vlanstatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vlanstatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanStatistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vlanstatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanstatsextendedvlans.is_set || is_set(vlanstatsextendedvlans.yfilter)) leaf_name_data.push_back(vlanstatsextendedvlans.get_name_leafdata());
    if (vlanstatsfreevlans.is_set || is_set(vlanstatsfreevlans.yfilter)) leaf_name_data.push_back(vlanstatsfreevlans.get_name_leafdata());
    if (vlanstatsinternalvlans.is_set || is_set(vlanstatsinternalvlans.yfilter)) leaf_name_data.push_back(vlanstatsinternalvlans.get_name_leafdata());
    if (vlanstatsvlans.is_set || is_set(vlanstatsvlans.yfilter)) leaf_name_data.push_back(vlanstatsvlans.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vlanstatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vlanstatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vlanstatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanStatsExtendedVlans")
    {
        vlanstatsextendedvlans = value;
        vlanstatsextendedvlans.value_namespace = name_space;
        vlanstatsextendedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanStatsFreeVlans")
    {
        vlanstatsfreevlans = value;
        vlanstatsfreevlans.value_namespace = name_space;
        vlanstatsfreevlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanStatsInternalVlans")
    {
        vlanstatsinternalvlans = value;
        vlanstatsinternalvlans.value_namespace = name_space;
        vlanstatsinternalvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanStatsVlans")
    {
        vlanstatsvlans = value;
        vlanstatsvlans.value_namespace = name_space;
        vlanstatsvlans.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::Vlanstatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanStatsExtendedVlans")
    {
        vlanstatsextendedvlans.yfilter = yfilter;
    }
    if(value_path == "vlanStatsFreeVlans")
    {
        vlanstatsfreevlans.yfilter = yfilter;
    }
    if(value_path == "vlanStatsInternalVlans")
    {
        vlanstatsinternalvlans.yfilter = yfilter;
    }
    if(value_path == "vlanStatsVlans")
    {
        vlanstatsvlans.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::Vlanstatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanStatsExtendedVlans" || name == "vlanStatsFreeVlans" || name == "vlanStatsInternalVlans" || name == "vlanStatsVlans")
        return true;
    return false;
}

CISCOVTPMIB::Vlantrunkports::Vlantrunkports()
    :
    vlantrunkportsdot1qtag{YType::boolean, "vlanTrunkPortsDot1qTag"},
    vlantrunkportsetserialno{YType::int32, "vlanTrunkPortSetSerialNo"}
{

    yang_name = "vlanTrunkPorts"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vlantrunkports::~Vlantrunkports()
{
}

bool CISCOVTPMIB::Vlantrunkports::has_data() const
{
    return vlantrunkportsdot1qtag.is_set
	|| vlantrunkportsetserialno.is_set;
}

bool CISCOVTPMIB::Vlantrunkports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlantrunkportsdot1qtag.yfilter)
	|| ydk::is_set(vlantrunkportsetserialno.yfilter);
}

std::string CISCOVTPMIB::Vlantrunkports::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vlantrunkports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPorts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vlantrunkports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlantrunkportsdot1qtag.is_set || is_set(vlantrunkportsdot1qtag.yfilter)) leaf_name_data.push_back(vlantrunkportsdot1qtag.get_name_leafdata());
    if (vlantrunkportsetserialno.is_set || is_set(vlantrunkportsetserialno.yfilter)) leaf_name_data.push_back(vlantrunkportsetserialno.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vlantrunkports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vlantrunkports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vlantrunkports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanTrunkPortsDot1qTag")
    {
        vlantrunkportsdot1qtag = value;
        vlantrunkportsdot1qtag.value_namespace = name_space;
        vlantrunkportsdot1qtag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortSetSerialNo")
    {
        vlantrunkportsetserialno = value;
        vlantrunkportsetserialno.value_namespace = name_space;
        vlantrunkportsetserialno.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::Vlantrunkports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanTrunkPortsDot1qTag")
    {
        vlantrunkportsdot1qtag.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortSetSerialNo")
    {
        vlantrunkportsetserialno.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::Vlantrunkports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanTrunkPortsDot1qTag" || name == "vlanTrunkPortSetSerialNo")
        return true;
    return false;
}

CISCOVTPMIB::Vlantrunkporttable::Vlantrunkporttable()
{

    yang_name = "vlanTrunkPortTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vlantrunkporttable::~Vlantrunkporttable()
{
}

bool CISCOVTPMIB::Vlantrunkporttable::has_data() const
{
    for (std::size_t index=0; index<vlantrunkportentry.size(); index++)
    {
        if(vlantrunkportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vlantrunkporttable::has_operation() const
{
    for (std::size_t index=0; index<vlantrunkportentry.size(); index++)
    {
        if(vlantrunkportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vlantrunkporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vlantrunkporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vlantrunkporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vlantrunkporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry>();
        c->parent = this;
        vlantrunkportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vlantrunkporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlantrunkportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vlantrunkporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vlantrunkporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vlantrunkporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanTrunkPortEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportentry()
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

    yang_name = "vlanTrunkPortEntry"; yang_parent_name = "vlanTrunkPortTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::~Vlantrunkportentry()
{
}

bool CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::has_data() const
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

bool CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlantrunkportifindex.yfilter)
	|| ydk::is_set(stpxpreferredmistpinstancesmap.yfilter)
	|| ydk::is_set(stpxpreferredmstinstancesmap.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap2k.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap3k.yfilter)
	|| ydk::is_set(stpxpreferredvlansmap4k.yfilter)
	|| ydk::is_set(vlantrunkportdot1qtunnel.yfilter)
	|| ydk::is_set(vlantrunkportdynamicstate.yfilter)
	|| ydk::is_set(vlantrunkportdynamicstatus.yfilter)
	|| ydk::is_set(vlantrunkportencapsulationopertype.yfilter)
	|| ydk::is_set(vlantrunkportencapsulationtype.yfilter)
	|| ydk::is_set(vlantrunkportinjoins.yfilter)
	|| ydk::is_set(vlantrunkportmanagementdomain.yfilter)
	|| ydk::is_set(vlantrunkportnativevlan.yfilter)
	|| ydk::is_set(vlantrunkportoldadverts.yfilter)
	|| ydk::is_set(vlantrunkportoutjoins.yfilter)
	|| ydk::is_set(vlantrunkportrowstatus.yfilter)
	|| ydk::is_set(vlantrunkportvlansactivefirst2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansactivesecond2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled3k.yfilter)
	|| ydk::is_set(vlantrunkportvlansenabled4k.yfilter)
	|| ydk::is_set(vlantrunkportvlanspruningeligible.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined3k.yfilter)
	|| ydk::is_set(vlantrunkportvlansrcvjoined4k.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined2k.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined3k.yfilter)
	|| ydk::is_set(vlantrunkportvlansxmitjoined4k.yfilter)
	|| ydk::is_set(vlantrunkportvtpenabled.yfilter)
	|| ydk::is_set(vtpvlanspruningeligible2k.yfilter)
	|| ydk::is_set(vtpvlanspruningeligible3k.yfilter)
	|| ydk::is_set(vtpvlanspruningeligible4k.yfilter);
}

std::string CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vlanTrunkPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTrunkPortEntry" <<"[vlanTrunkPortIfIndex='" <<vlantrunkportifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlantrunkportifindex.is_set || is_set(vlantrunkportifindex.yfilter)) leaf_name_data.push_back(vlantrunkportifindex.get_name_leafdata());
    if (stpxpreferredmistpinstancesmap.is_set || is_set(stpxpreferredmistpinstancesmap.yfilter)) leaf_name_data.push_back(stpxpreferredmistpinstancesmap.get_name_leafdata());
    if (stpxpreferredmstinstancesmap.is_set || is_set(stpxpreferredmstinstancesmap.yfilter)) leaf_name_data.push_back(stpxpreferredmstinstancesmap.get_name_leafdata());
    if (stpxpreferredvlansmap.is_set || is_set(stpxpreferredvlansmap.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap.get_name_leafdata());
    if (stpxpreferredvlansmap2k.is_set || is_set(stpxpreferredvlansmap2k.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap2k.get_name_leafdata());
    if (stpxpreferredvlansmap3k.is_set || is_set(stpxpreferredvlansmap3k.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap3k.get_name_leafdata());
    if (stpxpreferredvlansmap4k.is_set || is_set(stpxpreferredvlansmap4k.yfilter)) leaf_name_data.push_back(stpxpreferredvlansmap4k.get_name_leafdata());
    if (vlantrunkportdot1qtunnel.is_set || is_set(vlantrunkportdot1qtunnel.yfilter)) leaf_name_data.push_back(vlantrunkportdot1qtunnel.get_name_leafdata());
    if (vlantrunkportdynamicstate.is_set || is_set(vlantrunkportdynamicstate.yfilter)) leaf_name_data.push_back(vlantrunkportdynamicstate.get_name_leafdata());
    if (vlantrunkportdynamicstatus.is_set || is_set(vlantrunkportdynamicstatus.yfilter)) leaf_name_data.push_back(vlantrunkportdynamicstatus.get_name_leafdata());
    if (vlantrunkportencapsulationopertype.is_set || is_set(vlantrunkportencapsulationopertype.yfilter)) leaf_name_data.push_back(vlantrunkportencapsulationopertype.get_name_leafdata());
    if (vlantrunkportencapsulationtype.is_set || is_set(vlantrunkportencapsulationtype.yfilter)) leaf_name_data.push_back(vlantrunkportencapsulationtype.get_name_leafdata());
    if (vlantrunkportinjoins.is_set || is_set(vlantrunkportinjoins.yfilter)) leaf_name_data.push_back(vlantrunkportinjoins.get_name_leafdata());
    if (vlantrunkportmanagementdomain.is_set || is_set(vlantrunkportmanagementdomain.yfilter)) leaf_name_data.push_back(vlantrunkportmanagementdomain.get_name_leafdata());
    if (vlantrunkportnativevlan.is_set || is_set(vlantrunkportnativevlan.yfilter)) leaf_name_data.push_back(vlantrunkportnativevlan.get_name_leafdata());
    if (vlantrunkportoldadverts.is_set || is_set(vlantrunkportoldadverts.yfilter)) leaf_name_data.push_back(vlantrunkportoldadverts.get_name_leafdata());
    if (vlantrunkportoutjoins.is_set || is_set(vlantrunkportoutjoins.yfilter)) leaf_name_data.push_back(vlantrunkportoutjoins.get_name_leafdata());
    if (vlantrunkportrowstatus.is_set || is_set(vlantrunkportrowstatus.yfilter)) leaf_name_data.push_back(vlantrunkportrowstatus.get_name_leafdata());
    if (vlantrunkportvlansactivefirst2k.is_set || is_set(vlantrunkportvlansactivefirst2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansactivefirst2k.get_name_leafdata());
    if (vlantrunkportvlansactivesecond2k.is_set || is_set(vlantrunkportvlansactivesecond2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansactivesecond2k.get_name_leafdata());
    if (vlantrunkportvlansenabled.is_set || is_set(vlantrunkportvlansenabled.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled.get_name_leafdata());
    if (vlantrunkportvlansenabled2k.is_set || is_set(vlantrunkportvlansenabled2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled2k.get_name_leafdata());
    if (vlantrunkportvlansenabled3k.is_set || is_set(vlantrunkportvlansenabled3k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled3k.get_name_leafdata());
    if (vlantrunkportvlansenabled4k.is_set || is_set(vlantrunkportvlansenabled4k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansenabled4k.get_name_leafdata());
    if (vlantrunkportvlanspruningeligible.is_set || is_set(vlantrunkportvlanspruningeligible.yfilter)) leaf_name_data.push_back(vlantrunkportvlanspruningeligible.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined.is_set || is_set(vlantrunkportvlansrcvjoined.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined2k.is_set || is_set(vlantrunkportvlansrcvjoined2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined2k.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined3k.is_set || is_set(vlantrunkportvlansrcvjoined3k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined3k.get_name_leafdata());
    if (vlantrunkportvlansrcvjoined4k.is_set || is_set(vlantrunkportvlansrcvjoined4k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansrcvjoined4k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined.is_set || is_set(vlantrunkportvlansxmitjoined.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined2k.is_set || is_set(vlantrunkportvlansxmitjoined2k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined2k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined3k.is_set || is_set(vlantrunkportvlansxmitjoined3k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined3k.get_name_leafdata());
    if (vlantrunkportvlansxmitjoined4k.is_set || is_set(vlantrunkportvlansxmitjoined4k.yfilter)) leaf_name_data.push_back(vlantrunkportvlansxmitjoined4k.get_name_leafdata());
    if (vlantrunkportvtpenabled.is_set || is_set(vlantrunkportvtpenabled.yfilter)) leaf_name_data.push_back(vlantrunkportvtpenabled.get_name_leafdata());
    if (vtpvlanspruningeligible2k.is_set || is_set(vtpvlanspruningeligible2k.yfilter)) leaf_name_data.push_back(vtpvlanspruningeligible2k.get_name_leafdata());
    if (vtpvlanspruningeligible3k.is_set || is_set(vtpvlanspruningeligible3k.yfilter)) leaf_name_data.push_back(vtpvlanspruningeligible3k.get_name_leafdata());
    if (vtpvlanspruningeligible4k.is_set || is_set(vtpvlanspruningeligible4k.yfilter)) leaf_name_data.push_back(vtpvlanspruningeligible4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanTrunkPortIfIndex")
    {
        vlantrunkportifindex = value;
        vlantrunkportifindex.value_namespace = name_space;
        vlantrunkportifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPreferredMISTPInstancesMap")
    {
        stpxpreferredmistpinstancesmap = value;
        stpxpreferredmistpinstancesmap.value_namespace = name_space;
        stpxpreferredmistpinstancesmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPreferredMSTInstancesMap")
    {
        stpxpreferredmstinstancesmap = value;
        stpxpreferredmstinstancesmap.value_namespace = name_space;
        stpxpreferredmstinstancesmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPreferredVlansMap")
    {
        stpxpreferredvlansmap = value;
        stpxpreferredvlansmap.value_namespace = name_space;
        stpxpreferredvlansmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPreferredVlansMap2k")
    {
        stpxpreferredvlansmap2k = value;
        stpxpreferredvlansmap2k.value_namespace = name_space;
        stpxpreferredvlansmap2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPreferredVlansMap3k")
    {
        stpxpreferredvlansmap3k = value;
        stpxpreferredvlansmap3k.value_namespace = name_space;
        stpxpreferredvlansmap3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPreferredVlansMap4k")
    {
        stpxpreferredvlansmap4k = value;
        stpxpreferredvlansmap4k.value_namespace = name_space;
        stpxpreferredvlansmap4k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortDot1qTunnel")
    {
        vlantrunkportdot1qtunnel = value;
        vlantrunkportdot1qtunnel.value_namespace = name_space;
        vlantrunkportdot1qtunnel.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlanTrunkPortEncapsulationOperType")
    {
        vlantrunkportencapsulationopertype = value;
        vlantrunkportencapsulationopertype.value_namespace = name_space;
        vlantrunkportencapsulationopertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortEncapsulationType")
    {
        vlantrunkportencapsulationtype = value;
        vlantrunkportencapsulationtype.value_namespace = name_space;
        vlantrunkportencapsulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortInJoins")
    {
        vlantrunkportinjoins = value;
        vlantrunkportinjoins.value_namespace = name_space;
        vlantrunkportinjoins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortManagementDomain")
    {
        vlantrunkportmanagementdomain = value;
        vlantrunkportmanagementdomain.value_namespace = name_space;
        vlantrunkportmanagementdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortNativeVlan")
    {
        vlantrunkportnativevlan = value;
        vlantrunkportnativevlan.value_namespace = name_space;
        vlantrunkportnativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortOldAdverts")
    {
        vlantrunkportoldadverts = value;
        vlantrunkportoldadverts.value_namespace = name_space;
        vlantrunkportoldadverts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortOutJoins")
    {
        vlantrunkportoutjoins = value;
        vlantrunkportoutjoins.value_namespace = name_space;
        vlantrunkportoutjoins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortRowStatus")
    {
        vlantrunkportrowstatus = value;
        vlantrunkportrowstatus.value_namespace = name_space;
        vlantrunkportrowstatus.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlanTrunkPortVlansEnabled")
    {
        vlantrunkportvlansenabled = value;
        vlantrunkportvlansenabled.value_namespace = name_space;
        vlantrunkportvlansenabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlanTrunkPortVlansPruningEligible")
    {
        vlantrunkportvlanspruningeligible = value;
        vlantrunkportvlanspruningeligible.value_namespace = name_space;
        vlantrunkportvlanspruningeligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined")
    {
        vlantrunkportvlansrcvjoined = value;
        vlantrunkportvlansrcvjoined.value_namespace = name_space;
        vlantrunkportvlansrcvjoined.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlanTrunkPortVlansXmitJoined")
    {
        vlantrunkportvlansxmitjoined = value;
        vlantrunkportvlansxmitjoined.value_namespace = name_space;
        vlantrunkportvlansxmitjoined.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlanTrunkPortVtpEnabled")
    {
        vlantrunkportvtpenabled = value;
        vlantrunkportvtpenabled.value_namespace = name_space;
        vlantrunkportvtpenabled.value_namespace_prefix = name_space_prefix;
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
}

void CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanTrunkPortIfIndex")
    {
        vlantrunkportifindex.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredMISTPInstancesMap")
    {
        stpxpreferredmistpinstancesmap.yfilter = yfilter;
    }
    if(value_path == "stpxPreferredMSTInstancesMap")
    {
        stpxpreferredmstinstancesmap.yfilter = yfilter;
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
    if(value_path == "vlanTrunkPortDot1qTunnel")
    {
        vlantrunkportdot1qtunnel.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortDynamicState")
    {
        vlantrunkportdynamicstate.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortDynamicStatus")
    {
        vlantrunkportdynamicstatus.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortEncapsulationOperType")
    {
        vlantrunkportencapsulationopertype.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortEncapsulationType")
    {
        vlantrunkportencapsulationtype.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortInJoins")
    {
        vlantrunkportinjoins.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortManagementDomain")
    {
        vlantrunkportmanagementdomain.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortNativeVlan")
    {
        vlantrunkportnativevlan.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortOldAdverts")
    {
        vlantrunkportoldadverts.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortOutJoins")
    {
        vlantrunkportoutjoins.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortRowStatus")
    {
        vlantrunkportrowstatus.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansActiveFirst2k")
    {
        vlantrunkportvlansactivefirst2k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansActiveSecond2k")
    {
        vlantrunkportvlansactivesecond2k.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansEnabled")
    {
        vlantrunkportvlansenabled.yfilter = yfilter;
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
    if(value_path == "vlanTrunkPortVlansPruningEligible")
    {
        vlantrunkportvlanspruningeligible.yfilter = yfilter;
    }
    if(value_path == "vlanTrunkPortVlansRcvJoined")
    {
        vlantrunkportvlansrcvjoined.yfilter = yfilter;
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
    if(value_path == "vlanTrunkPortVlansXmitJoined")
    {
        vlantrunkportvlansxmitjoined.yfilter = yfilter;
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
    if(value_path == "vlanTrunkPortVtpEnabled")
    {
        vlantrunkportvtpenabled.yfilter = yfilter;
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
}

bool CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanTrunkPortIfIndex" || name == "stpxPreferredMISTPInstancesMap" || name == "stpxPreferredMSTInstancesMap" || name == "stpxPreferredVlansMap" || name == "stpxPreferredVlansMap2k" || name == "stpxPreferredVlansMap3k" || name == "stpxPreferredVlansMap4k" || name == "vlanTrunkPortDot1qTunnel" || name == "vlanTrunkPortDynamicState" || name == "vlanTrunkPortDynamicStatus" || name == "vlanTrunkPortEncapsulationOperType" || name == "vlanTrunkPortEncapsulationType" || name == "vlanTrunkPortInJoins" || name == "vlanTrunkPortManagementDomain" || name == "vlanTrunkPortNativeVlan" || name == "vlanTrunkPortOldAdverts" || name == "vlanTrunkPortOutJoins" || name == "vlanTrunkPortRowStatus" || name == "vlanTrunkPortVlansActiveFirst2k" || name == "vlanTrunkPortVlansActiveSecond2k" || name == "vlanTrunkPortVlansEnabled" || name == "vlanTrunkPortVlansEnabled2k" || name == "vlanTrunkPortVlansEnabled3k" || name == "vlanTrunkPortVlansEnabled4k" || name == "vlanTrunkPortVlansPruningEligible" || name == "vlanTrunkPortVlansRcvJoined" || name == "vlanTrunkPortVlansRcvJoined2k" || name == "vlanTrunkPortVlansRcvJoined3k" || name == "vlanTrunkPortVlansRcvJoined4k" || name == "vlanTrunkPortVlansXmitJoined" || name == "vlanTrunkPortVlansXmitJoined2k" || name == "vlanTrunkPortVlansXmitJoined3k" || name == "vlanTrunkPortVlansXmitJoined4k" || name == "vlanTrunkPortVtpEnabled" || name == "vtpVlansPruningEligible2k" || name == "vtpVlansPruningEligible3k" || name == "vtpVlansPruningEligible4k")
        return true;
    return false;
}

CISCOVTPMIB::Vtpauthenticationtable::Vtpauthenticationtable()
{

    yang_name = "vtpAuthenticationTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpauthenticationtable::~Vtpauthenticationtable()
{
}

bool CISCOVTPMIB::Vtpauthenticationtable::has_data() const
{
    for (std::size_t index=0; index<vtpauthentry.size(); index++)
    {
        if(vtpauthentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpauthenticationtable::has_operation() const
{
    for (std::size_t index=0; index<vtpauthentry.size(); index++)
    {
        if(vtpauthentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpauthenticationtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpauthenticationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpAuthenticationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpauthenticationtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpauthenticationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry>();
        c->parent = this;
        vtpauthentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpauthenticationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpauthentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpauthenticationtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpauthenticationtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpauthenticationtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpAuthEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::Vtpauthentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpauthpassword{YType::str, "vtpAuthPassword"},
    vtpauthpasswordtype{YType::enumeration, "vtpAuthPasswordType"},
    vtpauthsecretkey{YType::str, "vtpAuthSecretKey"}
{

    yang_name = "vtpAuthEntry"; yang_parent_name = "vtpAuthenticationTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::~Vtpauthentry()
{
}

bool CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpauthpassword.is_set
	|| vtpauthpasswordtype.is_set
	|| vtpauthsecretkey.is_set;
}

bool CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpauthpassword.yfilter)
	|| ydk::is_set(vtpauthpasswordtype.yfilter)
	|| ydk::is_set(vtpauthsecretkey.yfilter);
}

std::string CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpAuthenticationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpAuthEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpauthpassword.is_set || is_set(vtpauthpassword.yfilter)) leaf_name_data.push_back(vtpauthpassword.get_name_leafdata());
    if (vtpauthpasswordtype.is_set || is_set(vtpauthpasswordtype.yfilter)) leaf_name_data.push_back(vtpauthpasswordtype.get_name_leafdata());
    if (vtpauthsecretkey.is_set || is_set(vtpauthsecretkey.yfilter)) leaf_name_data.push_back(vtpauthsecretkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpAuthPassword" || name == "vtpAuthPasswordType" || name == "vtpAuthSecretKey")
        return true;
    return false;
}

CISCOVTPMIB::Vtpdatabasetable::Vtpdatabasetable()
{

    yang_name = "vtpDatabaseTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpdatabasetable::~Vtpdatabasetable()
{
}

bool CISCOVTPMIB::Vtpdatabasetable::has_data() const
{
    for (std::size_t index=0; index<vtpdatabaseentry.size(); index++)
    {
        if(vtpdatabaseentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpdatabasetable::has_operation() const
{
    for (std::size_t index=0; index<vtpdatabaseentry.size(); index++)
    {
        if(vtpdatabaseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpdatabasetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpdatabasetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDatabaseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpdatabasetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpdatabasetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry>();
        c->parent = this;
        vtpdatabaseentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpdatabasetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpdatabaseentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpdatabasetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpdatabasetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpdatabasetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpDatabaseEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaseentry()
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

    yang_name = "vtpDatabaseEntry"; yang_parent_name = "vtpDatabaseTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::~Vtpdatabaseentry()
{
}

bool CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::has_data() const
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

bool CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpdatabaseindex.yfilter)
	|| ydk::is_set(vtpdatabaselocalmode.yfilter)
	|| ydk::is_set(vtpdatabasename.yfilter)
	|| ydk::is_set(vtpdatabaseprimaryserver.yfilter)
	|| ydk::is_set(vtpdatabaseprimaryserverid.yfilter)
	|| ydk::is_set(vtpdatabaserevnumber.yfilter)
	|| ydk::is_set(vtpdatabasetakeoverpassword.yfilter)
	|| ydk::is_set(vtpdatabasetakeoverprimary.yfilter);
}

std::string CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDatabaseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDatabaseEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpDatabaseIndex='" <<vtpdatabaseindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdatabaseindex.is_set || is_set(vtpdatabaseindex.yfilter)) leaf_name_data.push_back(vtpdatabaseindex.get_name_leafdata());
    if (vtpdatabaselocalmode.is_set || is_set(vtpdatabaselocalmode.yfilter)) leaf_name_data.push_back(vtpdatabaselocalmode.get_name_leafdata());
    if (vtpdatabasename.is_set || is_set(vtpdatabasename.yfilter)) leaf_name_data.push_back(vtpdatabasename.get_name_leafdata());
    if (vtpdatabaseprimaryserver.is_set || is_set(vtpdatabaseprimaryserver.yfilter)) leaf_name_data.push_back(vtpdatabaseprimaryserver.get_name_leafdata());
    if (vtpdatabaseprimaryserverid.is_set || is_set(vtpdatabaseprimaryserverid.yfilter)) leaf_name_data.push_back(vtpdatabaseprimaryserverid.get_name_leafdata());
    if (vtpdatabaserevnumber.is_set || is_set(vtpdatabaserevnumber.yfilter)) leaf_name_data.push_back(vtpdatabaserevnumber.get_name_leafdata());
    if (vtpdatabasetakeoverpassword.is_set || is_set(vtpdatabasetakeoverpassword.yfilter)) leaf_name_data.push_back(vtpdatabasetakeoverpassword.get_name_leafdata());
    if (vtpdatabasetakeoverprimary.is_set || is_set(vtpdatabasetakeoverprimary.yfilter)) leaf_name_data.push_back(vtpdatabasetakeoverprimary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vtpDatabaseLocalMode")
    {
        vtpdatabaselocalmode = value;
        vtpdatabaselocalmode.value_namespace = name_space;
        vtpdatabaselocalmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseName")
    {
        vtpdatabasename = value;
        vtpdatabasename.value_namespace = name_space;
        vtpdatabasename.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vtpDatabaseRevNumber")
    {
        vtpdatabaserevnumber = value;
        vtpdatabaserevnumber.value_namespace = name_space;
        vtpdatabaserevnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseTakeOverPassword")
    {
        vtpdatabasetakeoverpassword = value;
        vtpdatabasetakeoverpassword.value_namespace = name_space;
        vtpdatabasetakeoverpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDatabaseTakeOverPrimary")
    {
        vtpdatabasetakeoverprimary = value;
        vtpdatabasetakeoverprimary.value_namespace = name_space;
        vtpdatabasetakeoverprimary.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseIndex")
    {
        vtpdatabaseindex.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseLocalMode")
    {
        vtpdatabaselocalmode.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseName")
    {
        vtpdatabasename.yfilter = yfilter;
    }
    if(value_path == "vtpDatabasePrimaryServer")
    {
        vtpdatabaseprimaryserver.yfilter = yfilter;
    }
    if(value_path == "vtpDatabasePrimaryServerId")
    {
        vtpdatabaseprimaryserverid.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseRevNumber")
    {
        vtpdatabaserevnumber.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseTakeOverPassword")
    {
        vtpdatabasetakeoverpassword.yfilter = yfilter;
    }
    if(value_path == "vtpDatabaseTakeOverPrimary")
    {
        vtpdatabasetakeoverprimary.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpDatabaseIndex" || name == "vtpDatabaseLocalMode" || name == "vtpDatabaseName" || name == "vtpDatabasePrimaryServer" || name == "vtpDatabasePrimaryServerId" || name == "vtpDatabaseRevNumber" || name == "vtpDatabaseTakeOverPassword" || name == "vtpDatabaseTakeOverPrimary")
        return true;
    return false;
}

CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresulttable()
{

    yang_name = "vtpDiscoverResultTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpdiscoverresulttable::~Vtpdiscoverresulttable()
{
}

bool CISCOVTPMIB::Vtpdiscoverresulttable::has_data() const
{
    for (std::size_t index=0; index<vtpdiscoverresultentry.size(); index++)
    {
        if(vtpdiscoverresultentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpdiscoverresulttable::has_operation() const
{
    for (std::size_t index=0; index<vtpdiscoverresultentry.size(); index++)
    {
        if(vtpdiscoverresultentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpdiscoverresulttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpdiscoverresulttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverResultTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpdiscoverresulttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpdiscoverresulttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry>();
        c->parent = this;
        vtpdiscoverresultentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpdiscoverresulttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpdiscoverresultentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpdiscoverresulttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpdiscoverresulttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpdiscoverresulttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpDiscoverResultEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::Vtpdiscoverresultentry()
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

    yang_name = "vtpDiscoverResultEntry"; yang_parent_name = "vtpDiscoverResultTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::~Vtpdiscoverresultentry()
{
}

bool CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::has_data() const
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

bool CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpdiscoverresultindex.yfilter)
	|| ydk::is_set(vtpdiscoverresultconflicting.yfilter)
	|| ydk::is_set(vtpdiscoverresultdatabasename.yfilter)
	|| ydk::is_set(vtpdiscoverresultdeviceid.yfilter)
	|| ydk::is_set(vtpdiscoverresultprimaryserver.yfilter)
	|| ydk::is_set(vtpdiscoverresultrevnumber.yfilter)
	|| ydk::is_set(vtpdiscoverresultsystemname.yfilter);
}

std::string CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDiscoverResultTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverResultEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpDiscoverResultIndex='" <<vtpdiscoverresultindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdiscoverresultindex.is_set || is_set(vtpdiscoverresultindex.yfilter)) leaf_name_data.push_back(vtpdiscoverresultindex.get_name_leafdata());
    if (vtpdiscoverresultconflicting.is_set || is_set(vtpdiscoverresultconflicting.yfilter)) leaf_name_data.push_back(vtpdiscoverresultconflicting.get_name_leafdata());
    if (vtpdiscoverresultdatabasename.is_set || is_set(vtpdiscoverresultdatabasename.yfilter)) leaf_name_data.push_back(vtpdiscoverresultdatabasename.get_name_leafdata());
    if (vtpdiscoverresultdeviceid.is_set || is_set(vtpdiscoverresultdeviceid.yfilter)) leaf_name_data.push_back(vtpdiscoverresultdeviceid.get_name_leafdata());
    if (vtpdiscoverresultprimaryserver.is_set || is_set(vtpdiscoverresultprimaryserver.yfilter)) leaf_name_data.push_back(vtpdiscoverresultprimaryserver.get_name_leafdata());
    if (vtpdiscoverresultrevnumber.is_set || is_set(vtpdiscoverresultrevnumber.yfilter)) leaf_name_data.push_back(vtpdiscoverresultrevnumber.get_name_leafdata());
    if (vtpdiscoverresultsystemname.is_set || is_set(vtpdiscoverresultsystemname.yfilter)) leaf_name_data.push_back(vtpdiscoverresultsystemname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vtpDiscoverResultConflicting")
    {
        vtpdiscoverresultconflicting = value;
        vtpdiscoverresultconflicting.value_namespace = name_space;
        vtpdiscoverresultconflicting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpDiscoverResultDatabaseName")
    {
        vtpdiscoverresultdatabasename = value;
        vtpdiscoverresultdatabasename.value_namespace = name_space;
        vtpdiscoverresultdatabasename.value_namespace_prefix = name_space_prefix;
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

void CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultIndex")
    {
        vtpdiscoverresultindex.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultConflicting")
    {
        vtpdiscoverresultconflicting.yfilter = yfilter;
    }
    if(value_path == "vtpDiscoverResultDatabaseName")
    {
        vtpdiscoverresultdatabasename.yfilter = yfilter;
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

bool CISCOVTPMIB::Vtpdiscoverresulttable::Vtpdiscoverresultentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpDiscoverResultIndex" || name == "vtpDiscoverResultConflicting" || name == "vtpDiscoverResultDatabaseName" || name == "vtpDiscoverResultDeviceId" || name == "vtpDiscoverResultPrimaryServer" || name == "vtpDiscoverResultRevNumber" || name == "vtpDiscoverResultSystemName")
        return true;
    return false;
}

CISCOVTPMIB::Vtpdiscovertable::Vtpdiscovertable()
{

    yang_name = "vtpDiscoverTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpdiscovertable::~Vtpdiscovertable()
{
}

bool CISCOVTPMIB::Vtpdiscovertable::has_data() const
{
    for (std::size_t index=0; index<vtpdiscoverentry.size(); index++)
    {
        if(vtpdiscoverentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpdiscovertable::has_operation() const
{
    for (std::size_t index=0; index<vtpdiscoverentry.size(); index++)
    {
        if(vtpdiscoverentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpdiscovertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpdiscovertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpdiscovertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpdiscovertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry>();
        c->parent = this;
        vtpdiscoverentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpdiscovertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpdiscoverentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpdiscovertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpdiscovertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpdiscovertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpDiscoverEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpdiscoveraction{YType::enumeration, "vtpDiscoverAction"},
    vtpdiscoverstatus{YType::enumeration, "vtpDiscoverStatus"},
    vtplastdiscovertime{YType::uint32, "vtpLastDiscoverTime"}
{

    yang_name = "vtpDiscoverEntry"; yang_parent_name = "vtpDiscoverTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::~Vtpdiscoverentry()
{
}

bool CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpdiscoveraction.is_set
	|| vtpdiscoverstatus.is_set
	|| vtplastdiscovertime.is_set;
}

bool CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpdiscoveraction.yfilter)
	|| ydk::is_set(vtpdiscoverstatus.yfilter)
	|| ydk::is_set(vtplastdiscovertime.yfilter);
}

std::string CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpDiscoverTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpDiscoverEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpdiscoveraction.is_set || is_set(vtpdiscoveraction.yfilter)) leaf_name_data.push_back(vtpdiscoveraction.get_name_leafdata());
    if (vtpdiscoverstatus.is_set || is_set(vtpdiscoverstatus.yfilter)) leaf_name_data.push_back(vtpdiscoverstatus.get_name_leafdata());
    if (vtplastdiscovertime.is_set || is_set(vtplastdiscovertime.yfilter)) leaf_name_data.push_back(vtplastdiscovertime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpDiscoverAction" || name == "vtpDiscoverStatus" || name == "vtpLastDiscoverTime")
        return true;
    return false;
}

CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlantable()
{

    yang_name = "vtpInternalVlanTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpinternalvlantable::~Vtpinternalvlantable()
{
}

bool CISCOVTPMIB::Vtpinternalvlantable::has_data() const
{
    for (std::size_t index=0; index<vtpinternalvlanentry.size(); index++)
    {
        if(vtpinternalvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpinternalvlantable::has_operation() const
{
    for (std::size_t index=0; index<vtpinternalvlanentry.size(); index++)
    {
        if(vtpinternalvlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpinternalvlantable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpinternalvlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpInternalVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpinternalvlantable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpinternalvlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry>();
        c->parent = this;
        vtpinternalvlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpinternalvlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpinternalvlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpinternalvlantable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpinternalvlantable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpinternalvlantable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpInternalVlanEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::Vtpinternalvlanentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::str, "vtpVlanIndex"},
    vtpinternalvlanowner{YType::str, "vtpInternalVlanOwner"}
{

    yang_name = "vtpInternalVlanEntry"; yang_parent_name = "vtpInternalVlanTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::~Vtpinternalvlanentry()
{
}

bool CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| vtpinternalvlanowner.is_set;
}

bool CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlanindex.yfilter)
	|| ydk::is_set(vtpinternalvlanowner.yfilter);
}

std::string CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpInternalVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpInternalVlanEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanIndex='" <<vtpvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.yfilter)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (vtpinternalvlanowner.is_set || is_set(vtpinternalvlanowner.yfilter)) leaf_name_data.push_back(vtpinternalvlanowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVTPMIB::Vtpinternalvlantable::Vtpinternalvlanentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanIndex" || name == "vtpInternalVlanOwner")
        return true;
    return false;
}

CISCOVTPMIB::Vtpstatus::Vtpstatus()
    :
    vtpmaxvlanstorage{YType::int32, "vtpMaxVlanStorage"},
    vtpnotificationsenabled{YType::boolean, "vtpNotificationsEnabled"},
    vtpversion{YType::enumeration, "vtpVersion"},
    vtpvlancreatednotifenabled{YType::boolean, "vtpVlanCreatedNotifEnabled"},
    vtpvlandeletednotifenabled{YType::boolean, "vtpVlanDeletedNotifEnabled"}
{

    yang_name = "vtpStatus"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpstatus::~Vtpstatus()
{
}

bool CISCOVTPMIB::Vtpstatus::has_data() const
{
    return vtpmaxvlanstorage.is_set
	|| vtpnotificationsenabled.is_set
	|| vtpversion.is_set
	|| vtpvlancreatednotifenabled.is_set
	|| vtpvlandeletednotifenabled.is_set;
}

bool CISCOVTPMIB::Vtpstatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtpmaxvlanstorage.yfilter)
	|| ydk::is_set(vtpnotificationsenabled.yfilter)
	|| ydk::is_set(vtpversion.yfilter)
	|| ydk::is_set(vtpvlancreatednotifenabled.yfilter)
	|| ydk::is_set(vtpvlandeletednotifenabled.yfilter);
}

std::string CISCOVTPMIB::Vtpstatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpstatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpStatus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpstatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtpmaxvlanstorage.is_set || is_set(vtpmaxvlanstorage.yfilter)) leaf_name_data.push_back(vtpmaxvlanstorage.get_name_leafdata());
    if (vtpnotificationsenabled.is_set || is_set(vtpnotificationsenabled.yfilter)) leaf_name_data.push_back(vtpnotificationsenabled.get_name_leafdata());
    if (vtpversion.is_set || is_set(vtpversion.yfilter)) leaf_name_data.push_back(vtpversion.get_name_leafdata());
    if (vtpvlancreatednotifenabled.is_set || is_set(vtpvlancreatednotifenabled.yfilter)) leaf_name_data.push_back(vtpvlancreatednotifenabled.get_name_leafdata());
    if (vtpvlandeletednotifenabled.is_set || is_set(vtpvlandeletednotifenabled.yfilter)) leaf_name_data.push_back(vtpvlandeletednotifenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpstatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpstatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpstatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vtpVersion")
    {
        vtpversion = value;
        vtpversion.value_namespace = name_space;
        vtpversion.value_namespace_prefix = name_space_prefix;
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

void CISCOVTPMIB::Vtpstatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtpMaxVlanStorage")
    {
        vtpmaxvlanstorage.yfilter = yfilter;
    }
    if(value_path == "vtpNotificationsEnabled")
    {
        vtpnotificationsenabled.yfilter = yfilter;
    }
    if(value_path == "vtpVersion")
    {
        vtpversion.yfilter = yfilter;
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

bool CISCOVTPMIB::Vtpstatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpMaxVlanStorage" || name == "vtpNotificationsEnabled" || name == "vtpVersion" || name == "vtpVlanCreatedNotifEnabled" || name == "vtpVlanDeletedNotifEnabled")
        return true;
    return false;
}

CISCOVTPMIB::Vtpvlanedittable::Vtpvlanedittable()
{

    yang_name = "vtpVlanEditTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpvlanedittable::~Vtpvlanedittable()
{
}

bool CISCOVTPMIB::Vtpvlanedittable::has_data() const
{
    for (std::size_t index=0; index<vtpvlaneditentry.size(); index++)
    {
        if(vtpvlaneditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpvlanedittable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlaneditentry.size(); index++)
    {
        if(vtpvlaneditentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpvlanedittable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpvlanedittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEditTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpvlanedittable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpvlanedittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry>();
        c->parent = this;
        vtpvlaneditentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpvlanedittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpvlaneditentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpvlanedittable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpvlanedittable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpvlanedittable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpVlanEditEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditentry()
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

    yang_name = "vtpVlanEditEntry"; yang_parent_name = "vtpVlanEditTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::~Vtpvlaneditentry()
{
}

bool CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::has_data() const
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

bool CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlaneditindex.yfilter)
	|| ydk::is_set(stpxvlanmistpinstmapeditinstindex.yfilter)
	|| ydk::is_set(vtpvlaneditarehopcount.yfilter)
	|| ydk::is_set(vtpvlaneditbridgenumber.yfilter)
	|| ydk::is_set(vtpvlaneditbridgetype.yfilter)
	|| ydk::is_set(vtpvlaneditdot10said.yfilter)
	|| ydk::is_set(vtpvlaneditiscrfbackup.yfilter)
	|| ydk::is_set(vtpvlaneditmtu.yfilter)
	|| ydk::is_set(vtpvlaneditname.yfilter)
	|| ydk::is_set(vtpvlaneditparentvlan.yfilter)
	|| ydk::is_set(vtpvlaneditringnumber.yfilter)
	|| ydk::is_set(vtpvlaneditrowstatus.yfilter)
	|| ydk::is_set(vtpvlaneditstate.yfilter)
	|| ydk::is_set(vtpvlaneditstehopcount.yfilter)
	|| ydk::is_set(vtpvlaneditstptype.yfilter)
	|| ydk::is_set(vtpvlanedittranslationalvlan1.yfilter)
	|| ydk::is_set(vtpvlanedittranslationalvlan2.yfilter)
	|| ydk::is_set(vtpvlanedittype.yfilter)
	|| ydk::is_set(vtpvlanedittypeext.yfilter)
	|| ydk::is_set(vtpvlanedittypeext2.yfilter);
}

std::string CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanEditTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEditEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanEditIndex='" <<vtpvlaneditindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlaneditindex.is_set || is_set(vtpvlaneditindex.yfilter)) leaf_name_data.push_back(vtpvlaneditindex.get_name_leafdata());
    if (stpxvlanmistpinstmapeditinstindex.is_set || is_set(stpxvlanmistpinstmapeditinstindex.yfilter)) leaf_name_data.push_back(stpxvlanmistpinstmapeditinstindex.get_name_leafdata());
    if (vtpvlaneditarehopcount.is_set || is_set(vtpvlaneditarehopcount.yfilter)) leaf_name_data.push_back(vtpvlaneditarehopcount.get_name_leafdata());
    if (vtpvlaneditbridgenumber.is_set || is_set(vtpvlaneditbridgenumber.yfilter)) leaf_name_data.push_back(vtpvlaneditbridgenumber.get_name_leafdata());
    if (vtpvlaneditbridgetype.is_set || is_set(vtpvlaneditbridgetype.yfilter)) leaf_name_data.push_back(vtpvlaneditbridgetype.get_name_leafdata());
    if (vtpvlaneditdot10said.is_set || is_set(vtpvlaneditdot10said.yfilter)) leaf_name_data.push_back(vtpvlaneditdot10said.get_name_leafdata());
    if (vtpvlaneditiscrfbackup.is_set || is_set(vtpvlaneditiscrfbackup.yfilter)) leaf_name_data.push_back(vtpvlaneditiscrfbackup.get_name_leafdata());
    if (vtpvlaneditmtu.is_set || is_set(vtpvlaneditmtu.yfilter)) leaf_name_data.push_back(vtpvlaneditmtu.get_name_leafdata());
    if (vtpvlaneditname.is_set || is_set(vtpvlaneditname.yfilter)) leaf_name_data.push_back(vtpvlaneditname.get_name_leafdata());
    if (vtpvlaneditparentvlan.is_set || is_set(vtpvlaneditparentvlan.yfilter)) leaf_name_data.push_back(vtpvlaneditparentvlan.get_name_leafdata());
    if (vtpvlaneditringnumber.is_set || is_set(vtpvlaneditringnumber.yfilter)) leaf_name_data.push_back(vtpvlaneditringnumber.get_name_leafdata());
    if (vtpvlaneditrowstatus.is_set || is_set(vtpvlaneditrowstatus.yfilter)) leaf_name_data.push_back(vtpvlaneditrowstatus.get_name_leafdata());
    if (vtpvlaneditstate.is_set || is_set(vtpvlaneditstate.yfilter)) leaf_name_data.push_back(vtpvlaneditstate.get_name_leafdata());
    if (vtpvlaneditstehopcount.is_set || is_set(vtpvlaneditstehopcount.yfilter)) leaf_name_data.push_back(vtpvlaneditstehopcount.get_name_leafdata());
    if (vtpvlaneditstptype.is_set || is_set(vtpvlaneditstptype.yfilter)) leaf_name_data.push_back(vtpvlaneditstptype.get_name_leafdata());
    if (vtpvlanedittranslationalvlan1.is_set || is_set(vtpvlanedittranslationalvlan1.yfilter)) leaf_name_data.push_back(vtpvlanedittranslationalvlan1.get_name_leafdata());
    if (vtpvlanedittranslationalvlan2.is_set || is_set(vtpvlanedittranslationalvlan2.yfilter)) leaf_name_data.push_back(vtpvlanedittranslationalvlan2.get_name_leafdata());
    if (vtpvlanedittype.is_set || is_set(vtpvlanedittype.yfilter)) leaf_name_data.push_back(vtpvlanedittype.get_name_leafdata());
    if (vtpvlanedittypeext.is_set || is_set(vtpvlanedittypeext.yfilter)) leaf_name_data.push_back(vtpvlanedittypeext.get_name_leafdata());
    if (vtpvlanedittypeext2.is_set || is_set(vtpvlanedittypeext2.yfilter)) leaf_name_data.push_back(vtpvlanedittypeext2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "stpxVlanMISTPInstMapEditInstIndex")
    {
        stpxvlanmistpinstmapeditinstindex = value;
        stpxvlanmistpinstmapeditinstindex.value_namespace = name_space;
        stpxvlanmistpinstmapeditinstindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditAreHopCount")
    {
        vtpvlaneditarehopcount = value;
        vtpvlaneditarehopcount.value_namespace = name_space;
        vtpvlaneditarehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditBridgeNumber")
    {
        vtpvlaneditbridgenumber = value;
        vtpvlaneditbridgenumber.value_namespace = name_space;
        vtpvlaneditbridgenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditBridgeType")
    {
        vtpvlaneditbridgetype = value;
        vtpvlaneditbridgetype.value_namespace = name_space;
        vtpvlaneditbridgetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditDot10Said")
    {
        vtpvlaneditdot10said = value;
        vtpvlaneditdot10said.value_namespace = name_space;
        vtpvlaneditdot10said.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditIsCRFBackup")
    {
        vtpvlaneditiscrfbackup = value;
        vtpvlaneditiscrfbackup.value_namespace = name_space;
        vtpvlaneditiscrfbackup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditMtu")
    {
        vtpvlaneditmtu = value;
        vtpvlaneditmtu.value_namespace = name_space;
        vtpvlaneditmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditName")
    {
        vtpvlaneditname = value;
        vtpvlaneditname.value_namespace = name_space;
        vtpvlaneditname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditParentVlan")
    {
        vtpvlaneditparentvlan = value;
        vtpvlaneditparentvlan.value_namespace = name_space;
        vtpvlaneditparentvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditRingNumber")
    {
        vtpvlaneditringnumber = value;
        vtpvlaneditringnumber.value_namespace = name_space;
        vtpvlaneditringnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditRowStatus")
    {
        vtpvlaneditrowstatus = value;
        vtpvlaneditrowstatus.value_namespace = name_space;
        vtpvlaneditrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditState")
    {
        vtpvlaneditstate = value;
        vtpvlaneditstate.value_namespace = name_space;
        vtpvlaneditstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditSteHopCount")
    {
        vtpvlaneditstehopcount = value;
        vtpvlaneditstehopcount.value_namespace = name_space;
        vtpvlaneditstehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanEditStpType")
    {
        vtpvlaneditstptype = value;
        vtpvlaneditstptype.value_namespace = name_space;
        vtpvlaneditstptype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vtpVlanEditType")
    {
        vtpvlanedittype = value;
        vtpvlanedittype.value_namespace = name_space;
        vtpvlanedittype.value_namespace_prefix = name_space_prefix;
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

void CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditIndex")
    {
        vtpvlaneditindex.yfilter = yfilter;
    }
    if(value_path == "stpxVlanMISTPInstMapEditInstIndex")
    {
        stpxvlanmistpinstmapeditinstindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditAreHopCount")
    {
        vtpvlaneditarehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditBridgeNumber")
    {
        vtpvlaneditbridgenumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditBridgeType")
    {
        vtpvlaneditbridgetype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditDot10Said")
    {
        vtpvlaneditdot10said.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditIsCRFBackup")
    {
        vtpvlaneditiscrfbackup.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditMtu")
    {
        vtpvlaneditmtu.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditName")
    {
        vtpvlaneditname.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditParentVlan")
    {
        vtpvlaneditparentvlan.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditRingNumber")
    {
        vtpvlaneditringnumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditRowStatus")
    {
        vtpvlaneditrowstatus.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditState")
    {
        vtpvlaneditstate.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditSteHopCount")
    {
        vtpvlaneditstehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditStpType")
    {
        vtpvlaneditstptype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTranslationalVlan1")
    {
        vtpvlanedittranslationalvlan1.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTranslationalVlan2")
    {
        vtpvlanedittranslationalvlan2.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditType")
    {
        vtpvlanedittype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTypeExt")
    {
        vtpvlanedittypeext.yfilter = yfilter;
    }
    if(value_path == "vtpVlanEditTypeExt2")
    {
        vtpvlanedittypeext2.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanEditIndex" || name == "stpxVlanMISTPInstMapEditInstIndex" || name == "vtpVlanEditAreHopCount" || name == "vtpVlanEditBridgeNumber" || name == "vtpVlanEditBridgeType" || name == "vtpVlanEditDot10Said" || name == "vtpVlanEditIsCRFBackup" || name == "vtpVlanEditMtu" || name == "vtpVlanEditName" || name == "vtpVlanEditParentVlan" || name == "vtpVlanEditRingNumber" || name == "vtpVlanEditRowStatus" || name == "vtpVlanEditState" || name == "vtpVlanEditSteHopCount" || name == "vtpVlanEditStpType" || name == "vtpVlanEditTranslationalVlan1" || name == "vtpVlanEditTranslationalVlan2" || name == "vtpVlanEditType" || name == "vtpVlanEditTypeExt" || name == "vtpVlanEditTypeExt2")
        return true;
    return false;
}

CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdowntable()
{

    yang_name = "vtpVlanLocalShutdownTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpvlanlocalshutdowntable::~Vtpvlanlocalshutdowntable()
{
}

bool CISCOVTPMIB::Vtpvlanlocalshutdowntable::has_data() const
{
    for (std::size_t index=0; index<vtpvlanlocalshutdownentry.size(); index++)
    {
        if(vtpvlanlocalshutdownentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpvlanlocalshutdowntable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlanlocalshutdownentry.size(); index++)
    {
        if(vtpvlanlocalshutdownentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpvlanlocalshutdowntable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpvlanlocalshutdowntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanLocalShutdownTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpvlanlocalshutdowntable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpvlanlocalshutdowntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry>();
        c->parent = this;
        vtpvlanlocalshutdownentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpvlanlocalshutdowntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpvlanlocalshutdownentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpvlanlocalshutdowntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpvlanlocalshutdowntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpvlanlocalshutdowntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpVlanLocalShutdownEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::Vtpvlanlocalshutdownentry()
    :
    managementdomainindex{YType::str, "managementDomainIndex"},
    vtpvlanindex{YType::str, "vtpVlanIndex"},
    vtpvlanlocalshutdown{YType::enumeration, "vtpVlanLocalShutdown"}
{

    yang_name = "vtpVlanLocalShutdownEntry"; yang_parent_name = "vtpVlanLocalShutdownTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::~Vtpvlanlocalshutdownentry()
{
}

bool CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::has_data() const
{
    return managementdomainindex.is_set
	|| vtpvlanindex.is_set
	|| vtpvlanlocalshutdown.is_set;
}

bool CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlanindex.yfilter)
	|| ydk::is_set(vtpvlanlocalshutdown.yfilter);
}

std::string CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanLocalShutdownTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanLocalShutdownEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanIndex='" <<vtpvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.yfilter)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (vtpvlanlocalshutdown.is_set || is_set(vtpvlanlocalshutdown.yfilter)) leaf_name_data.push_back(vtpvlanlocalshutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanIndex" || name == "vtpVlanLocalShutdown")
        return true;
    return false;
}

CISCOVTPMIB::Vtpvlantable::Vtpvlantable()
{

    yang_name = "vtpVlanTable"; yang_parent_name = "CISCO-VTP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpvlantable::~Vtpvlantable()
{
}

bool CISCOVTPMIB::Vtpvlantable::has_data() const
{
    for (std::size_t index=0; index<vtpvlanentry.size(); index++)
    {
        if(vtpvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVTPMIB::Vtpvlantable::has_operation() const
{
    for (std::size_t index=0; index<vtpvlanentry.size(); index++)
    {
        if(vtpvlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVTPMIB::Vtpvlantable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpvlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpvlantable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpvlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVTPMIB::Vtpvlantable::Vtpvlanentry>();
        c->parent = this;
        vtpvlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpvlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vtpvlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVTPMIB::Vtpvlantable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVTPMIB::Vtpvlantable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVTPMIB::Vtpvlantable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtpVlanEntry")
        return true;
    return false;
}

CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanentry()
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

    yang_name = "vtpVlanEntry"; yang_parent_name = "vtpVlanTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::~Vtpvlanentry()
{
}

bool CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::has_data() const
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

bool CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(managementdomainindex.yfilter)
	|| ydk::is_set(vtpvlanindex.yfilter)
	|| ydk::is_set(stpxvlanmistpinstmapinstindex.yfilter)
	|| ydk::is_set(vtpvlanarehopcount.yfilter)
	|| ydk::is_set(vtpvlanbridgenumber.yfilter)
	|| ydk::is_set(vtpvlanbridgetype.yfilter)
	|| ydk::is_set(vtpvlandot10said.yfilter)
	|| ydk::is_set(vtpvlanifindex.yfilter)
	|| ydk::is_set(vtpvlaniscrfbackup.yfilter)
	|| ydk::is_set(vtpvlanmtu.yfilter)
	|| ydk::is_set(vtpvlanname.yfilter)
	|| ydk::is_set(vtpvlanparentvlan.yfilter)
	|| ydk::is_set(vtpvlanringnumber.yfilter)
	|| ydk::is_set(vtpvlanstate.yfilter)
	|| ydk::is_set(vtpvlanstehopcount.yfilter)
	|| ydk::is_set(vtpvlanstptype.yfilter)
	|| ydk::is_set(vtpvlantranslationalvlan1.yfilter)
	|| ydk::is_set(vtpvlantranslationalvlan2.yfilter)
	|| ydk::is_set(vtpvlantype.yfilter)
	|| ydk::is_set(vtpvlantypeext.yfilter);
}

std::string CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VTP-MIB:CISCO-VTP-MIB/vtpVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtpVlanEntry" <<"[managementDomainIndex='" <<managementdomainindex <<"']" <<"[vtpVlanIndex='" <<vtpvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (managementdomainindex.is_set || is_set(managementdomainindex.yfilter)) leaf_name_data.push_back(managementdomainindex.get_name_leafdata());
    if (vtpvlanindex.is_set || is_set(vtpvlanindex.yfilter)) leaf_name_data.push_back(vtpvlanindex.get_name_leafdata());
    if (stpxvlanmistpinstmapinstindex.is_set || is_set(stpxvlanmistpinstmapinstindex.yfilter)) leaf_name_data.push_back(stpxvlanmistpinstmapinstindex.get_name_leafdata());
    if (vtpvlanarehopcount.is_set || is_set(vtpvlanarehopcount.yfilter)) leaf_name_data.push_back(vtpvlanarehopcount.get_name_leafdata());
    if (vtpvlanbridgenumber.is_set || is_set(vtpvlanbridgenumber.yfilter)) leaf_name_data.push_back(vtpvlanbridgenumber.get_name_leafdata());
    if (vtpvlanbridgetype.is_set || is_set(vtpvlanbridgetype.yfilter)) leaf_name_data.push_back(vtpvlanbridgetype.get_name_leafdata());
    if (vtpvlandot10said.is_set || is_set(vtpvlandot10said.yfilter)) leaf_name_data.push_back(vtpvlandot10said.get_name_leafdata());
    if (vtpvlanifindex.is_set || is_set(vtpvlanifindex.yfilter)) leaf_name_data.push_back(vtpvlanifindex.get_name_leafdata());
    if (vtpvlaniscrfbackup.is_set || is_set(vtpvlaniscrfbackup.yfilter)) leaf_name_data.push_back(vtpvlaniscrfbackup.get_name_leafdata());
    if (vtpvlanmtu.is_set || is_set(vtpvlanmtu.yfilter)) leaf_name_data.push_back(vtpvlanmtu.get_name_leafdata());
    if (vtpvlanname.is_set || is_set(vtpvlanname.yfilter)) leaf_name_data.push_back(vtpvlanname.get_name_leafdata());
    if (vtpvlanparentvlan.is_set || is_set(vtpvlanparentvlan.yfilter)) leaf_name_data.push_back(vtpvlanparentvlan.get_name_leafdata());
    if (vtpvlanringnumber.is_set || is_set(vtpvlanringnumber.yfilter)) leaf_name_data.push_back(vtpvlanringnumber.get_name_leafdata());
    if (vtpvlanstate.is_set || is_set(vtpvlanstate.yfilter)) leaf_name_data.push_back(vtpvlanstate.get_name_leafdata());
    if (vtpvlanstehopcount.is_set || is_set(vtpvlanstehopcount.yfilter)) leaf_name_data.push_back(vtpvlanstehopcount.get_name_leafdata());
    if (vtpvlanstptype.is_set || is_set(vtpvlanstptype.yfilter)) leaf_name_data.push_back(vtpvlanstptype.get_name_leafdata());
    if (vtpvlantranslationalvlan1.is_set || is_set(vtpvlantranslationalvlan1.yfilter)) leaf_name_data.push_back(vtpvlantranslationalvlan1.get_name_leafdata());
    if (vtpvlantranslationalvlan2.is_set || is_set(vtpvlantranslationalvlan2.yfilter)) leaf_name_data.push_back(vtpvlantranslationalvlan2.get_name_leafdata());
    if (vtpvlantype.is_set || is_set(vtpvlantype.yfilter)) leaf_name_data.push_back(vtpvlantype.get_name_leafdata());
    if (vtpvlantypeext.is_set || is_set(vtpvlantypeext.yfilter)) leaf_name_data.push_back(vtpvlantypeext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "stpxVlanMISTPInstMapInstIndex")
    {
        stpxvlanmistpinstmapinstindex = value;
        stpxvlanmistpinstmapinstindex.value_namespace = name_space;
        stpxvlanmistpinstmapinstindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanAreHopCount")
    {
        vtpvlanarehopcount = value;
        vtpvlanarehopcount.value_namespace = name_space;
        vtpvlanarehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanBridgeNumber")
    {
        vtpvlanbridgenumber = value;
        vtpvlanbridgenumber.value_namespace = name_space;
        vtpvlanbridgenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanBridgeType")
    {
        vtpvlanbridgetype = value;
        vtpvlanbridgetype.value_namespace = name_space;
        vtpvlanbridgetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanDot10Said")
    {
        vtpvlandot10said = value;
        vtpvlandot10said.value_namespace = name_space;
        vtpvlandot10said.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanIfIndex")
    {
        vtpvlanifindex = value;
        vtpvlanifindex.value_namespace = name_space;
        vtpvlanifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanIsCRFBackup")
    {
        vtpvlaniscrfbackup = value;
        vtpvlaniscrfbackup.value_namespace = name_space;
        vtpvlaniscrfbackup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanMtu")
    {
        vtpvlanmtu = value;
        vtpvlanmtu.value_namespace = name_space;
        vtpvlanmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanName")
    {
        vtpvlanname = value;
        vtpvlanname.value_namespace = name_space;
        vtpvlanname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanParentVlan")
    {
        vtpvlanparentvlan = value;
        vtpvlanparentvlan.value_namespace = name_space;
        vtpvlanparentvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanRingNumber")
    {
        vtpvlanringnumber = value;
        vtpvlanringnumber.value_namespace = name_space;
        vtpvlanringnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanState")
    {
        vtpvlanstate = value;
        vtpvlanstate.value_namespace = name_space;
        vtpvlanstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanSteHopCount")
    {
        vtpvlanstehopcount = value;
        vtpvlanstehopcount.value_namespace = name_space;
        vtpvlanstehopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanStpType")
    {
        vtpvlanstptype = value;
        vtpvlanstptype.value_namespace = name_space;
        vtpvlanstptype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vtpVlanType")
    {
        vtpvlantype = value;
        vtpvlantype.value_namespace = name_space;
        vtpvlantype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtpVlanTypeExt")
    {
        vtpvlantypeext[value] = true;
    }
}

void CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "managementDomainIndex")
    {
        managementdomainindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIndex")
    {
        vtpvlanindex.yfilter = yfilter;
    }
    if(value_path == "stpxVlanMISTPInstMapInstIndex")
    {
        stpxvlanmistpinstmapinstindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanAreHopCount")
    {
        vtpvlanarehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanBridgeNumber")
    {
        vtpvlanbridgenumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanBridgeType")
    {
        vtpvlanbridgetype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanDot10Said")
    {
        vtpvlandot10said.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIfIndex")
    {
        vtpvlanifindex.yfilter = yfilter;
    }
    if(value_path == "vtpVlanIsCRFBackup")
    {
        vtpvlaniscrfbackup.yfilter = yfilter;
    }
    if(value_path == "vtpVlanMtu")
    {
        vtpvlanmtu.yfilter = yfilter;
    }
    if(value_path == "vtpVlanName")
    {
        vtpvlanname.yfilter = yfilter;
    }
    if(value_path == "vtpVlanParentVlan")
    {
        vtpvlanparentvlan.yfilter = yfilter;
    }
    if(value_path == "vtpVlanRingNumber")
    {
        vtpvlanringnumber.yfilter = yfilter;
    }
    if(value_path == "vtpVlanState")
    {
        vtpvlanstate.yfilter = yfilter;
    }
    if(value_path == "vtpVlanSteHopCount")
    {
        vtpvlanstehopcount.yfilter = yfilter;
    }
    if(value_path == "vtpVlanStpType")
    {
        vtpvlanstptype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanTranslationalVlan1")
    {
        vtpvlantranslationalvlan1.yfilter = yfilter;
    }
    if(value_path == "vtpVlanTranslationalVlan2")
    {
        vtpvlantranslationalvlan2.yfilter = yfilter;
    }
    if(value_path == "vtpVlanType")
    {
        vtpvlantype.yfilter = yfilter;
    }
    if(value_path == "vtpVlanTypeExt")
    {
        vtpvlantypeext.yfilter = yfilter;
    }
}

bool CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "managementDomainIndex" || name == "vtpVlanIndex" || name == "stpxVlanMISTPInstMapInstIndex" || name == "vtpVlanAreHopCount" || name == "vtpVlanBridgeNumber" || name == "vtpVlanBridgeType" || name == "vtpVlanDot10Said" || name == "vtpVlanIfIndex" || name == "vtpVlanIsCRFBackup" || name == "vtpVlanMtu" || name == "vtpVlanName" || name == "vtpVlanParentVlan" || name == "vtpVlanRingNumber" || name == "vtpVlanState" || name == "vtpVlanSteHopCount" || name == "vtpVlanStpType" || name == "vtpVlanTranslationalVlan1" || name == "vtpVlanTranslationalVlan2" || name == "vtpVlanType" || name == "vtpVlanTypeExt")
        return true;
    return false;
}

const Enum::YLeaf VlanType::ethernet {1, "ethernet"};
const Enum::YLeaf VlanType::fddi {2, "fddi"};
const Enum::YLeaf VlanType::tokenRing {3, "tokenRing"};
const Enum::YLeaf VlanType::fddiNet {4, "fddiNet"};
const Enum::YLeaf VlanType::trNet {5, "trNet"};
const Enum::YLeaf VlanType::deprecated {6, "deprecated"};

const Enum::YLeaf CISCOVTPMIB::Internalvlaninfo::Vtpinternalvlanallocpolicy::ascending {1, "ascending"};
const Enum::YLeaf CISCOVTPMIB::Internalvlaninfo::Vtpinternalvlanallocpolicy::descending {2, "descending"};

const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainlocalmode::client {1, "client"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainlocalmode::server {2, "server"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainlocalmode::transparent {3, "transparent"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainlocalmode::off {4, "off"};

const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainpruningstate::enabled {1, "enabled"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainpruningstate::disabled {2, "disabled"};

const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainversioninuse::version1 {1, "version1"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainversioninuse::version2 {2, "version2"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainversioninuse::none {3, "none"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainversioninuse::version3 {4, "version3"};

const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainpruningstateoper::enabled {1, "enabled"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Managementdomainpruningstateoper::disabled {2, "disabled"};

const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlaneditoperation::none {1, "none"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlaneditoperation::copy {2, "copy"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlaneditoperation::apply {3, "apply"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlaneditoperation::release {4, "release"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlaneditoperation::restartTimer {5, "restartTimer"};

const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::inProgress {1, "inProgress"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::succeeded {2, "succeeded"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::configNumberError {3, "configNumberError"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::inconsistentEdit {4, "inconsistentEdit"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::tooBig {5, "tooBig"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::localNVStoreFail {6, "localNVStoreFail"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::remoteNVStoreFail {7, "remoteNVStoreFail"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::editBufferEmpty {8, "editBufferEmpty"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::someOtherError {9, "someOtherError"};
const Enum::YLeaf CISCOVTPMIB::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus::notPrimaryServer {10, "notPrimaryServer"};

const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationtype::isl {1, "isl"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationtype::dot10 {2, "dot10"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationtype::lane {3, "lane"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationtype::dot1Q {4, "dot1Q"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationtype::negotiate {5, "negotiate"};

const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstate::on {1, "on"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstate::off {2, "off"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstate::desirable {3, "desirable"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstate::auto_ {4, "auto"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstate::onNoNegotiate {5, "onNoNegotiate"};

const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstatus::trunking {1, "trunking"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstatus::notTrunking {2, "notTrunking"};

const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype::isl {1, "isl"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype::dot10 {2, "dot10"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype::lane {3, "lane"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype::dot1Q {4, "dot1Q"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype::negotiating {5, "negotiating"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype::notApplicable {6, "notApplicable"};

const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1Qtunnel::trunk {1, "trunk"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1Qtunnel::access {2, "access"};
const Enum::YLeaf CISCOVTPMIB::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1Qtunnel::disabled {3, "disabled"};

const Enum::YLeaf CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::Vtpauthpasswordtype::plaintext {1, "plaintext"};
const Enum::YLeaf CISCOVTPMIB::Vtpauthenticationtable::Vtpauthentry::Vtpauthpasswordtype::hidden {2, "hidden"};

const Enum::YLeaf CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaselocalmode::client {1, "client"};
const Enum::YLeaf CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaselocalmode::server {2, "server"};
const Enum::YLeaf CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaselocalmode::transparent {3, "transparent"};
const Enum::YLeaf CISCOVTPMIB::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaselocalmode::off {4, "off"};

const Enum::YLeaf CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoveraction::discover {1, "discover"};
const Enum::YLeaf CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoveraction::noOperation {2, "noOperation"};
const Enum::YLeaf CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoveraction::purgeResult {3, "purgeResult"};

const Enum::YLeaf CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverstatus::inProgress {1, "inProgress"};
const Enum::YLeaf CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverstatus::succeeded {2, "succeeded"};
const Enum::YLeaf CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverstatus::resourceUnavailable {3, "resourceUnavailable"};
const Enum::YLeaf CISCOVTPMIB::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverstatus::someOtherError {4, "someOtherError"};

const Enum::YLeaf CISCOVTPMIB::Vtpstatus::Vtpversion::one {1, "one"};
const Enum::YLeaf CISCOVTPMIB::Vtpstatus::Vtpversion::two {2, "two"};
const Enum::YLeaf CISCOVTPMIB::Vtpstatus::Vtpversion::none {3, "none"};
const Enum::YLeaf CISCOVTPMIB::Vtpstatus::Vtpversion::three {4, "three"};

const Enum::YLeaf CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstate::operational {1, "operational"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstate::suspended {2, "suspended"};

const Enum::YLeaf CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstptype::ieee {1, "ieee"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstptype::ibm {2, "ibm"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstptype::auto_ {3, "auto"};

const Enum::YLeaf CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditbridgetype::srt {1, "srt"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditbridgetype::srb {2, "srb"};

const Enum::YLeaf CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::Vtpvlanlocalshutdown::up {1, "up"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::Vtpvlanlocalshutdown::down {2, "down"};

const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstate::operational {1, "operational"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstate::suspended {2, "suspended"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstate::mtuTooBigForDevice {3, "mtuTooBigForDevice"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstate::mtuTooBigForTrunk {4, "mtuTooBigForTrunk"};

const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstptype::ieee {1, "ieee"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstptype::ibm {2, "ibm"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanstptype::hybrid {3, "hybrid"};

const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanbridgetype::none {0, "none"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanbridgetype::srt {1, "srt"};
const Enum::YLeaf CISCOVTPMIB::Vtpvlantable::Vtpvlanentry::Vtpvlanbridgetype::srb {2, "srb"};


}
}

