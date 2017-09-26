
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
    cpwvcenetmplsprimappingtable(std::make_shared<CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable>())
	,cpwvcenetstatstable(std::make_shared<CISCOIETFPWENETMIB::Cpwvcenetstatstable>())
	,cpwvcenettable(std::make_shared<CISCOIETFPWENETMIB::Cpwvcenettable>())
{
    cpwvcenetmplsprimappingtable->parent = this;
    cpwvcenetstatstable->parent = this;
    cpwvcenettable->parent = this;

    yang_name = "CISCO-IETF-PW-ENET-MIB"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIETFPWENETMIB::~CISCOIETFPWENETMIB()
{
}

bool CISCOIETFPWENETMIB::has_data() const
{
    return (cpwvcenetmplsprimappingtable !=  nullptr && cpwvcenetmplsprimappingtable->has_data())
	|| (cpwvcenetstatstable !=  nullptr && cpwvcenetstatstable->has_data())
	|| (cpwvcenettable !=  nullptr && cpwvcenettable->has_data());
}

bool CISCOIETFPWENETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpwvcenetmplsprimappingtable !=  nullptr && cpwvcenetmplsprimappingtable->has_operation())
	|| (cpwvcenetstatstable !=  nullptr && cpwvcenetstatstable->has_operation())
	|| (cpwvcenettable !=  nullptr && cpwvcenettable->has_operation());
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

std::shared_ptr<Entity> CISCOIETFPWENETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetMplsPriMappingTable")
    {
        if(cpwvcenetmplsprimappingtable == nullptr)
        {
            cpwvcenetmplsprimappingtable = std::make_shared<CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable>();
        }
        return cpwvcenetmplsprimappingtable;
    }

    if(child_yang_name == "cpwVcEnetStatsTable")
    {
        if(cpwvcenetstatstable == nullptr)
        {
            cpwvcenetstatstable = std::make_shared<CISCOIETFPWENETMIB::Cpwvcenetstatstable>();
        }
        return cpwvcenetstatstable;
    }

    if(child_yang_name == "cpwVcEnetTable")
    {
        if(cpwvcenettable == nullptr)
        {
            cpwvcenettable = std::make_shared<CISCOIETFPWENETMIB::Cpwvcenettable>();
        }
        return cpwvcenettable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWENETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwvcenetmplsprimappingtable != nullptr)
    {
        children["cpwVcEnetMplsPriMappingTable"] = cpwvcenetmplsprimappingtable;
    }

    if(cpwvcenetstatstable != nullptr)
    {
        children["cpwVcEnetStatsTable"] = cpwvcenetstatstable;
    }

    if(cpwvcenettable != nullptr)
    {
        children["cpwVcEnetTable"] = cpwvcenettable;
    }

    return children;
}

void CISCOIETFPWENETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFPWENETMIB::clone_ptr() const
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
    if(name == "cpwVcEnetMplsPriMappingTable" || name == "cpwVcEnetStatsTable" || name == "cpwVcEnetTable")
        return true;
    return false;
}

CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtable()
{

    yang_name = "cpwVcEnetMplsPriMappingTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::~Cpwvcenetmplsprimappingtable()
{
}

bool CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcenetmplsprimappingtableentry.size(); index++)
    {
        if(cpwvcenetmplsprimappingtableentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetmplsprimappingtableentry.size(); index++)
    {
        if(cpwvcenetmplsprimappingtableentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetMplsPriMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetMplsPriMappingTableEntry")
    {
        for(auto const & c : cpwvcenetmplsprimappingtableentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry>();
        c->parent = this;
        cpwvcenetmplsprimappingtableentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcenetmplsprimappingtableentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEnetMplsPriMappingTableEntry")
        return true;
    return false;
}

CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::Cpwvcenetmplsprimappingtableentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetmplsprimapping{YType::bits, "cpwVcEnetMplsPriMapping"},
    cpwvcenetmplsprimappingrowstatus{YType::enumeration, "cpwVcEnetMplsPriMappingRowStatus"},
    cpwvcenetmplsprimappingstoragetype{YType::enumeration, "cpwVcEnetMplsPriMappingStorageType"}
{

    yang_name = "cpwVcEnetMplsPriMappingTableEntry"; yang_parent_name = "cpwVcEnetMplsPriMappingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::~Cpwvcenetmplsprimappingtableentry()
{
}

bool CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcenetmplsprimapping.is_set
	|| cpwvcenetmplsprimappingrowstatus.is_set
	|| cpwvcenetmplsprimappingstoragetype.is_set;
}

bool CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcenetmplsprimapping.yfilter)
	|| ydk::is_set(cpwvcenetmplsprimappingrowstatus.yfilter)
	|| ydk::is_set(cpwvcenetmplsprimappingstoragetype.yfilter);
}

std::string CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetMplsPriMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetMplsPriMappingTableEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetmplsprimapping.is_set || is_set(cpwvcenetmplsprimapping.yfilter)) leaf_name_data.push_back(cpwvcenetmplsprimapping.get_name_leafdata());
    if (cpwvcenetmplsprimappingrowstatus.is_set || is_set(cpwvcenetmplsprimappingrowstatus.yfilter)) leaf_name_data.push_back(cpwvcenetmplsprimappingrowstatus.get_name_leafdata());
    if (cpwvcenetmplsprimappingstoragetype.is_set || is_set(cpwvcenetmplsprimappingstoragetype.yfilter)) leaf_name_data.push_back(cpwvcenetmplsprimappingstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcEnetMplsPriMapping" || name == "cpwVcEnetMplsPriMappingRowStatus" || name == "cpwVcEnetMplsPriMappingStorageType")
        return true;
    return false;
}

CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatstable()
{

    yang_name = "cpwVcEnetStatsTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWENETMIB::Cpwvcenetstatstable::~Cpwvcenetstatstable()
{
}

bool CISCOIETFPWENETMIB::Cpwvcenetstatstable::has_data() const
{
    for (std::size_t index=0; index<cpwvcenetstatsentry.size(); index++)
    {
        if(cpwvcenetstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWENETMIB::Cpwvcenetstatstable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetstatsentry.size(); index++)
    {
        if(cpwvcenetstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWENETMIB::Cpwvcenetstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::Cpwvcenetstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::Cpwvcenetstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWENETMIB::Cpwvcenetstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetStatsEntry")
    {
        for(auto const & c : cpwvcenetstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry>();
        c->parent = this;
        cpwvcenetstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWENETMIB::Cpwvcenetstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcenetstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWENETMIB::Cpwvcenetstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::Cpwvcenetstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWENETMIB::Cpwvcenetstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEnetStatsEntry")
        return true;
    return false;
}

CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::Cpwvcenetstatsentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetstatsillegallength{YType::uint64, "cpwVcEnetStatsIllegalLength"},
    cpwvcenetstatsillegalvlan{YType::uint64, "cpwVcEnetStatsIllegalVlan"}
{

    yang_name = "cpwVcEnetStatsEntry"; yang_parent_name = "cpwVcEnetStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::~Cpwvcenetstatsentry()
{
}

bool CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcenetstatsillegallength.is_set
	|| cpwvcenetstatsillegalvlan.is_set;
}

bool CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcenetstatsillegallength.yfilter)
	|| ydk::is_set(cpwvcenetstatsillegalvlan.yfilter);
}

std::string CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetStatsEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetstatsillegallength.is_set || is_set(cpwvcenetstatsillegallength.yfilter)) leaf_name_data.push_back(cpwvcenetstatsillegallength.get_name_leafdata());
    if (cpwvcenetstatsillegalvlan.is_set || is_set(cpwvcenetstatsillegalvlan.yfilter)) leaf_name_data.push_back(cpwvcenetstatsillegalvlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetStatsIllegalLength")
    {
        cpwvcenetstatsillegallength = value;
        cpwvcenetstatsillegallength.value_namespace = name_space;
        cpwvcenetstatsillegallength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetStatsIllegalVlan")
    {
        cpwvcenetstatsillegalvlan = value;
        cpwvcenetstatsillegalvlan.value_namespace = name_space;
        cpwvcenetstatsillegalvlan.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetStatsIllegalLength")
    {
        cpwvcenetstatsillegallength.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetStatsIllegalVlan")
    {
        cpwvcenetstatsillegalvlan.yfilter = yfilter;
    }
}

bool CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcEnetStatsIllegalLength" || name == "cpwVcEnetStatsIllegalVlan")
        return true;
    return false;
}

CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenettable()
{

    yang_name = "cpwVcEnetTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWENETMIB::Cpwvcenettable::~Cpwvcenettable()
{
}

bool CISCOIETFPWENETMIB::Cpwvcenettable::has_data() const
{
    for (std::size_t index=0; index<cpwvcenetentry.size(); index++)
    {
        if(cpwvcenetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWENETMIB::Cpwvcenettable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetentry.size(); index++)
    {
        if(cpwvcenetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWENETMIB::Cpwvcenettable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::Cpwvcenettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::Cpwvcenettable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWENETMIB::Cpwvcenettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetEntry")
    {
        for(auto const & c : cpwvcenetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry>();
        c->parent = this;
        cpwvcenetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWENETMIB::Cpwvcenettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcenetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIETFPWENETMIB::Cpwvcenettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWENETMIB::Cpwvcenettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWENETMIB::Cpwvcenettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcEnetEntry")
        return true;
    return false;
}

CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetpwvlan{YType::int32, "cpwVcEnetPwVlan"},
    cpwvcenetportifindex{YType::int32, "cpwVcEnetPortIfIndex"},
    cpwvcenetportvlan{YType::int32, "cpwVcEnetPortVlan"},
    cpwvcenetrowstatus{YType::enumeration, "cpwVcEnetRowStatus"},
    cpwvcenetstoragetype{YType::enumeration, "cpwVcEnetStorageType"},
    cpwvcenetvcifindex{YType::int32, "cpwVcEnetVcIfIndex"},
    cpwvcenetvlanmode{YType::enumeration, "cpwVcEnetVlanMode"}
{

    yang_name = "cpwVcEnetEntry"; yang_parent_name = "cpwVcEnetTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::~Cpwvcenetentry()
{
}

bool CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcenetpwvlan.is_set
	|| cpwvcenetportifindex.is_set
	|| cpwvcenetportvlan.is_set
	|| cpwvcenetrowstatus.is_set
	|| cpwvcenetstoragetype.is_set
	|| cpwvcenetvcifindex.is_set
	|| cpwvcenetvlanmode.is_set;
}

bool CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcenetpwvlan.yfilter)
	|| ydk::is_set(cpwvcenetportifindex.yfilter)
	|| ydk::is_set(cpwvcenetportvlan.yfilter)
	|| ydk::is_set(cpwvcenetrowstatus.yfilter)
	|| ydk::is_set(cpwvcenetstoragetype.yfilter)
	|| ydk::is_set(cpwvcenetvcifindex.yfilter)
	|| ydk::is_set(cpwvcenetvlanmode.yfilter);
}

std::string CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwVcEnetPwVlan='" <<cpwvcenetpwvlan <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetpwvlan.is_set || is_set(cpwvcenetpwvlan.yfilter)) leaf_name_data.push_back(cpwvcenetpwvlan.get_name_leafdata());
    if (cpwvcenetportifindex.is_set || is_set(cpwvcenetportifindex.yfilter)) leaf_name_data.push_back(cpwvcenetportifindex.get_name_leafdata());
    if (cpwvcenetportvlan.is_set || is_set(cpwvcenetportvlan.yfilter)) leaf_name_data.push_back(cpwvcenetportvlan.get_name_leafdata());
    if (cpwvcenetrowstatus.is_set || is_set(cpwvcenetrowstatus.yfilter)) leaf_name_data.push_back(cpwvcenetrowstatus.get_name_leafdata());
    if (cpwvcenetstoragetype.is_set || is_set(cpwvcenetstoragetype.yfilter)) leaf_name_data.push_back(cpwvcenetstoragetype.get_name_leafdata());
    if (cpwvcenetvcifindex.is_set || is_set(cpwvcenetvcifindex.yfilter)) leaf_name_data.push_back(cpwvcenetvcifindex.get_name_leafdata());
    if (cpwvcenetvlanmode.is_set || is_set(cpwvcenetvlanmode.yfilter)) leaf_name_data.push_back(cpwvcenetvlanmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cpwVcEnetPortIfIndex")
    {
        cpwvcenetportifindex = value;
        cpwvcenetportifindex.value_namespace = name_space;
        cpwvcenetportifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetPortVlan")
    {
        cpwvcenetportvlan = value;
        cpwvcenetportvlan.value_namespace = name_space;
        cpwvcenetportvlan.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cpwVcEnetVcIfIndex")
    {
        cpwvcenetvcifindex = value;
        cpwvcenetvcifindex.value_namespace = name_space;
        cpwvcenetvcifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcEnetVlanMode")
    {
        cpwvcenetvlanmode = value;
        cpwvcenetvlanmode.value_namespace = name_space;
        cpwvcenetvlanmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetPwVlan")
    {
        cpwvcenetpwvlan.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetPortIfIndex")
    {
        cpwvcenetportifindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetPortVlan")
    {
        cpwvcenetportvlan.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetRowStatus")
    {
        cpwvcenetrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetStorageType")
    {
        cpwvcenetstoragetype.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetVcIfIndex")
    {
        cpwvcenetvcifindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcEnetVlanMode")
    {
        cpwvcenetvlanmode.yfilter = yfilter;
    }
}

bool CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcEnetPwVlan" || name == "cpwVcEnetPortIfIndex" || name == "cpwVcEnetPortVlan" || name == "cpwVcEnetRowStatus" || name == "cpwVcEnetStorageType" || name == "cpwVcEnetVcIfIndex" || name == "cpwVcEnetVlanMode")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode::other {0, "other"};
const Enum::YLeaf CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode::portBased {1, "portBased"};
const Enum::YLeaf CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode::noChange {2, "noChange"};
const Enum::YLeaf CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode::changeVlan {3, "changeVlan"};
const Enum::YLeaf CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode::addVlan {4, "addVlan"};
const Enum::YLeaf CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode::removeVlan {5, "removeVlan"};


}
}

