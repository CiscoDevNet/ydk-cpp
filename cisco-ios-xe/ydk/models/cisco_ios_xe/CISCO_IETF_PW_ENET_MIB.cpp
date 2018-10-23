
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_ENET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ENET_MIB {

CISCOIETFPWENETMIB::CISCOIETFPWENETMIB()
    :
    cpwvcenettable(std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetTable>())
    , cpwvcenetmplsprimappingtable(std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable>())
    , cpwvcenetstatstable(std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetStatsTable>())
{
    cpwvcenettable->parent = this;
    cpwvcenetmplsprimappingtable->parent = this;
    cpwvcenetstatstable->parent = this;

    yang_name = "CISCO-IETF-PW-ENET-MIB"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFPWENETMIB::~CISCOIETFPWENETMIB()
{
}

bool CISCOIETFPWENETMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cpwvcenettable !=  nullptr && cpwvcenettable->has_data())
	|| (cpwvcenetmplsprimappingtable !=  nullptr && cpwvcenetmplsprimappingtable->has_data())
	|| (cpwvcenetstatstable !=  nullptr && cpwvcenetstatstable->has_data());
}

bool CISCOIETFPWENETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpwvcenettable !=  nullptr && cpwvcenettable->has_operation())
	|| (cpwvcenetmplsprimappingtable !=  nullptr && cpwvcenetmplsprimappingtable->has_operation())
	|| (cpwvcenetstatstable !=  nullptr && cpwvcenetstatstable->has_operation());
}

std::string CISCOIETFPWENETMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetTable")
    {
        if(cpwvcenettable == nullptr)
        {
            cpwvcenettable = std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetTable>();
        }
        return cpwvcenettable;
    }

    if(child_yang_name == "cpwVcEnetMplsPriMappingTable")
    {
        if(cpwvcenetmplsprimappingtable == nullptr)
        {
            cpwvcenetmplsprimappingtable = std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable>();
        }
        return cpwvcenetmplsprimappingtable;
    }

    if(child_yang_name == "cpwVcEnetStatsTable")
    {
        if(cpwvcenetstatstable == nullptr)
        {
            cpwvcenetstatstable = std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetStatsTable>();
        }
        return cpwvcenetstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWENETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpwvcenettable != nullptr)
    {
        _children["cpwVcEnetTable"] = cpwvcenettable;
    }

    if(cpwvcenetmplsprimappingtable != nullptr)
    {
        _children["cpwVcEnetMplsPriMappingTable"] = cpwvcenetmplsprimappingtable;
    }

    if(cpwvcenetstatstable != nullptr)
    {
        _children["cpwVcEnetStatsTable"] = cpwvcenetstatstable;
    }

    return _children;
}

void CISCOIETFPWENETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFPWENETMIB>();
}

std::string CISCOIETFPWENETMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFPWENETMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFPWENETMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFPWENETMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFPWENETMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEnetTable" || name == "cpwVcEnetMplsPriMappingTable" || name == "cpwVcEnetStatsTable")
        return true;
    return false;
}

CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetTable()
    :
    cpwvcenetentry(this, {"cpwvcindex", "cpwvcenetpwvlan"})
{

    yang_name = "cpwVcEnetTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWENETMIB::CpwVcEnetTable::~CpwVcEnetTable()
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcenetentry.len(); index++)
    {
        if(cpwvcenetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWENETMIB::CpwVcEnetTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetentry.len(); index++)
    {
        if(cpwvcenetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWENETMIB::CpwVcEnetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::CpwVcEnetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::CpwVcEnetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::CpwVcEnetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry>();
        ent_->parent = this;
        cpwvcenetentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWENETMIB::CpwVcEnetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcenetentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWENETMIB::CpwVcEnetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::CpwVcEnetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEnetEntry")
        return true;
    return false;
}

CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetEntry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetpwvlan{YType::int32, "cpwVcEnetPwVlan"},
    cpwvcenetvlanmode{YType::enumeration, "cpwVcEnetVlanMode"},
    cpwvcenetportvlan{YType::int32, "cpwVcEnetPortVlan"},
    cpwvcenetvcifindex{YType::int32, "cpwVcEnetVcIfIndex"},
    cpwvcenetportifindex{YType::int32, "cpwVcEnetPortIfIndex"},
    cpwvcenetrowstatus{YType::enumeration, "cpwVcEnetRowStatus"},
    cpwvcenetstoragetype{YType::enumeration, "cpwVcEnetStorageType"}
{

    yang_name = "cpwVcEnetEntry"; yang_parent_name = "cpwVcEnetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::~CpwVcEnetEntry()
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcindex.is_set
	|| cpwvcenetpwvlan.is_set
	|| cpwvcenetvlanmode.is_set
	|| cpwvcenetportvlan.is_set
	|| cpwvcenetvcifindex.is_set
	|| cpwvcenetportifindex.is_set
	|| cpwvcenetrowstatus.is_set
	|| cpwvcenetstoragetype.is_set;
}

bool CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcenetpwvlan.yfilter)
	|| ydk::is_set(cpwvcenetvlanmode.yfilter)
	|| ydk::is_set(cpwvcenetportvlan.yfilter)
	|| ydk::is_set(cpwvcenetvcifindex.yfilter)
	|| ydk::is_set(cpwvcenetportifindex.yfilter)
	|| ydk::is_set(cpwvcenetrowstatus.yfilter)
	|| ydk::is_set(cpwvcenetstoragetype.yfilter);
}

