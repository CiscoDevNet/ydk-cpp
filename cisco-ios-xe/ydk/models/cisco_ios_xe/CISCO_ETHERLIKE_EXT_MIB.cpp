
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ETHERLIKE_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ETHERLIKE_EXT_MIB {

CISCOETHERLIKEEXTMIB::CISCOETHERLIKEEXTMIB()
    :
    ceedot3pauseexttable(std::make_shared<CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable>())
    , ceesubinterfacetable(std::make_shared<CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable>())
{
    ceedot3pauseexttable->parent = this;
    ceesubinterfacetable->parent = this;

    yang_name = "CISCO-ETHERLIKE-EXT-MIB"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOETHERLIKEEXTMIB::~CISCOETHERLIKEEXTMIB()
{
}

bool CISCOETHERLIKEEXTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ceedot3pauseexttable !=  nullptr && ceedot3pauseexttable->has_data())
	|| (ceesubinterfacetable !=  nullptr && ceesubinterfacetable->has_data());
}

bool CISCOETHERLIKEEXTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ceedot3pauseexttable !=  nullptr && ceedot3pauseexttable->has_operation())
	|| (ceesubinterfacetable !=  nullptr && ceesubinterfacetable->has_operation());
}

std::string CISCOETHERLIKEEXTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeDot3PauseExtTable")
    {
        if(ceedot3pauseexttable == nullptr)
        {
            ceedot3pauseexttable = std::make_shared<CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable>();
        }
        return ceedot3pauseexttable;
    }

    if(child_yang_name == "ceeSubInterfaceTable")
    {
        if(ceesubinterfacetable == nullptr)
        {
            ceesubinterfacetable = std::make_shared<CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable>();
        }
        return ceesubinterfacetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ceedot3pauseexttable != nullptr)
    {
        children["ceeDot3PauseExtTable"] = ceedot3pauseexttable;
    }

    if(ceesubinterfacetable != nullptr)
    {
        children["ceeSubInterfaceTable"] = ceesubinterfacetable;
    }

    return children;
}

void CISCOETHERLIKEEXTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOETHERLIKEEXTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::clone_ptr() const
{
    return std::make_shared<CISCOETHERLIKEEXTMIB>();
}

std::string CISCOETHERLIKEEXTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOETHERLIKEEXTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOETHERLIKEEXTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOETHERLIKEEXTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOETHERLIKEEXTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeDot3PauseExtTable" || name == "ceeSubInterfaceTable")
        return true;
    return false;
}

CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtTable()
    :
    ceedot3pauseextentry(this, {"dot3statsindex"})
{

    yang_name = "ceeDot3PauseExtTable"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::~CeeDot3PauseExtTable()
{
}

bool CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceedot3pauseextentry.len(); index++)
    {
        if(ceedot3pauseextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::has_operation() const
{
    for (std::size_t index=0; index<ceedot3pauseextentry.len(); index++)
    {
        if(ceedot3pauseextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeDot3PauseExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeDot3PauseExtEntry")
    {
        auto c = std::make_shared<CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry>();
        c->parent = this;
        ceedot3pauseextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceedot3pauseextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeDot3PauseExtEntry")
        return true;
    return false;
}

CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::CeeDot3PauseExtEntry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    ceedot3pauseextadminmode{YType::bits, "ceeDot3PauseExtAdminMode"},
    ceedot3pauseextopermode{YType::bits, "ceeDot3PauseExtOperMode"}
{

    yang_name = "ceeDot3PauseExtEntry"; yang_parent_name = "ceeDot3PauseExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::~CeeDot3PauseExtEntry()
{
}

bool CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot3statsindex.is_set
	|| ceedot3pauseextadminmode.is_set
	|| ceedot3pauseextopermode.is_set;
}

bool CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(ceedot3pauseextadminmode.yfilter)
	|| ydk::is_set(ceedot3pauseextopermode.yfilter);
}

std::string CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/ceeDot3PauseExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeDot3PauseExtEntry";
    ADD_KEY_TOKEN(dot3statsindex, "dot3StatsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (ceedot3pauseextadminmode.is_set || is_set(ceedot3pauseextadminmode.yfilter)) leaf_name_data.push_back(ceedot3pauseextadminmode.get_name_leafdata());
    if (ceedot3pauseextopermode.is_set || is_set(ceedot3pauseextopermode.yfilter)) leaf_name_data.push_back(ceedot3pauseextopermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
        dot3statsindex.value_namespace = name_space;
        dot3statsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceeDot3PauseExtAdminMode")
    {
        ceedot3pauseextadminmode[value] = true;
    }
    if(value_path == "ceeDot3PauseExtOperMode")
    {
        ceedot3pauseextopermode[value] = true;
    }
}

void CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "ceeDot3PauseExtAdminMode")
    {
        ceedot3pauseextadminmode.yfilter = yfilter;
    }
    if(value_path == "ceeDot3PauseExtOperMode")
    {
        ceedot3pauseextopermode.yfilter = yfilter;
    }
}

bool CISCOETHERLIKEEXTMIB::CeeDot3PauseExtTable::CeeDot3PauseExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "ceeDot3PauseExtAdminMode" || name == "ceeDot3PauseExtOperMode")
        return true;
    return false;
}

CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceTable()
    :
    ceesubinterfaceentry(this, {"ifindex"})
{

    yang_name = "ceeSubInterfaceTable"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::~CeeSubInterfaceTable()
{
}

bool CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceesubinterfaceentry.len(); index++)
    {
        if(ceesubinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<ceesubinterfaceentry.len(); index++)
    {
        if(ceesubinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeSubInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeSubInterfaceEntry")
    {
        auto c = std::make_shared<CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry>();
        c->parent = this;
        ceesubinterfaceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceesubinterfaceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeSubInterfaceEntry")
        return true;
    return false;
}

CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::CeeSubInterfaceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    ceesubinterfacecount{YType::uint32, "ceeSubInterfaceCount"}
{

    yang_name = "ceeSubInterfaceEntry"; yang_parent_name = "ceeSubInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::~CeeSubInterfaceEntry()
{
}

bool CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| ceesubinterfacecount.is_set;
}

bool CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ceesubinterfacecount.yfilter);
}

std::string CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/ceeSubInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeSubInterfaceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ceesubinterfacecount.is_set || is_set(ceesubinterfacecount.yfilter)) leaf_name_data.push_back(ceesubinterfacecount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceeSubInterfaceCount")
    {
        ceesubinterfacecount = value;
        ceesubinterfacecount.value_namespace = name_space;
        ceesubinterfacecount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ceeSubInterfaceCount")
    {
        ceesubinterfacecount.yfilter = yfilter;
    }
}

bool CISCOETHERLIKEEXTMIB::CeeSubInterfaceTable::CeeSubInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ceeSubInterfaceCount")
        return true;
    return false;
}


}
}

