
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_STATE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ENTITY_STATE_MIB {

ENTITYSTATEMIB::ENTITYSTATEMIB()
    :
    entstatetable(std::make_shared<ENTITYSTATEMIB::EntStateTable>())
{
    entstatetable->parent = this;

    yang_name = "ENTITY-STATE-MIB"; yang_parent_name = "ENTITY-STATE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

ENTITYSTATEMIB::~ENTITYSTATEMIB()
{
}

bool ENTITYSTATEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (entstatetable !=  nullptr && entstatetable->has_data());
}

bool ENTITYSTATEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (entstatetable !=  nullptr && entstatetable->has_operation());
}

std::string ENTITYSTATEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-STATE-MIB:ENTITY-STATE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYSTATEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYSTATEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entStateTable")
    {
        if(entstatetable == nullptr)
        {
            entstatetable = std::make_shared<ENTITYSTATEMIB::EntStateTable>();
        }
        return entstatetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYSTATEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(entstatetable != nullptr)
    {
        children["entStateTable"] = entstatetable;
    }

    return children;
}

void ENTITYSTATEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYSTATEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ENTITYSTATEMIB::clone_ptr() const
{
    return std::make_shared<ENTITYSTATEMIB>();
}

std::string ENTITYSTATEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ENTITYSTATEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ENTITYSTATEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ENTITYSTATEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ENTITYSTATEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entStateTable")
        return true;
    return false;
}

ENTITYSTATEMIB::EntStateTable::EntStateTable()
    :
    entstateentry(this, {"entphysicalindex"})
{

    yang_name = "entStateTable"; yang_parent_name = "ENTITY-STATE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYSTATEMIB::EntStateTable::~EntStateTable()
{
}

bool ENTITYSTATEMIB::EntStateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entstateentry.len(); index++)
    {
        if(entstateentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYSTATEMIB::EntStateTable::has_operation() const
{
    for (std::size_t index=0; index<entstateentry.len(); index++)
    {
        if(entstateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYSTATEMIB::EntStateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-STATE-MIB:ENTITY-STATE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYSTATEMIB::EntStateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entStateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYSTATEMIB::EntStateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYSTATEMIB::EntStateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entStateEntry")
    {
        auto c = std::make_shared<ENTITYSTATEMIB::EntStateTable::EntStateEntry>();
        c->parent = this;
        entstateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYSTATEMIB::EntStateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : entstateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ENTITYSTATEMIB::EntStateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYSTATEMIB::EntStateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYSTATEMIB::EntStateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entStateEntry")
        return true;
    return false;
}

ENTITYSTATEMIB::EntStateTable::EntStateEntry::EntStateEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entstatelastchanged{YType::str, "entStateLastChanged"},
    entstateadmin{YType::enumeration, "entStateAdmin"},
    entstateoper{YType::enumeration, "entStateOper"},
    entstateusage{YType::enumeration, "entStateUsage"},
    entstatealarm{YType::bits, "entStateAlarm"},
    entstatestandby{YType::enumeration, "entStateStandby"}
{

    yang_name = "entStateEntry"; yang_parent_name = "entStateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYSTATEMIB::EntStateTable::EntStateEntry::~EntStateEntry()
{
}

bool ENTITYSTATEMIB::EntStateTable::EntStateEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| entstatelastchanged.is_set
	|| entstateadmin.is_set
	|| entstateoper.is_set
	|| entstateusage.is_set
	|| entstatealarm.is_set
	|| entstatestandby.is_set;
}

bool ENTITYSTATEMIB::EntStateTable::EntStateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entstatelastchanged.yfilter)
	|| ydk::is_set(entstateadmin.yfilter)
	|| ydk::is_set(entstateoper.yfilter)
	|| ydk::is_set(entstateusage.yfilter)
	|| ydk::is_set(entstatealarm.yfilter)
	|| ydk::is_set(entstatestandby.yfilter);
}

std::string ENTITYSTATEMIB::EntStateTable::EntStateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-STATE-MIB:ENTITY-STATE-MIB/entStateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYSTATEMIB::EntStateTable::EntStateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entStateEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYSTATEMIB::EntStateTable::EntStateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entstatelastchanged.is_set || is_set(entstatelastchanged.yfilter)) leaf_name_data.push_back(entstatelastchanged.get_name_leafdata());
    if (entstateadmin.is_set || is_set(entstateadmin.yfilter)) leaf_name_data.push_back(entstateadmin.get_name_leafdata());
    if (entstateoper.is_set || is_set(entstateoper.yfilter)) leaf_name_data.push_back(entstateoper.get_name_leafdata());
    if (entstateusage.is_set || is_set(entstateusage.yfilter)) leaf_name_data.push_back(entstateusage.get_name_leafdata());
    if (entstatealarm.is_set || is_set(entstatealarm.yfilter)) leaf_name_data.push_back(entstatealarm.get_name_leafdata());
    if (entstatestandby.is_set || is_set(entstatestandby.yfilter)) leaf_name_data.push_back(entstatestandby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYSTATEMIB::EntStateTable::EntStateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYSTATEMIB::EntStateTable::EntStateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ENTITYSTATEMIB::EntStateTable::EntStateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateLastChanged")
    {
        entstatelastchanged = value;
        entstatelastchanged.value_namespace = name_space;
        entstatelastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateAdmin")
    {
        entstateadmin = value;
        entstateadmin.value_namespace = name_space;
        entstateadmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateOper")
    {
        entstateoper = value;
        entstateoper.value_namespace = name_space;
        entstateoper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateUsage")
    {
        entstateusage = value;
        entstateusage.value_namespace = name_space;
        entstateusage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entStateAlarm")
    {
        entstatealarm[value] = true;
    }
    if(value_path == "entStateStandby")
    {
        entstatestandby = value;
        entstatestandby.value_namespace = name_space;
        entstatestandby.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYSTATEMIB::EntStateTable::EntStateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entStateLastChanged")
    {
        entstatelastchanged.yfilter = yfilter;
    }
    if(value_path == "entStateAdmin")
    {
        entstateadmin.yfilter = yfilter;
    }
    if(value_path == "entStateOper")
    {
        entstateoper.yfilter = yfilter;
    }
    if(value_path == "entStateUsage")
    {
        entstateusage.yfilter = yfilter;
    }
    if(value_path == "entStateAlarm")
    {
        entstatealarm.yfilter = yfilter;
    }
    if(value_path == "entStateStandby")
    {
        entstatestandby.yfilter = yfilter;
    }
}

bool ENTITYSTATEMIB::EntStateTable::EntStateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entStateLastChanged" || name == "entStateAdmin" || name == "entStateOper" || name == "entStateUsage" || name == "entStateAlarm" || name == "entStateStandby")
        return true;
    return false;
}


}
}

