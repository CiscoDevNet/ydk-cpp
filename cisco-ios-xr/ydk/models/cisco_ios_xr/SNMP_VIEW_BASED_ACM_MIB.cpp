
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_VIEW_BASED_ACM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMP_VIEW_BASED_ACM_MIB {

SNMPVIEWBASEDACMMIB::SNMPVIEWBASEDACMMIB()
    :
    vacmsecuritytogrouptable(std::make_shared<SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable>())
    , vacmaccesstable(std::make_shared<SNMPVIEWBASEDACMMIB::VacmAccessTable>())
    , vacmviewtreefamilytable(std::make_shared<SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable>())
{
    vacmsecuritytogrouptable->parent = this;
    vacmaccesstable->parent = this;
    vacmviewtreefamilytable->parent = this;

    yang_name = "SNMP-VIEW-BASED-ACM-MIB"; yang_parent_name = "SNMP-VIEW-BASED-ACM-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SNMPVIEWBASEDACMMIB::~SNMPVIEWBASEDACMMIB()
{
}

bool SNMPVIEWBASEDACMMIB::has_data() const
{
    if (is_presence_container) return true;
    return (vacmsecuritytogrouptable !=  nullptr && vacmsecuritytogrouptable->has_data())
	|| (vacmaccesstable !=  nullptr && vacmaccesstable->has_data())
	|| (vacmviewtreefamilytable !=  nullptr && vacmviewtreefamilytable->has_data());
}

bool SNMPVIEWBASEDACMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (vacmsecuritytogrouptable !=  nullptr && vacmsecuritytogrouptable->has_operation())
	|| (vacmaccesstable !=  nullptr && vacmaccesstable->has_operation())
	|| (vacmviewtreefamilytable !=  nullptr && vacmviewtreefamilytable->has_operation());
}

std::string SNMPVIEWBASEDACMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-VIEW-BASED-ACM-MIB:SNMP-VIEW-BASED-ACM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPVIEWBASEDACMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vacmSecurityToGroupTable")
    {
        if(vacmsecuritytogrouptable == nullptr)
        {
            vacmsecuritytogrouptable = std::make_shared<SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable>();
        }
        return vacmsecuritytogrouptable;
    }

    if(child_yang_name == "vacmAccessTable")
    {
        if(vacmaccesstable == nullptr)
        {
            vacmaccesstable = std::make_shared<SNMPVIEWBASEDACMMIB::VacmAccessTable>();
        }
        return vacmaccesstable;
    }

    if(child_yang_name == "vacmViewTreeFamilyTable")
    {
        if(vacmviewtreefamilytable == nullptr)
        {
            vacmviewtreefamilytable = std::make_shared<SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable>();
        }
        return vacmviewtreefamilytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPVIEWBASEDACMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vacmsecuritytogrouptable != nullptr)
    {
        _children["vacmSecurityToGroupTable"] = vacmsecuritytogrouptable;
    }

    if(vacmaccesstable != nullptr)
    {
        _children["vacmAccessTable"] = vacmaccesstable;
    }

    if(vacmviewtreefamilytable != nullptr)
    {
        _children["vacmViewTreeFamilyTable"] = vacmviewtreefamilytable;
    }

    return _children;
}

void SNMPVIEWBASEDACMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPVIEWBASEDACMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::clone_ptr() const
{
    return std::make_shared<SNMPVIEWBASEDACMMIB>();
}

std::string SNMPVIEWBASEDACMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SNMPVIEWBASEDACMMIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SNMPVIEWBASEDACMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPVIEWBASEDACMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SNMPVIEWBASEDACMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vacmSecurityToGroupTable" || name == "vacmAccessTable" || name == "vacmViewTreeFamilyTable")
        return true;
    return false;
}

SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupTable()
    :
    vacmsecuritytogroupentry(this, {"vacmsecuritymodel", "vacmsecurityname"})
{

    yang_name = "vacmSecurityToGroupTable"; yang_parent_name = "SNMP-VIEW-BASED-ACM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::~VacmSecurityToGroupTable()
{
}

bool SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vacmsecuritytogroupentry.len(); index++)
    {
        if(vacmsecuritytogroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::has_operation() const
{
    for (std::size_t index=0; index<vacmsecuritytogroupentry.len(); index++)
    {
        if(vacmsecuritytogroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-VIEW-BASED-ACM-MIB:SNMP-VIEW-BASED-ACM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacmSecurityToGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vacmSecurityToGroupEntry")
    {
        auto ent_ = std::make_shared<SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry>();
        ent_->parent = this;
        vacmsecuritytogroupentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vacmsecuritytogroupentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vacmSecurityToGroupEntry")
        return true;
    return false;
}

SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::VacmSecurityToGroupEntry()
    :
    vacmsecuritymodel{YType::int32, "vacmSecurityModel"},
    vacmsecurityname{YType::str, "vacmSecurityName"},
    vacmgroupname{YType::str, "vacmGroupName"},
    vacmsecuritytogroupstoragetype{YType::enumeration, "vacmSecurityToGroupStorageType"}
{

    yang_name = "vacmSecurityToGroupEntry"; yang_parent_name = "vacmSecurityToGroupTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::~VacmSecurityToGroupEntry()
{
}

bool SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::has_data() const
{
    if (is_presence_container) return true;
    return vacmsecuritymodel.is_set
	|| vacmsecurityname.is_set
	|| vacmgroupname.is_set
	|| vacmsecuritytogroupstoragetype.is_set;
}

bool SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vacmsecuritymodel.yfilter)
	|| ydk::is_set(vacmsecurityname.yfilter)
	|| ydk::is_set(vacmgroupname.yfilter)
	|| ydk::is_set(vacmsecuritytogroupstoragetype.yfilter);
}

std::string SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-VIEW-BASED-ACM-MIB:SNMP-VIEW-BASED-ACM-MIB/vacmSecurityToGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacmSecurityToGroupEntry";
    ADD_KEY_TOKEN(vacmsecuritymodel, "vacmSecurityModel");
    ADD_KEY_TOKEN(vacmsecurityname, "vacmSecurityName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vacmsecuritymodel.is_set || is_set(vacmsecuritymodel.yfilter)) leaf_name_data.push_back(vacmsecuritymodel.get_name_leafdata());
    if (vacmsecurityname.is_set || is_set(vacmsecurityname.yfilter)) leaf_name_data.push_back(vacmsecurityname.get_name_leafdata());
    if (vacmgroupname.is_set || is_set(vacmgroupname.yfilter)) leaf_name_data.push_back(vacmgroupname.get_name_leafdata());
    if (vacmsecuritytogroupstoragetype.is_set || is_set(vacmsecuritytogroupstoragetype.yfilter)) leaf_name_data.push_back(vacmsecuritytogroupstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vacmSecurityModel")
    {
        vacmsecuritymodel = value;
        vacmsecuritymodel.value_namespace = name_space;
        vacmsecuritymodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmSecurityName")
    {
        vacmsecurityname = value;
        vacmsecurityname.value_namespace = name_space;
        vacmsecurityname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmGroupName")
    {
        vacmgroupname = value;
        vacmgroupname.value_namespace = name_space;
        vacmgroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmSecurityToGroupStorageType")
    {
        vacmsecuritytogroupstoragetype = value;
        vacmsecuritytogroupstoragetype.value_namespace = name_space;
        vacmsecuritytogroupstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vacmSecurityModel")
    {
        vacmsecuritymodel.yfilter = yfilter;
    }
    if(value_path == "vacmSecurityName")
    {
        vacmsecurityname.yfilter = yfilter;
    }
    if(value_path == "vacmGroupName")
    {
        vacmgroupname.yfilter = yfilter;
    }
    if(value_path == "vacmSecurityToGroupStorageType")
    {
        vacmsecuritytogroupstoragetype.yfilter = yfilter;
    }
}

bool SNMPVIEWBASEDACMMIB::VacmSecurityToGroupTable::VacmSecurityToGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vacmSecurityModel" || name == "vacmSecurityName" || name == "vacmGroupName" || name == "vacmSecurityToGroupStorageType")
        return true;
    return false;
}

SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessTable()
    :
    vacmaccessentry(this, {"vacmgroupname", "vacmaccesscontextprefix", "vacmaccesssecuritymodel", "vacmaccesssecuritylevel"})
{

    yang_name = "vacmAccessTable"; yang_parent_name = "SNMP-VIEW-BASED-ACM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPVIEWBASEDACMMIB::VacmAccessTable::~VacmAccessTable()
{
}

bool SNMPVIEWBASEDACMMIB::VacmAccessTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vacmaccessentry.len(); index++)
    {
        if(vacmaccessentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPVIEWBASEDACMMIB::VacmAccessTable::has_operation() const
{
    for (std::size_t index=0; index<vacmaccessentry.len(); index++)
    {
        if(vacmaccessentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPVIEWBASEDACMMIB::VacmAccessTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-VIEW-BASED-ACM-MIB:SNMP-VIEW-BASED-ACM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPVIEWBASEDACMMIB::VacmAccessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacmAccessTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPVIEWBASEDACMMIB::VacmAccessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::VacmAccessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vacmAccessEntry")
    {
        auto ent_ = std::make_shared<SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry>();
        ent_->parent = this;
        vacmaccessentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPVIEWBASEDACMMIB::VacmAccessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vacmaccessentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPVIEWBASEDACMMIB::VacmAccessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPVIEWBASEDACMMIB::VacmAccessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPVIEWBASEDACMMIB::VacmAccessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vacmAccessEntry")
        return true;
    return false;
}

SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::VacmAccessEntry()
    :
    vacmgroupname{YType::str, "vacmGroupName"},
    vacmaccesscontextprefix{YType::str, "vacmAccessContextPrefix"},
    vacmaccesssecuritymodel{YType::int32, "vacmAccessSecurityModel"},
    vacmaccesssecuritylevel{YType::enumeration, "vacmAccessSecurityLevel"},
    vacmaccesscontextmatch{YType::enumeration, "vacmAccessContextMatch"},
    vacmaccessreadviewname{YType::str, "vacmAccessReadViewName"},
    vacmaccesswriteviewname{YType::str, "vacmAccessWriteViewName"},
    vacmaccessnotifyviewname{YType::str, "vacmAccessNotifyViewName"},
    vacmaccessstoragetype{YType::enumeration, "vacmAccessStorageType"}
{

    yang_name = "vacmAccessEntry"; yang_parent_name = "vacmAccessTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::~VacmAccessEntry()
{
}

bool SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::has_data() const
{
    if (is_presence_container) return true;
    return vacmgroupname.is_set
	|| vacmaccesscontextprefix.is_set
	|| vacmaccesssecuritymodel.is_set
	|| vacmaccesssecuritylevel.is_set
	|| vacmaccesscontextmatch.is_set
	|| vacmaccessreadviewname.is_set
	|| vacmaccesswriteviewname.is_set
	|| vacmaccessnotifyviewname.is_set
	|| vacmaccessstoragetype.is_set;
}

bool SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vacmgroupname.yfilter)
	|| ydk::is_set(vacmaccesscontextprefix.yfilter)
	|| ydk::is_set(vacmaccesssecuritymodel.yfilter)
	|| ydk::is_set(vacmaccesssecuritylevel.yfilter)
	|| ydk::is_set(vacmaccesscontextmatch.yfilter)
	|| ydk::is_set(vacmaccessreadviewname.yfilter)
	|| ydk::is_set(vacmaccesswriteviewname.yfilter)
	|| ydk::is_set(vacmaccessnotifyviewname.yfilter)
	|| ydk::is_set(vacmaccessstoragetype.yfilter);
}

std::string SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-VIEW-BASED-ACM-MIB:SNMP-VIEW-BASED-ACM-MIB/vacmAccessTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacmAccessEntry";
    ADD_KEY_TOKEN(vacmgroupname, "vacmGroupName");
    ADD_KEY_TOKEN(vacmaccesscontextprefix, "vacmAccessContextPrefix");
    ADD_KEY_TOKEN(vacmaccesssecuritymodel, "vacmAccessSecurityModel");
    ADD_KEY_TOKEN(vacmaccesssecuritylevel, "vacmAccessSecurityLevel");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vacmgroupname.is_set || is_set(vacmgroupname.yfilter)) leaf_name_data.push_back(vacmgroupname.get_name_leafdata());
    if (vacmaccesscontextprefix.is_set || is_set(vacmaccesscontextprefix.yfilter)) leaf_name_data.push_back(vacmaccesscontextprefix.get_name_leafdata());
    if (vacmaccesssecuritymodel.is_set || is_set(vacmaccesssecuritymodel.yfilter)) leaf_name_data.push_back(vacmaccesssecuritymodel.get_name_leafdata());
    if (vacmaccesssecuritylevel.is_set || is_set(vacmaccesssecuritylevel.yfilter)) leaf_name_data.push_back(vacmaccesssecuritylevel.get_name_leafdata());
    if (vacmaccesscontextmatch.is_set || is_set(vacmaccesscontextmatch.yfilter)) leaf_name_data.push_back(vacmaccesscontextmatch.get_name_leafdata());
    if (vacmaccessreadviewname.is_set || is_set(vacmaccessreadviewname.yfilter)) leaf_name_data.push_back(vacmaccessreadviewname.get_name_leafdata());
    if (vacmaccesswriteviewname.is_set || is_set(vacmaccesswriteviewname.yfilter)) leaf_name_data.push_back(vacmaccesswriteviewname.get_name_leafdata());
    if (vacmaccessnotifyviewname.is_set || is_set(vacmaccessnotifyviewname.yfilter)) leaf_name_data.push_back(vacmaccessnotifyviewname.get_name_leafdata());
    if (vacmaccessstoragetype.is_set || is_set(vacmaccessstoragetype.yfilter)) leaf_name_data.push_back(vacmaccessstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vacmGroupName")
    {
        vacmgroupname = value;
        vacmgroupname.value_namespace = name_space;
        vacmgroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessContextPrefix")
    {
        vacmaccesscontextprefix = value;
        vacmaccesscontextprefix.value_namespace = name_space;
        vacmaccesscontextprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessSecurityModel")
    {
        vacmaccesssecuritymodel = value;
        vacmaccesssecuritymodel.value_namespace = name_space;
        vacmaccesssecuritymodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessSecurityLevel")
    {
        vacmaccesssecuritylevel = value;
        vacmaccesssecuritylevel.value_namespace = name_space;
        vacmaccesssecuritylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessContextMatch")
    {
        vacmaccesscontextmatch = value;
        vacmaccesscontextmatch.value_namespace = name_space;
        vacmaccesscontextmatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessReadViewName")
    {
        vacmaccessreadviewname = value;
        vacmaccessreadviewname.value_namespace = name_space;
        vacmaccessreadviewname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessWriteViewName")
    {
        vacmaccesswriteviewname = value;
        vacmaccesswriteviewname.value_namespace = name_space;
        vacmaccesswriteviewname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessNotifyViewName")
    {
        vacmaccessnotifyviewname = value;
        vacmaccessnotifyviewname.value_namespace = name_space;
        vacmaccessnotifyviewname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmAccessStorageType")
    {
        vacmaccessstoragetype = value;
        vacmaccessstoragetype.value_namespace = name_space;
        vacmaccessstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vacmGroupName")
    {
        vacmgroupname.yfilter = yfilter;
    }
    if(value_path == "vacmAccessContextPrefix")
    {
        vacmaccesscontextprefix.yfilter = yfilter;
    }
    if(value_path == "vacmAccessSecurityModel")
    {
        vacmaccesssecuritymodel.yfilter = yfilter;
    }
    if(value_path == "vacmAccessSecurityLevel")
    {
        vacmaccesssecuritylevel.yfilter = yfilter;
    }
    if(value_path == "vacmAccessContextMatch")
    {
        vacmaccesscontextmatch.yfilter = yfilter;
    }
    if(value_path == "vacmAccessReadViewName")
    {
        vacmaccessreadviewname.yfilter = yfilter;
    }
    if(value_path == "vacmAccessWriteViewName")
    {
        vacmaccesswriteviewname.yfilter = yfilter;
    }
    if(value_path == "vacmAccessNotifyViewName")
    {
        vacmaccessnotifyviewname.yfilter = yfilter;
    }
    if(value_path == "vacmAccessStorageType")
    {
        vacmaccessstoragetype.yfilter = yfilter;
    }
}

bool SNMPVIEWBASEDACMMIB::VacmAccessTable::VacmAccessEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vacmGroupName" || name == "vacmAccessContextPrefix" || name == "vacmAccessSecurityModel" || name == "vacmAccessSecurityLevel" || name == "vacmAccessContextMatch" || name == "vacmAccessReadViewName" || name == "vacmAccessWriteViewName" || name == "vacmAccessNotifyViewName" || name == "vacmAccessStorageType")
        return true;
    return false;
}

SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyTable()
    :
    vacmviewtreefamilyentry(this, {"vacmviewtreefamilyviewname", "vacmviewtreefamilysubtree"})
{

    yang_name = "vacmViewTreeFamilyTable"; yang_parent_name = "SNMP-VIEW-BASED-ACM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::~VacmViewTreeFamilyTable()
{
}

bool SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vacmviewtreefamilyentry.len(); index++)
    {
        if(vacmviewtreefamilyentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::has_operation() const
{
    for (std::size_t index=0; index<vacmviewtreefamilyentry.len(); index++)
    {
        if(vacmviewtreefamilyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-VIEW-BASED-ACM-MIB:SNMP-VIEW-BASED-ACM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacmViewTreeFamilyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vacmViewTreeFamilyEntry")
    {
        auto ent_ = std::make_shared<SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry>();
        ent_->parent = this;
        vacmviewtreefamilyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vacmviewtreefamilyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vacmViewTreeFamilyEntry")
        return true;
    return false;
}

SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::VacmViewTreeFamilyEntry()
    :
    vacmviewtreefamilyviewname{YType::str, "vacmViewTreeFamilyViewName"},
    vacmviewtreefamilysubtree{YType::str, "vacmViewTreeFamilySubtree"},
    vacmviewtreefamilymask{YType::str, "vacmViewTreeFamilyMask"},
    vacmviewtreefamilytype{YType::enumeration, "vacmViewTreeFamilyType"},
    vacmviewtreefamilystoragetype{YType::enumeration, "vacmViewTreeFamilyStorageType"}
{

    yang_name = "vacmViewTreeFamilyEntry"; yang_parent_name = "vacmViewTreeFamilyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::~VacmViewTreeFamilyEntry()
{
}

bool SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::has_data() const
{
    if (is_presence_container) return true;
    return vacmviewtreefamilyviewname.is_set
	|| vacmviewtreefamilysubtree.is_set
	|| vacmviewtreefamilymask.is_set
	|| vacmviewtreefamilytype.is_set
	|| vacmviewtreefamilystoragetype.is_set;
}

bool SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vacmviewtreefamilyviewname.yfilter)
	|| ydk::is_set(vacmviewtreefamilysubtree.yfilter)
	|| ydk::is_set(vacmviewtreefamilymask.yfilter)
	|| ydk::is_set(vacmviewtreefamilytype.yfilter)
	|| ydk::is_set(vacmviewtreefamilystoragetype.yfilter);
}

std::string SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-VIEW-BASED-ACM-MIB:SNMP-VIEW-BASED-ACM-MIB/vacmViewTreeFamilyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacmViewTreeFamilyEntry";
    ADD_KEY_TOKEN(vacmviewtreefamilyviewname, "vacmViewTreeFamilyViewName");
    ADD_KEY_TOKEN(vacmviewtreefamilysubtree, "vacmViewTreeFamilySubtree");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vacmviewtreefamilyviewname.is_set || is_set(vacmviewtreefamilyviewname.yfilter)) leaf_name_data.push_back(vacmviewtreefamilyviewname.get_name_leafdata());
    if (vacmviewtreefamilysubtree.is_set || is_set(vacmviewtreefamilysubtree.yfilter)) leaf_name_data.push_back(vacmviewtreefamilysubtree.get_name_leafdata());
    if (vacmviewtreefamilymask.is_set || is_set(vacmviewtreefamilymask.yfilter)) leaf_name_data.push_back(vacmviewtreefamilymask.get_name_leafdata());
    if (vacmviewtreefamilytype.is_set || is_set(vacmviewtreefamilytype.yfilter)) leaf_name_data.push_back(vacmviewtreefamilytype.get_name_leafdata());
    if (vacmviewtreefamilystoragetype.is_set || is_set(vacmviewtreefamilystoragetype.yfilter)) leaf_name_data.push_back(vacmviewtreefamilystoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vacmViewTreeFamilyViewName")
    {
        vacmviewtreefamilyviewname = value;
        vacmviewtreefamilyviewname.value_namespace = name_space;
        vacmviewtreefamilyviewname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmViewTreeFamilySubtree")
    {
        vacmviewtreefamilysubtree = value;
        vacmviewtreefamilysubtree.value_namespace = name_space;
        vacmviewtreefamilysubtree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmViewTreeFamilyMask")
    {
        vacmviewtreefamilymask = value;
        vacmviewtreefamilymask.value_namespace = name_space;
        vacmviewtreefamilymask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmViewTreeFamilyType")
    {
        vacmviewtreefamilytype = value;
        vacmviewtreefamilytype.value_namespace = name_space;
        vacmviewtreefamilytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vacmViewTreeFamilyStorageType")
    {
        vacmviewtreefamilystoragetype = value;
        vacmviewtreefamilystoragetype.value_namespace = name_space;
        vacmviewtreefamilystoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vacmViewTreeFamilyViewName")
    {
        vacmviewtreefamilyviewname.yfilter = yfilter;
    }
    if(value_path == "vacmViewTreeFamilySubtree")
    {
        vacmviewtreefamilysubtree.yfilter = yfilter;
    }
    if(value_path == "vacmViewTreeFamilyMask")
    {
        vacmviewtreefamilymask.yfilter = yfilter;
    }
    if(value_path == "vacmViewTreeFamilyType")
    {
        vacmviewtreefamilytype.yfilter = yfilter;
    }
    if(value_path == "vacmViewTreeFamilyStorageType")
    {
        vacmviewtreefamilystoragetype.yfilter = yfilter;
    }
}

bool SNMPVIEWBASEDACMMIB::VacmViewTreeFamilyTable::VacmViewTreeFamilyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vacmViewTreeFamilyViewName" || name == "vacmViewTreeFamilySubtree" || name == "vacmViewTreeFamilyMask" || name == "vacmViewTreeFamilyType" || name == "vacmViewTreeFamilyStorageType")
        return true;
    return false;
}

const Enum::YLeaf VacmAccessContextMatchType::exact {1, "exact"};
const Enum::YLeaf VacmAccessContextMatchType::prefix {2, "prefix"};

const Enum::YLeaf VacmViewTreeFamilyTypeType::included {1, "included"};
const Enum::YLeaf VacmViewTreeFamilyTypeType::excluded {2, "excluded"};


}
}

