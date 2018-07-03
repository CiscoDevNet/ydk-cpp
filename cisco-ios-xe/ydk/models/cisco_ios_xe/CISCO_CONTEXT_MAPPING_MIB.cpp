
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONTEXT_MAPPING_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CONTEXT_MAPPING_MIB {

CISCOCONTEXTMAPPINGMIB::CISCOCONTEXTMAPPINGMIB()
    :
    ccontextmappingtable(std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingTable>())
    , ccontextmappingbridgedomaintable(std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable>())
    , ccontextmappingbridgeinstancetable(std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable>())
    , ccontextmappinglicensegrouptable(std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable>())
{
    ccontextmappingtable->parent = this;
    ccontextmappingbridgedomaintable->parent = this;
    ccontextmappingbridgeinstancetable->parent = this;
    ccontextmappinglicensegrouptable->parent = this;

    yang_name = "CISCO-CONTEXT-MAPPING-MIB"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::~CISCOCONTEXTMAPPINGMIB()
{
}

bool CISCOCONTEXTMAPPINGMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ccontextmappingtable !=  nullptr && ccontextmappingtable->has_data())
	|| (ccontextmappingbridgedomaintable !=  nullptr && ccontextmappingbridgedomaintable->has_data())
	|| (ccontextmappingbridgeinstancetable !=  nullptr && ccontextmappingbridgeinstancetable->has_data())
	|| (ccontextmappinglicensegrouptable !=  nullptr && ccontextmappinglicensegrouptable->has_data());
}

bool CISCOCONTEXTMAPPINGMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ccontextmappingtable !=  nullptr && ccontextmappingtable->has_operation())
	|| (ccontextmappingbridgedomaintable !=  nullptr && ccontextmappingbridgedomaintable->has_operation())
	|| (ccontextmappingbridgeinstancetable !=  nullptr && ccontextmappingbridgeinstancetable->has_operation())
	|| (ccontextmappinglicensegrouptable !=  nullptr && ccontextmappinglicensegrouptable->has_operation());
}

std::string CISCOCONTEXTMAPPINGMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingTable")
    {
        if(ccontextmappingtable == nullptr)
        {
            ccontextmappingtable = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingTable>();
        }
        return ccontextmappingtable;
    }

    if(child_yang_name == "cContextMappingBridgeDomainTable")
    {
        if(ccontextmappingbridgedomaintable == nullptr)
        {
            ccontextmappingbridgedomaintable = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable>();
        }
        return ccontextmappingbridgedomaintable;
    }

    if(child_yang_name == "cContextMappingBridgeInstanceTable")
    {
        if(ccontextmappingbridgeinstancetable == nullptr)
        {
            ccontextmappingbridgeinstancetable = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable>();
        }
        return ccontextmappingbridgeinstancetable;
    }

    if(child_yang_name == "cContextMappingLicenseGroupTable")
    {
        if(ccontextmappinglicensegrouptable == nullptr)
        {
            ccontextmappinglicensegrouptable = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable>();
        }
        return ccontextmappinglicensegrouptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ccontextmappingtable != nullptr)
    {
        children["cContextMappingTable"] = ccontextmappingtable;
    }

    if(ccontextmappingbridgedomaintable != nullptr)
    {
        children["cContextMappingBridgeDomainTable"] = ccontextmappingbridgedomaintable;
    }

    if(ccontextmappingbridgeinstancetable != nullptr)
    {
        children["cContextMappingBridgeInstanceTable"] = ccontextmappingbridgeinstancetable;
    }

    if(ccontextmappinglicensegrouptable != nullptr)
    {
        children["cContextMappingLicenseGroupTable"] = ccontextmappinglicensegrouptable;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::clone_ptr() const
{
    return std::make_shared<CISCOCONTEXTMAPPINGMIB>();
}

std::string CISCOCONTEXTMAPPINGMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCONTEXTMAPPINGMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCONTEXTMAPPINGMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCONTEXTMAPPINGMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCONTEXTMAPPINGMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingTable" || name == "cContextMappingBridgeDomainTable" || name == "cContextMappingBridgeInstanceTable" || name == "cContextMappingLicenseGroupTable")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingTable()
    :
    ccontextmappingentry(this, {"ccontextmappingvacmcontextname"})
{

    yang_name = "cContextMappingTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingTable::~CContextMappingTable()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccontextmappingentry.len(); index++)
    {
        if(ccontextmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingTable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingentry.len(); index++)
    {
        if(ccontextmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingEntry")
    {
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry>();
        c->parent = this;
        ccontextmappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccontextmappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::CContextMappingEntry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingvrfname{YType::str, "cContextMappingVrfName"},
    ccontextmappingtopologyname{YType::str, "cContextMappingTopologyName"},
    ccontextmappingprotoinstname{YType::str, "cContextMappingProtoInstName"},
    ccontextmappingstoragetype{YType::enumeration, "cContextMappingStorageType"},
    ccontextmappingrowstatus{YType::enumeration, "cContextMappingRowStatus"}
{

    yang_name = "cContextMappingEntry"; yang_parent_name = "cContextMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::~CContextMappingEntry()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingvrfname.is_set
	|| ccontextmappingtopologyname.is_set
	|| ccontextmappingprotoinstname.is_set
	|| ccontextmappingstoragetype.is_set
	|| ccontextmappingrowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingvrfname.yfilter)
	|| ydk::is_set(ccontextmappingtopologyname.yfilter)
	|| ydk::is_set(ccontextmappingprotoinstname.yfilter)
	|| ydk::is_set(ccontextmappingstoragetype.yfilter)
	|| ydk::is_set(ccontextmappingrowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingEntry";
    ADD_KEY_TOKEN(ccontextmappingvacmcontextname, "cContextMappingVacmContextName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingvrfname.is_set || is_set(ccontextmappingvrfname.yfilter)) leaf_name_data.push_back(ccontextmappingvrfname.get_name_leafdata());
    if (ccontextmappingtopologyname.is_set || is_set(ccontextmappingtopologyname.yfilter)) leaf_name_data.push_back(ccontextmappingtopologyname.get_name_leafdata());
    if (ccontextmappingprotoinstname.is_set || is_set(ccontextmappingprotoinstname.yfilter)) leaf_name_data.push_back(ccontextmappingprotoinstname.get_name_leafdata());
    if (ccontextmappingstoragetype.is_set || is_set(ccontextmappingstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingstoragetype.get_name_leafdata());
    if (ccontextmappingrowstatus.is_set || is_set(ccontextmappingrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingVrfName")
    {
        ccontextmappingvrfname = value;
        ccontextmappingvrfname.value_namespace = name_space;
        ccontextmappingvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingTopologyName")
    {
        ccontextmappingtopologyname = value;
        ccontextmappingtopologyname.value_namespace = name_space;
        ccontextmappingtopologyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingProtoInstName")
    {
        ccontextmappingprotoinstname = value;
        ccontextmappingprotoinstname.value_namespace = name_space;
        ccontextmappingprotoinstname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingStorageType")
    {
        ccontextmappingstoragetype = value;
        ccontextmappingstoragetype.value_namespace = name_space;
        ccontextmappingstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingRowStatus")
    {
        ccontextmappingrowstatus = value;
        ccontextmappingrowstatus.value_namespace = name_space;
        ccontextmappingrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingVrfName")
    {
        ccontextmappingvrfname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingTopologyName")
    {
        ccontextmappingtopologyname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingProtoInstName")
    {
        ccontextmappingprotoinstname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingStorageType")
    {
        ccontextmappingstoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingRowStatus")
    {
        ccontextmappingrowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingTable::CContextMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingVrfName" || name == "cContextMappingTopologyName" || name == "cContextMappingProtoInstName" || name == "cContextMappingStorageType" || name == "cContextMappingRowStatus")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainTable()
    :
    ccontextmappingbridgedomainentry(this, {"ccontextmappingvacmcontextname"})
{

    yang_name = "cContextMappingBridgeDomainTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::~CContextMappingBridgeDomainTable()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccontextmappingbridgedomainentry.len(); index++)
    {
        if(ccontextmappingbridgedomainentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingbridgedomainentry.len(); index++)
    {
        if(ccontextmappingbridgedomainentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeDomainTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingBridgeDomainEntry")
    {
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry>();
        c->parent = this;
        ccontextmappingbridgedomainentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccontextmappingbridgedomainentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingBridgeDomainEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::CContextMappingBridgeDomainEntry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingbridgedomainidentifier{YType::uint32, "cContextMappingBridgeDomainIdentifier"},
    ccontextmappingbridgedomainstoragetype{YType::enumeration, "cContextMappingBridgeDomainStorageType"},
    ccontextmappingbridgedomainrowstatus{YType::enumeration, "cContextMappingBridgeDomainRowStatus"}
{

    yang_name = "cContextMappingBridgeDomainEntry"; yang_parent_name = "cContextMappingBridgeDomainTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::~CContextMappingBridgeDomainEntry()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingbridgedomainidentifier.is_set
	|| ccontextmappingbridgedomainstoragetype.is_set
	|| ccontextmappingbridgedomainrowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainidentifier.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainstoragetype.yfilter)
	|| ydk::is_set(ccontextmappingbridgedomainrowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingBridgeDomainTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeDomainEntry";
    ADD_KEY_TOKEN(ccontextmappingvacmcontextname, "cContextMappingVacmContextName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingbridgedomainidentifier.is_set || is_set(ccontextmappingbridgedomainidentifier.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainidentifier.get_name_leafdata());
    if (ccontextmappingbridgedomainstoragetype.is_set || is_set(ccontextmappingbridgedomainstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainstoragetype.get_name_leafdata());
    if (ccontextmappingbridgedomainrowstatus.is_set || is_set(ccontextmappingbridgedomainrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingbridgedomainrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeDomainIdentifier")
    {
        ccontextmappingbridgedomainidentifier = value;
        ccontextmappingbridgedomainidentifier.value_namespace = name_space;
        ccontextmappingbridgedomainidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeDomainStorageType")
    {
        ccontextmappingbridgedomainstoragetype = value;
        ccontextmappingbridgedomainstoragetype.value_namespace = name_space;
        ccontextmappingbridgedomainstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeDomainRowStatus")
    {
        ccontextmappingbridgedomainrowstatus = value;
        ccontextmappingbridgedomainrowstatus.value_namespace = name_space;
        ccontextmappingbridgedomainrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainIdentifier")
    {
        ccontextmappingbridgedomainidentifier.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainStorageType")
    {
        ccontextmappingbridgedomainstoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeDomainRowStatus")
    {
        ccontextmappingbridgedomainrowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeDomainTable::CContextMappingBridgeDomainEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingBridgeDomainIdentifier" || name == "cContextMappingBridgeDomainStorageType" || name == "cContextMappingBridgeDomainRowStatus")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceTable()
    :
    ccontextmappingbridgeinstanceentry(this, {"ccontextmappingvacmcontextname"})
{

    yang_name = "cContextMappingBridgeInstanceTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::~CContextMappingBridgeInstanceTable()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccontextmappingbridgeinstanceentry.len(); index++)
    {
        if(ccontextmappingbridgeinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappingbridgeinstanceentry.len(); index++)
    {
        if(ccontextmappingbridgeinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingBridgeInstanceEntry")
    {
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry>();
        c->parent = this;
        ccontextmappingbridgeinstanceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccontextmappingbridgeinstanceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingBridgeInstanceEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::CContextMappingBridgeInstanceEntry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappingbridgeinstname{YType::str, "cContextMappingBridgeInstName"},
    ccontextmappingbridgeinststoragetype{YType::enumeration, "cContextMappingBridgeInstStorageType"},
    ccontextmappingbridgeinstrowstatus{YType::enumeration, "cContextMappingBridgeInstRowStatus"}
{

    yang_name = "cContextMappingBridgeInstanceEntry"; yang_parent_name = "cContextMappingBridgeInstanceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::~CContextMappingBridgeInstanceEntry()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappingbridgeinstname.is_set
	|| ccontextmappingbridgeinststoragetype.is_set
	|| ccontextmappingbridgeinstrowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinstname.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinststoragetype.yfilter)
	|| ydk::is_set(ccontextmappingbridgeinstrowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingBridgeInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingBridgeInstanceEntry";
    ADD_KEY_TOKEN(ccontextmappingvacmcontextname, "cContextMappingVacmContextName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappingbridgeinstname.is_set || is_set(ccontextmappingbridgeinstname.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinstname.get_name_leafdata());
    if (ccontextmappingbridgeinststoragetype.is_set || is_set(ccontextmappingbridgeinststoragetype.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinststoragetype.get_name_leafdata());
    if (ccontextmappingbridgeinstrowstatus.is_set || is_set(ccontextmappingbridgeinstrowstatus.yfilter)) leaf_name_data.push_back(ccontextmappingbridgeinstrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeInstName")
    {
        ccontextmappingbridgeinstname = value;
        ccontextmappingbridgeinstname.value_namespace = name_space;
        ccontextmappingbridgeinstname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeInstStorageType")
    {
        ccontextmappingbridgeinststoragetype = value;
        ccontextmappingbridgeinststoragetype.value_namespace = name_space;
        ccontextmappingbridgeinststoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingBridgeInstRowStatus")
    {
        ccontextmappingbridgeinstrowstatus = value;
        ccontextmappingbridgeinstrowstatus.value_namespace = name_space;
        ccontextmappingbridgeinstrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstName")
    {
        ccontextmappingbridgeinstname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstStorageType")
    {
        ccontextmappingbridgeinststoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingBridgeInstRowStatus")
    {
        ccontextmappingbridgeinstrowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingBridgeInstanceTable::CContextMappingBridgeInstanceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingBridgeInstName" || name == "cContextMappingBridgeInstStorageType" || name == "cContextMappingBridgeInstRowStatus")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupTable()
    :
    ccontextmappinglicensegroupentry(this, {"ccontextmappingvacmcontextname"})
{

    yang_name = "cContextMappingLicenseGroupTable"; yang_parent_name = "CISCO-CONTEXT-MAPPING-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::~CContextMappingLicenseGroupTable()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccontextmappinglicensegroupentry.len(); index++)
    {
        if(ccontextmappinglicensegroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::has_operation() const
{
    for (std::size_t index=0; index<ccontextmappinglicensegroupentry.len(); index++)
    {
        if(ccontextmappinglicensegroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingLicenseGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cContextMappingLicenseGroupEntry")
    {
        auto c = std::make_shared<CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry>();
        c->parent = this;
        ccontextmappinglicensegroupentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccontextmappinglicensegroupentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingLicenseGroupEntry")
        return true;
    return false;
}

CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::CContextMappingLicenseGroupEntry()
    :
    ccontextmappingvacmcontextname{YType::str, "cContextMappingVacmContextName"},
    ccontextmappinglicensegroupname{YType::str, "cContextMappingLicenseGroupName"},
    ccontextmappinglicensegroupstoragetype{YType::enumeration, "cContextMappingLicenseGroupStorageType"},
    ccontextmappinglicensegrouprowstatus{YType::enumeration, "cContextMappingLicenseGroupRowStatus"}
{

    yang_name = "cContextMappingLicenseGroupEntry"; yang_parent_name = "cContextMappingLicenseGroupTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::~CContextMappingLicenseGroupEntry()
{
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccontextmappingvacmcontextname.is_set
	|| ccontextmappinglicensegroupname.is_set
	|| ccontextmappinglicensegroupstoragetype.is_set
	|| ccontextmappinglicensegrouprowstatus.is_set;
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccontextmappingvacmcontextname.yfilter)
	|| ydk::is_set(ccontextmappinglicensegroupname.yfilter)
	|| ydk::is_set(ccontextmappinglicensegroupstoragetype.yfilter)
	|| ydk::is_set(ccontextmappinglicensegrouprowstatus.yfilter);
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONTEXT-MAPPING-MIB:CISCO-CONTEXT-MAPPING-MIB/cContextMappingLicenseGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cContextMappingLicenseGroupEntry";
    ADD_KEY_TOKEN(ccontextmappingvacmcontextname, "cContextMappingVacmContextName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccontextmappingvacmcontextname.is_set || is_set(ccontextmappingvacmcontextname.yfilter)) leaf_name_data.push_back(ccontextmappingvacmcontextname.get_name_leafdata());
    if (ccontextmappinglicensegroupname.is_set || is_set(ccontextmappinglicensegroupname.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegroupname.get_name_leafdata());
    if (ccontextmappinglicensegroupstoragetype.is_set || is_set(ccontextmappinglicensegroupstoragetype.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegroupstoragetype.get_name_leafdata());
    if (ccontextmappinglicensegrouprowstatus.is_set || is_set(ccontextmappinglicensegrouprowstatus.yfilter)) leaf_name_data.push_back(ccontextmappinglicensegrouprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname = value;
        ccontextmappingvacmcontextname.value_namespace = name_space;
        ccontextmappingvacmcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingLicenseGroupName")
    {
        ccontextmappinglicensegroupname = value;
        ccontextmappinglicensegroupname.value_namespace = name_space;
        ccontextmappinglicensegroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingLicenseGroupStorageType")
    {
        ccontextmappinglicensegroupstoragetype = value;
        ccontextmappinglicensegroupstoragetype.value_namespace = name_space;
        ccontextmappinglicensegroupstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cContextMappingLicenseGroupRowStatus")
    {
        ccontextmappinglicensegrouprowstatus = value;
        ccontextmappinglicensegrouprowstatus.value_namespace = name_space;
        ccontextmappinglicensegrouprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cContextMappingVacmContextName")
    {
        ccontextmappingvacmcontextname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupName")
    {
        ccontextmappinglicensegroupname.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupStorageType")
    {
        ccontextmappinglicensegroupstoragetype.yfilter = yfilter;
    }
    if(value_path == "cContextMappingLicenseGroupRowStatus")
    {
        ccontextmappinglicensegrouprowstatus.yfilter = yfilter;
    }
}

bool CISCOCONTEXTMAPPINGMIB::CContextMappingLicenseGroupTable::CContextMappingLicenseGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cContextMappingVacmContextName" || name == "cContextMappingLicenseGroupName" || name == "cContextMappingLicenseGroupStorageType" || name == "cContextMappingLicenseGroupRowStatus")
        return true;
    return false;
}


}
}

