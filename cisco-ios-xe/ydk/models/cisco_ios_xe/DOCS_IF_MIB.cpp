
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DOCS_IF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DOCS_IF_MIB {

DOCSIFMIB::DOCSIFMIB()
    :
    docsifbaseobjects(std::make_shared<DOCSIFMIB::DocsIfBaseObjects>())
    , docsifcmtsobjects(std::make_shared<DOCSIFMIB::DocsIfCmtsObjects>())
    , docsifdownstreamchanneltable(std::make_shared<DOCSIFMIB::DocsIfDownstreamChannelTable>())
    , docsifupstreamchanneltable(std::make_shared<DOCSIFMIB::DocsIfUpstreamChannelTable>())
    , docsifqosprofiletable(std::make_shared<DOCSIFMIB::DocsIfQosProfileTable>())
    , docsifsignalqualitytable(std::make_shared<DOCSIFMIB::DocsIfSignalQualityTable>())
    , docsifcmmactable(std::make_shared<DOCSIFMIB::DocsIfCmMacTable>())
    , docsifcmstatustable(std::make_shared<DOCSIFMIB::DocsIfCmStatusTable>())
    , docsifcmservicetable(std::make_shared<DOCSIFMIB::DocsIfCmServiceTable>())
    , docsifcmtsmactable(std::make_shared<DOCSIFMIB::DocsIfCmtsMacTable>())
    , docsifcmtsstatustable(std::make_shared<DOCSIFMIB::DocsIfCmtsStatusTable>())
    , docsifcmtscmstatustable(std::make_shared<DOCSIFMIB::DocsIfCmtsCmStatusTable>())
    , docsifcmtsservicetable(std::make_shared<DOCSIFMIB::DocsIfCmtsServiceTable>())
    , docsifcmtsmodulationtable(std::make_shared<DOCSIFMIB::DocsIfCmtsModulationTable>())
    , docsifcmtsmactocmtable(std::make_shared<DOCSIFMIB::DocsIfCmtsMacToCmTable>())
    , docsifcmtschannelutilizationtable(std::make_shared<DOCSIFMIB::DocsIfCmtsChannelUtilizationTable>())
    , docsifcmtsdownchannelcountertable(std::make_shared<DOCSIFMIB::DocsIfCmtsDownChannelCounterTable>())
    , docsifcmtsupchannelcountertable(std::make_shared<DOCSIFMIB::DocsIfCmtsUpChannelCounterTable>())
{
    docsifbaseobjects->parent = this;
    docsifcmtsobjects->parent = this;
    docsifdownstreamchanneltable->parent = this;
    docsifupstreamchanneltable->parent = this;
    docsifqosprofiletable->parent = this;
    docsifsignalqualitytable->parent = this;
    docsifcmmactable->parent = this;
    docsifcmstatustable->parent = this;
    docsifcmservicetable->parent = this;
    docsifcmtsmactable->parent = this;
    docsifcmtsstatustable->parent = this;
    docsifcmtscmstatustable->parent = this;
    docsifcmtsservicetable->parent = this;
    docsifcmtsmodulationtable->parent = this;
    docsifcmtsmactocmtable->parent = this;
    docsifcmtschannelutilizationtable->parent = this;
    docsifcmtsdownchannelcountertable->parent = this;
    docsifcmtsupchannelcountertable->parent = this;

    yang_name = "DOCS-IF-MIB"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DOCSIFMIB::~DOCSIFMIB()
{
}

bool DOCSIFMIB::has_data() const
{
    if (is_presence_container) return true;
    return (docsifbaseobjects !=  nullptr && docsifbaseobjects->has_data())
	|| (docsifcmtsobjects !=  nullptr && docsifcmtsobjects->has_data())
	|| (docsifdownstreamchanneltable !=  nullptr && docsifdownstreamchanneltable->has_data())
	|| (docsifupstreamchanneltable !=  nullptr && docsifupstreamchanneltable->has_data())
	|| (docsifqosprofiletable !=  nullptr && docsifqosprofiletable->has_data())
	|| (docsifsignalqualitytable !=  nullptr && docsifsignalqualitytable->has_data())
	|| (docsifcmmactable !=  nullptr && docsifcmmactable->has_data())
	|| (docsifcmstatustable !=  nullptr && docsifcmstatustable->has_data())
	|| (docsifcmservicetable !=  nullptr && docsifcmservicetable->has_data())
	|| (docsifcmtsmactable !=  nullptr && docsifcmtsmactable->has_data())
	|| (docsifcmtsstatustable !=  nullptr && docsifcmtsstatustable->has_data())
	|| (docsifcmtscmstatustable !=  nullptr && docsifcmtscmstatustable->has_data())
	|| (docsifcmtsservicetable !=  nullptr && docsifcmtsservicetable->has_data())
	|| (docsifcmtsmodulationtable !=  nullptr && docsifcmtsmodulationtable->has_data())
	|| (docsifcmtsmactocmtable !=  nullptr && docsifcmtsmactocmtable->has_data())
	|| (docsifcmtschannelutilizationtable !=  nullptr && docsifcmtschannelutilizationtable->has_data())
	|| (docsifcmtsdownchannelcountertable !=  nullptr && docsifcmtsdownchannelcountertable->has_data())
	|| (docsifcmtsupchannelcountertable !=  nullptr && docsifcmtsupchannelcountertable->has_data());
}

bool DOCSIFMIB::has_operation() const
{
    return is_set(yfilter)
	|| (docsifbaseobjects !=  nullptr && docsifbaseobjects->has_operation())
	|| (docsifcmtsobjects !=  nullptr && docsifcmtsobjects->has_operation())
	|| (docsifdownstreamchanneltable !=  nullptr && docsifdownstreamchanneltable->has_operation())
	|| (docsifupstreamchanneltable !=  nullptr && docsifupstreamchanneltable->has_operation())
	|| (docsifqosprofiletable !=  nullptr && docsifqosprofiletable->has_operation())
	|| (docsifsignalqualitytable !=  nullptr && docsifsignalqualitytable->has_operation())
	|| (docsifcmmactable !=  nullptr && docsifcmmactable->has_operation())
	|| (docsifcmstatustable !=  nullptr && docsifcmstatustable->has_operation())
	|| (docsifcmservicetable !=  nullptr && docsifcmservicetable->has_operation())
	|| (docsifcmtsmactable !=  nullptr && docsifcmtsmactable->has_operation())
	|| (docsifcmtsstatustable !=  nullptr && docsifcmtsstatustable->has_operation())
	|| (docsifcmtscmstatustable !=  nullptr && docsifcmtscmstatustable->has_operation())
	|| (docsifcmtsservicetable !=  nullptr && docsifcmtsservicetable->has_operation())
	|| (docsifcmtsmodulationtable !=  nullptr && docsifcmtsmodulationtable->has_operation())
	|| (docsifcmtsmactocmtable !=  nullptr && docsifcmtsmactocmtable->has_operation())
	|| (docsifcmtschannelutilizationtable !=  nullptr && docsifcmtschannelutilizationtable->has_operation())
	|| (docsifcmtsdownchannelcountertable !=  nullptr && docsifcmtsdownchannelcountertable->has_operation())
	|| (docsifcmtsupchannelcountertable !=  nullptr && docsifcmtsupchannelcountertable->has_operation());
}

std::string DOCSIFMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfBaseObjects")
    {
        if(docsifbaseobjects == nullptr)
        {
            docsifbaseobjects = std::make_shared<DOCSIFMIB::DocsIfBaseObjects>();
        }
        return docsifbaseobjects;
    }

    if(child_yang_name == "docsIfCmtsObjects")
    {
        if(docsifcmtsobjects == nullptr)
        {
            docsifcmtsobjects = std::make_shared<DOCSIFMIB::DocsIfCmtsObjects>();
        }
        return docsifcmtsobjects;
    }

    if(child_yang_name == "docsIfDownstreamChannelTable")
    {
        if(docsifdownstreamchanneltable == nullptr)
        {
            docsifdownstreamchanneltable = std::make_shared<DOCSIFMIB::DocsIfDownstreamChannelTable>();
        }
        return docsifdownstreamchanneltable;
    }

    if(child_yang_name == "docsIfUpstreamChannelTable")
    {
        if(docsifupstreamchanneltable == nullptr)
        {
            docsifupstreamchanneltable = std::make_shared<DOCSIFMIB::DocsIfUpstreamChannelTable>();
        }
        return docsifupstreamchanneltable;
    }

    if(child_yang_name == "docsIfQosProfileTable")
    {
        if(docsifqosprofiletable == nullptr)
        {
            docsifqosprofiletable = std::make_shared<DOCSIFMIB::DocsIfQosProfileTable>();
        }
        return docsifqosprofiletable;
    }

    if(child_yang_name == "docsIfSignalQualityTable")
    {
        if(docsifsignalqualitytable == nullptr)
        {
            docsifsignalqualitytable = std::make_shared<DOCSIFMIB::DocsIfSignalQualityTable>();
        }
        return docsifsignalqualitytable;
    }

    if(child_yang_name == "docsIfCmMacTable")
    {
        if(docsifcmmactable == nullptr)
        {
            docsifcmmactable = std::make_shared<DOCSIFMIB::DocsIfCmMacTable>();
        }
        return docsifcmmactable;
    }

    if(child_yang_name == "docsIfCmStatusTable")
    {
        if(docsifcmstatustable == nullptr)
        {
            docsifcmstatustable = std::make_shared<DOCSIFMIB::DocsIfCmStatusTable>();
        }
        return docsifcmstatustable;
    }

    if(child_yang_name == "docsIfCmServiceTable")
    {
        if(docsifcmservicetable == nullptr)
        {
            docsifcmservicetable = std::make_shared<DOCSIFMIB::DocsIfCmServiceTable>();
        }
        return docsifcmservicetable;
    }

    if(child_yang_name == "docsIfCmtsMacTable")
    {
        if(docsifcmtsmactable == nullptr)
        {
            docsifcmtsmactable = std::make_shared<DOCSIFMIB::DocsIfCmtsMacTable>();
        }
        return docsifcmtsmactable;
    }

    if(child_yang_name == "docsIfCmtsStatusTable")
    {
        if(docsifcmtsstatustable == nullptr)
        {
            docsifcmtsstatustable = std::make_shared<DOCSIFMIB::DocsIfCmtsStatusTable>();
        }
        return docsifcmtsstatustable;
    }

    if(child_yang_name == "docsIfCmtsCmStatusTable")
    {
        if(docsifcmtscmstatustable == nullptr)
        {
            docsifcmtscmstatustable = std::make_shared<DOCSIFMIB::DocsIfCmtsCmStatusTable>();
        }
        return docsifcmtscmstatustable;
    }

    if(child_yang_name == "docsIfCmtsServiceTable")
    {
        if(docsifcmtsservicetable == nullptr)
        {
            docsifcmtsservicetable = std::make_shared<DOCSIFMIB::DocsIfCmtsServiceTable>();
        }
        return docsifcmtsservicetable;
    }

    if(child_yang_name == "docsIfCmtsModulationTable")
    {
        if(docsifcmtsmodulationtable == nullptr)
        {
            docsifcmtsmodulationtable = std::make_shared<DOCSIFMIB::DocsIfCmtsModulationTable>();
        }
        return docsifcmtsmodulationtable;
    }

    if(child_yang_name == "docsIfCmtsMacToCmTable")
    {
        if(docsifcmtsmactocmtable == nullptr)
        {
            docsifcmtsmactocmtable = std::make_shared<DOCSIFMIB::DocsIfCmtsMacToCmTable>();
        }
        return docsifcmtsmactocmtable;
    }

    if(child_yang_name == "docsIfCmtsChannelUtilizationTable")
    {
        if(docsifcmtschannelutilizationtable == nullptr)
        {
            docsifcmtschannelutilizationtable = std::make_shared<DOCSIFMIB::DocsIfCmtsChannelUtilizationTable>();
        }
        return docsifcmtschannelutilizationtable;
    }

    if(child_yang_name == "docsIfCmtsDownChannelCounterTable")
    {
        if(docsifcmtsdownchannelcountertable == nullptr)
        {
            docsifcmtsdownchannelcountertable = std::make_shared<DOCSIFMIB::DocsIfCmtsDownChannelCounterTable>();
        }
        return docsifcmtsdownchannelcountertable;
    }

    if(child_yang_name == "docsIfCmtsUpChannelCounterTable")
    {
        if(docsifcmtsupchannelcountertable == nullptr)
        {
            docsifcmtsupchannelcountertable = std::make_shared<DOCSIFMIB::DocsIfCmtsUpChannelCounterTable>();
        }
        return docsifcmtsupchannelcountertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(docsifbaseobjects != nullptr)
    {
        _children["docsIfBaseObjects"] = docsifbaseobjects;
    }

    if(docsifcmtsobjects != nullptr)
    {
        _children["docsIfCmtsObjects"] = docsifcmtsobjects;
    }

    if(docsifdownstreamchanneltable != nullptr)
    {
        _children["docsIfDownstreamChannelTable"] = docsifdownstreamchanneltable;
    }

    if(docsifupstreamchanneltable != nullptr)
    {
        _children["docsIfUpstreamChannelTable"] = docsifupstreamchanneltable;
    }

    if(docsifqosprofiletable != nullptr)
    {
        _children["docsIfQosProfileTable"] = docsifqosprofiletable;
    }

    if(docsifsignalqualitytable != nullptr)
    {
        _children["docsIfSignalQualityTable"] = docsifsignalqualitytable;
    }

    if(docsifcmmactable != nullptr)
    {
        _children["docsIfCmMacTable"] = docsifcmmactable;
    }

    if(docsifcmstatustable != nullptr)
    {
        _children["docsIfCmStatusTable"] = docsifcmstatustable;
    }

    if(docsifcmservicetable != nullptr)
    {
        _children["docsIfCmServiceTable"] = docsifcmservicetable;
    }

    if(docsifcmtsmactable != nullptr)
    {
        _children["docsIfCmtsMacTable"] = docsifcmtsmactable;
    }

    if(docsifcmtsstatustable != nullptr)
    {
        _children["docsIfCmtsStatusTable"] = docsifcmtsstatustable;
    }

    if(docsifcmtscmstatustable != nullptr)
    {
        _children["docsIfCmtsCmStatusTable"] = docsifcmtscmstatustable;
    }

    if(docsifcmtsservicetable != nullptr)
    {
        _children["docsIfCmtsServiceTable"] = docsifcmtsservicetable;
    }

    if(docsifcmtsmodulationtable != nullptr)
    {
        _children["docsIfCmtsModulationTable"] = docsifcmtsmodulationtable;
    }

    if(docsifcmtsmactocmtable != nullptr)
    {
        _children["docsIfCmtsMacToCmTable"] = docsifcmtsmactocmtable;
    }

    if(docsifcmtschannelutilizationtable != nullptr)
    {
        _children["docsIfCmtsChannelUtilizationTable"] = docsifcmtschannelutilizationtable;
    }

    if(docsifcmtsdownchannelcountertable != nullptr)
    {
        _children["docsIfCmtsDownChannelCounterTable"] = docsifcmtsdownchannelcountertable;
    }

    if(docsifcmtsupchannelcountertable != nullptr)
    {
        _children["docsIfCmtsUpChannelCounterTable"] = docsifcmtsupchannelcountertable;
    }

    return _children;
}

void DOCSIFMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DOCSIFMIB::clone_ptr() const
{
    return std::make_shared<DOCSIFMIB>();
}

std::string DOCSIFMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DOCSIFMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DOCSIFMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DOCSIFMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DOCSIFMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfBaseObjects" || name == "docsIfCmtsObjects" || name == "docsIfDownstreamChannelTable" || name == "docsIfUpstreamChannelTable" || name == "docsIfQosProfileTable" || name == "docsIfSignalQualityTable" || name == "docsIfCmMacTable" || name == "docsIfCmStatusTable" || name == "docsIfCmServiceTable" || name == "docsIfCmtsMacTable" || name == "docsIfCmtsStatusTable" || name == "docsIfCmtsCmStatusTable" || name == "docsIfCmtsServiceTable" || name == "docsIfCmtsModulationTable" || name == "docsIfCmtsMacToCmTable" || name == "docsIfCmtsChannelUtilizationTable" || name == "docsIfCmtsDownChannelCounterTable" || name == "docsIfCmtsUpChannelCounterTable")
        return true;
    return false;
}

DOCSIFMIB::DocsIfBaseObjects::DocsIfBaseObjects()
    :
    docsifdocsisbasecapability{YType::enumeration, "docsIfDocsisBaseCapability"}
{

    yang_name = "docsIfBaseObjects"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfBaseObjects::~DocsIfBaseObjects()
{
}

bool DOCSIFMIB::DocsIfBaseObjects::has_data() const
{
    if (is_presence_container) return true;
    return docsifdocsisbasecapability.is_set;
}

bool DOCSIFMIB::DocsIfBaseObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifdocsisbasecapability.yfilter);
}

