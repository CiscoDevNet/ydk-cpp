
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DYNAMIC_TEMPLATE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_DYNAMIC_TEMPLATE_MIB {

CISCODYNAMICTEMPLATEMIB::CISCODYNAMICTEMPLATEMIB()
    :
    cdttemplatetable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateTable>())
    , cdttemplatetargettable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable>())
    , cdttemplateassociationtable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable>())
    , cdttemplateusagetable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable>())
    , cdttemplatecommontable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable>())
    , cdtiftemplatetable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable>())
    , cdtppptemplatetable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable>())
    , cdtppppeeripaddrpooltable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable>())
    , cdtethernettemplatetable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable>())
    , cdtsrvtemplatetable(std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable>())
{
    cdttemplatetable->parent = this;
    cdttemplatetargettable->parent = this;
    cdttemplateassociationtable->parent = this;
    cdttemplateusagetable->parent = this;
    cdttemplatecommontable->parent = this;
    cdtiftemplatetable->parent = this;
    cdtppptemplatetable->parent = this;
    cdtppppeeripaddrpooltable->parent = this;
    cdtethernettemplatetable->parent = this;
    cdtsrvtemplatetable->parent = this;

    yang_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::~CISCODYNAMICTEMPLATEMIB()
{
}

bool CISCODYNAMICTEMPLATEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cdttemplatetable !=  nullptr && cdttemplatetable->has_data())
	|| (cdttemplatetargettable !=  nullptr && cdttemplatetargettable->has_data())
	|| (cdttemplateassociationtable !=  nullptr && cdttemplateassociationtable->has_data())
	|| (cdttemplateusagetable !=  nullptr && cdttemplateusagetable->has_data())
	|| (cdttemplatecommontable !=  nullptr && cdttemplatecommontable->has_data())
	|| (cdtiftemplatetable !=  nullptr && cdtiftemplatetable->has_data())
	|| (cdtppptemplatetable !=  nullptr && cdtppptemplatetable->has_data())
	|| (cdtppppeeripaddrpooltable !=  nullptr && cdtppppeeripaddrpooltable->has_data())
	|| (cdtethernettemplatetable !=  nullptr && cdtethernettemplatetable->has_data())
	|| (cdtsrvtemplatetable !=  nullptr && cdtsrvtemplatetable->has_data());
}

bool CISCODYNAMICTEMPLATEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cdttemplatetable !=  nullptr && cdttemplatetable->has_operation())
	|| (cdttemplatetargettable !=  nullptr && cdttemplatetargettable->has_operation())
	|| (cdttemplateassociationtable !=  nullptr && cdttemplateassociationtable->has_operation())
	|| (cdttemplateusagetable !=  nullptr && cdttemplateusagetable->has_operation())
	|| (cdttemplatecommontable !=  nullptr && cdttemplatecommontable->has_operation())
	|| (cdtiftemplatetable !=  nullptr && cdtiftemplatetable->has_operation())
	|| (cdtppptemplatetable !=  nullptr && cdtppptemplatetable->has_operation())
	|| (cdtppppeeripaddrpooltable !=  nullptr && cdtppppeeripaddrpooltable->has_operation())
	|| (cdtethernettemplatetable !=  nullptr && cdtethernettemplatetable->has_operation())
	|| (cdtsrvtemplatetable !=  nullptr && cdtsrvtemplatetable->has_operation());
}

std::string CISCODYNAMICTEMPLATEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtTemplateTable")
    {
        if(cdttemplatetable == nullptr)
        {
            cdttemplatetable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateTable>();
        }
        return cdttemplatetable;
    }

    if(child_yang_name == "cdtTemplateTargetTable")
    {
        if(cdttemplatetargettable == nullptr)
        {
            cdttemplatetargettable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable>();
        }
        return cdttemplatetargettable;
    }

    if(child_yang_name == "cdtTemplateAssociationTable")
    {
        if(cdttemplateassociationtable == nullptr)
        {
            cdttemplateassociationtable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable>();
        }
        return cdttemplateassociationtable;
    }

    if(child_yang_name == "cdtTemplateUsageTable")
    {
        if(cdttemplateusagetable == nullptr)
        {
            cdttemplateusagetable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable>();
        }
        return cdttemplateusagetable;
    }

    if(child_yang_name == "cdtTemplateCommonTable")
    {
        if(cdttemplatecommontable == nullptr)
        {
            cdttemplatecommontable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable>();
        }
        return cdttemplatecommontable;
    }

    if(child_yang_name == "cdtIfTemplateTable")
    {
        if(cdtiftemplatetable == nullptr)
        {
            cdtiftemplatetable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable>();
        }
        return cdtiftemplatetable;
    }

    if(child_yang_name == "cdtPppTemplateTable")
    {
        if(cdtppptemplatetable == nullptr)
        {
            cdtppptemplatetable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable>();
        }
        return cdtppptemplatetable;
    }

    if(child_yang_name == "cdtPppPeerIpAddrPoolTable")
    {
        if(cdtppppeeripaddrpooltable == nullptr)
        {
            cdtppppeeripaddrpooltable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable>();
        }
        return cdtppppeeripaddrpooltable;
    }

    if(child_yang_name == "cdtEthernetTemplateTable")
    {
        if(cdtethernettemplatetable == nullptr)
        {
            cdtethernettemplatetable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable>();
        }
        return cdtethernettemplatetable;
    }

    if(child_yang_name == "cdtSrvTemplateTable")
    {
        if(cdtsrvtemplatetable == nullptr)
        {
            cdtsrvtemplatetable = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable>();
        }
        return cdtsrvtemplatetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cdttemplatetable != nullptr)
    {
        children["cdtTemplateTable"] = cdttemplatetable;
    }

    if(cdttemplatetargettable != nullptr)
    {
        children["cdtTemplateTargetTable"] = cdttemplatetargettable;
    }

    if(cdttemplateassociationtable != nullptr)
    {
        children["cdtTemplateAssociationTable"] = cdttemplateassociationtable;
    }

    if(cdttemplateusagetable != nullptr)
    {
        children["cdtTemplateUsageTable"] = cdttemplateusagetable;
    }

    if(cdttemplatecommontable != nullptr)
    {
        children["cdtTemplateCommonTable"] = cdttemplatecommontable;
    }

    if(cdtiftemplatetable != nullptr)
    {
        children["cdtIfTemplateTable"] = cdtiftemplatetable;
    }

    if(cdtppptemplatetable != nullptr)
    {
        children["cdtPppTemplateTable"] = cdtppptemplatetable;
    }

    if(cdtppppeeripaddrpooltable != nullptr)
    {
        children["cdtPppPeerIpAddrPoolTable"] = cdtppppeeripaddrpooltable;
    }

    if(cdtethernettemplatetable != nullptr)
    {
        children["cdtEthernetTemplateTable"] = cdtethernettemplatetable;
    }

    if(cdtsrvtemplatetable != nullptr)
    {
        children["cdtSrvTemplateTable"] = cdtsrvtemplatetable;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::clone_ptr() const
{
    return std::make_shared<CISCODYNAMICTEMPLATEMIB>();
}

std::string CISCODYNAMICTEMPLATEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCODYNAMICTEMPLATEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCODYNAMICTEMPLATEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCODYNAMICTEMPLATEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCODYNAMICTEMPLATEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateTable" || name == "cdtTemplateTargetTable" || name == "cdtTemplateAssociationTable" || name == "cdtTemplateUsageTable" || name == "cdtTemplateCommonTable" || name == "cdtIfTemplateTable" || name == "cdtPppTemplateTable" || name == "cdtPppPeerIpAddrPoolTable" || name == "cdtEthernetTemplateTable" || name == "cdtSrvTemplateTable")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateTable()
    :
    cdttemplateentry(this, {"cdttemplatename"})
{

    yang_name = "cdtTemplateTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::~CdtTemplateTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdttemplateentry.len(); index++)
    {
        if(cdttemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::has_operation() const
{
    for (std::size_t index=0; index<cdttemplateentry.len(); index++)
    {
        if(cdttemplateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtTemplateEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry>();
        c->parent = this;
        cdttemplateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdttemplateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::CdtTemplateEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdttemplatestatus{YType::enumeration, "cdtTemplateStatus"},
    cdttemplatestorage{YType::enumeration, "cdtTemplateStorage"},
    cdttemplatetype{YType::enumeration, "cdtTemplateType"},
    cdttemplatesrc{YType::enumeration, "cdtTemplateSrc"},
    cdttemplateusagecount{YType::uint32, "cdtTemplateUsageCount"}
{

    yang_name = "cdtTemplateEntry"; yang_parent_name = "cdtTemplateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::~CdtTemplateEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdttemplatestatus.is_set
	|| cdttemplatestorage.is_set
	|| cdttemplatetype.is_set
	|| cdttemplatesrc.is_set
	|| cdttemplateusagecount.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdttemplatestatus.yfilter)
	|| ydk::is_set(cdttemplatestorage.yfilter)
	|| ydk::is_set(cdttemplatetype.yfilter)
	|| ydk::is_set(cdttemplatesrc.yfilter)
	|| ydk::is_set(cdttemplateusagecount.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtTemplateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdttemplatestatus.is_set || is_set(cdttemplatestatus.yfilter)) leaf_name_data.push_back(cdttemplatestatus.get_name_leafdata());
    if (cdttemplatestorage.is_set || is_set(cdttemplatestorage.yfilter)) leaf_name_data.push_back(cdttemplatestorage.get_name_leafdata());
    if (cdttemplatetype.is_set || is_set(cdttemplatetype.yfilter)) leaf_name_data.push_back(cdttemplatetype.get_name_leafdata());
    if (cdttemplatesrc.is_set || is_set(cdttemplatesrc.yfilter)) leaf_name_data.push_back(cdttemplatesrc.get_name_leafdata());
    if (cdttemplateusagecount.is_set || is_set(cdttemplateusagecount.yfilter)) leaf_name_data.push_back(cdttemplateusagecount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateStatus")
    {
        cdttemplatestatus = value;
        cdttemplatestatus.value_namespace = name_space;
        cdttemplatestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateStorage")
    {
        cdttemplatestorage = value;
        cdttemplatestorage.value_namespace = name_space;
        cdttemplatestorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateType")
    {
        cdttemplatetype = value;
        cdttemplatetype.value_namespace = name_space;
        cdttemplatetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateSrc")
    {
        cdttemplatesrc = value;
        cdttemplatesrc.value_namespace = name_space;
        cdttemplatesrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateUsageCount")
    {
        cdttemplateusagecount = value;
        cdttemplateusagecount.value_namespace = name_space;
        cdttemplateusagecount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateStatus")
    {
        cdttemplatestatus.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateStorage")
    {
        cdttemplatestorage.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateType")
    {
        cdttemplatetype.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateSrc")
    {
        cdttemplatesrc.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateUsageCount")
    {
        cdttemplateusagecount.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtTemplateStatus" || name == "cdtTemplateStorage" || name == "cdtTemplateType" || name == "cdtTemplateSrc" || name == "cdtTemplateUsageCount")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetTable()
    :
    cdttemplatetargetentry(this, {"cdttemplatetargettype", "cdttemplatetargetid"})
{

    yang_name = "cdtTemplateTargetTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::~CdtTemplateTargetTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdttemplatetargetentry.len(); index++)
    {
        if(cdttemplatetargetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::has_operation() const
{
    for (std::size_t index=0; index<cdttemplatetargetentry.len(); index++)
    {
        if(cdttemplatetargetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateTargetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtTemplateTargetEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry>();
        c->parent = this;
        cdttemplatetargetentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdttemplatetargetentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateTargetEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::CdtTemplateTargetEntry()
    :
    cdttemplatetargettype{YType::enumeration, "cdtTemplateTargetType"},
    cdttemplatetargetid{YType::str, "cdtTemplateTargetId"},
    cdttemplatetargetstatus{YType::enumeration, "cdtTemplateTargetStatus"},
    cdttemplatetargetstorage{YType::enumeration, "cdtTemplateTargetStorage"}
{

    yang_name = "cdtTemplateTargetEntry"; yang_parent_name = "cdtTemplateTargetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::~CdtTemplateTargetEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatetargettype.is_set
	|| cdttemplatetargetid.is_set
	|| cdttemplatetargetstatus.is_set
	|| cdttemplatetargetstorage.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatetargettype.yfilter)
	|| ydk::is_set(cdttemplatetargetid.yfilter)
	|| ydk::is_set(cdttemplatetargetstatus.yfilter)
	|| ydk::is_set(cdttemplatetargetstorage.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtTemplateTargetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateTargetEntry";
    ADD_KEY_TOKEN(cdttemplatetargettype, "cdtTemplateTargetType");
    ADD_KEY_TOKEN(cdttemplatetargetid, "cdtTemplateTargetId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatetargettype.is_set || is_set(cdttemplatetargettype.yfilter)) leaf_name_data.push_back(cdttemplatetargettype.get_name_leafdata());
    if (cdttemplatetargetid.is_set || is_set(cdttemplatetargetid.yfilter)) leaf_name_data.push_back(cdttemplatetargetid.get_name_leafdata());
    if (cdttemplatetargetstatus.is_set || is_set(cdttemplatetargetstatus.yfilter)) leaf_name_data.push_back(cdttemplatetargetstatus.get_name_leafdata());
    if (cdttemplatetargetstorage.is_set || is_set(cdttemplatetargetstorage.yfilter)) leaf_name_data.push_back(cdttemplatetargetstorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateTargetType")
    {
        cdttemplatetargettype = value;
        cdttemplatetargettype.value_namespace = name_space;
        cdttemplatetargettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateTargetId")
    {
        cdttemplatetargetid = value;
        cdttemplatetargetid.value_namespace = name_space;
        cdttemplatetargetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateTargetStatus")
    {
        cdttemplatetargetstatus = value;
        cdttemplatetargetstatus.value_namespace = name_space;
        cdttemplatetargetstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateTargetStorage")
    {
        cdttemplatetargetstorage = value;
        cdttemplatetargetstorage.value_namespace = name_space;
        cdttemplatetargetstorage.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateTargetType")
    {
        cdttemplatetargettype.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateTargetId")
    {
        cdttemplatetargetid.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateTargetStatus")
    {
        cdttemplatetargetstatus.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateTargetStorage")
    {
        cdttemplatetargetstorage.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateTargetType" || name == "cdtTemplateTargetId" || name == "cdtTemplateTargetStatus" || name == "cdtTemplateTargetStorage")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationTable()
    :
    cdttemplateassociationentry(this, {"cdttemplatetargettype", "cdttemplatetargetid", "cdttemplateassociationname"})
{

    yang_name = "cdtTemplateAssociationTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::~CdtTemplateAssociationTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdttemplateassociationentry.len(); index++)
    {
        if(cdttemplateassociationentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::has_operation() const
{
    for (std::size_t index=0; index<cdttemplateassociationentry.len(); index++)
    {
        if(cdttemplateassociationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateAssociationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtTemplateAssociationEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry>();
        c->parent = this;
        cdttemplateassociationentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdttemplateassociationentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateAssociationEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::CdtTemplateAssociationEntry()
    :
    cdttemplatetargettype{YType::enumeration, "cdtTemplateTargetType"},
    cdttemplatetargetid{YType::str, "cdtTemplateTargetId"},
    cdttemplateassociationname{YType::str, "cdtTemplateAssociationName"},
    cdttemplateassociationprecedence{YType::uint32, "cdtTemplateAssociationPrecedence"}
{

    yang_name = "cdtTemplateAssociationEntry"; yang_parent_name = "cdtTemplateAssociationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::~CdtTemplateAssociationEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatetargettype.is_set
	|| cdttemplatetargetid.is_set
	|| cdttemplateassociationname.is_set
	|| cdttemplateassociationprecedence.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatetargettype.yfilter)
	|| ydk::is_set(cdttemplatetargetid.yfilter)
	|| ydk::is_set(cdttemplateassociationname.yfilter)
	|| ydk::is_set(cdttemplateassociationprecedence.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtTemplateAssociationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateAssociationEntry";
    ADD_KEY_TOKEN(cdttemplatetargettype, "cdtTemplateTargetType");
    ADD_KEY_TOKEN(cdttemplatetargetid, "cdtTemplateTargetId");
    ADD_KEY_TOKEN(cdttemplateassociationname, "cdtTemplateAssociationName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatetargettype.is_set || is_set(cdttemplatetargettype.yfilter)) leaf_name_data.push_back(cdttemplatetargettype.get_name_leafdata());
    if (cdttemplatetargetid.is_set || is_set(cdttemplatetargetid.yfilter)) leaf_name_data.push_back(cdttemplatetargetid.get_name_leafdata());
    if (cdttemplateassociationname.is_set || is_set(cdttemplateassociationname.yfilter)) leaf_name_data.push_back(cdttemplateassociationname.get_name_leafdata());
    if (cdttemplateassociationprecedence.is_set || is_set(cdttemplateassociationprecedence.yfilter)) leaf_name_data.push_back(cdttemplateassociationprecedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateTargetType")
    {
        cdttemplatetargettype = value;
        cdttemplatetargettype.value_namespace = name_space;
        cdttemplatetargettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateTargetId")
    {
        cdttemplatetargetid = value;
        cdttemplatetargetid.value_namespace = name_space;
        cdttemplatetargetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateAssociationName")
    {
        cdttemplateassociationname = value;
        cdttemplateassociationname.value_namespace = name_space;
        cdttemplateassociationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateAssociationPrecedence")
    {
        cdttemplateassociationprecedence = value;
        cdttemplateassociationprecedence.value_namespace = name_space;
        cdttemplateassociationprecedence.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateTargetType")
    {
        cdttemplatetargettype.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateTargetId")
    {
        cdttemplatetargetid.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateAssociationName")
    {
        cdttemplateassociationname.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateAssociationPrecedence")
    {
        cdttemplateassociationprecedence.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateTargetType" || name == "cdtTemplateTargetId" || name == "cdtTemplateAssociationName" || name == "cdtTemplateAssociationPrecedence")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageTable()
    :
    cdttemplateusageentry(this, {"cdttemplatename", "cdttemplateusagetargettype", "cdttemplateusagetargetid"})
{

    yang_name = "cdtTemplateUsageTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::~CdtTemplateUsageTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdttemplateusageentry.len(); index++)
    {
        if(cdttemplateusageentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::has_operation() const
{
    for (std::size_t index=0; index<cdttemplateusageentry.len(); index++)
    {
        if(cdttemplateusageentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateUsageTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtTemplateUsageEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry>();
        c->parent = this;
        cdttemplateusageentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdttemplateusageentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateUsageEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::CdtTemplateUsageEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdttemplateusagetargettype{YType::enumeration, "cdtTemplateUsageTargetType"},
    cdttemplateusagetargetid{YType::str, "cdtTemplateUsageTargetId"}
{

    yang_name = "cdtTemplateUsageEntry"; yang_parent_name = "cdtTemplateUsageTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::~CdtTemplateUsageEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdttemplateusagetargettype.is_set
	|| cdttemplateusagetargetid.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdttemplateusagetargettype.yfilter)
	|| ydk::is_set(cdttemplateusagetargetid.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtTemplateUsageTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateUsageEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    ADD_KEY_TOKEN(cdttemplateusagetargettype, "cdtTemplateUsageTargetType");
    ADD_KEY_TOKEN(cdttemplateusagetargetid, "cdtTemplateUsageTargetId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdttemplateusagetargettype.is_set || is_set(cdttemplateusagetargettype.yfilter)) leaf_name_data.push_back(cdttemplateusagetargettype.get_name_leafdata());
    if (cdttemplateusagetargetid.is_set || is_set(cdttemplateusagetargetid.yfilter)) leaf_name_data.push_back(cdttemplateusagetargetid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateUsageTargetType")
    {
        cdttemplateusagetargettype = value;
        cdttemplateusagetargettype.value_namespace = name_space;
        cdttemplateusagetargettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtTemplateUsageTargetId")
    {
        cdttemplateusagetargetid = value;
        cdttemplateusagetargetid.value_namespace = name_space;
        cdttemplateusagetargetid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateUsageTargetType")
    {
        cdttemplateusagetargettype.yfilter = yfilter;
    }
    if(value_path == "cdtTemplateUsageTargetId")
    {
        cdttemplateusagetargetid.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtTemplateUsageTargetType" || name == "cdtTemplateUsageTargetId")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonTable()
    :
    cdttemplatecommonentry(this, {"cdttemplatename"})
{

    yang_name = "cdtTemplateCommonTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::~CdtTemplateCommonTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdttemplatecommonentry.len(); index++)
    {
        if(cdttemplatecommonentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::has_operation() const
{
    for (std::size_t index=0; index<cdttemplatecommonentry.len(); index++)
    {
        if(cdttemplatecommonentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateCommonTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtTemplateCommonEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry>();
        c->parent = this;
        cdttemplatecommonentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdttemplatecommonentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateCommonEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::CdtTemplateCommonEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdtcommonvalid{YType::bits, "cdtCommonValid"},
    cdtcommondescr{YType::str, "cdtCommonDescr"},
    cdtcommonkeepaliveint{YType::uint32, "cdtCommonKeepaliveInt"},
    cdtcommonkeepaliveretries{YType::uint32, "cdtCommonKeepaliveRetries"},
    cdtcommonvrf{YType::str, "cdtCommonVrf"},
    cdtcommonaddrpool{YType::str, "cdtCommonAddrPool"},
    cdtcommonipv4accessgroup{YType::str, "cdtCommonIpv4AccessGroup"},
    cdtcommonipv4unreachables{YType::boolean, "cdtCommonIpv4Unreachables"},
    cdtcommonipv6accessgroup{YType::str, "cdtCommonIpv6AccessGroup"},
    cdtcommonipv6unreachables{YType::boolean, "cdtCommonIpv6Unreachables"},
    cdtcommonsrvsubcontrol{YType::str, "cdtCommonSrvSubControl"},
    cdtcommonsrvredirect{YType::str, "cdtCommonSrvRedirect"},
    cdtcommonsrvacct{YType::str, "cdtCommonSrvAcct"},
    cdtcommonsrvqos{YType::str, "cdtCommonSrvQos"},
    cdtcommonsrvnetflow{YType::str, "cdtCommonSrvNetflow"}
{

    yang_name = "cdtTemplateCommonEntry"; yang_parent_name = "cdtTemplateCommonTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::~CdtTemplateCommonEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdtcommonvalid.is_set
	|| cdtcommondescr.is_set
	|| cdtcommonkeepaliveint.is_set
	|| cdtcommonkeepaliveretries.is_set
	|| cdtcommonvrf.is_set
	|| cdtcommonaddrpool.is_set
	|| cdtcommonipv4accessgroup.is_set
	|| cdtcommonipv4unreachables.is_set
	|| cdtcommonipv6accessgroup.is_set
	|| cdtcommonipv6unreachables.is_set
	|| cdtcommonsrvsubcontrol.is_set
	|| cdtcommonsrvredirect.is_set
	|| cdtcommonsrvacct.is_set
	|| cdtcommonsrvqos.is_set
	|| cdtcommonsrvnetflow.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdtcommonvalid.yfilter)
	|| ydk::is_set(cdtcommondescr.yfilter)
	|| ydk::is_set(cdtcommonkeepaliveint.yfilter)
	|| ydk::is_set(cdtcommonkeepaliveretries.yfilter)
	|| ydk::is_set(cdtcommonvrf.yfilter)
	|| ydk::is_set(cdtcommonaddrpool.yfilter)
	|| ydk::is_set(cdtcommonipv4accessgroup.yfilter)
	|| ydk::is_set(cdtcommonipv4unreachables.yfilter)
	|| ydk::is_set(cdtcommonipv6accessgroup.yfilter)
	|| ydk::is_set(cdtcommonipv6unreachables.yfilter)
	|| ydk::is_set(cdtcommonsrvsubcontrol.yfilter)
	|| ydk::is_set(cdtcommonsrvredirect.yfilter)
	|| ydk::is_set(cdtcommonsrvacct.yfilter)
	|| ydk::is_set(cdtcommonsrvqos.yfilter)
	|| ydk::is_set(cdtcommonsrvnetflow.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtTemplateCommonTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtTemplateCommonEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdtcommonvalid.is_set || is_set(cdtcommonvalid.yfilter)) leaf_name_data.push_back(cdtcommonvalid.get_name_leafdata());
    if (cdtcommondescr.is_set || is_set(cdtcommondescr.yfilter)) leaf_name_data.push_back(cdtcommondescr.get_name_leafdata());
    if (cdtcommonkeepaliveint.is_set || is_set(cdtcommonkeepaliveint.yfilter)) leaf_name_data.push_back(cdtcommonkeepaliveint.get_name_leafdata());
    if (cdtcommonkeepaliveretries.is_set || is_set(cdtcommonkeepaliveretries.yfilter)) leaf_name_data.push_back(cdtcommonkeepaliveretries.get_name_leafdata());
    if (cdtcommonvrf.is_set || is_set(cdtcommonvrf.yfilter)) leaf_name_data.push_back(cdtcommonvrf.get_name_leafdata());
    if (cdtcommonaddrpool.is_set || is_set(cdtcommonaddrpool.yfilter)) leaf_name_data.push_back(cdtcommonaddrpool.get_name_leafdata());
    if (cdtcommonipv4accessgroup.is_set || is_set(cdtcommonipv4accessgroup.yfilter)) leaf_name_data.push_back(cdtcommonipv4accessgroup.get_name_leafdata());
    if (cdtcommonipv4unreachables.is_set || is_set(cdtcommonipv4unreachables.yfilter)) leaf_name_data.push_back(cdtcommonipv4unreachables.get_name_leafdata());
    if (cdtcommonipv6accessgroup.is_set || is_set(cdtcommonipv6accessgroup.yfilter)) leaf_name_data.push_back(cdtcommonipv6accessgroup.get_name_leafdata());
    if (cdtcommonipv6unreachables.is_set || is_set(cdtcommonipv6unreachables.yfilter)) leaf_name_data.push_back(cdtcommonipv6unreachables.get_name_leafdata());
    if (cdtcommonsrvsubcontrol.is_set || is_set(cdtcommonsrvsubcontrol.yfilter)) leaf_name_data.push_back(cdtcommonsrvsubcontrol.get_name_leafdata());
    if (cdtcommonsrvredirect.is_set || is_set(cdtcommonsrvredirect.yfilter)) leaf_name_data.push_back(cdtcommonsrvredirect.get_name_leafdata());
    if (cdtcommonsrvacct.is_set || is_set(cdtcommonsrvacct.yfilter)) leaf_name_data.push_back(cdtcommonsrvacct.get_name_leafdata());
    if (cdtcommonsrvqos.is_set || is_set(cdtcommonsrvqos.yfilter)) leaf_name_data.push_back(cdtcommonsrvqos.get_name_leafdata());
    if (cdtcommonsrvnetflow.is_set || is_set(cdtcommonsrvnetflow.yfilter)) leaf_name_data.push_back(cdtcommonsrvnetflow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonValid")
    {
        cdtcommonvalid[value] = true;
    }
    if(value_path == "cdtCommonDescr")
    {
        cdtcommondescr = value;
        cdtcommondescr.value_namespace = name_space;
        cdtcommondescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonKeepaliveInt")
    {
        cdtcommonkeepaliveint = value;
        cdtcommonkeepaliveint.value_namespace = name_space;
        cdtcommonkeepaliveint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonKeepaliveRetries")
    {
        cdtcommonkeepaliveretries = value;
        cdtcommonkeepaliveretries.value_namespace = name_space;
        cdtcommonkeepaliveretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonVrf")
    {
        cdtcommonvrf = value;
        cdtcommonvrf.value_namespace = name_space;
        cdtcommonvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonAddrPool")
    {
        cdtcommonaddrpool = value;
        cdtcommonaddrpool.value_namespace = name_space;
        cdtcommonaddrpool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonIpv4AccessGroup")
    {
        cdtcommonipv4accessgroup = value;
        cdtcommonipv4accessgroup.value_namespace = name_space;
        cdtcommonipv4accessgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonIpv4Unreachables")
    {
        cdtcommonipv4unreachables = value;
        cdtcommonipv4unreachables.value_namespace = name_space;
        cdtcommonipv4unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonIpv6AccessGroup")
    {
        cdtcommonipv6accessgroup = value;
        cdtcommonipv6accessgroup.value_namespace = name_space;
        cdtcommonipv6accessgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonIpv6Unreachables")
    {
        cdtcommonipv6unreachables = value;
        cdtcommonipv6unreachables.value_namespace = name_space;
        cdtcommonipv6unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonSrvSubControl")
    {
        cdtcommonsrvsubcontrol = value;
        cdtcommonsrvsubcontrol.value_namespace = name_space;
        cdtcommonsrvsubcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonSrvRedirect")
    {
        cdtcommonsrvredirect = value;
        cdtcommonsrvredirect.value_namespace = name_space;
        cdtcommonsrvredirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonSrvAcct")
    {
        cdtcommonsrvacct = value;
        cdtcommonsrvacct.value_namespace = name_space;
        cdtcommonsrvacct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonSrvQos")
    {
        cdtcommonsrvqos = value;
        cdtcommonsrvqos.value_namespace = name_space;
        cdtcommonsrvqos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtCommonSrvNetflow")
    {
        cdtcommonsrvnetflow = value;
        cdtcommonsrvnetflow.value_namespace = name_space;
        cdtcommonsrvnetflow.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtCommonValid")
    {
        cdtcommonvalid.yfilter = yfilter;
    }
    if(value_path == "cdtCommonDescr")
    {
        cdtcommondescr.yfilter = yfilter;
    }
    if(value_path == "cdtCommonKeepaliveInt")
    {
        cdtcommonkeepaliveint.yfilter = yfilter;
    }
    if(value_path == "cdtCommonKeepaliveRetries")
    {
        cdtcommonkeepaliveretries.yfilter = yfilter;
    }
    if(value_path == "cdtCommonVrf")
    {
        cdtcommonvrf.yfilter = yfilter;
    }
    if(value_path == "cdtCommonAddrPool")
    {
        cdtcommonaddrpool.yfilter = yfilter;
    }
    if(value_path == "cdtCommonIpv4AccessGroup")
    {
        cdtcommonipv4accessgroup.yfilter = yfilter;
    }
    if(value_path == "cdtCommonIpv4Unreachables")
    {
        cdtcommonipv4unreachables.yfilter = yfilter;
    }
    if(value_path == "cdtCommonIpv6AccessGroup")
    {
        cdtcommonipv6accessgroup.yfilter = yfilter;
    }
    if(value_path == "cdtCommonIpv6Unreachables")
    {
        cdtcommonipv6unreachables.yfilter = yfilter;
    }
    if(value_path == "cdtCommonSrvSubControl")
    {
        cdtcommonsrvsubcontrol.yfilter = yfilter;
    }
    if(value_path == "cdtCommonSrvRedirect")
    {
        cdtcommonsrvredirect.yfilter = yfilter;
    }
    if(value_path == "cdtCommonSrvAcct")
    {
        cdtcommonsrvacct.yfilter = yfilter;
    }
    if(value_path == "cdtCommonSrvQos")
    {
        cdtcommonsrvqos.yfilter = yfilter;
    }
    if(value_path == "cdtCommonSrvNetflow")
    {
        cdtcommonsrvnetflow.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtCommonValid" || name == "cdtCommonDescr" || name == "cdtCommonKeepaliveInt" || name == "cdtCommonKeepaliveRetries" || name == "cdtCommonVrf" || name == "cdtCommonAddrPool" || name == "cdtCommonIpv4AccessGroup" || name == "cdtCommonIpv4Unreachables" || name == "cdtCommonIpv6AccessGroup" || name == "cdtCommonIpv6Unreachables" || name == "cdtCommonSrvSubControl" || name == "cdtCommonSrvRedirect" || name == "cdtCommonSrvAcct" || name == "cdtCommonSrvQos" || name == "cdtCommonSrvNetflow")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateTable()
    :
    cdtiftemplateentry(this, {"cdttemplatename"})
{

    yang_name = "cdtIfTemplateTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::~CdtIfTemplateTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdtiftemplateentry.len(); index++)
    {
        if(cdtiftemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::has_operation() const
{
    for (std::size_t index=0; index<cdtiftemplateentry.len(); index++)
    {
        if(cdtiftemplateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtIfTemplateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtIfTemplateEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry>();
        c->parent = this;
        cdtiftemplateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdtiftemplateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtIfTemplateEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfTemplateEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdtifvalid{YType::bits, "cdtIfValid"},
    cdtifmtu{YType::uint32, "cdtIfMtu"},
    cdtifcdpenable{YType::boolean, "cdtIfCdpEnable"},
    cdtifflowmonitor{YType::str, "cdtIfFlowMonitor"},
    cdtifipv4unnumbered{YType::int32, "cdtIfIpv4Unnumbered"},
    cdtifipv4subenable{YType::boolean, "cdtIfIpv4SubEnable"},
    cdtifipv4mtu{YType::uint32, "cdtIfIpv4Mtu"},
    cdtifipv4tcpmssadjust{YType::uint32, "cdtIfIpv4TcpMssAdjust"},
    cdtifipv4verifyunirpf{YType::enumeration, "cdtIfIpv4VerifyUniRpf"},
    cdtifipv4verifyunirpfacl{YType::str, "cdtIfIpv4VerifyUniRpfAcl"},
    cdtifipv4verifyunirpfopts{YType::bits, "cdtIfIpv4VerifyUniRpfOpts"},
    cdtifipv6enable{YType::boolean, "cdtIfIpv6Enable"},
    cdtifipv6subenable{YType::boolean, "cdtIfIpv6SubEnable"},
    cdtifipv6tcpmssadjust{YType::uint32, "cdtIfIpv6TcpMssAdjust"},
    cdtifipv6verifyunirpf{YType::enumeration, "cdtIfIpv6VerifyUniRpf"},
    cdtifipv6verifyunirpfacl{YType::str, "cdtIfIpv6VerifyUniRpfAcl"},
    cdtifipv6verifyunirpfopts{YType::bits, "cdtIfIpv6VerifyUniRpfOpts"},
    cdtifipv6ndprefix{YType::str, "cdtIfIpv6NdPrefix"},
    cdtifipv6ndprefixlength{YType::uint32, "cdtIfIpv6NdPrefixLength"},
    cdtifipv6ndvalidlife{YType::uint32, "cdtIfIpv6NdValidLife"},
    cdtifipv6ndpreferredlife{YType::uint32, "cdtIfIpv6NdPreferredLife"},
    cdtifipv6ndopts{YType::bits, "cdtIfIpv6NdOpts"},
    cdtifipv6nddadattempts{YType::uint32, "cdtIfIpv6NdDadAttempts"},
    cdtifipv6ndnsinterval{YType::uint32, "cdtIfIpv6NdNsInterval"},
    cdtifipv6ndreachabletime{YType::uint32, "cdtIfIpv6NdReachableTime"},
    cdtifipv6ndraintervalunits{YType::enumeration, "cdtIfIpv6NdRaIntervalUnits"},
    cdtifipv6ndraintervalmax{YType::uint32, "cdtIfIpv6NdRaIntervalMax"},
    cdtifipv6ndraintervalmin{YType::uint32, "cdtIfIpv6NdRaIntervalMin"},
    cdtifipv6ndralife{YType::uint32, "cdtIfIpv6NdRaLife"},
    cdtifipv6ndrouterpreference{YType::enumeration, "cdtIfIpv6NdRouterPreference"}
{

    yang_name = "cdtIfTemplateEntry"; yang_parent_name = "cdtIfTemplateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::~CdtIfTemplateEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdtifvalid.is_set
	|| cdtifmtu.is_set
	|| cdtifcdpenable.is_set
	|| cdtifflowmonitor.is_set
	|| cdtifipv4unnumbered.is_set
	|| cdtifipv4subenable.is_set
	|| cdtifipv4mtu.is_set
	|| cdtifipv4tcpmssadjust.is_set
	|| cdtifipv4verifyunirpf.is_set
	|| cdtifipv4verifyunirpfacl.is_set
	|| cdtifipv4verifyunirpfopts.is_set
	|| cdtifipv6enable.is_set
	|| cdtifipv6subenable.is_set
	|| cdtifipv6tcpmssadjust.is_set
	|| cdtifipv6verifyunirpf.is_set
	|| cdtifipv6verifyunirpfacl.is_set
	|| cdtifipv6verifyunirpfopts.is_set
	|| cdtifipv6ndprefix.is_set
	|| cdtifipv6ndprefixlength.is_set
	|| cdtifipv6ndvalidlife.is_set
	|| cdtifipv6ndpreferredlife.is_set
	|| cdtifipv6ndopts.is_set
	|| cdtifipv6nddadattempts.is_set
	|| cdtifipv6ndnsinterval.is_set
	|| cdtifipv6ndreachabletime.is_set
	|| cdtifipv6ndraintervalunits.is_set
	|| cdtifipv6ndraintervalmax.is_set
	|| cdtifipv6ndraintervalmin.is_set
	|| cdtifipv6ndralife.is_set
	|| cdtifipv6ndrouterpreference.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdtifvalid.yfilter)
	|| ydk::is_set(cdtifmtu.yfilter)
	|| ydk::is_set(cdtifcdpenable.yfilter)
	|| ydk::is_set(cdtifflowmonitor.yfilter)
	|| ydk::is_set(cdtifipv4unnumbered.yfilter)
	|| ydk::is_set(cdtifipv4subenable.yfilter)
	|| ydk::is_set(cdtifipv4mtu.yfilter)
	|| ydk::is_set(cdtifipv4tcpmssadjust.yfilter)
	|| ydk::is_set(cdtifipv4verifyunirpf.yfilter)
	|| ydk::is_set(cdtifipv4verifyunirpfacl.yfilter)
	|| ydk::is_set(cdtifipv4verifyunirpfopts.yfilter)
	|| ydk::is_set(cdtifipv6enable.yfilter)
	|| ydk::is_set(cdtifipv6subenable.yfilter)
	|| ydk::is_set(cdtifipv6tcpmssadjust.yfilter)
	|| ydk::is_set(cdtifipv6verifyunirpf.yfilter)
	|| ydk::is_set(cdtifipv6verifyunirpfacl.yfilter)
	|| ydk::is_set(cdtifipv6verifyunirpfopts.yfilter)
	|| ydk::is_set(cdtifipv6ndprefix.yfilter)
	|| ydk::is_set(cdtifipv6ndprefixlength.yfilter)
	|| ydk::is_set(cdtifipv6ndvalidlife.yfilter)
	|| ydk::is_set(cdtifipv6ndpreferredlife.yfilter)
	|| ydk::is_set(cdtifipv6ndopts.yfilter)
	|| ydk::is_set(cdtifipv6nddadattempts.yfilter)
	|| ydk::is_set(cdtifipv6ndnsinterval.yfilter)
	|| ydk::is_set(cdtifipv6ndreachabletime.yfilter)
	|| ydk::is_set(cdtifipv6ndraintervalunits.yfilter)
	|| ydk::is_set(cdtifipv6ndraintervalmax.yfilter)
	|| ydk::is_set(cdtifipv6ndraintervalmin.yfilter)
	|| ydk::is_set(cdtifipv6ndralife.yfilter)
	|| ydk::is_set(cdtifipv6ndrouterpreference.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtIfTemplateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtIfTemplateEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdtifvalid.is_set || is_set(cdtifvalid.yfilter)) leaf_name_data.push_back(cdtifvalid.get_name_leafdata());
    if (cdtifmtu.is_set || is_set(cdtifmtu.yfilter)) leaf_name_data.push_back(cdtifmtu.get_name_leafdata());
    if (cdtifcdpenable.is_set || is_set(cdtifcdpenable.yfilter)) leaf_name_data.push_back(cdtifcdpenable.get_name_leafdata());
    if (cdtifflowmonitor.is_set || is_set(cdtifflowmonitor.yfilter)) leaf_name_data.push_back(cdtifflowmonitor.get_name_leafdata());
    if (cdtifipv4unnumbered.is_set || is_set(cdtifipv4unnumbered.yfilter)) leaf_name_data.push_back(cdtifipv4unnumbered.get_name_leafdata());
    if (cdtifipv4subenable.is_set || is_set(cdtifipv4subenable.yfilter)) leaf_name_data.push_back(cdtifipv4subenable.get_name_leafdata());
    if (cdtifipv4mtu.is_set || is_set(cdtifipv4mtu.yfilter)) leaf_name_data.push_back(cdtifipv4mtu.get_name_leafdata());
    if (cdtifipv4tcpmssadjust.is_set || is_set(cdtifipv4tcpmssadjust.yfilter)) leaf_name_data.push_back(cdtifipv4tcpmssadjust.get_name_leafdata());
    if (cdtifipv4verifyunirpf.is_set || is_set(cdtifipv4verifyunirpf.yfilter)) leaf_name_data.push_back(cdtifipv4verifyunirpf.get_name_leafdata());
    if (cdtifipv4verifyunirpfacl.is_set || is_set(cdtifipv4verifyunirpfacl.yfilter)) leaf_name_data.push_back(cdtifipv4verifyunirpfacl.get_name_leafdata());
    if (cdtifipv4verifyunirpfopts.is_set || is_set(cdtifipv4verifyunirpfopts.yfilter)) leaf_name_data.push_back(cdtifipv4verifyunirpfopts.get_name_leafdata());
    if (cdtifipv6enable.is_set || is_set(cdtifipv6enable.yfilter)) leaf_name_data.push_back(cdtifipv6enable.get_name_leafdata());
    if (cdtifipv6subenable.is_set || is_set(cdtifipv6subenable.yfilter)) leaf_name_data.push_back(cdtifipv6subenable.get_name_leafdata());
    if (cdtifipv6tcpmssadjust.is_set || is_set(cdtifipv6tcpmssadjust.yfilter)) leaf_name_data.push_back(cdtifipv6tcpmssadjust.get_name_leafdata());
    if (cdtifipv6verifyunirpf.is_set || is_set(cdtifipv6verifyunirpf.yfilter)) leaf_name_data.push_back(cdtifipv6verifyunirpf.get_name_leafdata());
    if (cdtifipv6verifyunirpfacl.is_set || is_set(cdtifipv6verifyunirpfacl.yfilter)) leaf_name_data.push_back(cdtifipv6verifyunirpfacl.get_name_leafdata());
    if (cdtifipv6verifyunirpfopts.is_set || is_set(cdtifipv6verifyunirpfopts.yfilter)) leaf_name_data.push_back(cdtifipv6verifyunirpfopts.get_name_leafdata());
    if (cdtifipv6ndprefix.is_set || is_set(cdtifipv6ndprefix.yfilter)) leaf_name_data.push_back(cdtifipv6ndprefix.get_name_leafdata());
    if (cdtifipv6ndprefixlength.is_set || is_set(cdtifipv6ndprefixlength.yfilter)) leaf_name_data.push_back(cdtifipv6ndprefixlength.get_name_leafdata());
    if (cdtifipv6ndvalidlife.is_set || is_set(cdtifipv6ndvalidlife.yfilter)) leaf_name_data.push_back(cdtifipv6ndvalidlife.get_name_leafdata());
    if (cdtifipv6ndpreferredlife.is_set || is_set(cdtifipv6ndpreferredlife.yfilter)) leaf_name_data.push_back(cdtifipv6ndpreferredlife.get_name_leafdata());
    if (cdtifipv6ndopts.is_set || is_set(cdtifipv6ndopts.yfilter)) leaf_name_data.push_back(cdtifipv6ndopts.get_name_leafdata());
    if (cdtifipv6nddadattempts.is_set || is_set(cdtifipv6nddadattempts.yfilter)) leaf_name_data.push_back(cdtifipv6nddadattempts.get_name_leafdata());
    if (cdtifipv6ndnsinterval.is_set || is_set(cdtifipv6ndnsinterval.yfilter)) leaf_name_data.push_back(cdtifipv6ndnsinterval.get_name_leafdata());
    if (cdtifipv6ndreachabletime.is_set || is_set(cdtifipv6ndreachabletime.yfilter)) leaf_name_data.push_back(cdtifipv6ndreachabletime.get_name_leafdata());
    if (cdtifipv6ndraintervalunits.is_set || is_set(cdtifipv6ndraintervalunits.yfilter)) leaf_name_data.push_back(cdtifipv6ndraintervalunits.get_name_leafdata());
    if (cdtifipv6ndraintervalmax.is_set || is_set(cdtifipv6ndraintervalmax.yfilter)) leaf_name_data.push_back(cdtifipv6ndraintervalmax.get_name_leafdata());
    if (cdtifipv6ndraintervalmin.is_set || is_set(cdtifipv6ndraintervalmin.yfilter)) leaf_name_data.push_back(cdtifipv6ndraintervalmin.get_name_leafdata());
    if (cdtifipv6ndralife.is_set || is_set(cdtifipv6ndralife.yfilter)) leaf_name_data.push_back(cdtifipv6ndralife.get_name_leafdata());
    if (cdtifipv6ndrouterpreference.is_set || is_set(cdtifipv6ndrouterpreference.yfilter)) leaf_name_data.push_back(cdtifipv6ndrouterpreference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfValid")
    {
        cdtifvalid[value] = true;
    }
    if(value_path == "cdtIfMtu")
    {
        cdtifmtu = value;
        cdtifmtu.value_namespace = name_space;
        cdtifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfCdpEnable")
    {
        cdtifcdpenable = value;
        cdtifcdpenable.value_namespace = name_space;
        cdtifcdpenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfFlowMonitor")
    {
        cdtifflowmonitor = value;
        cdtifflowmonitor.value_namespace = name_space;
        cdtifflowmonitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv4Unnumbered")
    {
        cdtifipv4unnumbered = value;
        cdtifipv4unnumbered.value_namespace = name_space;
        cdtifipv4unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv4SubEnable")
    {
        cdtifipv4subenable = value;
        cdtifipv4subenable.value_namespace = name_space;
        cdtifipv4subenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv4Mtu")
    {
        cdtifipv4mtu = value;
        cdtifipv4mtu.value_namespace = name_space;
        cdtifipv4mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv4TcpMssAdjust")
    {
        cdtifipv4tcpmssadjust = value;
        cdtifipv4tcpmssadjust.value_namespace = name_space;
        cdtifipv4tcpmssadjust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv4VerifyUniRpf")
    {
        cdtifipv4verifyunirpf = value;
        cdtifipv4verifyunirpf.value_namespace = name_space;
        cdtifipv4verifyunirpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv4VerifyUniRpfAcl")
    {
        cdtifipv4verifyunirpfacl = value;
        cdtifipv4verifyunirpfacl.value_namespace = name_space;
        cdtifipv4verifyunirpfacl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv4VerifyUniRpfOpts")
    {
        cdtifipv4verifyunirpfopts[value] = true;
    }
    if(value_path == "cdtIfIpv6Enable")
    {
        cdtifipv6enable = value;
        cdtifipv6enable.value_namespace = name_space;
        cdtifipv6enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6SubEnable")
    {
        cdtifipv6subenable = value;
        cdtifipv6subenable.value_namespace = name_space;
        cdtifipv6subenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6TcpMssAdjust")
    {
        cdtifipv6tcpmssadjust = value;
        cdtifipv6tcpmssadjust.value_namespace = name_space;
        cdtifipv6tcpmssadjust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6VerifyUniRpf")
    {
        cdtifipv6verifyunirpf = value;
        cdtifipv6verifyunirpf.value_namespace = name_space;
        cdtifipv6verifyunirpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6VerifyUniRpfAcl")
    {
        cdtifipv6verifyunirpfacl = value;
        cdtifipv6verifyunirpfacl.value_namespace = name_space;
        cdtifipv6verifyunirpfacl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6VerifyUniRpfOpts")
    {
        cdtifipv6verifyunirpfopts[value] = true;
    }
    if(value_path == "cdtIfIpv6NdPrefix")
    {
        cdtifipv6ndprefix = value;
        cdtifipv6ndprefix.value_namespace = name_space;
        cdtifipv6ndprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdPrefixLength")
    {
        cdtifipv6ndprefixlength = value;
        cdtifipv6ndprefixlength.value_namespace = name_space;
        cdtifipv6ndprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdValidLife")
    {
        cdtifipv6ndvalidlife = value;
        cdtifipv6ndvalidlife.value_namespace = name_space;
        cdtifipv6ndvalidlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdPreferredLife")
    {
        cdtifipv6ndpreferredlife = value;
        cdtifipv6ndpreferredlife.value_namespace = name_space;
        cdtifipv6ndpreferredlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdOpts")
    {
        cdtifipv6ndopts[value] = true;
    }
    if(value_path == "cdtIfIpv6NdDadAttempts")
    {
        cdtifipv6nddadattempts = value;
        cdtifipv6nddadattempts.value_namespace = name_space;
        cdtifipv6nddadattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdNsInterval")
    {
        cdtifipv6ndnsinterval = value;
        cdtifipv6ndnsinterval.value_namespace = name_space;
        cdtifipv6ndnsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdReachableTime")
    {
        cdtifipv6ndreachabletime = value;
        cdtifipv6ndreachabletime.value_namespace = name_space;
        cdtifipv6ndreachabletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdRaIntervalUnits")
    {
        cdtifipv6ndraintervalunits = value;
        cdtifipv6ndraintervalunits.value_namespace = name_space;
        cdtifipv6ndraintervalunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdRaIntervalMax")
    {
        cdtifipv6ndraintervalmax = value;
        cdtifipv6ndraintervalmax.value_namespace = name_space;
        cdtifipv6ndraintervalmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdRaIntervalMin")
    {
        cdtifipv6ndraintervalmin = value;
        cdtifipv6ndraintervalmin.value_namespace = name_space;
        cdtifipv6ndraintervalmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdRaLife")
    {
        cdtifipv6ndralife = value;
        cdtifipv6ndralife.value_namespace = name_space;
        cdtifipv6ndralife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtIfIpv6NdRouterPreference")
    {
        cdtifipv6ndrouterpreference = value;
        cdtifipv6ndrouterpreference.value_namespace = name_space;
        cdtifipv6ndrouterpreference.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtIfValid")
    {
        cdtifvalid.yfilter = yfilter;
    }
    if(value_path == "cdtIfMtu")
    {
        cdtifmtu.yfilter = yfilter;
    }
    if(value_path == "cdtIfCdpEnable")
    {
        cdtifcdpenable.yfilter = yfilter;
    }
    if(value_path == "cdtIfFlowMonitor")
    {
        cdtifflowmonitor.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv4Unnumbered")
    {
        cdtifipv4unnumbered.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv4SubEnable")
    {
        cdtifipv4subenable.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv4Mtu")
    {
        cdtifipv4mtu.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv4TcpMssAdjust")
    {
        cdtifipv4tcpmssadjust.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv4VerifyUniRpf")
    {
        cdtifipv4verifyunirpf.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv4VerifyUniRpfAcl")
    {
        cdtifipv4verifyunirpfacl.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv4VerifyUniRpfOpts")
    {
        cdtifipv4verifyunirpfopts.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6Enable")
    {
        cdtifipv6enable.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6SubEnable")
    {
        cdtifipv6subenable.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6TcpMssAdjust")
    {
        cdtifipv6tcpmssadjust.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6VerifyUniRpf")
    {
        cdtifipv6verifyunirpf.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6VerifyUniRpfAcl")
    {
        cdtifipv6verifyunirpfacl.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6VerifyUniRpfOpts")
    {
        cdtifipv6verifyunirpfopts.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdPrefix")
    {
        cdtifipv6ndprefix.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdPrefixLength")
    {
        cdtifipv6ndprefixlength.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdValidLife")
    {
        cdtifipv6ndvalidlife.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdPreferredLife")
    {
        cdtifipv6ndpreferredlife.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdOpts")
    {
        cdtifipv6ndopts.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdDadAttempts")
    {
        cdtifipv6nddadattempts.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdNsInterval")
    {
        cdtifipv6ndnsinterval.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdReachableTime")
    {
        cdtifipv6ndreachabletime.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdRaIntervalUnits")
    {
        cdtifipv6ndraintervalunits.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdRaIntervalMax")
    {
        cdtifipv6ndraintervalmax.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdRaIntervalMin")
    {
        cdtifipv6ndraintervalmin.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdRaLife")
    {
        cdtifipv6ndralife.yfilter = yfilter;
    }
    if(value_path == "cdtIfIpv6NdRouterPreference")
    {
        cdtifipv6ndrouterpreference.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtIfValid" || name == "cdtIfMtu" || name == "cdtIfCdpEnable" || name == "cdtIfFlowMonitor" || name == "cdtIfIpv4Unnumbered" || name == "cdtIfIpv4SubEnable" || name == "cdtIfIpv4Mtu" || name == "cdtIfIpv4TcpMssAdjust" || name == "cdtIfIpv4VerifyUniRpf" || name == "cdtIfIpv4VerifyUniRpfAcl" || name == "cdtIfIpv4VerifyUniRpfOpts" || name == "cdtIfIpv6Enable" || name == "cdtIfIpv6SubEnable" || name == "cdtIfIpv6TcpMssAdjust" || name == "cdtIfIpv6VerifyUniRpf" || name == "cdtIfIpv6VerifyUniRpfAcl" || name == "cdtIfIpv6VerifyUniRpfOpts" || name == "cdtIfIpv6NdPrefix" || name == "cdtIfIpv6NdPrefixLength" || name == "cdtIfIpv6NdValidLife" || name == "cdtIfIpv6NdPreferredLife" || name == "cdtIfIpv6NdOpts" || name == "cdtIfIpv6NdDadAttempts" || name == "cdtIfIpv6NdNsInterval" || name == "cdtIfIpv6NdReachableTime" || name == "cdtIfIpv6NdRaIntervalUnits" || name == "cdtIfIpv6NdRaIntervalMax" || name == "cdtIfIpv6NdRaIntervalMin" || name == "cdtIfIpv6NdRaLife" || name == "cdtIfIpv6NdRouterPreference")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateTable()
    :
    cdtppptemplateentry(this, {"cdttemplatename"})
{

    yang_name = "cdtPppTemplateTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::~CdtPppTemplateTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdtppptemplateentry.len(); index++)
    {
        if(cdtppptemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::has_operation() const
{
    for (std::size_t index=0; index<cdtppptemplateentry.len(); index++)
    {
        if(cdtppptemplateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtPppTemplateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtPppTemplateEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry>();
        c->parent = this;
        cdtppptemplateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdtppptemplateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtPppTemplateEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppTemplateEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdtpppvalid{YType::bits, "cdtPppValid"},
    cdtpppaccounting{YType::boolean, "cdtPppAccounting"},
    cdtpppauthentication{YType::bits, "cdtPppAuthentication"},
    cdtpppauthenticationmethods{YType::str, "cdtPppAuthenticationMethods"},
    cdtpppauthorization{YType::boolean, "cdtPppAuthorization"},
    cdtppploopbackignore{YType::boolean, "cdtPppLoopbackIgnore"},
    cdtpppmaxbadauth{YType::uint32, "cdtPppMaxBadAuth"},
    cdtpppmaxconfigure{YType::uint32, "cdtPppMaxConfigure"},
    cdtpppmaxfailure{YType::uint32, "cdtPppMaxFailure"},
    cdtpppmaxterminate{YType::uint32, "cdtPppMaxTerminate"},
    cdtppptimeoutauthentication{YType::uint32, "cdtPppTimeoutAuthentication"},
    cdtppptimeoutretry{YType::uint32, "cdtPppTimeoutRetry"},
    cdtpppchapopts{YType::bits, "cdtPppChapOpts"},
    cdtpppchaphostname{YType::str, "cdtPppChapHostname"},
    cdtpppchappassword{YType::str, "cdtPppChapPassword"},
    cdtpppmschapv1opts{YType::bits, "cdtPppMsChapV1Opts"},
    cdtpppmschapv1hostname{YType::str, "cdtPppMsChapV1Hostname"},
    cdtpppmschapv1password{YType::str, "cdtPppMsChapV1Password"},
    cdtpppmschapv2opts{YType::bits, "cdtPppMsChapV2Opts"},
    cdtpppmschapv2hostname{YType::str, "cdtPppMsChapV2Hostname"},
    cdtpppmschapv2password{YType::str, "cdtPppMsChapV2Password"},
    cdtppppapopts{YType::bits, "cdtPppPapOpts"},
    cdtppppapusername{YType::str, "cdtPppPapUsername"},
    cdtppppappassword{YType::str, "cdtPppPapPassword"},
    cdtpppeapopts{YType::bits, "cdtPppEapOpts"},
    cdtpppeapidentity{YType::str, "cdtPppEapIdentity"},
    cdtpppeappassword{YType::str, "cdtPppEapPassword"},
    cdtpppipcpaddroption{YType::enumeration, "cdtPppIpcpAddrOption"},
    cdtpppipcpdnsoption{YType::enumeration, "cdtPppIpcpDnsOption"},
    cdtpppipcpdnsprimary{YType::str, "cdtPppIpcpDnsPrimary"},
    cdtpppipcpdnssecondary{YType::str, "cdtPppIpcpDnsSecondary"},
    cdtpppipcpwinsoption{YType::enumeration, "cdtPppIpcpWinsOption"},
    cdtpppipcpwinsprimary{YType::str, "cdtPppIpcpWinsPrimary"},
    cdtpppipcpwinssecondary{YType::str, "cdtPppIpcpWinsSecondary"},
    cdtpppipcpmaskoption{YType::enumeration, "cdtPppIpcpMaskOption"},
    cdtpppipcpmask{YType::str, "cdtPppIpcpMask"},
    cdtppppeerdefipaddropts{YType::bits, "cdtPppPeerDefIpAddrOpts"},
    cdtppppeerdefipaddrsrc{YType::enumeration, "cdtPppPeerDefIpAddrSrc"},
    cdtppppeerdefipaddr{YType::str, "cdtPppPeerDefIpAddr"}
{

    yang_name = "cdtPppTemplateEntry"; yang_parent_name = "cdtPppTemplateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::~CdtPppTemplateEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdtpppvalid.is_set
	|| cdtpppaccounting.is_set
	|| cdtpppauthentication.is_set
	|| cdtpppauthenticationmethods.is_set
	|| cdtpppauthorization.is_set
	|| cdtppploopbackignore.is_set
	|| cdtpppmaxbadauth.is_set
	|| cdtpppmaxconfigure.is_set
	|| cdtpppmaxfailure.is_set
	|| cdtpppmaxterminate.is_set
	|| cdtppptimeoutauthentication.is_set
	|| cdtppptimeoutretry.is_set
	|| cdtpppchapopts.is_set
	|| cdtpppchaphostname.is_set
	|| cdtpppchappassword.is_set
	|| cdtpppmschapv1opts.is_set
	|| cdtpppmschapv1hostname.is_set
	|| cdtpppmschapv1password.is_set
	|| cdtpppmschapv2opts.is_set
	|| cdtpppmschapv2hostname.is_set
	|| cdtpppmschapv2password.is_set
	|| cdtppppapopts.is_set
	|| cdtppppapusername.is_set
	|| cdtppppappassword.is_set
	|| cdtpppeapopts.is_set
	|| cdtpppeapidentity.is_set
	|| cdtpppeappassword.is_set
	|| cdtpppipcpaddroption.is_set
	|| cdtpppipcpdnsoption.is_set
	|| cdtpppipcpdnsprimary.is_set
	|| cdtpppipcpdnssecondary.is_set
	|| cdtpppipcpwinsoption.is_set
	|| cdtpppipcpwinsprimary.is_set
	|| cdtpppipcpwinssecondary.is_set
	|| cdtpppipcpmaskoption.is_set
	|| cdtpppipcpmask.is_set
	|| cdtppppeerdefipaddropts.is_set
	|| cdtppppeerdefipaddrsrc.is_set
	|| cdtppppeerdefipaddr.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdtpppvalid.yfilter)
	|| ydk::is_set(cdtpppaccounting.yfilter)
	|| ydk::is_set(cdtpppauthentication.yfilter)
	|| ydk::is_set(cdtpppauthenticationmethods.yfilter)
	|| ydk::is_set(cdtpppauthorization.yfilter)
	|| ydk::is_set(cdtppploopbackignore.yfilter)
	|| ydk::is_set(cdtpppmaxbadauth.yfilter)
	|| ydk::is_set(cdtpppmaxconfigure.yfilter)
	|| ydk::is_set(cdtpppmaxfailure.yfilter)
	|| ydk::is_set(cdtpppmaxterminate.yfilter)
	|| ydk::is_set(cdtppptimeoutauthentication.yfilter)
	|| ydk::is_set(cdtppptimeoutretry.yfilter)
	|| ydk::is_set(cdtpppchapopts.yfilter)
	|| ydk::is_set(cdtpppchaphostname.yfilter)
	|| ydk::is_set(cdtpppchappassword.yfilter)
	|| ydk::is_set(cdtpppmschapv1opts.yfilter)
	|| ydk::is_set(cdtpppmschapv1hostname.yfilter)
	|| ydk::is_set(cdtpppmschapv1password.yfilter)
	|| ydk::is_set(cdtpppmschapv2opts.yfilter)
	|| ydk::is_set(cdtpppmschapv2hostname.yfilter)
	|| ydk::is_set(cdtpppmschapv2password.yfilter)
	|| ydk::is_set(cdtppppapopts.yfilter)
	|| ydk::is_set(cdtppppapusername.yfilter)
	|| ydk::is_set(cdtppppappassword.yfilter)
	|| ydk::is_set(cdtpppeapopts.yfilter)
	|| ydk::is_set(cdtpppeapidentity.yfilter)
	|| ydk::is_set(cdtpppeappassword.yfilter)
	|| ydk::is_set(cdtpppipcpaddroption.yfilter)
	|| ydk::is_set(cdtpppipcpdnsoption.yfilter)
	|| ydk::is_set(cdtpppipcpdnsprimary.yfilter)
	|| ydk::is_set(cdtpppipcpdnssecondary.yfilter)
	|| ydk::is_set(cdtpppipcpwinsoption.yfilter)
	|| ydk::is_set(cdtpppipcpwinsprimary.yfilter)
	|| ydk::is_set(cdtpppipcpwinssecondary.yfilter)
	|| ydk::is_set(cdtpppipcpmaskoption.yfilter)
	|| ydk::is_set(cdtpppipcpmask.yfilter)
	|| ydk::is_set(cdtppppeerdefipaddropts.yfilter)
	|| ydk::is_set(cdtppppeerdefipaddrsrc.yfilter)
	|| ydk::is_set(cdtppppeerdefipaddr.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtPppTemplateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtPppTemplateEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdtpppvalid.is_set || is_set(cdtpppvalid.yfilter)) leaf_name_data.push_back(cdtpppvalid.get_name_leafdata());
    if (cdtpppaccounting.is_set || is_set(cdtpppaccounting.yfilter)) leaf_name_data.push_back(cdtpppaccounting.get_name_leafdata());
    if (cdtpppauthentication.is_set || is_set(cdtpppauthentication.yfilter)) leaf_name_data.push_back(cdtpppauthentication.get_name_leafdata());
    if (cdtpppauthenticationmethods.is_set || is_set(cdtpppauthenticationmethods.yfilter)) leaf_name_data.push_back(cdtpppauthenticationmethods.get_name_leafdata());
    if (cdtpppauthorization.is_set || is_set(cdtpppauthorization.yfilter)) leaf_name_data.push_back(cdtpppauthorization.get_name_leafdata());
    if (cdtppploopbackignore.is_set || is_set(cdtppploopbackignore.yfilter)) leaf_name_data.push_back(cdtppploopbackignore.get_name_leafdata());
    if (cdtpppmaxbadauth.is_set || is_set(cdtpppmaxbadauth.yfilter)) leaf_name_data.push_back(cdtpppmaxbadauth.get_name_leafdata());
    if (cdtpppmaxconfigure.is_set || is_set(cdtpppmaxconfigure.yfilter)) leaf_name_data.push_back(cdtpppmaxconfigure.get_name_leafdata());
    if (cdtpppmaxfailure.is_set || is_set(cdtpppmaxfailure.yfilter)) leaf_name_data.push_back(cdtpppmaxfailure.get_name_leafdata());
    if (cdtpppmaxterminate.is_set || is_set(cdtpppmaxterminate.yfilter)) leaf_name_data.push_back(cdtpppmaxterminate.get_name_leafdata());
    if (cdtppptimeoutauthentication.is_set || is_set(cdtppptimeoutauthentication.yfilter)) leaf_name_data.push_back(cdtppptimeoutauthentication.get_name_leafdata());
    if (cdtppptimeoutretry.is_set || is_set(cdtppptimeoutretry.yfilter)) leaf_name_data.push_back(cdtppptimeoutretry.get_name_leafdata());
    if (cdtpppchapopts.is_set || is_set(cdtpppchapopts.yfilter)) leaf_name_data.push_back(cdtpppchapopts.get_name_leafdata());
    if (cdtpppchaphostname.is_set || is_set(cdtpppchaphostname.yfilter)) leaf_name_data.push_back(cdtpppchaphostname.get_name_leafdata());
    if (cdtpppchappassword.is_set || is_set(cdtpppchappassword.yfilter)) leaf_name_data.push_back(cdtpppchappassword.get_name_leafdata());
    if (cdtpppmschapv1opts.is_set || is_set(cdtpppmschapv1opts.yfilter)) leaf_name_data.push_back(cdtpppmschapv1opts.get_name_leafdata());
    if (cdtpppmschapv1hostname.is_set || is_set(cdtpppmschapv1hostname.yfilter)) leaf_name_data.push_back(cdtpppmschapv1hostname.get_name_leafdata());
    if (cdtpppmschapv1password.is_set || is_set(cdtpppmschapv1password.yfilter)) leaf_name_data.push_back(cdtpppmschapv1password.get_name_leafdata());
    if (cdtpppmschapv2opts.is_set || is_set(cdtpppmschapv2opts.yfilter)) leaf_name_data.push_back(cdtpppmschapv2opts.get_name_leafdata());
    if (cdtpppmschapv2hostname.is_set || is_set(cdtpppmschapv2hostname.yfilter)) leaf_name_data.push_back(cdtpppmschapv2hostname.get_name_leafdata());
    if (cdtpppmschapv2password.is_set || is_set(cdtpppmschapv2password.yfilter)) leaf_name_data.push_back(cdtpppmschapv2password.get_name_leafdata());
    if (cdtppppapopts.is_set || is_set(cdtppppapopts.yfilter)) leaf_name_data.push_back(cdtppppapopts.get_name_leafdata());
    if (cdtppppapusername.is_set || is_set(cdtppppapusername.yfilter)) leaf_name_data.push_back(cdtppppapusername.get_name_leafdata());
    if (cdtppppappassword.is_set || is_set(cdtppppappassword.yfilter)) leaf_name_data.push_back(cdtppppappassword.get_name_leafdata());
    if (cdtpppeapopts.is_set || is_set(cdtpppeapopts.yfilter)) leaf_name_data.push_back(cdtpppeapopts.get_name_leafdata());
    if (cdtpppeapidentity.is_set || is_set(cdtpppeapidentity.yfilter)) leaf_name_data.push_back(cdtpppeapidentity.get_name_leafdata());
    if (cdtpppeappassword.is_set || is_set(cdtpppeappassword.yfilter)) leaf_name_data.push_back(cdtpppeappassword.get_name_leafdata());
    if (cdtpppipcpaddroption.is_set || is_set(cdtpppipcpaddroption.yfilter)) leaf_name_data.push_back(cdtpppipcpaddroption.get_name_leafdata());
    if (cdtpppipcpdnsoption.is_set || is_set(cdtpppipcpdnsoption.yfilter)) leaf_name_data.push_back(cdtpppipcpdnsoption.get_name_leafdata());
    if (cdtpppipcpdnsprimary.is_set || is_set(cdtpppipcpdnsprimary.yfilter)) leaf_name_data.push_back(cdtpppipcpdnsprimary.get_name_leafdata());
    if (cdtpppipcpdnssecondary.is_set || is_set(cdtpppipcpdnssecondary.yfilter)) leaf_name_data.push_back(cdtpppipcpdnssecondary.get_name_leafdata());
    if (cdtpppipcpwinsoption.is_set || is_set(cdtpppipcpwinsoption.yfilter)) leaf_name_data.push_back(cdtpppipcpwinsoption.get_name_leafdata());
    if (cdtpppipcpwinsprimary.is_set || is_set(cdtpppipcpwinsprimary.yfilter)) leaf_name_data.push_back(cdtpppipcpwinsprimary.get_name_leafdata());
    if (cdtpppipcpwinssecondary.is_set || is_set(cdtpppipcpwinssecondary.yfilter)) leaf_name_data.push_back(cdtpppipcpwinssecondary.get_name_leafdata());
    if (cdtpppipcpmaskoption.is_set || is_set(cdtpppipcpmaskoption.yfilter)) leaf_name_data.push_back(cdtpppipcpmaskoption.get_name_leafdata());
    if (cdtpppipcpmask.is_set || is_set(cdtpppipcpmask.yfilter)) leaf_name_data.push_back(cdtpppipcpmask.get_name_leafdata());
    if (cdtppppeerdefipaddropts.is_set || is_set(cdtppppeerdefipaddropts.yfilter)) leaf_name_data.push_back(cdtppppeerdefipaddropts.get_name_leafdata());
    if (cdtppppeerdefipaddrsrc.is_set || is_set(cdtppppeerdefipaddrsrc.yfilter)) leaf_name_data.push_back(cdtppppeerdefipaddrsrc.get_name_leafdata());
    if (cdtppppeerdefipaddr.is_set || is_set(cdtppppeerdefipaddr.yfilter)) leaf_name_data.push_back(cdtppppeerdefipaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppValid")
    {
        cdtpppvalid[value] = true;
    }
    if(value_path == "cdtPppAccounting")
    {
        cdtpppaccounting = value;
        cdtpppaccounting.value_namespace = name_space;
        cdtpppaccounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppAuthentication")
    {
        cdtpppauthentication[value] = true;
    }
    if(value_path == "cdtPppAuthenticationMethods")
    {
        cdtpppauthenticationmethods = value;
        cdtpppauthenticationmethods.value_namespace = name_space;
        cdtpppauthenticationmethods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppAuthorization")
    {
        cdtpppauthorization = value;
        cdtpppauthorization.value_namespace = name_space;
        cdtpppauthorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppLoopbackIgnore")
    {
        cdtppploopbackignore = value;
        cdtppploopbackignore.value_namespace = name_space;
        cdtppploopbackignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMaxBadAuth")
    {
        cdtpppmaxbadauth = value;
        cdtpppmaxbadauth.value_namespace = name_space;
        cdtpppmaxbadauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMaxConfigure")
    {
        cdtpppmaxconfigure = value;
        cdtpppmaxconfigure.value_namespace = name_space;
        cdtpppmaxconfigure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMaxFailure")
    {
        cdtpppmaxfailure = value;
        cdtpppmaxfailure.value_namespace = name_space;
        cdtpppmaxfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMaxTerminate")
    {
        cdtpppmaxterminate = value;
        cdtpppmaxterminate.value_namespace = name_space;
        cdtpppmaxterminate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppTimeoutAuthentication")
    {
        cdtppptimeoutauthentication = value;
        cdtppptimeoutauthentication.value_namespace = name_space;
        cdtppptimeoutauthentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppTimeoutRetry")
    {
        cdtppptimeoutretry = value;
        cdtppptimeoutretry.value_namespace = name_space;
        cdtppptimeoutretry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppChapOpts")
    {
        cdtpppchapopts[value] = true;
    }
    if(value_path == "cdtPppChapHostname")
    {
        cdtpppchaphostname = value;
        cdtpppchaphostname.value_namespace = name_space;
        cdtpppchaphostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppChapPassword")
    {
        cdtpppchappassword = value;
        cdtpppchappassword.value_namespace = name_space;
        cdtpppchappassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMsChapV1Opts")
    {
        cdtpppmschapv1opts[value] = true;
    }
    if(value_path == "cdtPppMsChapV1Hostname")
    {
        cdtpppmschapv1hostname = value;
        cdtpppmschapv1hostname.value_namespace = name_space;
        cdtpppmschapv1hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMsChapV1Password")
    {
        cdtpppmschapv1password = value;
        cdtpppmschapv1password.value_namespace = name_space;
        cdtpppmschapv1password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMsChapV2Opts")
    {
        cdtpppmschapv2opts[value] = true;
    }
    if(value_path == "cdtPppMsChapV2Hostname")
    {
        cdtpppmschapv2hostname = value;
        cdtpppmschapv2hostname.value_namespace = name_space;
        cdtpppmschapv2hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppMsChapV2Password")
    {
        cdtpppmschapv2password = value;
        cdtpppmschapv2password.value_namespace = name_space;
        cdtpppmschapv2password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPapOpts")
    {
        cdtppppapopts[value] = true;
    }
    if(value_path == "cdtPppPapUsername")
    {
        cdtppppapusername = value;
        cdtppppapusername.value_namespace = name_space;
        cdtppppapusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPapPassword")
    {
        cdtppppappassword = value;
        cdtppppappassword.value_namespace = name_space;
        cdtppppappassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppEapOpts")
    {
        cdtpppeapopts[value] = true;
    }
    if(value_path == "cdtPppEapIdentity")
    {
        cdtpppeapidentity = value;
        cdtpppeapidentity.value_namespace = name_space;
        cdtpppeapidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppEapPassword")
    {
        cdtpppeappassword = value;
        cdtpppeappassword.value_namespace = name_space;
        cdtpppeappassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpAddrOption")
    {
        cdtpppipcpaddroption = value;
        cdtpppipcpaddroption.value_namespace = name_space;
        cdtpppipcpaddroption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpDnsOption")
    {
        cdtpppipcpdnsoption = value;
        cdtpppipcpdnsoption.value_namespace = name_space;
        cdtpppipcpdnsoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpDnsPrimary")
    {
        cdtpppipcpdnsprimary = value;
        cdtpppipcpdnsprimary.value_namespace = name_space;
        cdtpppipcpdnsprimary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpDnsSecondary")
    {
        cdtpppipcpdnssecondary = value;
        cdtpppipcpdnssecondary.value_namespace = name_space;
        cdtpppipcpdnssecondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpWinsOption")
    {
        cdtpppipcpwinsoption = value;
        cdtpppipcpwinsoption.value_namespace = name_space;
        cdtpppipcpwinsoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpWinsPrimary")
    {
        cdtpppipcpwinsprimary = value;
        cdtpppipcpwinsprimary.value_namespace = name_space;
        cdtpppipcpwinsprimary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpWinsSecondary")
    {
        cdtpppipcpwinssecondary = value;
        cdtpppipcpwinssecondary.value_namespace = name_space;
        cdtpppipcpwinssecondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpMaskOption")
    {
        cdtpppipcpmaskoption = value;
        cdtpppipcpmaskoption.value_namespace = name_space;
        cdtpppipcpmaskoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppIpcpMask")
    {
        cdtpppipcpmask = value;
        cdtpppipcpmask.value_namespace = name_space;
        cdtpppipcpmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPeerDefIpAddrOpts")
    {
        cdtppppeerdefipaddropts[value] = true;
    }
    if(value_path == "cdtPppPeerDefIpAddrSrc")
    {
        cdtppppeerdefipaddrsrc = value;
        cdtppppeerdefipaddrsrc.value_namespace = name_space;
        cdtppppeerdefipaddrsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPeerDefIpAddr")
    {
        cdtppppeerdefipaddr = value;
        cdtppppeerdefipaddr.value_namespace = name_space;
        cdtppppeerdefipaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtPppValid")
    {
        cdtpppvalid.yfilter = yfilter;
    }
    if(value_path == "cdtPppAccounting")
    {
        cdtpppaccounting.yfilter = yfilter;
    }
    if(value_path == "cdtPppAuthentication")
    {
        cdtpppauthentication.yfilter = yfilter;
    }
    if(value_path == "cdtPppAuthenticationMethods")
    {
        cdtpppauthenticationmethods.yfilter = yfilter;
    }
    if(value_path == "cdtPppAuthorization")
    {
        cdtpppauthorization.yfilter = yfilter;
    }
    if(value_path == "cdtPppLoopbackIgnore")
    {
        cdtppploopbackignore.yfilter = yfilter;
    }
    if(value_path == "cdtPppMaxBadAuth")
    {
        cdtpppmaxbadauth.yfilter = yfilter;
    }
    if(value_path == "cdtPppMaxConfigure")
    {
        cdtpppmaxconfigure.yfilter = yfilter;
    }
    if(value_path == "cdtPppMaxFailure")
    {
        cdtpppmaxfailure.yfilter = yfilter;
    }
    if(value_path == "cdtPppMaxTerminate")
    {
        cdtpppmaxterminate.yfilter = yfilter;
    }
    if(value_path == "cdtPppTimeoutAuthentication")
    {
        cdtppptimeoutauthentication.yfilter = yfilter;
    }
    if(value_path == "cdtPppTimeoutRetry")
    {
        cdtppptimeoutretry.yfilter = yfilter;
    }
    if(value_path == "cdtPppChapOpts")
    {
        cdtpppchapopts.yfilter = yfilter;
    }
    if(value_path == "cdtPppChapHostname")
    {
        cdtpppchaphostname.yfilter = yfilter;
    }
    if(value_path == "cdtPppChapPassword")
    {
        cdtpppchappassword.yfilter = yfilter;
    }
    if(value_path == "cdtPppMsChapV1Opts")
    {
        cdtpppmschapv1opts.yfilter = yfilter;
    }
    if(value_path == "cdtPppMsChapV1Hostname")
    {
        cdtpppmschapv1hostname.yfilter = yfilter;
    }
    if(value_path == "cdtPppMsChapV1Password")
    {
        cdtpppmschapv1password.yfilter = yfilter;
    }
    if(value_path == "cdtPppMsChapV2Opts")
    {
        cdtpppmschapv2opts.yfilter = yfilter;
    }
    if(value_path == "cdtPppMsChapV2Hostname")
    {
        cdtpppmschapv2hostname.yfilter = yfilter;
    }
    if(value_path == "cdtPppMsChapV2Password")
    {
        cdtpppmschapv2password.yfilter = yfilter;
    }
    if(value_path == "cdtPppPapOpts")
    {
        cdtppppapopts.yfilter = yfilter;
    }
    if(value_path == "cdtPppPapUsername")
    {
        cdtppppapusername.yfilter = yfilter;
    }
    if(value_path == "cdtPppPapPassword")
    {
        cdtppppappassword.yfilter = yfilter;
    }
    if(value_path == "cdtPppEapOpts")
    {
        cdtpppeapopts.yfilter = yfilter;
    }
    if(value_path == "cdtPppEapIdentity")
    {
        cdtpppeapidentity.yfilter = yfilter;
    }
    if(value_path == "cdtPppEapPassword")
    {
        cdtpppeappassword.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpAddrOption")
    {
        cdtpppipcpaddroption.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpDnsOption")
    {
        cdtpppipcpdnsoption.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpDnsPrimary")
    {
        cdtpppipcpdnsprimary.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpDnsSecondary")
    {
        cdtpppipcpdnssecondary.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpWinsOption")
    {
        cdtpppipcpwinsoption.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpWinsPrimary")
    {
        cdtpppipcpwinsprimary.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpWinsSecondary")
    {
        cdtpppipcpwinssecondary.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpMaskOption")
    {
        cdtpppipcpmaskoption.yfilter = yfilter;
    }
    if(value_path == "cdtPppIpcpMask")
    {
        cdtpppipcpmask.yfilter = yfilter;
    }
    if(value_path == "cdtPppPeerDefIpAddrOpts")
    {
        cdtppppeerdefipaddropts.yfilter = yfilter;
    }
    if(value_path == "cdtPppPeerDefIpAddrSrc")
    {
        cdtppppeerdefipaddrsrc.yfilter = yfilter;
    }
    if(value_path == "cdtPppPeerDefIpAddr")
    {
        cdtppppeerdefipaddr.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtPppValid" || name == "cdtPppAccounting" || name == "cdtPppAuthentication" || name == "cdtPppAuthenticationMethods" || name == "cdtPppAuthorization" || name == "cdtPppLoopbackIgnore" || name == "cdtPppMaxBadAuth" || name == "cdtPppMaxConfigure" || name == "cdtPppMaxFailure" || name == "cdtPppMaxTerminate" || name == "cdtPppTimeoutAuthentication" || name == "cdtPppTimeoutRetry" || name == "cdtPppChapOpts" || name == "cdtPppChapHostname" || name == "cdtPppChapPassword" || name == "cdtPppMsChapV1Opts" || name == "cdtPppMsChapV1Hostname" || name == "cdtPppMsChapV1Password" || name == "cdtPppMsChapV2Opts" || name == "cdtPppMsChapV2Hostname" || name == "cdtPppMsChapV2Password" || name == "cdtPppPapOpts" || name == "cdtPppPapUsername" || name == "cdtPppPapPassword" || name == "cdtPppEapOpts" || name == "cdtPppEapIdentity" || name == "cdtPppEapPassword" || name == "cdtPppIpcpAddrOption" || name == "cdtPppIpcpDnsOption" || name == "cdtPppIpcpDnsPrimary" || name == "cdtPppIpcpDnsSecondary" || name == "cdtPppIpcpWinsOption" || name == "cdtPppIpcpWinsPrimary" || name == "cdtPppIpcpWinsSecondary" || name == "cdtPppIpcpMaskOption" || name == "cdtPppIpcpMask" || name == "cdtPppPeerDefIpAddrOpts" || name == "cdtPppPeerDefIpAddrSrc" || name == "cdtPppPeerDefIpAddr")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolTable()
    :
    cdtppppeeripaddrpoolentry(this, {"cdttemplatename", "cdtppppeeripaddrpoolpriority"})
{

    yang_name = "cdtPppPeerIpAddrPoolTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::~CdtPppPeerIpAddrPoolTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdtppppeeripaddrpoolentry.len(); index++)
    {
        if(cdtppppeeripaddrpoolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::has_operation() const
{
    for (std::size_t index=0; index<cdtppppeeripaddrpoolentry.len(); index++)
    {
        if(cdtppppeeripaddrpoolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtPppPeerIpAddrPoolTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtPppPeerIpAddrPoolEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry>();
        c->parent = this;
        cdtppppeeripaddrpoolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdtppppeeripaddrpoolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtPppPeerIpAddrPoolEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::CdtPppPeerIpAddrPoolEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdtppppeeripaddrpoolpriority{YType::uint32, "cdtPppPeerIpAddrPoolPriority"},
    cdtppppeeripaddrpoolstatus{YType::enumeration, "cdtPppPeerIpAddrPoolStatus"},
    cdtppppeeripaddrpoolstorage{YType::enumeration, "cdtPppPeerIpAddrPoolStorage"},
    cdtppppeeripaddrpoolname{YType::str, "cdtPppPeerIpAddrPoolName"}
{

    yang_name = "cdtPppPeerIpAddrPoolEntry"; yang_parent_name = "cdtPppPeerIpAddrPoolTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::~CdtPppPeerIpAddrPoolEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdtppppeeripaddrpoolpriority.is_set
	|| cdtppppeeripaddrpoolstatus.is_set
	|| cdtppppeeripaddrpoolstorage.is_set
	|| cdtppppeeripaddrpoolname.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdtppppeeripaddrpoolpriority.yfilter)
	|| ydk::is_set(cdtppppeeripaddrpoolstatus.yfilter)
	|| ydk::is_set(cdtppppeeripaddrpoolstorage.yfilter)
	|| ydk::is_set(cdtppppeeripaddrpoolname.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtPppPeerIpAddrPoolTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtPppPeerIpAddrPoolEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    ADD_KEY_TOKEN(cdtppppeeripaddrpoolpriority, "cdtPppPeerIpAddrPoolPriority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdtppppeeripaddrpoolpriority.is_set || is_set(cdtppppeeripaddrpoolpriority.yfilter)) leaf_name_data.push_back(cdtppppeeripaddrpoolpriority.get_name_leafdata());
    if (cdtppppeeripaddrpoolstatus.is_set || is_set(cdtppppeeripaddrpoolstatus.yfilter)) leaf_name_data.push_back(cdtppppeeripaddrpoolstatus.get_name_leafdata());
    if (cdtppppeeripaddrpoolstorage.is_set || is_set(cdtppppeeripaddrpoolstorage.yfilter)) leaf_name_data.push_back(cdtppppeeripaddrpoolstorage.get_name_leafdata());
    if (cdtppppeeripaddrpoolname.is_set || is_set(cdtppppeeripaddrpoolname.yfilter)) leaf_name_data.push_back(cdtppppeeripaddrpoolname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPeerIpAddrPoolPriority")
    {
        cdtppppeeripaddrpoolpriority = value;
        cdtppppeeripaddrpoolpriority.value_namespace = name_space;
        cdtppppeeripaddrpoolpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPeerIpAddrPoolStatus")
    {
        cdtppppeeripaddrpoolstatus = value;
        cdtppppeeripaddrpoolstatus.value_namespace = name_space;
        cdtppppeeripaddrpoolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPeerIpAddrPoolStorage")
    {
        cdtppppeeripaddrpoolstorage = value;
        cdtppppeeripaddrpoolstorage.value_namespace = name_space;
        cdtppppeeripaddrpoolstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtPppPeerIpAddrPoolName")
    {
        cdtppppeeripaddrpoolname = value;
        cdtppppeeripaddrpoolname.value_namespace = name_space;
        cdtppppeeripaddrpoolname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtPppPeerIpAddrPoolPriority")
    {
        cdtppppeeripaddrpoolpriority.yfilter = yfilter;
    }
    if(value_path == "cdtPppPeerIpAddrPoolStatus")
    {
        cdtppppeeripaddrpoolstatus.yfilter = yfilter;
    }
    if(value_path == "cdtPppPeerIpAddrPoolStorage")
    {
        cdtppppeeripaddrpoolstorage.yfilter = yfilter;
    }
    if(value_path == "cdtPppPeerIpAddrPoolName")
    {
        cdtppppeeripaddrpoolname.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtPppPeerIpAddrPoolPriority" || name == "cdtPppPeerIpAddrPoolStatus" || name == "cdtPppPeerIpAddrPoolStorage" || name == "cdtPppPeerIpAddrPoolName")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateTable()
    :
    cdtethernettemplateentry(this, {"cdttemplatename"})
{

    yang_name = "cdtEthernetTemplateTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::~CdtEthernetTemplateTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdtethernettemplateentry.len(); index++)
    {
        if(cdtethernettemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::has_operation() const
{
    for (std::size_t index=0; index<cdtethernettemplateentry.len(); index++)
    {
        if(cdtethernettemplateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtEthernetTemplateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtEthernetTemplateEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry>();
        c->parent = this;
        cdtethernettemplateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdtethernettemplateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtEthernetTemplateEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::CdtEthernetTemplateEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdtethernetvalid{YType::bits, "cdtEthernetValid"},
    cdtethernetbridgedomain{YType::str, "cdtEthernetBridgeDomain"},
    cdtethernetpppoeenable{YType::boolean, "cdtEthernetPppoeEnable"},
    cdtethernetipv4pointtopoint{YType::boolean, "cdtEthernetIpv4PointToPoint"},
    cdtethernetmacaddr{YType::str, "cdtEthernetMacAddr"}
{

    yang_name = "cdtEthernetTemplateEntry"; yang_parent_name = "cdtEthernetTemplateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::~CdtEthernetTemplateEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdtethernetvalid.is_set
	|| cdtethernetbridgedomain.is_set
	|| cdtethernetpppoeenable.is_set
	|| cdtethernetipv4pointtopoint.is_set
	|| cdtethernetmacaddr.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdtethernetvalid.yfilter)
	|| ydk::is_set(cdtethernetbridgedomain.yfilter)
	|| ydk::is_set(cdtethernetpppoeenable.yfilter)
	|| ydk::is_set(cdtethernetipv4pointtopoint.yfilter)
	|| ydk::is_set(cdtethernetmacaddr.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtEthernetTemplateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtEthernetTemplateEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdtethernetvalid.is_set || is_set(cdtethernetvalid.yfilter)) leaf_name_data.push_back(cdtethernetvalid.get_name_leafdata());
    if (cdtethernetbridgedomain.is_set || is_set(cdtethernetbridgedomain.yfilter)) leaf_name_data.push_back(cdtethernetbridgedomain.get_name_leafdata());
    if (cdtethernetpppoeenable.is_set || is_set(cdtethernetpppoeenable.yfilter)) leaf_name_data.push_back(cdtethernetpppoeenable.get_name_leafdata());
    if (cdtethernetipv4pointtopoint.is_set || is_set(cdtethernetipv4pointtopoint.yfilter)) leaf_name_data.push_back(cdtethernetipv4pointtopoint.get_name_leafdata());
    if (cdtethernetmacaddr.is_set || is_set(cdtethernetmacaddr.yfilter)) leaf_name_data.push_back(cdtethernetmacaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtEthernetValid")
    {
        cdtethernetvalid[value] = true;
    }
    if(value_path == "cdtEthernetBridgeDomain")
    {
        cdtethernetbridgedomain = value;
        cdtethernetbridgedomain.value_namespace = name_space;
        cdtethernetbridgedomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtEthernetPppoeEnable")
    {
        cdtethernetpppoeenable = value;
        cdtethernetpppoeenable.value_namespace = name_space;
        cdtethernetpppoeenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtEthernetIpv4PointToPoint")
    {
        cdtethernetipv4pointtopoint = value;
        cdtethernetipv4pointtopoint.value_namespace = name_space;
        cdtethernetipv4pointtopoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtEthernetMacAddr")
    {
        cdtethernetmacaddr = value;
        cdtethernetmacaddr.value_namespace = name_space;
        cdtethernetmacaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtEthernetValid")
    {
        cdtethernetvalid.yfilter = yfilter;
    }
    if(value_path == "cdtEthernetBridgeDomain")
    {
        cdtethernetbridgedomain.yfilter = yfilter;
    }
    if(value_path == "cdtEthernetPppoeEnable")
    {
        cdtethernetpppoeenable.yfilter = yfilter;
    }
    if(value_path == "cdtEthernetIpv4PointToPoint")
    {
        cdtethernetipv4pointtopoint.yfilter = yfilter;
    }
    if(value_path == "cdtEthernetMacAddr")
    {
        cdtethernetmacaddr.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtEthernetValid" || name == "cdtEthernetBridgeDomain" || name == "cdtEthernetPppoeEnable" || name == "cdtEthernetIpv4PointToPoint" || name == "cdtEthernetMacAddr")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateTable()
    :
    cdtsrvtemplateentry(this, {"cdttemplatename"})
{

    yang_name = "cdtSrvTemplateTable"; yang_parent_name = "CISCO-DYNAMIC-TEMPLATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::~CdtSrvTemplateTable()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdtsrvtemplateentry.len(); index++)
    {
        if(cdtsrvtemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::has_operation() const
{
    for (std::size_t index=0; index<cdtsrvtemplateentry.len(); index++)
    {
        if(cdtsrvtemplateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtSrvTemplateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdtSrvTemplateEntry")
    {
        auto c = std::make_shared<CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry>();
        c->parent = this;
        cdtsrvtemplateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdtsrvtemplateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtSrvTemplateEntry")
        return true;
    return false;
}

CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvTemplateEntry()
    :
    cdttemplatename{YType::str, "cdtTemplateName"},
    cdtsrvvalid{YType::bits, "cdtSrvValid"},
    cdtsrvnetworksrv{YType::enumeration, "cdtSrvNetworkSrv"},
    cdtsrvvpdngroup{YType::str, "cdtSrvVpdnGroup"},
    cdtsrvsgsrvgroup{YType::str, "cdtSrvSgSrvGroup"},
    cdtsrvsgsrvtype{YType::enumeration, "cdtSrvSgSrvType"},
    cdtsrvmulticast{YType::boolean, "cdtSrvMulticast"}
{

    yang_name = "cdtSrvTemplateEntry"; yang_parent_name = "cdtSrvTemplateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::~CdtSrvTemplateEntry()
{
}

bool CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdttemplatename.is_set
	|| cdtsrvvalid.is_set
	|| cdtsrvnetworksrv.is_set
	|| cdtsrvvpdngroup.is_set
	|| cdtsrvsgsrvgroup.is_set
	|| cdtsrvsgsrvtype.is_set
	|| cdtsrvmulticast.is_set;
}

bool CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdttemplatename.yfilter)
	|| ydk::is_set(cdtsrvvalid.yfilter)
	|| ydk::is_set(cdtsrvnetworksrv.yfilter)
	|| ydk::is_set(cdtsrvvpdngroup.yfilter)
	|| ydk::is_set(cdtsrvsgsrvgroup.yfilter)
	|| ydk::is_set(cdtsrvsgsrvtype.yfilter)
	|| ydk::is_set(cdtsrvmulticast.yfilter);
}

std::string CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DYNAMIC-TEMPLATE-MIB:CISCO-DYNAMIC-TEMPLATE-MIB/cdtSrvTemplateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdtSrvTemplateEntry";
    ADD_KEY_TOKEN(cdttemplatename, "cdtTemplateName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdttemplatename.is_set || is_set(cdttemplatename.yfilter)) leaf_name_data.push_back(cdttemplatename.get_name_leafdata());
    if (cdtsrvvalid.is_set || is_set(cdtsrvvalid.yfilter)) leaf_name_data.push_back(cdtsrvvalid.get_name_leafdata());
    if (cdtsrvnetworksrv.is_set || is_set(cdtsrvnetworksrv.yfilter)) leaf_name_data.push_back(cdtsrvnetworksrv.get_name_leafdata());
    if (cdtsrvvpdngroup.is_set || is_set(cdtsrvvpdngroup.yfilter)) leaf_name_data.push_back(cdtsrvvpdngroup.get_name_leafdata());
    if (cdtsrvsgsrvgroup.is_set || is_set(cdtsrvsgsrvgroup.yfilter)) leaf_name_data.push_back(cdtsrvsgsrvgroup.get_name_leafdata());
    if (cdtsrvsgsrvtype.is_set || is_set(cdtsrvsgsrvtype.yfilter)) leaf_name_data.push_back(cdtsrvsgsrvtype.get_name_leafdata());
    if (cdtsrvmulticast.is_set || is_set(cdtsrvmulticast.yfilter)) leaf_name_data.push_back(cdtsrvmulticast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename = value;
        cdttemplatename.value_namespace = name_space;
        cdttemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtSrvValid")
    {
        cdtsrvvalid[value] = true;
    }
    if(value_path == "cdtSrvNetworkSrv")
    {
        cdtsrvnetworksrv = value;
        cdtsrvnetworksrv.value_namespace = name_space;
        cdtsrvnetworksrv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtSrvVpdnGroup")
    {
        cdtsrvvpdngroup = value;
        cdtsrvvpdngroup.value_namespace = name_space;
        cdtsrvvpdngroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtSrvSgSrvGroup")
    {
        cdtsrvsgsrvgroup = value;
        cdtsrvsgsrvgroup.value_namespace = name_space;
        cdtsrvsgsrvgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtSrvSgSrvType")
    {
        cdtsrvsgsrvtype = value;
        cdtsrvsgsrvtype.value_namespace = name_space;
        cdtsrvsgsrvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdtSrvMulticast")
    {
        cdtsrvmulticast = value;
        cdtsrvmulticast.value_namespace = name_space;
        cdtsrvmulticast.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdtTemplateName")
    {
        cdttemplatename.yfilter = yfilter;
    }
    if(value_path == "cdtSrvValid")
    {
        cdtsrvvalid.yfilter = yfilter;
    }
    if(value_path == "cdtSrvNetworkSrv")
    {
        cdtsrvnetworksrv.yfilter = yfilter;
    }
    if(value_path == "cdtSrvVpdnGroup")
    {
        cdtsrvvpdngroup.yfilter = yfilter;
    }
    if(value_path == "cdtSrvSgSrvGroup")
    {
        cdtsrvsgsrvgroup.yfilter = yfilter;
    }
    if(value_path == "cdtSrvSgSrvType")
    {
        cdtsrvsgsrvtype.yfilter = yfilter;
    }
    if(value_path == "cdtSrvMulticast")
    {
        cdtsrvmulticast.yfilter = yfilter;
    }
}

bool CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdtTemplateName" || name == "cdtSrvValid" || name == "cdtSrvNetworkSrv" || name == "cdtSrvVpdnGroup" || name == "cdtSrvSgSrvGroup" || name == "cdtSrvSgSrvType" || name == "cdtSrvMulticast")
        return true;
    return false;
}

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::CdtTemplateSrc::other {1, "other"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::CdtTemplateSrc::derived {2, "derived"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::CdtTemplateSrc::local {3, "local"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::CdtTemplateSrc::aaaUserProfile {4, "aaaUserProfile"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::CdtTemplateSrc::aaaServiceProfile {5, "aaaServiceProfile"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfIpv6NdRaIntervalUnits::seconds {1, "seconds"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfIpv6NdRaIntervalUnits::milliseconds {2, "milliseconds"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfIpv6NdRouterPreference::high {1, "high"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfIpv6NdRouterPreference::medium {2, "medium"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfIpv6NdRouterPreference::low {3, "low"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpAddrOption::other {1, "other"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpAddrOption::accept {2, "accept"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpAddrOption::required {3, "required"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpAddrOption::unique {4, "unique"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpDnsOption::other {1, "other"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpDnsOption::accept {2, "accept"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpDnsOption::request {3, "request"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpDnsOption::reject {4, "reject"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpWinsOption::other {1, "other"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpWinsOption::accept {2, "accept"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpWinsOption::request {3, "request"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpWinsOption::reject {4, "reject"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpMaskOption::other {1, "other"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpMaskOption::request {2, "request"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpMaskOption::reject {3, "reject"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppPeerDefIpAddrSrc::static_ {1, "static"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppPeerDefIpAddrSrc::pool {2, "pool"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppPeerDefIpAddrSrc::dhcp {3, "dhcp"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvNetworkSrv::other {1, "other"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvNetworkSrv::none {2, "none"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvNetworkSrv::local {3, "local"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvNetworkSrv::vpdn {4, "vpdn"};

const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvSgSrvType::primary {1, "primary"};
const Enum::YLeaf CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvSgSrvType::secondary {2, "secondary"};


}
}

