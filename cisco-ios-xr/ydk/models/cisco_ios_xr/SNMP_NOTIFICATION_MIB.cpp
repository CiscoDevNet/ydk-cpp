
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_NOTIFICATION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMP_NOTIFICATION_MIB {

SNMPNOTIFICATIONMIB::SNMPNOTIFICATIONMIB()
    :
    snmpnotifytable(std::make_shared<SNMPNOTIFICATIONMIB::SnmpNotifyTable>())
    , snmpnotifyfilterprofiletable(nullptr) // presence node
    , snmpnotifyfiltertable(nullptr) // presence node
{
    snmpnotifytable->parent = this;

    yang_name = "SNMP-NOTIFICATION-MIB"; yang_parent_name = "SNMP-NOTIFICATION-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SNMPNOTIFICATIONMIB::~SNMPNOTIFICATIONMIB()
{
}

bool SNMPNOTIFICATIONMIB::has_data() const
{
    if (is_presence_container) return true;
    return (snmpnotifytable !=  nullptr && snmpnotifytable->has_data())
	|| (snmpnotifyfilterprofiletable !=  nullptr && snmpnotifyfilterprofiletable->has_data())
	|| (snmpnotifyfiltertable !=  nullptr && snmpnotifyfiltertable->has_data());
}

bool SNMPNOTIFICATIONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (snmpnotifytable !=  nullptr && snmpnotifytable->has_operation())
	|| (snmpnotifyfilterprofiletable !=  nullptr && snmpnotifyfilterprofiletable->has_operation())
	|| (snmpnotifyfiltertable !=  nullptr && snmpnotifyfiltertable->has_operation());
}

std::string SNMPNOTIFICATIONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-NOTIFICATION-MIB:SNMP-NOTIFICATION-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPNOTIFICATIONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpNotifyTable")
    {
        if(snmpnotifytable == nullptr)
        {
            snmpnotifytable = std::make_shared<SNMPNOTIFICATIONMIB::SnmpNotifyTable>();
        }
        return snmpnotifytable;
    }

    if(child_yang_name == "snmpNotifyFilterProfileTable")
    {
        if(snmpnotifyfilterprofiletable == nullptr)
        {
            snmpnotifyfilterprofiletable = std::make_shared<SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable>();
        }
        return snmpnotifyfilterprofiletable;
    }

    if(child_yang_name == "snmpNotifyFilterTable")
    {
        if(snmpnotifyfiltertable == nullptr)
        {
            snmpnotifyfiltertable = std::make_shared<SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable>();
        }
        return snmpnotifyfiltertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPNOTIFICATIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmpnotifytable != nullptr)
    {
        _children["snmpNotifyTable"] = snmpnotifytable;
    }

    if(snmpnotifyfilterprofiletable != nullptr)
    {
        _children["snmpNotifyFilterProfileTable"] = snmpnotifyfilterprofiletable;
    }

    if(snmpnotifyfiltertable != nullptr)
    {
        _children["snmpNotifyFilterTable"] = snmpnotifyfiltertable;
    }

    return _children;
}

void SNMPNOTIFICATIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPNOTIFICATIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::clone_ptr() const
{
    return std::make_shared<SNMPNOTIFICATIONMIB>();
}

std::string SNMPNOTIFICATIONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SNMPNOTIFICATIONMIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SNMPNOTIFICATIONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPNOTIFICATIONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SNMPNOTIFICATIONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpNotifyTable" || name == "snmpNotifyFilterProfileTable" || name == "snmpNotifyFilterTable")
        return true;
    return false;
}

SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyTable()
    :
    snmpnotifyentry(this, {"snmpnotifyname"})
{

    yang_name = "snmpNotifyTable"; yang_parent_name = "SNMP-NOTIFICATION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPNOTIFICATIONMIB::SnmpNotifyTable::~SnmpNotifyTable()
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmpnotifyentry.len(); index++)
    {
        if(snmpnotifyentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyTable::has_operation() const
{
    for (std::size_t index=0; index<snmpnotifyentry.len(); index++)
    {
        if(snmpnotifyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-NOTIFICATION-MIB:SNMP-NOTIFICATION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpNotifyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPNOTIFICATIONMIB::SnmpNotifyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::SnmpNotifyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpNotifyEntry")
    {
        auto ent_ = std::make_shared<SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry>();
        ent_->parent = this;
        snmpnotifyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPNOTIFICATIONMIB::SnmpNotifyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmpnotifyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPNOTIFICATIONMIB::SnmpNotifyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPNOTIFICATIONMIB::SnmpNotifyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpNotifyEntry")
        return true;
    return false;
}

SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::SnmpNotifyEntry()
    :
    snmpnotifyname{YType::str, "snmpNotifyName"},
    snmpnotifytag{YType::str, "snmpNotifyTag"},
    snmpnotifytype{YType::enumeration, "snmpNotifyType"},
    snmpnotifystoragetype{YType::enumeration, "snmpNotifyStorageType"}
{

    yang_name = "snmpNotifyEntry"; yang_parent_name = "snmpNotifyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::~SnmpNotifyEntry()
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::has_data() const
{
    if (is_presence_container) return true;
    return snmpnotifyname.is_set
	|| snmpnotifytag.is_set
	|| snmpnotifytype.is_set
	|| snmpnotifystoragetype.is_set;
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpnotifyname.yfilter)
	|| ydk::is_set(snmpnotifytag.yfilter)
	|| ydk::is_set(snmpnotifytype.yfilter)
	|| ydk::is_set(snmpnotifystoragetype.yfilter);
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-NOTIFICATION-MIB:SNMP-NOTIFICATION-MIB/snmpNotifyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpNotifyEntry";
    ADD_KEY_TOKEN(snmpnotifyname, "snmpNotifyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpnotifyname.is_set || is_set(snmpnotifyname.yfilter)) leaf_name_data.push_back(snmpnotifyname.get_name_leafdata());
    if (snmpnotifytag.is_set || is_set(snmpnotifytag.yfilter)) leaf_name_data.push_back(snmpnotifytag.get_name_leafdata());
    if (snmpnotifytype.is_set || is_set(snmpnotifytype.yfilter)) leaf_name_data.push_back(snmpnotifytype.get_name_leafdata());
    if (snmpnotifystoragetype.is_set || is_set(snmpnotifystoragetype.yfilter)) leaf_name_data.push_back(snmpnotifystoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpNotifyName")
    {
        snmpnotifyname = value;
        snmpnotifyname.value_namespace = name_space;
        snmpnotifyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyTag")
    {
        snmpnotifytag = value;
        snmpnotifytag.value_namespace = name_space;
        snmpnotifytag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyType")
    {
        snmpnotifytype = value;
        snmpnotifytype.value_namespace = name_space;
        snmpnotifytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyStorageType")
    {
        snmpnotifystoragetype = value;
        snmpnotifystoragetype.value_namespace = name_space;
        snmpnotifystoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpNotifyName")
    {
        snmpnotifyname.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyTag")
    {
        snmpnotifytag.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyType")
    {
        snmpnotifytype.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyStorageType")
    {
        snmpnotifystoragetype.yfilter = yfilter;
    }
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpNotifyName" || name == "snmpNotifyTag" || name == "snmpNotifyType" || name == "snmpNotifyStorageType")
        return true;
    return false;
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileTable()
    :
    snmpnotifyfilterprofileentry(this, {"snmptargetparamsname"})
{

    yang_name = "snmpNotifyFilterProfileTable"; yang_parent_name = "SNMP-NOTIFICATION-MIB"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::~SnmpNotifyFilterProfileTable()
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmpnotifyfilterprofileentry.len(); index++)
    {
        if(snmpnotifyfilterprofileentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::has_operation() const
{
    for (std::size_t index=0; index<snmpnotifyfilterprofileentry.len(); index++)
    {
        if(snmpnotifyfilterprofileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-NOTIFICATION-MIB:SNMP-NOTIFICATION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpNotifyFilterProfileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpNotifyFilterProfileEntry")
    {
        auto ent_ = std::make_shared<SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry>();
        ent_->parent = this;
        snmpnotifyfilterprofileentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmpnotifyfilterprofileentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpNotifyFilterProfileEntry")
        return true;
    return false;
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::SnmpNotifyFilterProfileEntry()
    :
    snmptargetparamsname{YType::str, "snmpTargetParamsName"},
    snmpnotifyfilterprofilename{YType::str, "snmpNotifyFilterProfileName"},
    snmpnotifyfilterprofilestortype{YType::enumeration, "snmpNotifyFilterProfileStorType"}
{

    yang_name = "snmpNotifyFilterProfileEntry"; yang_parent_name = "snmpNotifyFilterProfileTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::~SnmpNotifyFilterProfileEntry()
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::has_data() const
{
    if (is_presence_container) return true;
    return snmptargetparamsname.is_set
	|| snmpnotifyfilterprofilename.is_set
	|| snmpnotifyfilterprofilestortype.is_set;
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmptargetparamsname.yfilter)
	|| ydk::is_set(snmpnotifyfilterprofilename.yfilter)
	|| ydk::is_set(snmpnotifyfilterprofilestortype.yfilter);
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-NOTIFICATION-MIB:SNMP-NOTIFICATION-MIB/snmpNotifyFilterProfileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpNotifyFilterProfileEntry";
    ADD_KEY_TOKEN(snmptargetparamsname, "snmpTargetParamsName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetparamsname.is_set || is_set(snmptargetparamsname.yfilter)) leaf_name_data.push_back(snmptargetparamsname.get_name_leafdata());
    if (snmpnotifyfilterprofilename.is_set || is_set(snmpnotifyfilterprofilename.yfilter)) leaf_name_data.push_back(snmpnotifyfilterprofilename.get_name_leafdata());
    if (snmpnotifyfilterprofilestortype.is_set || is_set(snmpnotifyfilterprofilestortype.yfilter)) leaf_name_data.push_back(snmpnotifyfilterprofilestortype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpTargetParamsName")
    {
        snmptargetparamsname = value;
        snmptargetparamsname.value_namespace = name_space;
        snmptargetparamsname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyFilterProfileName")
    {
        snmpnotifyfilterprofilename = value;
        snmpnotifyfilterprofilename.value_namespace = name_space;
        snmpnotifyfilterprofilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyFilterProfileStorType")
    {
        snmpnotifyfilterprofilestortype = value;
        snmpnotifyfilterprofilestortype.value_namespace = name_space;
        snmpnotifyfilterprofilestortype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpTargetParamsName")
    {
        snmptargetparamsname.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyFilterProfileName")
    {
        snmpnotifyfilterprofilename.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyFilterProfileStorType")
    {
        snmpnotifyfilterprofilestortype.yfilter = yfilter;
    }
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetParamsName" || name == "snmpNotifyFilterProfileName" || name == "snmpNotifyFilterProfileStorType")
        return true;
    return false;
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterTable()
    :
    snmpnotifyfilterentry(this, {"snmpnotifyfilterprofilename", "snmpnotifyfiltersubtree"})
{

    yang_name = "snmpNotifyFilterTable"; yang_parent_name = "SNMP-NOTIFICATION-MIB"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::~SnmpNotifyFilterTable()
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmpnotifyfilterentry.len(); index++)
    {
        if(snmpnotifyfilterentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::has_operation() const
{
    for (std::size_t index=0; index<snmpnotifyfilterentry.len(); index++)
    {
        if(snmpnotifyfilterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-NOTIFICATION-MIB:SNMP-NOTIFICATION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpNotifyFilterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpNotifyFilterEntry")
    {
        auto ent_ = std::make_shared<SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry>();
        ent_->parent = this;
        snmpnotifyfilterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmpnotifyfilterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpNotifyFilterEntry")
        return true;
    return false;
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::SnmpNotifyFilterEntry()
    :
    snmpnotifyfilterprofilename{YType::str, "snmpNotifyFilterProfileName"},
    snmpnotifyfiltersubtree{YType::str, "snmpNotifyFilterSubtree"},
    snmpnotifyfiltermask{YType::str, "snmpNotifyFilterMask"},
    snmpnotifyfiltertype{YType::enumeration, "snmpNotifyFilterType"},
    snmpnotifyfilterstoragetype{YType::enumeration, "snmpNotifyFilterStorageType"}
{

    yang_name = "snmpNotifyFilterEntry"; yang_parent_name = "snmpNotifyFilterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::~SnmpNotifyFilterEntry()
{
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::has_data() const
{
    if (is_presence_container) return true;
    return snmpnotifyfilterprofilename.is_set
	|| snmpnotifyfiltersubtree.is_set
	|| snmpnotifyfiltermask.is_set
	|| snmpnotifyfiltertype.is_set
	|| snmpnotifyfilterstoragetype.is_set;
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmpnotifyfilterprofilename.yfilter)
	|| ydk::is_set(snmpnotifyfiltersubtree.yfilter)
	|| ydk::is_set(snmpnotifyfiltermask.yfilter)
	|| ydk::is_set(snmpnotifyfiltertype.yfilter)
	|| ydk::is_set(snmpnotifyfilterstoragetype.yfilter);
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-NOTIFICATION-MIB:SNMP-NOTIFICATION-MIB/snmpNotifyFilterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpNotifyFilterEntry";
    ADD_KEY_TOKEN(snmpnotifyfilterprofilename, "snmpNotifyFilterProfileName");
    ADD_KEY_TOKEN(snmpnotifyfiltersubtree, "snmpNotifyFilterSubtree");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmpnotifyfilterprofilename.is_set || is_set(snmpnotifyfilterprofilename.yfilter)) leaf_name_data.push_back(snmpnotifyfilterprofilename.get_name_leafdata());
    if (snmpnotifyfiltersubtree.is_set || is_set(snmpnotifyfiltersubtree.yfilter)) leaf_name_data.push_back(snmpnotifyfiltersubtree.get_name_leafdata());
    if (snmpnotifyfiltermask.is_set || is_set(snmpnotifyfiltermask.yfilter)) leaf_name_data.push_back(snmpnotifyfiltermask.get_name_leafdata());
    if (snmpnotifyfiltertype.is_set || is_set(snmpnotifyfiltertype.yfilter)) leaf_name_data.push_back(snmpnotifyfiltertype.get_name_leafdata());
    if (snmpnotifyfilterstoragetype.is_set || is_set(snmpnotifyfilterstoragetype.yfilter)) leaf_name_data.push_back(snmpnotifyfilterstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpNotifyFilterProfileName")
    {
        snmpnotifyfilterprofilename = value;
        snmpnotifyfilterprofilename.value_namespace = name_space;
        snmpnotifyfilterprofilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyFilterSubtree")
    {
        snmpnotifyfiltersubtree = value;
        snmpnotifyfiltersubtree.value_namespace = name_space;
        snmpnotifyfiltersubtree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyFilterMask")
    {
        snmpnotifyfiltermask = value;
        snmpnotifyfiltermask.value_namespace = name_space;
        snmpnotifyfiltermask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyFilterType")
    {
        snmpnotifyfiltertype = value;
        snmpnotifyfiltertype.value_namespace = name_space;
        snmpnotifyfiltertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpNotifyFilterStorageType")
    {
        snmpnotifyfilterstoragetype = value;
        snmpnotifyfilterstoragetype.value_namespace = name_space;
        snmpnotifyfilterstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpNotifyFilterProfileName")
    {
        snmpnotifyfilterprofilename.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyFilterSubtree")
    {
        snmpnotifyfiltersubtree.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyFilterMask")
    {
        snmpnotifyfiltermask.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyFilterType")
    {
        snmpnotifyfiltertype.yfilter = yfilter;
    }
    if(value_path == "snmpNotifyFilterStorageType")
    {
        snmpnotifyfilterstoragetype.yfilter = yfilter;
    }
}

bool SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpNotifyFilterProfileName" || name == "snmpNotifyFilterSubtree" || name == "snmpNotifyFilterMask" || name == "snmpNotifyFilterType" || name == "snmpNotifyFilterStorageType")
        return true;
    return false;
}

const Enum::YLeaf SnmpNotifyTypeType::trap {1, "trap"};
const Enum::YLeaf SnmpNotifyTypeType::inform {2, "inform"};

const Enum::YLeaf SnmpNotifyFilterTypeType::included {1, "included"};
const Enum::YLeaf SnmpNotifyFilterTypeType::excluded {2, "excluded"};


}
}

