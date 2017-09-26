
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
    clmgmtdevcredexportactiontable(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable>())
	,clmgmtlicensablefeaturetable(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable>())
	,clmgmtlicenseactionresulttable(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable>())
	,clmgmtlicenseactiontable(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable>())
	,clmgmtlicenseconfiguration(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration>())
	,clmgmtlicensedeviceinformation(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation>())
	,clmgmtlicensedeviceinfotable(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable>())
	,clmgmtlicenseinfotable(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable>())
	,clmgmtlicensenotifobjects(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects>())
	,clmgmtlicensestoreinfotable(std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable>())
{
    clmgmtdevcredexportactiontable->parent = this;
    clmgmtlicensablefeaturetable->parent = this;
    clmgmtlicenseactionresulttable->parent = this;
    clmgmtlicenseactiontable->parent = this;
    clmgmtlicenseconfiguration->parent = this;
    clmgmtlicensedeviceinformation->parent = this;
    clmgmtlicensedeviceinfotable->parent = this;
    clmgmtlicenseinfotable->parent = this;
    clmgmtlicensenotifobjects->parent = this;
    clmgmtlicensestoreinfotable->parent = this;

    yang_name = "CISCO-LICENSE-MGMT-MIB"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::~CISCOLICENSEMGMTMIB()
{
}

bool CISCOLICENSEMGMTMIB::has_data() const
{
    return (clmgmtdevcredexportactiontable !=  nullptr && clmgmtdevcredexportactiontable->has_data())
	|| (clmgmtlicensablefeaturetable !=  nullptr && clmgmtlicensablefeaturetable->has_data())
	|| (clmgmtlicenseactionresulttable !=  nullptr && clmgmtlicenseactionresulttable->has_data())
	|| (clmgmtlicenseactiontable !=  nullptr && clmgmtlicenseactiontable->has_data())
	|| (clmgmtlicenseconfiguration !=  nullptr && clmgmtlicenseconfiguration->has_data())
	|| (clmgmtlicensedeviceinformation !=  nullptr && clmgmtlicensedeviceinformation->has_data())
	|| (clmgmtlicensedeviceinfotable !=  nullptr && clmgmtlicensedeviceinfotable->has_data())
	|| (clmgmtlicenseinfotable !=  nullptr && clmgmtlicenseinfotable->has_data())
	|| (clmgmtlicensenotifobjects !=  nullptr && clmgmtlicensenotifobjects->has_data())
	|| (clmgmtlicensestoreinfotable !=  nullptr && clmgmtlicensestoreinfotable->has_data());
}

bool CISCOLICENSEMGMTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (clmgmtdevcredexportactiontable !=  nullptr && clmgmtdevcredexportactiontable->has_operation())
	|| (clmgmtlicensablefeaturetable !=  nullptr && clmgmtlicensablefeaturetable->has_operation())
	|| (clmgmtlicenseactionresulttable !=  nullptr && clmgmtlicenseactionresulttable->has_operation())
	|| (clmgmtlicenseactiontable !=  nullptr && clmgmtlicenseactiontable->has_operation())
	|| (clmgmtlicenseconfiguration !=  nullptr && clmgmtlicenseconfiguration->has_operation())
	|| (clmgmtlicensedeviceinformation !=  nullptr && clmgmtlicensedeviceinformation->has_operation())
	|| (clmgmtlicensedeviceinfotable !=  nullptr && clmgmtlicensedeviceinfotable->has_operation())
	|| (clmgmtlicenseinfotable !=  nullptr && clmgmtlicenseinfotable->has_operation())
	|| (clmgmtlicensenotifobjects !=  nullptr && clmgmtlicensenotifobjects->has_operation())
	|| (clmgmtlicensestoreinfotable !=  nullptr && clmgmtlicensestoreinfotable->has_operation());
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

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtDevCredExportActionTable")
    {
        if(clmgmtdevcredexportactiontable == nullptr)
        {
            clmgmtdevcredexportactiontable = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable>();
        }
        return clmgmtdevcredexportactiontable;
    }

    if(child_yang_name == "clmgmtLicensableFeatureTable")
    {
        if(clmgmtlicensablefeaturetable == nullptr)
        {
            clmgmtlicensablefeaturetable = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable>();
        }
        return clmgmtlicensablefeaturetable;
    }

    if(child_yang_name == "clmgmtLicenseActionResultTable")
    {
        if(clmgmtlicenseactionresulttable == nullptr)
        {
            clmgmtlicenseactionresulttable = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable>();
        }
        return clmgmtlicenseactionresulttable;
    }

    if(child_yang_name == "clmgmtLicenseActionTable")
    {
        if(clmgmtlicenseactiontable == nullptr)
        {
            clmgmtlicenseactiontable = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable>();
        }
        return clmgmtlicenseactiontable;
    }

    if(child_yang_name == "clmgmtLicenseConfiguration")
    {
        if(clmgmtlicenseconfiguration == nullptr)
        {
            clmgmtlicenseconfiguration = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration>();
        }
        return clmgmtlicenseconfiguration;
    }

    if(child_yang_name == "clmgmtLicenseDeviceInformation")
    {
        if(clmgmtlicensedeviceinformation == nullptr)
        {
            clmgmtlicensedeviceinformation = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation>();
        }
        return clmgmtlicensedeviceinformation;
    }

    if(child_yang_name == "clmgmtLicenseDeviceInfoTable")
    {
        if(clmgmtlicensedeviceinfotable == nullptr)
        {
            clmgmtlicensedeviceinfotable = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable>();
        }
        return clmgmtlicensedeviceinfotable;
    }

    if(child_yang_name == "clmgmtLicenseInfoTable")
    {
        if(clmgmtlicenseinfotable == nullptr)
        {
            clmgmtlicenseinfotable = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable>();
        }
        return clmgmtlicenseinfotable;
    }

    if(child_yang_name == "clmgmtLicenseNotifObjects")
    {
        if(clmgmtlicensenotifobjects == nullptr)
        {
            clmgmtlicensenotifobjects = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects>();
        }
        return clmgmtlicensenotifobjects;
    }

    if(child_yang_name == "clmgmtLicenseStoreInfoTable")
    {
        if(clmgmtlicensestoreinfotable == nullptr)
        {
            clmgmtlicensestoreinfotable = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable>();
        }
        return clmgmtlicensestoreinfotable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clmgmtdevcredexportactiontable != nullptr)
    {
        children["clmgmtDevCredExportActionTable"] = clmgmtdevcredexportactiontable;
    }

    if(clmgmtlicensablefeaturetable != nullptr)
    {
        children["clmgmtLicensableFeatureTable"] = clmgmtlicensablefeaturetable;
    }

    if(clmgmtlicenseactionresulttable != nullptr)
    {
        children["clmgmtLicenseActionResultTable"] = clmgmtlicenseactionresulttable;
    }

    if(clmgmtlicenseactiontable != nullptr)
    {
        children["clmgmtLicenseActionTable"] = clmgmtlicenseactiontable;
    }

    if(clmgmtlicenseconfiguration != nullptr)
    {
        children["clmgmtLicenseConfiguration"] = clmgmtlicenseconfiguration;
    }

    if(clmgmtlicensedeviceinformation != nullptr)
    {
        children["clmgmtLicenseDeviceInformation"] = clmgmtlicensedeviceinformation;
    }

    if(clmgmtlicensedeviceinfotable != nullptr)
    {
        children["clmgmtLicenseDeviceInfoTable"] = clmgmtlicensedeviceinfotable;
    }

    if(clmgmtlicenseinfotable != nullptr)
    {
        children["clmgmtLicenseInfoTable"] = clmgmtlicenseinfotable;
    }

    if(clmgmtlicensenotifobjects != nullptr)
    {
        children["clmgmtLicenseNotifObjects"] = clmgmtlicensenotifobjects;
    }

    if(clmgmtlicensestoreinfotable != nullptr)
    {
        children["clmgmtLicenseStoreInfoTable"] = clmgmtlicensestoreinfotable;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::clone_ptr() const
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
    if(name == "clmgmtDevCredExportActionTable" || name == "clmgmtLicensableFeatureTable" || name == "clmgmtLicenseActionResultTable" || name == "clmgmtLicenseActionTable" || name == "clmgmtLicenseConfiguration" || name == "clmgmtLicenseDeviceInformation" || name == "clmgmtLicenseDeviceInfoTable" || name == "clmgmtLicenseInfoTable" || name == "clmgmtLicenseNotifObjects" || name == "clmgmtLicenseStoreInfoTable")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactiontable()
{

    yang_name = "clmgmtDevCredExportActionTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::~Clmgmtdevcredexportactiontable()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::has_data() const
{
    for (std::size_t index=0; index<clmgmtdevcredexportactionentry.size(); index++)
    {
        if(clmgmtdevcredexportactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtdevcredexportactionentry.size(); index++)
    {
        if(clmgmtdevcredexportactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtDevCredExportActionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtDevCredExportActionEntry")
    {
        for(auto const & c : clmgmtdevcredexportactionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry>();
        c->parent = this;
        clmgmtdevcredexportactionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clmgmtdevcredexportactionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtDevCredExportActionEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredexportactionentry()
    :
    clmgmtdevcredexportactionindex{YType::uint32, "clmgmtDevCredExportActionIndex"},
    clmgmtdevcredcommand{YType::enumeration, "clmgmtDevCredCommand"},
    clmgmtdevcredcommandfailcause{YType::enumeration, "clmgmtDevCredCommandFailCause"},
    clmgmtdevcredcommandstate{YType::enumeration, "clmgmtDevCredCommandState"},
    clmgmtdevcredentphysicalindex{YType::int32, "clmgmtDevCredEntPhysicalIndex"},
    clmgmtdevcredexportfile{YType::str, "clmgmtDevCredExportFile"},
    clmgmtdevcredrowstatus{YType::enumeration, "clmgmtDevCredRowStatus"},
    clmgmtdevcredserveraddress{YType::str, "clmgmtDevCredServerAddress"},
    clmgmtdevcredserveraddresstype{YType::enumeration, "clmgmtDevCredServerAddressType"},
    clmgmtdevcredserverpassword{YType::str, "clmgmtDevCredServerPassword"},
    clmgmtdevcredserverusername{YType::str, "clmgmtDevCredServerUsername"},
    clmgmtdevcredstoragetype{YType::enumeration, "clmgmtDevCredStorageType"},
    clmgmtdevcredtransferprotocol{YType::enumeration, "clmgmtDevCredTransferProtocol"}
{

    yang_name = "clmgmtDevCredExportActionEntry"; yang_parent_name = "clmgmtDevCredExportActionTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::~Clmgmtdevcredexportactionentry()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::has_data() const
{
    return clmgmtdevcredexportactionindex.is_set
	|| clmgmtdevcredcommand.is_set
	|| clmgmtdevcredcommandfailcause.is_set
	|| clmgmtdevcredcommandstate.is_set
	|| clmgmtdevcredentphysicalindex.is_set
	|| clmgmtdevcredexportfile.is_set
	|| clmgmtdevcredrowstatus.is_set
	|| clmgmtdevcredserveraddress.is_set
	|| clmgmtdevcredserveraddresstype.is_set
	|| clmgmtdevcredserverpassword.is_set
	|| clmgmtdevcredserverusername.is_set
	|| clmgmtdevcredstoragetype.is_set
	|| clmgmtdevcredtransferprotocol.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtdevcredexportactionindex.yfilter)
	|| ydk::is_set(clmgmtdevcredcommand.yfilter)
	|| ydk::is_set(clmgmtdevcredcommandfailcause.yfilter)
	|| ydk::is_set(clmgmtdevcredcommandstate.yfilter)
	|| ydk::is_set(clmgmtdevcredentphysicalindex.yfilter)
	|| ydk::is_set(clmgmtdevcredexportfile.yfilter)
	|| ydk::is_set(clmgmtdevcredrowstatus.yfilter)
	|| ydk::is_set(clmgmtdevcredserveraddress.yfilter)
	|| ydk::is_set(clmgmtdevcredserveraddresstype.yfilter)
	|| ydk::is_set(clmgmtdevcredserverpassword.yfilter)
	|| ydk::is_set(clmgmtdevcredserverusername.yfilter)
	|| ydk::is_set(clmgmtdevcredstoragetype.yfilter)
	|| ydk::is_set(clmgmtdevcredtransferprotocol.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtDevCredExportActionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtDevCredExportActionEntry" <<"[clmgmtDevCredExportActionIndex='" <<clmgmtdevcredexportactionindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtdevcredexportactionindex.is_set || is_set(clmgmtdevcredexportactionindex.yfilter)) leaf_name_data.push_back(clmgmtdevcredexportactionindex.get_name_leafdata());
    if (clmgmtdevcredcommand.is_set || is_set(clmgmtdevcredcommand.yfilter)) leaf_name_data.push_back(clmgmtdevcredcommand.get_name_leafdata());
    if (clmgmtdevcredcommandfailcause.is_set || is_set(clmgmtdevcredcommandfailcause.yfilter)) leaf_name_data.push_back(clmgmtdevcredcommandfailcause.get_name_leafdata());
    if (clmgmtdevcredcommandstate.is_set || is_set(clmgmtdevcredcommandstate.yfilter)) leaf_name_data.push_back(clmgmtdevcredcommandstate.get_name_leafdata());
    if (clmgmtdevcredentphysicalindex.is_set || is_set(clmgmtdevcredentphysicalindex.yfilter)) leaf_name_data.push_back(clmgmtdevcredentphysicalindex.get_name_leafdata());
    if (clmgmtdevcredexportfile.is_set || is_set(clmgmtdevcredexportfile.yfilter)) leaf_name_data.push_back(clmgmtdevcredexportfile.get_name_leafdata());
    if (clmgmtdevcredrowstatus.is_set || is_set(clmgmtdevcredrowstatus.yfilter)) leaf_name_data.push_back(clmgmtdevcredrowstatus.get_name_leafdata());
    if (clmgmtdevcredserveraddress.is_set || is_set(clmgmtdevcredserveraddress.yfilter)) leaf_name_data.push_back(clmgmtdevcredserveraddress.get_name_leafdata());
    if (clmgmtdevcredserveraddresstype.is_set || is_set(clmgmtdevcredserveraddresstype.yfilter)) leaf_name_data.push_back(clmgmtdevcredserveraddresstype.get_name_leafdata());
    if (clmgmtdevcredserverpassword.is_set || is_set(clmgmtdevcredserverpassword.yfilter)) leaf_name_data.push_back(clmgmtdevcredserverpassword.get_name_leafdata());
    if (clmgmtdevcredserverusername.is_set || is_set(clmgmtdevcredserverusername.yfilter)) leaf_name_data.push_back(clmgmtdevcredserverusername.get_name_leafdata());
    if (clmgmtdevcredstoragetype.is_set || is_set(clmgmtdevcredstoragetype.yfilter)) leaf_name_data.push_back(clmgmtdevcredstoragetype.get_name_leafdata());
    if (clmgmtdevcredtransferprotocol.is_set || is_set(clmgmtdevcredtransferprotocol.yfilter)) leaf_name_data.push_back(clmgmtdevcredtransferprotocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtDevCredExportActionIndex")
    {
        clmgmtdevcredexportactionindex = value;
        clmgmtdevcredexportactionindex.value_namespace = name_space;
        clmgmtdevcredexportactionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredCommand")
    {
        clmgmtdevcredcommand = value;
        clmgmtdevcredcommand.value_namespace = name_space;
        clmgmtdevcredcommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredCommandFailCause")
    {
        clmgmtdevcredcommandfailcause = value;
        clmgmtdevcredcommandfailcause.value_namespace = name_space;
        clmgmtdevcredcommandfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredCommandState")
    {
        clmgmtdevcredcommandstate = value;
        clmgmtdevcredcommandstate.value_namespace = name_space;
        clmgmtdevcredcommandstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredEntPhysicalIndex")
    {
        clmgmtdevcredentphysicalindex = value;
        clmgmtdevcredentphysicalindex.value_namespace = name_space;
        clmgmtdevcredentphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredExportFile")
    {
        clmgmtdevcredexportfile = value;
        clmgmtdevcredexportfile.value_namespace = name_space;
        clmgmtdevcredexportfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredRowStatus")
    {
        clmgmtdevcredrowstatus = value;
        clmgmtdevcredrowstatus.value_namespace = name_space;
        clmgmtdevcredrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerAddress")
    {
        clmgmtdevcredserveraddress = value;
        clmgmtdevcredserveraddress.value_namespace = name_space;
        clmgmtdevcredserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerAddressType")
    {
        clmgmtdevcredserveraddresstype = value;
        clmgmtdevcredserveraddresstype.value_namespace = name_space;
        clmgmtdevcredserveraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerPassword")
    {
        clmgmtdevcredserverpassword = value;
        clmgmtdevcredserverpassword.value_namespace = name_space;
        clmgmtdevcredserverpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredServerUsername")
    {
        clmgmtdevcredserverusername = value;
        clmgmtdevcredserverusername.value_namespace = name_space;
        clmgmtdevcredserverusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredStorageType")
    {
        clmgmtdevcredstoragetype = value;
        clmgmtdevcredstoragetype.value_namespace = name_space;
        clmgmtdevcredstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtDevCredTransferProtocol")
    {
        clmgmtdevcredtransferprotocol = value;
        clmgmtdevcredtransferprotocol.value_namespace = name_space;
        clmgmtdevcredtransferprotocol.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtDevCredExportActionIndex")
    {
        clmgmtdevcredexportactionindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredCommand")
    {
        clmgmtdevcredcommand.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredCommandFailCause")
    {
        clmgmtdevcredcommandfailcause.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredCommandState")
    {
        clmgmtdevcredcommandstate.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredEntPhysicalIndex")
    {
        clmgmtdevcredentphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredExportFile")
    {
        clmgmtdevcredexportfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredRowStatus")
    {
        clmgmtdevcredrowstatus.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerAddress")
    {
        clmgmtdevcredserveraddress.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerAddressType")
    {
        clmgmtdevcredserveraddresstype.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerPassword")
    {
        clmgmtdevcredserverpassword.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredServerUsername")
    {
        clmgmtdevcredserverusername.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredStorageType")
    {
        clmgmtdevcredstoragetype.yfilter = yfilter;
    }
    if(value_path == "clmgmtDevCredTransferProtocol")
    {
        clmgmtdevcredtransferprotocol.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtDevCredExportActionIndex" || name == "clmgmtDevCredCommand" || name == "clmgmtDevCredCommandFailCause" || name == "clmgmtDevCredCommandState" || name == "clmgmtDevCredEntPhysicalIndex" || name == "clmgmtDevCredExportFile" || name == "clmgmtDevCredRowStatus" || name == "clmgmtDevCredServerAddress" || name == "clmgmtDevCredServerAddressType" || name == "clmgmtDevCredServerPassword" || name == "clmgmtDevCredServerUsername" || name == "clmgmtDevCredStorageType" || name == "clmgmtDevCredTransferProtocol")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeaturetable()
{

    yang_name = "clmgmtLicensableFeatureTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::~Clmgmtlicensablefeaturetable()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::has_data() const
{
    for (std::size_t index=0; index<clmgmtlicensablefeatureentry.size(); index++)
    {
        if(clmgmtlicensablefeatureentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicensablefeatureentry.size(); index++)
    {
        if(clmgmtlicensablefeatureentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicensableFeatureTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicensableFeatureEntry")
    {
        for(auto const & c : clmgmtlicensablefeatureentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry>();
        c->parent = this;
        clmgmtlicensablefeatureentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clmgmtlicensablefeatureentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicensableFeatureEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::Clmgmtlicensablefeatureentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtfeatureindex{YType::uint32, "clmgmtFeatureIndex"},
    clmgmtfeatureenddate{YType::str, "clmgmtFeatureEndDate"},
    clmgmtfeaturename{YType::str, "clmgmtFeatureName"},
    clmgmtfeatureperiodused{YType::uint32, "clmgmtFeaturePeriodUsed"},
    clmgmtfeaturestartdate{YType::str, "clmgmtFeatureStartDate"},
    clmgmtfeaturevalidityperiodremaining{YType::uint32, "clmgmtFeatureValidityPeriodRemaining"},
    clmgmtfeatureversion{YType::str, "clmgmtFeatureVersion"},
    clmgmtfeaturewhatiscounted{YType::str, "clmgmtFeatureWhatIsCounted"}
{

    yang_name = "clmgmtLicensableFeatureEntry"; yang_parent_name = "clmgmtLicensableFeatureTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::~Clmgmtlicensablefeatureentry()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::has_data() const
{
    return entphysicalindex.is_set
	|| clmgmtfeatureindex.is_set
	|| clmgmtfeatureenddate.is_set
	|| clmgmtfeaturename.is_set
	|| clmgmtfeatureperiodused.is_set
	|| clmgmtfeaturestartdate.is_set
	|| clmgmtfeaturevalidityperiodremaining.is_set
	|| clmgmtfeatureversion.is_set
	|| clmgmtfeaturewhatiscounted.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtfeatureindex.yfilter)
	|| ydk::is_set(clmgmtfeatureenddate.yfilter)
	|| ydk::is_set(clmgmtfeaturename.yfilter)
	|| ydk::is_set(clmgmtfeatureperiodused.yfilter)
	|| ydk::is_set(clmgmtfeaturestartdate.yfilter)
	|| ydk::is_set(clmgmtfeaturevalidityperiodremaining.yfilter)
	|| ydk::is_set(clmgmtfeatureversion.yfilter)
	|| ydk::is_set(clmgmtfeaturewhatiscounted.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicensableFeatureTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicensableFeatureEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[clmgmtFeatureIndex='" <<clmgmtfeatureindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtfeatureindex.is_set || is_set(clmgmtfeatureindex.yfilter)) leaf_name_data.push_back(clmgmtfeatureindex.get_name_leafdata());
    if (clmgmtfeatureenddate.is_set || is_set(clmgmtfeatureenddate.yfilter)) leaf_name_data.push_back(clmgmtfeatureenddate.get_name_leafdata());
    if (clmgmtfeaturename.is_set || is_set(clmgmtfeaturename.yfilter)) leaf_name_data.push_back(clmgmtfeaturename.get_name_leafdata());
    if (clmgmtfeatureperiodused.is_set || is_set(clmgmtfeatureperiodused.yfilter)) leaf_name_data.push_back(clmgmtfeatureperiodused.get_name_leafdata());
    if (clmgmtfeaturestartdate.is_set || is_set(clmgmtfeaturestartdate.yfilter)) leaf_name_data.push_back(clmgmtfeaturestartdate.get_name_leafdata());
    if (clmgmtfeaturevalidityperiodremaining.is_set || is_set(clmgmtfeaturevalidityperiodremaining.yfilter)) leaf_name_data.push_back(clmgmtfeaturevalidityperiodremaining.get_name_leafdata());
    if (clmgmtfeatureversion.is_set || is_set(clmgmtfeatureversion.yfilter)) leaf_name_data.push_back(clmgmtfeatureversion.get_name_leafdata());
    if (clmgmtfeaturewhatiscounted.is_set || is_set(clmgmtfeaturewhatiscounted.yfilter)) leaf_name_data.push_back(clmgmtfeaturewhatiscounted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "clmgmtFeatureEndDate")
    {
        clmgmtfeatureenddate = value;
        clmgmtfeatureenddate.value_namespace = name_space;
        clmgmtfeatureenddate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureName")
    {
        clmgmtfeaturename = value;
        clmgmtfeaturename.value_namespace = name_space;
        clmgmtfeaturename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeaturePeriodUsed")
    {
        clmgmtfeatureperiodused = value;
        clmgmtfeatureperiodused.value_namespace = name_space;
        clmgmtfeatureperiodused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureStartDate")
    {
        clmgmtfeaturestartdate = value;
        clmgmtfeaturestartdate.value_namespace = name_space;
        clmgmtfeaturestartdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureValidityPeriodRemaining")
    {
        clmgmtfeaturevalidityperiodremaining = value;
        clmgmtfeaturevalidityperiodremaining.value_namespace = name_space;
        clmgmtfeaturevalidityperiodremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureVersion")
    {
        clmgmtfeatureversion = value;
        clmgmtfeatureversion.value_namespace = name_space;
        clmgmtfeatureversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtFeatureWhatIsCounted")
    {
        clmgmtfeaturewhatiscounted = value;
        clmgmtfeaturewhatiscounted.value_namespace = name_space;
        clmgmtfeaturewhatiscounted.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureIndex")
    {
        clmgmtfeatureindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureEndDate")
    {
        clmgmtfeatureenddate.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureName")
    {
        clmgmtfeaturename.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeaturePeriodUsed")
    {
        clmgmtfeatureperiodused.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureStartDate")
    {
        clmgmtfeaturestartdate.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureValidityPeriodRemaining")
    {
        clmgmtfeaturevalidityperiodremaining.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureVersion")
    {
        clmgmtfeatureversion.yfilter = yfilter;
    }
    if(value_path == "clmgmtFeatureWhatIsCounted")
    {
        clmgmtfeaturewhatiscounted.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtFeatureIndex" || name == "clmgmtFeatureEndDate" || name == "clmgmtFeatureName" || name == "clmgmtFeaturePeriodUsed" || name == "clmgmtFeatureStartDate" || name == "clmgmtFeatureValidityPeriodRemaining" || name == "clmgmtFeatureVersion" || name == "clmgmtFeatureWhatIsCounted")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresulttable()
{

    yang_name = "clmgmtLicenseActionResultTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::~Clmgmtlicenseactionresulttable()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::has_data() const
{
    for (std::size_t index=0; index<clmgmtlicenseactionresultentry.size(); index++)
    {
        if(clmgmtlicenseactionresultentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicenseactionresultentry.size(); index++)
    {
        if(clmgmtlicenseactionresultentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionResultTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseActionResultEntry")
    {
        for(auto const & c : clmgmtlicenseactionresultentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry>();
        c->parent = this;
        clmgmtlicenseactionresultentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clmgmtlicenseactionresultentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionResultEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::Clmgmtlicenseactionresultentry()
    :
    clmgmtlicenseactionindex{YType::str, "clmgmtLicenseActionIndex"},
    clmgmtlicensenumber{YType::uint32, "clmgmtLicenseNumber"},
    clmgmtlicenseindivactionfailcause{YType::enumeration, "clmgmtLicenseIndivActionFailCause"},
    clmgmtlicenseindivactionstate{YType::enumeration, "clmgmtLicenseIndivActionState"}
{

    yang_name = "clmgmtLicenseActionResultEntry"; yang_parent_name = "clmgmtLicenseActionResultTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::~Clmgmtlicenseactionresultentry()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::has_data() const
{
    return clmgmtlicenseactionindex.is_set
	|| clmgmtlicensenumber.is_set
	|| clmgmtlicenseindivactionfailcause.is_set
	|| clmgmtlicenseindivactionstate.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtlicenseactionindex.yfilter)
	|| ydk::is_set(clmgmtlicensenumber.yfilter)
	|| ydk::is_set(clmgmtlicenseindivactionfailcause.yfilter)
	|| ydk::is_set(clmgmtlicenseindivactionstate.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseActionResultTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionResultEntry" <<"[clmgmtLicenseActionIndex='" <<clmgmtlicenseactionindex <<"']" <<"[clmgmtLicenseNumber='" <<clmgmtlicensenumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtlicenseactionindex.is_set || is_set(clmgmtlicenseactionindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionindex.get_name_leafdata());
    if (clmgmtlicensenumber.is_set || is_set(clmgmtlicensenumber.yfilter)) leaf_name_data.push_back(clmgmtlicensenumber.get_name_leafdata());
    if (clmgmtlicenseindivactionfailcause.is_set || is_set(clmgmtlicenseindivactionfailcause.yfilter)) leaf_name_data.push_back(clmgmtlicenseindivactionfailcause.get_name_leafdata());
    if (clmgmtlicenseindivactionstate.is_set || is_set(clmgmtlicenseindivactionstate.yfilter)) leaf_name_data.push_back(clmgmtlicenseindivactionstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "clmgmtLicenseIndivActionFailCause")
    {
        clmgmtlicenseindivactionfailcause = value;
        clmgmtlicenseindivactionfailcause.value_namespace = name_space;
        clmgmtlicenseindivactionfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseIndivActionState")
    {
        clmgmtlicenseindivactionstate = value;
        clmgmtlicenseindivactionstate.value_namespace = name_space;
        clmgmtlicenseindivactionstate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtLicenseActionIndex")
    {
        clmgmtlicenseactionindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseNumber")
    {
        clmgmtlicensenumber.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseIndivActionFailCause")
    {
        clmgmtlicenseindivactionfailcause.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseIndivActionState")
    {
        clmgmtlicenseindivactionstate.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionIndex" || name == "clmgmtLicenseNumber" || name == "clmgmtLicenseIndivActionFailCause" || name == "clmgmtLicenseIndivActionState")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactiontable()
{

    yang_name = "clmgmtLicenseActionTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::~Clmgmtlicenseactiontable()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::has_data() const
{
    for (std::size_t index=0; index<clmgmtlicenseactionentry.size(); index++)
    {
        if(clmgmtlicenseactionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicenseactionentry.size(); index++)
    {
        if(clmgmtlicenseactionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseActionEntry")
    {
        for(auto const & c : clmgmtlicenseactionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry>();
        c->parent = this;
        clmgmtlicenseactionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clmgmtlicenseactionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseactionentry()
    :
    clmgmtlicenseactionindex{YType::uint32, "clmgmtLicenseActionIndex"},
    clmgmtlicenseaccepteula{YType::boolean, "clmgmtLicenseAcceptEULA"},
    clmgmtlicenseaction{YType::enumeration, "clmgmtLicenseAction"},
    clmgmtlicenseactionentphysicalindex{YType::int32, "clmgmtLicenseActionEntPhysicalIndex"},
    clmgmtlicenseactionfailcause{YType::enumeration, "clmgmtLicenseActionFailCause"},
    clmgmtlicenseactionlicenseindex{YType::uint32, "clmgmtLicenseActionLicenseIndex"},
    clmgmtlicenseactionrowstatus{YType::enumeration, "clmgmtLicenseActionRowStatus"},
    clmgmtlicenseactionstate{YType::enumeration, "clmgmtLicenseActionState"},
    clmgmtlicenseactionstoragetype{YType::enumeration, "clmgmtLicenseActionStorageType"},
    clmgmtlicenseactiontransferprotocol{YType::enumeration, "clmgmtLicenseActionTransferProtocol"},
    clmgmtlicensebackupfile{YType::str, "clmgmtLicenseBackupFile"},
    clmgmtlicenseeulafile{YType::str, "clmgmtLicenseEULAFile"},
    clmgmtlicensefile{YType::str, "clmgmtLicenseFile"},
    clmgmtlicensejobqposition{YType::uint32, "clmgmtLicenseJobQPosition"},
    clmgmtlicensepermissionticketfile{YType::str, "clmgmtLicensePermissionTicketFile"},
    clmgmtlicenserehostticketfile{YType::str, "clmgmtLicenseRehostTicketFile"},
    clmgmtlicenseserveraddress{YType::str, "clmgmtLicenseServerAddress"},
    clmgmtlicenseserveraddresstype{YType::enumeration, "clmgmtLicenseServerAddressType"},
    clmgmtlicenseserverpassword{YType::str, "clmgmtLicenseServerPassword"},
    clmgmtlicenseserverusername{YType::str, "clmgmtLicenseServerUsername"},
    clmgmtlicensestoponfailure{YType::boolean, "clmgmtLicenseStopOnFailure"},
    clmgmtlicensestore{YType::uint32, "clmgmtLicenseStore"}
{

    yang_name = "clmgmtLicenseActionEntry"; yang_parent_name = "clmgmtLicenseActionTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::~Clmgmtlicenseactionentry()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::has_data() const
{
    return clmgmtlicenseactionindex.is_set
	|| clmgmtlicenseaccepteula.is_set
	|| clmgmtlicenseaction.is_set
	|| clmgmtlicenseactionentphysicalindex.is_set
	|| clmgmtlicenseactionfailcause.is_set
	|| clmgmtlicenseactionlicenseindex.is_set
	|| clmgmtlicenseactionrowstatus.is_set
	|| clmgmtlicenseactionstate.is_set
	|| clmgmtlicenseactionstoragetype.is_set
	|| clmgmtlicenseactiontransferprotocol.is_set
	|| clmgmtlicensebackupfile.is_set
	|| clmgmtlicenseeulafile.is_set
	|| clmgmtlicensefile.is_set
	|| clmgmtlicensejobqposition.is_set
	|| clmgmtlicensepermissionticketfile.is_set
	|| clmgmtlicenserehostticketfile.is_set
	|| clmgmtlicenseserveraddress.is_set
	|| clmgmtlicenseserveraddresstype.is_set
	|| clmgmtlicenseserverpassword.is_set
	|| clmgmtlicenseserverusername.is_set
	|| clmgmtlicensestoponfailure.is_set
	|| clmgmtlicensestore.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtlicenseactionindex.yfilter)
	|| ydk::is_set(clmgmtlicenseaccepteula.yfilter)
	|| ydk::is_set(clmgmtlicenseaction.yfilter)
	|| ydk::is_set(clmgmtlicenseactionentphysicalindex.yfilter)
	|| ydk::is_set(clmgmtlicenseactionfailcause.yfilter)
	|| ydk::is_set(clmgmtlicenseactionlicenseindex.yfilter)
	|| ydk::is_set(clmgmtlicenseactionrowstatus.yfilter)
	|| ydk::is_set(clmgmtlicenseactionstate.yfilter)
	|| ydk::is_set(clmgmtlicenseactionstoragetype.yfilter)
	|| ydk::is_set(clmgmtlicenseactiontransferprotocol.yfilter)
	|| ydk::is_set(clmgmtlicensebackupfile.yfilter)
	|| ydk::is_set(clmgmtlicenseeulafile.yfilter)
	|| ydk::is_set(clmgmtlicensefile.yfilter)
	|| ydk::is_set(clmgmtlicensejobqposition.yfilter)
	|| ydk::is_set(clmgmtlicensepermissionticketfile.yfilter)
	|| ydk::is_set(clmgmtlicenserehostticketfile.yfilter)
	|| ydk::is_set(clmgmtlicenseserveraddress.yfilter)
	|| ydk::is_set(clmgmtlicenseserveraddresstype.yfilter)
	|| ydk::is_set(clmgmtlicenseserverpassword.yfilter)
	|| ydk::is_set(clmgmtlicenseserverusername.yfilter)
	|| ydk::is_set(clmgmtlicensestoponfailure.yfilter)
	|| ydk::is_set(clmgmtlicensestore.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseActionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseActionEntry" <<"[clmgmtLicenseActionIndex='" <<clmgmtlicenseactionindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtlicenseactionindex.is_set || is_set(clmgmtlicenseactionindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionindex.get_name_leafdata());
    if (clmgmtlicenseaccepteula.is_set || is_set(clmgmtlicenseaccepteula.yfilter)) leaf_name_data.push_back(clmgmtlicenseaccepteula.get_name_leafdata());
    if (clmgmtlicenseaction.is_set || is_set(clmgmtlicenseaction.yfilter)) leaf_name_data.push_back(clmgmtlicenseaction.get_name_leafdata());
    if (clmgmtlicenseactionentphysicalindex.is_set || is_set(clmgmtlicenseactionentphysicalindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionentphysicalindex.get_name_leafdata());
    if (clmgmtlicenseactionfailcause.is_set || is_set(clmgmtlicenseactionfailcause.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionfailcause.get_name_leafdata());
    if (clmgmtlicenseactionlicenseindex.is_set || is_set(clmgmtlicenseactionlicenseindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionlicenseindex.get_name_leafdata());
    if (clmgmtlicenseactionrowstatus.is_set || is_set(clmgmtlicenseactionrowstatus.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionrowstatus.get_name_leafdata());
    if (clmgmtlicenseactionstate.is_set || is_set(clmgmtlicenseactionstate.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionstate.get_name_leafdata());
    if (clmgmtlicenseactionstoragetype.is_set || is_set(clmgmtlicenseactionstoragetype.yfilter)) leaf_name_data.push_back(clmgmtlicenseactionstoragetype.get_name_leafdata());
    if (clmgmtlicenseactiontransferprotocol.is_set || is_set(clmgmtlicenseactiontransferprotocol.yfilter)) leaf_name_data.push_back(clmgmtlicenseactiontransferprotocol.get_name_leafdata());
    if (clmgmtlicensebackupfile.is_set || is_set(clmgmtlicensebackupfile.yfilter)) leaf_name_data.push_back(clmgmtlicensebackupfile.get_name_leafdata());
    if (clmgmtlicenseeulafile.is_set || is_set(clmgmtlicenseeulafile.yfilter)) leaf_name_data.push_back(clmgmtlicenseeulafile.get_name_leafdata());
    if (clmgmtlicensefile.is_set || is_set(clmgmtlicensefile.yfilter)) leaf_name_data.push_back(clmgmtlicensefile.get_name_leafdata());
    if (clmgmtlicensejobqposition.is_set || is_set(clmgmtlicensejobqposition.yfilter)) leaf_name_data.push_back(clmgmtlicensejobqposition.get_name_leafdata());
    if (clmgmtlicensepermissionticketfile.is_set || is_set(clmgmtlicensepermissionticketfile.yfilter)) leaf_name_data.push_back(clmgmtlicensepermissionticketfile.get_name_leafdata());
    if (clmgmtlicenserehostticketfile.is_set || is_set(clmgmtlicenserehostticketfile.yfilter)) leaf_name_data.push_back(clmgmtlicenserehostticketfile.get_name_leafdata());
    if (clmgmtlicenseserveraddress.is_set || is_set(clmgmtlicenseserveraddress.yfilter)) leaf_name_data.push_back(clmgmtlicenseserveraddress.get_name_leafdata());
    if (clmgmtlicenseserveraddresstype.is_set || is_set(clmgmtlicenseserveraddresstype.yfilter)) leaf_name_data.push_back(clmgmtlicenseserveraddresstype.get_name_leafdata());
    if (clmgmtlicenseserverpassword.is_set || is_set(clmgmtlicenseserverpassword.yfilter)) leaf_name_data.push_back(clmgmtlicenseserverpassword.get_name_leafdata());
    if (clmgmtlicenseserverusername.is_set || is_set(clmgmtlicenseserverusername.yfilter)) leaf_name_data.push_back(clmgmtlicenseserverusername.get_name_leafdata());
    if (clmgmtlicensestoponfailure.is_set || is_set(clmgmtlicensestoponfailure.yfilter)) leaf_name_data.push_back(clmgmtlicensestoponfailure.get_name_leafdata());
    if (clmgmtlicensestore.is_set || is_set(clmgmtlicensestore.yfilter)) leaf_name_data.push_back(clmgmtlicensestore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtLicenseActionIndex")
    {
        clmgmtlicenseactionindex = value;
        clmgmtlicenseactionindex.value_namespace = name_space;
        clmgmtlicenseactionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseAcceptEULA")
    {
        clmgmtlicenseaccepteula = value;
        clmgmtlicenseaccepteula.value_namespace = name_space;
        clmgmtlicenseaccepteula.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseAction")
    {
        clmgmtlicenseaction = value;
        clmgmtlicenseaction.value_namespace = name_space;
        clmgmtlicenseaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionEntPhysicalIndex")
    {
        clmgmtlicenseactionentphysicalindex = value;
        clmgmtlicenseactionentphysicalindex.value_namespace = name_space;
        clmgmtlicenseactionentphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionFailCause")
    {
        clmgmtlicenseactionfailcause = value;
        clmgmtlicenseactionfailcause.value_namespace = name_space;
        clmgmtlicenseactionfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionLicenseIndex")
    {
        clmgmtlicenseactionlicenseindex = value;
        clmgmtlicenseactionlicenseindex.value_namespace = name_space;
        clmgmtlicenseactionlicenseindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionRowStatus")
    {
        clmgmtlicenseactionrowstatus = value;
        clmgmtlicenseactionrowstatus.value_namespace = name_space;
        clmgmtlicenseactionrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionState")
    {
        clmgmtlicenseactionstate = value;
        clmgmtlicenseactionstate.value_namespace = name_space;
        clmgmtlicenseactionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionStorageType")
    {
        clmgmtlicenseactionstoragetype = value;
        clmgmtlicenseactionstoragetype.value_namespace = name_space;
        clmgmtlicenseactionstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseActionTransferProtocol")
    {
        clmgmtlicenseactiontransferprotocol = value;
        clmgmtlicenseactiontransferprotocol.value_namespace = name_space;
        clmgmtlicenseactiontransferprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseBackupFile")
    {
        clmgmtlicensebackupfile = value;
        clmgmtlicensebackupfile.value_namespace = name_space;
        clmgmtlicensebackupfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseEULAFile")
    {
        clmgmtlicenseeulafile = value;
        clmgmtlicenseeulafile.value_namespace = name_space;
        clmgmtlicenseeulafile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseFile")
    {
        clmgmtlicensefile = value;
        clmgmtlicensefile.value_namespace = name_space;
        clmgmtlicensefile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseJobQPosition")
    {
        clmgmtlicensejobqposition = value;
        clmgmtlicensejobqposition.value_namespace = name_space;
        clmgmtlicensejobqposition.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "clmgmtLicenseServerAddress")
    {
        clmgmtlicenseserveraddress = value;
        clmgmtlicenseserveraddress.value_namespace = name_space;
        clmgmtlicenseserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseServerAddressType")
    {
        clmgmtlicenseserveraddresstype = value;
        clmgmtlicenseserveraddresstype.value_namespace = name_space;
        clmgmtlicenseserveraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseServerPassword")
    {
        clmgmtlicenseserverpassword = value;
        clmgmtlicenseserverpassword.value_namespace = name_space;
        clmgmtlicenseserverpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseServerUsername")
    {
        clmgmtlicenseserverusername = value;
        clmgmtlicenseserverusername.value_namespace = name_space;
        clmgmtlicenseserverusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStopOnFailure")
    {
        clmgmtlicensestoponfailure = value;
        clmgmtlicensestoponfailure.value_namespace = name_space;
        clmgmtlicensestoponfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStore")
    {
        clmgmtlicensestore = value;
        clmgmtlicensestore.value_namespace = name_space;
        clmgmtlicensestore.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtLicenseActionIndex")
    {
        clmgmtlicenseactionindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseAcceptEULA")
    {
        clmgmtlicenseaccepteula.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseAction")
    {
        clmgmtlicenseaction.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionEntPhysicalIndex")
    {
        clmgmtlicenseactionentphysicalindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionFailCause")
    {
        clmgmtlicenseactionfailcause.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionLicenseIndex")
    {
        clmgmtlicenseactionlicenseindex.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionRowStatus")
    {
        clmgmtlicenseactionrowstatus.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionState")
    {
        clmgmtlicenseactionstate.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionStorageType")
    {
        clmgmtlicenseactionstoragetype.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseActionTransferProtocol")
    {
        clmgmtlicenseactiontransferprotocol.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseBackupFile")
    {
        clmgmtlicensebackupfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseEULAFile")
    {
        clmgmtlicenseeulafile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseFile")
    {
        clmgmtlicensefile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseJobQPosition")
    {
        clmgmtlicensejobqposition.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicensePermissionTicketFile")
    {
        clmgmtlicensepermissionticketfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseRehostTicketFile")
    {
        clmgmtlicenserehostticketfile.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerAddress")
    {
        clmgmtlicenseserveraddress.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerAddressType")
    {
        clmgmtlicenseserveraddresstype.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerPassword")
    {
        clmgmtlicenseserverpassword.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseServerUsername")
    {
        clmgmtlicenseserverusername.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStopOnFailure")
    {
        clmgmtlicensestoponfailure.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStore")
    {
        clmgmtlicensestore.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseActionIndex" || name == "clmgmtLicenseAcceptEULA" || name == "clmgmtLicenseAction" || name == "clmgmtLicenseActionEntPhysicalIndex" || name == "clmgmtLicenseActionFailCause" || name == "clmgmtLicenseActionLicenseIndex" || name == "clmgmtLicenseActionRowStatus" || name == "clmgmtLicenseActionState" || name == "clmgmtLicenseActionStorageType" || name == "clmgmtLicenseActionTransferProtocol" || name == "clmgmtLicenseBackupFile" || name == "clmgmtLicenseEULAFile" || name == "clmgmtLicenseFile" || name == "clmgmtLicenseJobQPosition" || name == "clmgmtLicensePermissionTicketFile" || name == "clmgmtLicenseRehostTicketFile" || name == "clmgmtLicenseServerAddress" || name == "clmgmtLicenseServerAddressType" || name == "clmgmtLicenseServerPassword" || name == "clmgmtLicenseServerUsername" || name == "clmgmtLicenseStopOnFailure" || name == "clmgmtLicenseStore")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::Clmgmtlicenseconfiguration()
    :
    clmgmtnextfreelicenseactionindex{YType::uint32, "clmgmtNextFreeLicenseActionIndex"}
{

    yang_name = "clmgmtLicenseConfiguration"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::~Clmgmtlicenseconfiguration()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::has_data() const
{
    return clmgmtnextfreelicenseactionindex.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtnextfreelicenseactionindex.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseConfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtnextfreelicenseactionindex.is_set || is_set(clmgmtnextfreelicenseactionindex.yfilter)) leaf_name_data.push_back(clmgmtnextfreelicenseactionindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtNextFreeLicenseActionIndex")
    {
        clmgmtnextfreelicenseactionindex = value;
        clmgmtnextfreelicenseactionindex.value_namespace = name_space;
        clmgmtnextfreelicenseactionindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtNextFreeLicenseActionIndex")
    {
        clmgmtnextfreelicenseactionindex.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtNextFreeLicenseActionIndex")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::Clmgmtlicensedeviceinformation()
    :
    clmgmtnextfreedevcredexportactionindex{YType::uint32, "clmgmtNextFreeDevCredExportActionIndex"}
{

    yang_name = "clmgmtLicenseDeviceInformation"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::~Clmgmtlicensedeviceinformation()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::has_data() const
{
    return clmgmtnextfreedevcredexportactionindex.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtnextfreedevcredexportactionindex.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseDeviceInformation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtnextfreedevcredexportactionindex.is_set || is_set(clmgmtnextfreedevcredexportactionindex.yfilter)) leaf_name_data.push_back(clmgmtnextfreedevcredexportactionindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clmgmtNextFreeDevCredExportActionIndex")
    {
        clmgmtnextfreedevcredexportactionindex = value;
        clmgmtnextfreedevcredexportactionindex.value_namespace = name_space;
        clmgmtnextfreedevcredexportactionindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtNextFreeDevCredExportActionIndex")
    {
        clmgmtnextfreedevcredexportactionindex.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtNextFreeDevCredExportActionIndex")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfotable()
{

    yang_name = "clmgmtLicenseDeviceInfoTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::~Clmgmtlicensedeviceinfotable()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::has_data() const
{
    for (std::size_t index=0; index<clmgmtlicensedeviceinfoentry.size(); index++)
    {
        if(clmgmtlicensedeviceinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicensedeviceinfoentry.size(); index++)
    {
        if(clmgmtlicensedeviceinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseDeviceInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseDeviceInfoEntry")
    {
        for(auto const & c : clmgmtlicensedeviceinfoentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry>();
        c->parent = this;
        clmgmtlicensedeviceinfoentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clmgmtlicensedeviceinfoentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseDeviceInfoEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::Clmgmtlicensedeviceinfoentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtdefaultlicensestore{YType::uint32, "clmgmtDefaultLicenseStore"}
{

    yang_name = "clmgmtLicenseDeviceInfoEntry"; yang_parent_name = "clmgmtLicenseDeviceInfoTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::~Clmgmtlicensedeviceinfoentry()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::has_data() const
{
    return entphysicalindex.is_set
	|| clmgmtdefaultlicensestore.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtdefaultlicensestore.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseDeviceInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseDeviceInfoEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtdefaultlicensestore.is_set || is_set(clmgmtdefaultlicensestore.yfilter)) leaf_name_data.push_back(clmgmtdefaultlicensestore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOLICENSEMGMTMIB::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtDefaultLicenseStore")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfotable()
{

    yang_name = "clmgmtLicenseInfoTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::~Clmgmtlicenseinfotable()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::has_data() const
{
    for (std::size_t index=0; index<clmgmtlicenseinfoentry.size(); index++)
    {
        if(clmgmtlicenseinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicenseinfoentry.size(); index++)
    {
        if(clmgmtlicenseinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseInfoEntry")
    {
        for(auto const & c : clmgmtlicenseinfoentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry>();
        c->parent = this;
        clmgmtlicenseinfoentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clmgmtlicenseinfoentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseInfoEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicenseinfoentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtlicensestoreused{YType::uint32, "clmgmtLicenseStoreUsed"},
    clmgmtlicenseindex{YType::uint32, "clmgmtLicenseIndex"},
    clmgmtlicensecomments{YType::str, "clmgmtLicenseComments"},
    clmgmtlicensecounted{YType::boolean, "clmgmtLicenseCounted"},
    clmgmtlicenseenddate{YType::str, "clmgmtLicenseEndDate"},
    clmgmtlicenseeulastatus{YType::boolean, "clmgmtLicenseEULAStatus"},
    clmgmtlicenseexpiredperiod{YType::uint32, "clmgmtLicenseExpiredPeriod"},
    clmgmtlicensefeaturename{YType::str, "clmgmtLicenseFeatureName"},
    clmgmtlicensefeatureversion{YType::str, "clmgmtLicenseFeatureVersion"},
    clmgmtlicensemaxusagecount{YType::uint32, "clmgmtLicenseMaxUsageCount"},
    clmgmtlicenseperiodused{YType::uint32, "clmgmtLicensePeriodUsed"},
    clmgmtlicensestartdate{YType::str, "clmgmtLicenseStartDate"},
    clmgmtlicensestatus{YType::enumeration, "clmgmtLicenseStatus"},
    clmgmtlicensetype{YType::enumeration, "clmgmtLicenseType"},
    clmgmtlicenseusagecountremaining{YType::uint32, "clmgmtLicenseUsageCountRemaining"},
    clmgmtlicensevalidityperiod{YType::uint32, "clmgmtLicenseValidityPeriod"},
    clmgmtlicensevalidityperiodremaining{YType::uint32, "clmgmtLicenseValidityPeriodRemaining"}
{

    yang_name = "clmgmtLicenseInfoEntry"; yang_parent_name = "clmgmtLicenseInfoTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::~Clmgmtlicenseinfoentry()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::has_data() const
{
    return entphysicalindex.is_set
	|| clmgmtlicensestoreused.is_set
	|| clmgmtlicenseindex.is_set
	|| clmgmtlicensecomments.is_set
	|| clmgmtlicensecounted.is_set
	|| clmgmtlicenseenddate.is_set
	|| clmgmtlicenseeulastatus.is_set
	|| clmgmtlicenseexpiredperiod.is_set
	|| clmgmtlicensefeaturename.is_set
	|| clmgmtlicensefeatureversion.is_set
	|| clmgmtlicensemaxusagecount.is_set
	|| clmgmtlicenseperiodused.is_set
	|| clmgmtlicensestartdate.is_set
	|| clmgmtlicensestatus.is_set
	|| clmgmtlicensetype.is_set
	|| clmgmtlicenseusagecountremaining.is_set
	|| clmgmtlicensevalidityperiod.is_set
	|| clmgmtlicensevalidityperiodremaining.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtlicensestoreused.yfilter)
	|| ydk::is_set(clmgmtlicenseindex.yfilter)
	|| ydk::is_set(clmgmtlicensecomments.yfilter)
	|| ydk::is_set(clmgmtlicensecounted.yfilter)
	|| ydk::is_set(clmgmtlicenseenddate.yfilter)
	|| ydk::is_set(clmgmtlicenseeulastatus.yfilter)
	|| ydk::is_set(clmgmtlicenseexpiredperiod.yfilter)
	|| ydk::is_set(clmgmtlicensefeaturename.yfilter)
	|| ydk::is_set(clmgmtlicensefeatureversion.yfilter)
	|| ydk::is_set(clmgmtlicensemaxusagecount.yfilter)
	|| ydk::is_set(clmgmtlicenseperiodused.yfilter)
	|| ydk::is_set(clmgmtlicensestartdate.yfilter)
	|| ydk::is_set(clmgmtlicensestatus.yfilter)
	|| ydk::is_set(clmgmtlicensetype.yfilter)
	|| ydk::is_set(clmgmtlicenseusagecountremaining.yfilter)
	|| ydk::is_set(clmgmtlicensevalidityperiod.yfilter)
	|| ydk::is_set(clmgmtlicensevalidityperiodremaining.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseInfoEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[clmgmtLicenseStoreUsed='" <<clmgmtlicensestoreused <<"']" <<"[clmgmtLicenseIndex='" <<clmgmtlicenseindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtlicensestoreused.is_set || is_set(clmgmtlicensestoreused.yfilter)) leaf_name_data.push_back(clmgmtlicensestoreused.get_name_leafdata());
    if (clmgmtlicenseindex.is_set || is_set(clmgmtlicenseindex.yfilter)) leaf_name_data.push_back(clmgmtlicenseindex.get_name_leafdata());
    if (clmgmtlicensecomments.is_set || is_set(clmgmtlicensecomments.yfilter)) leaf_name_data.push_back(clmgmtlicensecomments.get_name_leafdata());
    if (clmgmtlicensecounted.is_set || is_set(clmgmtlicensecounted.yfilter)) leaf_name_data.push_back(clmgmtlicensecounted.get_name_leafdata());
    if (clmgmtlicenseenddate.is_set || is_set(clmgmtlicenseenddate.yfilter)) leaf_name_data.push_back(clmgmtlicenseenddate.get_name_leafdata());
    if (clmgmtlicenseeulastatus.is_set || is_set(clmgmtlicenseeulastatus.yfilter)) leaf_name_data.push_back(clmgmtlicenseeulastatus.get_name_leafdata());
    if (clmgmtlicenseexpiredperiod.is_set || is_set(clmgmtlicenseexpiredperiod.yfilter)) leaf_name_data.push_back(clmgmtlicenseexpiredperiod.get_name_leafdata());
    if (clmgmtlicensefeaturename.is_set || is_set(clmgmtlicensefeaturename.yfilter)) leaf_name_data.push_back(clmgmtlicensefeaturename.get_name_leafdata());
    if (clmgmtlicensefeatureversion.is_set || is_set(clmgmtlicensefeatureversion.yfilter)) leaf_name_data.push_back(clmgmtlicensefeatureversion.get_name_leafdata());
    if (clmgmtlicensemaxusagecount.is_set || is_set(clmgmtlicensemaxusagecount.yfilter)) leaf_name_data.push_back(clmgmtlicensemaxusagecount.get_name_leafdata());
    if (clmgmtlicenseperiodused.is_set || is_set(clmgmtlicenseperiodused.yfilter)) leaf_name_data.push_back(clmgmtlicenseperiodused.get_name_leafdata());
    if (clmgmtlicensestartdate.is_set || is_set(clmgmtlicensestartdate.yfilter)) leaf_name_data.push_back(clmgmtlicensestartdate.get_name_leafdata());
    if (clmgmtlicensestatus.is_set || is_set(clmgmtlicensestatus.yfilter)) leaf_name_data.push_back(clmgmtlicensestatus.get_name_leafdata());
    if (clmgmtlicensetype.is_set || is_set(clmgmtlicensetype.yfilter)) leaf_name_data.push_back(clmgmtlicensetype.get_name_leafdata());
    if (clmgmtlicenseusagecountremaining.is_set || is_set(clmgmtlicenseusagecountremaining.yfilter)) leaf_name_data.push_back(clmgmtlicenseusagecountremaining.get_name_leafdata());
    if (clmgmtlicensevalidityperiod.is_set || is_set(clmgmtlicensevalidityperiod.yfilter)) leaf_name_data.push_back(clmgmtlicensevalidityperiod.get_name_leafdata());
    if (clmgmtlicensevalidityperiodremaining.is_set || is_set(clmgmtlicensevalidityperiodremaining.yfilter)) leaf_name_data.push_back(clmgmtlicensevalidityperiodremaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "clmgmtLicenseComments")
    {
        clmgmtlicensecomments = value;
        clmgmtlicensecomments.value_namespace = name_space;
        clmgmtlicensecomments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseCounted")
    {
        clmgmtlicensecounted = value;
        clmgmtlicensecounted.value_namespace = name_space;
        clmgmtlicensecounted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseEndDate")
    {
        clmgmtlicenseenddate = value;
        clmgmtlicenseenddate.value_namespace = name_space;
        clmgmtlicenseenddate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseEULAStatus")
    {
        clmgmtlicenseeulastatus = value;
        clmgmtlicenseeulastatus.value_namespace = name_space;
        clmgmtlicenseeulastatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseExpiredPeriod")
    {
        clmgmtlicenseexpiredperiod = value;
        clmgmtlicenseexpiredperiod.value_namespace = name_space;
        clmgmtlicenseexpiredperiod.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "clmgmtLicenseMaxUsageCount")
    {
        clmgmtlicensemaxusagecount = value;
        clmgmtlicensemaxusagecount.value_namespace = name_space;
        clmgmtlicensemaxusagecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicensePeriodUsed")
    {
        clmgmtlicenseperiodused = value;
        clmgmtlicenseperiodused.value_namespace = name_space;
        clmgmtlicenseperiodused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStartDate")
    {
        clmgmtlicensestartdate = value;
        clmgmtlicensestartdate.value_namespace = name_space;
        clmgmtlicensestartdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStatus")
    {
        clmgmtlicensestatus = value;
        clmgmtlicensestatus.value_namespace = name_space;
        clmgmtlicensestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseType")
    {
        clmgmtlicensetype = value;
        clmgmtlicensetype.value_namespace = name_space;
        clmgmtlicensetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseUsageCountRemaining")
    {
        clmgmtlicenseusagecountremaining = value;
        clmgmtlicenseusagecountremaining.value_namespace = name_space;
        clmgmtlicenseusagecountremaining.value_namespace_prefix = name_space_prefix;
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
}

void CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "clmgmtLicenseComments")
    {
        clmgmtlicensecomments.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseCounted")
    {
        clmgmtlicensecounted.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseEndDate")
    {
        clmgmtlicenseenddate.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseEULAStatus")
    {
        clmgmtlicenseeulastatus.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseExpiredPeriod")
    {
        clmgmtlicenseexpiredperiod.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseFeatureName")
    {
        clmgmtlicensefeaturename.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseFeatureVersion")
    {
        clmgmtlicensefeatureversion.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseMaxUsageCount")
    {
        clmgmtlicensemaxusagecount.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicensePeriodUsed")
    {
        clmgmtlicenseperiodused.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStartDate")
    {
        clmgmtlicensestartdate.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStatus")
    {
        clmgmtlicensestatus.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseType")
    {
        clmgmtlicensetype.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseUsageCountRemaining")
    {
        clmgmtlicenseusagecountremaining.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseValidityPeriod")
    {
        clmgmtlicensevalidityperiod.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseValidityPeriodRemaining")
    {
        clmgmtlicensevalidityperiodremaining.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtLicenseStoreUsed" || name == "clmgmtLicenseIndex" || name == "clmgmtLicenseComments" || name == "clmgmtLicenseCounted" || name == "clmgmtLicenseEndDate" || name == "clmgmtLicenseEULAStatus" || name == "clmgmtLicenseExpiredPeriod" || name == "clmgmtLicenseFeatureName" || name == "clmgmtLicenseFeatureVersion" || name == "clmgmtLicenseMaxUsageCount" || name == "clmgmtLicensePeriodUsed" || name == "clmgmtLicenseStartDate" || name == "clmgmtLicenseStatus" || name == "clmgmtLicenseType" || name == "clmgmtLicenseUsageCountRemaining" || name == "clmgmtLicenseValidityPeriod" || name == "clmgmtLicenseValidityPeriodRemaining")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::Clmgmtlicensenotifobjects()
    :
    clmgmtlicensedeploymentnotifenable{YType::boolean, "clmgmtLicenseDeploymentNotifEnable"},
    clmgmtlicenseerrornotifenable{YType::enumeration, "clmgmtLicenseErrorNotifEnable"},
    clmgmtlicenseusagenotifenable{YType::boolean, "clmgmtLicenseUsageNotifEnable"}
{

    yang_name = "clmgmtLicenseNotifObjects"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::~Clmgmtlicensenotifobjects()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::has_data() const
{
    return clmgmtlicensedeploymentnotifenable.is_set
	|| clmgmtlicenseerrornotifenable.is_set
	|| clmgmtlicenseusagenotifenable.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clmgmtlicensedeploymentnotifenable.yfilter)
	|| ydk::is_set(clmgmtlicenseerrornotifenable.yfilter)
	|| ydk::is_set(clmgmtlicenseusagenotifenable.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseNotifObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clmgmtlicensedeploymentnotifenable.is_set || is_set(clmgmtlicensedeploymentnotifenable.yfilter)) leaf_name_data.push_back(clmgmtlicensedeploymentnotifenable.get_name_leafdata());
    if (clmgmtlicenseerrornotifenable.is_set || is_set(clmgmtlicenseerrornotifenable.yfilter)) leaf_name_data.push_back(clmgmtlicenseerrornotifenable.get_name_leafdata());
    if (clmgmtlicenseusagenotifenable.is_set || is_set(clmgmtlicenseusagenotifenable.yfilter)) leaf_name_data.push_back(clmgmtlicenseusagenotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "clmgmtLicenseUsageNotifEnable")
    {
        clmgmtlicenseusagenotifenable = value;
        clmgmtlicenseusagenotifenable.value_namespace = name_space;
        clmgmtlicenseusagenotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clmgmtLicenseDeploymentNotifEnable")
    {
        clmgmtlicensedeploymentnotifenable.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseErrorNotifEnable")
    {
        clmgmtlicenseerrornotifenable.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseUsageNotifEnable")
    {
        clmgmtlicenseusagenotifenable.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseDeploymentNotifEnable" || name == "clmgmtLicenseErrorNotifEnable" || name == "clmgmtLicenseUsageNotifEnable")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfotable()
{

    yang_name = "clmgmtLicenseStoreInfoTable"; yang_parent_name = "CISCO-LICENSE-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::~Clmgmtlicensestoreinfotable()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::has_data() const
{
    for (std::size_t index=0; index<clmgmtlicensestoreinfoentry.size(); index++)
    {
        if(clmgmtlicensestoreinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::has_operation() const
{
    for (std::size_t index=0; index<clmgmtlicensestoreinfoentry.size(); index++)
    {
        if(clmgmtlicensestoreinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseStoreInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clmgmtLicenseStoreInfoEntry")
    {
        for(auto const & c : clmgmtlicensestoreinfoentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry>();
        c->parent = this;
        clmgmtlicensestoreinfoentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clmgmtlicensestoreinfoentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clmgmtLicenseStoreInfoEntry")
        return true;
    return false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::Clmgmtlicensestoreinfoentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    clmgmtlicensestoreindex{YType::uint32, "clmgmtLicenseStoreIndex"},
    clmgmtlicensestorename{YType::str, "clmgmtLicenseStoreName"},
    clmgmtlicensestoresizeremaining{YType::uint32, "clmgmtLicenseStoreSizeRemaining"},
    clmgmtlicensestoretotalsize{YType::uint32, "clmgmtLicenseStoreTotalSize"}
{

    yang_name = "clmgmtLicenseStoreInfoEntry"; yang_parent_name = "clmgmtLicenseStoreInfoTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::~Clmgmtlicensestoreinfoentry()
{
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::has_data() const
{
    return entphysicalindex.is_set
	|| clmgmtlicensestoreindex.is_set
	|| clmgmtlicensestorename.is_set
	|| clmgmtlicensestoresizeremaining.is_set
	|| clmgmtlicensestoretotalsize.is_set;
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(clmgmtlicensestoreindex.yfilter)
	|| ydk::is_set(clmgmtlicensestorename.yfilter)
	|| ydk::is_set(clmgmtlicensestoresizeremaining.yfilter)
	|| ydk::is_set(clmgmtlicensestoretotalsize.yfilter);
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-LICENSE-MGMT-MIB:CISCO-LICENSE-MGMT-MIB/clmgmtLicenseStoreInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clmgmtLicenseStoreInfoEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[clmgmtLicenseStoreIndex='" <<clmgmtlicensestoreindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (clmgmtlicensestoreindex.is_set || is_set(clmgmtlicensestoreindex.yfilter)) leaf_name_data.push_back(clmgmtlicensestoreindex.get_name_leafdata());
    if (clmgmtlicensestorename.is_set || is_set(clmgmtlicensestorename.yfilter)) leaf_name_data.push_back(clmgmtlicensestorename.get_name_leafdata());
    if (clmgmtlicensestoresizeremaining.is_set || is_set(clmgmtlicensestoresizeremaining.yfilter)) leaf_name_data.push_back(clmgmtlicensestoresizeremaining.get_name_leafdata());
    if (clmgmtlicensestoretotalsize.is_set || is_set(clmgmtlicensestoretotalsize.yfilter)) leaf_name_data.push_back(clmgmtlicensestoretotalsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "clmgmtLicenseStoreSizeRemaining")
    {
        clmgmtlicensestoresizeremaining = value;
        clmgmtlicensestoresizeremaining.value_namespace = name_space;
        clmgmtlicensestoresizeremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clmgmtLicenseStoreTotalSize")
    {
        clmgmtlicensestoretotalsize = value;
        clmgmtlicensestoretotalsize.value_namespace = name_space;
        clmgmtlicensestoretotalsize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "clmgmtLicenseStoreSizeRemaining")
    {
        clmgmtlicensestoresizeremaining.yfilter = yfilter;
    }
    if(value_path == "clmgmtLicenseStoreTotalSize")
    {
        clmgmtlicensestoretotalsize.yfilter = yfilter;
    }
}

bool CISCOLICENSEMGMTMIB::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "clmgmtLicenseStoreIndex" || name == "clmgmtLicenseStoreName" || name == "clmgmtLicenseStoreSizeRemaining" || name == "clmgmtLicenseStoreTotalSize")
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

const Enum::YLeaf ClmgmtLicenseActionState::none {1, "none"};
const Enum::YLeaf ClmgmtLicenseActionState::pending {2, "pending"};
const Enum::YLeaf ClmgmtLicenseActionState::inProgress {3, "inProgress"};
const Enum::YLeaf ClmgmtLicenseActionState::successful {4, "successful"};
const Enum::YLeaf ClmgmtLicenseActionState::partiallySuccessful {5, "partiallySuccessful"};
const Enum::YLeaf ClmgmtLicenseActionState::failed {6, "failed"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommand::noOp {1, "noOp"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommand::getDeviceCredentials {2, "getDeviceCredentials"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommandfailcause::none {1, "none"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommandfailcause::unknownError {2, "unknownError"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommandfailcause::transferProtocolNotSupported {3, "transferProtocolNotSupported"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommandfailcause::fileServerNotReachable {4, "fileServerNotReachable"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommandfailcause::unrecognizedEntPhysicalIndex {5, "unrecognizedEntPhysicalIndex"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommandfailcause::invalidFile {6, "invalidFile"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction::noOp {1, "noOp"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction::install {2, "install"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction::clear {3, "clear"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction::processPermissionTicket {4, "processPermissionTicket"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction::regenerateLastRehostTicket {5, "regenerateLastRehostTicket"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction::backup {6, "backup"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction::generateEULA {7, "generateEULA"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::demo {1, "demo"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::extension {2, "extension"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::gracePeriod {3, "gracePeriod"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::permanent {4, "permanent"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::paidSubscription {5, "paidSubscription"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::evaluationSubscription {6, "evaluationSubscription"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::extensionSubscription {7, "extensionSubscription"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::evalRightToUse {8, "evalRightToUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::rightToUse {9, "rightToUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype::permanentRightToUse {10, "permanentRightToUse"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensestatus::inactive {1, "inactive"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensestatus::notInUse {2, "notInUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensestatus::inUse {3, "inUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensestatus::expiredInUse {4, "expiredInUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensestatus::expiredNotInUse {5, "expiredNotInUse"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensestatus::usageCountConsumed {6, "usageCountConsumed"};

const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::Clmgmtlicenseerrornotifenable::other {0, "other"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::Clmgmtlicenseerrornotifenable::true_ {1, "true"};
const Enum::YLeaf CISCOLICENSEMGMTMIB::Clmgmtlicensenotifobjects::Clmgmtlicenseerrornotifenable::false_ {2, "false"};


}
}