std::string DOCSIFMIB::DocsIfBaseObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfBaseObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfBaseObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfBaseObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifdocsisbasecapability.is_set || is_set(docsifdocsisbasecapability.yfilter)) leaf_name_data.push_back(docsifdocsisbasecapability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfBaseObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfBaseObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfBaseObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfDocsisBaseCapability")
    {
        docsifdocsisbasecapability = value;
        docsifdocsisbasecapability.value_namespace = name_space;
        docsifdocsisbasecapability.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfBaseObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfDocsisBaseCapability")
    {
        docsifdocsisbasecapability.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfBaseObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfDocsisBaseCapability")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsObjects::DocsIfCmtsObjects()
    :
    docsifcmtsqosprofilepermissions{YType::bits, "docsIfCmtsQosProfilePermissions"},
    docsifcmtschannelutilizationinterval{YType::int32, "docsIfCmtsChannelUtilizationInterval"}
{

    yang_name = "docsIfCmtsObjects"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsObjects::~DocsIfCmtsObjects()
{
}

bool DOCSIFMIB::DocsIfCmtsObjects::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtsqosprofilepermissions.is_set
	|| docsifcmtschannelutilizationinterval.is_set;
}

bool DOCSIFMIB::DocsIfCmtsObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtsqosprofilepermissions.yfilter)
	|| ydk::is_set(docsifcmtschannelutilizationinterval.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtsqosprofilepermissions.is_set || is_set(docsifcmtsqosprofilepermissions.yfilter)) leaf_name_data.push_back(docsifcmtsqosprofilepermissions.get_name_leafdata());
    if (docsifcmtschannelutilizationinterval.is_set || is_set(docsifcmtschannelutilizationinterval.yfilter)) leaf_name_data.push_back(docsifcmtschannelutilizationinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsQosProfilePermissions")
    {
        docsifcmtsqosprofilepermissions[value] = true;
    }
    if(value_path == "docsIfCmtsChannelUtilizationInterval")
    {
        docsifcmtschannelutilizationinterval = value;
        docsifcmtschannelutilizationinterval.value_namespace = name_space;
        docsifcmtschannelutilizationinterval.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsQosProfilePermissions")
    {
        docsifcmtsqosprofilepermissions.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsChannelUtilizationInterval")
    {
        docsifcmtschannelutilizationinterval.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsQosProfilePermissions" || name == "docsIfCmtsChannelUtilizationInterval")
        return true;
    return false;
}

DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelTable()
    :
    docsifdownstreamchannelentry(this, {"ifindex"})
{

    yang_name = "docsIfDownstreamChannelTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfDownstreamChannelTable::~DocsIfDownstreamChannelTable()
{
}

bool DOCSIFMIB::DocsIfDownstreamChannelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifdownstreamchannelentry.len(); index++)
    {
        if(docsifdownstreamchannelentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfDownstreamChannelTable::has_operation() const
{
    for (std::size_t index=0; index<docsifdownstreamchannelentry.len(); index++)
    {
        if(docsifdownstreamchannelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfDownstreamChannelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfDownstreamChannelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfDownstreamChannelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfDownstreamChannelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfDownstreamChannelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfDownstreamChannelEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry>();
        ent_->parent = this;
        docsifdownstreamchannelentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfDownstreamChannelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifdownstreamchannelentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfDownstreamChannelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfDownstreamChannelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfDownstreamChannelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfDownstreamChannelEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownstreamChannelEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifdownchannelid{YType::int32, "docsIfDownChannelId"},
    docsifdownchannelfrequency{YType::int32, "docsIfDownChannelFrequency"},
    docsifdownchannelwidth{YType::int32, "docsIfDownChannelWidth"},
    docsifdownchannelmodulation{YType::enumeration, "docsIfDownChannelModulation"},
    docsifdownchannelinterleave{YType::enumeration, "docsIfDownChannelInterleave"},
    docsifdownchannelpower{YType::int32, "docsIfDownChannelPower"},
    docsifdownchannelannex{YType::enumeration, "docsIfDownChannelAnnex"},
    docsifdownchannelstoragetype{YType::enumeration, "docsIfDownChannelStorageType"}
{

    yang_name = "docsIfDownstreamChannelEntry"; yang_parent_name = "docsIfDownstreamChannelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::~DocsIfDownstreamChannelEntry()
{
}

bool DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifdownchannelid.is_set
	|| docsifdownchannelfrequency.is_set
	|| docsifdownchannelwidth.is_set
	|| docsifdownchannelmodulation.is_set
	|| docsifdownchannelinterleave.is_set
	|| docsifdownchannelpower.is_set
	|| docsifdownchannelannex.is_set
	|| docsifdownchannelstoragetype.is_set;
}

bool DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifdownchannelid.yfilter)
	|| ydk::is_set(docsifdownchannelfrequency.yfilter)
	|| ydk::is_set(docsifdownchannelwidth.yfilter)
	|| ydk::is_set(docsifdownchannelmodulation.yfilter)
	|| ydk::is_set(docsifdownchannelinterleave.yfilter)
	|| ydk::is_set(docsifdownchannelpower.yfilter)
	|| ydk::is_set(docsifdownchannelannex.yfilter)
	|| ydk::is_set(docsifdownchannelstoragetype.yfilter);
}

std::string DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfDownstreamChannelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfDownstreamChannelEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifdownchannelid.is_set || is_set(docsifdownchannelid.yfilter)) leaf_name_data.push_back(docsifdownchannelid.get_name_leafdata());
    if (docsifdownchannelfrequency.is_set || is_set(docsifdownchannelfrequency.yfilter)) leaf_name_data.push_back(docsifdownchannelfrequency.get_name_leafdata());
    if (docsifdownchannelwidth.is_set || is_set(docsifdownchannelwidth.yfilter)) leaf_name_data.push_back(docsifdownchannelwidth.get_name_leafdata());
    if (docsifdownchannelmodulation.is_set || is_set(docsifdownchannelmodulation.yfilter)) leaf_name_data.push_back(docsifdownchannelmodulation.get_name_leafdata());
    if (docsifdownchannelinterleave.is_set || is_set(docsifdownchannelinterleave.yfilter)) leaf_name_data.push_back(docsifdownchannelinterleave.get_name_leafdata());
    if (docsifdownchannelpower.is_set || is_set(docsifdownchannelpower.yfilter)) leaf_name_data.push_back(docsifdownchannelpower.get_name_leafdata());
    if (docsifdownchannelannex.is_set || is_set(docsifdownchannelannex.yfilter)) leaf_name_data.push_back(docsifdownchannelannex.get_name_leafdata());
    if (docsifdownchannelstoragetype.is_set || is_set(docsifdownchannelstoragetype.yfilter)) leaf_name_data.push_back(docsifdownchannelstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelId")
    {
        docsifdownchannelid = value;
        docsifdownchannelid.value_namespace = name_space;
        docsifdownchannelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelFrequency")
    {
        docsifdownchannelfrequency = value;
        docsifdownchannelfrequency.value_namespace = name_space;
        docsifdownchannelfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelWidth")
    {
        docsifdownchannelwidth = value;
        docsifdownchannelwidth.value_namespace = name_space;
        docsifdownchannelwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelModulation")
    {
        docsifdownchannelmodulation = value;
        docsifdownchannelmodulation.value_namespace = name_space;
        docsifdownchannelmodulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelInterleave")
    {
        docsifdownchannelinterleave = value;
        docsifdownchannelinterleave.value_namespace = name_space;
        docsifdownchannelinterleave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelPower")
    {
        docsifdownchannelpower = value;
        docsifdownchannelpower.value_namespace = name_space;
        docsifdownchannelpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelAnnex")
    {
        docsifdownchannelannex = value;
        docsifdownchannelannex.value_namespace = name_space;
        docsifdownchannelannex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfDownChannelStorageType")
    {
        docsifdownchannelstoragetype = value;
        docsifdownchannelstoragetype.value_namespace = name_space;
        docsifdownchannelstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelId")
    {
        docsifdownchannelid.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelFrequency")
    {
        docsifdownchannelfrequency.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelWidth")
    {
        docsifdownchannelwidth.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelModulation")
    {
        docsifdownchannelmodulation.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelInterleave")
    {
        docsifdownchannelinterleave.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelPower")
    {
        docsifdownchannelpower.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelAnnex")
    {
        docsifdownchannelannex.yfilter = yfilter;
    }
    if(value_path == "docsIfDownChannelStorageType")
    {
        docsifdownchannelstoragetype.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfDownChannelId" || name == "docsIfDownChannelFrequency" || name == "docsIfDownChannelWidth" || name == "docsIfDownChannelModulation" || name == "docsIfDownChannelInterleave" || name == "docsIfDownChannelPower" || name == "docsIfDownChannelAnnex" || name == "docsIfDownChannelStorageType")
        return true;
    return false;
}

DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelTable()
    :
    docsifupstreamchannelentry(this, {"ifindex"})
{

    yang_name = "docsIfUpstreamChannelTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfUpstreamChannelTable::~DocsIfUpstreamChannelTable()
{
}

bool DOCSIFMIB::DocsIfUpstreamChannelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifupstreamchannelentry.len(); index++)
    {
        if(docsifupstreamchannelentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfUpstreamChannelTable::has_operation() const
{
    for (std::size_t index=0; index<docsifupstreamchannelentry.len(); index++)
    {
        if(docsifupstreamchannelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfUpstreamChannelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfUpstreamChannelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfUpstreamChannelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfUpstreamChannelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfUpstreamChannelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfUpstreamChannelEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry>();
        ent_->parent = this;
        docsifupstreamchannelentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfUpstreamChannelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifupstreamchannelentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfUpstreamChannelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfUpstreamChannelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfUpstreamChannelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfUpstreamChannelEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::DocsIfUpstreamChannelEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifupchannelid{YType::int32, "docsIfUpChannelId"},
    docsifupchannelfrequency{YType::int32, "docsIfUpChannelFrequency"},
    docsifupchannelwidth{YType::int32, "docsIfUpChannelWidth"},
    docsifupchannelmodulationprofile{YType::uint32, "docsIfUpChannelModulationProfile"},
    docsifupchannelslotsize{YType::uint32, "docsIfUpChannelSlotSize"},
    docsifupchanneltxtimingoffset{YType::uint32, "docsIfUpChannelTxTimingOffset"},
    docsifupchannelrangingbackoffstart{YType::int32, "docsIfUpChannelRangingBackoffStart"},
    docsifupchannelrangingbackoffend{YType::int32, "docsIfUpChannelRangingBackoffEnd"},
    docsifupchanneltxbackoffstart{YType::int32, "docsIfUpChannelTxBackoffStart"},
    docsifupchanneltxbackoffend{YType::int32, "docsIfUpChannelTxBackoffEnd"},
    docsifupchannelscdmaactivecodes{YType::uint32, "docsIfUpChannelScdmaActiveCodes"},
    docsifupchannelscdmacodesperslot{YType::int32, "docsIfUpChannelScdmaCodesPerSlot"},
    docsifupchannelscdmaframesize{YType::uint32, "docsIfUpChannelScdmaFrameSize"},
    docsifupchannelscdmahoppingseed{YType::uint32, "docsIfUpChannelScdmaHoppingSeed"},
    docsifupchanneltype{YType::enumeration, "docsIfUpChannelType"},
    docsifupchannelclonefrom{YType::int32, "docsIfUpChannelCloneFrom"},
    docsifupchannelupdate{YType::boolean, "docsIfUpChannelUpdate"},
    docsifupchannelstatus{YType::enumeration, "docsIfUpChannelStatus"},
    docsifupchannelpreeqenable{YType::boolean, "docsIfUpChannelPreEqEnable"}
{

    yang_name = "docsIfUpstreamChannelEntry"; yang_parent_name = "docsIfUpstreamChannelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::~DocsIfUpstreamChannelEntry()
{
}

bool DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifupchannelid.is_set
	|| docsifupchannelfrequency.is_set
	|| docsifupchannelwidth.is_set
	|| docsifupchannelmodulationprofile.is_set
	|| docsifupchannelslotsize.is_set
	|| docsifupchanneltxtimingoffset.is_set
	|| docsifupchannelrangingbackoffstart.is_set
	|| docsifupchannelrangingbackoffend.is_set
	|| docsifupchanneltxbackoffstart.is_set
	|| docsifupchanneltxbackoffend.is_set
	|| docsifupchannelscdmaactivecodes.is_set
	|| docsifupchannelscdmacodesperslot.is_set
	|| docsifupchannelscdmaframesize.is_set
	|| docsifupchannelscdmahoppingseed.is_set
	|| docsifupchanneltype.is_set
	|| docsifupchannelclonefrom.is_set
	|| docsifupchannelupdate.is_set
	|| docsifupchannelstatus.is_set
	|| docsifupchannelpreeqenable.is_set;
}

bool DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifupchannelid.yfilter)
	|| ydk::is_set(docsifupchannelfrequency.yfilter)
	|| ydk::is_set(docsifupchannelwidth.yfilter)
	|| ydk::is_set(docsifupchannelmodulationprofile.yfilter)
	|| ydk::is_set(docsifupchannelslotsize.yfilter)
	|| ydk::is_set(docsifupchanneltxtimingoffset.yfilter)
	|| ydk::is_set(docsifupchannelrangingbackoffstart.yfilter)
	|| ydk::is_set(docsifupchannelrangingbackoffend.yfilter)
	|| ydk::is_set(docsifupchanneltxbackoffstart.yfilter)
	|| ydk::is_set(docsifupchanneltxbackoffend.yfilter)
	|| ydk::is_set(docsifupchannelscdmaactivecodes.yfilter)
	|| ydk::is_set(docsifupchannelscdmacodesperslot.yfilter)
	|| ydk::is_set(docsifupchannelscdmaframesize.yfilter)
	|| ydk::is_set(docsifupchannelscdmahoppingseed.yfilter)
	|| ydk::is_set(docsifupchanneltype.yfilter)
	|| ydk::is_set(docsifupchannelclonefrom.yfilter)
	|| ydk::is_set(docsifupchannelupdate.yfilter)
	|| ydk::is_set(docsifupchannelstatus.yfilter)
	|| ydk::is_set(docsifupchannelpreeqenable.yfilter);
}

std::string DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfUpstreamChannelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfUpstreamChannelEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifupchannelid.is_set || is_set(docsifupchannelid.yfilter)) leaf_name_data.push_back(docsifupchannelid.get_name_leafdata());
    if (docsifupchannelfrequency.is_set || is_set(docsifupchannelfrequency.yfilter)) leaf_name_data.push_back(docsifupchannelfrequency.get_name_leafdata());
    if (docsifupchannelwidth.is_set || is_set(docsifupchannelwidth.yfilter)) leaf_name_data.push_back(docsifupchannelwidth.get_name_leafdata());
    if (docsifupchannelmodulationprofile.is_set || is_set(docsifupchannelmodulationprofile.yfilter)) leaf_name_data.push_back(docsifupchannelmodulationprofile.get_name_leafdata());
    if (docsifupchannelslotsize.is_set || is_set(docsifupchannelslotsize.yfilter)) leaf_name_data.push_back(docsifupchannelslotsize.get_name_leafdata());
    if (docsifupchanneltxtimingoffset.is_set || is_set(docsifupchanneltxtimingoffset.yfilter)) leaf_name_data.push_back(docsifupchanneltxtimingoffset.get_name_leafdata());
    if (docsifupchannelrangingbackoffstart.is_set || is_set(docsifupchannelrangingbackoffstart.yfilter)) leaf_name_data.push_back(docsifupchannelrangingbackoffstart.get_name_leafdata());
    if (docsifupchannelrangingbackoffend.is_set || is_set(docsifupchannelrangingbackoffend.yfilter)) leaf_name_data.push_back(docsifupchannelrangingbackoffend.get_name_leafdata());
    if (docsifupchanneltxbackoffstart.is_set || is_set(docsifupchanneltxbackoffstart.yfilter)) leaf_name_data.push_back(docsifupchanneltxbackoffstart.get_name_leafdata());
    if (docsifupchanneltxbackoffend.is_set || is_set(docsifupchanneltxbackoffend.yfilter)) leaf_name_data.push_back(docsifupchanneltxbackoffend.get_name_leafdata());
    if (docsifupchannelscdmaactivecodes.is_set || is_set(docsifupchannelscdmaactivecodes.yfilter)) leaf_name_data.push_back(docsifupchannelscdmaactivecodes.get_name_leafdata());
    if (docsifupchannelscdmacodesperslot.is_set || is_set(docsifupchannelscdmacodesperslot.yfilter)) leaf_name_data.push_back(docsifupchannelscdmacodesperslot.get_name_leafdata());
    if (docsifupchannelscdmaframesize.is_set || is_set(docsifupchannelscdmaframesize.yfilter)) leaf_name_data.push_back(docsifupchannelscdmaframesize.get_name_leafdata());
    if (docsifupchannelscdmahoppingseed.is_set || is_set(docsifupchannelscdmahoppingseed.yfilter)) leaf_name_data.push_back(docsifupchannelscdmahoppingseed.get_name_leafdata());
    if (docsifupchanneltype.is_set || is_set(docsifupchanneltype.yfilter)) leaf_name_data.push_back(docsifupchanneltype.get_name_leafdata());
    if (docsifupchannelclonefrom.is_set || is_set(docsifupchannelclonefrom.yfilter)) leaf_name_data.push_back(docsifupchannelclonefrom.get_name_leafdata());
    if (docsifupchannelupdate.is_set || is_set(docsifupchannelupdate.yfilter)) leaf_name_data.push_back(docsifupchannelupdate.get_name_leafdata());
    if (docsifupchannelstatus.is_set || is_set(docsifupchannelstatus.yfilter)) leaf_name_data.push_back(docsifupchannelstatus.get_name_leafdata());
    if (docsifupchannelpreeqenable.is_set || is_set(docsifupchannelpreeqenable.yfilter)) leaf_name_data.push_back(docsifupchannelpreeqenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelId")
    {
        docsifupchannelid = value;
        docsifupchannelid.value_namespace = name_space;
        docsifupchannelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelFrequency")
    {
        docsifupchannelfrequency = value;
        docsifupchannelfrequency.value_namespace = name_space;
        docsifupchannelfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelWidth")
    {
        docsifupchannelwidth = value;
        docsifupchannelwidth.value_namespace = name_space;
        docsifupchannelwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelModulationProfile")
    {
        docsifupchannelmodulationprofile = value;
        docsifupchannelmodulationprofile.value_namespace = name_space;
        docsifupchannelmodulationprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelSlotSize")
    {
        docsifupchannelslotsize = value;
        docsifupchannelslotsize.value_namespace = name_space;
        docsifupchannelslotsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelTxTimingOffset")
    {
        docsifupchanneltxtimingoffset = value;
        docsifupchanneltxtimingoffset.value_namespace = name_space;
        docsifupchanneltxtimingoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelRangingBackoffStart")
    {
        docsifupchannelrangingbackoffstart = value;
        docsifupchannelrangingbackoffstart.value_namespace = name_space;
        docsifupchannelrangingbackoffstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelRangingBackoffEnd")
    {
        docsifupchannelrangingbackoffend = value;
        docsifupchannelrangingbackoffend.value_namespace = name_space;
        docsifupchannelrangingbackoffend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelTxBackoffStart")
    {
        docsifupchanneltxbackoffstart = value;
        docsifupchanneltxbackoffstart.value_namespace = name_space;
        docsifupchanneltxbackoffstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelTxBackoffEnd")
    {
        docsifupchanneltxbackoffend = value;
        docsifupchanneltxbackoffend.value_namespace = name_space;
        docsifupchanneltxbackoffend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelScdmaActiveCodes")
    {
        docsifupchannelscdmaactivecodes = value;
        docsifupchannelscdmaactivecodes.value_namespace = name_space;
        docsifupchannelscdmaactivecodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelScdmaCodesPerSlot")
    {
        docsifupchannelscdmacodesperslot = value;
        docsifupchannelscdmacodesperslot.value_namespace = name_space;
        docsifupchannelscdmacodesperslot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelScdmaFrameSize")
    {
        docsifupchannelscdmaframesize = value;
        docsifupchannelscdmaframesize.value_namespace = name_space;
        docsifupchannelscdmaframesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelScdmaHoppingSeed")
    {
        docsifupchannelscdmahoppingseed = value;
        docsifupchannelscdmahoppingseed.value_namespace = name_space;
        docsifupchannelscdmahoppingseed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelType")
    {
        docsifupchanneltype = value;
        docsifupchanneltype.value_namespace = name_space;
        docsifupchanneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelCloneFrom")
    {
        docsifupchannelclonefrom = value;
        docsifupchannelclonefrom.value_namespace = name_space;
        docsifupchannelclonefrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelUpdate")
    {
        docsifupchannelupdate = value;
        docsifupchannelupdate.value_namespace = name_space;
        docsifupchannelupdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelStatus")
    {
        docsifupchannelstatus = value;
        docsifupchannelstatus.value_namespace = name_space;
        docsifupchannelstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfUpChannelPreEqEnable")
    {
        docsifupchannelpreeqenable = value;
        docsifupchannelpreeqenable.value_namespace = name_space;
        docsifupchannelpreeqenable.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelId")
    {
        docsifupchannelid.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelFrequency")
    {
        docsifupchannelfrequency.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelWidth")
    {
        docsifupchannelwidth.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelModulationProfile")
    {
        docsifupchannelmodulationprofile.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelSlotSize")
    {
        docsifupchannelslotsize.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelTxTimingOffset")
    {
        docsifupchanneltxtimingoffset.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelRangingBackoffStart")
    {
        docsifupchannelrangingbackoffstart.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelRangingBackoffEnd")
    {
        docsifupchannelrangingbackoffend.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelTxBackoffStart")
    {
        docsifupchanneltxbackoffstart.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelTxBackoffEnd")
    {
        docsifupchanneltxbackoffend.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelScdmaActiveCodes")
    {
        docsifupchannelscdmaactivecodes.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelScdmaCodesPerSlot")
    {
        docsifupchannelscdmacodesperslot.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelScdmaFrameSize")
    {
        docsifupchannelscdmaframesize.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelScdmaHoppingSeed")
    {
        docsifupchannelscdmahoppingseed.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelType")
    {
        docsifupchanneltype.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelCloneFrom")
    {
        docsifupchannelclonefrom.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelUpdate")
    {
        docsifupchannelupdate.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelStatus")
    {
        docsifupchannelstatus.yfilter = yfilter;
    }
    if(value_path == "docsIfUpChannelPreEqEnable")
    {
        docsifupchannelpreeqenable.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfUpChannelId" || name == "docsIfUpChannelFrequency" || name == "docsIfUpChannelWidth" || name == "docsIfUpChannelModulationProfile" || name == "docsIfUpChannelSlotSize" || name == "docsIfUpChannelTxTimingOffset" || name == "docsIfUpChannelRangingBackoffStart" || name == "docsIfUpChannelRangingBackoffEnd" || name == "docsIfUpChannelTxBackoffStart" || name == "docsIfUpChannelTxBackoffEnd" || name == "docsIfUpChannelScdmaActiveCodes" || name == "docsIfUpChannelScdmaCodesPerSlot" || name == "docsIfUpChannelScdmaFrameSize" || name == "docsIfUpChannelScdmaHoppingSeed" || name == "docsIfUpChannelType" || name == "docsIfUpChannelCloneFrom" || name == "docsIfUpChannelUpdate" || name == "docsIfUpChannelStatus" || name == "docsIfUpChannelPreEqEnable")
        return true;
    return false;
}

DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileTable()
    :
    docsifqosprofileentry(this, {"docsifqosprofindex"})
{

    yang_name = "docsIfQosProfileTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfQosProfileTable::~DocsIfQosProfileTable()
{
}

bool DOCSIFMIB::DocsIfQosProfileTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifqosprofileentry.len(); index++)
    {
        if(docsifqosprofileentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfQosProfileTable::has_operation() const
{
    for (std::size_t index=0; index<docsifqosprofileentry.len(); index++)
    {
        if(docsifqosprofileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfQosProfileTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfQosProfileTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfQosProfileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfQosProfileTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfQosProfileTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfQosProfileEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry>();
        ent_->parent = this;
        docsifqosprofileentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfQosProfileTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifqosprofileentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfQosProfileTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfQosProfileTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfQosProfileTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfQosProfileEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::DocsIfQosProfileEntry()
    :
    docsifqosprofindex{YType::int32, "docsIfQosProfIndex"},
    docsifqosprofpriority{YType::int32, "docsIfQosProfPriority"},
    docsifqosprofmaxupbandwidth{YType::int32, "docsIfQosProfMaxUpBandwidth"},
    docsifqosprofguarupbandwidth{YType::int32, "docsIfQosProfGuarUpBandwidth"},
    docsifqosprofmaxdownbandwidth{YType::int32, "docsIfQosProfMaxDownBandwidth"},
    docsifqosprofmaxtxburst{YType::int32, "docsIfQosProfMaxTxBurst"},
    docsifqosprofbaselineprivacy{YType::boolean, "docsIfQosProfBaselinePrivacy"},
    docsifqosprofstatus{YType::enumeration, "docsIfQosProfStatus"},
    docsifqosprofmaxtransmitburst{YType::int32, "docsIfQosProfMaxTransmitBurst"}
{

    yang_name = "docsIfQosProfileEntry"; yang_parent_name = "docsIfQosProfileTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::~DocsIfQosProfileEntry()
{
}

bool DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifqosprofindex.is_set
	|| docsifqosprofpriority.is_set
	|| docsifqosprofmaxupbandwidth.is_set
	|| docsifqosprofguarupbandwidth.is_set
	|| docsifqosprofmaxdownbandwidth.is_set
	|| docsifqosprofmaxtxburst.is_set
	|| docsifqosprofbaselineprivacy.is_set
	|| docsifqosprofstatus.is_set
	|| docsifqosprofmaxtransmitburst.is_set;
}

bool DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifqosprofindex.yfilter)
	|| ydk::is_set(docsifqosprofpriority.yfilter)
	|| ydk::is_set(docsifqosprofmaxupbandwidth.yfilter)
	|| ydk::is_set(docsifqosprofguarupbandwidth.yfilter)
	|| ydk::is_set(docsifqosprofmaxdownbandwidth.yfilter)
	|| ydk::is_set(docsifqosprofmaxtxburst.yfilter)
	|| ydk::is_set(docsifqosprofbaselineprivacy.yfilter)
	|| ydk::is_set(docsifqosprofstatus.yfilter)
	|| ydk::is_set(docsifqosprofmaxtransmitburst.yfilter);
}

std::string DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfQosProfileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfQosProfileEntry";
    ADD_KEY_TOKEN(docsifqosprofindex, "docsIfQosProfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifqosprofindex.is_set || is_set(docsifqosprofindex.yfilter)) leaf_name_data.push_back(docsifqosprofindex.get_name_leafdata());
    if (docsifqosprofpriority.is_set || is_set(docsifqosprofpriority.yfilter)) leaf_name_data.push_back(docsifqosprofpriority.get_name_leafdata());
    if (docsifqosprofmaxupbandwidth.is_set || is_set(docsifqosprofmaxupbandwidth.yfilter)) leaf_name_data.push_back(docsifqosprofmaxupbandwidth.get_name_leafdata());
    if (docsifqosprofguarupbandwidth.is_set || is_set(docsifqosprofguarupbandwidth.yfilter)) leaf_name_data.push_back(docsifqosprofguarupbandwidth.get_name_leafdata());
    if (docsifqosprofmaxdownbandwidth.is_set || is_set(docsifqosprofmaxdownbandwidth.yfilter)) leaf_name_data.push_back(docsifqosprofmaxdownbandwidth.get_name_leafdata());
    if (docsifqosprofmaxtxburst.is_set || is_set(docsifqosprofmaxtxburst.yfilter)) leaf_name_data.push_back(docsifqosprofmaxtxburst.get_name_leafdata());
    if (docsifqosprofbaselineprivacy.is_set || is_set(docsifqosprofbaselineprivacy.yfilter)) leaf_name_data.push_back(docsifqosprofbaselineprivacy.get_name_leafdata());
    if (docsifqosprofstatus.is_set || is_set(docsifqosprofstatus.yfilter)) leaf_name_data.push_back(docsifqosprofstatus.get_name_leafdata());
    if (docsifqosprofmaxtransmitburst.is_set || is_set(docsifqosprofmaxtransmitburst.yfilter)) leaf_name_data.push_back(docsifqosprofmaxtransmitburst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfQosProfIndex")
    {
        docsifqosprofindex = value;
        docsifqosprofindex.value_namespace = name_space;
        docsifqosprofindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfPriority")
    {
        docsifqosprofpriority = value;
        docsifqosprofpriority.value_namespace = name_space;
        docsifqosprofpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfMaxUpBandwidth")
    {
        docsifqosprofmaxupbandwidth = value;
        docsifqosprofmaxupbandwidth.value_namespace = name_space;
        docsifqosprofmaxupbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfGuarUpBandwidth")
    {
        docsifqosprofguarupbandwidth = value;
        docsifqosprofguarupbandwidth.value_namespace = name_space;
        docsifqosprofguarupbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfMaxDownBandwidth")
    {
        docsifqosprofmaxdownbandwidth = value;
        docsifqosprofmaxdownbandwidth.value_namespace = name_space;
        docsifqosprofmaxdownbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfMaxTxBurst")
    {
        docsifqosprofmaxtxburst = value;
        docsifqosprofmaxtxburst.value_namespace = name_space;
        docsifqosprofmaxtxburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfBaselinePrivacy")
    {
        docsifqosprofbaselineprivacy = value;
        docsifqosprofbaselineprivacy.value_namespace = name_space;
        docsifqosprofbaselineprivacy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfStatus")
    {
        docsifqosprofstatus = value;
        docsifqosprofstatus.value_namespace = name_space;
        docsifqosprofstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfQosProfMaxTransmitBurst")
    {
        docsifqosprofmaxtransmitburst = value;
        docsifqosprofmaxtransmitburst.value_namespace = name_space;
        docsifqosprofmaxtransmitburst.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfQosProfIndex")
    {
        docsifqosprofindex.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfPriority")
    {
        docsifqosprofpriority.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfMaxUpBandwidth")
    {
        docsifqosprofmaxupbandwidth.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfGuarUpBandwidth")
    {
        docsifqosprofguarupbandwidth.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfMaxDownBandwidth")
    {
        docsifqosprofmaxdownbandwidth.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfMaxTxBurst")
    {
        docsifqosprofmaxtxburst.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfBaselinePrivacy")
    {
        docsifqosprofbaselineprivacy.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfStatus")
    {
        docsifqosprofstatus.yfilter = yfilter;
    }
    if(value_path == "docsIfQosProfMaxTransmitBurst")
    {
        docsifqosprofmaxtransmitburst.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfQosProfIndex" || name == "docsIfQosProfPriority" || name == "docsIfQosProfMaxUpBandwidth" || name == "docsIfQosProfGuarUpBandwidth" || name == "docsIfQosProfMaxDownBandwidth" || name == "docsIfQosProfMaxTxBurst" || name == "docsIfQosProfBaselinePrivacy" || name == "docsIfQosProfStatus" || name == "docsIfQosProfMaxTransmitBurst")
        return true;
    return false;
}

DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityTable()
    :
    docsifsignalqualityentry(this, {"ifindex"})
{

    yang_name = "docsIfSignalQualityTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfSignalQualityTable::~DocsIfSignalQualityTable()
{
}

bool DOCSIFMIB::DocsIfSignalQualityTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifsignalqualityentry.len(); index++)
    {
        if(docsifsignalqualityentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfSignalQualityTable::has_operation() const
{
    for (std::size_t index=0; index<docsifsignalqualityentry.len(); index++)
    {
        if(docsifsignalqualityentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfSignalQualityTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfSignalQualityTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfSignalQualityTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfSignalQualityTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfSignalQualityTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfSignalQualityEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry>();
        ent_->parent = this;
        docsifsignalqualityentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfSignalQualityTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifsignalqualityentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfSignalQualityTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfSignalQualityTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfSignalQualityTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfSignalQualityEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::DocsIfSignalQualityEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifsigqincludescontention{YType::boolean, "docsIfSigQIncludesContention"},
    docsifsigqunerroreds{YType::uint32, "docsIfSigQUnerroreds"},
    docsifsigqcorrecteds{YType::uint32, "docsIfSigQCorrecteds"},
    docsifsigquncorrectables{YType::uint32, "docsIfSigQUncorrectables"},
    docsifsigqsignalnoise{YType::int32, "docsIfSigQSignalNoise"},
    docsifsigqmicroreflections{YType::int32, "docsIfSigQMicroreflections"},
    docsifsigqequalizationdata{YType::str, "docsIfSigQEqualizationData"},
    docsifsigqextunerroreds{YType::uint64, "docsIfSigQExtUnerroreds"},
    docsifsigqextcorrecteds{YType::uint64, "docsIfSigQExtCorrecteds"},
    docsifsigqextuncorrectables{YType::uint64, "docsIfSigQExtUncorrectables"}
{

    yang_name = "docsIfSignalQualityEntry"; yang_parent_name = "docsIfSignalQualityTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::~DocsIfSignalQualityEntry()
{
}

bool DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifsigqincludescontention.is_set
	|| docsifsigqunerroreds.is_set
	|| docsifsigqcorrecteds.is_set
	|| docsifsigquncorrectables.is_set
	|| docsifsigqsignalnoise.is_set
	|| docsifsigqmicroreflections.is_set
	|| docsifsigqequalizationdata.is_set
	|| docsifsigqextunerroreds.is_set
	|| docsifsigqextcorrecteds.is_set
	|| docsifsigqextuncorrectables.is_set;
}

bool DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifsigqincludescontention.yfilter)
	|| ydk::is_set(docsifsigqunerroreds.yfilter)
	|| ydk::is_set(docsifsigqcorrecteds.yfilter)
	|| ydk::is_set(docsifsigquncorrectables.yfilter)
	|| ydk::is_set(docsifsigqsignalnoise.yfilter)
	|| ydk::is_set(docsifsigqmicroreflections.yfilter)
	|| ydk::is_set(docsifsigqequalizationdata.yfilter)
	|| ydk::is_set(docsifsigqextunerroreds.yfilter)
	|| ydk::is_set(docsifsigqextcorrecteds.yfilter)
	|| ydk::is_set(docsifsigqextuncorrectables.yfilter);
}

std::string DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfSignalQualityTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfSignalQualityEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifsigqincludescontention.is_set || is_set(docsifsigqincludescontention.yfilter)) leaf_name_data.push_back(docsifsigqincludescontention.get_name_leafdata());
    if (docsifsigqunerroreds.is_set || is_set(docsifsigqunerroreds.yfilter)) leaf_name_data.push_back(docsifsigqunerroreds.get_name_leafdata());
    if (docsifsigqcorrecteds.is_set || is_set(docsifsigqcorrecteds.yfilter)) leaf_name_data.push_back(docsifsigqcorrecteds.get_name_leafdata());
    if (docsifsigquncorrectables.is_set || is_set(docsifsigquncorrectables.yfilter)) leaf_name_data.push_back(docsifsigquncorrectables.get_name_leafdata());
    if (docsifsigqsignalnoise.is_set || is_set(docsifsigqsignalnoise.yfilter)) leaf_name_data.push_back(docsifsigqsignalnoise.get_name_leafdata());
    if (docsifsigqmicroreflections.is_set || is_set(docsifsigqmicroreflections.yfilter)) leaf_name_data.push_back(docsifsigqmicroreflections.get_name_leafdata());
    if (docsifsigqequalizationdata.is_set || is_set(docsifsigqequalizationdata.yfilter)) leaf_name_data.push_back(docsifsigqequalizationdata.get_name_leafdata());
    if (docsifsigqextunerroreds.is_set || is_set(docsifsigqextunerroreds.yfilter)) leaf_name_data.push_back(docsifsigqextunerroreds.get_name_leafdata());
    if (docsifsigqextcorrecteds.is_set || is_set(docsifsigqextcorrecteds.yfilter)) leaf_name_data.push_back(docsifsigqextcorrecteds.get_name_leafdata());
    if (docsifsigqextuncorrectables.is_set || is_set(docsifsigqextuncorrectables.yfilter)) leaf_name_data.push_back(docsifsigqextuncorrectables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQIncludesContention")
    {
        docsifsigqincludescontention = value;
        docsifsigqincludescontention.value_namespace = name_space;
        docsifsigqincludescontention.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQUnerroreds")
    {
        docsifsigqunerroreds = value;
        docsifsigqunerroreds.value_namespace = name_space;
        docsifsigqunerroreds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQCorrecteds")
    {
        docsifsigqcorrecteds = value;
        docsifsigqcorrecteds.value_namespace = name_space;
        docsifsigqcorrecteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQUncorrectables")
    {
        docsifsigquncorrectables = value;
        docsifsigquncorrectables.value_namespace = name_space;
        docsifsigquncorrectables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQSignalNoise")
    {
        docsifsigqsignalnoise = value;
        docsifsigqsignalnoise.value_namespace = name_space;
        docsifsigqsignalnoise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQMicroreflections")
    {
        docsifsigqmicroreflections = value;
        docsifsigqmicroreflections.value_namespace = name_space;
        docsifsigqmicroreflections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQEqualizationData")
    {
        docsifsigqequalizationdata = value;
        docsifsigqequalizationdata.value_namespace = name_space;
        docsifsigqequalizationdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQExtUnerroreds")
    {
        docsifsigqextunerroreds = value;
        docsifsigqextunerroreds.value_namespace = name_space;
        docsifsigqextunerroreds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQExtCorrecteds")
    {
        docsifsigqextcorrecteds = value;
        docsifsigqextcorrecteds.value_namespace = name_space;
        docsifsigqextcorrecteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfSigQExtUncorrectables")
    {
        docsifsigqextuncorrectables = value;
        docsifsigqextuncorrectables.value_namespace = name_space;
        docsifsigqextuncorrectables.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQIncludesContention")
    {
        docsifsigqincludescontention.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQUnerroreds")
    {
        docsifsigqunerroreds.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQCorrecteds")
    {
        docsifsigqcorrecteds.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQUncorrectables")
    {
        docsifsigquncorrectables.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQSignalNoise")
    {
        docsifsigqsignalnoise.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQMicroreflections")
    {
        docsifsigqmicroreflections.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQEqualizationData")
    {
        docsifsigqequalizationdata.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQExtUnerroreds")
    {
        docsifsigqextunerroreds.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQExtCorrecteds")
    {
        docsifsigqextcorrecteds.yfilter = yfilter;
    }
    if(value_path == "docsIfSigQExtUncorrectables")
    {
        docsifsigqextuncorrectables.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfSigQIncludesContention" || name == "docsIfSigQUnerroreds" || name == "docsIfSigQCorrecteds" || name == "docsIfSigQUncorrectables" || name == "docsIfSigQSignalNoise" || name == "docsIfSigQMicroreflections" || name == "docsIfSigQEqualizationData" || name == "docsIfSigQExtUnerroreds" || name == "docsIfSigQExtCorrecteds" || name == "docsIfSigQExtUncorrectables")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacTable()
    :
    docsifcmmacentry(this, {"ifindex"})
{

    yang_name = "docsIfCmMacTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmMacTable::~DocsIfCmMacTable()
{
}

bool DOCSIFMIB::DocsIfCmMacTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmmacentry.len(); index++)
    {
        if(docsifcmmacentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmMacTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmmacentry.len(); index++)
    {
        if(docsifcmmacentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmMacTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmMacTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmMacTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmMacTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmMacTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmMacEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry>();
        ent_->parent = this;
        docsifcmmacentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmMacTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmmacentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmMacTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmMacTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmMacTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmMacEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::DocsIfCmMacEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmcmtsaddress{YType::str, "docsIfCmCmtsAddress"},
    docsifcmcapabilities{YType::bits, "docsIfCmCapabilities"},
    docsifcmrangingresptimeout{YType::uint32, "docsIfCmRangingRespTimeout"},
    docsifcmrangingtimeout{YType::int32, "docsIfCmRangingTimeout"}
{

    yang_name = "docsIfCmMacEntry"; yang_parent_name = "docsIfCmMacTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::~DocsIfCmMacEntry()
{
}

bool DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmcmtsaddress.is_set
	|| docsifcmcapabilities.is_set
	|| docsifcmrangingresptimeout.is_set
	|| docsifcmrangingtimeout.is_set;
}

bool DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmcmtsaddress.yfilter)
	|| ydk::is_set(docsifcmcapabilities.yfilter)
	|| ydk::is_set(docsifcmrangingresptimeout.yfilter)
	|| ydk::is_set(docsifcmrangingtimeout.yfilter);
}

std::string DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmMacTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmMacEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmcmtsaddress.is_set || is_set(docsifcmcmtsaddress.yfilter)) leaf_name_data.push_back(docsifcmcmtsaddress.get_name_leafdata());
    if (docsifcmcapabilities.is_set || is_set(docsifcmcapabilities.yfilter)) leaf_name_data.push_back(docsifcmcapabilities.get_name_leafdata());
    if (docsifcmrangingresptimeout.is_set || is_set(docsifcmrangingresptimeout.yfilter)) leaf_name_data.push_back(docsifcmrangingresptimeout.get_name_leafdata());
    if (docsifcmrangingtimeout.is_set || is_set(docsifcmrangingtimeout.yfilter)) leaf_name_data.push_back(docsifcmrangingtimeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmCmtsAddress")
    {
        docsifcmcmtsaddress = value;
        docsifcmcmtsaddress.value_namespace = name_space;
        docsifcmcmtsaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmCapabilities")
    {
        docsifcmcapabilities[value] = true;
    }
    if(value_path == "docsIfCmRangingRespTimeout")
    {
        docsifcmrangingresptimeout = value;
        docsifcmrangingresptimeout.value_namespace = name_space;
        docsifcmrangingresptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmRangingTimeout")
    {
        docsifcmrangingtimeout = value;
        docsifcmrangingtimeout.value_namespace = name_space;
        docsifcmrangingtimeout.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmCmtsAddress")
    {
        docsifcmcmtsaddress.yfilter = yfilter;
    }
    if(value_path == "docsIfCmCapabilities")
    {
        docsifcmcapabilities.yfilter = yfilter;
    }
    if(value_path == "docsIfCmRangingRespTimeout")
    {
        docsifcmrangingresptimeout.yfilter = yfilter;
    }
    if(value_path == "docsIfCmRangingTimeout")
    {
        docsifcmrangingtimeout.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmCmtsAddress" || name == "docsIfCmCapabilities" || name == "docsIfCmRangingRespTimeout" || name == "docsIfCmRangingTimeout")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusTable()
    :
    docsifcmstatusentry(this, {"ifindex"})
{

    yang_name = "docsIfCmStatusTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmStatusTable::~DocsIfCmStatusTable()
{
}

bool DOCSIFMIB::DocsIfCmStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmstatusentry.len(); index++)
    {
        if(docsifcmstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmstatusentry.len(); index++)
    {
        if(docsifcmstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmStatusEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry>();
        ent_->parent = this;
        docsifcmstatusentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmstatusentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmStatusEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmstatusvalue{YType::enumeration, "docsIfCmStatusValue"},
    docsifcmstatuscode{YType::str, "docsIfCmStatusCode"},
    docsifcmstatustxpower{YType::int32, "docsIfCmStatusTxPower"},
    docsifcmstatusresets{YType::uint32, "docsIfCmStatusResets"},
    docsifcmstatuslostsyncs{YType::uint32, "docsIfCmStatusLostSyncs"},
    docsifcmstatusinvalidmaps{YType::uint32, "docsIfCmStatusInvalidMaps"},
    docsifcmstatusinvaliducds{YType::uint32, "docsIfCmStatusInvalidUcds"},
    docsifcmstatusinvalidrangingresponses{YType::uint32, "docsIfCmStatusInvalidRangingResponses"},
    docsifcmstatusinvalidregistrationresponses{YType::uint32, "docsIfCmStatusInvalidRegistrationResponses"},
    docsifcmstatust1timeouts{YType::uint32, "docsIfCmStatusT1Timeouts"},
    docsifcmstatust2timeouts{YType::uint32, "docsIfCmStatusT2Timeouts"},
    docsifcmstatust3timeouts{YType::uint32, "docsIfCmStatusT3Timeouts"},
    docsifcmstatust4timeouts{YType::uint32, "docsIfCmStatusT4Timeouts"},
    docsifcmstatusrangingaborteds{YType::uint32, "docsIfCmStatusRangingAborteds"},
    docsifcmstatusdocsisopermode{YType::enumeration, "docsIfCmStatusDocsisOperMode"},
    docsifcmstatusmodulationtype{YType::enumeration, "docsIfCmStatusModulationType"},
    docsifcmstatusequalizationdata{YType::str, "docsIfCmStatusEqualizationData"}
{

    yang_name = "docsIfCmStatusEntry"; yang_parent_name = "docsIfCmStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::~DocsIfCmStatusEntry()
{
}

bool DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmstatusvalue.is_set
	|| docsifcmstatuscode.is_set
	|| docsifcmstatustxpower.is_set
	|| docsifcmstatusresets.is_set
	|| docsifcmstatuslostsyncs.is_set
	|| docsifcmstatusinvalidmaps.is_set
	|| docsifcmstatusinvaliducds.is_set
	|| docsifcmstatusinvalidrangingresponses.is_set
	|| docsifcmstatusinvalidregistrationresponses.is_set
	|| docsifcmstatust1timeouts.is_set
	|| docsifcmstatust2timeouts.is_set
	|| docsifcmstatust3timeouts.is_set
	|| docsifcmstatust4timeouts.is_set
	|| docsifcmstatusrangingaborteds.is_set
	|| docsifcmstatusdocsisopermode.is_set
	|| docsifcmstatusmodulationtype.is_set
	|| docsifcmstatusequalizationdata.is_set;
}

bool DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmstatusvalue.yfilter)
	|| ydk::is_set(docsifcmstatuscode.yfilter)
	|| ydk::is_set(docsifcmstatustxpower.yfilter)
	|| ydk::is_set(docsifcmstatusresets.yfilter)
	|| ydk::is_set(docsifcmstatuslostsyncs.yfilter)
	|| ydk::is_set(docsifcmstatusinvalidmaps.yfilter)
	|| ydk::is_set(docsifcmstatusinvaliducds.yfilter)
	|| ydk::is_set(docsifcmstatusinvalidrangingresponses.yfilter)
	|| ydk::is_set(docsifcmstatusinvalidregistrationresponses.yfilter)
	|| ydk::is_set(docsifcmstatust1timeouts.yfilter)
	|| ydk::is_set(docsifcmstatust2timeouts.yfilter)
	|| ydk::is_set(docsifcmstatust3timeouts.yfilter)
	|| ydk::is_set(docsifcmstatust4timeouts.yfilter)
	|| ydk::is_set(docsifcmstatusrangingaborteds.yfilter)
	|| ydk::is_set(docsifcmstatusdocsisopermode.yfilter)
	|| ydk::is_set(docsifcmstatusmodulationtype.yfilter)
	|| ydk::is_set(docsifcmstatusequalizationdata.yfilter);
}

std::string DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmstatusvalue.is_set || is_set(docsifcmstatusvalue.yfilter)) leaf_name_data.push_back(docsifcmstatusvalue.get_name_leafdata());
    if (docsifcmstatuscode.is_set || is_set(docsifcmstatuscode.yfilter)) leaf_name_data.push_back(docsifcmstatuscode.get_name_leafdata());
    if (docsifcmstatustxpower.is_set || is_set(docsifcmstatustxpower.yfilter)) leaf_name_data.push_back(docsifcmstatustxpower.get_name_leafdata());
    if (docsifcmstatusresets.is_set || is_set(docsifcmstatusresets.yfilter)) leaf_name_data.push_back(docsifcmstatusresets.get_name_leafdata());
    if (docsifcmstatuslostsyncs.is_set || is_set(docsifcmstatuslostsyncs.yfilter)) leaf_name_data.push_back(docsifcmstatuslostsyncs.get_name_leafdata());
    if (docsifcmstatusinvalidmaps.is_set || is_set(docsifcmstatusinvalidmaps.yfilter)) leaf_name_data.push_back(docsifcmstatusinvalidmaps.get_name_leafdata());
    if (docsifcmstatusinvaliducds.is_set || is_set(docsifcmstatusinvaliducds.yfilter)) leaf_name_data.push_back(docsifcmstatusinvaliducds.get_name_leafdata());
    if (docsifcmstatusinvalidrangingresponses.is_set || is_set(docsifcmstatusinvalidrangingresponses.yfilter)) leaf_name_data.push_back(docsifcmstatusinvalidrangingresponses.get_name_leafdata());
    if (docsifcmstatusinvalidregistrationresponses.is_set || is_set(docsifcmstatusinvalidregistrationresponses.yfilter)) leaf_name_data.push_back(docsifcmstatusinvalidregistrationresponses.get_name_leafdata());
    if (docsifcmstatust1timeouts.is_set || is_set(docsifcmstatust1timeouts.yfilter)) leaf_name_data.push_back(docsifcmstatust1timeouts.get_name_leafdata());
    if (docsifcmstatust2timeouts.is_set || is_set(docsifcmstatust2timeouts.yfilter)) leaf_name_data.push_back(docsifcmstatust2timeouts.get_name_leafdata());
    if (docsifcmstatust3timeouts.is_set || is_set(docsifcmstatust3timeouts.yfilter)) leaf_name_data.push_back(docsifcmstatust3timeouts.get_name_leafdata());
    if (docsifcmstatust4timeouts.is_set || is_set(docsifcmstatust4timeouts.yfilter)) leaf_name_data.push_back(docsifcmstatust4timeouts.get_name_leafdata());
    if (docsifcmstatusrangingaborteds.is_set || is_set(docsifcmstatusrangingaborteds.yfilter)) leaf_name_data.push_back(docsifcmstatusrangingaborteds.get_name_leafdata());
    if (docsifcmstatusdocsisopermode.is_set || is_set(docsifcmstatusdocsisopermode.yfilter)) leaf_name_data.push_back(docsifcmstatusdocsisopermode.get_name_leafdata());
    if (docsifcmstatusmodulationtype.is_set || is_set(docsifcmstatusmodulationtype.yfilter)) leaf_name_data.push_back(docsifcmstatusmodulationtype.get_name_leafdata());
    if (docsifcmstatusequalizationdata.is_set || is_set(docsifcmstatusequalizationdata.yfilter)) leaf_name_data.push_back(docsifcmstatusequalizationdata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusValue")
    {
        docsifcmstatusvalue = value;
        docsifcmstatusvalue.value_namespace = name_space;
        docsifcmstatusvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusCode")
    {
        docsifcmstatuscode = value;
        docsifcmstatuscode.value_namespace = name_space;
        docsifcmstatuscode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusTxPower")
    {
        docsifcmstatustxpower = value;
        docsifcmstatustxpower.value_namespace = name_space;
        docsifcmstatustxpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusResets")
    {
        docsifcmstatusresets = value;
        docsifcmstatusresets.value_namespace = name_space;
        docsifcmstatusresets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusLostSyncs")
    {
        docsifcmstatuslostsyncs = value;
        docsifcmstatuslostsyncs.value_namespace = name_space;
        docsifcmstatuslostsyncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusInvalidMaps")
    {
        docsifcmstatusinvalidmaps = value;
        docsifcmstatusinvalidmaps.value_namespace = name_space;
        docsifcmstatusinvalidmaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusInvalidUcds")
    {
        docsifcmstatusinvaliducds = value;
        docsifcmstatusinvaliducds.value_namespace = name_space;
        docsifcmstatusinvaliducds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusInvalidRangingResponses")
    {
        docsifcmstatusinvalidrangingresponses = value;
        docsifcmstatusinvalidrangingresponses.value_namespace = name_space;
        docsifcmstatusinvalidrangingresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusInvalidRegistrationResponses")
    {
        docsifcmstatusinvalidregistrationresponses = value;
        docsifcmstatusinvalidregistrationresponses.value_namespace = name_space;
        docsifcmstatusinvalidregistrationresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusT1Timeouts")
    {
        docsifcmstatust1timeouts = value;
        docsifcmstatust1timeouts.value_namespace = name_space;
        docsifcmstatust1timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusT2Timeouts")
    {
        docsifcmstatust2timeouts = value;
        docsifcmstatust2timeouts.value_namespace = name_space;
        docsifcmstatust2timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusT3Timeouts")
    {
        docsifcmstatust3timeouts = value;
        docsifcmstatust3timeouts.value_namespace = name_space;
        docsifcmstatust3timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusT4Timeouts")
    {
        docsifcmstatust4timeouts = value;
        docsifcmstatust4timeouts.value_namespace = name_space;
        docsifcmstatust4timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusRangingAborteds")
    {
        docsifcmstatusrangingaborteds = value;
        docsifcmstatusrangingaborteds.value_namespace = name_space;
        docsifcmstatusrangingaborteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusDocsisOperMode")
    {
        docsifcmstatusdocsisopermode = value;
        docsifcmstatusdocsisopermode.value_namespace = name_space;
        docsifcmstatusdocsisopermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusModulationType")
    {
        docsifcmstatusmodulationtype = value;
        docsifcmstatusmodulationtype.value_namespace = name_space;
        docsifcmstatusmodulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmStatusEqualizationData")
    {
        docsifcmstatusequalizationdata = value;
        docsifcmstatusequalizationdata.value_namespace = name_space;
        docsifcmstatusequalizationdata.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusValue")
    {
        docsifcmstatusvalue.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusCode")
    {
        docsifcmstatuscode.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusTxPower")
    {
        docsifcmstatustxpower.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusResets")
    {
        docsifcmstatusresets.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusLostSyncs")
    {
        docsifcmstatuslostsyncs.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusInvalidMaps")
    {
        docsifcmstatusinvalidmaps.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusInvalidUcds")
    {
        docsifcmstatusinvaliducds.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusInvalidRangingResponses")
    {
        docsifcmstatusinvalidrangingresponses.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusInvalidRegistrationResponses")
    {
        docsifcmstatusinvalidregistrationresponses.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusT1Timeouts")
    {
        docsifcmstatust1timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusT2Timeouts")
    {
        docsifcmstatust2timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusT3Timeouts")
    {
        docsifcmstatust3timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusT4Timeouts")
    {
        docsifcmstatust4timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusRangingAborteds")
    {
        docsifcmstatusrangingaborteds.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusDocsisOperMode")
    {
        docsifcmstatusdocsisopermode.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusModulationType")
    {
        docsifcmstatusmodulationtype.yfilter = yfilter;
    }
    if(value_path == "docsIfCmStatusEqualizationData")
    {
        docsifcmstatusequalizationdata.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmStatusValue" || name == "docsIfCmStatusCode" || name == "docsIfCmStatusTxPower" || name == "docsIfCmStatusResets" || name == "docsIfCmStatusLostSyncs" || name == "docsIfCmStatusInvalidMaps" || name == "docsIfCmStatusInvalidUcds" || name == "docsIfCmStatusInvalidRangingResponses" || name == "docsIfCmStatusInvalidRegistrationResponses" || name == "docsIfCmStatusT1Timeouts" || name == "docsIfCmStatusT2Timeouts" || name == "docsIfCmStatusT3Timeouts" || name == "docsIfCmStatusT4Timeouts" || name == "docsIfCmStatusRangingAborteds" || name == "docsIfCmStatusDocsisOperMode" || name == "docsIfCmStatusModulationType" || name == "docsIfCmStatusEqualizationData")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceTable()
    :
    docsifcmserviceentry(this, {"ifindex", "docsifcmserviceid"})
{

    yang_name = "docsIfCmServiceTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmServiceTable::~DocsIfCmServiceTable()
{
}

bool DOCSIFMIB::DocsIfCmServiceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmserviceentry.len(); index++)
    {
        if(docsifcmserviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmServiceTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmserviceentry.len(); index++)
    {
        if(docsifcmserviceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmServiceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmServiceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmServiceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmServiceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmServiceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmServiceEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry>();
        ent_->parent = this;
        docsifcmserviceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmServiceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmserviceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmServiceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmServiceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmServiceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmServiceEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::DocsIfCmServiceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmserviceid{YType::int32, "docsIfCmServiceId"},
    docsifcmserviceqosprofile{YType::int32, "docsIfCmServiceQosProfile"},
    docsifcmservicetxslotsimmed{YType::uint32, "docsIfCmServiceTxSlotsImmed"},
    docsifcmservicetxslotsded{YType::uint32, "docsIfCmServiceTxSlotsDed"},
    docsifcmservicetxretries{YType::uint32, "docsIfCmServiceTxRetries"},
    docsifcmservicetxexceededs{YType::uint32, "docsIfCmServiceTxExceededs"},
    docsifcmservicerqretries{YType::uint32, "docsIfCmServiceRqRetries"},
    docsifcmservicerqexceededs{YType::uint32, "docsIfCmServiceRqExceededs"},
    docsifcmserviceexttxslotsimmed{YType::uint64, "docsIfCmServiceExtTxSlotsImmed"},
    docsifcmserviceexttxslotsded{YType::uint64, "docsIfCmServiceExtTxSlotsDed"}
{

    yang_name = "docsIfCmServiceEntry"; yang_parent_name = "docsIfCmServiceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::~DocsIfCmServiceEntry()
{
}

bool DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmserviceid.is_set
	|| docsifcmserviceqosprofile.is_set
	|| docsifcmservicetxslotsimmed.is_set
	|| docsifcmservicetxslotsded.is_set
	|| docsifcmservicetxretries.is_set
	|| docsifcmservicetxexceededs.is_set
	|| docsifcmservicerqretries.is_set
	|| docsifcmservicerqexceededs.is_set
	|| docsifcmserviceexttxslotsimmed.is_set
	|| docsifcmserviceexttxslotsded.is_set;
}

bool DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmserviceid.yfilter)
	|| ydk::is_set(docsifcmserviceqosprofile.yfilter)
	|| ydk::is_set(docsifcmservicetxslotsimmed.yfilter)
	|| ydk::is_set(docsifcmservicetxslotsded.yfilter)
	|| ydk::is_set(docsifcmservicetxretries.yfilter)
	|| ydk::is_set(docsifcmservicetxexceededs.yfilter)
	|| ydk::is_set(docsifcmservicerqretries.yfilter)
	|| ydk::is_set(docsifcmservicerqexceededs.yfilter)
	|| ydk::is_set(docsifcmserviceexttxslotsimmed.yfilter)
	|| ydk::is_set(docsifcmserviceexttxslotsded.yfilter);
}

std::string DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmServiceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmServiceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsifcmserviceid, "docsIfCmServiceId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmserviceid.is_set || is_set(docsifcmserviceid.yfilter)) leaf_name_data.push_back(docsifcmserviceid.get_name_leafdata());
    if (docsifcmserviceqosprofile.is_set || is_set(docsifcmserviceqosprofile.yfilter)) leaf_name_data.push_back(docsifcmserviceqosprofile.get_name_leafdata());
    if (docsifcmservicetxslotsimmed.is_set || is_set(docsifcmservicetxslotsimmed.yfilter)) leaf_name_data.push_back(docsifcmservicetxslotsimmed.get_name_leafdata());
    if (docsifcmservicetxslotsded.is_set || is_set(docsifcmservicetxslotsded.yfilter)) leaf_name_data.push_back(docsifcmservicetxslotsded.get_name_leafdata());
    if (docsifcmservicetxretries.is_set || is_set(docsifcmservicetxretries.yfilter)) leaf_name_data.push_back(docsifcmservicetxretries.get_name_leafdata());
    if (docsifcmservicetxexceededs.is_set || is_set(docsifcmservicetxexceededs.yfilter)) leaf_name_data.push_back(docsifcmservicetxexceededs.get_name_leafdata());
    if (docsifcmservicerqretries.is_set || is_set(docsifcmservicerqretries.yfilter)) leaf_name_data.push_back(docsifcmservicerqretries.get_name_leafdata());
    if (docsifcmservicerqexceededs.is_set || is_set(docsifcmservicerqexceededs.yfilter)) leaf_name_data.push_back(docsifcmservicerqexceededs.get_name_leafdata());
    if (docsifcmserviceexttxslotsimmed.is_set || is_set(docsifcmserviceexttxslotsimmed.yfilter)) leaf_name_data.push_back(docsifcmserviceexttxslotsimmed.get_name_leafdata());
    if (docsifcmserviceexttxslotsded.is_set || is_set(docsifcmserviceexttxslotsded.yfilter)) leaf_name_data.push_back(docsifcmserviceexttxslotsded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceId")
    {
        docsifcmserviceid = value;
        docsifcmserviceid.value_namespace = name_space;
        docsifcmserviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceQosProfile")
    {
        docsifcmserviceqosprofile = value;
        docsifcmserviceqosprofile.value_namespace = name_space;
        docsifcmserviceqosprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceTxSlotsImmed")
    {
        docsifcmservicetxslotsimmed = value;
        docsifcmservicetxslotsimmed.value_namespace = name_space;
        docsifcmservicetxslotsimmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceTxSlotsDed")
    {
        docsifcmservicetxslotsded = value;
        docsifcmservicetxslotsded.value_namespace = name_space;
        docsifcmservicetxslotsded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceTxRetries")
    {
        docsifcmservicetxretries = value;
        docsifcmservicetxretries.value_namespace = name_space;
        docsifcmservicetxretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceTxExceededs")
    {
        docsifcmservicetxexceededs = value;
        docsifcmservicetxexceededs.value_namespace = name_space;
        docsifcmservicetxexceededs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceRqRetries")
    {
        docsifcmservicerqretries = value;
        docsifcmservicerqretries.value_namespace = name_space;
        docsifcmservicerqretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceRqExceededs")
    {
        docsifcmservicerqexceededs = value;
        docsifcmservicerqexceededs.value_namespace = name_space;
        docsifcmservicerqexceededs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceExtTxSlotsImmed")
    {
        docsifcmserviceexttxslotsimmed = value;
        docsifcmserviceexttxslotsimmed.value_namespace = name_space;
        docsifcmserviceexttxslotsimmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmServiceExtTxSlotsDed")
    {
        docsifcmserviceexttxslotsded = value;
        docsifcmserviceexttxslotsded.value_namespace = name_space;
        docsifcmserviceexttxslotsded.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceId")
    {
        docsifcmserviceid.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceQosProfile")
    {
        docsifcmserviceqosprofile.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceTxSlotsImmed")
    {
        docsifcmservicetxslotsimmed.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceTxSlotsDed")
    {
        docsifcmservicetxslotsded.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceTxRetries")
    {
        docsifcmservicetxretries.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceTxExceededs")
    {
        docsifcmservicetxexceededs.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceRqRetries")
    {
        docsifcmservicerqretries.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceRqExceededs")
    {
        docsifcmservicerqexceededs.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceExtTxSlotsImmed")
    {
        docsifcmserviceexttxslotsimmed.yfilter = yfilter;
    }
    if(value_path == "docsIfCmServiceExtTxSlotsDed")
    {
        docsifcmserviceexttxslotsded.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmServiceId" || name == "docsIfCmServiceQosProfile" || name == "docsIfCmServiceTxSlotsImmed" || name == "docsIfCmServiceTxSlotsDed" || name == "docsIfCmServiceTxRetries" || name == "docsIfCmServiceTxExceededs" || name == "docsIfCmServiceRqRetries" || name == "docsIfCmServiceRqExceededs" || name == "docsIfCmServiceExtTxSlotsImmed" || name == "docsIfCmServiceExtTxSlotsDed")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacTable()
    :
    docsifcmtsmacentry(this, {"ifindex"})
{

    yang_name = "docsIfCmtsMacTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsMacTable::~DocsIfCmtsMacTable()
{
}

bool DOCSIFMIB::DocsIfCmtsMacTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtsmacentry.len(); index++)
    {
        if(docsifcmtsmacentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsMacTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtsmacentry.len(); index++)
    {
        if(docsifcmtsmacentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsMacTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsMacTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsMacTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsMacTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsMacTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsMacEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry>();
        ent_->parent = this;
        docsifcmtsmacentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsMacTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtsmacentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsMacTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsMacTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsMacTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsMacEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::DocsIfCmtsMacEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmtscapabilities{YType::bits, "docsIfCmtsCapabilities"},
    docsifcmtssyncinterval{YType::int32, "docsIfCmtsSyncInterval"},
    docsifcmtsucdinterval{YType::int32, "docsIfCmtsUcdInterval"},
    docsifcmtsmaxserviceids{YType::int32, "docsIfCmtsMaxServiceIds"},
    docsifcmtsinsertioninterval{YType::uint32, "docsIfCmtsInsertionInterval"},
    docsifcmtsinvitedrangingattempts{YType::int32, "docsIfCmtsInvitedRangingAttempts"},
    docsifcmtsinsertinterval{YType::int32, "docsIfCmtsInsertInterval"},
    docsifcmtsmacstoragetype{YType::enumeration, "docsIfCmtsMacStorageType"}
{

    yang_name = "docsIfCmtsMacEntry"; yang_parent_name = "docsIfCmtsMacTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::~DocsIfCmtsMacEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmtscapabilities.is_set
	|| docsifcmtssyncinterval.is_set
	|| docsifcmtsucdinterval.is_set
	|| docsifcmtsmaxserviceids.is_set
	|| docsifcmtsinsertioninterval.is_set
	|| docsifcmtsinvitedrangingattempts.is_set
	|| docsifcmtsinsertinterval.is_set
	|| docsifcmtsmacstoragetype.is_set;
}

bool DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmtscapabilities.yfilter)
	|| ydk::is_set(docsifcmtssyncinterval.yfilter)
	|| ydk::is_set(docsifcmtsucdinterval.yfilter)
	|| ydk::is_set(docsifcmtsmaxserviceids.yfilter)
	|| ydk::is_set(docsifcmtsinsertioninterval.yfilter)
	|| ydk::is_set(docsifcmtsinvitedrangingattempts.yfilter)
	|| ydk::is_set(docsifcmtsinsertinterval.yfilter)
	|| ydk::is_set(docsifcmtsmacstoragetype.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsMacTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsMacEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmtscapabilities.is_set || is_set(docsifcmtscapabilities.yfilter)) leaf_name_data.push_back(docsifcmtscapabilities.get_name_leafdata());
    if (docsifcmtssyncinterval.is_set || is_set(docsifcmtssyncinterval.yfilter)) leaf_name_data.push_back(docsifcmtssyncinterval.get_name_leafdata());
    if (docsifcmtsucdinterval.is_set || is_set(docsifcmtsucdinterval.yfilter)) leaf_name_data.push_back(docsifcmtsucdinterval.get_name_leafdata());
    if (docsifcmtsmaxserviceids.is_set || is_set(docsifcmtsmaxserviceids.yfilter)) leaf_name_data.push_back(docsifcmtsmaxserviceids.get_name_leafdata());
    if (docsifcmtsinsertioninterval.is_set || is_set(docsifcmtsinsertioninterval.yfilter)) leaf_name_data.push_back(docsifcmtsinsertioninterval.get_name_leafdata());
    if (docsifcmtsinvitedrangingattempts.is_set || is_set(docsifcmtsinvitedrangingattempts.yfilter)) leaf_name_data.push_back(docsifcmtsinvitedrangingattempts.get_name_leafdata());
    if (docsifcmtsinsertinterval.is_set || is_set(docsifcmtsinsertinterval.yfilter)) leaf_name_data.push_back(docsifcmtsinsertinterval.get_name_leafdata());
    if (docsifcmtsmacstoragetype.is_set || is_set(docsifcmtsmacstoragetype.yfilter)) leaf_name_data.push_back(docsifcmtsmacstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCapabilities")
    {
        docsifcmtscapabilities[value] = true;
    }
    if(value_path == "docsIfCmtsSyncInterval")
    {
        docsifcmtssyncinterval = value;
        docsifcmtssyncinterval.value_namespace = name_space;
        docsifcmtssyncinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUcdInterval")
    {
        docsifcmtsucdinterval = value;
        docsifcmtsucdinterval.value_namespace = name_space;
        docsifcmtsucdinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsMaxServiceIds")
    {
        docsifcmtsmaxserviceids = value;
        docsifcmtsmaxserviceids.value_namespace = name_space;
        docsifcmtsmaxserviceids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsInsertionInterval")
    {
        docsifcmtsinsertioninterval = value;
        docsifcmtsinsertioninterval.value_namespace = name_space;
        docsifcmtsinsertioninterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsInvitedRangingAttempts")
    {
        docsifcmtsinvitedrangingattempts = value;
        docsifcmtsinvitedrangingattempts.value_namespace = name_space;
        docsifcmtsinvitedrangingattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsInsertInterval")
    {
        docsifcmtsinsertinterval = value;
        docsifcmtsinsertinterval.value_namespace = name_space;
        docsifcmtsinsertinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsMacStorageType")
    {
        docsifcmtsmacstoragetype = value;
        docsifcmtsmacstoragetype.value_namespace = name_space;
        docsifcmtsmacstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCapabilities")
    {
        docsifcmtscapabilities.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsSyncInterval")
    {
        docsifcmtssyncinterval.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUcdInterval")
    {
        docsifcmtsucdinterval.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsMaxServiceIds")
    {
        docsifcmtsmaxserviceids.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsInsertionInterval")
    {
        docsifcmtsinsertioninterval.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsInvitedRangingAttempts")
    {
        docsifcmtsinvitedrangingattempts.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsInsertInterval")
    {
        docsifcmtsinsertinterval.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsMacStorageType")
    {
        docsifcmtsmacstoragetype.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmtsCapabilities" || name == "docsIfCmtsSyncInterval" || name == "docsIfCmtsUcdInterval" || name == "docsIfCmtsMaxServiceIds" || name == "docsIfCmtsInsertionInterval" || name == "docsIfCmtsInvitedRangingAttempts" || name == "docsIfCmtsInsertInterval" || name == "docsIfCmtsMacStorageType")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusTable()
    :
    docsifcmtsstatusentry(this, {"ifindex"})
{

    yang_name = "docsIfCmtsStatusTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsStatusTable::~DocsIfCmtsStatusTable()
{
}

bool DOCSIFMIB::DocsIfCmtsStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtsstatusentry.len(); index++)
    {
        if(docsifcmtsstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtsstatusentry.len(); index++)
    {
        if(docsifcmtsstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsStatusEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry>();
        ent_->parent = this;
        docsifcmtsstatusentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtsstatusentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsStatusEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::DocsIfCmtsStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmtsstatusinvalidrangereqs{YType::uint32, "docsIfCmtsStatusInvalidRangeReqs"},
    docsifcmtsstatusrangingaborteds{YType::uint32, "docsIfCmtsStatusRangingAborteds"},
    docsifcmtsstatusinvalidregreqs{YType::uint32, "docsIfCmtsStatusInvalidRegReqs"},
    docsifcmtsstatusfailedregreqs{YType::uint32, "docsIfCmtsStatusFailedRegReqs"},
    docsifcmtsstatusinvaliddatareqs{YType::uint32, "docsIfCmtsStatusInvalidDataReqs"},
    docsifcmtsstatust5timeouts{YType::uint32, "docsIfCmtsStatusT5Timeouts"}
{

    yang_name = "docsIfCmtsStatusEntry"; yang_parent_name = "docsIfCmtsStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::~DocsIfCmtsStatusEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmtsstatusinvalidrangereqs.is_set
	|| docsifcmtsstatusrangingaborteds.is_set
	|| docsifcmtsstatusinvalidregreqs.is_set
	|| docsifcmtsstatusfailedregreqs.is_set
	|| docsifcmtsstatusinvaliddatareqs.is_set
	|| docsifcmtsstatust5timeouts.is_set;
}

bool DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmtsstatusinvalidrangereqs.yfilter)
	|| ydk::is_set(docsifcmtsstatusrangingaborteds.yfilter)
	|| ydk::is_set(docsifcmtsstatusinvalidregreqs.yfilter)
	|| ydk::is_set(docsifcmtsstatusfailedregreqs.yfilter)
	|| ydk::is_set(docsifcmtsstatusinvaliddatareqs.yfilter)
	|| ydk::is_set(docsifcmtsstatust5timeouts.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmtsstatusinvalidrangereqs.is_set || is_set(docsifcmtsstatusinvalidrangereqs.yfilter)) leaf_name_data.push_back(docsifcmtsstatusinvalidrangereqs.get_name_leafdata());
    if (docsifcmtsstatusrangingaborteds.is_set || is_set(docsifcmtsstatusrangingaborteds.yfilter)) leaf_name_data.push_back(docsifcmtsstatusrangingaborteds.get_name_leafdata());
    if (docsifcmtsstatusinvalidregreqs.is_set || is_set(docsifcmtsstatusinvalidregreqs.yfilter)) leaf_name_data.push_back(docsifcmtsstatusinvalidregreqs.get_name_leafdata());
    if (docsifcmtsstatusfailedregreqs.is_set || is_set(docsifcmtsstatusfailedregreqs.yfilter)) leaf_name_data.push_back(docsifcmtsstatusfailedregreqs.get_name_leafdata());
    if (docsifcmtsstatusinvaliddatareqs.is_set || is_set(docsifcmtsstatusinvaliddatareqs.yfilter)) leaf_name_data.push_back(docsifcmtsstatusinvaliddatareqs.get_name_leafdata());
    if (docsifcmtsstatust5timeouts.is_set || is_set(docsifcmtsstatust5timeouts.yfilter)) leaf_name_data.push_back(docsifcmtsstatust5timeouts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsStatusInvalidRangeReqs")
    {
        docsifcmtsstatusinvalidrangereqs = value;
        docsifcmtsstatusinvalidrangereqs.value_namespace = name_space;
        docsifcmtsstatusinvalidrangereqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsStatusRangingAborteds")
    {
        docsifcmtsstatusrangingaborteds = value;
        docsifcmtsstatusrangingaborteds.value_namespace = name_space;
        docsifcmtsstatusrangingaborteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsStatusInvalidRegReqs")
    {
        docsifcmtsstatusinvalidregreqs = value;
        docsifcmtsstatusinvalidregreqs.value_namespace = name_space;
        docsifcmtsstatusinvalidregreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsStatusFailedRegReqs")
    {
        docsifcmtsstatusfailedregreqs = value;
        docsifcmtsstatusfailedregreqs.value_namespace = name_space;
        docsifcmtsstatusfailedregreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsStatusInvalidDataReqs")
    {
        docsifcmtsstatusinvaliddatareqs = value;
        docsifcmtsstatusinvaliddatareqs.value_namespace = name_space;
        docsifcmtsstatusinvaliddatareqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsStatusT5Timeouts")
    {
        docsifcmtsstatust5timeouts = value;
        docsifcmtsstatust5timeouts.value_namespace = name_space;
        docsifcmtsstatust5timeouts.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsStatusInvalidRangeReqs")
    {
        docsifcmtsstatusinvalidrangereqs.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsStatusRangingAborteds")
    {
        docsifcmtsstatusrangingaborteds.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsStatusInvalidRegReqs")
    {
        docsifcmtsstatusinvalidregreqs.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsStatusFailedRegReqs")
    {
        docsifcmtsstatusfailedregreqs.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsStatusInvalidDataReqs")
    {
        docsifcmtsstatusinvaliddatareqs.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsStatusT5Timeouts")
    {
        docsifcmtsstatust5timeouts.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmtsStatusInvalidRangeReqs" || name == "docsIfCmtsStatusRangingAborteds" || name == "docsIfCmtsStatusInvalidRegReqs" || name == "docsIfCmtsStatusFailedRegReqs" || name == "docsIfCmtsStatusInvalidDataReqs" || name == "docsIfCmtsStatusT5Timeouts")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusTable()
    :
    docsifcmtscmstatusentry(this, {"docsifcmtscmstatusindex"})
{

    yang_name = "docsIfCmtsCmStatusTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsCmStatusTable::~DocsIfCmtsCmStatusTable()
{
}

bool DOCSIFMIB::DocsIfCmtsCmStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtscmstatusentry.len(); index++)
    {
        if(docsifcmtscmstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsCmStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtscmstatusentry.len(); index++)
    {
        if(docsifcmtscmstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsCmStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsCmStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsCmStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsCmStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsCmStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsCmStatusEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry>();
        ent_->parent = this;
        docsifcmtscmstatusentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsCmStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtscmstatusentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsCmStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsCmStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsCmStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusEntry()
    :
    docsifcmtscmstatusindex{YType::int32, "docsIfCmtsCmStatusIndex"},
    docsifcmtscmstatusmacaddress{YType::str, "docsIfCmtsCmStatusMacAddress"},
    docsifcmtscmstatusipaddress{YType::str, "docsIfCmtsCmStatusIpAddress"},
    docsifcmtscmstatusdownchannelifindex{YType::int32, "docsIfCmtsCmStatusDownChannelIfIndex"},
    docsifcmtscmstatusupchannelifindex{YType::int32, "docsIfCmtsCmStatusUpChannelIfIndex"},
    docsifcmtscmstatusrxpower{YType::int32, "docsIfCmtsCmStatusRxPower"},
    docsifcmtscmstatustimingoffset{YType::uint32, "docsIfCmtsCmStatusTimingOffset"},
    docsifcmtscmstatusequalizationdata{YType::str, "docsIfCmtsCmStatusEqualizationData"},
    docsifcmtscmstatusvalue{YType::enumeration, "docsIfCmtsCmStatusValue"},
    docsifcmtscmstatusunerroreds{YType::uint32, "docsIfCmtsCmStatusUnerroreds"},
    docsifcmtscmstatuscorrecteds{YType::uint32, "docsIfCmtsCmStatusCorrecteds"},
    docsifcmtscmstatusuncorrectables{YType::uint32, "docsIfCmtsCmStatusUncorrectables"},
    docsifcmtscmstatussignalnoise{YType::int32, "docsIfCmtsCmStatusSignalNoise"},
    docsifcmtscmstatusmicroreflections{YType::int32, "docsIfCmtsCmStatusMicroreflections"},
    docsifcmtscmstatusextunerroreds{YType::uint64, "docsIfCmtsCmStatusExtUnerroreds"},
    docsifcmtscmstatusextcorrecteds{YType::uint64, "docsIfCmtsCmStatusExtCorrecteds"},
    docsifcmtscmstatusextuncorrectables{YType::uint64, "docsIfCmtsCmStatusExtUncorrectables"},
    docsifcmtscmstatusdocsisregmode{YType::enumeration, "docsIfCmtsCmStatusDocsisRegMode"},
    docsifcmtscmstatusmodulationtype{YType::enumeration, "docsIfCmtsCmStatusModulationType"},
    docsifcmtscmstatusinetaddresstype{YType::enumeration, "docsIfCmtsCmStatusInetAddressType"},
    docsifcmtscmstatusinetaddress{YType::str, "docsIfCmtsCmStatusInetAddress"},
    docsifcmtscmstatusvaluelastupdate{YType::uint32, "docsIfCmtsCmStatusValueLastUpdate"}
{

    yang_name = "docsIfCmtsCmStatusEntry"; yang_parent_name = "docsIfCmtsCmStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::~DocsIfCmtsCmStatusEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| docsifcmtscmstatusmacaddress.is_set
	|| docsifcmtscmstatusipaddress.is_set
	|| docsifcmtscmstatusdownchannelifindex.is_set
	|| docsifcmtscmstatusupchannelifindex.is_set
	|| docsifcmtscmstatusrxpower.is_set
	|| docsifcmtscmstatustimingoffset.is_set
	|| docsifcmtscmstatusequalizationdata.is_set
	|| docsifcmtscmstatusvalue.is_set
	|| docsifcmtscmstatusunerroreds.is_set
	|| docsifcmtscmstatuscorrecteds.is_set
	|| docsifcmtscmstatusuncorrectables.is_set
	|| docsifcmtscmstatussignalnoise.is_set
	|| docsifcmtscmstatusmicroreflections.is_set
	|| docsifcmtscmstatusextunerroreds.is_set
	|| docsifcmtscmstatusextcorrecteds.is_set
	|| docsifcmtscmstatusextuncorrectables.is_set
	|| docsifcmtscmstatusdocsisregmode.is_set
	|| docsifcmtscmstatusmodulationtype.is_set
	|| docsifcmtscmstatusinetaddresstype.is_set
	|| docsifcmtscmstatusinetaddress.is_set
	|| docsifcmtscmstatusvaluelastupdate.is_set;
}

bool DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(docsifcmtscmstatusmacaddress.yfilter)
	|| ydk::is_set(docsifcmtscmstatusipaddress.yfilter)
	|| ydk::is_set(docsifcmtscmstatusdownchannelifindex.yfilter)
	|| ydk::is_set(docsifcmtscmstatusupchannelifindex.yfilter)
	|| ydk::is_set(docsifcmtscmstatusrxpower.yfilter)
	|| ydk::is_set(docsifcmtscmstatustimingoffset.yfilter)
	|| ydk::is_set(docsifcmtscmstatusequalizationdata.yfilter)
	|| ydk::is_set(docsifcmtscmstatusvalue.yfilter)
	|| ydk::is_set(docsifcmtscmstatusunerroreds.yfilter)
	|| ydk::is_set(docsifcmtscmstatuscorrecteds.yfilter)
	|| ydk::is_set(docsifcmtscmstatusuncorrectables.yfilter)
	|| ydk::is_set(docsifcmtscmstatussignalnoise.yfilter)
	|| ydk::is_set(docsifcmtscmstatusmicroreflections.yfilter)
	|| ydk::is_set(docsifcmtscmstatusextunerroreds.yfilter)
	|| ydk::is_set(docsifcmtscmstatusextcorrecteds.yfilter)
	|| ydk::is_set(docsifcmtscmstatusextuncorrectables.yfilter)
	|| ydk::is_set(docsifcmtscmstatusdocsisregmode.yfilter)
	|| ydk::is_set(docsifcmtscmstatusmodulationtype.yfilter)
	|| ydk::is_set(docsifcmtscmstatusinetaddresstype.yfilter)
	|| ydk::is_set(docsifcmtscmstatusinetaddress.yfilter)
	|| ydk::is_set(docsifcmtscmstatusvaluelastupdate.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsCmStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsCmStatusEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (docsifcmtscmstatusmacaddress.is_set || is_set(docsifcmtscmstatusmacaddress.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusmacaddress.get_name_leafdata());
    if (docsifcmtscmstatusipaddress.is_set || is_set(docsifcmtscmstatusipaddress.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusipaddress.get_name_leafdata());
    if (docsifcmtscmstatusdownchannelifindex.is_set || is_set(docsifcmtscmstatusdownchannelifindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusdownchannelifindex.get_name_leafdata());
    if (docsifcmtscmstatusupchannelifindex.is_set || is_set(docsifcmtscmstatusupchannelifindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusupchannelifindex.get_name_leafdata());
    if (docsifcmtscmstatusrxpower.is_set || is_set(docsifcmtscmstatusrxpower.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusrxpower.get_name_leafdata());
    if (docsifcmtscmstatustimingoffset.is_set || is_set(docsifcmtscmstatustimingoffset.yfilter)) leaf_name_data.push_back(docsifcmtscmstatustimingoffset.get_name_leafdata());
    if (docsifcmtscmstatusequalizationdata.is_set || is_set(docsifcmtscmstatusequalizationdata.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusequalizationdata.get_name_leafdata());
    if (docsifcmtscmstatusvalue.is_set || is_set(docsifcmtscmstatusvalue.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusvalue.get_name_leafdata());
    if (docsifcmtscmstatusunerroreds.is_set || is_set(docsifcmtscmstatusunerroreds.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusunerroreds.get_name_leafdata());
    if (docsifcmtscmstatuscorrecteds.is_set || is_set(docsifcmtscmstatuscorrecteds.yfilter)) leaf_name_data.push_back(docsifcmtscmstatuscorrecteds.get_name_leafdata());
    if (docsifcmtscmstatusuncorrectables.is_set || is_set(docsifcmtscmstatusuncorrectables.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusuncorrectables.get_name_leafdata());
    if (docsifcmtscmstatussignalnoise.is_set || is_set(docsifcmtscmstatussignalnoise.yfilter)) leaf_name_data.push_back(docsifcmtscmstatussignalnoise.get_name_leafdata());
    if (docsifcmtscmstatusmicroreflections.is_set || is_set(docsifcmtscmstatusmicroreflections.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusmicroreflections.get_name_leafdata());
    if (docsifcmtscmstatusextunerroreds.is_set || is_set(docsifcmtscmstatusextunerroreds.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusextunerroreds.get_name_leafdata());
    if (docsifcmtscmstatusextcorrecteds.is_set || is_set(docsifcmtscmstatusextcorrecteds.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusextcorrecteds.get_name_leafdata());
    if (docsifcmtscmstatusextuncorrectables.is_set || is_set(docsifcmtscmstatusextuncorrectables.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusextuncorrectables.get_name_leafdata());
    if (docsifcmtscmstatusdocsisregmode.is_set || is_set(docsifcmtscmstatusdocsisregmode.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusdocsisregmode.get_name_leafdata());
    if (docsifcmtscmstatusmodulationtype.is_set || is_set(docsifcmtscmstatusmodulationtype.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusmodulationtype.get_name_leafdata());
    if (docsifcmtscmstatusinetaddresstype.is_set || is_set(docsifcmtscmstatusinetaddresstype.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusinetaddresstype.get_name_leafdata());
    if (docsifcmtscmstatusinetaddress.is_set || is_set(docsifcmtscmstatusinetaddress.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusinetaddress.get_name_leafdata());
    if (docsifcmtscmstatusvaluelastupdate.is_set || is_set(docsifcmtscmstatusvaluelastupdate.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusvaluelastupdate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusMacAddress")
    {
        docsifcmtscmstatusmacaddress = value;
        docsifcmtscmstatusmacaddress.value_namespace = name_space;
        docsifcmtscmstatusmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusIpAddress")
    {
        docsifcmtscmstatusipaddress = value;
        docsifcmtscmstatusipaddress.value_namespace = name_space;
        docsifcmtscmstatusipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusDownChannelIfIndex")
    {
        docsifcmtscmstatusdownchannelifindex = value;
        docsifcmtscmstatusdownchannelifindex.value_namespace = name_space;
        docsifcmtscmstatusdownchannelifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusUpChannelIfIndex")
    {
        docsifcmtscmstatusupchannelifindex = value;
        docsifcmtscmstatusupchannelifindex.value_namespace = name_space;
        docsifcmtscmstatusupchannelifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusRxPower")
    {
        docsifcmtscmstatusrxpower = value;
        docsifcmtscmstatusrxpower.value_namespace = name_space;
        docsifcmtscmstatusrxpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusTimingOffset")
    {
        docsifcmtscmstatustimingoffset = value;
        docsifcmtscmstatustimingoffset.value_namespace = name_space;
        docsifcmtscmstatustimingoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusEqualizationData")
    {
        docsifcmtscmstatusequalizationdata = value;
        docsifcmtscmstatusequalizationdata.value_namespace = name_space;
        docsifcmtscmstatusequalizationdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusValue")
    {
        docsifcmtscmstatusvalue = value;
        docsifcmtscmstatusvalue.value_namespace = name_space;
        docsifcmtscmstatusvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusUnerroreds")
    {
        docsifcmtscmstatusunerroreds = value;
        docsifcmtscmstatusunerroreds.value_namespace = name_space;
        docsifcmtscmstatusunerroreds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusCorrecteds")
    {
        docsifcmtscmstatuscorrecteds = value;
        docsifcmtscmstatuscorrecteds.value_namespace = name_space;
        docsifcmtscmstatuscorrecteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusUncorrectables")
    {
        docsifcmtscmstatusuncorrectables = value;
        docsifcmtscmstatusuncorrectables.value_namespace = name_space;
        docsifcmtscmstatusuncorrectables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusSignalNoise")
    {
        docsifcmtscmstatussignalnoise = value;
        docsifcmtscmstatussignalnoise.value_namespace = name_space;
        docsifcmtscmstatussignalnoise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusMicroreflections")
    {
        docsifcmtscmstatusmicroreflections = value;
        docsifcmtscmstatusmicroreflections.value_namespace = name_space;
        docsifcmtscmstatusmicroreflections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusExtUnerroreds")
    {
        docsifcmtscmstatusextunerroreds = value;
        docsifcmtscmstatusextunerroreds.value_namespace = name_space;
        docsifcmtscmstatusextunerroreds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusExtCorrecteds")
    {
        docsifcmtscmstatusextcorrecteds = value;
        docsifcmtscmstatusextcorrecteds.value_namespace = name_space;
        docsifcmtscmstatusextcorrecteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusExtUncorrectables")
    {
        docsifcmtscmstatusextuncorrectables = value;
        docsifcmtscmstatusextuncorrectables.value_namespace = name_space;
        docsifcmtscmstatusextuncorrectables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusDocsisRegMode")
    {
        docsifcmtscmstatusdocsisregmode = value;
        docsifcmtscmstatusdocsisregmode.value_namespace = name_space;
        docsifcmtscmstatusdocsisregmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusModulationType")
    {
        docsifcmtscmstatusmodulationtype = value;
        docsifcmtscmstatusmodulationtype.value_namespace = name_space;
        docsifcmtscmstatusmodulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusInetAddressType")
    {
        docsifcmtscmstatusinetaddresstype = value;
        docsifcmtscmstatusinetaddresstype.value_namespace = name_space;
        docsifcmtscmstatusinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusInetAddress")
    {
        docsifcmtscmstatusinetaddress = value;
        docsifcmtscmstatusinetaddress.value_namespace = name_space;
        docsifcmtscmstatusinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmStatusValueLastUpdate")
    {
        docsifcmtscmstatusvaluelastupdate = value;
        docsifcmtscmstatusvaluelastupdate.value_namespace = name_space;
        docsifcmtscmstatusvaluelastupdate.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusMacAddress")
    {
        docsifcmtscmstatusmacaddress.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusIpAddress")
    {
        docsifcmtscmstatusipaddress.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusDownChannelIfIndex")
    {
        docsifcmtscmstatusdownchannelifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusUpChannelIfIndex")
    {
        docsifcmtscmstatusupchannelifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusRxPower")
    {
        docsifcmtscmstatusrxpower.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusTimingOffset")
    {
        docsifcmtscmstatustimingoffset.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusEqualizationData")
    {
        docsifcmtscmstatusequalizationdata.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusValue")
    {
        docsifcmtscmstatusvalue.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusUnerroreds")
    {
        docsifcmtscmstatusunerroreds.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusCorrecteds")
    {
        docsifcmtscmstatuscorrecteds.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusUncorrectables")
    {
        docsifcmtscmstatusuncorrectables.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusSignalNoise")
    {
        docsifcmtscmstatussignalnoise.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusMicroreflections")
    {
        docsifcmtscmstatusmicroreflections.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusExtUnerroreds")
    {
        docsifcmtscmstatusextunerroreds.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusExtCorrecteds")
    {
        docsifcmtscmstatusextcorrecteds.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusExtUncorrectables")
    {
        docsifcmtscmstatusextuncorrectables.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusDocsisRegMode")
    {
        docsifcmtscmstatusdocsisregmode.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusModulationType")
    {
        docsifcmtscmstatusmodulationtype.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusInetAddressType")
    {
        docsifcmtscmstatusinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusInetAddress")
    {
        docsifcmtscmstatusinetaddress.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmStatusValueLastUpdate")
    {
        docsifcmtscmstatusvaluelastupdate.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "docsIfCmtsCmStatusMacAddress" || name == "docsIfCmtsCmStatusIpAddress" || name == "docsIfCmtsCmStatusDownChannelIfIndex" || name == "docsIfCmtsCmStatusUpChannelIfIndex" || name == "docsIfCmtsCmStatusRxPower" || name == "docsIfCmtsCmStatusTimingOffset" || name == "docsIfCmtsCmStatusEqualizationData" || name == "docsIfCmtsCmStatusValue" || name == "docsIfCmtsCmStatusUnerroreds" || name == "docsIfCmtsCmStatusCorrecteds" || name == "docsIfCmtsCmStatusUncorrectables" || name == "docsIfCmtsCmStatusSignalNoise" || name == "docsIfCmtsCmStatusMicroreflections" || name == "docsIfCmtsCmStatusExtUnerroreds" || name == "docsIfCmtsCmStatusExtCorrecteds" || name == "docsIfCmtsCmStatusExtUncorrectables" || name == "docsIfCmtsCmStatusDocsisRegMode" || name == "docsIfCmtsCmStatusModulationType" || name == "docsIfCmtsCmStatusInetAddressType" || name == "docsIfCmtsCmStatusInetAddress" || name == "docsIfCmtsCmStatusValueLastUpdate")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceTable()
    :
    docsifcmtsserviceentry(this, {"ifindex", "docsifcmtsserviceid"})
{

    yang_name = "docsIfCmtsServiceTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsServiceTable::~DocsIfCmtsServiceTable()
{
}

bool DOCSIFMIB::DocsIfCmtsServiceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtsserviceentry.len(); index++)
    {
        if(docsifcmtsserviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsServiceTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtsserviceentry.len(); index++)
    {
        if(docsifcmtsserviceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsServiceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsServiceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsServiceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsServiceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsServiceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsServiceEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry>();
        ent_->parent = this;
        docsifcmtsserviceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsServiceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtsserviceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsServiceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsServiceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsServiceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsServiceEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::DocsIfCmtsServiceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmtsserviceid{YType::int32, "docsIfCmtsServiceId"},
    docsifcmtsservicecmstatusindex{YType::int32, "docsIfCmtsServiceCmStatusIndex"},
    docsifcmtsserviceadminstatus{YType::enumeration, "docsIfCmtsServiceAdminStatus"},
    docsifcmtsserviceqosprofile{YType::int32, "docsIfCmtsServiceQosProfile"},
    docsifcmtsservicecreatetime{YType::uint32, "docsIfCmtsServiceCreateTime"},
    docsifcmtsserviceinoctets{YType::uint32, "docsIfCmtsServiceInOctets"},
    docsifcmtsserviceinpackets{YType::uint32, "docsIfCmtsServiceInPackets"},
    docsifcmtsservicenewcmstatusindex{YType::int32, "docsIfCmtsServiceNewCmStatusIndex"}
{

    yang_name = "docsIfCmtsServiceEntry"; yang_parent_name = "docsIfCmtsServiceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::~DocsIfCmtsServiceEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmtsserviceid.is_set
	|| docsifcmtsservicecmstatusindex.is_set
	|| docsifcmtsserviceadminstatus.is_set
	|| docsifcmtsserviceqosprofile.is_set
	|| docsifcmtsservicecreatetime.is_set
	|| docsifcmtsserviceinoctets.is_set
	|| docsifcmtsserviceinpackets.is_set
	|| docsifcmtsservicenewcmstatusindex.is_set;
}

bool DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmtsserviceid.yfilter)
	|| ydk::is_set(docsifcmtsservicecmstatusindex.yfilter)
	|| ydk::is_set(docsifcmtsserviceadminstatus.yfilter)
	|| ydk::is_set(docsifcmtsserviceqosprofile.yfilter)
	|| ydk::is_set(docsifcmtsservicecreatetime.yfilter)
	|| ydk::is_set(docsifcmtsserviceinoctets.yfilter)
	|| ydk::is_set(docsifcmtsserviceinpackets.yfilter)
	|| ydk::is_set(docsifcmtsservicenewcmstatusindex.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsServiceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsServiceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsifcmtsserviceid, "docsIfCmtsServiceId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmtsserviceid.is_set || is_set(docsifcmtsserviceid.yfilter)) leaf_name_data.push_back(docsifcmtsserviceid.get_name_leafdata());
    if (docsifcmtsservicecmstatusindex.is_set || is_set(docsifcmtsservicecmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtsservicecmstatusindex.get_name_leafdata());
    if (docsifcmtsserviceadminstatus.is_set || is_set(docsifcmtsserviceadminstatus.yfilter)) leaf_name_data.push_back(docsifcmtsserviceadminstatus.get_name_leafdata());
    if (docsifcmtsserviceqosprofile.is_set || is_set(docsifcmtsserviceqosprofile.yfilter)) leaf_name_data.push_back(docsifcmtsserviceqosprofile.get_name_leafdata());
    if (docsifcmtsservicecreatetime.is_set || is_set(docsifcmtsservicecreatetime.yfilter)) leaf_name_data.push_back(docsifcmtsservicecreatetime.get_name_leafdata());
    if (docsifcmtsserviceinoctets.is_set || is_set(docsifcmtsserviceinoctets.yfilter)) leaf_name_data.push_back(docsifcmtsserviceinoctets.get_name_leafdata());
    if (docsifcmtsserviceinpackets.is_set || is_set(docsifcmtsserviceinpackets.yfilter)) leaf_name_data.push_back(docsifcmtsserviceinpackets.get_name_leafdata());
    if (docsifcmtsservicenewcmstatusindex.is_set || is_set(docsifcmtsservicenewcmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtsservicenewcmstatusindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceId")
    {
        docsifcmtsserviceid = value;
        docsifcmtsserviceid.value_namespace = name_space;
        docsifcmtsserviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceCmStatusIndex")
    {
        docsifcmtsservicecmstatusindex = value;
        docsifcmtsservicecmstatusindex.value_namespace = name_space;
        docsifcmtsservicecmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceAdminStatus")
    {
        docsifcmtsserviceadminstatus = value;
        docsifcmtsserviceadminstatus.value_namespace = name_space;
        docsifcmtsserviceadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceQosProfile")
    {
        docsifcmtsserviceqosprofile = value;
        docsifcmtsserviceqosprofile.value_namespace = name_space;
        docsifcmtsserviceqosprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceCreateTime")
    {
        docsifcmtsservicecreatetime = value;
        docsifcmtsservicecreatetime.value_namespace = name_space;
        docsifcmtsservicecreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceInOctets")
    {
        docsifcmtsserviceinoctets = value;
        docsifcmtsserviceinoctets.value_namespace = name_space;
        docsifcmtsserviceinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceInPackets")
    {
        docsifcmtsserviceinpackets = value;
        docsifcmtsserviceinpackets.value_namespace = name_space;
        docsifcmtsserviceinpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceNewCmStatusIndex")
    {
        docsifcmtsservicenewcmstatusindex = value;
        docsifcmtsservicenewcmstatusindex.value_namespace = name_space;
        docsifcmtsservicenewcmstatusindex.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceId")
    {
        docsifcmtsserviceid.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceCmStatusIndex")
    {
        docsifcmtsservicecmstatusindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceAdminStatus")
    {
        docsifcmtsserviceadminstatus.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceQosProfile")
    {
        docsifcmtsserviceqosprofile.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceCreateTime")
    {
        docsifcmtsservicecreatetime.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceInOctets")
    {
        docsifcmtsserviceinoctets.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceInPackets")
    {
        docsifcmtsserviceinpackets.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceNewCmStatusIndex")
    {
        docsifcmtsservicenewcmstatusindex.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmtsServiceId" || name == "docsIfCmtsServiceCmStatusIndex" || name == "docsIfCmtsServiceAdminStatus" || name == "docsIfCmtsServiceQosProfile" || name == "docsIfCmtsServiceCreateTime" || name == "docsIfCmtsServiceInOctets" || name == "docsIfCmtsServiceInPackets" || name == "docsIfCmtsServiceNewCmStatusIndex")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationTable()
    :
    docsifcmtsmodulationentry(this, {"docsifcmtsmodindex", "docsifcmtsmodintervalusagecode"})
{

    yang_name = "docsIfCmtsModulationTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsModulationTable::~DocsIfCmtsModulationTable()
{
}

bool DOCSIFMIB::DocsIfCmtsModulationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtsmodulationentry.len(); index++)
    {
        if(docsifcmtsmodulationentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsModulationTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtsmodulationentry.len(); index++)
    {
        if(docsifcmtsmodulationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsModulationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsModulationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsModulationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsModulationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsModulationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsModulationEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry>();
        ent_->parent = this;
        docsifcmtsmodulationentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsModulationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtsmodulationentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsModulationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsModulationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsModulationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsModulationEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModulationEntry()
    :
    docsifcmtsmodindex{YType::int32, "docsIfCmtsModIndex"},
    docsifcmtsmodintervalusagecode{YType::enumeration, "docsIfCmtsModIntervalUsageCode"},
    docsifcmtsmodcontrol{YType::enumeration, "docsIfCmtsModControl"},
    docsifcmtsmodtype{YType::enumeration, "docsIfCmtsModType"},
    docsifcmtsmodpreamblelen{YType::int32, "docsIfCmtsModPreambleLen"},
    docsifcmtsmoddifferentialencoding{YType::boolean, "docsIfCmtsModDifferentialEncoding"},
    docsifcmtsmodfecerrorcorrection{YType::int32, "docsIfCmtsModFECErrorCorrection"},
    docsifcmtsmodfeccodewordlength{YType::int32, "docsIfCmtsModFECCodewordLength"},
    docsifcmtsmodscramblerseed{YType::int32, "docsIfCmtsModScramblerSeed"},
    docsifcmtsmodmaxburstsize{YType::int32, "docsIfCmtsModMaxBurstSize"},
    docsifcmtsmodguardtimesize{YType::uint32, "docsIfCmtsModGuardTimeSize"},
    docsifcmtsmodlastcodewordshortened{YType::boolean, "docsIfCmtsModLastCodewordShortened"},
    docsifcmtsmodscrambler{YType::boolean, "docsIfCmtsModScrambler"},
    docsifcmtsmodbyteinterleaverdepth{YType::uint32, "docsIfCmtsModByteInterleaverDepth"},
    docsifcmtsmodbyteinterleaverblocksize{YType::uint32, "docsIfCmtsModByteInterleaverBlockSize"},
    docsifcmtsmodpreambletype{YType::enumeration, "docsIfCmtsModPreambleType"},
    docsifcmtsmodtcmerrorcorrectionon{YType::boolean, "docsIfCmtsModTcmErrorCorrectionOn"},
    docsifcmtsmodscdmainterleaverstepsize{YType::uint32, "docsIfCmtsModScdmaInterleaverStepSize"},
    docsifcmtsmodscdmaspreaderenable{YType::boolean, "docsIfCmtsModScdmaSpreaderEnable"},
    docsifcmtsmodscdmasubframecodes{YType::uint32, "docsIfCmtsModScdmaSubframeCodes"},
    docsifcmtsmodchanneltype{YType::enumeration, "docsIfCmtsModChannelType"}
{

    yang_name = "docsIfCmtsModulationEntry"; yang_parent_name = "docsIfCmtsModulationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::~DocsIfCmtsModulationEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtsmodindex.is_set
	|| docsifcmtsmodintervalusagecode.is_set
	|| docsifcmtsmodcontrol.is_set
	|| docsifcmtsmodtype.is_set
	|| docsifcmtsmodpreamblelen.is_set
	|| docsifcmtsmoddifferentialencoding.is_set
	|| docsifcmtsmodfecerrorcorrection.is_set
	|| docsifcmtsmodfeccodewordlength.is_set
	|| docsifcmtsmodscramblerseed.is_set
	|| docsifcmtsmodmaxburstsize.is_set
	|| docsifcmtsmodguardtimesize.is_set
	|| docsifcmtsmodlastcodewordshortened.is_set
	|| docsifcmtsmodscrambler.is_set
	|| docsifcmtsmodbyteinterleaverdepth.is_set
	|| docsifcmtsmodbyteinterleaverblocksize.is_set
	|| docsifcmtsmodpreambletype.is_set
	|| docsifcmtsmodtcmerrorcorrectionon.is_set
	|| docsifcmtsmodscdmainterleaverstepsize.is_set
	|| docsifcmtsmodscdmaspreaderenable.is_set
	|| docsifcmtsmodscdmasubframecodes.is_set
	|| docsifcmtsmodchanneltype.is_set;
}

bool DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtsmodindex.yfilter)
	|| ydk::is_set(docsifcmtsmodintervalusagecode.yfilter)
	|| ydk::is_set(docsifcmtsmodcontrol.yfilter)
	|| ydk::is_set(docsifcmtsmodtype.yfilter)
	|| ydk::is_set(docsifcmtsmodpreamblelen.yfilter)
	|| ydk::is_set(docsifcmtsmoddifferentialencoding.yfilter)
	|| ydk::is_set(docsifcmtsmodfecerrorcorrection.yfilter)
	|| ydk::is_set(docsifcmtsmodfeccodewordlength.yfilter)
	|| ydk::is_set(docsifcmtsmodscramblerseed.yfilter)
	|| ydk::is_set(docsifcmtsmodmaxburstsize.yfilter)
	|| ydk::is_set(docsifcmtsmodguardtimesize.yfilter)
	|| ydk::is_set(docsifcmtsmodlastcodewordshortened.yfilter)
	|| ydk::is_set(docsifcmtsmodscrambler.yfilter)
	|| ydk::is_set(docsifcmtsmodbyteinterleaverdepth.yfilter)
	|| ydk::is_set(docsifcmtsmodbyteinterleaverblocksize.yfilter)
	|| ydk::is_set(docsifcmtsmodpreambletype.yfilter)
	|| ydk::is_set(docsifcmtsmodtcmerrorcorrectionon.yfilter)
	|| ydk::is_set(docsifcmtsmodscdmainterleaverstepsize.yfilter)
	|| ydk::is_set(docsifcmtsmodscdmaspreaderenable.yfilter)
	|| ydk::is_set(docsifcmtsmodscdmasubframecodes.yfilter)
	|| ydk::is_set(docsifcmtsmodchanneltype.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsModulationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsModulationEntry";
    ADD_KEY_TOKEN(docsifcmtsmodindex, "docsIfCmtsModIndex");
    ADD_KEY_TOKEN(docsifcmtsmodintervalusagecode, "docsIfCmtsModIntervalUsageCode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtsmodindex.is_set || is_set(docsifcmtsmodindex.yfilter)) leaf_name_data.push_back(docsifcmtsmodindex.get_name_leafdata());
    if (docsifcmtsmodintervalusagecode.is_set || is_set(docsifcmtsmodintervalusagecode.yfilter)) leaf_name_data.push_back(docsifcmtsmodintervalusagecode.get_name_leafdata());
    if (docsifcmtsmodcontrol.is_set || is_set(docsifcmtsmodcontrol.yfilter)) leaf_name_data.push_back(docsifcmtsmodcontrol.get_name_leafdata());
    if (docsifcmtsmodtype.is_set || is_set(docsifcmtsmodtype.yfilter)) leaf_name_data.push_back(docsifcmtsmodtype.get_name_leafdata());
    if (docsifcmtsmodpreamblelen.is_set || is_set(docsifcmtsmodpreamblelen.yfilter)) leaf_name_data.push_back(docsifcmtsmodpreamblelen.get_name_leafdata());
    if (docsifcmtsmoddifferentialencoding.is_set || is_set(docsifcmtsmoddifferentialencoding.yfilter)) leaf_name_data.push_back(docsifcmtsmoddifferentialencoding.get_name_leafdata());
    if (docsifcmtsmodfecerrorcorrection.is_set || is_set(docsifcmtsmodfecerrorcorrection.yfilter)) leaf_name_data.push_back(docsifcmtsmodfecerrorcorrection.get_name_leafdata());
    if (docsifcmtsmodfeccodewordlength.is_set || is_set(docsifcmtsmodfeccodewordlength.yfilter)) leaf_name_data.push_back(docsifcmtsmodfeccodewordlength.get_name_leafdata());
    if (docsifcmtsmodscramblerseed.is_set || is_set(docsifcmtsmodscramblerseed.yfilter)) leaf_name_data.push_back(docsifcmtsmodscramblerseed.get_name_leafdata());
    if (docsifcmtsmodmaxburstsize.is_set || is_set(docsifcmtsmodmaxburstsize.yfilter)) leaf_name_data.push_back(docsifcmtsmodmaxburstsize.get_name_leafdata());
    if (docsifcmtsmodguardtimesize.is_set || is_set(docsifcmtsmodguardtimesize.yfilter)) leaf_name_data.push_back(docsifcmtsmodguardtimesize.get_name_leafdata());
    if (docsifcmtsmodlastcodewordshortened.is_set || is_set(docsifcmtsmodlastcodewordshortened.yfilter)) leaf_name_data.push_back(docsifcmtsmodlastcodewordshortened.get_name_leafdata());
    if (docsifcmtsmodscrambler.is_set || is_set(docsifcmtsmodscrambler.yfilter)) leaf_name_data.push_back(docsifcmtsmodscrambler.get_name_leafdata());
    if (docsifcmtsmodbyteinterleaverdepth.is_set || is_set(docsifcmtsmodbyteinterleaverdepth.yfilter)) leaf_name_data.push_back(docsifcmtsmodbyteinterleaverdepth.get_name_leafdata());
    if (docsifcmtsmodbyteinterleaverblocksize.is_set || is_set(docsifcmtsmodbyteinterleaverblocksize.yfilter)) leaf_name_data.push_back(docsifcmtsmodbyteinterleaverblocksize.get_name_leafdata());
    if (docsifcmtsmodpreambletype.is_set || is_set(docsifcmtsmodpreambletype.yfilter)) leaf_name_data.push_back(docsifcmtsmodpreambletype.get_name_leafdata());
    if (docsifcmtsmodtcmerrorcorrectionon.is_set || is_set(docsifcmtsmodtcmerrorcorrectionon.yfilter)) leaf_name_data.push_back(docsifcmtsmodtcmerrorcorrectionon.get_name_leafdata());
    if (docsifcmtsmodscdmainterleaverstepsize.is_set || is_set(docsifcmtsmodscdmainterleaverstepsize.yfilter)) leaf_name_data.push_back(docsifcmtsmodscdmainterleaverstepsize.get_name_leafdata());
    if (docsifcmtsmodscdmaspreaderenable.is_set || is_set(docsifcmtsmodscdmaspreaderenable.yfilter)) leaf_name_data.push_back(docsifcmtsmodscdmaspreaderenable.get_name_leafdata());
    if (docsifcmtsmodscdmasubframecodes.is_set || is_set(docsifcmtsmodscdmasubframecodes.yfilter)) leaf_name_data.push_back(docsifcmtsmodscdmasubframecodes.get_name_leafdata());
    if (docsifcmtsmodchanneltype.is_set || is_set(docsifcmtsmodchanneltype.yfilter)) leaf_name_data.push_back(docsifcmtsmodchanneltype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsModIndex")
    {
        docsifcmtsmodindex = value;
        docsifcmtsmodindex.value_namespace = name_space;
        docsifcmtsmodindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModIntervalUsageCode")
    {
        docsifcmtsmodintervalusagecode = value;
        docsifcmtsmodintervalusagecode.value_namespace = name_space;
        docsifcmtsmodintervalusagecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModControl")
    {
        docsifcmtsmodcontrol = value;
        docsifcmtsmodcontrol.value_namespace = name_space;
        docsifcmtsmodcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModType")
    {
        docsifcmtsmodtype = value;
        docsifcmtsmodtype.value_namespace = name_space;
        docsifcmtsmodtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModPreambleLen")
    {
        docsifcmtsmodpreamblelen = value;
        docsifcmtsmodpreamblelen.value_namespace = name_space;
        docsifcmtsmodpreamblelen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModDifferentialEncoding")
    {
        docsifcmtsmoddifferentialencoding = value;
        docsifcmtsmoddifferentialencoding.value_namespace = name_space;
        docsifcmtsmoddifferentialencoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModFECErrorCorrection")
    {
        docsifcmtsmodfecerrorcorrection = value;
        docsifcmtsmodfecerrorcorrection.value_namespace = name_space;
        docsifcmtsmodfecerrorcorrection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModFECCodewordLength")
    {
        docsifcmtsmodfeccodewordlength = value;
        docsifcmtsmodfeccodewordlength.value_namespace = name_space;
        docsifcmtsmodfeccodewordlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModScramblerSeed")
    {
        docsifcmtsmodscramblerseed = value;
        docsifcmtsmodscramblerseed.value_namespace = name_space;
        docsifcmtsmodscramblerseed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModMaxBurstSize")
    {
        docsifcmtsmodmaxburstsize = value;
        docsifcmtsmodmaxburstsize.value_namespace = name_space;
        docsifcmtsmodmaxburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModGuardTimeSize")
    {
        docsifcmtsmodguardtimesize = value;
        docsifcmtsmodguardtimesize.value_namespace = name_space;
        docsifcmtsmodguardtimesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModLastCodewordShortened")
    {
        docsifcmtsmodlastcodewordshortened = value;
        docsifcmtsmodlastcodewordshortened.value_namespace = name_space;
        docsifcmtsmodlastcodewordshortened.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModScrambler")
    {
        docsifcmtsmodscrambler = value;
        docsifcmtsmodscrambler.value_namespace = name_space;
        docsifcmtsmodscrambler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModByteInterleaverDepth")
    {
        docsifcmtsmodbyteinterleaverdepth = value;
        docsifcmtsmodbyteinterleaverdepth.value_namespace = name_space;
        docsifcmtsmodbyteinterleaverdepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModByteInterleaverBlockSize")
    {
        docsifcmtsmodbyteinterleaverblocksize = value;
        docsifcmtsmodbyteinterleaverblocksize.value_namespace = name_space;
        docsifcmtsmodbyteinterleaverblocksize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModPreambleType")
    {
        docsifcmtsmodpreambletype = value;
        docsifcmtsmodpreambletype.value_namespace = name_space;
        docsifcmtsmodpreambletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModTcmErrorCorrectionOn")
    {
        docsifcmtsmodtcmerrorcorrectionon = value;
        docsifcmtsmodtcmerrorcorrectionon.value_namespace = name_space;
        docsifcmtsmodtcmerrorcorrectionon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModScdmaInterleaverStepSize")
    {
        docsifcmtsmodscdmainterleaverstepsize = value;
        docsifcmtsmodscdmainterleaverstepsize.value_namespace = name_space;
        docsifcmtsmodscdmainterleaverstepsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModScdmaSpreaderEnable")
    {
        docsifcmtsmodscdmaspreaderenable = value;
        docsifcmtsmodscdmaspreaderenable.value_namespace = name_space;
        docsifcmtsmodscdmaspreaderenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModScdmaSubframeCodes")
    {
        docsifcmtsmodscdmasubframecodes = value;
        docsifcmtsmodscdmasubframecodes.value_namespace = name_space;
        docsifcmtsmodscdmasubframecodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsModChannelType")
    {
        docsifcmtsmodchanneltype = value;
        docsifcmtsmodchanneltype.value_namespace = name_space;
        docsifcmtsmodchanneltype.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsModIndex")
    {
        docsifcmtsmodindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModIntervalUsageCode")
    {
        docsifcmtsmodintervalusagecode.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModControl")
    {
        docsifcmtsmodcontrol.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModType")
    {
        docsifcmtsmodtype.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModPreambleLen")
    {
        docsifcmtsmodpreamblelen.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModDifferentialEncoding")
    {
        docsifcmtsmoddifferentialencoding.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModFECErrorCorrection")
    {
        docsifcmtsmodfecerrorcorrection.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModFECCodewordLength")
    {
        docsifcmtsmodfeccodewordlength.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModScramblerSeed")
    {
        docsifcmtsmodscramblerseed.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModMaxBurstSize")
    {
        docsifcmtsmodmaxburstsize.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModGuardTimeSize")
    {
        docsifcmtsmodguardtimesize.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModLastCodewordShortened")
    {
        docsifcmtsmodlastcodewordshortened.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModScrambler")
    {
        docsifcmtsmodscrambler.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModByteInterleaverDepth")
    {
        docsifcmtsmodbyteinterleaverdepth.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModByteInterleaverBlockSize")
    {
        docsifcmtsmodbyteinterleaverblocksize.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModPreambleType")
    {
        docsifcmtsmodpreambletype.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModTcmErrorCorrectionOn")
    {
        docsifcmtsmodtcmerrorcorrectionon.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModScdmaInterleaverStepSize")
    {
        docsifcmtsmodscdmainterleaverstepsize.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModScdmaSpreaderEnable")
    {
        docsifcmtsmodscdmaspreaderenable.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModScdmaSubframeCodes")
    {
        docsifcmtsmodscdmasubframecodes.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsModChannelType")
    {
        docsifcmtsmodchanneltype.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsModIndex" || name == "docsIfCmtsModIntervalUsageCode" || name == "docsIfCmtsModControl" || name == "docsIfCmtsModType" || name == "docsIfCmtsModPreambleLen" || name == "docsIfCmtsModDifferentialEncoding" || name == "docsIfCmtsModFECErrorCorrection" || name == "docsIfCmtsModFECCodewordLength" || name == "docsIfCmtsModScramblerSeed" || name == "docsIfCmtsModMaxBurstSize" || name == "docsIfCmtsModGuardTimeSize" || name == "docsIfCmtsModLastCodewordShortened" || name == "docsIfCmtsModScrambler" || name == "docsIfCmtsModByteInterleaverDepth" || name == "docsIfCmtsModByteInterleaverBlockSize" || name == "docsIfCmtsModPreambleType" || name == "docsIfCmtsModTcmErrorCorrectionOn" || name == "docsIfCmtsModScdmaInterleaverStepSize" || name == "docsIfCmtsModScdmaSpreaderEnable" || name == "docsIfCmtsModScdmaSubframeCodes" || name == "docsIfCmtsModChannelType")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmTable()
    :
    docsifcmtsmactocmentry(this, {"docsifcmtscmmac"})
{

    yang_name = "docsIfCmtsMacToCmTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsMacToCmTable::~DocsIfCmtsMacToCmTable()
{
}

bool DOCSIFMIB::DocsIfCmtsMacToCmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtsmactocmentry.len(); index++)
    {
        if(docsifcmtsmactocmentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsMacToCmTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtsmactocmentry.len(); index++)
    {
        if(docsifcmtsmactocmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsMacToCmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsMacToCmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsMacToCmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsMacToCmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsMacToCmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsMacToCmEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry>();
        ent_->parent = this;
        docsifcmtsmactocmentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsMacToCmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtsmactocmentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsMacToCmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsMacToCmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsMacToCmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsMacToCmEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::DocsIfCmtsMacToCmEntry()
    :
    docsifcmtscmmac{YType::str, "docsIfCmtsCmMac"},
    docsifcmtscmptr{YType::int32, "docsIfCmtsCmPtr"}
{

    yang_name = "docsIfCmtsMacToCmEntry"; yang_parent_name = "docsIfCmtsMacToCmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::~DocsIfCmtsMacToCmEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmmac.is_set
	|| docsifcmtscmptr.is_set;
}

bool DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmmac.yfilter)
	|| ydk::is_set(docsifcmtscmptr.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsMacToCmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsMacToCmEntry";
    ADD_KEY_TOKEN(docsifcmtscmmac, "docsIfCmtsCmMac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmmac.is_set || is_set(docsifcmtscmmac.yfilter)) leaf_name_data.push_back(docsifcmtscmmac.get_name_leafdata());
    if (docsifcmtscmptr.is_set || is_set(docsifcmtscmptr.yfilter)) leaf_name_data.push_back(docsifcmtscmptr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmMac")
    {
        docsifcmtscmmac = value;
        docsifcmtscmmac.value_namespace = name_space;
        docsifcmtscmmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsCmPtr")
    {
        docsifcmtscmptr = value;
        docsifcmtscmptr.value_namespace = name_space;
        docsifcmtscmptr.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmMac")
    {
        docsifcmtscmmac.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsCmPtr")
    {
        docsifcmtscmptr.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmMac" || name == "docsIfCmtsCmPtr")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationTable()
    :
    docsifcmtschannelutilizationentry(this, {"ifindex", "docsifcmtschannelutiftype", "docsifcmtschannelutid"})
{

    yang_name = "docsIfCmtsChannelUtilizationTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::~DocsIfCmtsChannelUtilizationTable()
{
}

bool DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtschannelutilizationentry.len(); index++)
    {
        if(docsifcmtschannelutilizationentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtschannelutilizationentry.len(); index++)
    {
        if(docsifcmtschannelutilizationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsChannelUtilizationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsChannelUtilizationEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry>();
        ent_->parent = this;
        docsifcmtschannelutilizationentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtschannelutilizationentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsChannelUtilizationEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::DocsIfCmtsChannelUtilizationEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmtschannelutiftype{YType::enumeration, "docsIfCmtsChannelUtIfType"},
    docsifcmtschannelutid{YType::int32, "docsIfCmtsChannelUtId"},
    docsifcmtschannelututilization{YType::int32, "docsIfCmtsChannelUtUtilization"}
{

    yang_name = "docsIfCmtsChannelUtilizationEntry"; yang_parent_name = "docsIfCmtsChannelUtilizationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::~DocsIfCmtsChannelUtilizationEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmtschannelutiftype.is_set
	|| docsifcmtschannelutid.is_set
	|| docsifcmtschannelututilization.is_set;
}

bool DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmtschannelutiftype.yfilter)
	|| ydk::is_set(docsifcmtschannelutid.yfilter)
	|| ydk::is_set(docsifcmtschannelututilization.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsChannelUtilizationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsChannelUtilizationEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsifcmtschannelutiftype, "docsIfCmtsChannelUtIfType");
    ADD_KEY_TOKEN(docsifcmtschannelutid, "docsIfCmtsChannelUtId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmtschannelutiftype.is_set || is_set(docsifcmtschannelutiftype.yfilter)) leaf_name_data.push_back(docsifcmtschannelutiftype.get_name_leafdata());
    if (docsifcmtschannelutid.is_set || is_set(docsifcmtschannelutid.yfilter)) leaf_name_data.push_back(docsifcmtschannelutid.get_name_leafdata());
    if (docsifcmtschannelututilization.is_set || is_set(docsifcmtschannelututilization.yfilter)) leaf_name_data.push_back(docsifcmtschannelututilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsChannelUtIfType")
    {
        docsifcmtschannelutiftype = value;
        docsifcmtschannelutiftype.value_namespace = name_space;
        docsifcmtschannelutiftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsChannelUtId")
    {
        docsifcmtschannelutid = value;
        docsifcmtschannelutid.value_namespace = name_space;
        docsifcmtschannelutid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsChannelUtUtilization")
    {
        docsifcmtschannelututilization = value;
        docsifcmtschannelututilization.value_namespace = name_space;
        docsifcmtschannelututilization.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsChannelUtIfType")
    {
        docsifcmtschannelutiftype.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsChannelUtId")
    {
        docsifcmtschannelutid.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsChannelUtUtilization")
    {
        docsifcmtschannelututilization.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmtsChannelUtIfType" || name == "docsIfCmtsChannelUtId" || name == "docsIfCmtsChannelUtUtilization")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterTable()
    :
    docsifcmtsdownchannelcounterentry(this, {"ifindex"})
{

    yang_name = "docsIfCmtsDownChannelCounterTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::~DocsIfCmtsDownChannelCounterTable()
{
}

bool DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtsdownchannelcounterentry.len(); index++)
    {
        if(docsifcmtsdownchannelcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtsdownchannelcounterentry.len(); index++)
    {
        if(docsifcmtsdownchannelcounterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsDownChannelCounterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsDownChannelCounterEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry>();
        ent_->parent = this;
        docsifcmtsdownchannelcounterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtsdownchannelcounterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsDownChannelCounterEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::DocsIfCmtsDownChannelCounterEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmtsdownchnlctrid{YType::int32, "docsIfCmtsDownChnlCtrId"},
    docsifcmtsdownchnlctrtotalbytes{YType::uint32, "docsIfCmtsDownChnlCtrTotalBytes"},
    docsifcmtsdownchnlctrusedbytes{YType::uint32, "docsIfCmtsDownChnlCtrUsedBytes"},
    docsifcmtsdownchnlctrexttotalbytes{YType::uint64, "docsIfCmtsDownChnlCtrExtTotalBytes"},
    docsifcmtsdownchnlctrextusedbytes{YType::uint64, "docsIfCmtsDownChnlCtrExtUsedBytes"}
{

    yang_name = "docsIfCmtsDownChannelCounterEntry"; yang_parent_name = "docsIfCmtsDownChannelCounterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::~DocsIfCmtsDownChannelCounterEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmtsdownchnlctrid.is_set
	|| docsifcmtsdownchnlctrtotalbytes.is_set
	|| docsifcmtsdownchnlctrusedbytes.is_set
	|| docsifcmtsdownchnlctrexttotalbytes.is_set
	|| docsifcmtsdownchnlctrextusedbytes.is_set;
}

bool DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmtsdownchnlctrid.yfilter)
	|| ydk::is_set(docsifcmtsdownchnlctrtotalbytes.yfilter)
	|| ydk::is_set(docsifcmtsdownchnlctrusedbytes.yfilter)
	|| ydk::is_set(docsifcmtsdownchnlctrexttotalbytes.yfilter)
	|| ydk::is_set(docsifcmtsdownchnlctrextusedbytes.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsDownChannelCounterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsDownChannelCounterEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmtsdownchnlctrid.is_set || is_set(docsifcmtsdownchnlctrid.yfilter)) leaf_name_data.push_back(docsifcmtsdownchnlctrid.get_name_leafdata());
    if (docsifcmtsdownchnlctrtotalbytes.is_set || is_set(docsifcmtsdownchnlctrtotalbytes.yfilter)) leaf_name_data.push_back(docsifcmtsdownchnlctrtotalbytes.get_name_leafdata());
    if (docsifcmtsdownchnlctrusedbytes.is_set || is_set(docsifcmtsdownchnlctrusedbytes.yfilter)) leaf_name_data.push_back(docsifcmtsdownchnlctrusedbytes.get_name_leafdata());
    if (docsifcmtsdownchnlctrexttotalbytes.is_set || is_set(docsifcmtsdownchnlctrexttotalbytes.yfilter)) leaf_name_data.push_back(docsifcmtsdownchnlctrexttotalbytes.get_name_leafdata());
    if (docsifcmtsdownchnlctrextusedbytes.is_set || is_set(docsifcmtsdownchnlctrextusedbytes.yfilter)) leaf_name_data.push_back(docsifcmtsdownchnlctrextusedbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsDownChnlCtrId")
    {
        docsifcmtsdownchnlctrid = value;
        docsifcmtsdownchnlctrid.value_namespace = name_space;
        docsifcmtsdownchnlctrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsDownChnlCtrTotalBytes")
    {
        docsifcmtsdownchnlctrtotalbytes = value;
        docsifcmtsdownchnlctrtotalbytes.value_namespace = name_space;
        docsifcmtsdownchnlctrtotalbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsDownChnlCtrUsedBytes")
    {
        docsifcmtsdownchnlctrusedbytes = value;
        docsifcmtsdownchnlctrusedbytes.value_namespace = name_space;
        docsifcmtsdownchnlctrusedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsDownChnlCtrExtTotalBytes")
    {
        docsifcmtsdownchnlctrexttotalbytes = value;
        docsifcmtsdownchnlctrexttotalbytes.value_namespace = name_space;
        docsifcmtsdownchnlctrexttotalbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsDownChnlCtrExtUsedBytes")
    {
        docsifcmtsdownchnlctrextusedbytes = value;
        docsifcmtsdownchnlctrextusedbytes.value_namespace = name_space;
        docsifcmtsdownchnlctrextusedbytes.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsDownChnlCtrId")
    {
        docsifcmtsdownchnlctrid.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsDownChnlCtrTotalBytes")
    {
        docsifcmtsdownchnlctrtotalbytes.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsDownChnlCtrUsedBytes")
    {
        docsifcmtsdownchnlctrusedbytes.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsDownChnlCtrExtTotalBytes")
    {
        docsifcmtsdownchnlctrexttotalbytes.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsDownChnlCtrExtUsedBytes")
    {
        docsifcmtsdownchnlctrextusedbytes.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmtsDownChnlCtrId" || name == "docsIfCmtsDownChnlCtrTotalBytes" || name == "docsIfCmtsDownChnlCtrUsedBytes" || name == "docsIfCmtsDownChnlCtrExtTotalBytes" || name == "docsIfCmtsDownChnlCtrExtUsedBytes")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterTable()
    :
    docsifcmtsupchannelcounterentry(this, {"ifindex"})
{

    yang_name = "docsIfCmtsUpChannelCounterTable"; yang_parent_name = "DOCS-IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::~DocsIfCmtsUpChannelCounterTable()
{
}

bool DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsifcmtsupchannelcounterentry.len(); index++)
    {
        if(docsifcmtsupchannelcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::has_operation() const
{
    for (std::size_t index=0; index<docsifcmtsupchannelcounterentry.len(); index++)
    {
        if(docsifcmtsupchannelcounterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsUpChannelCounterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIfCmtsUpChannelCounterEntry")
    {
        auto ent_ = std::make_shared<DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry>();
        ent_->parent = this;
        docsifcmtsupchannelcounterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsifcmtsupchannelcounterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsUpChannelCounterEntry")
        return true;
    return false;
}

DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::DocsIfCmtsUpChannelCounterEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmtsupchnlctrid{YType::int32, "docsIfCmtsUpChnlCtrId"},
    docsifcmtsupchnlctrtotalmslots{YType::uint32, "docsIfCmtsUpChnlCtrTotalMslots"},
    docsifcmtsupchnlctrucastgrantedmslots{YType::uint32, "docsIfCmtsUpChnlCtrUcastGrantedMslots"},
    docsifcmtsupchnlctrtotalcntnmslots{YType::uint32, "docsIfCmtsUpChnlCtrTotalCntnMslots"},
    docsifcmtsupchnlctrusedcntnmslots{YType::uint32, "docsIfCmtsUpChnlCtrUsedCntnMslots"},
    docsifcmtsupchnlctrexttotalmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtTotalMslots"},
    docsifcmtsupchnlctrextucastgrantedmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtUcastGrantedMslots"},
    docsifcmtsupchnlctrexttotalcntnmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtTotalCntnMslots"},
    docsifcmtsupchnlctrextusedcntnmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtUsedCntnMslots"},
    docsifcmtsupchnlctrcollcntnmslots{YType::uint32, "docsIfCmtsUpChnlCtrCollCntnMslots"},
    docsifcmtsupchnlctrtotalcntnreqmslots{YType::uint32, "docsIfCmtsUpChnlCtrTotalCntnReqMslots"},
    docsifcmtsupchnlctrusedcntnreqmslots{YType::uint32, "docsIfCmtsUpChnlCtrUsedCntnReqMslots"},
    docsifcmtsupchnlctrcollcntnreqmslots{YType::uint32, "docsIfCmtsUpChnlCtrCollCntnReqMslots"},
    docsifcmtsupchnlctrtotalcntnreqdatamslots{YType::uint32, "docsIfCmtsUpChnlCtrTotalCntnReqDataMslots"},
    docsifcmtsupchnlctrusedcntnreqdatamslots{YType::uint32, "docsIfCmtsUpChnlCtrUsedCntnReqDataMslots"},
    docsifcmtsupchnlctrcollcntnreqdatamslots{YType::uint32, "docsIfCmtsUpChnlCtrCollCntnReqDataMslots"},
    docsifcmtsupchnlctrtotalcntninitmaintmslots{YType::uint32, "docsIfCmtsUpChnlCtrTotalCntnInitMaintMslots"},
    docsifcmtsupchnlctrusedcntninitmaintmslots{YType::uint32, "docsIfCmtsUpChnlCtrUsedCntnInitMaintMslots"},
    docsifcmtsupchnlctrcollcntninitmaintmslots{YType::uint32, "docsIfCmtsUpChnlCtrCollCntnInitMaintMslots"},
    docsifcmtsupchnlctrextcollcntnmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtCollCntnMslots"},
    docsifcmtsupchnlctrexttotalcntnreqmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtTotalCntnReqMslots"},
    docsifcmtsupchnlctrextusedcntnreqmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtUsedCntnReqMslots"},
    docsifcmtsupchnlctrextcollcntnreqmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtCollCntnReqMslots"},
    docsifcmtsupchnlctrexttotalcntnreqdatamslots{YType::uint64, "docsIfCmtsUpChnlCtrExtTotalCntnReqDataMslots"},
    docsifcmtsupchnlctrextusedcntnreqdatamslots{YType::uint64, "docsIfCmtsUpChnlCtrExtUsedCntnReqDataMslots"},
    docsifcmtsupchnlctrextcollcntnreqdatamslots{YType::uint64, "docsIfCmtsUpChnlCtrExtCollCntnReqDataMslots"},
    docsifcmtsupchnlctrexttotalcntninitmaintmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtTotalCntnInitMaintMslots"},
    docsifcmtsupchnlctrextusedcntninitmaintmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtUsedCntnInitMaintMslots"},
    docsifcmtsupchnlctrextcollcntninitmaintmslots{YType::uint64, "docsIfCmtsUpChnlCtrExtCollCntnInitMaintMslots"}
{

    yang_name = "docsIfCmtsUpChannelCounterEntry"; yang_parent_name = "docsIfCmtsUpChannelCounterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::~DocsIfCmtsUpChannelCounterEntry()
{
}

bool DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmtsupchnlctrid.is_set
	|| docsifcmtsupchnlctrtotalmslots.is_set
	|| docsifcmtsupchnlctrucastgrantedmslots.is_set
	|| docsifcmtsupchnlctrtotalcntnmslots.is_set
	|| docsifcmtsupchnlctrusedcntnmslots.is_set
	|| docsifcmtsupchnlctrexttotalmslots.is_set
	|| docsifcmtsupchnlctrextucastgrantedmslots.is_set
	|| docsifcmtsupchnlctrexttotalcntnmslots.is_set
	|| docsifcmtsupchnlctrextusedcntnmslots.is_set
	|| docsifcmtsupchnlctrcollcntnmslots.is_set
	|| docsifcmtsupchnlctrtotalcntnreqmslots.is_set
	|| docsifcmtsupchnlctrusedcntnreqmslots.is_set
	|| docsifcmtsupchnlctrcollcntnreqmslots.is_set
	|| docsifcmtsupchnlctrtotalcntnreqdatamslots.is_set
	|| docsifcmtsupchnlctrusedcntnreqdatamslots.is_set
	|| docsifcmtsupchnlctrcollcntnreqdatamslots.is_set
	|| docsifcmtsupchnlctrtotalcntninitmaintmslots.is_set
	|| docsifcmtsupchnlctrusedcntninitmaintmslots.is_set
	|| docsifcmtsupchnlctrcollcntninitmaintmslots.is_set
	|| docsifcmtsupchnlctrextcollcntnmslots.is_set
	|| docsifcmtsupchnlctrexttotalcntnreqmslots.is_set
	|| docsifcmtsupchnlctrextusedcntnreqmslots.is_set
	|| docsifcmtsupchnlctrextcollcntnreqmslots.is_set
	|| docsifcmtsupchnlctrexttotalcntnreqdatamslots.is_set
	|| docsifcmtsupchnlctrextusedcntnreqdatamslots.is_set
	|| docsifcmtsupchnlctrextcollcntnreqdatamslots.is_set
	|| docsifcmtsupchnlctrexttotalcntninitmaintmslots.is_set
	|| docsifcmtsupchnlctrextusedcntninitmaintmslots.is_set
	|| docsifcmtsupchnlctrextcollcntninitmaintmslots.is_set;
}

bool DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrid.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrtotalmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrucastgrantedmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrtotalcntnmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrusedcntnmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrexttotalmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextucastgrantedmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrexttotalcntnmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextusedcntnmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrcollcntnmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrtotalcntnreqmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrusedcntnreqmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrcollcntnreqmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrtotalcntnreqdatamslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrusedcntnreqdatamslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrcollcntnreqdatamslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrtotalcntninitmaintmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrusedcntninitmaintmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrcollcntninitmaintmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextcollcntnmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrexttotalcntnreqmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextusedcntnreqmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextcollcntnreqmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrexttotalcntnreqdatamslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextusedcntnreqdatamslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextcollcntnreqdatamslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrexttotalcntninitmaintmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextusedcntninitmaintmslots.yfilter)
	|| ydk::is_set(docsifcmtsupchnlctrextcollcntninitmaintmslots.yfilter);
}

std::string DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF-MIB:DOCS-IF-MIB/docsIfCmtsUpChannelCounterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIfCmtsUpChannelCounterEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmtsupchnlctrid.is_set || is_set(docsifcmtsupchnlctrid.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrid.get_name_leafdata());
    if (docsifcmtsupchnlctrtotalmslots.is_set || is_set(docsifcmtsupchnlctrtotalmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrtotalmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrucastgrantedmslots.is_set || is_set(docsifcmtsupchnlctrucastgrantedmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrucastgrantedmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrtotalcntnmslots.is_set || is_set(docsifcmtsupchnlctrtotalcntnmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrtotalcntnmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrusedcntnmslots.is_set || is_set(docsifcmtsupchnlctrusedcntnmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrusedcntnmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrexttotalmslots.is_set || is_set(docsifcmtsupchnlctrexttotalmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrexttotalmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextucastgrantedmslots.is_set || is_set(docsifcmtsupchnlctrextucastgrantedmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextucastgrantedmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrexttotalcntnmslots.is_set || is_set(docsifcmtsupchnlctrexttotalcntnmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrexttotalcntnmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextusedcntnmslots.is_set || is_set(docsifcmtsupchnlctrextusedcntnmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextusedcntnmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrcollcntnmslots.is_set || is_set(docsifcmtsupchnlctrcollcntnmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrcollcntnmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrtotalcntnreqmslots.is_set || is_set(docsifcmtsupchnlctrtotalcntnreqmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrtotalcntnreqmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrusedcntnreqmslots.is_set || is_set(docsifcmtsupchnlctrusedcntnreqmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrusedcntnreqmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrcollcntnreqmslots.is_set || is_set(docsifcmtsupchnlctrcollcntnreqmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrcollcntnreqmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrtotalcntnreqdatamslots.is_set || is_set(docsifcmtsupchnlctrtotalcntnreqdatamslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrtotalcntnreqdatamslots.get_name_leafdata());
    if (docsifcmtsupchnlctrusedcntnreqdatamslots.is_set || is_set(docsifcmtsupchnlctrusedcntnreqdatamslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrusedcntnreqdatamslots.get_name_leafdata());
    if (docsifcmtsupchnlctrcollcntnreqdatamslots.is_set || is_set(docsifcmtsupchnlctrcollcntnreqdatamslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrcollcntnreqdatamslots.get_name_leafdata());
    if (docsifcmtsupchnlctrtotalcntninitmaintmslots.is_set || is_set(docsifcmtsupchnlctrtotalcntninitmaintmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrtotalcntninitmaintmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrusedcntninitmaintmslots.is_set || is_set(docsifcmtsupchnlctrusedcntninitmaintmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrusedcntninitmaintmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrcollcntninitmaintmslots.is_set || is_set(docsifcmtsupchnlctrcollcntninitmaintmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrcollcntninitmaintmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextcollcntnmslots.is_set || is_set(docsifcmtsupchnlctrextcollcntnmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextcollcntnmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrexttotalcntnreqmslots.is_set || is_set(docsifcmtsupchnlctrexttotalcntnreqmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrexttotalcntnreqmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextusedcntnreqmslots.is_set || is_set(docsifcmtsupchnlctrextusedcntnreqmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextusedcntnreqmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextcollcntnreqmslots.is_set || is_set(docsifcmtsupchnlctrextcollcntnreqmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextcollcntnreqmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrexttotalcntnreqdatamslots.is_set || is_set(docsifcmtsupchnlctrexttotalcntnreqdatamslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrexttotalcntnreqdatamslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextusedcntnreqdatamslots.is_set || is_set(docsifcmtsupchnlctrextusedcntnreqdatamslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextusedcntnreqdatamslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextcollcntnreqdatamslots.is_set || is_set(docsifcmtsupchnlctrextcollcntnreqdatamslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextcollcntnreqdatamslots.get_name_leafdata());
    if (docsifcmtsupchnlctrexttotalcntninitmaintmslots.is_set || is_set(docsifcmtsupchnlctrexttotalcntninitmaintmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrexttotalcntninitmaintmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextusedcntninitmaintmslots.is_set || is_set(docsifcmtsupchnlctrextusedcntninitmaintmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextusedcntninitmaintmslots.get_name_leafdata());
    if (docsifcmtsupchnlctrextcollcntninitmaintmslots.is_set || is_set(docsifcmtsupchnlctrextcollcntninitmaintmslots.yfilter)) leaf_name_data.push_back(docsifcmtsupchnlctrextcollcntninitmaintmslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrId")
    {
        docsifcmtsupchnlctrid = value;
        docsifcmtsupchnlctrid.value_namespace = name_space;
        docsifcmtsupchnlctrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalMslots")
    {
        docsifcmtsupchnlctrtotalmslots = value;
        docsifcmtsupchnlctrtotalmslots.value_namespace = name_space;
        docsifcmtsupchnlctrtotalmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUcastGrantedMslots")
    {
        docsifcmtsupchnlctrucastgrantedmslots = value;
        docsifcmtsupchnlctrucastgrantedmslots.value_namespace = name_space;
        docsifcmtsupchnlctrucastgrantedmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnMslots")
    {
        docsifcmtsupchnlctrtotalcntnmslots = value;
        docsifcmtsupchnlctrtotalcntnmslots.value_namespace = name_space;
        docsifcmtsupchnlctrtotalcntnmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnMslots")
    {
        docsifcmtsupchnlctrusedcntnmslots = value;
        docsifcmtsupchnlctrusedcntnmslots.value_namespace = name_space;
        docsifcmtsupchnlctrusedcntnmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalMslots")
    {
        docsifcmtsupchnlctrexttotalmslots = value;
        docsifcmtsupchnlctrexttotalmslots.value_namespace = name_space;
        docsifcmtsupchnlctrexttotalmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUcastGrantedMslots")
    {
        docsifcmtsupchnlctrextucastgrantedmslots = value;
        docsifcmtsupchnlctrextucastgrantedmslots.value_namespace = name_space;
        docsifcmtsupchnlctrextucastgrantedmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnMslots")
    {
        docsifcmtsupchnlctrexttotalcntnmslots = value;
        docsifcmtsupchnlctrexttotalcntnmslots.value_namespace = name_space;
        docsifcmtsupchnlctrexttotalcntnmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnMslots")
    {
        docsifcmtsupchnlctrextusedcntnmslots = value;
        docsifcmtsupchnlctrextusedcntnmslots.value_namespace = name_space;
        docsifcmtsupchnlctrextusedcntnmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnMslots")
    {
        docsifcmtsupchnlctrcollcntnmslots = value;
        docsifcmtsupchnlctrcollcntnmslots.value_namespace = name_space;
        docsifcmtsupchnlctrcollcntnmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnReqMslots")
    {
        docsifcmtsupchnlctrtotalcntnreqmslots = value;
        docsifcmtsupchnlctrtotalcntnreqmslots.value_namespace = name_space;
        docsifcmtsupchnlctrtotalcntnreqmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnReqMslots")
    {
        docsifcmtsupchnlctrusedcntnreqmslots = value;
        docsifcmtsupchnlctrusedcntnreqmslots.value_namespace = name_space;
        docsifcmtsupchnlctrusedcntnreqmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnReqMslots")
    {
        docsifcmtsupchnlctrcollcntnreqmslots = value;
        docsifcmtsupchnlctrcollcntnreqmslots.value_namespace = name_space;
        docsifcmtsupchnlctrcollcntnreqmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnReqDataMslots")
    {
        docsifcmtsupchnlctrtotalcntnreqdatamslots = value;
        docsifcmtsupchnlctrtotalcntnreqdatamslots.value_namespace = name_space;
        docsifcmtsupchnlctrtotalcntnreqdatamslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnReqDataMslots")
    {
        docsifcmtsupchnlctrusedcntnreqdatamslots = value;
        docsifcmtsupchnlctrusedcntnreqdatamslots.value_namespace = name_space;
        docsifcmtsupchnlctrusedcntnreqdatamslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnReqDataMslots")
    {
        docsifcmtsupchnlctrcollcntnreqdatamslots = value;
        docsifcmtsupchnlctrcollcntnreqdatamslots.value_namespace = name_space;
        docsifcmtsupchnlctrcollcntnreqdatamslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrtotalcntninitmaintmslots = value;
        docsifcmtsupchnlctrtotalcntninitmaintmslots.value_namespace = name_space;
        docsifcmtsupchnlctrtotalcntninitmaintmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrusedcntninitmaintmslots = value;
        docsifcmtsupchnlctrusedcntninitmaintmslots.value_namespace = name_space;
        docsifcmtsupchnlctrusedcntninitmaintmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrcollcntninitmaintmslots = value;
        docsifcmtsupchnlctrcollcntninitmaintmslots.value_namespace = name_space;
        docsifcmtsupchnlctrcollcntninitmaintmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnMslots")
    {
        docsifcmtsupchnlctrextcollcntnmslots = value;
        docsifcmtsupchnlctrextcollcntnmslots.value_namespace = name_space;
        docsifcmtsupchnlctrextcollcntnmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnReqMslots")
    {
        docsifcmtsupchnlctrexttotalcntnreqmslots = value;
        docsifcmtsupchnlctrexttotalcntnreqmslots.value_namespace = name_space;
        docsifcmtsupchnlctrexttotalcntnreqmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnReqMslots")
    {
        docsifcmtsupchnlctrextusedcntnreqmslots = value;
        docsifcmtsupchnlctrextusedcntnreqmslots.value_namespace = name_space;
        docsifcmtsupchnlctrextusedcntnreqmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnReqMslots")
    {
        docsifcmtsupchnlctrextcollcntnreqmslots = value;
        docsifcmtsupchnlctrextcollcntnreqmslots.value_namespace = name_space;
        docsifcmtsupchnlctrextcollcntnreqmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnReqDataMslots")
    {
        docsifcmtsupchnlctrexttotalcntnreqdatamslots = value;
        docsifcmtsupchnlctrexttotalcntnreqdatamslots.value_namespace = name_space;
        docsifcmtsupchnlctrexttotalcntnreqdatamslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnReqDataMslots")
    {
        docsifcmtsupchnlctrextusedcntnreqdatamslots = value;
        docsifcmtsupchnlctrextusedcntnreqdatamslots.value_namespace = name_space;
        docsifcmtsupchnlctrextusedcntnreqdatamslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnReqDataMslots")
    {
        docsifcmtsupchnlctrextcollcntnreqdatamslots = value;
        docsifcmtsupchnlctrextcollcntnreqdatamslots.value_namespace = name_space;
        docsifcmtsupchnlctrextcollcntnreqdatamslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrexttotalcntninitmaintmslots = value;
        docsifcmtsupchnlctrexttotalcntninitmaintmslots.value_namespace = name_space;
        docsifcmtsupchnlctrexttotalcntninitmaintmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrextusedcntninitmaintmslots = value;
        docsifcmtsupchnlctrextusedcntninitmaintmslots.value_namespace = name_space;
        docsifcmtsupchnlctrextusedcntninitmaintmslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrextcollcntninitmaintmslots = value;
        docsifcmtsupchnlctrextcollcntninitmaintmslots.value_namespace = name_space;
        docsifcmtsupchnlctrextcollcntninitmaintmslots.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrId")
    {
        docsifcmtsupchnlctrid.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalMslots")
    {
        docsifcmtsupchnlctrtotalmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUcastGrantedMslots")
    {
        docsifcmtsupchnlctrucastgrantedmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnMslots")
    {
        docsifcmtsupchnlctrtotalcntnmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnMslots")
    {
        docsifcmtsupchnlctrusedcntnmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalMslots")
    {
        docsifcmtsupchnlctrexttotalmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUcastGrantedMslots")
    {
        docsifcmtsupchnlctrextucastgrantedmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnMslots")
    {
        docsifcmtsupchnlctrexttotalcntnmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnMslots")
    {
        docsifcmtsupchnlctrextusedcntnmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnMslots")
    {
        docsifcmtsupchnlctrcollcntnmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnReqMslots")
    {
        docsifcmtsupchnlctrtotalcntnreqmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnReqMslots")
    {
        docsifcmtsupchnlctrusedcntnreqmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnReqMslots")
    {
        docsifcmtsupchnlctrcollcntnreqmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnReqDataMslots")
    {
        docsifcmtsupchnlctrtotalcntnreqdatamslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnReqDataMslots")
    {
        docsifcmtsupchnlctrusedcntnreqdatamslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnReqDataMslots")
    {
        docsifcmtsupchnlctrcollcntnreqdatamslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrTotalCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrtotalcntninitmaintmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrUsedCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrusedcntninitmaintmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrCollCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrcollcntninitmaintmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnMslots")
    {
        docsifcmtsupchnlctrextcollcntnmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnReqMslots")
    {
        docsifcmtsupchnlctrexttotalcntnreqmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnReqMslots")
    {
        docsifcmtsupchnlctrextusedcntnreqmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnReqMslots")
    {
        docsifcmtsupchnlctrextcollcntnreqmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnReqDataMslots")
    {
        docsifcmtsupchnlctrexttotalcntnreqdatamslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnReqDataMslots")
    {
        docsifcmtsupchnlctrextusedcntnreqdatamslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnReqDataMslots")
    {
        docsifcmtsupchnlctrextcollcntnreqdatamslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtTotalCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrexttotalcntninitmaintmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtUsedCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrextusedcntninitmaintmslots.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsUpChnlCtrExtCollCntnInitMaintMslots")
    {
        docsifcmtsupchnlctrextcollcntninitmaintmslots.yfilter = yfilter;
    }
}

bool DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmtsUpChnlCtrId" || name == "docsIfCmtsUpChnlCtrTotalMslots" || name == "docsIfCmtsUpChnlCtrUcastGrantedMslots" || name == "docsIfCmtsUpChnlCtrTotalCntnMslots" || name == "docsIfCmtsUpChnlCtrUsedCntnMslots" || name == "docsIfCmtsUpChnlCtrExtTotalMslots" || name == "docsIfCmtsUpChnlCtrExtUcastGrantedMslots" || name == "docsIfCmtsUpChnlCtrExtTotalCntnMslots" || name == "docsIfCmtsUpChnlCtrExtUsedCntnMslots" || name == "docsIfCmtsUpChnlCtrCollCntnMslots" || name == "docsIfCmtsUpChnlCtrTotalCntnReqMslots" || name == "docsIfCmtsUpChnlCtrUsedCntnReqMslots" || name == "docsIfCmtsUpChnlCtrCollCntnReqMslots" || name == "docsIfCmtsUpChnlCtrTotalCntnReqDataMslots" || name == "docsIfCmtsUpChnlCtrUsedCntnReqDataMslots" || name == "docsIfCmtsUpChnlCtrCollCntnReqDataMslots" || name == "docsIfCmtsUpChnlCtrTotalCntnInitMaintMslots" || name == "docsIfCmtsUpChnlCtrUsedCntnInitMaintMslots" || name == "docsIfCmtsUpChnlCtrCollCntnInitMaintMslots" || name == "docsIfCmtsUpChnlCtrExtCollCntnMslots" || name == "docsIfCmtsUpChnlCtrExtTotalCntnReqMslots" || name == "docsIfCmtsUpChnlCtrExtUsedCntnReqMslots" || name == "docsIfCmtsUpChnlCtrExtCollCntnReqMslots" || name == "docsIfCmtsUpChnlCtrExtTotalCntnReqDataMslots" || name == "docsIfCmtsUpChnlCtrExtUsedCntnReqDataMslots" || name == "docsIfCmtsUpChnlCtrExtCollCntnReqDataMslots" || name == "docsIfCmtsUpChnlCtrExtTotalCntnInitMaintMslots" || name == "docsIfCmtsUpChnlCtrExtUsedCntnInitMaintMslots" || name == "docsIfCmtsUpChnlCtrExtCollCntnInitMaintMslots")
        return true;
    return false;
}

const Enum::YLeaf DocsisUpstreamTypeStatus::unknown {0, "unknown"};
const Enum::YLeaf DocsisUpstreamTypeStatus::tdma {1, "tdma"};
const Enum::YLeaf DocsisUpstreamTypeStatus::atdma {2, "atdma"};
const Enum::YLeaf DocsisUpstreamTypeStatus::scdma {3, "scdma"};

const Enum::YLeaf DocsisQosVersion::docsis10 {1, "docsis10"};
const Enum::YLeaf DocsisQosVersion::docsis11 {2, "docsis11"};

const Enum::YLeaf DocsisUpstreamType::unknown {0, "unknown"};
const Enum::YLeaf DocsisUpstreamType::tdma {1, "tdma"};
const Enum::YLeaf DocsisUpstreamType::atdma {2, "atdma"};
const Enum::YLeaf DocsisUpstreamType::scdma {3, "scdma"};
const Enum::YLeaf DocsisUpstreamType::tdmaAndAtdma {4, "tdmaAndAtdma"};

const Enum::YLeaf DocsisVersion::docsis10 {1, "docsis10"};
const Enum::YLeaf DocsisVersion::docsis11 {2, "docsis11"};
const Enum::YLeaf DocsisVersion::docsis20 {3, "docsis20"};
const Enum::YLeaf DocsisVersion::docsis30 {4, "docsis30"};

const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelModulation::unknown {1, "unknown"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelModulation::other {2, "other"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelModulation::qam64 {3, "qam64"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelModulation::qam256 {4, "qam256"};

const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::unknown {1, "unknown"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::other {2, "other"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::taps8Increment16 {3, "taps8Increment16"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::taps16Increment8 {4, "taps16Increment8"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::taps32Increment4 {5, "taps32Increment4"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::taps64Increment2 {6, "taps64Increment2"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::taps128Increment1 {7, "taps128Increment1"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave::taps12increment17 {8, "taps12increment17"};

const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelAnnex::unknown {1, "unknown"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelAnnex::other {2, "other"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelAnnex::annexA {3, "annexA"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelAnnex::annexB {4, "annexB"};
const Enum::YLeaf DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelAnnex::annexC {5, "annexC"};

const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::other {1, "other"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::notReady {2, "notReady"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::notSynchronized {3, "notSynchronized"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::phySynchronized {4, "phySynchronized"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::usParametersAcquired {5, "usParametersAcquired"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::rangingComplete {6, "rangingComplete"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::ipComplete {7, "ipComplete"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::todEstablished {8, "todEstablished"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::securityEstablished {9, "securityEstablished"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::paramTransferComplete {10, "paramTransferComplete"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::registrationComplete {11, "registrationComplete"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::operational {12, "operational"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue::accessDenied {13, "accessDenied"};

const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::other {1, "other"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::ranging {2, "ranging"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::rangingAborted {3, "rangingAborted"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::rangingComplete {4, "rangingComplete"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::ipComplete {5, "ipComplete"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::registrationComplete {6, "registrationComplete"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::accessDenied {7, "accessDenied"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::operational {8, "operational"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue::registeredBPIInitializing {9, "registeredBPIInitializing"};

const Enum::YLeaf DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::DocsIfCmtsServiceAdminStatus::enabled {1, "enabled"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::DocsIfCmtsServiceAdminStatus::disabled {2, "disabled"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::DocsIfCmtsServiceAdminStatus::destroyed {3, "destroyed"};

const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::request {1, "request"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::requestData {2, "requestData"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::initialRanging {3, "initialRanging"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::periodicRanging {4, "periodicRanging"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::shortData {5, "shortData"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::longData {6, "longData"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::advPhyShortData {9, "advPhyShortData"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::advPhyLongData {10, "advPhyLongData"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode::ugs {11, "ugs"};

const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType::other {1, "other"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType::qpsk {2, "qpsk"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType::qam16 {3, "qam16"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType::qam8 {4, "qam8"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType::qam32 {5, "qam32"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType::qam64 {6, "qam64"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType::qam128 {7, "qam128"};

const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModPreambleType::unknown {0, "unknown"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModPreambleType::qpsk0 {1, "qpsk0"};
const Enum::YLeaf DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModPreambleType::qpsk1 {2, "qpsk1"};


}
}