std::string CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetEntry";
    ADD_KEY_TOKEN(cpwvcindex, "cpwVcIndex");
    ADD_KEY_TOKEN(cpwvcenetpwvlan, "cpwVcEnetPwVlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetpwvlan.is_set || is_set(cpwvcenetpwvlan.yfilter)) leaf_name_data.push_back(cpwvcenetpwvlan.get_name_leafdata());
    if (cpwvcenetvlanmode.is_set || is_set(cpwvcenetvlanmode.yfilter)) leaf_name_data.push_back(cpwvcenetvlanmode.get_name_leafdata());
    if (cpwvcenetportvlan.is_set || is_set(cpwvcenetportvlan.yfilter)) leaf_name_data.push_back(cpwvcenetportvlan.get_name_leafdata());
    if (cpwvcenetvcifindex.is_set || is_set(cpwvcenetvcifindex.yfilter)) leaf_name_data.push_back(cpwvcenetvcifindex.get_name_leafdata());
    if (cpwvcenetportifindex.is_set || is_set(cpwvcenetportifindex.yfilter)) leaf_name_data.push_back(cpwvcenetportifindex.get_name_leafdata());
    if (cpwvcenetrowstatus.is_set || is_set(cpwvcenetrowstatus.yfilter)) leaf_name_data.push_back(cpwvcenetrowstatus.get_name_leafdata());
    if (cpwvcenetstoragetype.is_set || is_set(cpwvcenetstoragetype.yfilter)) leaf_name_data.push_back(cpwvcenetstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetPwVlan")
    {
        cpwvcenetpwvlan = value;
        cpwvcenetpwvlan.value_namespace = name_space;
        cpwvcenetpwvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetVlanMode")
    {
        cpwvcenetvlanmode = value;
        cpwvcenetvlanmode.value_namespace = name_space;
        cpwvcenetvlanmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetPortVlan")
    {
        cpwvcenetportvlan = value;
        cpwvcenetportvlan.value_namespace = name_space;
        cpwvcenetportvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetVcIfIndex")
    {
        cpwvcenetvcifindex = value;
        cpwvcenetvcifindex.value_namespace = name_space;
        cpwvcenetvcifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetPortIfIndex")
    {
        cpwvcenetportifindex = value;
        cpwvcenetportifindex.value_namespace = name_space;
        cpwvcenetportifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetRowStatus")
    {
        cpwvcenetrowstatus = value;
        cpwvcenetrowstatus.value_namespace = name_space;
        cpwvcenetrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetStorageType")
    {
        cpwvcenetstoragetype = value;
        cpwvcenetstoragetype.value_namespace = name_space;
        cpwvcenetstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetPwVlan")
    {
        cpwvcenetpwvlan.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetVlanMode")
    {
        cpwvcenetvlanmode.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetPortVlan")
    {
        cpwvcenetportvlan.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetVcIfIndex")
    {
        cpwvcenetvcifindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetPortIfIndex")
    {
        cpwvcenetportifindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetRowStatus")
    {
        cpwvcenetrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetStorageType")
    {
        cpwvcenetstoragetype.yfilter = yfilter;
    }
}

bool CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcEnetPwVlan" || name == "cpwVcEnetVlanMode" || name == "cpwVcEnetPortVlan" || name == "cpwVcEnetVcIfIndex" || name == "cpwVcEnetPortIfIndex" || name == "cpwVcEnetRowStatus" || name == "cpwVcEnetStorageType")
        return true;
    return false;
}

CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTable()
    :
    cpwvcenetmplsprimappingtableentry(this, {"cpwvcindex"})
{

    yang_name = "cpwVcEnetMplsPriMappingTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::~CpwVcEnetMplsPriMappingTable()
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcenetmplsprimappingtableentry.len(); index++)
    {
        if(cpwvcenetmplsprimappingtableentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetmplsprimappingtableentry.len(); index++)
    {
        if(cpwvcenetmplsprimappingtableentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetMplsPriMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetMplsPriMappingTableEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry>();
        ent_->parent = this;
        cpwvcenetmplsprimappingtableentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcenetmplsprimappingtableentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEnetMplsPriMappingTableEntry")
        return true;
    return false;
}

CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::CpwVcEnetMplsPriMappingTableEntry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetmplsprimapping{YType::bits, "cpwVcEnetMplsPriMapping"},
    cpwvcenetmplsprimappingrowstatus{YType::enumeration, "cpwVcEnetMplsPriMappingRowStatus"},
    cpwvcenetmplsprimappingstoragetype{YType::enumeration, "cpwVcEnetMplsPriMappingStorageType"}
{

    yang_name = "cpwVcEnetMplsPriMappingTableEntry"; yang_parent_name = "cpwVcEnetMplsPriMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::~CpwVcEnetMplsPriMappingTableEntry()
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcindex.is_set
	|| cpwvcenetmplsprimapping.is_set
	|| cpwvcenetmplsprimappingrowstatus.is_set
	|| cpwvcenetmplsprimappingstoragetype.is_set;
}

bool CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcenetmplsprimapping.yfilter)
	|| ydk::is_set(cpwvcenetmplsprimappingrowstatus.yfilter)
	|| ydk::is_set(cpwvcenetmplsprimappingstoragetype.yfilter);
}

std::string CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetMplsPriMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetMplsPriMappingTableEntry";
    ADD_KEY_TOKEN(cpwvcindex, "cpwVcIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetmplsprimapping.is_set || is_set(cpwvcenetmplsprimapping.yfilter)) leaf_name_data.push_back(cpwvcenetmplsprimapping.get_name_leafdata());
    if (cpwvcenetmplsprimappingrowstatus.is_set || is_set(cpwvcenetmplsprimappingrowstatus.yfilter)) leaf_name_data.push_back(cpwvcenetmplsprimappingrowstatus.get_name_leafdata());
    if (cpwvcenetmplsprimappingstoragetype.is_set || is_set(cpwvcenetmplsprimappingstoragetype.yfilter)) leaf_name_data.push_back(cpwvcenetmplsprimappingstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetMplsPriMapping")
    {
        cpwvcenetmplsprimapping[value] = true;
    }
    if(value_path == "cpwVcEnetMplsPriMappingRowStatus")
    {
        cpwvcenetmplsprimappingrowstatus = value;
        cpwvcenetmplsprimappingrowstatus.value_namespace = name_space;
        cpwvcenetmplsprimappingrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetMplsPriMappingStorageType")
    {
        cpwvcenetmplsprimappingstoragetype = value;
        cpwvcenetmplsprimappingstoragetype.value_namespace = name_space;
        cpwvcenetmplsprimappingstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetMplsPriMapping")
    {
        cpwvcenetmplsprimapping.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetMplsPriMappingRowStatus")
    {
        cpwvcenetmplsprimappingrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetMplsPriMappingStorageType")
    {
        cpwvcenetmplsprimappingstoragetype.yfilter = yfilter;
    }
}

bool CISCOIETFPWENETMIB::CpwVcEnetMplsPriMappingTable::CpwVcEnetMplsPriMappingTableEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcEnetMplsPriMapping" || name == "cpwVcEnetMplsPriMappingRowStatus" || name == "cpwVcEnetMplsPriMappingStorageType")
        return true;
    return false;
}

CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsTable()
    :
    cpwvcenetstatsentry(this, {"cpwvcindex"})
{

    yang_name = "cpwVcEnetStatsTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWENETMIB::CpwVcEnetStatsTable::~CpwVcEnetStatsTable()
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcenetstatsentry.len(); index++)
    {
        if(cpwvcenetstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWENETMIB::CpwVcEnetStatsTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetstatsentry.len(); index++)
    {
        if(cpwvcenetstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWENETMIB::CpwVcEnetStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::CpwVcEnetStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::CpwVcEnetStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::CpwVcEnetStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry>();
        ent_->parent = this;
        cpwvcenetstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWENETMIB::CpwVcEnetStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcenetstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWENETMIB::CpwVcEnetStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::CpwVcEnetStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEnetStatsEntry")
        return true;
    return false;
}

CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::CpwVcEnetStatsEntry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetstatsillegalvlan{YType::uint64, "cpwVcEnetStatsIllegalVlan"},
    cpwvcenetstatsillegallength{YType::uint64, "cpwVcEnetStatsIllegalLength"}
{

    yang_name = "cpwVcEnetStatsEntry"; yang_parent_name = "cpwVcEnetStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::~CpwVcEnetStatsEntry()
{
}

bool CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcindex.is_set
	|| cpwvcenetstatsillegalvlan.is_set
	|| cpwvcenetstatsillegallength.is_set;
}

bool CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcenetstatsillegalvlan.yfilter)
	|| ydk::is_set(cpwvcenetstatsillegallength.yfilter);
}

std::string CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetStatsEntry";
    ADD_KEY_TOKEN(cpwvcindex, "cpwVcIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetstatsillegalvlan.is_set || is_set(cpwvcenetstatsillegalvlan.yfilter)) leaf_name_data.push_back(cpwvcenetstatsillegalvlan.get_name_leafdata());
    if (cpwvcenetstatsillegallength.is_set || is_set(cpwvcenetstatsillegallength.yfilter)) leaf_name_data.push_back(cpwvcenetstatsillegallength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetStatsIllegalVlan")
    {
        cpwvcenetstatsillegalvlan = value;
        cpwvcenetstatsillegalvlan.value_namespace = name_space;
        cpwvcenetstatsillegalvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetStatsIllegalLength")
    {
        cpwvcenetstatsillegallength = value;
        cpwvcenetstatsillegallength.value_namespace = name_space;
        cpwvcenetstatsillegallength.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetStatsIllegalVlan")
    {
        cpwvcenetstatsillegalvlan.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetStatsIllegalLength")
    {
        cpwvcenetstatsillegallength.yfilter = yfilter;
    }
}

bool CISCOIETFPWENETMIB::CpwVcEnetStatsTable::CpwVcEnetStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcEnetStatsIllegalVlan" || name == "cpwVcEnetStatsIllegalLength")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetVlanMode::other {0, "other"};
const Enum::YLeaf CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetVlanMode::portBased {1, "portBased"};
const Enum::YLeaf CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetVlanMode::noChange {2, "noChange"};
const Enum::YLeaf CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetVlanMode::changeVlan {3, "changeVlan"};
const Enum::YLeaf CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetVlanMode::addVlan {4, "addVlan"};
const Enum::YLeaf CISCOIETFPWENETMIB::CpwVcEnetTable::CpwVcEnetEntry::CpwVcEnetVlanMode::removeVlan {5, "removeVlan"};


}
}

