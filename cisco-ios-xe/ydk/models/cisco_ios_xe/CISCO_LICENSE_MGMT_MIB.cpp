
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_LICENSE_MGMT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_LICENSE_MGMT_MIB {

CISCOLICENSEMGMTMIB::CISCOLICENSEMGMTMIB()
    :
    clmgmtlicenseconfiguration(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration>())
    , clmgmtlicensedeviceinformation(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation>())
    , clmgmtlicensenotifobjects(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects>())
    , clmgmtlicenseactiontable(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable>())
    , clmgmtlicenseactionresulttable(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable>())
    , clmgmtlicensestoreinfotable(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable>())
    , clmgmtlicensedeviceinfotable(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable>())
    , clmgmtlicenseinfotable(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable>())
    , clmgmtlicensablefeaturetable(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable>())
    , clmgmtdevcredexportactiontable(std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable>())
{
    clmgmtlicenseconfiguration->parent = this;
    clmgmtlicensedeviceinformation->parent = this;
    clmgmtlicensenotifobjects->parent = this;
    clmgmtlicenseactiontable->parent = this;
    clmgmtlicenseactionresulttable->parent = this;
    clmgmtlicensestoreinfotable->parent = this;
    clmgmtlicensedeviceinfotable->parent = this;
    clmgmtlicenseinfotable->parent = this;
    clmgmtlicensablefeaturetable->parent = this;
    clmgmtdevcredexportactiontable->parent = this;

    yang_name = "CISCO-LICENSE-MGMT-MIB"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::~CISCOLICENSEMGMTMIB()
{
}

bool CISCOLICENSEMGMTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (clmgmtlicenseconfiguration !=  nullptr && clmgmtlicenseconfiguration->has_data())
	|| (clmgmtlicensedeviceinformation !=  nullptr && clmgmtlicensedeviceinformation->has_data())
	|| (clmgmtlicensenotifobjects !=  nullptr && clmgmtlicensenotifobjects->has_data())
	|| (clmgmtlicenseactiontable !=  nullptr && clmgmtlicenseactiontable->has_data())
	|| (clmgmtlicenseactionresulttable !=  nullptr && clmgmtlicenseactionresulttable->has_data())
	|| (clmgmtlicensestoreinfotable !=  nullptr && clmgmtlicensestoreinfotable->has_data())
	|| (clmgmtlicensedeviceinfotable !=  nullptr && clmgmtlicensedeviceinfotable->has_data())
	|| (clmgmtlicenseinfotable !=  nullptr && clmgmtlicenseinfotable->has_data())
	|| (clmgmtlicensablefeaturetable !=  nullptr && clmgmtlicensablefeaturetable->has_data())
	|| (clmgmtdevcredexportactiontable !=  nullptr && clmgmtdevcredexportactiontable->has_data());
}

bool CISCOLICENSEMGMTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (clmgmtlicenseconfiguration !=  nullptr && clmgmtlicenseconfiguration->has_operation())
	|| (clmgmtlicensedeviceinformation !=  nullptr && clmgmtlicensedeviceinformation->has_operation())
	|| (clmgmtlicensenotifobjects !=  nullptr && clmgmtlicensenotifobjects->has_operation())
	|| (clmgmtlicenseactiontable !=  nullptr && clmgmtlicenseactiontable->has_operation())
	|| (clmgmtlicenseactionresulttable !=  nullptr && clmgmtlicenseactionresulttable->has_operation())
	|| (clmgmtlicensestoreinfotable !=  nullptr && clmgmtlicensestoreinfotable->has_operation())
	|| (clmgmtlicensedeviceinfotable !=  nullptr && clmgmtlicensedeviceinfotable->has_operation())
	|| (clmgmtlicenseinfotable !=  nullptr && clmgmtlicenseinfotable->has_operation())
	|| (clmgmtlicensablefeaturetable !=  nullptr && clmgmtlicensablefeaturetable->has_operation())
	|| (clmgmtdevcredexportactiontable !=  nullptr && clmgmtdevcredexportactiontable->has_operation());
}

std::string CISCOLICENSEMGMTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseConfiguration")
    {
        if(clmgmtlicenseconfiguration == nullptr)
        {
            clmgmtlicenseconfiguration = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration>();
        }
        return clmgmtlicenseconfiguration;
    }

    if(child_yang_name == "clmgmtLicenseDeviceInformation")
    {
        if(clmgmtlicensedeviceinformation == nullptr)
        {
            clmgmtlicensedeviceinformation = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation>();
        }
        return clmgmtlicensedeviceinformation;
    }

    if(child_yang_name == "clmgmtLicenseNotifObjects")
    {
        if(clmgmtlicensenotifobjects == nullptr)
        {
            clmgmtlicensenotifobjects = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects>();
        }
        return clmgmtlicensenotifobjects;
    }

    if(child_yang_name == "clmgmtLicenseActionTable")
    {
        if(clmgmtlicenseactiontable == nullptr)
        {
            clmgmtlicenseactiontable = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable>();
        }
        return clmgmtlicenseactiontable;
    }

    if(child_yang_name == "clmgmtLicenseActionResultTable")
    {
        if(clmgmtlicenseactionresulttable == nullptr)
        {
            clmgmtlicenseactionresulttable = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable>();
        }
        return clmgmtlicenseactionresulttable;
    }

    if(child_yang_name == "clmgmtLicenseStoreInfoTable")
    {
        if(clmgmtlicensestoreinfotable == nullptr)
        {
            clmgmtlicensestoreinfotable = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable>();
        }
        return clmgmtlicensestoreinfotable;
    }

    if(child_yang_name == "clmgmtLicenseDeviceInfoTable")
    {
        if(clmgmtlicensedeviceinfotable == nullptr)
        {
            clmgmtlicensedeviceinfotable = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable>();
        }
        return clmgmtlicensedeviceinfotable;
    }

    if(child_yang_name == "clmgmtLicenseInfoTable")
    {
        if(clmgmtlicenseinfotable == nullptr)
        {
            clmgmtlicenseinfotable = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable>();
        }
        return clmgmtlicenseinfotable;
    }

    if(child_yang_name == "clmgmtLicensableFeatureTable")
    {
        if(clmgmtlicensablefeaturetable == nullptr)
        {
            clmgmtlicensablefeaturetable = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable>();
        }
        return clmgmtlicensablefeaturetable;
    }

    if(child_yang_name == "clmgmtDevCredExportActionTable")
    {
        if(clmgmtdevcredexportactiontable == nullptr)
        {
            clmgmtdevcredexportactiontable = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable>();
        }
        return clmgmtdevcredexportactiontable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clmgmtlicenseconfiguration != nullptr)
    {
        _children["clmgmtLicenseConfiguration"] = clmgmtlicenseconfiguration;
    }

    if(clmgmtlicensedeviceinformation != nullptr)
    {
        _children["clmgmtLicenseDeviceInformation"] = clmgmtlicensedeviceinformation;
    }

    if(clmgmtlicensenotifobjects != nullptr)
    {
        _children["clmgmtLicenseNotifObjects"] = clmgmtlicensenotifobjects;
    }

    if(clmgmtlicenseactiontable != nullptr)
    {
        _children["clmgmtLicenseActionTable"] = clmgmtlicenseactiontable;
    }

    if(clmgmtlicenseactionresulttable != nullptr)
    {
        _children["clmgmtLicenseActionResultTable"] = clmgmtlicenseactionresulttable;
    }

    if(clmgmtlicensestoreinfotable != nullptr)
    {
        _children["clmgmtLicenseStoreInfoTable"] = clmgmtlicensestoreinfotable;
    }

    if(clmgmtlicensedeviceinfotable != nullptr)
    {
        _children["clmgmtLicenseDeviceInfoTable"] = clmgmtlicensedeviceinfotable;
    }

    if(clmgmtlicenseinfotable != nullptr)
    {
        _children["clmgmtLicenseInfoTable"] = clmgmtlicenseinfotable;
    }

    if(clmgmtlicensablefeaturetable != nullptr)
    {
        _children["clmgmtLicensableFeatureTable"] = clmgmtlicensablefeaturetable;
    }

    if(clmgmtdevcredexportactiontable != nullptr)
    {
        _children["clmgmtDevCredExportActionTable"] = clmgmtdevcredexportactiontable;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::clone_ptr() const
{
    return std::make_shared<CISCOLICENSEMGMTMIB>();
}

std::string CISCOLICENSEMGMTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOLICENSEMGMTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOLICENSEMGMTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOLICENSEMGMTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOLICENSEMGMTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseConfiguration" || name == "clmgmtLicenseDeviceInformation" || name == "clmgmtLicenseNotifObjects" || name == "clmgmtLicenseActionTable" || name == "clmgmtLicenseActionResultTable" || name == "clmgmtLicenseStoreInfoTable" || name == "clmgmtLicenseDeviceInfoTable" || name == "clmgmtLicenseInfoTable" || name == "clmgmtLicensableFeatureTable" || name == "clmgmtDevCredExportActionTable")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::ClmgmtLicenseConfiguration()
    :
    clmgmtnextfreelicenseactionindex{YType::uint32, "clmgmtNextFreeLicenseActionIndex"}
{

    yang_name = "clmgmtLicenseConfiguration"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::~ClmgmtLicenseConfiguration()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return clmgmtnextfreelicenseactionindex.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtnextfreelicenseactionindex.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseConfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtnextfreelicenseactionindex.is_set || is_set(clmgmtnextfreelicenseactionindex.yfilter)) leaf_name_data.push_back(clmgmtnextfreelicenseactionindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtNextFreeLicenseActionIndex")
    {
        clmgmtnextfreelicenseactionindex = value;
        clmgmtnextfreelicenseactionindex.value_namespace = name_space;
        clmgmtnextfreelicenseactionindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtNextFreeLicenseActionIndex")
    {
        clmgmtnextfreelicenseactionindex.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtNextFreeLicenseActionIndex")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::ClmgmtLicenseDeviceInformation()
    :
    clmgmtnextfreedevcredexportactionindex{YType::uint32, "clmgmtNextFreeDevCredExportActionIndex"}
{

    yang_name = "clmgmtLicenseDeviceInformation"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::~ClmgmtLicenseDeviceInformation()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::has_data() const
{
    if (is_presence_container) return true;
    return clmgmtnextfreedevcredexportactionindex.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtnextfreedevcredexportactionindex.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseDeviceInformation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtnextfreedevcredexportactionindex.is_set || is_set(clmgmtnextfreedevcredexportactionindex.yfilter)) leaf_name_data.push_back(clmgmtnextfreedevcredexportactionindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtNextFreeDevCredExportActionIndex")
    {
        clmgmtnextfreedevcredexportactionindex = value;
        clmgmtnextfreedevcredexportactionindex.value_namespace = name_space;
        clmgmtnextfreedevcredexportactionindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtNextFreeDevCredExportActionIndex")
    {
        clmgmtnextfreedevcredexportactionindex.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtNextFreeDevCredExportActionIndex")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::ClmgmtLicenseNotifObjects()
    :
    clmgmtlicenseusagenotifenable{YType::boolean, "clmgmtLicenseUsageNotifEnable"},
    clmgmtlicensedeploymentnotifenable{YType::boolean, "clmgmtLicenseDeploymentNotifEnable"},
    clmgmtlicenseerrornotifenable{YType::enumeration, "clmgmtLicenseErrorNotifEnable"}
{

    yang_name = "clmgmtLicenseNotifObjects"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::~ClmgmtLicenseNotifObjects()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::has_data() const
{
    if (is_presence_container) return true;
    return clmgmtlicenseusagenotifenable.is_set
	|| clmgmtlicensedeploymentnotifenable.is_set
	|| clmgmtlicenseerrornotifenable.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtlicenseusagenotifenable.yfilter)
	|| ydk::is_set(clmgmtlicensedeploymentnotifenable.yfilter)
	|| ydk::is_set(clmgmtlicenseerrornotifenable.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseNotifObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtlicenseusagenotifenable.is_set || is_set(clmgmtlicenseusagenotifenable.yfilter)) leaf_name_data.push_back(clmgmtlicenseusagenotifenable.get_name_leafdata());
    if (clmgmtlicensedeploymentnotifenable.is_set || is_set(clmgmtlicensedeploymentnotifenable.yfilter)) leaf_name_data.push_back(clmgmtlicensedeploymentnotifenable.get_name_leafdata());
    if (clmgmtlicenseerrornotifenable.is_set || is_set(clmgmtlicenseerrornotifenable.yfilter)) leaf_name_data.push_back(clmgmtlicenseerrornotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtLicenseUsageNotifEnable")
    {
        clmgmtlicenseusagenotifenable = value;
        clmgmtlicenseusagenotifenable.value_namespace = name_space;
        clmgmtlicenseusagenotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseDeploymentNotifEnable")
    {
        clmgmtlicensedeploymentnotifenable = value;
        clmgmtlicensedeploymentnotifenable.value_namespace = name_space;
        clmgmtlicensedeploymentnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseErrorNotifEnable")
    {
        clmgmtlicenseerrornotifenable = value;
        clmgmtlicenseerrornotifenable.value_namespace = name_space;
        clmgmtlicenseerrornotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtLicenseUsageNotifEnable")
    {
        clmgmtlicenseusagenotifenable.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseDeploymentNotifEnable")
    {
        clmgmtlicensedeploymentnotifenable.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseErrorNotifEnable")
    {
        clmgmtlicenseerrornotifenable.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseUsageNotifEnable" || name == "clmgmtLicenseDeploymentNotifEnable" || name == "clmgmtLicenseErrorNotifEnable")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionTable()
    :
    clmgmtlicenseactionentry(this, {"clmgmtlicenseactionindex"})
{

    yang_name = "clmgmtLicenseActionTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::~ClmgmtLicenseActionTable()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clmgmtlicenseactionentry.len(); index++)
    {
        if(clmgmtlicenseactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicenseactionentry.len(); index++)
    {
        if(clmgmtlicenseactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseActionEntry")
    {
        auto ent_ = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry>();
        ent_->parent = this;
        clmgmtlicenseactionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clmgmtlicenseactionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseActionEntry()
    :
    clmgmtlicenseactionindex{YType::uint32, "clmgmtLicenseActionIndex"},
    clmgmtlicenseactionentphysicalindex{YType::int32, "clmgmtLicenseActionEntPhysicalIndex"},
    clmgmtlicenseactiontransferprotocol{YType::enumeration, "clmgmtLicenseActionTransferProtocol"},
    clmgmtlicenseserveraddresstype{YType::enumeration, "clmgmtLicenseServerAddressType"},
    clmgmtlicenseserveraddress{YType::str, "clmgmtLicenseServerAddress"},
    clmgmtlicenseserverusername{YType::str, "clmgmtLicenseServerUsername"},
    clmgmtlicenseserverpassword{YType::str, "clmgmtLicenseServerPassword"},
    clmgmtlicensefile{YType::str, "clmgmtLicenseFile"},
    clmgmtlicensestore{YType::uint32, "clmgmtLicenseStore"},
    clmgmtlicenseactionlicenseindex{YType::uint32, "clmgmtLicenseActionLicenseIndex"},
    clmgmtlicensepermissionticketfile{YType::str, "clmgmtLicensePermissionTicketFile"},
    clmgmtlicenserehostticketfile{YType::str, "clmgmtLicenseRehostTicketFile"},
    clmgmtlicensebackupfile{YType::str, "clmgmtLicenseBackupFile"},
    clmgmtlicensestoponfailure{YType::boolean, "clmgmtLicenseStopOnFailure"},
    clmgmtlicenseaction{YType::enumeration, "clmgmtLicenseAction"},
    clmgmtlicenseactionstate{YType::enumeration, "clmgmtLicenseActionState"},
    clmgmtlicensejobqposition{YType::uint32, "clmgmtLicenseJobQPosition"},
    clmgmtlicenseactionfailcause{YType::enumeration, "clmgmtLicenseActionFailCause"},
    clmgmtlicenseactionstoragetype{YType::enumeration, "clmgmtLicenseActionStorageType"},
    clmgmtlicenseactionrowstatus{YType::enumeration, "clmgmtLicenseActionRowStatus"},
    clmgmtlicenseaccepteula{YType::boolean, "clmgmtLicenseAcceptEULA"},
    clmgmtlicenseeulafile{YType::str, "clmgmtLicenseEULAFile"}
{

    yang_name = "clmgmtLicenseActionEntry"; yang_parent_name = "clmgmtLicenseActionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::~ClmgmtLicenseActionEntry()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::has_data() const
{
    if (is_presence_container) return true;
    return clmgmtlicenseactionindex.is_set
	|| clmgmtlicenseactionentphysicalindex.is_set
	|| clmgmtlicenseactiontransferprotocol.is_set
	|| clmgmtlicenseserveraddresstype.is_set
	|| clmgmtlicenseserveraddress.is_set
	|| clmgmtlicenseserverusername.is_set
	|| clmgmtlicenseserverpassword.is_set
	|| clmgmtlicensefile.is_set
	|| clmgmtlicensestore.is_set
	|| clmgmtlicenseactionlicenseindex.is_set
	|| clmgmtlicensepermissionticketfile.is_set
	|| clmgmtlicenserehostticketfile.is_set
	|| clmgmtlicensebackupfile.is_set
	|| clmgmtlicensestoponfailure.is_set
	|| clmgmtlicenseaction.is_set
	|| clmgmtlicenseactionstate.is_set
	|| clmgmtlicensejobqposition.is_set
	|| clmgmtlicenseactionfailcause.is_set
	|| clmgmtlicenseactionstoragetype.is_set
	|| clmgmtlicenseactionrowstatus.is_set
	|| clmgmtlicenseaccepteula.is_set
	|| clmgmtlicenseeulafile.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtlicenseactionindex.yfilter)
	|| ydk::is_set(clmgmtlicenseactionentphysicalindex.yfilter)
	|| ydk::is_set(clmgmtlicenseactiontransferprotocol.yfilter)
	|| ydk::is_set(clmgmtlicenseserveraddresstype.yfilter)
	|| ydk::is_set(clmgmtlicenseserveraddress.yfilter)
	|| ydk::is_set(clmgmtlicenseserverusername.yfilter)
	|| ydk::is_set(clmgmtlicenseserverpassword.yfilter)
	|| ydk::is_set(clmgmtlicensefile.yfilter)
	|| ydk::is_set(clmgmtlicensestore.yfilter)
	|| ydk::is_set(clmgmtlicenseactionlicenseindex.yfilter)
	|| ydk::is_set(clmgmtlicensepermissionticketfile.yfilter)
	|| ydk::is_set(clmgmtlicenserehostticketfile.yfilter)
	|| ydk::is_set(clmgmtlicensebackupfile.yfilter)
	|| ydk::is_set(clmgmtlicensestoponfailure.yfilter)
	|| ydk::is_set(clmgmtlicenseaction.yfilter)
	|| ydk::is_set(clmgmtlicenseactionstate.yfilter)
	|| ydk::is_set(clmgmtlicensejobqposition.yfilter)
	|| ydk::is_set(clmgmtlicenseactionfailcause.yfilter)
	|| ydk::is_set(clmgmtlicenseactionstoragetype.yfilter)
	|| ydk::is_set(clmgmtlicenseactionrowstatus.yfilter)
	|| ydk::is_set(clmgmtlicenseaccepteula.yfilter)
	|| ydk::is_set(clmgmtlicenseeulafile.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseActionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionEntry";
    ADD_KEY_TOKEN(clmgmtlicenseactionindex, "clmgmtLicenseActionIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtlicenseactionindex.is_set || is_set(clmgmtlicenseactionindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionindex.get_name_leafdata());
    if (clmgmtlicenseactionentphysicalindex.is_set || is_set(clmgmtlicenseactionentphysicalindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionentphysicalindex.get_name_leafdata());
    if (clmgmtlicenseactiontransferprotocol.is_set || is_set(clmgmtlicenseactiontransferprotocol.yfilter)) leaf_name_data.push_back(clmgmtlicenseactiontransferprotocol.get_name_leafdata());
    if (clmgmtlicenseserveraddresstype.is_set || is_set(clmgmtlicenseserveraddresstype.yfilter)) leaf_name_data.push_back(clmgmtlicenseserveraddresstype.get_name_leafdata());
    if (clmgmtlicenseserveraddress.is_set || is_set(clmgmtlicenseserveraddress.yfilter)) leaf_name_data.push_back(clmgmtlicenseserveraddress.get_name_leafdata());
    if (clmgmtlicenseserverusername.is_set || is_set(clmgmtlicenseserverusername.yfilter)) leaf_name_data.push_back(clmgmtlicenseserverusername.get_name_leafdata());
    if (clmgmtlicenseserverpassword.is_set || is_set(clmgmtlicenseserverpassword.yfilter)) leaf_name_data.push_back(clmgmtlicenseserverpassword.get_name_leafdata());
    if (clmgmtlicensefile.is_set || is_set(clmgmtlicensefile.yfilter)) leaf_name_data.push_back(clmgmtlicensefile.get_name_leafdata());
    if (clmgmtlicensestore.is_set || is_set(clmgmtlicensestore.yfilter)) leaf_name_data.push_back(clmgmtlicensestore.get_name_leafdata());
    if (clmgmtlicenseactionlicenseindex.is_set || is_set(clmgmtlicenseactionlicenseindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionlicenseindex.get_name_leafdata());
    if (clmgmtlicensepermissionticketfile.is_set || is_set(clmgmtlicensepermissionticketfile.yfilter)) leaf_name_data.push_back(clmgmtlicensepermissionticketfile.get_name_leafdata());
    if (clmgmtlicenserehostticketfile.is_set || is_set(clmgmtlicenserehostticketfile.yfilter)) leaf_name_data.push_back(clmgmtlicenserehostticketfile.get_name_leafdata());
    if (clmgmtlicensebackupfile.is_set || is_set(clmgmtlicensebackupfile.yfilter)) leaf_name_data.push_back(clmgmtlicensebackupfile.get_name_leafdata());
    if (clmgmtlicensestoponfailure.is_set || is_set(clmgmtlicensestoponfailure.yfilter)) leaf_name_data.push_back(clmgmtlicensestoponfailure.get_name_leafdata());
    if (clmgmtlicenseaction.is_set || is_set(clmgmtlicenseaction.yfilter)) leaf_name_data.push_back(clmgmtlicenseaction.get_name_leafdata());
    if (clmgmtlicenseactionstate.is_set || is_set(clmgmtlicenseactionstate.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionstate.get_name_leafdata());
    if (clmgmtlicensejobqposition.is_set || is_set(clmgmtlicensejobqposition.yfilter)) leaf_name_data.push_back(clmgmtlicensejobqposition.get_name_leafdata());
    if (clmgmtlicenseactionfailcause.is_set || is_set(clmgmtlicenseactionfailcause.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionfailcause.get_name_leafdata());
    if (clmgmtlicenseactionstoragetype.is_set || is_set(clmgmtlicenseactionstoragetype.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionstoragetype.get_name_leafdata());
    if (clmgmtlicenseactionrowstatus.is_set || is_set(clmgmtlicenseactionrowstatus.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionrowstatus.get_name_leafdata());
    if (clmgmtlicenseaccepteula.is_set || is_set(clmgmtlicenseaccepteula.yfilter)) leaf_name_data.push_back(clmgmtlicenseaccepteula.get_name_leafdata());
    if (clmgmtlicenseeulafile.is_set || is_set(clmgmtlicenseeulafile.yfilter)) leaf_name_data.push_back(clmgmtlicenseeulafile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtLicenseActionIndex")
    {
        clmgmtlicenseactionindex = value;
        clmgmtlicenseactionindex.value_namespace = name_space;
        clmgmtlicenseactionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionEntPhysicalIndex")
    {
        clmgmtlicenseactionentphysicalindex = value;
        clmgmtlicenseactionentphysicalindex.value_namespace = name_space;
        clmgmtlicenseactionentphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionTransferProtocol")
    {
        clmgmtlicenseactiontransferprotocol = value;
        clmgmtlicenseactiontransferprotocol.value_namespace = name_space;
        clmgmtlicenseactiontransferprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseServerAddressType")
    {
        clmgmtlicenseserveraddresstype = value;
        clmgmtlicenseserveraddresstype.value_namespace = name_space;
        clmgmtlicenseserveraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseServerAddress")
    {
        clmgmtlicenseserveraddress = value;
        clmgmtlicenseserveraddress.value_namespace = name_space;
        clmgmtlicenseserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseServerUsername")
    {
        clmgmtlicenseserverusername = value;
        clmgmtlicenseserverusername.value_namespace = name_space;
        clmgmtlicenseserverusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseServerPassword")
    {
        clmgmtlicenseserverpassword = value;
        clmgmtlicenseserverpassword.value_namespace = name_space;
        clmgmtlicenseserverpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseFile")
    {
        clmgmtlicensefile = value;
        clmgmtlicensefile.value_namespace = name_space;
        clmgmtlicensefile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStore")
    {
        clmgmtlicensestore = value;
        clmgmtlicensestore.value_namespace = name_space;
        clmgmtlicensestore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionLicenseIndex")
    {
        clmgmtlicenseactionlicenseindex = value;
        clmgmtlicenseactionlicenseindex.value_namespace = name_space;
        clmgmtlicenseactionlicenseindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicensePermissionTicketFile")
    {
        clmgmtlicensepermissionticketfile = value;
        clmgmtlicensepermissionticketfile.value_namespace = name_space;
        clmgmtlicensepermissionticketfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseRehostTicketFile")
    {
        clmgmtlicenserehostticketfile = value;
        clmgmtlicenserehostticketfile.value_namespace = name_space;
        clmgmtlicenserehostticketfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseBackupFile")
    {
        clmgmtlicensebackupfile = value;
        clmgmtlicensebackupfile.value_namespace = name_space;
        clmgmtlicensebackupfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStopOnFailure")
    {
        clmgmtlicensestoponfailure = value;
        clmgmtlicensestoponfailure.value_namespace = name_space;
        clmgmtlicensestoponfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseAction")
    {
        clmgmtlicenseaction = value;
        clmgmtlicenseaction.value_namespace = name_space;
        clmgmtlicenseaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionState")
    {
        clmgmtlicenseactionstate = value;
        clmgmtlicenseactionstate.value_namespace = name_space;
        clmgmtlicenseactionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseJobQPosition")
    {
        clmgmtlicensejobqposition = value;
        clmgmtlicensejobqposition.value_namespace = name_space;
        clmgmtlicensejobqposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionFailCause")
    {
        clmgmtlicenseactionfailcause = value;
        clmgmtlicenseactionfailcause.value_namespace = name_space;
        clmgmtlicenseactionfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionStorageType")
    {
        clmgmtlicenseactionstoragetype = value;
        clmgmtlicenseactionstoragetype.value_namespace = name_space;
        clmgmtlicenseactionstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionRowStatus")
    {
        clmgmtlicenseactionrowstatus = value;
        clmgmtlicenseactionrowstatus.value_namespace = name_space;
        clmgmtlicenseactionrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseAcceptEULA")
    {
        clmgmtlicenseaccepteula = value;
        clmgmtlicenseaccepteula.value_namespace = name_space;
        clmgmtlicenseaccepteula.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseEULAFile")
    {
        clmgmtlicenseeulafile = value;
        clmgmtlicenseeulafile.value_namespace = name_space;
        clmgmtlicenseeulafile.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtLicenseActionIndex")
    {
        clmgmtlicenseactionindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionEntPhysicalIndex")
    {
        clmgmtlicenseactionentphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionTransferProtocol")
    {
        clmgmtlicenseactiontransferprotocol.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerAddressType")
    {
        clmgmtlicenseserveraddresstype.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerAddress")
    {
        clmgmtlicenseserveraddress.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerUsername")
    {
        clmgmtlicenseserverusername.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerPassword")
    {
        clmgmtlicenseserverpassword.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseFile")
    {
        clmgmtlicensefile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStore")
    {
        clmgmtlicensestore.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionLicenseIndex")
    {
        clmgmtlicenseactionlicenseindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicensePermissionTicketFile")
    {
        clmgmtlicensepermissionticketfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseRehostTicketFile")
    {
        clmgmtlicenserehostticketfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseBackupFile")
    {
        clmgmtlicensebackupfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStopOnFailure")
    {
        clmgmtlicensestoponfailure.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseAction")
    {
        clmgmtlicenseaction.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionState")
    {
        clmgmtlicenseactionstate.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseJobQPosition")
    {
        clmgmtlicensejobqposition.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionFailCause")
    {
        clmgmtlicenseactionfailcause.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionStorageType")
    {
        clmgmtlicenseactionstoragetype.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionRowStatus")
    {
        clmgmtlicenseactionrowstatus.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseAcceptEULA")
    {
        clmgmtlicenseaccepteula.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseEULAFile")
    {
        clmgmtlicenseeulafile.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionIndex" || name == "clmgmtLicenseActionEntPhysicalIndex" || name == "clmgmtLicenseActionTransferProtocol" || name == "clmgmtLicenseServerAddressType" || name == "clmgmtLicenseServerAddress" || name == "clmgmtLicenseServerUsername" || name == "clmgmtLicenseServerPassword" || name == "clmgmtLicenseFile" || name == "clmgmtLicenseStore" || name == "clmgmtLicenseActionLicenseIndex" || name == "clmgmtLicensePermissionTicketFile" || name == "clmgmtLicenseRehostTicketFile" || name == "clmgmtLicenseBackupFile" || name == "clmgmtLicenseStopOnFailure" || name == "clmgmtLicenseAction" || name == "clmgmtLicenseActionState" || name == "clmgmtLicenseJobQPosition" || name == "clmgmtLicenseActionFailCause" || name == "clmgmtLicenseActionStorageType" || name == "clmgmtLicenseActionRowStatus" || name == "clmgmtLicenseAcceptEULA" || name == "clmgmtLicenseEULAFile")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultTable()
    :
    clmgmtlicenseactionresultentry(this, {"clmgmtlicenseactionindex", "clmgmtlicensenumber"})
{

    yang_name = "clmgmtLicenseActionResultTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::~ClmgmtLicenseActionResultTable()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clmgmtlicenseactionresultentry.len(); index++)
    {
        if(clmgmtlicenseactionresultentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicenseactionresultentry.len(); index++)
    {
        if(clmgmtlicenseactionresultentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionResultTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseActionResultEntry")
    {
        auto ent_ = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry>();
        ent_->parent = this;
        clmgmtlicenseactionresultentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clmgmtlicenseactionresultentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionResultEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::ClmgmtLicenseActionResultEntry()
    :
    clmgmtlicenseactionindex{YType::str, "clmgmtLicenseActionIndex"},
    clmgmtlicensenumber{YType::uint32, "clmgmtLicenseNumber"},
    clmgmtlicenseindivactionstate{YType::enumeration, "clmgmtLicenseIndivActionState"},
    clmgmtlicenseindivactionfailcause{YType::enumeration, "clmgmtLicenseIndivActionFailCause"}
{

    yang_name = "clmgmtLicenseActionResultEntry"; yang_parent_name = "clmgmtLicenseActionResultTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::~ClmgmtLicenseActionResultEntry()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::has_data() const
{
    if (is_presence_container) return true;
    return clmgmtlicenseactionindex.is_set
	|| clmgmtlicensenumber.is_set
	|| clmgmtlicenseindivactionstate.is_set
	|| clmgmtlicenseindivactionfailcause.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtlicenseactionindex.yfilter)
	|| ydk::is_set(clmgmtlicensenumber.yfilter)
	|| ydk::is_set(clmgmtlicenseindivactionstate.yfilter)
	|| ydk::is_set(clmgmtlicenseindivactionfailcause.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseActionResultTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionResultEntry";
    ADD_KEY_TOKEN(clmgmtlicenseactionindex, "clmgmtLicenseActionIndex");
    ADD_KEY_TOKEN(clmgmtlicensenumber, "clmgmtLicenseNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtlicenseactionindex.is_set || is_set(clmgmtlicenseactionindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionindex.get_name_leafdata());
    if (clmgmtlicensenumber.is_set || is_set(clmgmtlicensenumber.yfilter)) leaf_name_data.push_back(clmgmtlicensenumber.get_name_leafdata());
    if (clmgmtlicenseindivactionstate.is_set || is_set(clmgmtlicenseindivactionstate.yfilter)) leaf_name_data.push_back(clmgmtlicenseindivactionstate.get_name_leafdata());
    if (clmgmtlicenseindivactionfailcause.is_set || is_set(clmgmtlicenseindivactionfailcause.yfilter)) leaf_name_data.push_back(clmgmtlicenseindivactionfailcause.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtLicenseActionIndex")
    {
        clmgmtlicenseactionindex = value;
        clmgmtlicenseactionindex.value_namespace = name_space;
        clmgmtlicenseactionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseNumber")
    {
        clmgmtlicensenumber = value;
        clmgmtlicensenumber.value_namespace = name_space;
        clmgmtlicensenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseIndivActionState")
    {
        clmgmtlicenseindivactionstate = value;
        clmgmtlicenseindivactionstate.value_namespace = name_space;
        clmgmtlicenseindivactionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseIndivActionFailCause")
    {
        clmgmtlicenseindivactionfailcause = value;
        clmgmtlicenseindivactionfailcause.value_namespace = name_space;
        clmgmtlicenseindivactionfailcause.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtLicenseActionIndex")
    {
        clmgmtlicenseactionindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseNumber")
    {
        clmgmtlicensenumber.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseIndivActionState")
    {
        clmgmtlicenseindivactionstate.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseIndivActionFailCause")
    {
        clmgmtlicenseindivactionfailcause.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionIndex" || name == "clmgmtLicenseNumber" || name == "clmgmtLicenseIndivActionState" || name == "clmgmtLicenseIndivActionFailCause")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoTable()
    :
    clmgmtlicensestoreinfoentry(this, {"entphysicalindex", "clmgmtlicensestoreindex"})
{

    yang_name = "clmgmtLicenseStoreInfoTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::~ClmgmtLicenseStoreInfoTable()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clmgmtlicensestoreinfoentry.len(); index++)
    {
        if(clmgmtlicensestoreinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicensestoreinfoentry.len(); index++)
    {
        if(clmgmtlicensestoreinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseStoreInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseStoreInfoEntry")
    {
        auto ent_ = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry>();
        ent_->parent = this;
        clmgmtlicensestoreinfoentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clmgmtlicensestoreinfoentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseStoreInfoEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::ClmgmtLicenseStoreInfoEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtlicensestoreindex{YType::uint32, "clmgmtLicenseStoreIndex"},
    clmgmtlicensestorename{YType::str, "clmgmtLicenseStoreName"},
    clmgmtlicensestoretotalsize{YType::uint32, "clmgmtLicenseStoreTotalSize"},
    clmgmtlicensestoresizeremaining{YType::uint32, "clmgmtLicenseStoreSizeRemaining"}
{

    yang_name = "clmgmtLicenseStoreInfoEntry"; yang_parent_name = "clmgmtLicenseStoreInfoTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::~ClmgmtLicenseStoreInfoEntry()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| clmgmtlicensestoreindex.is_set
	|| clmgmtlicensestorename.is_set
	|| clmgmtlicensestoretotalsize.is_set
	|| clmgmtlicensestoresizeremaining.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtlicensestoreindex.yfilter)
	|| ydk::is_set(clmgmtlicensestorename.yfilter)
	|| ydk::is_set(clmgmtlicensestoretotalsize.yfilter)
	|| ydk::is_set(clmgmtlicensestoresizeremaining.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseStoreInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseStoreInfoEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(clmgmtlicensestoreindex, "clmgmtLicenseStoreIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtlicensestoreindex.is_set || is_set(clmgmtlicensestoreindex.yfilter)) leaf_name_data.push_back(clmgmtlicensestoreindex.get_name_leafdata());
    if (clmgmtlicensestorename.is_set || is_set(clmgmtlicensestorename.yfilter)) leaf_name_data.push_back(clmgmtlicensestorename.get_name_leafdata());
    if (clmgmtlicensestoretotalsize.is_set || is_set(clmgmtlicensestoretotalsize.yfilter)) leaf_name_data.push_back(clmgmtlicensestoretotalsize.get_name_leafdata());
    if (clmgmtlicensestoresizeremaining.is_set || is_set(clmgmtlicensestoresizeremaining.yfilter)) leaf_name_data.push_back(clmgmtlicensestoresizeremaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStoreIndex")
    {
        clmgmtlicensestoreindex = value;
        clmgmtlicensestoreindex.value_namespace = name_space;
        clmgmtlicensestoreindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStoreName")
    {
        clmgmtlicensestorename = value;
        clmgmtlicensestorename.value_namespace = name_space;
        clmgmtlicensestorename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStoreTotalSize")
    {
        clmgmtlicensestoretotalsize = value;
        clmgmtlicensestoretotalsize.value_namespace = name_space;
        clmgmtlicensestoretotalsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStoreSizeRemaining")
    {
        clmgmtlicensestoresizeremaining = value;
        clmgmtlicensestoresizeremaining.value_namespace = name_space;
        clmgmtlicensestoresizeremaining.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStoreIndex")
    {
        clmgmtlicensestoreindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStoreName")
    {
        clmgmtlicensestorename.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStoreTotalSize")
    {
        clmgmtlicensestoretotalsize.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStoreSizeRemaining")
    {
        clmgmtlicensestoresizeremaining.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtLicenseStoreIndex" || name == "clmgmtLicenseStoreName" || name == "clmgmtLicenseStoreTotalSize" || name == "clmgmtLicenseStoreSizeRemaining")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoTable()
    :
    clmgmtlicensedeviceinfoentry(this, {"entphysicalindex"})
{

    yang_name = "clmgmtLicenseDeviceInfoTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::~ClmgmtLicenseDeviceInfoTable()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clmgmtlicensedeviceinfoentry.len(); index++)
    {
        if(clmgmtlicensedeviceinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicensedeviceinfoentry.len(); index++)
    {
        if(clmgmtlicensedeviceinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseDeviceInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseDeviceInfoEntry")
    {
        auto ent_ = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry>();
        ent_->parent = this;
        clmgmtlicensedeviceinfoentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clmgmtlicensedeviceinfoentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseDeviceInfoEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::ClmgmtLicenseDeviceInfoEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtdefaultlicensestore{YType::uint32, "clmgmtDefaultLicenseStore"}
{

    yang_name = "clmgmtLicenseDeviceInfoEntry"; yang_parent_name = "clmgmtLicenseDeviceInfoTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::~ClmgmtLicenseDeviceInfoEntry()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| clmgmtdefaultlicensestore.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtdefaultlicensestore.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseDeviceInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseDeviceInfoEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtdefaultlicensestore.is_set || is_set(clmgmtdefaultlicensestore.yfilter)) leaf_name_data.push_back(clmgmtdefaultlicensestore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDefaultLicenseStore")
    {
        clmgmtdefaultlicensestore = value;
        clmgmtdefaultlicensestore.value_namespace = name_space;
        clmgmtdefaultlicensestore.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtDefaultLicenseStore")
    {
        clmgmtdefaultlicensestore.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtDefaultLicenseStore")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoTable()
    :
    clmgmtlicenseinfoentry(this, {"entphysicalindex", "clmgmtlicensestoreused", "clmgmtlicenseindex"})
{

    yang_name = "clmgmtLicenseInfoTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::~ClmgmtLicenseInfoTable()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clmgmtlicenseinfoentry.len(); index++)
    {
        if(clmgmtlicenseinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicenseinfoentry.len(); index++)
    {
        if(clmgmtlicenseinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseInfoEntry")
    {
        auto ent_ = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry>();
        ent_->parent = this;
        clmgmtlicenseinfoentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clmgmtlicenseinfoentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseInfoEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseInfoEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtlicensestoreused{YType::uint32, "clmgmtLicenseStoreUsed"},
    clmgmtlicenseindex{YType::uint32, "clmgmtLicenseIndex"},
    clmgmtlicensefeaturename{YType::str, "clmgmtLicenseFeatureName"},
    clmgmtlicensefeatureversion{YType::str, "clmgmtLicenseFeatureVersion"},
    clmgmtlicensetype{YType::enumeration, "clmgmtLicenseType"},
    clmgmtlicensecounted{YType::boolean, "clmgmtLicenseCounted"},
    clmgmtlicensevalidityperiod{YType::uint32, "clmgmtLicenseValidityPeriod"},
    clmgmtlicensevalidityperiodremaining{YType::uint32, "clmgmtLicenseValidityPeriodRemaining"},
    clmgmtlicenseexpiredperiod{YType::uint32, "clmgmtLicenseExpiredPeriod"},
    clmgmtlicensemaxusagecount{YType::uint32, "clmgmtLicenseMaxUsageCount"},
    clmgmtlicenseusagecountremaining{YType::uint32, "clmgmtLicenseUsageCountRemaining"},
    clmgmtlicenseeulastatus{YType::boolean, "clmgmtLicenseEULAStatus"},
    clmgmtlicensecomments{YType::str, "clmgmtLicenseComments"},
    clmgmtlicensestatus{YType::enumeration, "clmgmtLicenseStatus"},
    clmgmtlicensestartdate{YType::str, "clmgmtLicenseStartDate"},
    clmgmtlicenseenddate{YType::str, "clmgmtLicenseEndDate"},
    clmgmtlicenseperiodused{YType::uint32, "clmgmtLicensePeriodUsed"}
{

    yang_name = "clmgmtLicenseInfoEntry"; yang_parent_name = "clmgmtLicenseInfoTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::~ClmgmtLicenseInfoEntry()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| clmgmtlicensestoreused.is_set
	|| clmgmtlicenseindex.is_set
	|| clmgmtlicensefeaturename.is_set
	|| clmgmtlicensefeatureversion.is_set
	|| clmgmtlicensetype.is_set
	|| clmgmtlicensecounted.is_set
	|| clmgmtlicensevalidityperiod.is_set
	|| clmgmtlicensevalidityperiodremaining.is_set
	|| clmgmtlicenseexpiredperiod.is_set
	|| clmgmtlicensemaxusagecount.is_set
	|| clmgmtlicenseusagecountremaining.is_set
	|| clmgmtlicenseeulastatus.is_set
	|| clmgmtlicensecomments.is_set
	|| clmgmtlicensestatus.is_set
	|| clmgmtlicensestartdate.is_set
	|| clmgmtlicenseenddate.is_set
	|| clmgmtlicenseperiodused.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtlicensestoreused.yfilter)
	|| ydk::is_set(clmgmtlicenseindex.yfilter)
	|| ydk::is_set(clmgmtlicensefeaturename.yfilter)
	|| ydk::is_set(clmgmtlicensefeatureversion.yfilter)
	|| ydk::is_set(clmgmtlicensetype.yfilter)
	|| ydk::is_set(clmgmtlicensecounted.yfilter)
	|| ydk::is_set(clmgmtlicensevalidityperiod.yfilter)
	|| ydk::is_set(clmgmtlicensevalidityperiodremaining.yfilter)
	|| ydk::is_set(clmgmtlicenseexpiredperiod.yfilter)
	|| ydk::is_set(clmgmtlicensemaxusagecount.yfilter)
	|| ydk::is_set(clmgmtlicenseusagecountremaining.yfilter)
	|| ydk::is_set(clmgmtlicenseeulastatus.yfilter)
	|| ydk::is_set(clmgmtlicensecomments.yfilter)
	|| ydk::is_set(clmgmtlicensestatus.yfilter)
	|| ydk::is_set(clmgmtlicensestartdate.yfilter)
	|| ydk::is_set(clmgmtlicenseenddate.yfilter)
	|| ydk::is_set(clmgmtlicenseperiodused.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseInfoEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(clmgmtlicensestoreused, "clmgmtLicenseStoreUsed");
    ADD_KEY_TOKEN(clmgmtlicenseindex, "clmgmtLicenseIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtlicensestoreused.is_set || is_set(clmgmtlicensestoreused.yfilter)) leaf_name_data.push_back(clmgmtlicensestoreused.get_name_leafdata());
    if (clmgmtlicenseindex.is_set || is_set(clmgmtlicenseindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseindex.get_name_leafdata());
    if (clmgmtlicensefeaturename.is_set || is_set(clmgmtlicensefeaturename.yfilter)) leaf_name_data.push_back(clmgmtlicensefeaturename.get_name_leafdata());
    if (clmgmtlicensefeatureversion.is_set || is_set(clmgmtlicensefeatureversion.yfilter)) leaf_name_data.push_back(clmgmtlicensefeatureversion.get_name_leafdata());
    if (clmgmtlicensetype.is_set || is_set(clmgmtlicensetype.yfilter)) leaf_name_data.push_back(clmgmtlicensetype.get_name_leafdata());
    if (clmgmtlicensecounted.is_set || is_set(clmgmtlicensecounted.yfilter)) leaf_name_data.push_back(clmgmtlicensecounted.get_name_leafdata());
    if (clmgmtlicensevalidityperiod.is_set || is_set(clmgmtlicensevalidityperiod.yfilter)) leaf_name_data.push_back(clmgmtlicensevalidityperiod.get_name_leafdata());
    if (clmgmtlicensevalidityperiodremaining.is_set || is_set(clmgmtlicensevalidityperiodremaining.yfilter)) leaf_name_data.push_back(clmgmtlicensevalidityperiodremaining.get_name_leafdata());
    if (clmgmtlicenseexpiredperiod.is_set || is_set(clmgmtlicenseexpiredperiod.yfilter)) leaf_name_data.push_back(clmgmtlicenseexpiredperiod.get_name_leafdata());
    if (clmgmtlicensemaxusagecount.is_set || is_set(clmgmtlicensemaxusagecount.yfilter)) leaf_name_data.push_back(clmgmtlicensemaxusagecount.get_name_leafdata());
    if (clmgmtlicenseusagecountremaining.is_set || is_set(clmgmtlicenseusagecountremaining.yfilter)) leaf_name_data.push_back(clmgmtlicenseusagecountremaining.get_name_leafdata());
    if (clmgmtlicenseeulastatus.is_set || is_set(clmgmtlicenseeulastatus.yfilter)) leaf_name_data.push_back(clmgmtlicenseeulastatus.get_name_leafdata());
    if (clmgmtlicensecomments.is_set || is_set(clmgmtlicensecomments.yfilter)) leaf_name_data.push_back(clmgmtlicensecomments.get_name_leafdata());
    if (clmgmtlicensestatus.is_set || is_set(clmgmtlicensestatus.yfilter)) leaf_name_data.push_back(clmgmtlicensestatus.get_name_leafdata());
    if (clmgmtlicensestartdate.is_set || is_set(clmgmtlicensestartdate.yfilter)) leaf_name_data.push_back(clmgmtlicensestartdate.get_name_leafdata());
    if (clmgmtlicenseenddate.is_set || is_set(clmgmtlicenseenddate.yfilter)) leaf_name_data.push_back(clmgmtlicenseenddate.get_name_leafdata());
    if (clmgmtlicenseperiodused.is_set || is_set(clmgmtlicenseperiodused.yfilter)) leaf_name_data.push_back(clmgmtlicenseperiodused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStoreUsed")
    {
        clmgmtlicensestoreused = value;
        clmgmtlicensestoreused.value_namespace = name_space;
        clmgmtlicensestoreused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseIndex")
    {
        clmgmtlicenseindex = value;
        clmgmtlicenseindex.value_namespace = name_space;
        clmgmtlicenseindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseFeatureName")
    {
        clmgmtlicensefeaturename = value;
        clmgmtlicensefeaturename.value_namespace = name_space;
        clmgmtlicensefeaturename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseFeatureVersion")
    {
        clmgmtlicensefeatureversion = value;
        clmgmtlicensefeatureversion.value_namespace = name_space;
        clmgmtlicensefeatureversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseType")
    {
        clmgmtlicensetype = value;
        clmgmtlicensetype.value_namespace = name_space;
        clmgmtlicensetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseCounted")
    {
        clmgmtlicensecounted = value;
        clmgmtlicensecounted.value_namespace = name_space;
        clmgmtlicensecounted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseValidityPeriod")
    {
        clmgmtlicensevalidityperiod = value;
        clmgmtlicensevalidityperiod.value_namespace = name_space;
        clmgmtlicensevalidityperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseValidityPeriodRemaining")
    {
        clmgmtlicensevalidityperiodremaining = value;
        clmgmtlicensevalidityperiodremaining.value_namespace = name_space;
        clmgmtlicensevalidityperiodremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseExpiredPeriod")
    {
        clmgmtlicenseexpiredperiod = value;
        clmgmtlicenseexpiredperiod.value_namespace = name_space;
        clmgmtlicenseexpiredperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseMaxUsageCount")
    {
        clmgmtlicensemaxusagecount = value;
        clmgmtlicensemaxusagecount.value_namespace = name_space;
        clmgmtlicensemaxusagecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseUsageCountRemaining")
    {
        clmgmtlicenseusagecountremaining = value;
        clmgmtlicenseusagecountremaining.value_namespace = name_space;
        clmgmtlicenseusagecountremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseEULAStatus")
    {
        clmgmtlicenseeulastatus = value;
        clmgmtlicenseeulastatus.value_namespace = name_space;
        clmgmtlicenseeulastatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseComments")
    {
        clmgmtlicensecomments = value;
        clmgmtlicensecomments.value_namespace = name_space;
        clmgmtlicensecomments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStatus")
    {
        clmgmtlicensestatus = value;
        clmgmtlicensestatus.value_namespace = name_space;
        clmgmtlicensestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStartDate")
    {
        clmgmtlicensestartdate = value;
        clmgmtlicensestartdate.value_namespace = name_space;
        clmgmtlicensestartdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseEndDate")
    {
        clmgmtlicenseenddate = value;
        clmgmtlicenseenddate.value_namespace = name_space;
        clmgmtlicenseenddate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicensePeriodUsed")
    {
        clmgmtlicenseperiodused = value;
        clmgmtlicenseperiodused.value_namespace = name_space;
        clmgmtlicenseperiodused.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStoreUsed")
    {
        clmgmtlicensestoreused.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseIndex")
    {
        clmgmtlicenseindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseFeatureName")
    {
        clmgmtlicensefeaturename.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseFeatureVersion")
    {
        clmgmtlicensefeatureversion.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseType")
    {
        clmgmtlicensetype.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseCounted")
    {
        clmgmtlicensecounted.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseValidityPeriod")
    {
        clmgmtlicensevalidityperiod.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseValidityPeriodRemaining")
    {
        clmgmtlicensevalidityperiodremaining.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseExpiredPeriod")
    {
        clmgmtlicenseexpiredperiod.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseMaxUsageCount")
    {
        clmgmtlicensemaxusagecount.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseUsageCountRemaining")
    {
        clmgmtlicenseusagecountremaining.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseEULAStatus")
    {
        clmgmtlicenseeulastatus.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseComments")
    {
        clmgmtlicensecomments.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStatus")
    {
        clmgmtlicensestatus.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStartDate")
    {
        clmgmtlicensestartdate.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseEndDate")
    {
        clmgmtlicenseenddate.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicensePeriodUsed")
    {
        clmgmtlicenseperiodused.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtLicenseStoreUsed" || name == "clmgmtLicenseIndex" || name == "clmgmtLicenseFeatureName" || name == "clmgmtLicenseFeatureVersion" || name == "clmgmtLicenseType" || name == "clmgmtLicenseCounted" || name == "clmgmtLicenseValidityPeriod" || name == "clmgmtLicenseValidityPeriodRemaining" || name == "clmgmtLicenseExpiredPeriod" || name == "clmgmtLicenseMaxUsageCount" || name == "clmgmtLicenseUsageCountRemaining" || name == "clmgmtLicenseEULAStatus" || name == "clmgmtLicenseComments" || name == "clmgmtLicenseStatus" || name == "clmgmtLicenseStartDate" || name == "clmgmtLicenseEndDate" || name == "clmgmtLicensePeriodUsed")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureTable()
    :
    clmgmtlicensablefeatureentry(this, {"entphysicalindex", "clmgmtfeatureindex"})
{

    yang_name = "clmgmtLicensableFeatureTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::~ClmgmtLicensableFeatureTable()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clmgmtlicensablefeatureentry.len(); index++)
    {
        if(clmgmtlicensablefeatureentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicensablefeatureentry.len(); index++)
    {
        if(clmgmtlicensablefeatureentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicensableFeatureTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicensableFeatureEntry")
    {
        auto ent_ = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry>();
        ent_->parent = this;
        clmgmtlicensablefeatureentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clmgmtlicensablefeatureentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicensableFeatureEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::ClmgmtLicensableFeatureEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtfeatureindex{YType::uint32, "clmgmtFeatureIndex"},
    clmgmtfeaturename{YType::str, "clmgmtFeatureName"},
    clmgmtfeatureversion{YType::str, "clmgmtFeatureVersion"},
    clmgmtfeaturevalidityperiodremaining{YType::uint32, "clmgmtFeatureValidityPeriodRemaining"},
    clmgmtfeaturewhatiscounted{YType::str, "clmgmtFeatureWhatIsCounted"},
    clmgmtfeaturestartdate{YType::str, "clmgmtFeatureStartDate"},
    clmgmtfeatureenddate{YType::str, "clmgmtFeatureEndDate"},
    clmgmtfeatureperiodused{YType::uint32, "clmgmtFeaturePeriodUsed"}
{

    yang_name = "clmgmtLicensableFeatureEntry"; yang_parent_name = "clmgmtLicensableFeatureTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::~ClmgmtLicensableFeatureEntry()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| clmgmtfeatureindex.is_set
	|| clmgmtfeaturename.is_set
	|| clmgmtfeatureversion.is_set
	|| clmgmtfeaturevalidityperiodremaining.is_set
	|| clmgmtfeaturewhatiscounted.is_set
	|| clmgmtfeaturestartdate.is_set
	|| clmgmtfeatureenddate.is_set
	|| clmgmtfeatureperiodused.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtfeatureindex.yfilter)
	|| ydk::is_set(clmgmtfeaturename.yfilter)
	|| ydk::is_set(clmgmtfeatureversion.yfilter)
	|| ydk::is_set(clmgmtfeaturevalidityperiodremaining.yfilter)
	|| ydk::is_set(clmgmtfeaturewhatiscounted.yfilter)
	|| ydk::is_set(clmgmtfeaturestartdate.yfilter)
	|| ydk::is_set(clmgmtfeatureenddate.yfilter)
	|| ydk::is_set(clmgmtfeatureperiodused.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicensableFeatureTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicensableFeatureEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(clmgmtfeatureindex, "clmgmtFeatureIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtfeatureindex.is_set || is_set(clmgmtfeatureindex.yfilter)) leaf_name_data.push_back(clmgmtfeatureindex.get_name_leafdata());
    if (clmgmtfeaturename.is_set || is_set(clmgmtfeaturename.yfilter)) leaf_name_data.push_back(clmgmtfeaturename.get_name_leafdata());
    if (clmgmtfeatureversion.is_set || is_set(clmgmtfeatureversion.yfilter)) leaf_name_data.push_back(clmgmtfeatureversion.get_name_leafdata());
    if (clmgmtfeaturevalidityperiodremaining.is_set || is_set(clmgmtfeaturevalidityperiodremaining.yfilter)) leaf_name_data.push_back(clmgmtfeaturevalidityperiodremaining.get_name_leafdata());
    if (clmgmtfeaturewhatiscounted.is_set || is_set(clmgmtfeaturewhatiscounted.yfilter)) leaf_name_data.push_back(clmgmtfeaturewhatiscounted.get_name_leafdata());
    if (clmgmtfeaturestartdate.is_set || is_set(clmgmtfeaturestartdate.yfilter)) leaf_name_data.push_back(clmgmtfeaturestartdate.get_name_leafdata());
    if (clmgmtfeatureenddate.is_set || is_set(clmgmtfeatureenddate.yfilter)) leaf_name_data.push_back(clmgmtfeatureenddate.get_name_leafdata());
    if (clmgmtfeatureperiodused.is_set || is_set(clmgmtfeatureperiodused.yfilter)) leaf_name_data.push_back(clmgmtfeatureperiodused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureIndex")
    {
        clmgmtfeatureindex = value;
        clmgmtfeatureindex.value_namespace = name_space;
        clmgmtfeatureindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureName")
    {
        clmgmtfeaturename = value;
        clmgmtfeaturename.value_namespace = name_space;
        clmgmtfeaturename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureVersion")
    {
        clmgmtfeatureversion = value;
        clmgmtfeatureversion.value_namespace = name_space;
        clmgmtfeatureversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureValidityPeriodRemaining")
    {
        clmgmtfeaturevalidityperiodremaining = value;
        clmgmtfeaturevalidityperiodremaining.value_namespace = name_space;
        clmgmtfeaturevalidityperiodremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureWhatIsCounted")
    {
        clmgmtfeaturewhatiscounted = value;
        clmgmtfeaturewhatiscounted.value_namespace = name_space;
        clmgmtfeaturewhatiscounted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureStartDate")
    {
        clmgmtfeaturestartdate = value;
        clmgmtfeaturestartdate.value_namespace = name_space;
        clmgmtfeaturestartdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureEndDate")
    {
        clmgmtfeatureenddate = value;
        clmgmtfeatureenddate.value_namespace = name_space;
        clmgmtfeatureenddate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeaturePeriodUsed")
    {
        clmgmtfeatureperiodused = value;
        clmgmtfeatureperiodused.value_namespace = name_space;
        clmgmtfeatureperiodused.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureIndex")
    {
        clmgmtfeatureindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureName")
    {
        clmgmtfeaturename.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureVersion")
    {
        clmgmtfeatureversion.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureValidityPeriodRemaining")
    {
        clmgmtfeaturevalidityperiodremaining.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureWhatIsCounted")
    {
        clmgmtfeaturewhatiscounted.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureStartDate")
    {
        clmgmtfeaturestartdate.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureEndDate")
    {
        clmgmtfeatureenddate.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeaturePeriodUsed")
    {
        clmgmtfeatureperiodused.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtFeatureIndex" || name == "clmgmtFeatureName" || name == "clmgmtFeatureVersion" || name == "clmgmtFeatureValidityPeriodRemaining" || name == "clmgmtFeatureWhatIsCounted" || name == "clmgmtFeatureStartDate" || name == "clmgmtFeatureEndDate" || name == "clmgmtFeaturePeriodUsed")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionTable()
    :
    clmgmtdevcredexportactionentry(this, {"clmgmtdevcredexportactionindex"})
{

    yang_name = "clmgmtDevCredExportActionTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::~ClmgmtDevCredExportActionTable()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clmgmtdevcredexportactionentry.len(); index++)
    {
        if(clmgmtdevcredexportactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtdevcredexportactionentry.len(); index++)
    {
        if(clmgmtdevcredexportactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtDevCredExportActionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtDevCredExportActionEntry")
    {
        auto ent_ = std::make_shared<CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry>();
        ent_->parent = this;
        clmgmtdevcredexportactionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clmgmtdevcredexportactionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtDevCredExportActionEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredExportActionEntry()
    :
    clmgmtdevcredexportactionindex{YType::uint32, "clmgmtDevCredExportActionIndex"},
    clmgmtdevcredentphysicalindex{YType::int32, "clmgmtDevCredEntPhysicalIndex"},
    clmgmtdevcredtransferprotocol{YType::enumeration, "clmgmtDevCredTransferProtocol"},
    clmgmtdevcredserveraddresstype{YType::enumeration, "clmgmtDevCredServerAddressType"},
    clmgmtdevcredserveraddress{YType::str, "clmgmtDevCredServerAddress"},
    clmgmtdevcredserverusername{YType::str, "clmgmtDevCredServerUsername"},
    clmgmtdevcredserverpassword{YType::str, "clmgmtDevCredServerPassword"},
    clmgmtdevcredexportfile{YType::str, "clmgmtDevCredExportFile"},
    clmgmtdevcredcommand{YType::enumeration, "clmgmtDevCredCommand"},
    clmgmtdevcredcommandstate{YType::enumeration, "clmgmtDevCredCommandState"},
    clmgmtdevcredcommandfailcause{YType::enumeration, "clmgmtDevCredCommandFailCause"},
    clmgmtdevcredstoragetype{YType::enumeration, "clmgmtDevCredStorageType"},
    clmgmtdevcredrowstatus{YType::enumeration, "clmgmtDevCredRowStatus"}
{

    yang_name = "clmgmtDevCredExportActionEntry"; yang_parent_name = "clmgmtDevCredExportActionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::~ClmgmtDevCredExportActionEntry()
{
}

bool CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::has_data() const
{
    if (is_presence_container) return true;
    return clmgmtdevcredexportactionindex.is_set
	|| clmgmtdevcredentphysicalindex.is_set
	|| clmgmtdevcredtransferprotocol.is_set
	|| clmgmtdevcredserveraddresstype.is_set
	|| clmgmtdevcredserveraddress.is_set
	|| clmgmtdevcredserverusername.is_set
	|| clmgmtdevcredserverpassword.is_set
	|| clmgmtdevcredexportfile.is_set
	|| clmgmtdevcredcommand.is_set
	|| clmgmtdevcredcommandstate.is_set
	|| clmgmtdevcredcommandfailcause.is_set
	|| clmgmtdevcredstoragetype.is_set
	|| clmgmtdevcredrowstatus.is_set;
}

bool CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtdevcredexportactionindex.yfilter)
	|| ydk::is_set(clmgmtdevcredentphysicalindex.yfilter)
	|| ydk::is_set(clmgmtdevcredtransferprotocol.yfilter)
	|| ydk::is_set(clmgmtdevcredserveraddresstype.yfilter)
	|| ydk::is_set(clmgmtdevcredserveraddress.yfilter)
	|| ydk::is_set(clmgmtdevcredserverusername.yfilter)
	|| ydk::is_set(clmgmtdevcredserverpassword.yfilter)
	|| ydk::is_set(clmgmtdevcredexportfile.yfilter)
	|| ydk::is_set(clmgmtdevcredcommand.yfilter)
	|| ydk::is_set(clmgmtdevcredcommandstate.yfilter)
	|| ydk::is_set(clmgmtdevcredcommandfailcause.yfilter)
	|| ydk::is_set(clmgmtdevcredstoragetype.yfilter)
	|| ydk::is_set(clmgmtdevcredrowstatus.yfilter);
}

std::string CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtDevCredExportActionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtDevCredExportActionEntry";
    ADD_KEY_TOKEN(clmgmtdevcredexportactionindex, "clmgmtDevCredExportActionIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtdevcredexportactionindex.is_set || is_set(clmgmtdevcredexportactionindex.yfilter)) leaf_name_data.push_back(clmgmtdevcredexportactionindex.get_name_leafdata());
    if (clmgmtdevcredentphysicalindex.is_set || is_set(clmgmtdevcredentphysicalindex.yfilter)) leaf_name_data.push_back(clmgmtdevcredentphysicalindex.get_name_leafdata());
    if (clmgmtdevcredtransferprotocol.is_set || is_set(clmgmtdevcredtransferprotocol.yfilter)) leaf_name_data.push_back(clmgmtdevcredtransferprotocol.get_name_leafdata());
    if (clmgmtdevcredserveraddresstype.is_set || is_set(clmgmtdevcredserveraddresstype.yfilter)) leaf_name_data.push_back(clmgmtdevcredserveraddresstype.get_name_leafdata());
    if (clmgmtdevcredserveraddress.is_set || is_set(clmgmtdevcredserveraddress.yfilter)) leaf_name_data.push_back(clmgmtdevcredserveraddress.get_name_leafdata());
    if (clmgmtdevcredserverusername.is_set || is_set(clmgmtdevcredserverusername.yfilter)) leaf_name_data.push_back(clmgmtdevcredserverusername.get_name_leafdata());
    if (clmgmtdevcredserverpassword.is_set || is_set(clmgmtdevcredserverpassword.yfilter)) leaf_name_data.push_back(clmgmtdevcredserverpassword.get_name_leafdata());
    if (clmgmtdevcredexportfile.is_set || is_set(clmgmtdevcredexportfile.yfilter)) leaf_name_data.push_back(clmgmtdevcredexportfile.get_name_leafdata());
    if (clmgmtdevcredcommand.is_set || is_set(clmgmtdevcredcommand.yfilter)) leaf_name_data.push_back(clmgmtdevcredcommand.get_name_leafdata());
    if (clmgmtdevcredcommandstate.is_set || is_set(clmgmtdevcredcommandstate.yfilter)) leaf_name_data.push_back(clmgmtdevcredcommandstate.get_name_leafdata());
    if (clmgmtdevcredcommandfailcause.is_set || is_set(clmgmtdevcredcommandfailcause.yfilter)) leaf_name_data.push_back(clmgmtdevcredcommandfailcause.get_name_leafdata());
    if (clmgmtdevcredstoragetype.is_set || is_set(clmgmtdevcredstoragetype.yfilter)) leaf_name_data.push_back(clmgmtdevcredstoragetype.get_name_leafdata());
    if (clmgmtdevcredrowstatus.is_set || is_set(clmgmtdevcredrowstatus.yfilter)) leaf_name_data.push_back(clmgmtdevcredrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtDevCredExportActionIndex")
    {
        clmgmtdevcredexportactionindex = value;
        clmgmtdevcredexportactionindex.value_namespace = name_space;
        clmgmtdevcredexportactionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredEntPhysicalIndex")
    {
        clmgmtdevcredentphysicalindex = value;
        clmgmtdevcredentphysicalindex.value_namespace = name_space;
        clmgmtdevcredentphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredTransferProtocol")
    {
        clmgmtdevcredtransferprotocol = value;
        clmgmtdevcredtransferprotocol.value_namespace = name_space;
        clmgmtdevcredtransferprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerAddressType")
    {
        clmgmtdevcredserveraddresstype = value;
        clmgmtdevcredserveraddresstype.value_namespace = name_space;
        clmgmtdevcredserveraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerAddress")
    {
        clmgmtdevcredserveraddress = value;
        clmgmtdevcredserveraddress.value_namespace = name_space;
        clmgmtdevcredserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerUsername")
    {
        clmgmtdevcredserverusername = value;
        clmgmtdevcredserverusername.value_namespace = name_space;
        clmgmtdevcredserverusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerPassword")
    {
        clmgmtdevcredserverpassword = value;
        clmgmtdevcredserverpassword.value_namespace = name_space;
        clmgmtdevcredserverpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredExportFile")
    {
        clmgmtdevcredexportfile = value;
        clmgmtdevcredexportfile.value_namespace = name_space;
        clmgmtdevcredexportfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredCommand")
    {
        clmgmtdevcredcommand = value;
        clmgmtdevcredcommand.value_namespace = name_space;
        clmgmtdevcredcommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredCommandState")
    {
        clmgmtdevcredcommandstate = value;
        clmgmtdevcredcommandstate.value_namespace = name_space;
        clmgmtdevcredcommandstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredCommandFailCause")
    {
        clmgmtdevcredcommandfailcause = value;
        clmgmtdevcredcommandfailcause.value_namespace = name_space;
        clmgmtdevcredcommandfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredStorageType")
    {
        clmgmtdevcredstoragetype = value;
        clmgmtdevcredstoragetype.value_namespace = name_space;
        clmgmtdevcredstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredRowStatus")
    {
        clmgmtdevcredrowstatus = value;
        clmgmtdevcredrowstatus.value_namespace = name_space;
        clmgmtdevcredrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtDevCredExportActionIndex")
    {
        clmgmtdevcredexportactionindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredEntPhysicalIndex")
    {
        clmgmtdevcredentphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredTransferProtocol")
    {
        clmgmtdevcredtransferprotocol.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerAddressType")
    {
        clmgmtdevcredserveraddresstype.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerAddress")
    {
        clmgmtdevcredserveraddress.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerUsername")
    {
        clmgmtdevcredserverusername.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerPassword")
    {
        clmgmtdevcredserverpassword.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredExportFile")
    {
        clmgmtdevcredexportfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredCommand")
    {
        clmgmtdevcredcommand.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredCommandState")
    {
        clmgmtdevcredcommandstate.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredCommandFailCause")
    {
        clmgmtdevcredcommandfailcause.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredStorageType")
    {
        clmgmtdevcredstoragetype.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredRowStatus")
    {
        clmgmtdevcredrowstatus.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtDevCredExportActionIndex" || name == "clmgmtDevCredEntPhysicalIndex" || name == "clmgmtDevCredTransferProtocol" || name == "clmgmtDevCredServerAddressType" || name == "clmgmtDevCredServerAddress" || name == "clmgmtDevCredServerUsername" || name == "clmgmtDevCredServerPassword" || name == "clmgmtDevCredExportFile" || name == "clmgmtDevCredCommand" || name == "clmgmtDevCredCommandState" || name == "clmgmtDevCredCommandFailCause" || name == "clmgmtDevCredStorageType" || name == "clmgmtDevCredRowStatus")
        return true;
    return false;
}

const Enum::YLeaf ClmgmtLicenseTransferProtocol::none {1, "none"};
const Enum::YLeaf ClmgmtLicenseTransferProtocol::local {2, "local"};
const Enum::YLeaf ClmgmtLicenseTransferProtocol::tftp {3, "tftp"};
const Enum::YLeaf ClmgmtLicenseTransferProtocol::ftp {4, "ftp"};
const Enum::YLeaf ClmgmtLicenseTransferProtocol::rcp {5, "rcp"};
const Enum::YLeaf ClmgmtLicenseTransferProtocol::http {6, "http"};
const Enum::YLeaf ClmgmtLicenseTransferProtocol::scp {7, "scp"};
const Enum::YLeaf ClmgmtLicenseTransferProtocol::sftp {8, "sftp"};

const Enum::YLeaf ClmgmtLicenseActionState::none {1, "none"};
const Enum::YLeaf ClmgmtLicenseActionState::pending {2, "pending"};
const Enum::YLeaf ClmgmtLicenseActionState::inProgress {3, "inProgress"};
const Enum::YLeaf ClmgmtLicenseActionState::successful {4, "successful"};
const Enum::YLeaf ClmgmtLicenseActionState::partiallySuccessful {5, "partiallySuccessful"};
const Enum::YLeaf ClmgmtLicenseActionState::failed {6, "failed"};

const Enum::YLeaf ClmgmtLicenseActionFailCause::none {1, "none"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::generalFailure {2, "generalFailure"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::transferProtocolNotSupported {3, "transferProtocolNotSupported"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::fileServerNotReachable {4, "fileServerNotReachable"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::unrecognizedEntPhysicalIndex {5, "unrecognizedEntPhysicalIndex"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicenseFilePath {6, "invalidLicenseFilePath"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicenseFile {7, "invalidLicenseFile"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicenseLine {8, "invalidLicenseLine"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::licenseAlreadyExists {9, "licenseAlreadyExists"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::licenseNotValidForDevice {10, "licenseNotValidForDevice"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicenseCount {11, "invalidLicenseCount"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicensePeriod {12, "invalidLicensePeriod"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::licenseInUse {13, "licenseInUse"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicenseStore {14, "invalidLicenseStore"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::licenseStorageFull {15, "licenseStorageFull"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidPermissionTicketFile {16, "invalidPermissionTicketFile"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidPermissionTicket {17, "invalidPermissionTicket"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidRehostTicketFile {18, "invalidRehostTicketFile"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidRehostTicket {19, "invalidRehostTicket"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicenseBackupFile {20, "invalidLicenseBackupFile"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::licenseClearInProgress {21, "licenseClearInProgress"};
const Enum::YLeaf ClmgmtLicenseActionFailCause::invalidLicenseEULAFile {22, "invalidLicenseEULAFile"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::ClmgmtLicenseErrorNotifEnable::other {0, "other"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::ClmgmtLicenseErrorNotifEnable::true_ {1, "true"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::ClmgmtLicenseErrorNotifEnable::false_ {2, "false"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction::noOp {1, "noOp"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction::install {2, "install"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction::clear {3, "clear"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction::processPermissionTicket {4, "processPermissionTicket"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction::regenerateLastRehostTicket {5, "regenerateLastRehostTicket"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction::backup {6, "backup"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction::generateEULA {7, "generateEULA"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::demo {1, "demo"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::extension {2, "extension"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::gracePeriod {3, "gracePeriod"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::permanent {4, "permanent"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::paidSubscription {5, "paidSubscription"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::evaluationSubscription {6, "evaluationSubscription"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::extensionSubscription {7, "extensionSubscription"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::evalRightToUse {8, "evalRightToUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::rightToUse {9, "rightToUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType::permanentRightToUse {10, "permanentRightToUse"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseStatus::inactive {1, "inactive"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseStatus::notInUse {2, "notInUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseStatus::inUse {3, "inUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseStatus::expiredInUse {4, "expiredInUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseStatus::expiredNotInUse {5, "expiredNotInUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseStatus::usageCountConsumed {6, "usageCountConsumed"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommand::noOp {1, "noOp"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommand::getDeviceCredentials {2, "getDeviceCredentials"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommandFailCause::none {1, "none"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommandFailCause::unknownError {2, "unknownError"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommandFailCause::transferProtocolNotSupported {3, "transferProtocolNotSupported"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommandFailCause::fileServerNotReachable {4, "fileServerNotReachable"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommandFailCause::unrecognizedEntPhysicalIndex {5, "unrecognizedEntPhysicalIndex"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommandFailCause::invalidFile {6, "invalidFile"};


}
}

