
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DOCS_IETF_BPI2_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DOCS_IETF_BPI2_MIB {

DOCSIETFBPI2MIB::DOCSIETFBPI2MIB()
    :
    docsietfbpi2codedownloadcontrol(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl>())
    , docsietfbpi2cmbasetable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable>())
    , docsietfbpi2cmtektable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable>())
    , docsietfbpi2cmipmulticastmaptable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable>())
    , docsietfbpi2cmdevicecerttable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable>())
    , docsietfbpi2cmcryptosuitetable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable>())
    , docsietfbpi2cmtsbasetable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable>())
    , docsietfbpi2cmtsauthtable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable>())
    , docsietfbpi2cmtstektable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable>())
    , docsietfbpi2cmtsipmulticastmaptable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable>())
    , docsietfbpi2cmtsmulticastauthtable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable>())
    , docsietfbpi2cmtsprovisionedcmcerttable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable>())
    , docsietfbpi2cmtscacerttable(std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable>())
{
    docsietfbpi2codedownloadcontrol->parent = this;
    docsietfbpi2cmbasetable->parent = this;
    docsietfbpi2cmtektable->parent = this;
    docsietfbpi2cmipmulticastmaptable->parent = this;
    docsietfbpi2cmdevicecerttable->parent = this;
    docsietfbpi2cmcryptosuitetable->parent = this;
    docsietfbpi2cmtsbasetable->parent = this;
    docsietfbpi2cmtsauthtable->parent = this;
    docsietfbpi2cmtstektable->parent = this;
    docsietfbpi2cmtsipmulticastmaptable->parent = this;
    docsietfbpi2cmtsmulticastauthtable->parent = this;
    docsietfbpi2cmtsprovisionedcmcerttable->parent = this;
    docsietfbpi2cmtscacerttable->parent = this;

    yang_name = "DOCS-IETF-BPI2-MIB"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::~DOCSIETFBPI2MIB()
{
}

bool DOCSIETFBPI2MIB::has_data() const
{
    if (is_presence_container) return true;
    return (docsietfbpi2codedownloadcontrol !=  nullptr && docsietfbpi2codedownloadcontrol->has_data())
	|| (docsietfbpi2cmbasetable !=  nullptr && docsietfbpi2cmbasetable->has_data())
	|| (docsietfbpi2cmtektable !=  nullptr && docsietfbpi2cmtektable->has_data())
	|| (docsietfbpi2cmipmulticastmaptable !=  nullptr && docsietfbpi2cmipmulticastmaptable->has_data())
	|| (docsietfbpi2cmdevicecerttable !=  nullptr && docsietfbpi2cmdevicecerttable->has_data())
	|| (docsietfbpi2cmcryptosuitetable !=  nullptr && docsietfbpi2cmcryptosuitetable->has_data())
	|| (docsietfbpi2cmtsbasetable !=  nullptr && docsietfbpi2cmtsbasetable->has_data())
	|| (docsietfbpi2cmtsauthtable !=  nullptr && docsietfbpi2cmtsauthtable->has_data())
	|| (docsietfbpi2cmtstektable !=  nullptr && docsietfbpi2cmtstektable->has_data())
	|| (docsietfbpi2cmtsipmulticastmaptable !=  nullptr && docsietfbpi2cmtsipmulticastmaptable->has_data())
	|| (docsietfbpi2cmtsmulticastauthtable !=  nullptr && docsietfbpi2cmtsmulticastauthtable->has_data())
	|| (docsietfbpi2cmtsprovisionedcmcerttable !=  nullptr && docsietfbpi2cmtsprovisionedcmcerttable->has_data())
	|| (docsietfbpi2cmtscacerttable !=  nullptr && docsietfbpi2cmtscacerttable->has_data());
}

bool DOCSIETFBPI2MIB::has_operation() const
{
    return is_set(yfilter)
	|| (docsietfbpi2codedownloadcontrol !=  nullptr && docsietfbpi2codedownloadcontrol->has_operation())
	|| (docsietfbpi2cmbasetable !=  nullptr && docsietfbpi2cmbasetable->has_operation())
	|| (docsietfbpi2cmtektable !=  nullptr && docsietfbpi2cmtektable->has_operation())
	|| (docsietfbpi2cmipmulticastmaptable !=  nullptr && docsietfbpi2cmipmulticastmaptable->has_operation())
	|| (docsietfbpi2cmdevicecerttable !=  nullptr && docsietfbpi2cmdevicecerttable->has_operation())
	|| (docsietfbpi2cmcryptosuitetable !=  nullptr && docsietfbpi2cmcryptosuitetable->has_operation())
	|| (docsietfbpi2cmtsbasetable !=  nullptr && docsietfbpi2cmtsbasetable->has_operation())
	|| (docsietfbpi2cmtsauthtable !=  nullptr && docsietfbpi2cmtsauthtable->has_operation())
	|| (docsietfbpi2cmtstektable !=  nullptr && docsietfbpi2cmtstektable->has_operation())
	|| (docsietfbpi2cmtsipmulticastmaptable !=  nullptr && docsietfbpi2cmtsipmulticastmaptable->has_operation())
	|| (docsietfbpi2cmtsmulticastauthtable !=  nullptr && docsietfbpi2cmtsmulticastauthtable->has_operation())
	|| (docsietfbpi2cmtsprovisionedcmcerttable !=  nullptr && docsietfbpi2cmtsprovisionedcmcerttable->has_operation())
	|| (docsietfbpi2cmtscacerttable !=  nullptr && docsietfbpi2cmtscacerttable->has_operation());
}

std::string DOCSIETFBPI2MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CodeDownloadControl")
    {
        if(docsietfbpi2codedownloadcontrol == nullptr)
        {
            docsietfbpi2codedownloadcontrol = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl>();
        }
        return docsietfbpi2codedownloadcontrol;
    }

    if(child_yang_name == "docsIetfBpi2CmBaseTable")
    {
        if(docsietfbpi2cmbasetable == nullptr)
        {
            docsietfbpi2cmbasetable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable>();
        }
        return docsietfbpi2cmbasetable;
    }

    if(child_yang_name == "docsIetfBpi2CmTEKTable")
    {
        if(docsietfbpi2cmtektable == nullptr)
        {
            docsietfbpi2cmtektable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable>();
        }
        return docsietfbpi2cmtektable;
    }

    if(child_yang_name == "docsIetfBpi2CmIpMulticastMapTable")
    {
        if(docsietfbpi2cmipmulticastmaptable == nullptr)
        {
            docsietfbpi2cmipmulticastmaptable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable>();
        }
        return docsietfbpi2cmipmulticastmaptable;
    }

    if(child_yang_name == "docsIetfBpi2CmDeviceCertTable")
    {
        if(docsietfbpi2cmdevicecerttable == nullptr)
        {
            docsietfbpi2cmdevicecerttable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable>();
        }
        return docsietfbpi2cmdevicecerttable;
    }

    if(child_yang_name == "docsIetfBpi2CmCryptoSuiteTable")
    {
        if(docsietfbpi2cmcryptosuitetable == nullptr)
        {
            docsietfbpi2cmcryptosuitetable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable>();
        }
        return docsietfbpi2cmcryptosuitetable;
    }

    if(child_yang_name == "docsIetfBpi2CmtsBaseTable")
    {
        if(docsietfbpi2cmtsbasetable == nullptr)
        {
            docsietfbpi2cmtsbasetable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable>();
        }
        return docsietfbpi2cmtsbasetable;
    }

    if(child_yang_name == "docsIetfBpi2CmtsAuthTable")
    {
        if(docsietfbpi2cmtsauthtable == nullptr)
        {
            docsietfbpi2cmtsauthtable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable>();
        }
        return docsietfbpi2cmtsauthtable;
    }

    if(child_yang_name == "docsIetfBpi2CmtsTEKTable")
    {
        if(docsietfbpi2cmtstektable == nullptr)
        {
            docsietfbpi2cmtstektable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable>();
        }
        return docsietfbpi2cmtstektable;
    }

    if(child_yang_name == "docsIetfBpi2CmtsIpMulticastMapTable")
    {
        if(docsietfbpi2cmtsipmulticastmaptable == nullptr)
        {
            docsietfbpi2cmtsipmulticastmaptable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable>();
        }
        return docsietfbpi2cmtsipmulticastmaptable;
    }

    if(child_yang_name == "docsIetfBpi2CmtsMulticastAuthTable")
    {
        if(docsietfbpi2cmtsmulticastauthtable == nullptr)
        {
            docsietfbpi2cmtsmulticastauthtable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable>();
        }
        return docsietfbpi2cmtsmulticastauthtable;
    }

    if(child_yang_name == "docsIetfBpi2CmtsProvisionedCmCertTable")
    {
        if(docsietfbpi2cmtsprovisionedcmcerttable == nullptr)
        {
            docsietfbpi2cmtsprovisionedcmcerttable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable>();
        }
        return docsietfbpi2cmtsprovisionedcmcerttable;
    }

    if(child_yang_name == "docsIetfBpi2CmtsCACertTable")
    {
        if(docsietfbpi2cmtscacerttable == nullptr)
        {
            docsietfbpi2cmtscacerttable = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable>();
        }
        return docsietfbpi2cmtscacerttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(docsietfbpi2codedownloadcontrol != nullptr)
    {
        children["docsIetfBpi2CodeDownloadControl"] = docsietfbpi2codedownloadcontrol;
    }

    if(docsietfbpi2cmbasetable != nullptr)
    {
        children["docsIetfBpi2CmBaseTable"] = docsietfbpi2cmbasetable;
    }

    if(docsietfbpi2cmtektable != nullptr)
    {
        children["docsIetfBpi2CmTEKTable"] = docsietfbpi2cmtektable;
    }

    if(docsietfbpi2cmipmulticastmaptable != nullptr)
    {
        children["docsIetfBpi2CmIpMulticastMapTable"] = docsietfbpi2cmipmulticastmaptable;
    }

    if(docsietfbpi2cmdevicecerttable != nullptr)
    {
        children["docsIetfBpi2CmDeviceCertTable"] = docsietfbpi2cmdevicecerttable;
    }

    if(docsietfbpi2cmcryptosuitetable != nullptr)
    {
        children["docsIetfBpi2CmCryptoSuiteTable"] = docsietfbpi2cmcryptosuitetable;
    }

    if(docsietfbpi2cmtsbasetable != nullptr)
    {
        children["docsIetfBpi2CmtsBaseTable"] = docsietfbpi2cmtsbasetable;
    }

    if(docsietfbpi2cmtsauthtable != nullptr)
    {
        children["docsIetfBpi2CmtsAuthTable"] = docsietfbpi2cmtsauthtable;
    }

    if(docsietfbpi2cmtstektable != nullptr)
    {
        children["docsIetfBpi2CmtsTEKTable"] = docsietfbpi2cmtstektable;
    }

    if(docsietfbpi2cmtsipmulticastmaptable != nullptr)
    {
        children["docsIetfBpi2CmtsIpMulticastMapTable"] = docsietfbpi2cmtsipmulticastmaptable;
    }

    if(docsietfbpi2cmtsmulticastauthtable != nullptr)
    {
        children["docsIetfBpi2CmtsMulticastAuthTable"] = docsietfbpi2cmtsmulticastauthtable;
    }

    if(docsietfbpi2cmtsprovisionedcmcerttable != nullptr)
    {
        children["docsIetfBpi2CmtsProvisionedCmCertTable"] = docsietfbpi2cmtsprovisionedcmcerttable;
    }

    if(docsietfbpi2cmtscacerttable != nullptr)
    {
        children["docsIetfBpi2CmtsCACertTable"] = docsietfbpi2cmtscacerttable;
    }

    return children;
}

void DOCSIETFBPI2MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::clone_ptr() const
{
    return std::make_shared<DOCSIETFBPI2MIB>();
}

std::string DOCSIETFBPI2MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DOCSIETFBPI2MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DOCSIETFBPI2MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DOCSIETFBPI2MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DOCSIETFBPI2MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CodeDownloadControl" || name == "docsIetfBpi2CmBaseTable" || name == "docsIetfBpi2CmTEKTable" || name == "docsIetfBpi2CmIpMulticastMapTable" || name == "docsIetfBpi2CmDeviceCertTable" || name == "docsIetfBpi2CmCryptoSuiteTable" || name == "docsIetfBpi2CmtsBaseTable" || name == "docsIetfBpi2CmtsAuthTable" || name == "docsIetfBpi2CmtsTEKTable" || name == "docsIetfBpi2CmtsIpMulticastMapTable" || name == "docsIetfBpi2CmtsMulticastAuthTable" || name == "docsIetfBpi2CmtsProvisionedCmCertTable" || name == "docsIetfBpi2CmtsCACertTable")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadControl()
    :
    docsietfbpi2codedownloadstatuscode{YType::enumeration, "docsIetfBpi2CodeDownloadStatusCode"},
    docsietfbpi2codedownloadstatusstring{YType::str, "docsIetfBpi2CodeDownloadStatusString"},
    docsietfbpi2codemfgorgname{YType::str, "docsIetfBpi2CodeMfgOrgName"},
    docsietfbpi2codemfgcodeaccessstart{YType::str, "docsIetfBpi2CodeMfgCodeAccessStart"},
    docsietfbpi2codemfgcvcaccessstart{YType::str, "docsIetfBpi2CodeMfgCvcAccessStart"},
    docsietfbpi2codecosignerorgname{YType::str, "docsIetfBpi2CodeCoSignerOrgName"},
    docsietfbpi2codecosignercodeaccessstart{YType::str, "docsIetfBpi2CodeCoSignerCodeAccessStart"},
    docsietfbpi2codecosignercvcaccessstart{YType::str, "docsIetfBpi2CodeCoSignerCvcAccessStart"},
    docsietfbpi2codecvcupdate{YType::str, "docsIetfBpi2CodeCvcUpdate"}
{

    yang_name = "docsIetfBpi2CodeDownloadControl"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::~DocsIetfBpi2CodeDownloadControl()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::has_data() const
{
    if (is_presence_container) return true;
    return docsietfbpi2codedownloadstatuscode.is_set
	|| docsietfbpi2codedownloadstatusstring.is_set
	|| docsietfbpi2codemfgorgname.is_set
	|| docsietfbpi2codemfgcodeaccessstart.is_set
	|| docsietfbpi2codemfgcvcaccessstart.is_set
	|| docsietfbpi2codecosignerorgname.is_set
	|| docsietfbpi2codecosignercodeaccessstart.is_set
	|| docsietfbpi2codecosignercvcaccessstart.is_set
	|| docsietfbpi2codecvcupdate.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsietfbpi2codedownloadstatuscode.yfilter)
	|| ydk::is_set(docsietfbpi2codedownloadstatusstring.yfilter)
	|| ydk::is_set(docsietfbpi2codemfgorgname.yfilter)
	|| ydk::is_set(docsietfbpi2codemfgcodeaccessstart.yfilter)
	|| ydk::is_set(docsietfbpi2codemfgcvcaccessstart.yfilter)
	|| ydk::is_set(docsietfbpi2codecosignerorgname.yfilter)
	|| ydk::is_set(docsietfbpi2codecosignercodeaccessstart.yfilter)
	|| ydk::is_set(docsietfbpi2codecosignercvcaccessstart.yfilter)
	|| ydk::is_set(docsietfbpi2codecvcupdate.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CodeDownloadControl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsietfbpi2codedownloadstatuscode.is_set || is_set(docsietfbpi2codedownloadstatuscode.yfilter)) leaf_name_data.push_back(docsietfbpi2codedownloadstatuscode.get_name_leafdata());
    if (docsietfbpi2codedownloadstatusstring.is_set || is_set(docsietfbpi2codedownloadstatusstring.yfilter)) leaf_name_data.push_back(docsietfbpi2codedownloadstatusstring.get_name_leafdata());
    if (docsietfbpi2codemfgorgname.is_set || is_set(docsietfbpi2codemfgorgname.yfilter)) leaf_name_data.push_back(docsietfbpi2codemfgorgname.get_name_leafdata());
    if (docsietfbpi2codemfgcodeaccessstart.is_set || is_set(docsietfbpi2codemfgcodeaccessstart.yfilter)) leaf_name_data.push_back(docsietfbpi2codemfgcodeaccessstart.get_name_leafdata());
    if (docsietfbpi2codemfgcvcaccessstart.is_set || is_set(docsietfbpi2codemfgcvcaccessstart.yfilter)) leaf_name_data.push_back(docsietfbpi2codemfgcvcaccessstart.get_name_leafdata());
    if (docsietfbpi2codecosignerorgname.is_set || is_set(docsietfbpi2codecosignerorgname.yfilter)) leaf_name_data.push_back(docsietfbpi2codecosignerorgname.get_name_leafdata());
    if (docsietfbpi2codecosignercodeaccessstart.is_set || is_set(docsietfbpi2codecosignercodeaccessstart.yfilter)) leaf_name_data.push_back(docsietfbpi2codecosignercodeaccessstart.get_name_leafdata());
    if (docsietfbpi2codecosignercvcaccessstart.is_set || is_set(docsietfbpi2codecosignercvcaccessstart.yfilter)) leaf_name_data.push_back(docsietfbpi2codecosignercvcaccessstart.get_name_leafdata());
    if (docsietfbpi2codecvcupdate.is_set || is_set(docsietfbpi2codecvcupdate.yfilter)) leaf_name_data.push_back(docsietfbpi2codecvcupdate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIetfBpi2CodeDownloadStatusCode")
    {
        docsietfbpi2codedownloadstatuscode = value;
        docsietfbpi2codedownloadstatuscode.value_namespace = name_space;
        docsietfbpi2codedownloadstatuscode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeDownloadStatusString")
    {
        docsietfbpi2codedownloadstatusstring = value;
        docsietfbpi2codedownloadstatusstring.value_namespace = name_space;
        docsietfbpi2codedownloadstatusstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeMfgOrgName")
    {
        docsietfbpi2codemfgorgname = value;
        docsietfbpi2codemfgorgname.value_namespace = name_space;
        docsietfbpi2codemfgorgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeMfgCodeAccessStart")
    {
        docsietfbpi2codemfgcodeaccessstart = value;
        docsietfbpi2codemfgcodeaccessstart.value_namespace = name_space;
        docsietfbpi2codemfgcodeaccessstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeMfgCvcAccessStart")
    {
        docsietfbpi2codemfgcvcaccessstart = value;
        docsietfbpi2codemfgcvcaccessstart.value_namespace = name_space;
        docsietfbpi2codemfgcvcaccessstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeCoSignerOrgName")
    {
        docsietfbpi2codecosignerorgname = value;
        docsietfbpi2codecosignerorgname.value_namespace = name_space;
        docsietfbpi2codecosignerorgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeCoSignerCodeAccessStart")
    {
        docsietfbpi2codecosignercodeaccessstart = value;
        docsietfbpi2codecosignercodeaccessstart.value_namespace = name_space;
        docsietfbpi2codecosignercodeaccessstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeCoSignerCvcAccessStart")
    {
        docsietfbpi2codecosignercvcaccessstart = value;
        docsietfbpi2codecosignercvcaccessstart.value_namespace = name_space;
        docsietfbpi2codecosignercvcaccessstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CodeCvcUpdate")
    {
        docsietfbpi2codecvcupdate = value;
        docsietfbpi2codecvcupdate.value_namespace = name_space;
        docsietfbpi2codecvcupdate.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIetfBpi2CodeDownloadStatusCode")
    {
        docsietfbpi2codedownloadstatuscode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeDownloadStatusString")
    {
        docsietfbpi2codedownloadstatusstring.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeMfgOrgName")
    {
        docsietfbpi2codemfgorgname.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeMfgCodeAccessStart")
    {
        docsietfbpi2codemfgcodeaccessstart.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeMfgCvcAccessStart")
    {
        docsietfbpi2codemfgcvcaccessstart.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeCoSignerOrgName")
    {
        docsietfbpi2codecosignerorgname.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeCoSignerCodeAccessStart")
    {
        docsietfbpi2codecosignercodeaccessstart.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeCoSignerCvcAccessStart")
    {
        docsietfbpi2codecosignercvcaccessstart.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CodeCvcUpdate")
    {
        docsietfbpi2codecvcupdate.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CodeDownloadStatusCode" || name == "docsIetfBpi2CodeDownloadStatusString" || name == "docsIetfBpi2CodeMfgOrgName" || name == "docsIetfBpi2CodeMfgCodeAccessStart" || name == "docsIetfBpi2CodeMfgCvcAccessStart" || name == "docsIetfBpi2CodeCoSignerOrgName" || name == "docsIetfBpi2CodeCoSignerCodeAccessStart" || name == "docsIetfBpi2CodeCoSignerCvcAccessStart" || name == "docsIetfBpi2CodeCvcUpdate")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseTable()
    :
    docsietfbpi2cmbaseentry(this, {"ifindex"})
{

    yang_name = "docsIetfBpi2CmBaseTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::~DocsIetfBpi2CmBaseTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmbaseentry.len(); index++)
    {
        if(docsietfbpi2cmbaseentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmbaseentry.len(); index++)
    {
        if(docsietfbpi2cmbaseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmBaseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmBaseEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry>();
        c->parent = this;
        docsietfbpi2cmbaseentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmbaseentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmBaseEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmBaseEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmprivacyenable{YType::boolean, "docsIetfBpi2CmPrivacyEnable"},
    docsietfbpi2cmpublickey{YType::str, "docsIetfBpi2CmPublicKey"},
    docsietfbpi2cmauthstate{YType::enumeration, "docsIetfBpi2CmAuthState"},
    docsietfbpi2cmauthkeysequencenumber{YType::int32, "docsIetfBpi2CmAuthKeySequenceNumber"},
    docsietfbpi2cmauthexpiresold{YType::str, "docsIetfBpi2CmAuthExpiresOld"},
    docsietfbpi2cmauthexpiresnew{YType::str, "docsIetfBpi2CmAuthExpiresNew"},
    docsietfbpi2cmauthreset{YType::boolean, "docsIetfBpi2CmAuthReset"},
    docsietfbpi2cmauthgracetime{YType::int32, "docsIetfBpi2CmAuthGraceTime"},
    docsietfbpi2cmtekgracetime{YType::int32, "docsIetfBpi2CmTEKGraceTime"},
    docsietfbpi2cmauthwaittimeout{YType::int32, "docsIetfBpi2CmAuthWaitTimeout"},
    docsietfbpi2cmreauthwaittimeout{YType::int32, "docsIetfBpi2CmReauthWaitTimeout"},
    docsietfbpi2cmopwaittimeout{YType::int32, "docsIetfBpi2CmOpWaitTimeout"},
    docsietfbpi2cmrekeywaittimeout{YType::int32, "docsIetfBpi2CmRekeyWaitTimeout"},
    docsietfbpi2cmauthrejectwaittimeout{YType::int32, "docsIetfBpi2CmAuthRejectWaitTimeout"},
    docsietfbpi2cmsamapwaittimeout{YType::int32, "docsIetfBpi2CmSAMapWaitTimeout"},
    docsietfbpi2cmsamapmaxretries{YType::int32, "docsIetfBpi2CmSAMapMaxRetries"},
    docsietfbpi2cmauthentinfos{YType::uint32, "docsIetfBpi2CmAuthentInfos"},
    docsietfbpi2cmauthrequests{YType::uint32, "docsIetfBpi2CmAuthRequests"},
    docsietfbpi2cmauthreplies{YType::uint32, "docsIetfBpi2CmAuthReplies"},
    docsietfbpi2cmauthrejects{YType::uint32, "docsIetfBpi2CmAuthRejects"},
    docsietfbpi2cmauthinvalids{YType::uint32, "docsIetfBpi2CmAuthInvalids"},
    docsietfbpi2cmauthrejecterrorcode{YType::enumeration, "docsIetfBpi2CmAuthRejectErrorCode"},
    docsietfbpi2cmauthrejecterrorstring{YType::str, "docsIetfBpi2CmAuthRejectErrorString"},
    docsietfbpi2cmauthinvaliderrorcode{YType::enumeration, "docsIetfBpi2CmAuthInvalidErrorCode"},
    docsietfbpi2cmauthinvaliderrorstring{YType::str, "docsIetfBpi2CmAuthInvalidErrorString"}
{

    yang_name = "docsIetfBpi2CmBaseEntry"; yang_parent_name = "docsIetfBpi2CmBaseTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::~DocsIetfBpi2CmBaseEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmprivacyenable.is_set
	|| docsietfbpi2cmpublickey.is_set
	|| docsietfbpi2cmauthstate.is_set
	|| docsietfbpi2cmauthkeysequencenumber.is_set
	|| docsietfbpi2cmauthexpiresold.is_set
	|| docsietfbpi2cmauthexpiresnew.is_set
	|| docsietfbpi2cmauthreset.is_set
	|| docsietfbpi2cmauthgracetime.is_set
	|| docsietfbpi2cmtekgracetime.is_set
	|| docsietfbpi2cmauthwaittimeout.is_set
	|| docsietfbpi2cmreauthwaittimeout.is_set
	|| docsietfbpi2cmopwaittimeout.is_set
	|| docsietfbpi2cmrekeywaittimeout.is_set
	|| docsietfbpi2cmauthrejectwaittimeout.is_set
	|| docsietfbpi2cmsamapwaittimeout.is_set
	|| docsietfbpi2cmsamapmaxretries.is_set
	|| docsietfbpi2cmauthentinfos.is_set
	|| docsietfbpi2cmauthrequests.is_set
	|| docsietfbpi2cmauthreplies.is_set
	|| docsietfbpi2cmauthrejects.is_set
	|| docsietfbpi2cmauthinvalids.is_set
	|| docsietfbpi2cmauthrejecterrorcode.is_set
	|| docsietfbpi2cmauthrejecterrorstring.is_set
	|| docsietfbpi2cmauthinvaliderrorcode.is_set
	|| docsietfbpi2cmauthinvaliderrorstring.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmprivacyenable.yfilter)
	|| ydk::is_set(docsietfbpi2cmpublickey.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthstate.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthkeysequencenumber.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthexpiresold.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthexpiresnew.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthreset.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthgracetime.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekgracetime.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthwaittimeout.yfilter)
	|| ydk::is_set(docsietfbpi2cmreauthwaittimeout.yfilter)
	|| ydk::is_set(docsietfbpi2cmopwaittimeout.yfilter)
	|| ydk::is_set(docsietfbpi2cmrekeywaittimeout.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthrejectwaittimeout.yfilter)
	|| ydk::is_set(docsietfbpi2cmsamapwaittimeout.yfilter)
	|| ydk::is_set(docsietfbpi2cmsamapmaxretries.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthentinfos.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthrequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthrejects.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthinvalids.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthrejecterrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthrejecterrorstring.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthinvaliderrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmauthinvaliderrorstring.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmBaseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmBaseEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmprivacyenable.is_set || is_set(docsietfbpi2cmprivacyenable.yfilter)) leaf_name_data.push_back(docsietfbpi2cmprivacyenable.get_name_leafdata());
    if (docsietfbpi2cmpublickey.is_set || is_set(docsietfbpi2cmpublickey.yfilter)) leaf_name_data.push_back(docsietfbpi2cmpublickey.get_name_leafdata());
    if (docsietfbpi2cmauthstate.is_set || is_set(docsietfbpi2cmauthstate.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthstate.get_name_leafdata());
    if (docsietfbpi2cmauthkeysequencenumber.is_set || is_set(docsietfbpi2cmauthkeysequencenumber.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthkeysequencenumber.get_name_leafdata());
    if (docsietfbpi2cmauthexpiresold.is_set || is_set(docsietfbpi2cmauthexpiresold.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthexpiresold.get_name_leafdata());
    if (docsietfbpi2cmauthexpiresnew.is_set || is_set(docsietfbpi2cmauthexpiresnew.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthexpiresnew.get_name_leafdata());
    if (docsietfbpi2cmauthreset.is_set || is_set(docsietfbpi2cmauthreset.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthreset.get_name_leafdata());
    if (docsietfbpi2cmauthgracetime.is_set || is_set(docsietfbpi2cmauthgracetime.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthgracetime.get_name_leafdata());
    if (docsietfbpi2cmtekgracetime.is_set || is_set(docsietfbpi2cmtekgracetime.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekgracetime.get_name_leafdata());
    if (docsietfbpi2cmauthwaittimeout.is_set || is_set(docsietfbpi2cmauthwaittimeout.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthwaittimeout.get_name_leafdata());
    if (docsietfbpi2cmreauthwaittimeout.is_set || is_set(docsietfbpi2cmreauthwaittimeout.yfilter)) leaf_name_data.push_back(docsietfbpi2cmreauthwaittimeout.get_name_leafdata());
    if (docsietfbpi2cmopwaittimeout.is_set || is_set(docsietfbpi2cmopwaittimeout.yfilter)) leaf_name_data.push_back(docsietfbpi2cmopwaittimeout.get_name_leafdata());
    if (docsietfbpi2cmrekeywaittimeout.is_set || is_set(docsietfbpi2cmrekeywaittimeout.yfilter)) leaf_name_data.push_back(docsietfbpi2cmrekeywaittimeout.get_name_leafdata());
    if (docsietfbpi2cmauthrejectwaittimeout.is_set || is_set(docsietfbpi2cmauthrejectwaittimeout.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthrejectwaittimeout.get_name_leafdata());
    if (docsietfbpi2cmsamapwaittimeout.is_set || is_set(docsietfbpi2cmsamapwaittimeout.yfilter)) leaf_name_data.push_back(docsietfbpi2cmsamapwaittimeout.get_name_leafdata());
    if (docsietfbpi2cmsamapmaxretries.is_set || is_set(docsietfbpi2cmsamapmaxretries.yfilter)) leaf_name_data.push_back(docsietfbpi2cmsamapmaxretries.get_name_leafdata());
    if (docsietfbpi2cmauthentinfos.is_set || is_set(docsietfbpi2cmauthentinfos.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthentinfos.get_name_leafdata());
    if (docsietfbpi2cmauthrequests.is_set || is_set(docsietfbpi2cmauthrequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthrequests.get_name_leafdata());
    if (docsietfbpi2cmauthreplies.is_set || is_set(docsietfbpi2cmauthreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthreplies.get_name_leafdata());
    if (docsietfbpi2cmauthrejects.is_set || is_set(docsietfbpi2cmauthrejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthrejects.get_name_leafdata());
    if (docsietfbpi2cmauthinvalids.is_set || is_set(docsietfbpi2cmauthinvalids.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthinvalids.get_name_leafdata());
    if (docsietfbpi2cmauthrejecterrorcode.is_set || is_set(docsietfbpi2cmauthrejecterrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthrejecterrorcode.get_name_leafdata());
    if (docsietfbpi2cmauthrejecterrorstring.is_set || is_set(docsietfbpi2cmauthrejecterrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthrejecterrorstring.get_name_leafdata());
    if (docsietfbpi2cmauthinvaliderrorcode.is_set || is_set(docsietfbpi2cmauthinvaliderrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthinvaliderrorcode.get_name_leafdata());
    if (docsietfbpi2cmauthinvaliderrorstring.is_set || is_set(docsietfbpi2cmauthinvaliderrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmauthinvaliderrorstring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmPrivacyEnable")
    {
        docsietfbpi2cmprivacyenable = value;
        docsietfbpi2cmprivacyenable.value_namespace = name_space;
        docsietfbpi2cmprivacyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmPublicKey")
    {
        docsietfbpi2cmpublickey = value;
        docsietfbpi2cmpublickey.value_namespace = name_space;
        docsietfbpi2cmpublickey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthState")
    {
        docsietfbpi2cmauthstate = value;
        docsietfbpi2cmauthstate.value_namespace = name_space;
        docsietfbpi2cmauthstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthKeySequenceNumber")
    {
        docsietfbpi2cmauthkeysequencenumber = value;
        docsietfbpi2cmauthkeysequencenumber.value_namespace = name_space;
        docsietfbpi2cmauthkeysequencenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthExpiresOld")
    {
        docsietfbpi2cmauthexpiresold = value;
        docsietfbpi2cmauthexpiresold.value_namespace = name_space;
        docsietfbpi2cmauthexpiresold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthExpiresNew")
    {
        docsietfbpi2cmauthexpiresnew = value;
        docsietfbpi2cmauthexpiresnew.value_namespace = name_space;
        docsietfbpi2cmauthexpiresnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthReset")
    {
        docsietfbpi2cmauthreset = value;
        docsietfbpi2cmauthreset.value_namespace = name_space;
        docsietfbpi2cmauthreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthGraceTime")
    {
        docsietfbpi2cmauthgracetime = value;
        docsietfbpi2cmauthgracetime.value_namespace = name_space;
        docsietfbpi2cmauthgracetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKGraceTime")
    {
        docsietfbpi2cmtekgracetime = value;
        docsietfbpi2cmtekgracetime.value_namespace = name_space;
        docsietfbpi2cmtekgracetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthWaitTimeout")
    {
        docsietfbpi2cmauthwaittimeout = value;
        docsietfbpi2cmauthwaittimeout.value_namespace = name_space;
        docsietfbpi2cmauthwaittimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmReauthWaitTimeout")
    {
        docsietfbpi2cmreauthwaittimeout = value;
        docsietfbpi2cmreauthwaittimeout.value_namespace = name_space;
        docsietfbpi2cmreauthwaittimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmOpWaitTimeout")
    {
        docsietfbpi2cmopwaittimeout = value;
        docsietfbpi2cmopwaittimeout.value_namespace = name_space;
        docsietfbpi2cmopwaittimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmRekeyWaitTimeout")
    {
        docsietfbpi2cmrekeywaittimeout = value;
        docsietfbpi2cmrekeywaittimeout.value_namespace = name_space;
        docsietfbpi2cmrekeywaittimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthRejectWaitTimeout")
    {
        docsietfbpi2cmauthrejectwaittimeout = value;
        docsietfbpi2cmauthrejectwaittimeout.value_namespace = name_space;
        docsietfbpi2cmauthrejectwaittimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmSAMapWaitTimeout")
    {
        docsietfbpi2cmsamapwaittimeout = value;
        docsietfbpi2cmsamapwaittimeout.value_namespace = name_space;
        docsietfbpi2cmsamapwaittimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmSAMapMaxRetries")
    {
        docsietfbpi2cmsamapmaxretries = value;
        docsietfbpi2cmsamapmaxretries.value_namespace = name_space;
        docsietfbpi2cmsamapmaxretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthentInfos")
    {
        docsietfbpi2cmauthentinfos = value;
        docsietfbpi2cmauthentinfos.value_namespace = name_space;
        docsietfbpi2cmauthentinfos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthRequests")
    {
        docsietfbpi2cmauthrequests = value;
        docsietfbpi2cmauthrequests.value_namespace = name_space;
        docsietfbpi2cmauthrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthReplies")
    {
        docsietfbpi2cmauthreplies = value;
        docsietfbpi2cmauthreplies.value_namespace = name_space;
        docsietfbpi2cmauthreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthRejects")
    {
        docsietfbpi2cmauthrejects = value;
        docsietfbpi2cmauthrejects.value_namespace = name_space;
        docsietfbpi2cmauthrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthInvalids")
    {
        docsietfbpi2cmauthinvalids = value;
        docsietfbpi2cmauthinvalids.value_namespace = name_space;
        docsietfbpi2cmauthinvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthRejectErrorCode")
    {
        docsietfbpi2cmauthrejecterrorcode = value;
        docsietfbpi2cmauthrejecterrorcode.value_namespace = name_space;
        docsietfbpi2cmauthrejecterrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthRejectErrorString")
    {
        docsietfbpi2cmauthrejecterrorstring = value;
        docsietfbpi2cmauthrejecterrorstring.value_namespace = name_space;
        docsietfbpi2cmauthrejecterrorstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthInvalidErrorCode")
    {
        docsietfbpi2cmauthinvaliderrorcode = value;
        docsietfbpi2cmauthinvaliderrorcode.value_namespace = name_space;
        docsietfbpi2cmauthinvaliderrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmAuthInvalidErrorString")
    {
        docsietfbpi2cmauthinvaliderrorstring = value;
        docsietfbpi2cmauthinvaliderrorstring.value_namespace = name_space;
        docsietfbpi2cmauthinvaliderrorstring.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmPrivacyEnable")
    {
        docsietfbpi2cmprivacyenable.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmPublicKey")
    {
        docsietfbpi2cmpublickey.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthState")
    {
        docsietfbpi2cmauthstate.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthKeySequenceNumber")
    {
        docsietfbpi2cmauthkeysequencenumber.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthExpiresOld")
    {
        docsietfbpi2cmauthexpiresold.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthExpiresNew")
    {
        docsietfbpi2cmauthexpiresnew.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthReset")
    {
        docsietfbpi2cmauthreset.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthGraceTime")
    {
        docsietfbpi2cmauthgracetime.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKGraceTime")
    {
        docsietfbpi2cmtekgracetime.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthWaitTimeout")
    {
        docsietfbpi2cmauthwaittimeout.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmReauthWaitTimeout")
    {
        docsietfbpi2cmreauthwaittimeout.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmOpWaitTimeout")
    {
        docsietfbpi2cmopwaittimeout.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmRekeyWaitTimeout")
    {
        docsietfbpi2cmrekeywaittimeout.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthRejectWaitTimeout")
    {
        docsietfbpi2cmauthrejectwaittimeout.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmSAMapWaitTimeout")
    {
        docsietfbpi2cmsamapwaittimeout.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmSAMapMaxRetries")
    {
        docsietfbpi2cmsamapmaxretries.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthentInfos")
    {
        docsietfbpi2cmauthentinfos.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthRequests")
    {
        docsietfbpi2cmauthrequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthReplies")
    {
        docsietfbpi2cmauthreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthRejects")
    {
        docsietfbpi2cmauthrejects.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthInvalids")
    {
        docsietfbpi2cmauthinvalids.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthRejectErrorCode")
    {
        docsietfbpi2cmauthrejecterrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthRejectErrorString")
    {
        docsietfbpi2cmauthrejecterrorstring.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthInvalidErrorCode")
    {
        docsietfbpi2cmauthinvaliderrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmAuthInvalidErrorString")
    {
        docsietfbpi2cmauthinvaliderrorstring.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmPrivacyEnable" || name == "docsIetfBpi2CmPublicKey" || name == "docsIetfBpi2CmAuthState" || name == "docsIetfBpi2CmAuthKeySequenceNumber" || name == "docsIetfBpi2CmAuthExpiresOld" || name == "docsIetfBpi2CmAuthExpiresNew" || name == "docsIetfBpi2CmAuthReset" || name == "docsIetfBpi2CmAuthGraceTime" || name == "docsIetfBpi2CmTEKGraceTime" || name == "docsIetfBpi2CmAuthWaitTimeout" || name == "docsIetfBpi2CmReauthWaitTimeout" || name == "docsIetfBpi2CmOpWaitTimeout" || name == "docsIetfBpi2CmRekeyWaitTimeout" || name == "docsIetfBpi2CmAuthRejectWaitTimeout" || name == "docsIetfBpi2CmSAMapWaitTimeout" || name == "docsIetfBpi2CmSAMapMaxRetries" || name == "docsIetfBpi2CmAuthentInfos" || name == "docsIetfBpi2CmAuthRequests" || name == "docsIetfBpi2CmAuthReplies" || name == "docsIetfBpi2CmAuthRejects" || name == "docsIetfBpi2CmAuthInvalids" || name == "docsIetfBpi2CmAuthRejectErrorCode" || name == "docsIetfBpi2CmAuthRejectErrorString" || name == "docsIetfBpi2CmAuthInvalidErrorCode" || name == "docsIetfBpi2CmAuthInvalidErrorString")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKTable()
    :
    docsietfbpi2cmtekentry(this, {"ifindex", "docsietfbpi2cmteksaid"})
{

    yang_name = "docsIetfBpi2CmTEKTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::~DocsIetfBpi2CmTEKTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtekentry.len(); index++)
    {
        if(docsietfbpi2cmtekentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtekentry.len(); index++)
    {
        if(docsietfbpi2cmtekentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmTEKTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmTEKEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry>();
        c->parent = this;
        docsietfbpi2cmtekentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtekentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmTEKEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmteksaid{YType::int32, "docsIetfBpi2CmTEKSAId"},
    docsietfbpi2cmteksatype{YType::enumeration, "docsIetfBpi2CmTEKSAType"},
    docsietfbpi2cmtekdataencryptalg{YType::enumeration, "docsIetfBpi2CmTEKDataEncryptAlg"},
    docsietfbpi2cmtekdataauthentalg{YType::enumeration, "docsIetfBpi2CmTEKDataAuthentAlg"},
    docsietfbpi2cmtekstate{YType::enumeration, "docsIetfBpi2CmTEKState"},
    docsietfbpi2cmtekkeysequencenumber{YType::int32, "docsIetfBpi2CmTEKKeySequenceNumber"},
    docsietfbpi2cmtekexpiresold{YType::str, "docsIetfBpi2CmTEKExpiresOld"},
    docsietfbpi2cmtekexpiresnew{YType::str, "docsIetfBpi2CmTEKExpiresNew"},
    docsietfbpi2cmtekkeyrequests{YType::uint32, "docsIetfBpi2CmTEKKeyRequests"},
    docsietfbpi2cmtekkeyreplies{YType::uint32, "docsIetfBpi2CmTEKKeyReplies"},
    docsietfbpi2cmtekkeyrejects{YType::uint32, "docsIetfBpi2CmTEKKeyRejects"},
    docsietfbpi2cmtekinvalids{YType::uint32, "docsIetfBpi2CmTEKInvalids"},
    docsietfbpi2cmtekauthpends{YType::uint32, "docsIetfBpi2CmTEKAuthPends"},
    docsietfbpi2cmtekkeyrejecterrorcode{YType::enumeration, "docsIetfBpi2CmTEKKeyRejectErrorCode"},
    docsietfbpi2cmtekkeyrejecterrorstring{YType::str, "docsIetfBpi2CmTEKKeyRejectErrorString"},
    docsietfbpi2cmtekinvaliderrorcode{YType::enumeration, "docsIetfBpi2CmTEKInvalidErrorCode"},
    docsietfbpi2cmtekinvaliderrorstring{YType::str, "docsIetfBpi2CmTEKInvalidErrorString"}
{

    yang_name = "docsIetfBpi2CmTEKEntry"; yang_parent_name = "docsIetfBpi2CmTEKTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::~DocsIetfBpi2CmTEKEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmteksaid.is_set
	|| docsietfbpi2cmteksatype.is_set
	|| docsietfbpi2cmtekdataencryptalg.is_set
	|| docsietfbpi2cmtekdataauthentalg.is_set
	|| docsietfbpi2cmtekstate.is_set
	|| docsietfbpi2cmtekkeysequencenumber.is_set
	|| docsietfbpi2cmtekexpiresold.is_set
	|| docsietfbpi2cmtekexpiresnew.is_set
	|| docsietfbpi2cmtekkeyrequests.is_set
	|| docsietfbpi2cmtekkeyreplies.is_set
	|| docsietfbpi2cmtekkeyrejects.is_set
	|| docsietfbpi2cmtekinvalids.is_set
	|| docsietfbpi2cmtekauthpends.is_set
	|| docsietfbpi2cmtekkeyrejecterrorcode.is_set
	|| docsietfbpi2cmtekkeyrejecterrorstring.is_set
	|| docsietfbpi2cmtekinvaliderrorcode.is_set
	|| docsietfbpi2cmtekinvaliderrorstring.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmteksaid.yfilter)
	|| ydk::is_set(docsietfbpi2cmteksatype.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekdataencryptalg.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekdataauthentalg.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekstate.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekkeysequencenumber.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekexpiresold.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekexpiresnew.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekkeyrequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekkeyreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekkeyrejects.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekinvalids.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekauthpends.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekkeyrejecterrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekkeyrejecterrorstring.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekinvaliderrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmtekinvaliderrorstring.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmTEKTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmTEKEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsietfbpi2cmteksaid, "docsIetfBpi2CmTEKSAId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmteksaid.is_set || is_set(docsietfbpi2cmteksaid.yfilter)) leaf_name_data.push_back(docsietfbpi2cmteksaid.get_name_leafdata());
    if (docsietfbpi2cmteksatype.is_set || is_set(docsietfbpi2cmteksatype.yfilter)) leaf_name_data.push_back(docsietfbpi2cmteksatype.get_name_leafdata());
    if (docsietfbpi2cmtekdataencryptalg.is_set || is_set(docsietfbpi2cmtekdataencryptalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekdataencryptalg.get_name_leafdata());
    if (docsietfbpi2cmtekdataauthentalg.is_set || is_set(docsietfbpi2cmtekdataauthentalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekdataauthentalg.get_name_leafdata());
    if (docsietfbpi2cmtekstate.is_set || is_set(docsietfbpi2cmtekstate.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekstate.get_name_leafdata());
    if (docsietfbpi2cmtekkeysequencenumber.is_set || is_set(docsietfbpi2cmtekkeysequencenumber.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekkeysequencenumber.get_name_leafdata());
    if (docsietfbpi2cmtekexpiresold.is_set || is_set(docsietfbpi2cmtekexpiresold.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekexpiresold.get_name_leafdata());
    if (docsietfbpi2cmtekexpiresnew.is_set || is_set(docsietfbpi2cmtekexpiresnew.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekexpiresnew.get_name_leafdata());
    if (docsietfbpi2cmtekkeyrequests.is_set || is_set(docsietfbpi2cmtekkeyrequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekkeyrequests.get_name_leafdata());
    if (docsietfbpi2cmtekkeyreplies.is_set || is_set(docsietfbpi2cmtekkeyreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekkeyreplies.get_name_leafdata());
    if (docsietfbpi2cmtekkeyrejects.is_set || is_set(docsietfbpi2cmtekkeyrejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekkeyrejects.get_name_leafdata());
    if (docsietfbpi2cmtekinvalids.is_set || is_set(docsietfbpi2cmtekinvalids.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekinvalids.get_name_leafdata());
    if (docsietfbpi2cmtekauthpends.is_set || is_set(docsietfbpi2cmtekauthpends.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekauthpends.get_name_leafdata());
    if (docsietfbpi2cmtekkeyrejecterrorcode.is_set || is_set(docsietfbpi2cmtekkeyrejecterrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekkeyrejecterrorcode.get_name_leafdata());
    if (docsietfbpi2cmtekkeyrejecterrorstring.is_set || is_set(docsietfbpi2cmtekkeyrejecterrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekkeyrejecterrorstring.get_name_leafdata());
    if (docsietfbpi2cmtekinvaliderrorcode.is_set || is_set(docsietfbpi2cmtekinvaliderrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekinvaliderrorcode.get_name_leafdata());
    if (docsietfbpi2cmtekinvaliderrorstring.is_set || is_set(docsietfbpi2cmtekinvaliderrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtekinvaliderrorstring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKSAId")
    {
        docsietfbpi2cmteksaid = value;
        docsietfbpi2cmteksaid.value_namespace = name_space;
        docsietfbpi2cmteksaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKSAType")
    {
        docsietfbpi2cmteksatype = value;
        docsietfbpi2cmteksatype.value_namespace = name_space;
        docsietfbpi2cmteksatype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKDataEncryptAlg")
    {
        docsietfbpi2cmtekdataencryptalg = value;
        docsietfbpi2cmtekdataencryptalg.value_namespace = name_space;
        docsietfbpi2cmtekdataencryptalg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKDataAuthentAlg")
    {
        docsietfbpi2cmtekdataauthentalg = value;
        docsietfbpi2cmtekdataauthentalg.value_namespace = name_space;
        docsietfbpi2cmtekdataauthentalg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKState")
    {
        docsietfbpi2cmtekstate = value;
        docsietfbpi2cmtekstate.value_namespace = name_space;
        docsietfbpi2cmtekstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKKeySequenceNumber")
    {
        docsietfbpi2cmtekkeysequencenumber = value;
        docsietfbpi2cmtekkeysequencenumber.value_namespace = name_space;
        docsietfbpi2cmtekkeysequencenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKExpiresOld")
    {
        docsietfbpi2cmtekexpiresold = value;
        docsietfbpi2cmtekexpiresold.value_namespace = name_space;
        docsietfbpi2cmtekexpiresold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKExpiresNew")
    {
        docsietfbpi2cmtekexpiresnew = value;
        docsietfbpi2cmtekexpiresnew.value_namespace = name_space;
        docsietfbpi2cmtekexpiresnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRequests")
    {
        docsietfbpi2cmtekkeyrequests = value;
        docsietfbpi2cmtekkeyrequests.value_namespace = name_space;
        docsietfbpi2cmtekkeyrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyReplies")
    {
        docsietfbpi2cmtekkeyreplies = value;
        docsietfbpi2cmtekkeyreplies.value_namespace = name_space;
        docsietfbpi2cmtekkeyreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRejects")
    {
        docsietfbpi2cmtekkeyrejects = value;
        docsietfbpi2cmtekkeyrejects.value_namespace = name_space;
        docsietfbpi2cmtekkeyrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKInvalids")
    {
        docsietfbpi2cmtekinvalids = value;
        docsietfbpi2cmtekinvalids.value_namespace = name_space;
        docsietfbpi2cmtekinvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKAuthPends")
    {
        docsietfbpi2cmtekauthpends = value;
        docsietfbpi2cmtekauthpends.value_namespace = name_space;
        docsietfbpi2cmtekauthpends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRejectErrorCode")
    {
        docsietfbpi2cmtekkeyrejecterrorcode = value;
        docsietfbpi2cmtekkeyrejecterrorcode.value_namespace = name_space;
        docsietfbpi2cmtekkeyrejecterrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRejectErrorString")
    {
        docsietfbpi2cmtekkeyrejecterrorstring = value;
        docsietfbpi2cmtekkeyrejecterrorstring.value_namespace = name_space;
        docsietfbpi2cmtekkeyrejecterrorstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKInvalidErrorCode")
    {
        docsietfbpi2cmtekinvaliderrorcode = value;
        docsietfbpi2cmtekinvaliderrorcode.value_namespace = name_space;
        docsietfbpi2cmtekinvaliderrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmTEKInvalidErrorString")
    {
        docsietfbpi2cmtekinvaliderrorstring = value;
        docsietfbpi2cmtekinvaliderrorstring.value_namespace = name_space;
        docsietfbpi2cmtekinvaliderrorstring.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKSAId")
    {
        docsietfbpi2cmteksaid.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKSAType")
    {
        docsietfbpi2cmteksatype.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKDataEncryptAlg")
    {
        docsietfbpi2cmtekdataencryptalg.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKDataAuthentAlg")
    {
        docsietfbpi2cmtekdataauthentalg.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKState")
    {
        docsietfbpi2cmtekstate.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKKeySequenceNumber")
    {
        docsietfbpi2cmtekkeysequencenumber.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKExpiresOld")
    {
        docsietfbpi2cmtekexpiresold.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKExpiresNew")
    {
        docsietfbpi2cmtekexpiresnew.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRequests")
    {
        docsietfbpi2cmtekkeyrequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyReplies")
    {
        docsietfbpi2cmtekkeyreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRejects")
    {
        docsietfbpi2cmtekkeyrejects.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKInvalids")
    {
        docsietfbpi2cmtekinvalids.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKAuthPends")
    {
        docsietfbpi2cmtekauthpends.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRejectErrorCode")
    {
        docsietfbpi2cmtekkeyrejecterrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKKeyRejectErrorString")
    {
        docsietfbpi2cmtekkeyrejecterrorstring.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKInvalidErrorCode")
    {
        docsietfbpi2cmtekinvaliderrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmTEKInvalidErrorString")
    {
        docsietfbpi2cmtekinvaliderrorstring.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmTEKSAId" || name == "docsIetfBpi2CmTEKSAType" || name == "docsIetfBpi2CmTEKDataEncryptAlg" || name == "docsIetfBpi2CmTEKDataAuthentAlg" || name == "docsIetfBpi2CmTEKState" || name == "docsIetfBpi2CmTEKKeySequenceNumber" || name == "docsIetfBpi2CmTEKExpiresOld" || name == "docsIetfBpi2CmTEKExpiresNew" || name == "docsIetfBpi2CmTEKKeyRequests" || name == "docsIetfBpi2CmTEKKeyReplies" || name == "docsIetfBpi2CmTEKKeyRejects" || name == "docsIetfBpi2CmTEKInvalids" || name == "docsIetfBpi2CmTEKAuthPends" || name == "docsIetfBpi2CmTEKKeyRejectErrorCode" || name == "docsIetfBpi2CmTEKKeyRejectErrorString" || name == "docsIetfBpi2CmTEKInvalidErrorCode" || name == "docsIetfBpi2CmTEKInvalidErrorString")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapTable()
    :
    docsietfbpi2cmipmulticastmapentry(this, {"ifindex", "docsietfbpi2cmipmulticastindex"})
{

    yang_name = "docsIetfBpi2CmIpMulticastMapTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::~DocsIetfBpi2CmIpMulticastMapTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmipmulticastmapentry.len(); index++)
    {
        if(docsietfbpi2cmipmulticastmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmipmulticastmapentry.len(); index++)
    {
        if(docsietfbpi2cmipmulticastmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmIpMulticastMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmIpMulticastMapEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry>();
        c->parent = this;
        docsietfbpi2cmipmulticastmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmipmulticastmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmIpMulticastMapEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastMapEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmipmulticastindex{YType::uint32, "docsIetfBpi2CmIpMulticastIndex"},
    docsietfbpi2cmipmulticastaddresstype{YType::enumeration, "docsIetfBpi2CmIpMulticastAddressType"},
    docsietfbpi2cmipmulticastaddress{YType::str, "docsIetfBpi2CmIpMulticastAddress"},
    docsietfbpi2cmipmulticastsaid{YType::uint32, "docsIetfBpi2CmIpMulticastSAId"},
    docsietfbpi2cmipmulticastsamapstate{YType::enumeration, "docsIetfBpi2CmIpMulticastSAMapState"},
    docsietfbpi2cmipmulticastsamaprequests{YType::uint32, "docsIetfBpi2CmIpMulticastSAMapRequests"},
    docsietfbpi2cmipmulticastsamapreplies{YType::uint32, "docsIetfBpi2CmIpMulticastSAMapReplies"},
    docsietfbpi2cmipmulticastsamaprejects{YType::uint32, "docsIetfBpi2CmIpMulticastSAMapRejects"},
    docsietfbpi2cmipmulticastsamaprejecterrorcode{YType::enumeration, "docsIetfBpi2CmIpMulticastSAMapRejectErrorCode"},
    docsietfbpi2cmipmulticastsamaprejecterrorstring{YType::str, "docsIetfBpi2CmIpMulticastSAMapRejectErrorString"}
{

    yang_name = "docsIetfBpi2CmIpMulticastMapEntry"; yang_parent_name = "docsIetfBpi2CmIpMulticastMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::~DocsIetfBpi2CmIpMulticastMapEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmipmulticastindex.is_set
	|| docsietfbpi2cmipmulticastaddresstype.is_set
	|| docsietfbpi2cmipmulticastaddress.is_set
	|| docsietfbpi2cmipmulticastsaid.is_set
	|| docsietfbpi2cmipmulticastsamapstate.is_set
	|| docsietfbpi2cmipmulticastsamaprequests.is_set
	|| docsietfbpi2cmipmulticastsamapreplies.is_set
	|| docsietfbpi2cmipmulticastsamaprejects.is_set
	|| docsietfbpi2cmipmulticastsamaprejecterrorcode.is_set
	|| docsietfbpi2cmipmulticastsamaprejecterrorstring.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastaddresstype.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastaddress.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastsaid.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastsamapstate.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastsamaprequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastsamapreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastsamaprejects.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastsamaprejecterrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmipmulticastsamaprejecterrorstring.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmIpMulticastMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmIpMulticastMapEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsietfbpi2cmipmulticastindex, "docsIetfBpi2CmIpMulticastIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmipmulticastindex.is_set || is_set(docsietfbpi2cmipmulticastindex.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastindex.get_name_leafdata());
    if (docsietfbpi2cmipmulticastaddresstype.is_set || is_set(docsietfbpi2cmipmulticastaddresstype.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastaddresstype.get_name_leafdata());
    if (docsietfbpi2cmipmulticastaddress.is_set || is_set(docsietfbpi2cmipmulticastaddress.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastaddress.get_name_leafdata());
    if (docsietfbpi2cmipmulticastsaid.is_set || is_set(docsietfbpi2cmipmulticastsaid.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastsaid.get_name_leafdata());
    if (docsietfbpi2cmipmulticastsamapstate.is_set || is_set(docsietfbpi2cmipmulticastsamapstate.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastsamapstate.get_name_leafdata());
    if (docsietfbpi2cmipmulticastsamaprequests.is_set || is_set(docsietfbpi2cmipmulticastsamaprequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastsamaprequests.get_name_leafdata());
    if (docsietfbpi2cmipmulticastsamapreplies.is_set || is_set(docsietfbpi2cmipmulticastsamapreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastsamapreplies.get_name_leafdata());
    if (docsietfbpi2cmipmulticastsamaprejects.is_set || is_set(docsietfbpi2cmipmulticastsamaprejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastsamaprejects.get_name_leafdata());
    if (docsietfbpi2cmipmulticastsamaprejecterrorcode.is_set || is_set(docsietfbpi2cmipmulticastsamaprejecterrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastsamaprejecterrorcode.get_name_leafdata());
    if (docsietfbpi2cmipmulticastsamaprejecterrorstring.is_set || is_set(docsietfbpi2cmipmulticastsamaprejecterrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmipmulticastsamaprejecterrorstring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastIndex")
    {
        docsietfbpi2cmipmulticastindex = value;
        docsietfbpi2cmipmulticastindex.value_namespace = name_space;
        docsietfbpi2cmipmulticastindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastAddressType")
    {
        docsietfbpi2cmipmulticastaddresstype = value;
        docsietfbpi2cmipmulticastaddresstype.value_namespace = name_space;
        docsietfbpi2cmipmulticastaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastAddress")
    {
        docsietfbpi2cmipmulticastaddress = value;
        docsietfbpi2cmipmulticastaddress.value_namespace = name_space;
        docsietfbpi2cmipmulticastaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAId")
    {
        docsietfbpi2cmipmulticastsaid = value;
        docsietfbpi2cmipmulticastsaid.value_namespace = name_space;
        docsietfbpi2cmipmulticastsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapState")
    {
        docsietfbpi2cmipmulticastsamapstate = value;
        docsietfbpi2cmipmulticastsamapstate.value_namespace = name_space;
        docsietfbpi2cmipmulticastsamapstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRequests")
    {
        docsietfbpi2cmipmulticastsamaprequests = value;
        docsietfbpi2cmipmulticastsamaprequests.value_namespace = name_space;
        docsietfbpi2cmipmulticastsamaprequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapReplies")
    {
        docsietfbpi2cmipmulticastsamapreplies = value;
        docsietfbpi2cmipmulticastsamapreplies.value_namespace = name_space;
        docsietfbpi2cmipmulticastsamapreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRejects")
    {
        docsietfbpi2cmipmulticastsamaprejects = value;
        docsietfbpi2cmipmulticastsamaprejects.value_namespace = name_space;
        docsietfbpi2cmipmulticastsamaprejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRejectErrorCode")
    {
        docsietfbpi2cmipmulticastsamaprejecterrorcode = value;
        docsietfbpi2cmipmulticastsamaprejecterrorcode.value_namespace = name_space;
        docsietfbpi2cmipmulticastsamaprejecterrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRejectErrorString")
    {
        docsietfbpi2cmipmulticastsamaprejecterrorstring = value;
        docsietfbpi2cmipmulticastsamaprejecterrorstring.value_namespace = name_space;
        docsietfbpi2cmipmulticastsamaprejecterrorstring.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastIndex")
    {
        docsietfbpi2cmipmulticastindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastAddressType")
    {
        docsietfbpi2cmipmulticastaddresstype.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastAddress")
    {
        docsietfbpi2cmipmulticastaddress.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAId")
    {
        docsietfbpi2cmipmulticastsaid.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapState")
    {
        docsietfbpi2cmipmulticastsamapstate.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRequests")
    {
        docsietfbpi2cmipmulticastsamaprequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapReplies")
    {
        docsietfbpi2cmipmulticastsamapreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRejects")
    {
        docsietfbpi2cmipmulticastsamaprejects.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRejectErrorCode")
    {
        docsietfbpi2cmipmulticastsamaprejecterrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmIpMulticastSAMapRejectErrorString")
    {
        docsietfbpi2cmipmulticastsamaprejecterrorstring.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmIpMulticastIndex" || name == "docsIetfBpi2CmIpMulticastAddressType" || name == "docsIetfBpi2CmIpMulticastAddress" || name == "docsIetfBpi2CmIpMulticastSAId" || name == "docsIetfBpi2CmIpMulticastSAMapState" || name == "docsIetfBpi2CmIpMulticastSAMapRequests" || name == "docsIetfBpi2CmIpMulticastSAMapReplies" || name == "docsIetfBpi2CmIpMulticastSAMapRejects" || name == "docsIetfBpi2CmIpMulticastSAMapRejectErrorCode" || name == "docsIetfBpi2CmIpMulticastSAMapRejectErrorString")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertTable()
    :
    docsietfbpi2cmdevicecertentry(this, {"ifindex"})
{

    yang_name = "docsIetfBpi2CmDeviceCertTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::~DocsIetfBpi2CmDeviceCertTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmdevicecertentry.len(); index++)
    {
        if(docsietfbpi2cmdevicecertentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmdevicecertentry.len(); index++)
    {
        if(docsietfbpi2cmdevicecertentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmDeviceCertTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmDeviceCertEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry>();
        c->parent = this;
        docsietfbpi2cmdevicecertentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmdevicecertentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmDeviceCertEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::DocsIetfBpi2CmDeviceCertEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmdevicecmcert{YType::str, "docsIetfBpi2CmDeviceCmCert"},
    docsietfbpi2cmdevicemanufcert{YType::str, "docsIetfBpi2CmDeviceManufCert"}
{

    yang_name = "docsIetfBpi2CmDeviceCertEntry"; yang_parent_name = "docsIetfBpi2CmDeviceCertTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::~DocsIetfBpi2CmDeviceCertEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmdevicecmcert.is_set
	|| docsietfbpi2cmdevicemanufcert.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmdevicecmcert.yfilter)
	|| ydk::is_set(docsietfbpi2cmdevicemanufcert.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmDeviceCertTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmDeviceCertEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmdevicecmcert.is_set || is_set(docsietfbpi2cmdevicecmcert.yfilter)) leaf_name_data.push_back(docsietfbpi2cmdevicecmcert.get_name_leafdata());
    if (docsietfbpi2cmdevicemanufcert.is_set || is_set(docsietfbpi2cmdevicemanufcert.yfilter)) leaf_name_data.push_back(docsietfbpi2cmdevicemanufcert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmDeviceCmCert")
    {
        docsietfbpi2cmdevicecmcert = value;
        docsietfbpi2cmdevicecmcert.value_namespace = name_space;
        docsietfbpi2cmdevicecmcert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmDeviceManufCert")
    {
        docsietfbpi2cmdevicemanufcert = value;
        docsietfbpi2cmdevicemanufcert.value_namespace = name_space;
        docsietfbpi2cmdevicemanufcert.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmDeviceCmCert")
    {
        docsietfbpi2cmdevicecmcert.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmDeviceManufCert")
    {
        docsietfbpi2cmdevicemanufcert.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmDeviceCmCert" || name == "docsIetfBpi2CmDeviceManufCert")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteTable()
    :
    docsietfbpi2cmcryptosuiteentry(this, {"ifindex", "docsietfbpi2cmcryptosuiteindex"})
{

    yang_name = "docsIetfBpi2CmCryptoSuiteTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::~DocsIetfBpi2CmCryptoSuiteTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmcryptosuiteentry.len(); index++)
    {
        if(docsietfbpi2cmcryptosuiteentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmcryptosuiteentry.len(); index++)
    {
        if(docsietfbpi2cmcryptosuiteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmCryptoSuiteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmCryptoSuiteEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry>();
        c->parent = this;
        docsietfbpi2cmcryptosuiteentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmcryptosuiteentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmCryptoSuiteEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::DocsIetfBpi2CmCryptoSuiteEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmcryptosuiteindex{YType::uint32, "docsIetfBpi2CmCryptoSuiteIndex"},
    docsietfbpi2cmcryptosuitedataencryptalg{YType::enumeration, "docsIetfBpi2CmCryptoSuiteDataEncryptAlg"},
    docsietfbpi2cmcryptosuitedataauthentalg{YType::enumeration, "docsIetfBpi2CmCryptoSuiteDataAuthentAlg"}
{

    yang_name = "docsIetfBpi2CmCryptoSuiteEntry"; yang_parent_name = "docsIetfBpi2CmCryptoSuiteTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::~DocsIetfBpi2CmCryptoSuiteEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmcryptosuiteindex.is_set
	|| docsietfbpi2cmcryptosuitedataencryptalg.is_set
	|| docsietfbpi2cmcryptosuitedataauthentalg.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmcryptosuiteindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmcryptosuitedataencryptalg.yfilter)
	|| ydk::is_set(docsietfbpi2cmcryptosuitedataauthentalg.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmCryptoSuiteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmCryptoSuiteEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsietfbpi2cmcryptosuiteindex, "docsIetfBpi2CmCryptoSuiteIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmcryptosuiteindex.is_set || is_set(docsietfbpi2cmcryptosuiteindex.yfilter)) leaf_name_data.push_back(docsietfbpi2cmcryptosuiteindex.get_name_leafdata());
    if (docsietfbpi2cmcryptosuitedataencryptalg.is_set || is_set(docsietfbpi2cmcryptosuitedataencryptalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmcryptosuitedataencryptalg.get_name_leafdata());
    if (docsietfbpi2cmcryptosuitedataauthentalg.is_set || is_set(docsietfbpi2cmcryptosuitedataauthentalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmcryptosuitedataauthentalg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmCryptoSuiteIndex")
    {
        docsietfbpi2cmcryptosuiteindex = value;
        docsietfbpi2cmcryptosuiteindex.value_namespace = name_space;
        docsietfbpi2cmcryptosuiteindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmCryptoSuiteDataEncryptAlg")
    {
        docsietfbpi2cmcryptosuitedataencryptalg = value;
        docsietfbpi2cmcryptosuitedataencryptalg.value_namespace = name_space;
        docsietfbpi2cmcryptosuitedataencryptalg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmCryptoSuiteDataAuthentAlg")
    {
        docsietfbpi2cmcryptosuitedataauthentalg = value;
        docsietfbpi2cmcryptosuitedataauthentalg.value_namespace = name_space;
        docsietfbpi2cmcryptosuitedataauthentalg.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmCryptoSuiteIndex")
    {
        docsietfbpi2cmcryptosuiteindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmCryptoSuiteDataEncryptAlg")
    {
        docsietfbpi2cmcryptosuitedataencryptalg.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmCryptoSuiteDataAuthentAlg")
    {
        docsietfbpi2cmcryptosuitedataauthentalg.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmCryptoSuiteIndex" || name == "docsIetfBpi2CmCryptoSuiteDataEncryptAlg" || name == "docsIetfBpi2CmCryptoSuiteDataAuthentAlg")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseTable()
    :
    docsietfbpi2cmtsbaseentry(this, {"ifindex"})
{

    yang_name = "docsIetfBpi2CmtsBaseTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::~DocsIetfBpi2CmtsBaseTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtsbaseentry.len(); index++)
    {
        if(docsietfbpi2cmtsbaseentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtsbaseentry.len(); index++)
    {
        if(docsietfbpi2cmtsbaseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsBaseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmtsBaseEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry>();
        c->parent = this;
        docsietfbpi2cmtsbaseentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtsbaseentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsBaseEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::DocsIetfBpi2CmtsBaseEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmtsdefaultauthlifetime{YType::int32, "docsIetfBpi2CmtsDefaultAuthLifetime"},
    docsietfbpi2cmtsdefaultteklifetime{YType::int32, "docsIetfBpi2CmtsDefaultTEKLifetime"},
    docsietfbpi2cmtsdefaultselfsignedmanufcerttrust{YType::enumeration, "docsIetfBpi2CmtsDefaultSelfSignedManufCertTrust"},
    docsietfbpi2cmtscheckcertvalidityperiods{YType::boolean, "docsIetfBpi2CmtsCheckCertValidityPeriods"},
    docsietfbpi2cmtsauthentinfos{YType::uint32, "docsIetfBpi2CmtsAuthentInfos"},
    docsietfbpi2cmtsauthrequests{YType::uint32, "docsIetfBpi2CmtsAuthRequests"},
    docsietfbpi2cmtsauthreplies{YType::uint32, "docsIetfBpi2CmtsAuthReplies"},
    docsietfbpi2cmtsauthrejects{YType::uint32, "docsIetfBpi2CmtsAuthRejects"},
    docsietfbpi2cmtsauthinvalids{YType::uint32, "docsIetfBpi2CmtsAuthInvalids"},
    docsietfbpi2cmtssamaprequests{YType::uint32, "docsIetfBpi2CmtsSAMapRequests"},
    docsietfbpi2cmtssamapreplies{YType::uint32, "docsIetfBpi2CmtsSAMapReplies"},
    docsietfbpi2cmtssamaprejects{YType::uint32, "docsIetfBpi2CmtsSAMapRejects"}
{

    yang_name = "docsIetfBpi2CmtsBaseEntry"; yang_parent_name = "docsIetfBpi2CmtsBaseTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::~DocsIetfBpi2CmtsBaseEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmtsdefaultauthlifetime.is_set
	|| docsietfbpi2cmtsdefaultteklifetime.is_set
	|| docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.is_set
	|| docsietfbpi2cmtscheckcertvalidityperiods.is_set
	|| docsietfbpi2cmtsauthentinfos.is_set
	|| docsietfbpi2cmtsauthrequests.is_set
	|| docsietfbpi2cmtsauthreplies.is_set
	|| docsietfbpi2cmtsauthrejects.is_set
	|| docsietfbpi2cmtsauthinvalids.is_set
	|| docsietfbpi2cmtssamaprequests.is_set
	|| docsietfbpi2cmtssamapreplies.is_set
	|| docsietfbpi2cmtssamaprejects.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsdefaultauthlifetime.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsdefaultteklifetime.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscheckcertvalidityperiods.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthentinfos.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthrequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthrejects.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthinvalids.yfilter)
	|| ydk::is_set(docsietfbpi2cmtssamaprequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmtssamapreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmtssamaprejects.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmtsBaseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsBaseEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmtsdefaultauthlifetime.is_set || is_set(docsietfbpi2cmtsdefaultauthlifetime.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsdefaultauthlifetime.get_name_leafdata());
    if (docsietfbpi2cmtsdefaultteklifetime.is_set || is_set(docsietfbpi2cmtsdefaultteklifetime.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsdefaultteklifetime.get_name_leafdata());
    if (docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.is_set || is_set(docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.get_name_leafdata());
    if (docsietfbpi2cmtscheckcertvalidityperiods.is_set || is_set(docsietfbpi2cmtscheckcertvalidityperiods.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscheckcertvalidityperiods.get_name_leafdata());
    if (docsietfbpi2cmtsauthentinfos.is_set || is_set(docsietfbpi2cmtsauthentinfos.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthentinfos.get_name_leafdata());
    if (docsietfbpi2cmtsauthrequests.is_set || is_set(docsietfbpi2cmtsauthrequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthrequests.get_name_leafdata());
    if (docsietfbpi2cmtsauthreplies.is_set || is_set(docsietfbpi2cmtsauthreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthreplies.get_name_leafdata());
    if (docsietfbpi2cmtsauthrejects.is_set || is_set(docsietfbpi2cmtsauthrejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthrejects.get_name_leafdata());
    if (docsietfbpi2cmtsauthinvalids.is_set || is_set(docsietfbpi2cmtsauthinvalids.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthinvalids.get_name_leafdata());
    if (docsietfbpi2cmtssamaprequests.is_set || is_set(docsietfbpi2cmtssamaprequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtssamaprequests.get_name_leafdata());
    if (docsietfbpi2cmtssamapreplies.is_set || is_set(docsietfbpi2cmtssamapreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtssamapreplies.get_name_leafdata());
    if (docsietfbpi2cmtssamaprejects.is_set || is_set(docsietfbpi2cmtssamaprejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtssamaprejects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsDefaultAuthLifetime")
    {
        docsietfbpi2cmtsdefaultauthlifetime = value;
        docsietfbpi2cmtsdefaultauthlifetime.value_namespace = name_space;
        docsietfbpi2cmtsdefaultauthlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsDefaultTEKLifetime")
    {
        docsietfbpi2cmtsdefaultteklifetime = value;
        docsietfbpi2cmtsdefaultteklifetime.value_namespace = name_space;
        docsietfbpi2cmtsdefaultteklifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsDefaultSelfSignedManufCertTrust")
    {
        docsietfbpi2cmtsdefaultselfsignedmanufcerttrust = value;
        docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.value_namespace = name_space;
        docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCheckCertValidityPeriods")
    {
        docsietfbpi2cmtscheckcertvalidityperiods = value;
        docsietfbpi2cmtscheckcertvalidityperiods.value_namespace = name_space;
        docsietfbpi2cmtscheckcertvalidityperiods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthentInfos")
    {
        docsietfbpi2cmtsauthentinfos = value;
        docsietfbpi2cmtsauthentinfos.value_namespace = name_space;
        docsietfbpi2cmtsauthentinfos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRequests")
    {
        docsietfbpi2cmtsauthrequests = value;
        docsietfbpi2cmtsauthrequests.value_namespace = name_space;
        docsietfbpi2cmtsauthrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthReplies")
    {
        docsietfbpi2cmtsauthreplies = value;
        docsietfbpi2cmtsauthreplies.value_namespace = name_space;
        docsietfbpi2cmtsauthreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRejects")
    {
        docsietfbpi2cmtsauthrejects = value;
        docsietfbpi2cmtsauthrejects.value_namespace = name_space;
        docsietfbpi2cmtsauthrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthInvalids")
    {
        docsietfbpi2cmtsauthinvalids = value;
        docsietfbpi2cmtsauthinvalids.value_namespace = name_space;
        docsietfbpi2cmtsauthinvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsSAMapRequests")
    {
        docsietfbpi2cmtssamaprequests = value;
        docsietfbpi2cmtssamaprequests.value_namespace = name_space;
        docsietfbpi2cmtssamaprequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsSAMapReplies")
    {
        docsietfbpi2cmtssamapreplies = value;
        docsietfbpi2cmtssamapreplies.value_namespace = name_space;
        docsietfbpi2cmtssamapreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsSAMapRejects")
    {
        docsietfbpi2cmtssamaprejects = value;
        docsietfbpi2cmtssamaprejects.value_namespace = name_space;
        docsietfbpi2cmtssamaprejects.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsDefaultAuthLifetime")
    {
        docsietfbpi2cmtsdefaultauthlifetime.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsDefaultTEKLifetime")
    {
        docsietfbpi2cmtsdefaultteklifetime.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsDefaultSelfSignedManufCertTrust")
    {
        docsietfbpi2cmtsdefaultselfsignedmanufcerttrust.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCheckCertValidityPeriods")
    {
        docsietfbpi2cmtscheckcertvalidityperiods.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthentInfos")
    {
        docsietfbpi2cmtsauthentinfos.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRequests")
    {
        docsietfbpi2cmtsauthrequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthReplies")
    {
        docsietfbpi2cmtsauthreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRejects")
    {
        docsietfbpi2cmtsauthrejects.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthInvalids")
    {
        docsietfbpi2cmtsauthinvalids.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsSAMapRequests")
    {
        docsietfbpi2cmtssamaprequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsSAMapReplies")
    {
        docsietfbpi2cmtssamapreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsSAMapRejects")
    {
        docsietfbpi2cmtssamaprejects.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmtsDefaultAuthLifetime" || name == "docsIetfBpi2CmtsDefaultTEKLifetime" || name == "docsIetfBpi2CmtsDefaultSelfSignedManufCertTrust" || name == "docsIetfBpi2CmtsCheckCertValidityPeriods" || name == "docsIetfBpi2CmtsAuthentInfos" || name == "docsIetfBpi2CmtsAuthRequests" || name == "docsIetfBpi2CmtsAuthReplies" || name == "docsIetfBpi2CmtsAuthRejects" || name == "docsIetfBpi2CmtsAuthInvalids" || name == "docsIetfBpi2CmtsSAMapRequests" || name == "docsIetfBpi2CmtsSAMapReplies" || name == "docsIetfBpi2CmtsSAMapRejects")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthTable()
    :
    docsietfbpi2cmtsauthentry(this, {"ifindex", "docsietfbpi2cmtsauthcmmacaddress"})
{

    yang_name = "docsIetfBpi2CmtsAuthTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::~DocsIetfBpi2CmtsAuthTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtsauthentry.len(); index++)
    {
        if(docsietfbpi2cmtsauthentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtsauthentry.len(); index++)
    {
        if(docsietfbpi2cmtsauthentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsAuthTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmtsAuthEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry>();
        c->parent = this;
        docsietfbpi2cmtsauthentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtsauthentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsAuthEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmtsauthcmmacaddress{YType::str, "docsIetfBpi2CmtsAuthCmMacAddress"},
    docsietfbpi2cmtsauthcmbpiversion{YType::enumeration, "docsIetfBpi2CmtsAuthCmBpiVersion"},
    docsietfbpi2cmtsauthcmpublickey{YType::str, "docsIetfBpi2CmtsAuthCmPublicKey"},
    docsietfbpi2cmtsauthcmkeysequencenumber{YType::int32, "docsIetfBpi2CmtsAuthCmKeySequenceNumber"},
    docsietfbpi2cmtsauthcmexpiresold{YType::str, "docsIetfBpi2CmtsAuthCmExpiresOld"},
    docsietfbpi2cmtsauthcmexpiresnew{YType::str, "docsIetfBpi2CmtsAuthCmExpiresNew"},
    docsietfbpi2cmtsauthcmlifetime{YType::int32, "docsIetfBpi2CmtsAuthCmLifetime"},
    docsietfbpi2cmtsauthcmreset{YType::enumeration, "docsIetfBpi2CmtsAuthCmReset"},
    docsietfbpi2cmtsauthcminfos{YType::uint32, "docsIetfBpi2CmtsAuthCmInfos"},
    docsietfbpi2cmtsauthcmrequests{YType::uint32, "docsIetfBpi2CmtsAuthCmRequests"},
    docsietfbpi2cmtsauthcmreplies{YType::uint32, "docsIetfBpi2CmtsAuthCmReplies"},
    docsietfbpi2cmtsauthcmrejects{YType::uint32, "docsIetfBpi2CmtsAuthCmRejects"},
    docsietfbpi2cmtsauthcminvalids{YType::uint32, "docsIetfBpi2CmtsAuthCmInvalids"},
    docsietfbpi2cmtsauthrejecterrorcode{YType::enumeration, "docsIetfBpi2CmtsAuthRejectErrorCode"},
    docsietfbpi2cmtsauthrejecterrorstring{YType::str, "docsIetfBpi2CmtsAuthRejectErrorString"},
    docsietfbpi2cmtsauthinvaliderrorcode{YType::enumeration, "docsIetfBpi2CmtsAuthInvalidErrorCode"},
    docsietfbpi2cmtsauthinvaliderrorstring{YType::str, "docsIetfBpi2CmtsAuthInvalidErrorString"},
    docsietfbpi2cmtsauthprimarysaid{YType::uint32, "docsIetfBpi2CmtsAuthPrimarySAId"},
    docsietfbpi2cmtsauthbpkmcmcertvalid{YType::enumeration, "docsIetfBpi2CmtsAuthBpkmCmCertValid"},
    docsietfbpi2cmtsauthbpkmcmcert{YType::str, "docsIetfBpi2CmtsAuthBpkmCmCert"},
    docsietfbpi2cmtsauthcacertindexptr{YType::uint32, "docsIetfBpi2CmtsAuthCACertIndexPtr"}
{

    yang_name = "docsIetfBpi2CmtsAuthEntry"; yang_parent_name = "docsIetfBpi2CmtsAuthTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::~DocsIetfBpi2CmtsAuthEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmtsauthcmmacaddress.is_set
	|| docsietfbpi2cmtsauthcmbpiversion.is_set
	|| docsietfbpi2cmtsauthcmpublickey.is_set
	|| docsietfbpi2cmtsauthcmkeysequencenumber.is_set
	|| docsietfbpi2cmtsauthcmexpiresold.is_set
	|| docsietfbpi2cmtsauthcmexpiresnew.is_set
	|| docsietfbpi2cmtsauthcmlifetime.is_set
	|| docsietfbpi2cmtsauthcmreset.is_set
	|| docsietfbpi2cmtsauthcminfos.is_set
	|| docsietfbpi2cmtsauthcmrequests.is_set
	|| docsietfbpi2cmtsauthcmreplies.is_set
	|| docsietfbpi2cmtsauthcmrejects.is_set
	|| docsietfbpi2cmtsauthcminvalids.is_set
	|| docsietfbpi2cmtsauthrejecterrorcode.is_set
	|| docsietfbpi2cmtsauthrejecterrorstring.is_set
	|| docsietfbpi2cmtsauthinvaliderrorcode.is_set
	|| docsietfbpi2cmtsauthinvaliderrorstring.is_set
	|| docsietfbpi2cmtsauthprimarysaid.is_set
	|| docsietfbpi2cmtsauthbpkmcmcertvalid.is_set
	|| docsietfbpi2cmtsauthbpkmcmcert.is_set
	|| docsietfbpi2cmtsauthcacertindexptr.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmmacaddress.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmbpiversion.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmpublickey.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmkeysequencenumber.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmexpiresold.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmexpiresnew.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmlifetime.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmreset.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcminfos.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmrequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcmrejects.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcminvalids.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthrejecterrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthrejecterrorstring.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthinvaliderrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthinvaliderrorstring.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthprimarysaid.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthbpkmcmcertvalid.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthbpkmcmcert.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsauthcacertindexptr.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmtsAuthTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsAuthEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsietfbpi2cmtsauthcmmacaddress, "docsIetfBpi2CmtsAuthCmMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmmacaddress.is_set || is_set(docsietfbpi2cmtsauthcmmacaddress.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmmacaddress.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmbpiversion.is_set || is_set(docsietfbpi2cmtsauthcmbpiversion.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmbpiversion.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmpublickey.is_set || is_set(docsietfbpi2cmtsauthcmpublickey.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmpublickey.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmkeysequencenumber.is_set || is_set(docsietfbpi2cmtsauthcmkeysequencenumber.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmkeysequencenumber.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmexpiresold.is_set || is_set(docsietfbpi2cmtsauthcmexpiresold.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmexpiresold.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmexpiresnew.is_set || is_set(docsietfbpi2cmtsauthcmexpiresnew.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmexpiresnew.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmlifetime.is_set || is_set(docsietfbpi2cmtsauthcmlifetime.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmlifetime.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmreset.is_set || is_set(docsietfbpi2cmtsauthcmreset.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmreset.get_name_leafdata());
    if (docsietfbpi2cmtsauthcminfos.is_set || is_set(docsietfbpi2cmtsauthcminfos.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcminfos.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmrequests.is_set || is_set(docsietfbpi2cmtsauthcmrequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmrequests.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmreplies.is_set || is_set(docsietfbpi2cmtsauthcmreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmreplies.get_name_leafdata());
    if (docsietfbpi2cmtsauthcmrejects.is_set || is_set(docsietfbpi2cmtsauthcmrejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcmrejects.get_name_leafdata());
    if (docsietfbpi2cmtsauthcminvalids.is_set || is_set(docsietfbpi2cmtsauthcminvalids.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcminvalids.get_name_leafdata());
    if (docsietfbpi2cmtsauthrejecterrorcode.is_set || is_set(docsietfbpi2cmtsauthrejecterrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthrejecterrorcode.get_name_leafdata());
    if (docsietfbpi2cmtsauthrejecterrorstring.is_set || is_set(docsietfbpi2cmtsauthrejecterrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthrejecterrorstring.get_name_leafdata());
    if (docsietfbpi2cmtsauthinvaliderrorcode.is_set || is_set(docsietfbpi2cmtsauthinvaliderrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthinvaliderrorcode.get_name_leafdata());
    if (docsietfbpi2cmtsauthinvaliderrorstring.is_set || is_set(docsietfbpi2cmtsauthinvaliderrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthinvaliderrorstring.get_name_leafdata());
    if (docsietfbpi2cmtsauthprimarysaid.is_set || is_set(docsietfbpi2cmtsauthprimarysaid.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthprimarysaid.get_name_leafdata());
    if (docsietfbpi2cmtsauthbpkmcmcertvalid.is_set || is_set(docsietfbpi2cmtsauthbpkmcmcertvalid.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthbpkmcmcertvalid.get_name_leafdata());
    if (docsietfbpi2cmtsauthbpkmcmcert.is_set || is_set(docsietfbpi2cmtsauthbpkmcmcert.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthbpkmcmcert.get_name_leafdata());
    if (docsietfbpi2cmtsauthcacertindexptr.is_set || is_set(docsietfbpi2cmtsauthcacertindexptr.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsauthcacertindexptr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmMacAddress")
    {
        docsietfbpi2cmtsauthcmmacaddress = value;
        docsietfbpi2cmtsauthcmmacaddress.value_namespace = name_space;
        docsietfbpi2cmtsauthcmmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmBpiVersion")
    {
        docsietfbpi2cmtsauthcmbpiversion = value;
        docsietfbpi2cmtsauthcmbpiversion.value_namespace = name_space;
        docsietfbpi2cmtsauthcmbpiversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmPublicKey")
    {
        docsietfbpi2cmtsauthcmpublickey = value;
        docsietfbpi2cmtsauthcmpublickey.value_namespace = name_space;
        docsietfbpi2cmtsauthcmpublickey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmKeySequenceNumber")
    {
        docsietfbpi2cmtsauthcmkeysequencenumber = value;
        docsietfbpi2cmtsauthcmkeysequencenumber.value_namespace = name_space;
        docsietfbpi2cmtsauthcmkeysequencenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmExpiresOld")
    {
        docsietfbpi2cmtsauthcmexpiresold = value;
        docsietfbpi2cmtsauthcmexpiresold.value_namespace = name_space;
        docsietfbpi2cmtsauthcmexpiresold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmExpiresNew")
    {
        docsietfbpi2cmtsauthcmexpiresnew = value;
        docsietfbpi2cmtsauthcmexpiresnew.value_namespace = name_space;
        docsietfbpi2cmtsauthcmexpiresnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmLifetime")
    {
        docsietfbpi2cmtsauthcmlifetime = value;
        docsietfbpi2cmtsauthcmlifetime.value_namespace = name_space;
        docsietfbpi2cmtsauthcmlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmReset")
    {
        docsietfbpi2cmtsauthcmreset = value;
        docsietfbpi2cmtsauthcmreset.value_namespace = name_space;
        docsietfbpi2cmtsauthcmreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmInfos")
    {
        docsietfbpi2cmtsauthcminfos = value;
        docsietfbpi2cmtsauthcminfos.value_namespace = name_space;
        docsietfbpi2cmtsauthcminfos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmRequests")
    {
        docsietfbpi2cmtsauthcmrequests = value;
        docsietfbpi2cmtsauthcmrequests.value_namespace = name_space;
        docsietfbpi2cmtsauthcmrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmReplies")
    {
        docsietfbpi2cmtsauthcmreplies = value;
        docsietfbpi2cmtsauthcmreplies.value_namespace = name_space;
        docsietfbpi2cmtsauthcmreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmRejects")
    {
        docsietfbpi2cmtsauthcmrejects = value;
        docsietfbpi2cmtsauthcmrejects.value_namespace = name_space;
        docsietfbpi2cmtsauthcmrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmInvalids")
    {
        docsietfbpi2cmtsauthcminvalids = value;
        docsietfbpi2cmtsauthcminvalids.value_namespace = name_space;
        docsietfbpi2cmtsauthcminvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRejectErrorCode")
    {
        docsietfbpi2cmtsauthrejecterrorcode = value;
        docsietfbpi2cmtsauthrejecterrorcode.value_namespace = name_space;
        docsietfbpi2cmtsauthrejecterrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRejectErrorString")
    {
        docsietfbpi2cmtsauthrejecterrorstring = value;
        docsietfbpi2cmtsauthrejecterrorstring.value_namespace = name_space;
        docsietfbpi2cmtsauthrejecterrorstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthInvalidErrorCode")
    {
        docsietfbpi2cmtsauthinvaliderrorcode = value;
        docsietfbpi2cmtsauthinvaliderrorcode.value_namespace = name_space;
        docsietfbpi2cmtsauthinvaliderrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthInvalidErrorString")
    {
        docsietfbpi2cmtsauthinvaliderrorstring = value;
        docsietfbpi2cmtsauthinvaliderrorstring.value_namespace = name_space;
        docsietfbpi2cmtsauthinvaliderrorstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthPrimarySAId")
    {
        docsietfbpi2cmtsauthprimarysaid = value;
        docsietfbpi2cmtsauthprimarysaid.value_namespace = name_space;
        docsietfbpi2cmtsauthprimarysaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthBpkmCmCertValid")
    {
        docsietfbpi2cmtsauthbpkmcmcertvalid = value;
        docsietfbpi2cmtsauthbpkmcmcertvalid.value_namespace = name_space;
        docsietfbpi2cmtsauthbpkmcmcertvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthBpkmCmCert")
    {
        docsietfbpi2cmtsauthbpkmcmcert = value;
        docsietfbpi2cmtsauthbpkmcmcert.value_namespace = name_space;
        docsietfbpi2cmtsauthbpkmcmcert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCACertIndexPtr")
    {
        docsietfbpi2cmtsauthcacertindexptr = value;
        docsietfbpi2cmtsauthcacertindexptr.value_namespace = name_space;
        docsietfbpi2cmtsauthcacertindexptr.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmMacAddress")
    {
        docsietfbpi2cmtsauthcmmacaddress.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmBpiVersion")
    {
        docsietfbpi2cmtsauthcmbpiversion.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmPublicKey")
    {
        docsietfbpi2cmtsauthcmpublickey.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmKeySequenceNumber")
    {
        docsietfbpi2cmtsauthcmkeysequencenumber.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmExpiresOld")
    {
        docsietfbpi2cmtsauthcmexpiresold.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmExpiresNew")
    {
        docsietfbpi2cmtsauthcmexpiresnew.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmLifetime")
    {
        docsietfbpi2cmtsauthcmlifetime.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmReset")
    {
        docsietfbpi2cmtsauthcmreset.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmInfos")
    {
        docsietfbpi2cmtsauthcminfos.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmRequests")
    {
        docsietfbpi2cmtsauthcmrequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmReplies")
    {
        docsietfbpi2cmtsauthcmreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmRejects")
    {
        docsietfbpi2cmtsauthcmrejects.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCmInvalids")
    {
        docsietfbpi2cmtsauthcminvalids.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRejectErrorCode")
    {
        docsietfbpi2cmtsauthrejecterrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthRejectErrorString")
    {
        docsietfbpi2cmtsauthrejecterrorstring.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthInvalidErrorCode")
    {
        docsietfbpi2cmtsauthinvaliderrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthInvalidErrorString")
    {
        docsietfbpi2cmtsauthinvaliderrorstring.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthPrimarySAId")
    {
        docsietfbpi2cmtsauthprimarysaid.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthBpkmCmCertValid")
    {
        docsietfbpi2cmtsauthbpkmcmcertvalid.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthBpkmCmCert")
    {
        docsietfbpi2cmtsauthbpkmcmcert.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsAuthCACertIndexPtr")
    {
        docsietfbpi2cmtsauthcacertindexptr.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmtsAuthCmMacAddress" || name == "docsIetfBpi2CmtsAuthCmBpiVersion" || name == "docsIetfBpi2CmtsAuthCmPublicKey" || name == "docsIetfBpi2CmtsAuthCmKeySequenceNumber" || name == "docsIetfBpi2CmtsAuthCmExpiresOld" || name == "docsIetfBpi2CmtsAuthCmExpiresNew" || name == "docsIetfBpi2CmtsAuthCmLifetime" || name == "docsIetfBpi2CmtsAuthCmReset" || name == "docsIetfBpi2CmtsAuthCmInfos" || name == "docsIetfBpi2CmtsAuthCmRequests" || name == "docsIetfBpi2CmtsAuthCmReplies" || name == "docsIetfBpi2CmtsAuthCmRejects" || name == "docsIetfBpi2CmtsAuthCmInvalids" || name == "docsIetfBpi2CmtsAuthRejectErrorCode" || name == "docsIetfBpi2CmtsAuthRejectErrorString" || name == "docsIetfBpi2CmtsAuthInvalidErrorCode" || name == "docsIetfBpi2CmtsAuthInvalidErrorString" || name == "docsIetfBpi2CmtsAuthPrimarySAId" || name == "docsIetfBpi2CmtsAuthBpkmCmCertValid" || name == "docsIetfBpi2CmtsAuthBpkmCmCert" || name == "docsIetfBpi2CmtsAuthCACertIndexPtr")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKTable()
    :
    docsietfbpi2cmtstekentry(this, {"ifindex", "docsietfbpi2cmtsteksaid"})
{

    yang_name = "docsIetfBpi2CmtsTEKTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::~DocsIetfBpi2CmtsTEKTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtstekentry.len(); index++)
    {
        if(docsietfbpi2cmtstekentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtstekentry.len(); index++)
    {
        if(docsietfbpi2cmtstekentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsTEKTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmtsTEKEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry>();
        c->parent = this;
        docsietfbpi2cmtstekentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtstekentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsTEKEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsTEKEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmtsteksaid{YType::int32, "docsIetfBpi2CmtsTEKSAId"},
    docsietfbpi2cmtsteksatype{YType::enumeration, "docsIetfBpi2CmtsTEKSAType"},
    docsietfbpi2cmtstekdataencryptalg{YType::enumeration, "docsIetfBpi2CmtsTEKDataEncryptAlg"},
    docsietfbpi2cmtstekdataauthentalg{YType::enumeration, "docsIetfBpi2CmtsTEKDataAuthentAlg"},
    docsietfbpi2cmtsteklifetime{YType::int32, "docsIetfBpi2CmtsTEKLifetime"},
    docsietfbpi2cmtstekkeysequencenumber{YType::int32, "docsIetfBpi2CmtsTEKKeySequenceNumber"},
    docsietfbpi2cmtstekexpiresold{YType::str, "docsIetfBpi2CmtsTEKExpiresOld"},
    docsietfbpi2cmtstekexpiresnew{YType::str, "docsIetfBpi2CmtsTEKExpiresNew"},
    docsietfbpi2cmtstekreset{YType::boolean, "docsIetfBpi2CmtsTEKReset"},
    docsietfbpi2cmtskeyrequests{YType::uint32, "docsIetfBpi2CmtsKeyRequests"},
    docsietfbpi2cmtskeyreplies{YType::uint32, "docsIetfBpi2CmtsKeyReplies"},
    docsietfbpi2cmtskeyrejects{YType::uint32, "docsIetfBpi2CmtsKeyRejects"},
    docsietfbpi2cmtstekinvalids{YType::uint32, "docsIetfBpi2CmtsTEKInvalids"},
    docsietfbpi2cmtskeyrejecterrorcode{YType::enumeration, "docsIetfBpi2CmtsKeyRejectErrorCode"},
    docsietfbpi2cmtskeyrejecterrorstring{YType::str, "docsIetfBpi2CmtsKeyRejectErrorString"},
    docsietfbpi2cmtstekinvaliderrorcode{YType::enumeration, "docsIetfBpi2CmtsTEKInvalidErrorCode"},
    docsietfbpi2cmtstekinvaliderrorstring{YType::str, "docsIetfBpi2CmtsTEKInvalidErrorString"}
{

    yang_name = "docsIetfBpi2CmtsTEKEntry"; yang_parent_name = "docsIetfBpi2CmtsTEKTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::~DocsIetfBpi2CmtsTEKEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmtsteksaid.is_set
	|| docsietfbpi2cmtsteksatype.is_set
	|| docsietfbpi2cmtstekdataencryptalg.is_set
	|| docsietfbpi2cmtstekdataauthentalg.is_set
	|| docsietfbpi2cmtsteklifetime.is_set
	|| docsietfbpi2cmtstekkeysequencenumber.is_set
	|| docsietfbpi2cmtstekexpiresold.is_set
	|| docsietfbpi2cmtstekexpiresnew.is_set
	|| docsietfbpi2cmtstekreset.is_set
	|| docsietfbpi2cmtskeyrequests.is_set
	|| docsietfbpi2cmtskeyreplies.is_set
	|| docsietfbpi2cmtskeyrejects.is_set
	|| docsietfbpi2cmtstekinvalids.is_set
	|| docsietfbpi2cmtskeyrejecterrorcode.is_set
	|| docsietfbpi2cmtskeyrejecterrorstring.is_set
	|| docsietfbpi2cmtstekinvaliderrorcode.is_set
	|| docsietfbpi2cmtstekinvaliderrorstring.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsteksaid.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsteksatype.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekdataencryptalg.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekdataauthentalg.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsteklifetime.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekkeysequencenumber.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekexpiresold.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekexpiresnew.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekreset.yfilter)
	|| ydk::is_set(docsietfbpi2cmtskeyrequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmtskeyreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmtskeyrejects.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekinvalids.yfilter)
	|| ydk::is_set(docsietfbpi2cmtskeyrejecterrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmtskeyrejecterrorstring.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekinvaliderrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmtstekinvaliderrorstring.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmtsTEKTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsTEKEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsietfbpi2cmtsteksaid, "docsIetfBpi2CmtsTEKSAId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmtsteksaid.is_set || is_set(docsietfbpi2cmtsteksaid.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsteksaid.get_name_leafdata());
    if (docsietfbpi2cmtsteksatype.is_set || is_set(docsietfbpi2cmtsteksatype.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsteksatype.get_name_leafdata());
    if (docsietfbpi2cmtstekdataencryptalg.is_set || is_set(docsietfbpi2cmtstekdataencryptalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekdataencryptalg.get_name_leafdata());
    if (docsietfbpi2cmtstekdataauthentalg.is_set || is_set(docsietfbpi2cmtstekdataauthentalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekdataauthentalg.get_name_leafdata());
    if (docsietfbpi2cmtsteklifetime.is_set || is_set(docsietfbpi2cmtsteklifetime.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsteklifetime.get_name_leafdata());
    if (docsietfbpi2cmtstekkeysequencenumber.is_set || is_set(docsietfbpi2cmtstekkeysequencenumber.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekkeysequencenumber.get_name_leafdata());
    if (docsietfbpi2cmtstekexpiresold.is_set || is_set(docsietfbpi2cmtstekexpiresold.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekexpiresold.get_name_leafdata());
    if (docsietfbpi2cmtstekexpiresnew.is_set || is_set(docsietfbpi2cmtstekexpiresnew.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekexpiresnew.get_name_leafdata());
    if (docsietfbpi2cmtstekreset.is_set || is_set(docsietfbpi2cmtstekreset.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekreset.get_name_leafdata());
    if (docsietfbpi2cmtskeyrequests.is_set || is_set(docsietfbpi2cmtskeyrequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtskeyrequests.get_name_leafdata());
    if (docsietfbpi2cmtskeyreplies.is_set || is_set(docsietfbpi2cmtskeyreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtskeyreplies.get_name_leafdata());
    if (docsietfbpi2cmtskeyrejects.is_set || is_set(docsietfbpi2cmtskeyrejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtskeyrejects.get_name_leafdata());
    if (docsietfbpi2cmtstekinvalids.is_set || is_set(docsietfbpi2cmtstekinvalids.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekinvalids.get_name_leafdata());
    if (docsietfbpi2cmtskeyrejecterrorcode.is_set || is_set(docsietfbpi2cmtskeyrejecterrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtskeyrejecterrorcode.get_name_leafdata());
    if (docsietfbpi2cmtskeyrejecterrorstring.is_set || is_set(docsietfbpi2cmtskeyrejecterrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtskeyrejecterrorstring.get_name_leafdata());
    if (docsietfbpi2cmtstekinvaliderrorcode.is_set || is_set(docsietfbpi2cmtstekinvaliderrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekinvaliderrorcode.get_name_leafdata());
    if (docsietfbpi2cmtstekinvaliderrorstring.is_set || is_set(docsietfbpi2cmtstekinvaliderrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtstekinvaliderrorstring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKSAId")
    {
        docsietfbpi2cmtsteksaid = value;
        docsietfbpi2cmtsteksaid.value_namespace = name_space;
        docsietfbpi2cmtsteksaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKSAType")
    {
        docsietfbpi2cmtsteksatype = value;
        docsietfbpi2cmtsteksatype.value_namespace = name_space;
        docsietfbpi2cmtsteksatype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKDataEncryptAlg")
    {
        docsietfbpi2cmtstekdataencryptalg = value;
        docsietfbpi2cmtstekdataencryptalg.value_namespace = name_space;
        docsietfbpi2cmtstekdataencryptalg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKDataAuthentAlg")
    {
        docsietfbpi2cmtstekdataauthentalg = value;
        docsietfbpi2cmtstekdataauthentalg.value_namespace = name_space;
        docsietfbpi2cmtstekdataauthentalg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKLifetime")
    {
        docsietfbpi2cmtsteklifetime = value;
        docsietfbpi2cmtsteklifetime.value_namespace = name_space;
        docsietfbpi2cmtsteklifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKKeySequenceNumber")
    {
        docsietfbpi2cmtstekkeysequencenumber = value;
        docsietfbpi2cmtstekkeysequencenumber.value_namespace = name_space;
        docsietfbpi2cmtstekkeysequencenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKExpiresOld")
    {
        docsietfbpi2cmtstekexpiresold = value;
        docsietfbpi2cmtstekexpiresold.value_namespace = name_space;
        docsietfbpi2cmtstekexpiresold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKExpiresNew")
    {
        docsietfbpi2cmtstekexpiresnew = value;
        docsietfbpi2cmtstekexpiresnew.value_namespace = name_space;
        docsietfbpi2cmtstekexpiresnew.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKReset")
    {
        docsietfbpi2cmtstekreset = value;
        docsietfbpi2cmtstekreset.value_namespace = name_space;
        docsietfbpi2cmtstekreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRequests")
    {
        docsietfbpi2cmtskeyrequests = value;
        docsietfbpi2cmtskeyrequests.value_namespace = name_space;
        docsietfbpi2cmtskeyrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsKeyReplies")
    {
        docsietfbpi2cmtskeyreplies = value;
        docsietfbpi2cmtskeyreplies.value_namespace = name_space;
        docsietfbpi2cmtskeyreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRejects")
    {
        docsietfbpi2cmtskeyrejects = value;
        docsietfbpi2cmtskeyrejects.value_namespace = name_space;
        docsietfbpi2cmtskeyrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKInvalids")
    {
        docsietfbpi2cmtstekinvalids = value;
        docsietfbpi2cmtstekinvalids.value_namespace = name_space;
        docsietfbpi2cmtstekinvalids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRejectErrorCode")
    {
        docsietfbpi2cmtskeyrejecterrorcode = value;
        docsietfbpi2cmtskeyrejecterrorcode.value_namespace = name_space;
        docsietfbpi2cmtskeyrejecterrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRejectErrorString")
    {
        docsietfbpi2cmtskeyrejecterrorstring = value;
        docsietfbpi2cmtskeyrejecterrorstring.value_namespace = name_space;
        docsietfbpi2cmtskeyrejecterrorstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKInvalidErrorCode")
    {
        docsietfbpi2cmtstekinvaliderrorcode = value;
        docsietfbpi2cmtstekinvaliderrorcode.value_namespace = name_space;
        docsietfbpi2cmtstekinvaliderrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsTEKInvalidErrorString")
    {
        docsietfbpi2cmtstekinvaliderrorstring = value;
        docsietfbpi2cmtstekinvaliderrorstring.value_namespace = name_space;
        docsietfbpi2cmtstekinvaliderrorstring.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKSAId")
    {
        docsietfbpi2cmtsteksaid.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKSAType")
    {
        docsietfbpi2cmtsteksatype.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKDataEncryptAlg")
    {
        docsietfbpi2cmtstekdataencryptalg.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKDataAuthentAlg")
    {
        docsietfbpi2cmtstekdataauthentalg.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKLifetime")
    {
        docsietfbpi2cmtsteklifetime.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKKeySequenceNumber")
    {
        docsietfbpi2cmtstekkeysequencenumber.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKExpiresOld")
    {
        docsietfbpi2cmtstekexpiresold.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKExpiresNew")
    {
        docsietfbpi2cmtstekexpiresnew.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKReset")
    {
        docsietfbpi2cmtstekreset.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRequests")
    {
        docsietfbpi2cmtskeyrequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsKeyReplies")
    {
        docsietfbpi2cmtskeyreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRejects")
    {
        docsietfbpi2cmtskeyrejects.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKInvalids")
    {
        docsietfbpi2cmtstekinvalids.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRejectErrorCode")
    {
        docsietfbpi2cmtskeyrejecterrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsKeyRejectErrorString")
    {
        docsietfbpi2cmtskeyrejecterrorstring.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKInvalidErrorCode")
    {
        docsietfbpi2cmtstekinvaliderrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsTEKInvalidErrorString")
    {
        docsietfbpi2cmtstekinvaliderrorstring.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmtsTEKSAId" || name == "docsIetfBpi2CmtsTEKSAType" || name == "docsIetfBpi2CmtsTEKDataEncryptAlg" || name == "docsIetfBpi2CmtsTEKDataAuthentAlg" || name == "docsIetfBpi2CmtsTEKLifetime" || name == "docsIetfBpi2CmtsTEKKeySequenceNumber" || name == "docsIetfBpi2CmtsTEKExpiresOld" || name == "docsIetfBpi2CmtsTEKExpiresNew" || name == "docsIetfBpi2CmtsTEKReset" || name == "docsIetfBpi2CmtsKeyRequests" || name == "docsIetfBpi2CmtsKeyReplies" || name == "docsIetfBpi2CmtsKeyRejects" || name == "docsIetfBpi2CmtsTEKInvalids" || name == "docsIetfBpi2CmtsKeyRejectErrorCode" || name == "docsIetfBpi2CmtsKeyRejectErrorString" || name == "docsIetfBpi2CmtsTEKInvalidErrorCode" || name == "docsIetfBpi2CmtsTEKInvalidErrorString")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapTable()
    :
    docsietfbpi2cmtsipmulticastmapentry(this, {"ifindex", "docsietfbpi2cmtsipmulticastindex"})
{

    yang_name = "docsIetfBpi2CmtsIpMulticastMapTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::~DocsIetfBpi2CmtsIpMulticastMapTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtsipmulticastmapentry.len(); index++)
    {
        if(docsietfbpi2cmtsipmulticastmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtsipmulticastmapentry.len(); index++)
    {
        if(docsietfbpi2cmtsipmulticastmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsIpMulticastMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmtsIpMulticastMapEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry>();
        c->parent = this;
        docsietfbpi2cmtsipmulticastmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtsipmulticastmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsIpMulticastMapEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::DocsIetfBpi2CmtsIpMulticastMapEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmtsipmulticastindex{YType::uint32, "docsIetfBpi2CmtsIpMulticastIndex"},
    docsietfbpi2cmtsipmulticastaddresstype{YType::enumeration, "docsIetfBpi2CmtsIpMulticastAddressType"},
    docsietfbpi2cmtsipmulticastaddress{YType::str, "docsIetfBpi2CmtsIpMulticastAddress"},
    docsietfbpi2cmtsipmulticastmask{YType::str, "docsIetfBpi2CmtsIpMulticastMask"},
    docsietfbpi2cmtsipmulticastsaid{YType::uint32, "docsIetfBpi2CmtsIpMulticastSAId"},
    docsietfbpi2cmtsipmulticastsatype{YType::enumeration, "docsIetfBpi2CmtsIpMulticastSAType"},
    docsietfbpi2cmtsipmulticastdataencryptalg{YType::enumeration, "docsIetfBpi2CmtsIpMulticastDataEncryptAlg"},
    docsietfbpi2cmtsipmulticastdataauthentalg{YType::enumeration, "docsIetfBpi2CmtsIpMulticastDataAuthentAlg"},
    docsietfbpi2cmtsipmulticastsamaprequests{YType::uint32, "docsIetfBpi2CmtsIpMulticastSAMapRequests"},
    docsietfbpi2cmtsipmulticastsamapreplies{YType::uint32, "docsIetfBpi2CmtsIpMulticastSAMapReplies"},
    docsietfbpi2cmtsipmulticastsamaprejects{YType::uint32, "docsIetfBpi2CmtsIpMulticastSAMapRejects"},
    docsietfbpi2cmtsipmulticastsamaprejecterrorcode{YType::enumeration, "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode"},
    docsietfbpi2cmtsipmulticastsamaprejecterrorstring{YType::str, "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorString"},
    docsietfbpi2cmtsipmulticastmapcontrol{YType::enumeration, "docsIetfBpi2CmtsIpMulticastMapControl"},
    docsietfbpi2cmtsipmulticastmapstoragetype{YType::enumeration, "docsIetfBpi2CmtsIpMulticastMapStorageType"}
{

    yang_name = "docsIetfBpi2CmtsIpMulticastMapEntry"; yang_parent_name = "docsIetfBpi2CmtsIpMulticastMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::~DocsIetfBpi2CmtsIpMulticastMapEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmtsipmulticastindex.is_set
	|| docsietfbpi2cmtsipmulticastaddresstype.is_set
	|| docsietfbpi2cmtsipmulticastaddress.is_set
	|| docsietfbpi2cmtsipmulticastmask.is_set
	|| docsietfbpi2cmtsipmulticastsaid.is_set
	|| docsietfbpi2cmtsipmulticastsatype.is_set
	|| docsietfbpi2cmtsipmulticastdataencryptalg.is_set
	|| docsietfbpi2cmtsipmulticastdataauthentalg.is_set
	|| docsietfbpi2cmtsipmulticastsamaprequests.is_set
	|| docsietfbpi2cmtsipmulticastsamapreplies.is_set
	|| docsietfbpi2cmtsipmulticastsamaprejects.is_set
	|| docsietfbpi2cmtsipmulticastsamaprejecterrorcode.is_set
	|| docsietfbpi2cmtsipmulticastsamaprejecterrorstring.is_set
	|| docsietfbpi2cmtsipmulticastmapcontrol.is_set
	|| docsietfbpi2cmtsipmulticastmapstoragetype.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastaddresstype.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastaddress.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastmask.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastsaid.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastsatype.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastdataencryptalg.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastdataauthentalg.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastsamaprequests.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastsamapreplies.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastsamaprejects.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastsamaprejecterrorcode.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastsamaprejecterrorstring.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastmapcontrol.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsipmulticastmapstoragetype.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmtsIpMulticastMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsIpMulticastMapEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsietfbpi2cmtsipmulticastindex, "docsIetfBpi2CmtsIpMulticastIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastindex.is_set || is_set(docsietfbpi2cmtsipmulticastindex.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastindex.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastaddresstype.is_set || is_set(docsietfbpi2cmtsipmulticastaddresstype.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastaddresstype.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastaddress.is_set || is_set(docsietfbpi2cmtsipmulticastaddress.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastaddress.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastmask.is_set || is_set(docsietfbpi2cmtsipmulticastmask.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastmask.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastsaid.is_set || is_set(docsietfbpi2cmtsipmulticastsaid.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastsaid.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastsatype.is_set || is_set(docsietfbpi2cmtsipmulticastsatype.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastsatype.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastdataencryptalg.is_set || is_set(docsietfbpi2cmtsipmulticastdataencryptalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastdataencryptalg.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastdataauthentalg.is_set || is_set(docsietfbpi2cmtsipmulticastdataauthentalg.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastdataauthentalg.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastsamaprequests.is_set || is_set(docsietfbpi2cmtsipmulticastsamaprequests.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastsamaprequests.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastsamapreplies.is_set || is_set(docsietfbpi2cmtsipmulticastsamapreplies.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastsamapreplies.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastsamaprejects.is_set || is_set(docsietfbpi2cmtsipmulticastsamaprejects.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastsamaprejects.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastsamaprejecterrorcode.is_set || is_set(docsietfbpi2cmtsipmulticastsamaprejecterrorcode.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastsamaprejecterrorcode.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastsamaprejecterrorstring.is_set || is_set(docsietfbpi2cmtsipmulticastsamaprejecterrorstring.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastsamaprejecterrorstring.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastmapcontrol.is_set || is_set(docsietfbpi2cmtsipmulticastmapcontrol.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastmapcontrol.get_name_leafdata());
    if (docsietfbpi2cmtsipmulticastmapstoragetype.is_set || is_set(docsietfbpi2cmtsipmulticastmapstoragetype.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsipmulticastmapstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastIndex")
    {
        docsietfbpi2cmtsipmulticastindex = value;
        docsietfbpi2cmtsipmulticastindex.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastAddressType")
    {
        docsietfbpi2cmtsipmulticastaddresstype = value;
        docsietfbpi2cmtsipmulticastaddresstype.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastAddress")
    {
        docsietfbpi2cmtsipmulticastaddress = value;
        docsietfbpi2cmtsipmulticastaddress.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastMask")
    {
        docsietfbpi2cmtsipmulticastmask = value;
        docsietfbpi2cmtsipmulticastmask.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAId")
    {
        docsietfbpi2cmtsipmulticastsaid = value;
        docsietfbpi2cmtsipmulticastsaid.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAType")
    {
        docsietfbpi2cmtsipmulticastsatype = value;
        docsietfbpi2cmtsipmulticastsatype.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastsatype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastDataEncryptAlg")
    {
        docsietfbpi2cmtsipmulticastdataencryptalg = value;
        docsietfbpi2cmtsipmulticastdataencryptalg.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastdataencryptalg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastDataAuthentAlg")
    {
        docsietfbpi2cmtsipmulticastdataauthentalg = value;
        docsietfbpi2cmtsipmulticastdataauthentalg.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastdataauthentalg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRequests")
    {
        docsietfbpi2cmtsipmulticastsamaprequests = value;
        docsietfbpi2cmtsipmulticastsamaprequests.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastsamaprequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapReplies")
    {
        docsietfbpi2cmtsipmulticastsamapreplies = value;
        docsietfbpi2cmtsipmulticastsamapreplies.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastsamapreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRejects")
    {
        docsietfbpi2cmtsipmulticastsamaprejects = value;
        docsietfbpi2cmtsipmulticastsamaprejects.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastsamaprejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode")
    {
        docsietfbpi2cmtsipmulticastsamaprejecterrorcode = value;
        docsietfbpi2cmtsipmulticastsamaprejecterrorcode.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastsamaprejecterrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorString")
    {
        docsietfbpi2cmtsipmulticastsamaprejecterrorstring = value;
        docsietfbpi2cmtsipmulticastsamaprejecterrorstring.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastsamaprejecterrorstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastMapControl")
    {
        docsietfbpi2cmtsipmulticastmapcontrol = value;
        docsietfbpi2cmtsipmulticastmapcontrol.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastmapcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastMapStorageType")
    {
        docsietfbpi2cmtsipmulticastmapstoragetype = value;
        docsietfbpi2cmtsipmulticastmapstoragetype.value_namespace = name_space;
        docsietfbpi2cmtsipmulticastmapstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastIndex")
    {
        docsietfbpi2cmtsipmulticastindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastAddressType")
    {
        docsietfbpi2cmtsipmulticastaddresstype.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastAddress")
    {
        docsietfbpi2cmtsipmulticastaddress.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastMask")
    {
        docsietfbpi2cmtsipmulticastmask.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAId")
    {
        docsietfbpi2cmtsipmulticastsaid.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAType")
    {
        docsietfbpi2cmtsipmulticastsatype.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastDataEncryptAlg")
    {
        docsietfbpi2cmtsipmulticastdataencryptalg.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastDataAuthentAlg")
    {
        docsietfbpi2cmtsipmulticastdataauthentalg.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRequests")
    {
        docsietfbpi2cmtsipmulticastsamaprequests.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapReplies")
    {
        docsietfbpi2cmtsipmulticastsamapreplies.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRejects")
    {
        docsietfbpi2cmtsipmulticastsamaprejects.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode")
    {
        docsietfbpi2cmtsipmulticastsamaprejecterrorcode.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorString")
    {
        docsietfbpi2cmtsipmulticastsamaprejecterrorstring.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastMapControl")
    {
        docsietfbpi2cmtsipmulticastmapcontrol.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsIpMulticastMapStorageType")
    {
        docsietfbpi2cmtsipmulticastmapstoragetype.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmtsIpMulticastIndex" || name == "docsIetfBpi2CmtsIpMulticastAddressType" || name == "docsIetfBpi2CmtsIpMulticastAddress" || name == "docsIetfBpi2CmtsIpMulticastMask" || name == "docsIetfBpi2CmtsIpMulticastSAId" || name == "docsIetfBpi2CmtsIpMulticastSAType" || name == "docsIetfBpi2CmtsIpMulticastDataEncryptAlg" || name == "docsIetfBpi2CmtsIpMulticastDataAuthentAlg" || name == "docsIetfBpi2CmtsIpMulticastSAMapRequests" || name == "docsIetfBpi2CmtsIpMulticastSAMapReplies" || name == "docsIetfBpi2CmtsIpMulticastSAMapRejects" || name == "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode" || name == "docsIetfBpi2CmtsIpMulticastSAMapRejectErrorString" || name == "docsIetfBpi2CmtsIpMulticastMapControl" || name == "docsIetfBpi2CmtsIpMulticastMapStorageType")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthTable()
    :
    docsietfbpi2cmtsmulticastauthentry(this, {"ifindex", "docsietfbpi2cmtsmulticastauthsaid", "docsietfbpi2cmtsmulticastauthcmmacaddress"})
{

    yang_name = "docsIetfBpi2CmtsMulticastAuthTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::~DocsIetfBpi2CmtsMulticastAuthTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtsmulticastauthentry.len(); index++)
    {
        if(docsietfbpi2cmtsmulticastauthentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtsmulticastauthentry.len(); index++)
    {
        if(docsietfbpi2cmtsmulticastauthentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsMulticastAuthTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmtsMulticastAuthEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry>();
        c->parent = this;
        docsietfbpi2cmtsmulticastauthentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtsmulticastauthentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsMulticastAuthEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::DocsIetfBpi2CmtsMulticastAuthEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsietfbpi2cmtsmulticastauthsaid{YType::int32, "docsIetfBpi2CmtsMulticastAuthSAId"},
    docsietfbpi2cmtsmulticastauthcmmacaddress{YType::str, "docsIetfBpi2CmtsMulticastAuthCmMacAddress"},
    docsietfbpi2cmtsmulticastauthcontrol{YType::enumeration, "docsIetfBpi2CmtsMulticastAuthControl"}
{

    yang_name = "docsIetfBpi2CmtsMulticastAuthEntry"; yang_parent_name = "docsIetfBpi2CmtsMulticastAuthTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::~DocsIetfBpi2CmtsMulticastAuthEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsietfbpi2cmtsmulticastauthsaid.is_set
	|| docsietfbpi2cmtsmulticastauthcmmacaddress.is_set
	|| docsietfbpi2cmtsmulticastauthcontrol.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsmulticastauthsaid.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsmulticastauthcmmacaddress.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsmulticastauthcontrol.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmtsMulticastAuthTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsMulticastAuthEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsietfbpi2cmtsmulticastauthsaid, "docsIetfBpi2CmtsMulticastAuthSAId");
    ADD_KEY_TOKEN(docsietfbpi2cmtsmulticastauthcmmacaddress, "docsIetfBpi2CmtsMulticastAuthCmMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsietfbpi2cmtsmulticastauthsaid.is_set || is_set(docsietfbpi2cmtsmulticastauthsaid.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsmulticastauthsaid.get_name_leafdata());
    if (docsietfbpi2cmtsmulticastauthcmmacaddress.is_set || is_set(docsietfbpi2cmtsmulticastauthcmmacaddress.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsmulticastauthcmmacaddress.get_name_leafdata());
    if (docsietfbpi2cmtsmulticastauthcontrol.is_set || is_set(docsietfbpi2cmtsmulticastauthcontrol.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsmulticastauthcontrol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsMulticastAuthSAId")
    {
        docsietfbpi2cmtsmulticastauthsaid = value;
        docsietfbpi2cmtsmulticastauthsaid.value_namespace = name_space;
        docsietfbpi2cmtsmulticastauthsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsMulticastAuthCmMacAddress")
    {
        docsietfbpi2cmtsmulticastauthcmmacaddress = value;
        docsietfbpi2cmtsmulticastauthcmmacaddress.value_namespace = name_space;
        docsietfbpi2cmtsmulticastauthcmmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsMulticastAuthControl")
    {
        docsietfbpi2cmtsmulticastauthcontrol = value;
        docsietfbpi2cmtsmulticastauthcontrol.value_namespace = name_space;
        docsietfbpi2cmtsmulticastauthcontrol.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsMulticastAuthSAId")
    {
        docsietfbpi2cmtsmulticastauthsaid.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsMulticastAuthCmMacAddress")
    {
        docsietfbpi2cmtsmulticastauthcmmacaddress.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsMulticastAuthControl")
    {
        docsietfbpi2cmtsmulticastauthcontrol.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIetfBpi2CmtsMulticastAuthSAId" || name == "docsIetfBpi2CmtsMulticastAuthCmMacAddress" || name == "docsIetfBpi2CmtsMulticastAuthControl")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertTable()
    :
    docsietfbpi2cmtsprovisionedcmcertentry(this, {"docsietfbpi2cmtsprovisionedcmcertmacaddress"})
{

    yang_name = "docsIetfBpi2CmtsProvisionedCmCertTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::~DocsIetfBpi2CmtsProvisionedCmCertTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtsprovisionedcmcertentry.len(); index++)
    {
        if(docsietfbpi2cmtsprovisionedcmcertentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtsprovisionedcmcertentry.len(); index++)
    {
        if(docsietfbpi2cmtsprovisionedcmcertentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsProvisionedCmCertTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmtsProvisionedCmCertEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry>();
        c->parent = this;
        docsietfbpi2cmtsprovisionedcmcertentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtsprovisionedcmcertentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsProvisionedCmCertEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertEntry()
    :
    docsietfbpi2cmtsprovisionedcmcertmacaddress{YType::str, "docsIetfBpi2CmtsProvisionedCmCertMacAddress"},
    docsietfbpi2cmtsprovisionedcmcerttrust{YType::enumeration, "docsIetfBpi2CmtsProvisionedCmCertTrust"},
    docsietfbpi2cmtsprovisionedcmcertsource{YType::enumeration, "docsIetfBpi2CmtsProvisionedCmCertSource"},
    docsietfbpi2cmtsprovisionedcmcertstatus{YType::enumeration, "docsIetfBpi2CmtsProvisionedCmCertStatus"},
    docsietfbpi2cmtsprovisionedcmcert{YType::str, "docsIetfBpi2CmtsProvisionedCmCert"}
{

    yang_name = "docsIetfBpi2CmtsProvisionedCmCertEntry"; yang_parent_name = "docsIetfBpi2CmtsProvisionedCmCertTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::~DocsIetfBpi2CmtsProvisionedCmCertEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsietfbpi2cmtsprovisionedcmcertmacaddress.is_set
	|| docsietfbpi2cmtsprovisionedcmcerttrust.is_set
	|| docsietfbpi2cmtsprovisionedcmcertsource.is_set
	|| docsietfbpi2cmtsprovisionedcmcertstatus.is_set
	|| docsietfbpi2cmtsprovisionedcmcert.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsietfbpi2cmtsprovisionedcmcertmacaddress.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsprovisionedcmcerttrust.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsprovisionedcmcertsource.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsprovisionedcmcertstatus.yfilter)
	|| ydk::is_set(docsietfbpi2cmtsprovisionedcmcert.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmtsProvisionedCmCertTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsProvisionedCmCertEntry";
    ADD_KEY_TOKEN(docsietfbpi2cmtsprovisionedcmcertmacaddress, "docsIetfBpi2CmtsProvisionedCmCertMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsietfbpi2cmtsprovisionedcmcertmacaddress.is_set || is_set(docsietfbpi2cmtsprovisionedcmcertmacaddress.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsprovisionedcmcertmacaddress.get_name_leafdata());
    if (docsietfbpi2cmtsprovisionedcmcerttrust.is_set || is_set(docsietfbpi2cmtsprovisionedcmcerttrust.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsprovisionedcmcerttrust.get_name_leafdata());
    if (docsietfbpi2cmtsprovisionedcmcertsource.is_set || is_set(docsietfbpi2cmtsprovisionedcmcertsource.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsprovisionedcmcertsource.get_name_leafdata());
    if (docsietfbpi2cmtsprovisionedcmcertstatus.is_set || is_set(docsietfbpi2cmtsprovisionedcmcertstatus.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsprovisionedcmcertstatus.get_name_leafdata());
    if (docsietfbpi2cmtsprovisionedcmcert.is_set || is_set(docsietfbpi2cmtsprovisionedcmcert.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtsprovisionedcmcert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertMacAddress")
    {
        docsietfbpi2cmtsprovisionedcmcertmacaddress = value;
        docsietfbpi2cmtsprovisionedcmcertmacaddress.value_namespace = name_space;
        docsietfbpi2cmtsprovisionedcmcertmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertTrust")
    {
        docsietfbpi2cmtsprovisionedcmcerttrust = value;
        docsietfbpi2cmtsprovisionedcmcerttrust.value_namespace = name_space;
        docsietfbpi2cmtsprovisionedcmcerttrust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertSource")
    {
        docsietfbpi2cmtsprovisionedcmcertsource = value;
        docsietfbpi2cmtsprovisionedcmcertsource.value_namespace = name_space;
        docsietfbpi2cmtsprovisionedcmcertsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertStatus")
    {
        docsietfbpi2cmtsprovisionedcmcertstatus = value;
        docsietfbpi2cmtsprovisionedcmcertstatus.value_namespace = name_space;
        docsietfbpi2cmtsprovisionedcmcertstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCert")
    {
        docsietfbpi2cmtsprovisionedcmcert = value;
        docsietfbpi2cmtsprovisionedcmcert.value_namespace = name_space;
        docsietfbpi2cmtsprovisionedcmcert.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertMacAddress")
    {
        docsietfbpi2cmtsprovisionedcmcertmacaddress.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertTrust")
    {
        docsietfbpi2cmtsprovisionedcmcerttrust.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertSource")
    {
        docsietfbpi2cmtsprovisionedcmcertsource.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCertStatus")
    {
        docsietfbpi2cmtsprovisionedcmcertstatus.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsProvisionedCmCert")
    {
        docsietfbpi2cmtsprovisionedcmcert.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsProvisionedCmCertMacAddress" || name == "docsIetfBpi2CmtsProvisionedCmCertTrust" || name == "docsIetfBpi2CmtsProvisionedCmCertSource" || name == "docsIetfBpi2CmtsProvisionedCmCertStatus" || name == "docsIetfBpi2CmtsProvisionedCmCert")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertTable()
    :
    docsietfbpi2cmtscacertentry(this, {"docsietfbpi2cmtscacertindex"})
{

    yang_name = "docsIetfBpi2CmtsCACertTable"; yang_parent_name = "DOCS-IETF-BPI2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::~DocsIetfBpi2CmtsCACertTable()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsietfbpi2cmtscacertentry.len(); index++)
    {
        if(docsietfbpi2cmtscacertentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::has_operation() const
{
    for (std::size_t index=0; index<docsietfbpi2cmtscacertentry.len(); index++)
    {
        if(docsietfbpi2cmtscacertentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsCACertTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIetfBpi2CmtsCACertEntry")
    {
        auto c = std::make_shared<DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry>();
        c->parent = this;
        docsietfbpi2cmtscacertentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsietfbpi2cmtscacertentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsCACertEntry")
        return true;
    return false;
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertEntry()
    :
    docsietfbpi2cmtscacertindex{YType::uint32, "docsIetfBpi2CmtsCACertIndex"},
    docsietfbpi2cmtscacertsubject{YType::str, "docsIetfBpi2CmtsCACertSubject"},
    docsietfbpi2cmtscacertissuer{YType::str, "docsIetfBpi2CmtsCACertIssuer"},
    docsietfbpi2cmtscacertserialnumber{YType::str, "docsIetfBpi2CmtsCACertSerialNumber"},
    docsietfbpi2cmtscacerttrust{YType::enumeration, "docsIetfBpi2CmtsCACertTrust"},
    docsietfbpi2cmtscacertsource{YType::enumeration, "docsIetfBpi2CmtsCACertSource"},
    docsietfbpi2cmtscacertstatus{YType::enumeration, "docsIetfBpi2CmtsCACertStatus"},
    docsietfbpi2cmtscacert{YType::str, "docsIetfBpi2CmtsCACert"},
    docsietfbpi2cmtscacertthumbprint{YType::str, "docsIetfBpi2CmtsCACertThumbprint"}
{

    yang_name = "docsIetfBpi2CmtsCACertEntry"; yang_parent_name = "docsIetfBpi2CmtsCACertTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::~DocsIetfBpi2CmtsCACertEntry()
{
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsietfbpi2cmtscacertindex.is_set
	|| docsietfbpi2cmtscacertsubject.is_set
	|| docsietfbpi2cmtscacertissuer.is_set
	|| docsietfbpi2cmtscacertserialnumber.is_set
	|| docsietfbpi2cmtscacerttrust.is_set
	|| docsietfbpi2cmtscacertsource.is_set
	|| docsietfbpi2cmtscacertstatus.is_set
	|| docsietfbpi2cmtscacert.is_set
	|| docsietfbpi2cmtscacertthumbprint.is_set;
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacertindex.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacertsubject.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacertissuer.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacertserialnumber.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacerttrust.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacertsource.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacertstatus.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacert.yfilter)
	|| ydk::is_set(docsietfbpi2cmtscacertthumbprint.yfilter);
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IETF-BPI2-MIB:DOCS-IETF-BPI2-MIB/docsIetfBpi2CmtsCACertTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIetfBpi2CmtsCACertEntry";
    ADD_KEY_TOKEN(docsietfbpi2cmtscacertindex, "docsIetfBpi2CmtsCACertIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsietfbpi2cmtscacertindex.is_set || is_set(docsietfbpi2cmtscacertindex.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacertindex.get_name_leafdata());
    if (docsietfbpi2cmtscacertsubject.is_set || is_set(docsietfbpi2cmtscacertsubject.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacertsubject.get_name_leafdata());
    if (docsietfbpi2cmtscacertissuer.is_set || is_set(docsietfbpi2cmtscacertissuer.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacertissuer.get_name_leafdata());
    if (docsietfbpi2cmtscacertserialnumber.is_set || is_set(docsietfbpi2cmtscacertserialnumber.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacertserialnumber.get_name_leafdata());
    if (docsietfbpi2cmtscacerttrust.is_set || is_set(docsietfbpi2cmtscacerttrust.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacerttrust.get_name_leafdata());
    if (docsietfbpi2cmtscacertsource.is_set || is_set(docsietfbpi2cmtscacertsource.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacertsource.get_name_leafdata());
    if (docsietfbpi2cmtscacertstatus.is_set || is_set(docsietfbpi2cmtscacertstatus.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacertstatus.get_name_leafdata());
    if (docsietfbpi2cmtscacert.is_set || is_set(docsietfbpi2cmtscacert.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacert.get_name_leafdata());
    if (docsietfbpi2cmtscacertthumbprint.is_set || is_set(docsietfbpi2cmtscacertthumbprint.yfilter)) leaf_name_data.push_back(docsietfbpi2cmtscacertthumbprint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIetfBpi2CmtsCACertIndex")
    {
        docsietfbpi2cmtscacertindex = value;
        docsietfbpi2cmtscacertindex.value_namespace = name_space;
        docsietfbpi2cmtscacertindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACertSubject")
    {
        docsietfbpi2cmtscacertsubject = value;
        docsietfbpi2cmtscacertsubject.value_namespace = name_space;
        docsietfbpi2cmtscacertsubject.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACertIssuer")
    {
        docsietfbpi2cmtscacertissuer = value;
        docsietfbpi2cmtscacertissuer.value_namespace = name_space;
        docsietfbpi2cmtscacertissuer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACertSerialNumber")
    {
        docsietfbpi2cmtscacertserialnumber = value;
        docsietfbpi2cmtscacertserialnumber.value_namespace = name_space;
        docsietfbpi2cmtscacertserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACertTrust")
    {
        docsietfbpi2cmtscacerttrust = value;
        docsietfbpi2cmtscacerttrust.value_namespace = name_space;
        docsietfbpi2cmtscacerttrust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACertSource")
    {
        docsietfbpi2cmtscacertsource = value;
        docsietfbpi2cmtscacertsource.value_namespace = name_space;
        docsietfbpi2cmtscacertsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACertStatus")
    {
        docsietfbpi2cmtscacertstatus = value;
        docsietfbpi2cmtscacertstatus.value_namespace = name_space;
        docsietfbpi2cmtscacertstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACert")
    {
        docsietfbpi2cmtscacert = value;
        docsietfbpi2cmtscacert.value_namespace = name_space;
        docsietfbpi2cmtscacert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIetfBpi2CmtsCACertThumbprint")
    {
        docsietfbpi2cmtscacertthumbprint = value;
        docsietfbpi2cmtscacertthumbprint.value_namespace = name_space;
        docsietfbpi2cmtscacertthumbprint.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIetfBpi2CmtsCACertIndex")
    {
        docsietfbpi2cmtscacertindex.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACertSubject")
    {
        docsietfbpi2cmtscacertsubject.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACertIssuer")
    {
        docsietfbpi2cmtscacertissuer.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACertSerialNumber")
    {
        docsietfbpi2cmtscacertserialnumber.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACertTrust")
    {
        docsietfbpi2cmtscacerttrust.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACertSource")
    {
        docsietfbpi2cmtscacertsource.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACertStatus")
    {
        docsietfbpi2cmtscacertstatus.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACert")
    {
        docsietfbpi2cmtscacert.yfilter = yfilter;
    }
    if(value_path == "docsIetfBpi2CmtsCACertThumbprint")
    {
        docsietfbpi2cmtscacertthumbprint.yfilter = yfilter;
    }
}

bool DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIetfBpi2CmtsCACertIndex" || name == "docsIetfBpi2CmtsCACertSubject" || name == "docsIetfBpi2CmtsCACertIssuer" || name == "docsIetfBpi2CmtsCACertSerialNumber" || name == "docsIetfBpi2CmtsCACertTrust" || name == "docsIetfBpi2CmtsCACertSource" || name == "docsIetfBpi2CmtsCACertStatus" || name == "docsIetfBpi2CmtsCACert" || name == "docsIetfBpi2CmtsCACertThumbprint")
        return true;
    return false;
}

const Enum::YLeaf DocsBpkmDataEncryptAlg::none {0, "none"};
const Enum::YLeaf DocsBpkmDataEncryptAlg::des56CbcMode {1, "des56CbcMode"};
const Enum::YLeaf DocsBpkmDataEncryptAlg::des40CbcMode {2, "des40CbcMode"};
const Enum::YLeaf DocsBpkmDataEncryptAlg::t3Des128CbcMode {3, "t3Des128CbcMode"};
const Enum::YLeaf DocsBpkmDataEncryptAlg::aes128CbcMode {4, "aes128CbcMode"};
const Enum::YLeaf DocsBpkmDataEncryptAlg::aes256CbcMode {5, "aes256CbcMode"};

const Enum::YLeaf DocsBpkmDataAuthentAlg::none {0, "none"};
const Enum::YLeaf DocsBpkmDataAuthentAlg::hmacSha196 {1, "hmacSha196"};

const Enum::YLeaf DocsBpkmSAType::none {0, "none"};
const Enum::YLeaf DocsBpkmSAType::primary {1, "primary"};
const Enum::YLeaf DocsBpkmSAType::static_ {2, "static"};
const Enum::YLeaf DocsBpkmSAType::dynamic {3, "dynamic"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode::configFileCvcVerified {1, "configFileCvcVerified"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode::configFileCvcRejected {2, "configFileCvcRejected"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode::snmpCvcVerified {3, "snmpCvcVerified"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode::snmpCvcRejected {4, "snmpCvcRejected"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode::codeFileVerified {5, "codeFileVerified"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode::codeFileRejected {6, "codeFileRejected"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode::other {7, "other"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthState::start {1, "start"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthState::authWait {2, "authWait"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthState::authorized {3, "authorized"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthState::reauthWait {4, "reauthWait"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthState::authRejectWait {5, "authRejectWait"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthState::silent {6, "silent"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthRejectErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthRejectErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthRejectErrorCode::unauthorizedCm {3, "unauthorizedCm"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthRejectErrorCode::unauthorizedSaid {4, "unauthorizedSaid"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthRejectErrorCode::permanentAuthorizationFailure {8, "permanentAuthorizationFailure"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthRejectErrorCode::timeOfDayNotAcquired {11, "timeOfDayNotAcquired"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthInvalidErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthInvalidErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthInvalidErrorCode::unauthorizedCm {3, "unauthorizedCm"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthInvalidErrorCode::unsolicited {5, "unsolicited"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthInvalidErrorCode::invalidKeySequence {6, "invalidKeySequence"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthInvalidErrorCode::keyRequestAuthenticationFailure {7, "keyRequestAuthenticationFailure"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKState::start {1, "start"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKState::opWait {2, "opWait"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKState::opReauthWait {3, "opReauthWait"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKState::operational {4, "operational"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKState::rekeyWait {5, "rekeyWait"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKState::rekeyReauthWait {6, "rekeyReauthWait"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKKeyRejectErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKKeyRejectErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKKeyRejectErrorCode::unauthorizedSaid {4, "unauthorizedSaid"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKInvalidErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKInvalidErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKInvalidErrorCode::invalidKeySequence {6, "invalidKeySequence"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapState::start {1, "start"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapState::mapWait {2, "mapWait"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapState::mapped {3, "mapped"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapRejectErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapRejectErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapRejectErrorCode::noAuthForRequestedDSFlow {9, "noAuthForRequestedDSFlow"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapRejectErrorCode::dsFlowNotMappedToSA {10, "dsFlowNotMappedToSA"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::DocsIetfBpi2CmtsDefaultSelfSignedManufCertTrust::trusted {1, "trusted"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::DocsIetfBpi2CmtsDefaultSelfSignedManufCertTrust::untrusted {2, "untrusted"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmBpiVersion::bpi {0, "bpi"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmBpiVersion::bpiPlus {1, "bpiPlus"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmReset::noResetRequested {1, "noResetRequested"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmReset::invalidateAuth {2, "invalidateAuth"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmReset::sendAuthInvalid {3, "sendAuthInvalid"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmReset::invalidateTeks {4, "invalidateTeks"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthRejectErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthRejectErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthRejectErrorCode::unauthorizedCm {3, "unauthorizedCm"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthRejectErrorCode::unauthorizedSaid {4, "unauthorizedSaid"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthRejectErrorCode::permanentAuthorizationFailure {8, "permanentAuthorizationFailure"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthRejectErrorCode::timeOfDayNotAcquired {11, "timeOfDayNotAcquired"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthInvalidErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthInvalidErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthInvalidErrorCode::unauthorizedCm {3, "unauthorizedCm"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthInvalidErrorCode::unsolicited {5, "unsolicited"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthInvalidErrorCode::invalidKeySequence {6, "invalidKeySequence"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthInvalidErrorCode::keyRequestAuthenticationFailure {7, "keyRequestAuthenticationFailure"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::unknown {0, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::validCmChained {1, "validCmChained"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::validCmTrusted {2, "validCmTrusted"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::invalidCmUntrusted {3, "invalidCmUntrusted"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::invalidCAUntrusted {4, "invalidCAUntrusted"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::invalidCmOther {5, "invalidCmOther"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::invalidCAOther {6, "invalidCAOther"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::invalidCmRevoked {7, "invalidCmRevoked"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid::invalidCARevoked {8, "invalidCARevoked"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsKeyRejectErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsKeyRejectErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsKeyRejectErrorCode::unauthorizedSaid {4, "unauthorizedSaid"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsTEKInvalidErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsTEKInvalidErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsTEKInvalidErrorCode::invalidKeySequence {6, "invalidKeySequence"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::DocsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode::none {1, "none"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::DocsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode::unknown {2, "unknown"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::DocsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode::noAuthForRequestedDSFlow {9, "noAuthForRequestedDSFlow"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::DocsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode::dsFlowNotMappedToSA {10, "dsFlowNotMappedToSA"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertTrust::trusted {1, "trusted"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertTrust::untrusted {2, "untrusted"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertSource::snmp {1, "snmp"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertSource::configurationFile {2, "configurationFile"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertSource::externalDatabase {3, "externalDatabase"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertSource::other {4, "other"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertTrust::trusted {1, "trusted"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertTrust::untrusted {2, "untrusted"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertTrust::chained {3, "chained"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertTrust::root {4, "root"};

const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertSource::snmp {1, "snmp"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertSource::configurationFile {2, "configurationFile"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertSource::externalDatabase {3, "externalDatabase"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertSource::other {4, "other"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertSource::authentInfo {5, "authentInfo"};
const Enum::YLeaf DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertSource::compiledIntoCode {6, "compiledIntoCode"};


}
}

