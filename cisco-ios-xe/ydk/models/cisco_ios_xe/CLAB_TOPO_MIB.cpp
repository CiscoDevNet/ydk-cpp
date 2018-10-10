
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CLAB_TOPO_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CLAB_TOPO_MIB {

CLABTOPOMIB::CLABTOPOMIB()
    :
    clabtopofibernodecfgtable(std::make_shared<CLABTOPOMIB::ClabTopoFiberNodeCfgTable>())
    , clabtopochfncfgtable(std::make_shared<CLABTOPOMIB::ClabTopoChFnCfgTable>())
{
    clabtopofibernodecfgtable->parent = this;
    clabtopochfncfgtable->parent = this;

    yang_name = "CLAB-TOPO-MIB"; yang_parent_name = "CLAB-TOPO-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CLABTOPOMIB::~CLABTOPOMIB()
{
}

bool CLABTOPOMIB::has_data() const
{
    if (is_presence_container) return true;
    return (clabtopofibernodecfgtable !=  nullptr && clabtopofibernodecfgtable->has_data())
	|| (clabtopochfncfgtable !=  nullptr && clabtopochfncfgtable->has_data());
}

bool CLABTOPOMIB::has_operation() const
{
    return is_set(yfilter)
	|| (clabtopofibernodecfgtable !=  nullptr && clabtopofibernodecfgtable->has_operation())
	|| (clabtopochfncfgtable !=  nullptr && clabtopochfncfgtable->has_operation());
}

std::string CLABTOPOMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CLAB-TOPO-MIB:CLAB-TOPO-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CLABTOPOMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CLABTOPOMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clabTopoFiberNodeCfgTable")
    {
        if(clabtopofibernodecfgtable == nullptr)
        {
            clabtopofibernodecfgtable = std::make_shared<CLABTOPOMIB::ClabTopoFiberNodeCfgTable>();
        }
        return clabtopofibernodecfgtable;
    }

    if(child_yang_name == "clabTopoChFnCfgTable")
    {
        if(clabtopochfncfgtable == nullptr)
        {
            clabtopochfncfgtable = std::make_shared<CLABTOPOMIB::ClabTopoChFnCfgTable>();
        }
        return clabtopochfncfgtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CLABTOPOMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clabtopofibernodecfgtable != nullptr)
    {
        children["clabTopoFiberNodeCfgTable"] = clabtopofibernodecfgtable;
    }

    if(clabtopochfncfgtable != nullptr)
    {
        children["clabTopoChFnCfgTable"] = clabtopochfncfgtable;
    }

    return children;
}

void CLABTOPOMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CLABTOPOMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CLABTOPOMIB::clone_ptr() const
{
    return std::make_shared<CLABTOPOMIB>();
}

std::string CLABTOPOMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CLABTOPOMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CLABTOPOMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CLABTOPOMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CLABTOPOMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clabTopoFiberNodeCfgTable" || name == "clabTopoChFnCfgTable")
        return true;
    return false;
}

CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgTable()
    :
    clabtopofibernodecfgentry(this, {"clabtopofibernodecfgnodename"})
{

    yang_name = "clabTopoFiberNodeCfgTable"; yang_parent_name = "CLAB-TOPO-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CLABTOPOMIB::ClabTopoFiberNodeCfgTable::~ClabTopoFiberNodeCfgTable()
{
}

bool CLABTOPOMIB::ClabTopoFiberNodeCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clabtopofibernodecfgentry.len(); index++)
    {
        if(clabtopofibernodecfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CLABTOPOMIB::ClabTopoFiberNodeCfgTable::has_operation() const
{
    for (std::size_t index=0; index<clabtopofibernodecfgentry.len(); index++)
    {
        if(clabtopofibernodecfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CLABTOPOMIB::ClabTopoFiberNodeCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CLAB-TOPO-MIB:CLAB-TOPO-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CLABTOPOMIB::ClabTopoFiberNodeCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clabTopoFiberNodeCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CLABTOPOMIB::ClabTopoFiberNodeCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CLABTOPOMIB::ClabTopoFiberNodeCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clabTopoFiberNodeCfgEntry")
    {
        auto c = std::make_shared<CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry>();
        c->parent = this;
        clabtopofibernodecfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CLABTOPOMIB::ClabTopoFiberNodeCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clabtopofibernodecfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CLABTOPOMIB::ClabTopoFiberNodeCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CLABTOPOMIB::ClabTopoFiberNodeCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CLABTOPOMIB::ClabTopoFiberNodeCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clabTopoFiberNodeCfgEntry")
        return true;
    return false;
}

CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::ClabTopoFiberNodeCfgEntry()
    :
    clabtopofibernodecfgnodename{YType::str, "clabTopoFiberNodeCfgNodeName"},
    clabtopofibernodecfgnodedescr{YType::str, "clabTopoFiberNodeCfgNodeDescr"},
    clabtopofibernodecfgrowstatus{YType::enumeration, "clabTopoFiberNodeCfgRowStatus"}
{

    yang_name = "clabTopoFiberNodeCfgEntry"; yang_parent_name = "clabTopoFiberNodeCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::~ClabTopoFiberNodeCfgEntry()
{
}

bool CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return clabtopofibernodecfgnodename.is_set
	|| clabtopofibernodecfgnodedescr.is_set
	|| clabtopofibernodecfgrowstatus.is_set;
}

bool CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clabtopofibernodecfgnodename.yfilter)
	|| ydk::is_set(clabtopofibernodecfgnodedescr.yfilter)
	|| ydk::is_set(clabtopofibernodecfgrowstatus.yfilter);
}

std::string CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CLAB-TOPO-MIB:CLAB-TOPO-MIB/clabTopoFiberNodeCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clabTopoFiberNodeCfgEntry";
    ADD_KEY_TOKEN(clabtopofibernodecfgnodename, "clabTopoFiberNodeCfgNodeName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clabtopofibernodecfgnodename.is_set || is_set(clabtopofibernodecfgnodename.yfilter)) leaf_name_data.push_back(clabtopofibernodecfgnodename.get_name_leafdata());
    if (clabtopofibernodecfgnodedescr.is_set || is_set(clabtopofibernodecfgnodedescr.yfilter)) leaf_name_data.push_back(clabtopofibernodecfgnodedescr.get_name_leafdata());
    if (clabtopofibernodecfgrowstatus.is_set || is_set(clabtopofibernodecfgrowstatus.yfilter)) leaf_name_data.push_back(clabtopofibernodecfgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clabTopoFiberNodeCfgNodeName")
    {
        clabtopofibernodecfgnodename = value;
        clabtopofibernodecfgnodename.value_namespace = name_space;
        clabtopofibernodecfgnodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabTopoFiberNodeCfgNodeDescr")
    {
        clabtopofibernodecfgnodedescr = value;
        clabtopofibernodecfgnodedescr.value_namespace = name_space;
        clabtopofibernodecfgnodedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabTopoFiberNodeCfgRowStatus")
    {
        clabtopofibernodecfgrowstatus = value;
        clabtopofibernodecfgrowstatus.value_namespace = name_space;
        clabtopofibernodecfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clabTopoFiberNodeCfgNodeName")
    {
        clabtopofibernodecfgnodename.yfilter = yfilter;
    }
    if(value_path == "clabTopoFiberNodeCfgNodeDescr")
    {
        clabtopofibernodecfgnodedescr.yfilter = yfilter;
    }
    if(value_path == "clabTopoFiberNodeCfgRowStatus")
    {
        clabtopofibernodecfgrowstatus.yfilter = yfilter;
    }
}

bool CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clabTopoFiberNodeCfgNodeName" || name == "clabTopoFiberNodeCfgNodeDescr" || name == "clabTopoFiberNodeCfgRowStatus")
        return true;
    return false;
}

CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgTable()
    :
    clabtopochfncfgentry(this, {"clabtopofibernodecfgnodename", "clabtopochfncfgchifindex"})
{

    yang_name = "clabTopoChFnCfgTable"; yang_parent_name = "CLAB-TOPO-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CLABTOPOMIB::ClabTopoChFnCfgTable::~ClabTopoChFnCfgTable()
{
}

bool CLABTOPOMIB::ClabTopoChFnCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clabtopochfncfgentry.len(); index++)
    {
        if(clabtopochfncfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CLABTOPOMIB::ClabTopoChFnCfgTable::has_operation() const
{
    for (std::size_t index=0; index<clabtopochfncfgentry.len(); index++)
    {
        if(clabtopochfncfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CLABTOPOMIB::ClabTopoChFnCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CLAB-TOPO-MIB:CLAB-TOPO-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CLABTOPOMIB::ClabTopoChFnCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clabTopoChFnCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CLABTOPOMIB::ClabTopoChFnCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CLABTOPOMIB::ClabTopoChFnCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clabTopoChFnCfgEntry")
    {
        auto c = std::make_shared<CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry>();
        c->parent = this;
        clabtopochfncfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CLABTOPOMIB::ClabTopoChFnCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clabtopochfncfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CLABTOPOMIB::ClabTopoChFnCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CLABTOPOMIB::ClabTopoChFnCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CLABTOPOMIB::ClabTopoChFnCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clabTopoChFnCfgEntry")
        return true;
    return false;
}

CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::ClabTopoChFnCfgEntry()
    :
    clabtopofibernodecfgnodename{YType::str, "clabTopoFiberNodeCfgNodeName"},
    clabtopochfncfgchifindex{YType::int32, "clabTopoChFnCfgChIfIndex"},
    clabtopochfncfgrowstatus{YType::enumeration, "clabTopoChFnCfgRowStatus"}
{

    yang_name = "clabTopoChFnCfgEntry"; yang_parent_name = "clabTopoChFnCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::~ClabTopoChFnCfgEntry()
{
}

bool CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return clabtopofibernodecfgnodename.is_set
	|| clabtopochfncfgchifindex.is_set
	|| clabtopochfncfgrowstatus.is_set;
}

bool CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clabtopofibernodecfgnodename.yfilter)
	|| ydk::is_set(clabtopochfncfgchifindex.yfilter)
	|| ydk::is_set(clabtopochfncfgrowstatus.yfilter);
}

std::string CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CLAB-TOPO-MIB:CLAB-TOPO-MIB/clabTopoChFnCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clabTopoChFnCfgEntry";
    ADD_KEY_TOKEN(clabtopofibernodecfgnodename, "clabTopoFiberNodeCfgNodeName");
    ADD_KEY_TOKEN(clabtopochfncfgchifindex, "clabTopoChFnCfgChIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clabtopofibernodecfgnodename.is_set || is_set(clabtopofibernodecfgnodename.yfilter)) leaf_name_data.push_back(clabtopofibernodecfgnodename.get_name_leafdata());
    if (clabtopochfncfgchifindex.is_set || is_set(clabtopochfncfgchifindex.yfilter)) leaf_name_data.push_back(clabtopochfncfgchifindex.get_name_leafdata());
    if (clabtopochfncfgrowstatus.is_set || is_set(clabtopochfncfgrowstatus.yfilter)) leaf_name_data.push_back(clabtopochfncfgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clabTopoFiberNodeCfgNodeName")
    {
        clabtopofibernodecfgnodename = value;
        clabtopofibernodecfgnodename.value_namespace = name_space;
        clabtopofibernodecfgnodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabTopoChFnCfgChIfIndex")
    {
        clabtopochfncfgchifindex = value;
        clabtopochfncfgchifindex.value_namespace = name_space;
        clabtopochfncfgchifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabTopoChFnCfgRowStatus")
    {
        clabtopochfncfgrowstatus = value;
        clabtopochfncfgrowstatus.value_namespace = name_space;
        clabtopochfncfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clabTopoFiberNodeCfgNodeName")
    {
        clabtopofibernodecfgnodename.yfilter = yfilter;
    }
    if(value_path == "clabTopoChFnCfgChIfIndex")
    {
        clabtopochfncfgchifindex.yfilter = yfilter;
    }
    if(value_path == "clabTopoChFnCfgRowStatus")
    {
        clabtopochfncfgrowstatus.yfilter = yfilter;
    }
}

bool CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clabTopoFiberNodeCfgNodeName" || name == "clabTopoChFnCfgChIfIndex" || name == "clabTopoChFnCfgRowStatus")
        return true;
    return false;
}


}
}

