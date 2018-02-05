
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
    ceedot3pauseexttable(std::make_shared<CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable>())
	,ceesubinterfacetable(std::make_shared<CISCOETHERLIKEEXTMIB::Ceesubinterfacetable>())
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
            ceedot3pauseexttable = std::make_shared<CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable>();
        }
        return ceedot3pauseexttable;
    }

    if(child_yang_name == "ceeSubInterfaceTable")
    {
        if(ceesubinterfacetable == nullptr)
        {
            ceesubinterfacetable = std::make_shared<CISCOETHERLIKEEXTMIB::Ceesubinterfacetable>();
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

CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseexttable()
{

    yang_name = "ceeDot3PauseExtTable"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::~Ceedot3Pauseexttable()
{
}

bool CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::has_data() const
{
    for (std::size_t index=0; index<ceedot3pauseextentry.size(); index++)
    {
        if(ceedot3pauseextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::has_operation() const
{
    for (std::size_t index=0; index<ceedot3pauseextentry.size(); index++)
    {
        if(ceedot3pauseextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeDot3PauseExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeDot3PauseExtEntry")
    {
        auto c = std::make_shared<CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry>();
        c->parent = this;
        ceedot3pauseextentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ceedot3pauseextentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeDot3PauseExtEntry")
        return true;
    return false;
}

CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::Ceedot3Pauseextentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    ceedot3pauseextadminmode{YType::bits, "ceeDot3PauseExtAdminMode"},
    ceedot3pauseextopermode{YType::bits, "ceeDot3PauseExtOperMode"}
{

    yang_name = "ceeDot3PauseExtEntry"; yang_parent_name = "ceeDot3PauseExtTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::~Ceedot3Pauseextentry()
{
}

bool CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::has_data() const
{
    return dot3statsindex.is_set
	|| ceedot3pauseextadminmode.is_set
	|| ceedot3pauseextopermode.is_set;
}

bool CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(ceedot3pauseextadminmode.yfilter)
	|| ydk::is_set(ceedot3pauseextopermode.yfilter);
}

std::string CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/ceeDot3PauseExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeDot3PauseExtEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (ceedot3pauseextadminmode.is_set || is_set(ceedot3pauseextadminmode.yfilter)) leaf_name_data.push_back(ceedot3pauseextadminmode.get_name_leafdata());
    if (ceedot3pauseextopermode.is_set || is_set(ceedot3pauseextopermode.yfilter)) leaf_name_data.push_back(ceedot3pauseextopermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOETHERLIKEEXTMIB::Ceedot3Pauseexttable::Ceedot3Pauseextentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "ceeDot3PauseExtAdminMode" || name == "ceeDot3PauseExtOperMode")
        return true;
    return false;
}

CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfacetable()
{

    yang_name = "ceeSubInterfaceTable"; yang_parent_name = "CISCO-ETHERLIKE-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::~Ceesubinterfacetable()
{
}

bool CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::has_data() const
{
    for (std::size_t index=0; index<ceesubinterfaceentry.size(); index++)
    {
        if(ceesubinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<ceesubinterfaceentry.size(); index++)
    {
        if(ceesubinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeSubInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceeSubInterfaceEntry")
    {
        auto c = std::make_shared<CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry>();
        c->parent = this;
        ceesubinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ceesubinterfaceentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceeSubInterfaceEntry")
        return true;
    return false;
}

CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::Ceesubinterfaceentry()
    :
    ifindex{YType::str, "ifIndex"},
    ceesubinterfacecount{YType::uint32, "ceeSubInterfaceCount"}
{

    yang_name = "ceeSubInterfaceEntry"; yang_parent_name = "ceeSubInterfaceTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::~Ceesubinterfaceentry()
{
}

bool CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::has_data() const
{
    return ifindex.is_set
	|| ceesubinterfacecount.is_set;
}

bool CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ceesubinterfacecount.yfilter);
}

std::string CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHERLIKE-EXT-MIB:CISCO-ETHERLIKE-EXT-MIB/ceeSubInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceeSubInterfaceEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ceesubinterfacecount.is_set || is_set(ceesubinterfacecount.yfilter)) leaf_name_data.push_back(ceesubinterfacecount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOETHERLIKEEXTMIB::Ceesubinterfacetable::Ceesubinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ceeSubInterfaceCount")
        return true;
    return false;
}


}
}

