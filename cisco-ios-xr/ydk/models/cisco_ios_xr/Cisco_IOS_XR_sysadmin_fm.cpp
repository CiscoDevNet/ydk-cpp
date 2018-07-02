
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_fm.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_fm {

Fm::Fm()
    :
    agents(this, {"location", "process", "subsystem", "agent"})
{

    yang_name = "fm"; yang_parent_name = "Cisco-IOS-XR-sysadmin-fm"; is_top_level_class = true; has_list_ancestor = false; 
}

Fm::~Fm()
{
}

bool Fm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<agents.len(); index++)
    {
        if(agents[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::has_operation() const
{
    for (std::size_t index=0; index<agents.len(); index++)
    {
        if(agents[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-fm:fm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agents")
    {
        auto c = std::make_shared<Fm::Agents>();
        c->parent = this;
        agents.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : agents.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Fm::clone_ptr() const
{
    return std::make_shared<Fm>();
}

std::string Fm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agents")
        return true;
    return false;
}

Fm::Agents::Agents()
    :
    location{YType::str, "location"},
    process{YType::str, "process"},
    subsystem{YType::str, "subsystem"},
    agent{YType::str, "agent"}
        ,
    fm_initials(std::make_shared<Fm::Agents::FmInitials>())
    , fm_table(std::make_shared<Fm::Agents::FmTable>())
    , fm_internals(std::make_shared<Fm::Agents::FmInternals>())
    , fm_alarm_mapping(std::make_shared<Fm::Agents::FmAlarmMapping>())
    , fm_statistics(std::make_shared<Fm::Agents::FmStatistics>())
{
    fm_initials->parent = this;
    fm_table->parent = this;
    fm_internals->parent = this;
    fm_alarm_mapping->parent = this;
    fm_statistics->parent = this;

    yang_name = "agents"; yang_parent_name = "fm"; is_top_level_class = false; has_list_ancestor = false; 
}

Fm::Agents::~Agents()
{
}

bool Fm::Agents::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| process.is_set
	|| subsystem.is_set
	|| agent.is_set
	|| (fm_initials !=  nullptr && fm_initials->has_data())
	|| (fm_table !=  nullptr && fm_table->has_data())
	|| (fm_internals !=  nullptr && fm_internals->has_data())
	|| (fm_alarm_mapping !=  nullptr && fm_alarm_mapping->has_data())
	|| (fm_statistics !=  nullptr && fm_statistics->has_data());
}

bool Fm::Agents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(subsystem.yfilter)
	|| ydk::is_set(agent.yfilter)
	|| (fm_initials !=  nullptr && fm_initials->has_operation())
	|| (fm_table !=  nullptr && fm_table->has_operation())
	|| (fm_internals !=  nullptr && fm_internals->has_operation())
	|| (fm_alarm_mapping !=  nullptr && fm_alarm_mapping->has_operation())
	|| (fm_statistics !=  nullptr && fm_statistics->has_operation());
}

std::string Fm::Agents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-fm:fm/" << get_segment_path();
    return path_buffer.str();
}

std::string Fm::Agents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agents";
    ADD_KEY_TOKEN(location, "location");
    ADD_KEY_TOKEN(process, "process");
    ADD_KEY_TOKEN(subsystem, "subsystem");
    ADD_KEY_TOKEN(agent, "agent");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (subsystem.is_set || is_set(subsystem.yfilter)) leaf_name_data.push_back(subsystem.get_name_leafdata());
    if (agent.is_set || is_set(agent.yfilter)) leaf_name_data.push_back(agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fm_initials")
    {
        if(fm_initials == nullptr)
        {
            fm_initials = std::make_shared<Fm::Agents::FmInitials>();
        }
        return fm_initials;
    }

    if(child_yang_name == "fm_table")
    {
        if(fm_table == nullptr)
        {
            fm_table = std::make_shared<Fm::Agents::FmTable>();
        }
        return fm_table;
    }

    if(child_yang_name == "fm_internals")
    {
        if(fm_internals == nullptr)
        {
            fm_internals = std::make_shared<Fm::Agents::FmInternals>();
        }
        return fm_internals;
    }

    if(child_yang_name == "fm_alarm_mapping")
    {
        if(fm_alarm_mapping == nullptr)
        {
            fm_alarm_mapping = std::make_shared<Fm::Agents::FmAlarmMapping>();
        }
        return fm_alarm_mapping;
    }

    if(child_yang_name == "fm_statistics")
    {
        if(fm_statistics == nullptr)
        {
            fm_statistics = std::make_shared<Fm::Agents::FmStatistics>();
        }
        return fm_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fm_initials != nullptr)
    {
        children["fm_initials"] = fm_initials;
    }

    if(fm_table != nullptr)
    {
        children["fm_table"] = fm_table;
    }

    if(fm_internals != nullptr)
    {
        children["fm_internals"] = fm_internals;
    }

    if(fm_alarm_mapping != nullptr)
    {
        children["fm_alarm_mapping"] = fm_alarm_mapping;
    }

    if(fm_statistics != nullptr)
    {
        children["fm_statistics"] = fm_statistics;
    }

    return children;
}

void Fm::Agents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subsystem")
    {
        subsystem = value;
        subsystem.value_namespace = name_space;
        subsystem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent")
    {
        agent = value;
        agent.value_namespace = name_space;
        agent.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "subsystem")
    {
        subsystem.yfilter = yfilter;
    }
    if(value_path == "agent")
    {
        agent.yfilter = yfilter;
    }
}

bool Fm::Agents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_initials" || name == "fm_table" || name == "fm_internals" || name == "fm_alarm_mapping" || name == "fm_statistics" || name == "location" || name == "process" || name == "subsystem" || name == "agent")
        return true;
    return false;
}

Fm::Agents::FmInitials::FmInitials()
    :
    levm{YType::uint64, "levm"},
    comp_id{YType::uint32, "comp_id"},
    process{YType::str, "process"},
    default_rule_cb{YType::uint64, "default_rule_cb"},
    default_action_cb{YType::uint64, "default_action_cb"},
    default_notif_cb{YType::uint64, "default_notif_cb"},
    default_error_cb{YType::uint64, "default_error_cb"},
    replica_cb{YType::uint64, "replica_cb"}
{

    yang_name = "fm_initials"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmInitials::~FmInitials()
{
}

bool Fm::Agents::FmInitials::has_data() const
{
    if (is_presence_container) return true;
    return levm.is_set
	|| comp_id.is_set
	|| process.is_set
	|| default_rule_cb.is_set
	|| default_action_cb.is_set
	|| default_notif_cb.is_set
	|| default_error_cb.is_set
	|| replica_cb.is_set;
}

bool Fm::Agents::FmInitials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levm.yfilter)
	|| ydk::is_set(comp_id.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(default_rule_cb.yfilter)
	|| ydk::is_set(default_action_cb.yfilter)
	|| ydk::is_set(default_notif_cb.yfilter)
	|| ydk::is_set(default_error_cb.yfilter)
	|| ydk::is_set(replica_cb.yfilter);
}

std::string Fm::Agents::FmInitials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm_initials";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmInitials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levm.is_set || is_set(levm.yfilter)) leaf_name_data.push_back(levm.get_name_leafdata());
    if (comp_id.is_set || is_set(comp_id.yfilter)) leaf_name_data.push_back(comp_id.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (default_rule_cb.is_set || is_set(default_rule_cb.yfilter)) leaf_name_data.push_back(default_rule_cb.get_name_leafdata());
    if (default_action_cb.is_set || is_set(default_action_cb.yfilter)) leaf_name_data.push_back(default_action_cb.get_name_leafdata());
    if (default_notif_cb.is_set || is_set(default_notif_cb.yfilter)) leaf_name_data.push_back(default_notif_cb.get_name_leafdata());
    if (default_error_cb.is_set || is_set(default_error_cb.yfilter)) leaf_name_data.push_back(default_error_cb.get_name_leafdata());
    if (replica_cb.is_set || is_set(replica_cb.yfilter)) leaf_name_data.push_back(replica_cb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmInitials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmInitials::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmInitials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levm")
    {
        levm = value;
        levm.value_namespace = name_space;
        levm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comp_id")
    {
        comp_id = value;
        comp_id.value_namespace = name_space;
        comp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default_rule_cb")
    {
        default_rule_cb = value;
        default_rule_cb.value_namespace = name_space;
        default_rule_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default_action_cb")
    {
        default_action_cb = value;
        default_action_cb.value_namespace = name_space;
        default_action_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default_notif_cb")
    {
        default_notif_cb = value;
        default_notif_cb.value_namespace = name_space;
        default_notif_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default_error_cb")
    {
        default_error_cb = value;
        default_error_cb.value_namespace = name_space;
        default_error_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replica_cb")
    {
        replica_cb = value;
        replica_cb.value_namespace = name_space;
        replica_cb.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmInitials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levm")
    {
        levm.yfilter = yfilter;
    }
    if(value_path == "comp_id")
    {
        comp_id.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "default_rule_cb")
    {
        default_rule_cb.yfilter = yfilter;
    }
    if(value_path == "default_action_cb")
    {
        default_action_cb.yfilter = yfilter;
    }
    if(value_path == "default_notif_cb")
    {
        default_notif_cb.yfilter = yfilter;
    }
    if(value_path == "default_error_cb")
    {
        default_error_cb.yfilter = yfilter;
    }
    if(value_path == "replica_cb")
    {
        replica_cb.yfilter = yfilter;
    }
}

bool Fm::Agents::FmInitials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levm" || name == "comp_id" || name == "process" || name == "default_rule_cb" || name == "default_action_cb" || name == "default_notif_cb" || name == "default_error_cb" || name == "replica_cb")
        return true;
    return false;
}

Fm::Agents::FmTable::FmTable()
    :
    brief(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
    , entry(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
{

    yang_name = "fm_table"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::~FmTable()
{
}

bool Fm::Agents::FmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::Agents::FmTable::has_operation() const
{
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::Agents::FmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm_table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Brief>();
        c->parent = this;
        brief.append(c);
        return c;
    }

    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry>();
        c->parent = this;
        entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "entry")
        return true;
    return false;
}

Fm::Agents::FmTable::Brief::Brief()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    name{YType::str, "name"}
{

    yang_name = "brief"; yang_parent_name = "fm_table"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Brief::~Brief()
{
}

bool Fm::Agents::FmTable::Brief::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| name.is_set;
}

bool Fm::Agents::FmTable::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Fm::Agents::FmTable::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "name")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Entry()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"}
        ,
    detail(std::make_shared<Fm::Agents::FmTable::Entry::Detail>())
    , causal_list(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
    , dependency_list(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
    , propagation_list(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
    , notification_list(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
    , escalation_list(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
    , faults(std::make_shared<Fm::Agents::FmTable::Entry::Faults>())
    , waiting_list(std::make_shared<Fm::Agents::FmTable::Entry::WaitingList>())
{
    detail->parent = this;
    faults->parent = this;
    waiting_list->parent = this;

    yang_name = "entry"; yang_parent_name = "fm_table"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::~Entry()
{
}

bool Fm::Agents::FmTable::Entry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<causal_list.len(); index++)
    {
        if(causal_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dependency_list.len(); index++)
    {
        if(dependency_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<propagation_list.len(); index++)
    {
        if(propagation_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<notification_list.len(); index++)
    {
        if(notification_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<escalation_list.len(); index++)
    {
        if(escalation_list[index]->has_data())
            return true;
    }
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (faults !=  nullptr && faults->has_data())
	|| (waiting_list !=  nullptr && waiting_list->has_data());
}

bool Fm::Agents::FmTable::Entry::has_operation() const
{
    for (std::size_t index=0; index<causal_list.len(); index++)
    {
        if(causal_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dependency_list.len(); index++)
    {
        if(dependency_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<propagation_list.len(); index++)
    {
        if(propagation_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<notification_list.len(); index++)
    {
        if(notification_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<escalation_list.len(); index++)
    {
        if(escalation_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (faults !=  nullptr && faults->has_operation())
	|| (waiting_list !=  nullptr && waiting_list->has_operation());
}

std::string Fm::Agents::FmTable::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Fm::Agents::FmTable::Entry::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "causal_list")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::CausalList>();
        c->parent = this;
        causal_list.append(c);
        return c;
    }

    if(child_yang_name == "dependency_list")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::DependencyList>();
        c->parent = this;
        dependency_list.append(c);
        return c;
    }

    if(child_yang_name == "propagation_list")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::PropagationList>();
        c->parent = this;
        propagation_list.append(c);
        return c;
    }

    if(child_yang_name == "notification_list")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::NotificationList>();
        c->parent = this;
        notification_list.append(c);
        return c;
    }

    if(child_yang_name == "escalation_list")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::EscalationList>();
        c->parent = this;
        escalation_list.append(c);
        return c;
    }

    if(child_yang_name == "faults")
    {
        if(faults == nullptr)
        {
            faults = std::make_shared<Fm::Agents::FmTable::Entry::Faults>();
        }
        return faults;
    }

    if(child_yang_name == "waiting_list")
    {
        if(waiting_list == nullptr)
        {
            waiting_list = std::make_shared<Fm::Agents::FmTable::Entry::WaitingList>();
        }
        return waiting_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    count = 0;
    for (auto c : causal_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : dependency_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : propagation_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : notification_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : escalation_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(faults != nullptr)
    {
        children["faults"] = faults;
    }

    if(waiting_list != nullptr)
    {
        children["waiting_list"] = waiting_list;
    }

    return children;
}

void Fm::Agents::FmTable::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "causal_list" || name == "dependency_list" || name == "propagation_list" || name == "notification_list" || name == "escalation_list" || name == "faults" || name == "waiting_list" || name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Detail::Detail()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    name{YType::str, "name"},
    description{YType::str, "description"},
    detection_logic{YType::str, "detection_logic"},
    corr_obj_qualifier{YType::enumeration, "corr_obj_qualifier"}
{

    yang_name = "detail"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Detail::~Detail()
{
}

bool Fm::Agents::FmTable::Entry::Detail::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| name.is_set
	|| description.is_set
	|| detection_logic.is_set
	|| corr_obj_qualifier.is_set;
}

bool Fm::Agents::FmTable::Entry::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detection_logic.yfilter)
	|| ydk::is_set(corr_obj_qualifier.yfilter);
}

std::string Fm::Agents::FmTable::Entry::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detection_logic.is_set || is_set(detection_logic.yfilter)) leaf_name_data.push_back(detection_logic.get_name_leafdata());
    if (corr_obj_qualifier.is_set || is_set(corr_obj_qualifier.yfilter)) leaf_name_data.push_back(corr_obj_qualifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection_logic")
    {
        detection_logic = value;
        detection_logic.value_namespace = name_space;
        detection_logic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corr_obj_qualifier")
    {
        corr_obj_qualifier = value;
        corr_obj_qualifier.value_namespace = name_space;
        corr_obj_qualifier.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detection_logic")
    {
        detection_logic.yfilter = yfilter;
    }
    if(value_path == "corr_obj_qualifier")
    {
        corr_obj_qualifier.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "name" || name == "description" || name == "detection_logic" || name == "corr_obj_qualifier")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::CausalList::CausalList()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"}
{

    yang_name = "causal_list"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::CausalList::~CausalList()
{
}

bool Fm::Agents::FmTable::Entry::CausalList::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set;
}

bool Fm::Agents::FmTable::Entry::CausalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter);
}

std::string Fm::Agents::FmTable::Entry::CausalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "causal_list";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::CausalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::CausalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::CausalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::CausalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::CausalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::CausalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::DependencyList::DependencyList()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"}
{

    yang_name = "dependency_list"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::DependencyList::~DependencyList()
{
}

bool Fm::Agents::FmTable::Entry::DependencyList::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set;
}

bool Fm::Agents::FmTable::Entry::DependencyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter);
}

std::string Fm::Agents::FmTable::Entry::DependencyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dependency_list";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::DependencyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::DependencyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::DependencyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::DependencyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::DependencyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::DependencyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::PropagationList::PropagationList()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    remote_agent_id{YType::str, "remote_agent_id"}
{

    yang_name = "propagation_list"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::PropagationList::~PropagationList()
{
}

bool Fm::Agents::FmTable::Entry::PropagationList::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| remote_agent_id.is_set;
}

bool Fm::Agents::FmTable::Entry::PropagationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(remote_agent_id.yfilter);
}

std::string Fm::Agents::FmTable::Entry::PropagationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagation_list";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::PropagationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (remote_agent_id.is_set || is_set(remote_agent_id.yfilter)) leaf_name_data.push_back(remote_agent_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::PropagationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::PropagationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::PropagationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote_agent_id")
    {
        remote_agent_id = value;
        remote_agent_id.value_namespace = name_space;
        remote_agent_id.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::PropagationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "remote_agent_id")
    {
        remote_agent_id.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::PropagationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "remote_agent_id")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::NotificationList::NotificationList()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    remote_agent_id{YType::str, "remote_agent_id"}
{

    yang_name = "notification_list"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::NotificationList::~NotificationList()
{
}

bool Fm::Agents::FmTable::Entry::NotificationList::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| remote_agent_id.is_set;
}

bool Fm::Agents::FmTable::Entry::NotificationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(remote_agent_id.yfilter);
}

std::string Fm::Agents::FmTable::Entry::NotificationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification_list";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::NotificationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (remote_agent_id.is_set || is_set(remote_agent_id.yfilter)) leaf_name_data.push_back(remote_agent_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::NotificationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::NotificationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::NotificationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote_agent_id")
    {
        remote_agent_id = value;
        remote_agent_id.value_namespace = name_space;
        remote_agent_id.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::NotificationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "remote_agent_id")
    {
        remote_agent_id.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::NotificationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "remote_agent_id")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::EscalationList::EscalationList()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    remote_agent_id{YType::str, "remote_agent_id"}
{

    yang_name = "escalation_list"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::EscalationList::~EscalationList()
{
}

bool Fm::Agents::FmTable::Entry::EscalationList::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| remote_agent_id.is_set;
}

bool Fm::Agents::FmTable::Entry::EscalationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(remote_agent_id.yfilter);
}

std::string Fm::Agents::FmTable::Entry::EscalationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escalation_list";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::EscalationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (remote_agent_id.is_set || is_set(remote_agent_id.yfilter)) leaf_name_data.push_back(remote_agent_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::EscalationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::EscalationList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::EscalationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote_agent_id")
    {
        remote_agent_id = value;
        remote_agent_id.value_namespace = name_space;
        remote_agent_id.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::EscalationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "remote_agent_id")
    {
        remote_agent_id.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::EscalationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "remote_agent_id")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Faults::Faults()
    :
    active(std::make_shared<Fm::Agents::FmTable::Entry::Faults::Active>())
    , history(std::make_shared<Fm::Agents::FmTable::Entry::Faults::History>())
{
    active->parent = this;
    history->parent = this;

    yang_name = "faults"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Faults::~Faults()
{
}

bool Fm::Agents::FmTable::Entry::Faults::has_data() const
{
    if (is_presence_container) return true;
    return (active !=  nullptr && active->has_data())
	|| (history !=  nullptr && history->has_data());
}

bool Fm::Agents::FmTable::Entry::Faults::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (history !=  nullptr && history->has_operation());
}

std::string Fm::Agents::FmTable::Entry::Faults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "faults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Faults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Faults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Fm::Agents::FmTable::Entry::Faults::Active>();
        }
        return active;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Fm::Agents::FmTable::Entry::Faults::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Faults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Fm::Agents::FmTable::Entry::Faults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmTable::Entry::Faults::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmTable::Entry::Faults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Faults::Active::Active()
    :
    brief(this, {"object_id"})
    , detail(this, {"object_id"})
{

    yang_name = "active"; yang_parent_name = "faults"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Faults::Active::~Active()
{
}

bool Fm::Agents::FmTable::Entry::Faults::Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::Agents::FmTable::Entry::Faults::Active::has_operation() const
{
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::Agents::FmTable::Entry::Faults::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Faults::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Faults::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::Faults::Active::Brief>();
        c->parent = this;
        brief.append(c);
        return c;
    }

    if(child_yang_name == "detail")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::Faults::Active::Detail>();
        c->parent = this;
        detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Faults::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmTable::Entry::Faults::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmTable::Entry::Faults::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmTable::Entry::Faults::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Faults::Active::Brief::Brief()
    :
    object_id{YType::str, "object_id"},
    fault_timestamp{YType::str, "fault_timestamp"}
{

    yang_name = "brief"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Faults::Active::Brief::~Brief()
{
}

bool Fm::Agents::FmTable::Entry::Faults::Active::Brief::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| fault_timestamp.is_set;
}

bool Fm::Agents::FmTable::Entry::Faults::Active::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(fault_timestamp.yfilter);
}

std::string Fm::Agents::FmTable::Entry::Faults::Active::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    ADD_KEY_TOKEN(object_id, "object_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Faults::Active::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (fault_timestamp.is_set || is_set(fault_timestamp.yfilter)) leaf_name_data.push_back(fault_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Faults::Active::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Faults::Active::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::Faults::Active::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object_id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp = value;
        fault_timestamp.value_namespace = name_space;
        fault_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::Faults::Active::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object_id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::Faults::Active::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object_id" || name == "fault_timestamp")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Faults::Active::Detail::Detail()
    :
    object_id{YType::str, "object_id"},
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    fault_severity{YType::uint16, "fault_severity"},
    fault_state{YType::enumeration, "fault_state"},
    fault_agent_id{YType::str, "fault_agent_id"},
    fault_timestamp{YType::str, "fault_timestamp"},
    fault_timer_state{YType::boolean, "fault_timer_state"},
    fault_processed{YType::boolean, "fault_processed"},
    mitigation_result{YType::enumeration, "mitigation_result"},
    recovery_result{YType::enumeration, "recovery_result"},
    correlation_result{YType::enumeration, "correlation_result"},
    alarm_result{YType::enumeration, "alarm_result"},
    default_result{YType::enumeration, "default_result"},
    opaque_data_len{YType::uint16, "opaque_data_len"},
    occurrence_count{YType::uint64, "occurrence_count"},
    history_state{YType::enumeration, "history_state"}
{

    yang_name = "detail"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Faults::Active::Detail::~Detail()
{
}

bool Fm::Agents::FmTable::Entry::Faults::Active::Detail::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| fault_severity.is_set
	|| fault_state.is_set
	|| fault_agent_id.is_set
	|| fault_timestamp.is_set
	|| fault_timer_state.is_set
	|| fault_processed.is_set
	|| mitigation_result.is_set
	|| recovery_result.is_set
	|| correlation_result.is_set
	|| alarm_result.is_set
	|| default_result.is_set
	|| opaque_data_len.is_set
	|| occurrence_count.is_set
	|| history_state.is_set;
}

bool Fm::Agents::FmTable::Entry::Faults::Active::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(fault_severity.yfilter)
	|| ydk::is_set(fault_state.yfilter)
	|| ydk::is_set(fault_agent_id.yfilter)
	|| ydk::is_set(fault_timestamp.yfilter)
	|| ydk::is_set(fault_timer_state.yfilter)
	|| ydk::is_set(fault_processed.yfilter)
	|| ydk::is_set(mitigation_result.yfilter)
	|| ydk::is_set(recovery_result.yfilter)
	|| ydk::is_set(correlation_result.yfilter)
	|| ydk::is_set(alarm_result.yfilter)
	|| ydk::is_set(default_result.yfilter)
	|| ydk::is_set(opaque_data_len.yfilter)
	|| ydk::is_set(occurrence_count.yfilter)
	|| ydk::is_set(history_state.yfilter);
}

std::string Fm::Agents::FmTable::Entry::Faults::Active::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    ADD_KEY_TOKEN(object_id, "object_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Faults::Active::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (fault_severity.is_set || is_set(fault_severity.yfilter)) leaf_name_data.push_back(fault_severity.get_name_leafdata());
    if (fault_state.is_set || is_set(fault_state.yfilter)) leaf_name_data.push_back(fault_state.get_name_leafdata());
    if (fault_agent_id.is_set || is_set(fault_agent_id.yfilter)) leaf_name_data.push_back(fault_agent_id.get_name_leafdata());
    if (fault_timestamp.is_set || is_set(fault_timestamp.yfilter)) leaf_name_data.push_back(fault_timestamp.get_name_leafdata());
    if (fault_timer_state.is_set || is_set(fault_timer_state.yfilter)) leaf_name_data.push_back(fault_timer_state.get_name_leafdata());
    if (fault_processed.is_set || is_set(fault_processed.yfilter)) leaf_name_data.push_back(fault_processed.get_name_leafdata());
    if (mitigation_result.is_set || is_set(mitigation_result.yfilter)) leaf_name_data.push_back(mitigation_result.get_name_leafdata());
    if (recovery_result.is_set || is_set(recovery_result.yfilter)) leaf_name_data.push_back(recovery_result.get_name_leafdata());
    if (correlation_result.is_set || is_set(correlation_result.yfilter)) leaf_name_data.push_back(correlation_result.get_name_leafdata());
    if (alarm_result.is_set || is_set(alarm_result.yfilter)) leaf_name_data.push_back(alarm_result.get_name_leafdata());
    if (default_result.is_set || is_set(default_result.yfilter)) leaf_name_data.push_back(default_result.get_name_leafdata());
    if (opaque_data_len.is_set || is_set(opaque_data_len.yfilter)) leaf_name_data.push_back(opaque_data_len.get_name_leafdata());
    if (occurrence_count.is_set || is_set(occurrence_count.yfilter)) leaf_name_data.push_back(occurrence_count.get_name_leafdata());
    if (history_state.is_set || is_set(history_state.yfilter)) leaf_name_data.push_back(history_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Faults::Active::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Faults::Active::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::Faults::Active::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object_id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_severity")
    {
        fault_severity = value;
        fault_severity.value_namespace = name_space;
        fault_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_state")
    {
        fault_state = value;
        fault_state.value_namespace = name_space;
        fault_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_agent_id")
    {
        fault_agent_id = value;
        fault_agent_id.value_namespace = name_space;
        fault_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp = value;
        fault_timestamp.value_namespace = name_space;
        fault_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timer_state")
    {
        fault_timer_state = value;
        fault_timer_state.value_namespace = name_space;
        fault_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_processed")
    {
        fault_processed = value;
        fault_processed.value_namespace = name_space;
        fault_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mitigation_result")
    {
        mitigation_result = value;
        mitigation_result.value_namespace = name_space;
        mitigation_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery_result")
    {
        recovery_result = value;
        recovery_result.value_namespace = name_space;
        recovery_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "correlation_result")
    {
        correlation_result = value;
        correlation_result.value_namespace = name_space;
        correlation_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm_result")
    {
        alarm_result = value;
        alarm_result.value_namespace = name_space;
        alarm_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default_result")
    {
        default_result = value;
        default_result.value_namespace = name_space;
        default_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque_data_len")
    {
        opaque_data_len = value;
        opaque_data_len.value_namespace = name_space;
        opaque_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "occurrence_count")
    {
        occurrence_count = value;
        occurrence_count.value_namespace = name_space;
        occurrence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history_state")
    {
        history_state = value;
        history_state.value_namespace = name_space;
        history_state.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::Faults::Active::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object_id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "fault_severity")
    {
        fault_severity.yfilter = yfilter;
    }
    if(value_path == "fault_state")
    {
        fault_state.yfilter = yfilter;
    }
    if(value_path == "fault_agent_id")
    {
        fault_agent_id.yfilter = yfilter;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp.yfilter = yfilter;
    }
    if(value_path == "fault_timer_state")
    {
        fault_timer_state.yfilter = yfilter;
    }
    if(value_path == "fault_processed")
    {
        fault_processed.yfilter = yfilter;
    }
    if(value_path == "mitigation_result")
    {
        mitigation_result.yfilter = yfilter;
    }
    if(value_path == "recovery_result")
    {
        recovery_result.yfilter = yfilter;
    }
    if(value_path == "correlation_result")
    {
        correlation_result.yfilter = yfilter;
    }
    if(value_path == "alarm_result")
    {
        alarm_result.yfilter = yfilter;
    }
    if(value_path == "default_result")
    {
        default_result.yfilter = yfilter;
    }
    if(value_path == "opaque_data_len")
    {
        opaque_data_len.yfilter = yfilter;
    }
    if(value_path == "occurrence_count")
    {
        occurrence_count.yfilter = yfilter;
    }
    if(value_path == "history_state")
    {
        history_state.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::Faults::Active::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object_id" || name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "fault_severity" || name == "fault_state" || name == "fault_agent_id" || name == "fault_timestamp" || name == "fault_timer_state" || name == "fault_processed" || name == "mitigation_result" || name == "recovery_result" || name == "correlation_result" || name == "alarm_result" || name == "default_result" || name == "opaque_data_len" || name == "occurrence_count" || name == "history_state")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Faults::History::History()
    :
    brief(this, {"object_id"})
    , detail(this, {"object_id"})
{

    yang_name = "history"; yang_parent_name = "faults"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Faults::History::~History()
{
}

bool Fm::Agents::FmTable::Entry::Faults::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::Agents::FmTable::Entry::Faults::History::has_operation() const
{
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::Agents::FmTable::Entry::Faults::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Faults::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Faults::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::Faults::History::Brief>();
        c->parent = this;
        brief.append(c);
        return c;
    }

    if(child_yang_name == "detail")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::Faults::History::Detail>();
        c->parent = this;
        detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Faults::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmTable::Entry::Faults::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmTable::Entry::Faults::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmTable::Entry::Faults::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Faults::History::Brief::Brief()
    :
    object_id{YType::str, "object_id"},
    fault_timestamp{YType::str, "fault_timestamp"}
{

    yang_name = "brief"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Faults::History::Brief::~Brief()
{
}

bool Fm::Agents::FmTable::Entry::Faults::History::Brief::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| fault_timestamp.is_set;
}

bool Fm::Agents::FmTable::Entry::Faults::History::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(fault_timestamp.yfilter);
}

std::string Fm::Agents::FmTable::Entry::Faults::History::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    ADD_KEY_TOKEN(object_id, "object_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Faults::History::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (fault_timestamp.is_set || is_set(fault_timestamp.yfilter)) leaf_name_data.push_back(fault_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Faults::History::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Faults::History::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::Faults::History::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object_id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp = value;
        fault_timestamp.value_namespace = name_space;
        fault_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::Faults::History::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object_id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::Faults::History::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object_id" || name == "fault_timestamp")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::Faults::History::Detail::Detail()
    :
    object_id{YType::str, "object_id"},
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    fault_severity{YType::uint16, "fault_severity"},
    fault_state{YType::enumeration, "fault_state"},
    fault_agent_id{YType::str, "fault_agent_id"},
    fault_timestamp{YType::str, "fault_timestamp"},
    fault_timer_state{YType::boolean, "fault_timer_state"},
    fault_processed{YType::boolean, "fault_processed"},
    mitigation_result{YType::enumeration, "mitigation_result"},
    recovery_result{YType::enumeration, "recovery_result"},
    correlation_result{YType::enumeration, "correlation_result"},
    alarm_result{YType::enumeration, "alarm_result"},
    default_result{YType::enumeration, "default_result"},
    opaque_data_len{YType::uint16, "opaque_data_len"},
    occurrence_count{YType::uint64, "occurrence_count"},
    history_state{YType::enumeration, "history_state"}
{

    yang_name = "detail"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::Faults::History::Detail::~Detail()
{
}

bool Fm::Agents::FmTable::Entry::Faults::History::Detail::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| fault_severity.is_set
	|| fault_state.is_set
	|| fault_agent_id.is_set
	|| fault_timestamp.is_set
	|| fault_timer_state.is_set
	|| fault_processed.is_set
	|| mitigation_result.is_set
	|| recovery_result.is_set
	|| correlation_result.is_set
	|| alarm_result.is_set
	|| default_result.is_set
	|| opaque_data_len.is_set
	|| occurrence_count.is_set
	|| history_state.is_set;
}

bool Fm::Agents::FmTable::Entry::Faults::History::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(fault_severity.yfilter)
	|| ydk::is_set(fault_state.yfilter)
	|| ydk::is_set(fault_agent_id.yfilter)
	|| ydk::is_set(fault_timestamp.yfilter)
	|| ydk::is_set(fault_timer_state.yfilter)
	|| ydk::is_set(fault_processed.yfilter)
	|| ydk::is_set(mitigation_result.yfilter)
	|| ydk::is_set(recovery_result.yfilter)
	|| ydk::is_set(correlation_result.yfilter)
	|| ydk::is_set(alarm_result.yfilter)
	|| ydk::is_set(default_result.yfilter)
	|| ydk::is_set(opaque_data_len.yfilter)
	|| ydk::is_set(occurrence_count.yfilter)
	|| ydk::is_set(history_state.yfilter);
}

std::string Fm::Agents::FmTable::Entry::Faults::History::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    ADD_KEY_TOKEN(object_id, "object_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::Faults::History::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (fault_severity.is_set || is_set(fault_severity.yfilter)) leaf_name_data.push_back(fault_severity.get_name_leafdata());
    if (fault_state.is_set || is_set(fault_state.yfilter)) leaf_name_data.push_back(fault_state.get_name_leafdata());
    if (fault_agent_id.is_set || is_set(fault_agent_id.yfilter)) leaf_name_data.push_back(fault_agent_id.get_name_leafdata());
    if (fault_timestamp.is_set || is_set(fault_timestamp.yfilter)) leaf_name_data.push_back(fault_timestamp.get_name_leafdata());
    if (fault_timer_state.is_set || is_set(fault_timer_state.yfilter)) leaf_name_data.push_back(fault_timer_state.get_name_leafdata());
    if (fault_processed.is_set || is_set(fault_processed.yfilter)) leaf_name_data.push_back(fault_processed.get_name_leafdata());
    if (mitigation_result.is_set || is_set(mitigation_result.yfilter)) leaf_name_data.push_back(mitigation_result.get_name_leafdata());
    if (recovery_result.is_set || is_set(recovery_result.yfilter)) leaf_name_data.push_back(recovery_result.get_name_leafdata());
    if (correlation_result.is_set || is_set(correlation_result.yfilter)) leaf_name_data.push_back(correlation_result.get_name_leafdata());
    if (alarm_result.is_set || is_set(alarm_result.yfilter)) leaf_name_data.push_back(alarm_result.get_name_leafdata());
    if (default_result.is_set || is_set(default_result.yfilter)) leaf_name_data.push_back(default_result.get_name_leafdata());
    if (opaque_data_len.is_set || is_set(opaque_data_len.yfilter)) leaf_name_data.push_back(opaque_data_len.get_name_leafdata());
    if (occurrence_count.is_set || is_set(occurrence_count.yfilter)) leaf_name_data.push_back(occurrence_count.get_name_leafdata());
    if (history_state.is_set || is_set(history_state.yfilter)) leaf_name_data.push_back(history_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::Faults::History::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::Faults::History::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::Faults::History::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object_id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_severity")
    {
        fault_severity = value;
        fault_severity.value_namespace = name_space;
        fault_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_state")
    {
        fault_state = value;
        fault_state.value_namespace = name_space;
        fault_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_agent_id")
    {
        fault_agent_id = value;
        fault_agent_id.value_namespace = name_space;
        fault_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp = value;
        fault_timestamp.value_namespace = name_space;
        fault_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timer_state")
    {
        fault_timer_state = value;
        fault_timer_state.value_namespace = name_space;
        fault_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_processed")
    {
        fault_processed = value;
        fault_processed.value_namespace = name_space;
        fault_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mitigation_result")
    {
        mitigation_result = value;
        mitigation_result.value_namespace = name_space;
        mitigation_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery_result")
    {
        recovery_result = value;
        recovery_result.value_namespace = name_space;
        recovery_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "correlation_result")
    {
        correlation_result = value;
        correlation_result.value_namespace = name_space;
        correlation_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm_result")
    {
        alarm_result = value;
        alarm_result.value_namespace = name_space;
        alarm_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default_result")
    {
        default_result = value;
        default_result.value_namespace = name_space;
        default_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque_data_len")
    {
        opaque_data_len = value;
        opaque_data_len.value_namespace = name_space;
        opaque_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "occurrence_count")
    {
        occurrence_count = value;
        occurrence_count.value_namespace = name_space;
        occurrence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history_state")
    {
        history_state = value;
        history_state.value_namespace = name_space;
        history_state.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::Faults::History::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object_id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "fault_severity")
    {
        fault_severity.yfilter = yfilter;
    }
    if(value_path == "fault_state")
    {
        fault_state.yfilter = yfilter;
    }
    if(value_path == "fault_agent_id")
    {
        fault_agent_id.yfilter = yfilter;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp.yfilter = yfilter;
    }
    if(value_path == "fault_timer_state")
    {
        fault_timer_state.yfilter = yfilter;
    }
    if(value_path == "fault_processed")
    {
        fault_processed.yfilter = yfilter;
    }
    if(value_path == "mitigation_result")
    {
        mitigation_result.yfilter = yfilter;
    }
    if(value_path == "recovery_result")
    {
        recovery_result.yfilter = yfilter;
    }
    if(value_path == "correlation_result")
    {
        correlation_result.yfilter = yfilter;
    }
    if(value_path == "alarm_result")
    {
        alarm_result.yfilter = yfilter;
    }
    if(value_path == "default_result")
    {
        default_result.yfilter = yfilter;
    }
    if(value_path == "opaque_data_len")
    {
        opaque_data_len.yfilter = yfilter;
    }
    if(value_path == "occurrence_count")
    {
        occurrence_count.yfilter = yfilter;
    }
    if(value_path == "history_state")
    {
        history_state.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::Faults::History::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object_id" || name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "fault_severity" || name == "fault_state" || name == "fault_agent_id" || name == "fault_timestamp" || name == "fault_timer_state" || name == "fault_processed" || name == "mitigation_result" || name == "recovery_result" || name == "correlation_result" || name == "alarm_result" || name == "default_result" || name == "opaque_data_len" || name == "occurrence_count" || name == "history_state")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::WaitingList::WaitingList()
    :
    brief(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
    , entry(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
{

    yang_name = "waiting_list"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::WaitingList::~WaitingList()
{
}

bool Fm::Agents::FmTable::Entry::WaitingList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::Agents::FmTable::Entry::WaitingList::has_operation() const
{
    for (std::size_t index=0; index<brief.len(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::Agents::FmTable::Entry::WaitingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waiting_list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::WaitingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::WaitingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::WaitingList::Brief>();
        c->parent = this;
        brief.append(c);
        return c;
    }

    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<Fm::Agents::FmTable::Entry::WaitingList::Entry_>();
        c->parent = this;
        entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::WaitingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmTable::Entry::WaitingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmTable::Entry::WaitingList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmTable::Entry::WaitingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "entry")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::WaitingList::Brief::Brief()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    object_id{YType::str, "object_id"},
    fault_timestamp{YType::str, "fault_timestamp"},
    fault_state{YType::enumeration, "fault_state"},
    fault_count{YType::uint64, "fault_count"},
    fault_flag{YType::uint64, "fault_flag"}
{

    yang_name = "brief"; yang_parent_name = "waiting_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::WaitingList::Brief::~Brief()
{
}

bool Fm::Agents::FmTable::Entry::WaitingList::Brief::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| object_id.is_set
	|| fault_timestamp.is_set
	|| fault_state.is_set
	|| fault_count.is_set
	|| fault_flag.is_set;
}

bool Fm::Agents::FmTable::Entry::WaitingList::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(fault_timestamp.yfilter)
	|| ydk::is_set(fault_state.yfilter)
	|| ydk::is_set(fault_count.yfilter)
	|| ydk::is_set(fault_flag.yfilter);
}

std::string Fm::Agents::FmTable::Entry::WaitingList::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::WaitingList::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (fault_timestamp.is_set || is_set(fault_timestamp.yfilter)) leaf_name_data.push_back(fault_timestamp.get_name_leafdata());
    if (fault_state.is_set || is_set(fault_state.yfilter)) leaf_name_data.push_back(fault_state.get_name_leafdata());
    if (fault_count.is_set || is_set(fault_count.yfilter)) leaf_name_data.push_back(fault_count.get_name_leafdata());
    if (fault_flag.is_set || is_set(fault_flag.yfilter)) leaf_name_data.push_back(fault_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::WaitingList::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::WaitingList::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::WaitingList::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object_id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp = value;
        fault_timestamp.value_namespace = name_space;
        fault_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_state")
    {
        fault_state = value;
        fault_state.value_namespace = name_space;
        fault_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_count")
    {
        fault_count = value;
        fault_count.value_namespace = name_space;
        fault_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_flag")
    {
        fault_flag = value;
        fault_flag.value_namespace = name_space;
        fault_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::WaitingList::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "object_id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp.yfilter = yfilter;
    }
    if(value_path == "fault_state")
    {
        fault_state.yfilter = yfilter;
    }
    if(value_path == "fault_count")
    {
        fault_count.yfilter = yfilter;
    }
    if(value_path == "fault_flag")
    {
        fault_flag.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::WaitingList::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "object_id" || name == "fault_timestamp" || name == "fault_state" || name == "fault_count" || name == "fault_flag")
        return true;
    return false;
}

Fm::Agents::FmTable::Entry::WaitingList::Entry_::Entry_()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    object_id{YType::str, "object_id"},
    fault_timestamp{YType::str, "fault_timestamp"},
    fault_state{YType::enumeration, "fault_state"},
    fault_count{YType::uint64, "fault_count"},
    fault_flag{YType::uint64, "fault_flag"}
{

    yang_name = "entry"; yang_parent_name = "waiting_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmTable::Entry::WaitingList::Entry_::~Entry_()
{
}

bool Fm::Agents::FmTable::Entry::WaitingList::Entry_::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| object_id.is_set
	|| fault_timestamp.is_set
	|| fault_state.is_set
	|| fault_count.is_set
	|| fault_flag.is_set;
}

bool Fm::Agents::FmTable::Entry::WaitingList::Entry_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(fault_timestamp.yfilter)
	|| ydk::is_set(fault_state.yfilter)
	|| ydk::is_set(fault_count.yfilter)
	|| ydk::is_set(fault_flag.yfilter);
}

std::string Fm::Agents::FmTable::Entry::WaitingList::Entry_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmTable::Entry::WaitingList::Entry_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (fault_timestamp.is_set || is_set(fault_timestamp.yfilter)) leaf_name_data.push_back(fault_timestamp.get_name_leafdata());
    if (fault_state.is_set || is_set(fault_state.yfilter)) leaf_name_data.push_back(fault_state.get_name_leafdata());
    if (fault_count.is_set || is_set(fault_count.yfilter)) leaf_name_data.push_back(fault_count.get_name_leafdata());
    if (fault_flag.is_set || is_set(fault_flag.yfilter)) leaf_name_data.push_back(fault_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmTable::Entry::WaitingList::Entry_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmTable::Entry::WaitingList::Entry_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmTable::Entry::WaitingList::Entry_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object_id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp = value;
        fault_timestamp.value_namespace = name_space;
        fault_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_state")
    {
        fault_state = value;
        fault_state.value_namespace = name_space;
        fault_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_count")
    {
        fault_count = value;
        fault_count.value_namespace = name_space;
        fault_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault_flag")
    {
        fault_flag = value;
        fault_flag.value_namespace = name_space;
        fault_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmTable::Entry::WaitingList::Entry_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "object_id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "fault_timestamp")
    {
        fault_timestamp.yfilter = yfilter;
    }
    if(value_path == "fault_state")
    {
        fault_state.yfilter = yfilter;
    }
    if(value_path == "fault_count")
    {
        fault_count.yfilter = yfilter;
    }
    if(value_path == "fault_flag")
    {
        fault_flag.yfilter = yfilter;
    }
}

bool Fm::Agents::FmTable::Entry::WaitingList::Entry_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "object_id" || name == "fault_timestamp" || name == "fault_state" || name == "fault_count" || name == "fault_flag")
        return true;
    return false;
}

Fm::Agents::FmInternals::FmInternals()
    :
    detail(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
{

    yang_name = "fm_internals"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmInternals::~FmInternals()
{
}

bool Fm::Agents::FmInternals::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::Agents::FmInternals::has_operation() const
{
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::Agents::FmInternals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm_internals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmInternals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmInternals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        auto c = std::make_shared<Fm::Agents::FmInternals::Detail>();
        c->parent = this;
        detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmInternals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmInternals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmInternals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmInternals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Fm::Agents::FmInternals::Detail::Detail()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    common_action{YType::uint16, "common_action"},
    opaque_action{YType::uint16, "opaque_action"},
    mitigation_cb{YType::uint64, "mitigation_cb"},
    recovery_cb{YType::uint64, "recovery_cb"},
    alarm_severity_dirty{YType::boolean, "alarm_severity_dirty"},
    disable_action{YType::boolean, "disable_action"},
    repeat_action{YType::boolean, "repeat_action"},
    has_causal_list{YType::boolean, "has_causal_list"},
    parser_tag{YType::uint64, "parser_tag"},
    parser_tag_string{YType::str, "parser_tag_string"}
        ,
    rules(this, {})
{

    yang_name = "detail"; yang_parent_name = "fm_internals"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmInternals::Detail::~Detail()
{
}

bool Fm::Agents::FmInternals::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rules.len(); index++)
    {
        if(rules[index]->has_data())
            return true;
    }
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| common_action.is_set
	|| opaque_action.is_set
	|| mitigation_cb.is_set
	|| recovery_cb.is_set
	|| alarm_severity_dirty.is_set
	|| disable_action.is_set
	|| repeat_action.is_set
	|| has_causal_list.is_set
	|| parser_tag.is_set
	|| parser_tag_string.is_set;
}

bool Fm::Agents::FmInternals::Detail::has_operation() const
{
    for (std::size_t index=0; index<rules.len(); index++)
    {
        if(rules[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(common_action.yfilter)
	|| ydk::is_set(opaque_action.yfilter)
	|| ydk::is_set(mitigation_cb.yfilter)
	|| ydk::is_set(recovery_cb.yfilter)
	|| ydk::is_set(alarm_severity_dirty.yfilter)
	|| ydk::is_set(disable_action.yfilter)
	|| ydk::is_set(repeat_action.yfilter)
	|| ydk::is_set(has_causal_list.yfilter)
	|| ydk::is_set(parser_tag.yfilter)
	|| ydk::is_set(parser_tag_string.yfilter);
}

std::string Fm::Agents::FmInternals::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmInternals::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (common_action.is_set || is_set(common_action.yfilter)) leaf_name_data.push_back(common_action.get_name_leafdata());
    if (opaque_action.is_set || is_set(opaque_action.yfilter)) leaf_name_data.push_back(opaque_action.get_name_leafdata());
    if (mitigation_cb.is_set || is_set(mitigation_cb.yfilter)) leaf_name_data.push_back(mitigation_cb.get_name_leafdata());
    if (recovery_cb.is_set || is_set(recovery_cb.yfilter)) leaf_name_data.push_back(recovery_cb.get_name_leafdata());
    if (alarm_severity_dirty.is_set || is_set(alarm_severity_dirty.yfilter)) leaf_name_data.push_back(alarm_severity_dirty.get_name_leafdata());
    if (disable_action.is_set || is_set(disable_action.yfilter)) leaf_name_data.push_back(disable_action.get_name_leafdata());
    if (repeat_action.is_set || is_set(repeat_action.yfilter)) leaf_name_data.push_back(repeat_action.get_name_leafdata());
    if (has_causal_list.is_set || is_set(has_causal_list.yfilter)) leaf_name_data.push_back(has_causal_list.get_name_leafdata());
    if (parser_tag.is_set || is_set(parser_tag.yfilter)) leaf_name_data.push_back(parser_tag.get_name_leafdata());
    if (parser_tag_string.is_set || is_set(parser_tag_string.yfilter)) leaf_name_data.push_back(parser_tag_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmInternals::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        auto c = std::make_shared<Fm::Agents::FmInternals::Detail::Rules>();
        c->parent = this;
        rules.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmInternals::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rules.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmInternals::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "common_action")
    {
        common_action = value;
        common_action.value_namespace = name_space;
        common_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque_action")
    {
        opaque_action = value;
        opaque_action.value_namespace = name_space;
        opaque_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mitigation_cb")
    {
        mitigation_cb = value;
        mitigation_cb.value_namespace = name_space;
        mitigation_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery_cb")
    {
        recovery_cb = value;
        recovery_cb.value_namespace = name_space;
        recovery_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm_severity_dirty")
    {
        alarm_severity_dirty = value;
        alarm_severity_dirty.value_namespace = name_space;
        alarm_severity_dirty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable_action")
    {
        disable_action = value;
        disable_action.value_namespace = name_space;
        disable_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repeat_action")
    {
        repeat_action = value;
        repeat_action.value_namespace = name_space;
        repeat_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has_causal_list")
    {
        has_causal_list = value;
        has_causal_list.value_namespace = name_space;
        has_causal_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parser_tag")
    {
        parser_tag = value;
        parser_tag.value_namespace = name_space;
        parser_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parser_tag_string")
    {
        parser_tag_string = value;
        parser_tag_string.value_namespace = name_space;
        parser_tag_string.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmInternals::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "common_action")
    {
        common_action.yfilter = yfilter;
    }
    if(value_path == "opaque_action")
    {
        opaque_action.yfilter = yfilter;
    }
    if(value_path == "mitigation_cb")
    {
        mitigation_cb.yfilter = yfilter;
    }
    if(value_path == "recovery_cb")
    {
        recovery_cb.yfilter = yfilter;
    }
    if(value_path == "alarm_severity_dirty")
    {
        alarm_severity_dirty.yfilter = yfilter;
    }
    if(value_path == "disable_action")
    {
        disable_action.yfilter = yfilter;
    }
    if(value_path == "repeat_action")
    {
        repeat_action.yfilter = yfilter;
    }
    if(value_path == "has_causal_list")
    {
        has_causal_list.yfilter = yfilter;
    }
    if(value_path == "parser_tag")
    {
        parser_tag.yfilter = yfilter;
    }
    if(value_path == "parser_tag_string")
    {
        parser_tag_string.yfilter = yfilter;
    }
}

bool Fm::Agents::FmInternals::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "common_action" || name == "opaque_action" || name == "mitigation_cb" || name == "recovery_cb" || name == "alarm_severity_dirty" || name == "disable_action" || name == "repeat_action" || name == "has_causal_list" || name == "parser_tag" || name == "parser_tag_string")
        return true;
    return false;
}

Fm::Agents::FmInternals::Detail::Rules::Rules()
    :
    fault_location{YType::str, "fault_location"},
    rule_cb{YType::uint64, "rule_cb"}
{

    yang_name = "rules"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmInternals::Detail::Rules::~Rules()
{
}

bool Fm::Agents::FmInternals::Detail::Rules::has_data() const
{
    if (is_presence_container) return true;
    return fault_location.is_set
	|| rule_cb.is_set;
}

bool Fm::Agents::FmInternals::Detail::Rules::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fault_location.yfilter)
	|| ydk::is_set(rule_cb.yfilter);
}

std::string Fm::Agents::FmInternals::Detail::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmInternals::Detail::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fault_location.is_set || is_set(fault_location.yfilter)) leaf_name_data.push_back(fault_location.get_name_leafdata());
    if (rule_cb.is_set || is_set(rule_cb.yfilter)) leaf_name_data.push_back(rule_cb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmInternals::Detail::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmInternals::Detail::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmInternals::Detail::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fault_location")
    {
        fault_location = value;
        fault_location.value_namespace = name_space;
        fault_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rule_cb")
    {
        rule_cb = value;
        rule_cb.value_namespace = name_space;
        rule_cb.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmInternals::Detail::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fault_location")
    {
        fault_location.yfilter = yfilter;
    }
    if(value_path == "rule_cb")
    {
        rule_cb.yfilter = yfilter;
    }
}

bool Fm::Agents::FmInternals::Detail::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault_location" || name == "rule_cb")
        return true;
    return false;
}

Fm::Agents::FmAlarmMapping::FmAlarmMapping()
    :
    detail(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
{

    yang_name = "fm_alarm_mapping"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmAlarmMapping::~FmAlarmMapping()
{
}

bool Fm::Agents::FmAlarmMapping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::Agents::FmAlarmMapping::has_operation() const
{
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::Agents::FmAlarmMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm_alarm_mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmAlarmMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmAlarmMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        auto c = std::make_shared<Fm::Agents::FmAlarmMapping::Detail>();
        c->parent = this;
        detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmAlarmMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmAlarmMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmAlarmMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmAlarmMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Fm::Agents::FmAlarmMapping::Detail::Detail()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    alarm_group{YType::uint16, "alarm_group"},
    alarm_severity{YType::uint16, "alarm_severity"}
{

    yang_name = "detail"; yang_parent_name = "fm_alarm_mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmAlarmMapping::Detail::~Detail()
{
}

bool Fm::Agents::FmAlarmMapping::Detail::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| alarm_group.is_set
	|| alarm_severity.is_set;
}

bool Fm::Agents::FmAlarmMapping::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(alarm_group.yfilter)
	|| ydk::is_set(alarm_severity.yfilter);
}

std::string Fm::Agents::FmAlarmMapping::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmAlarmMapping::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (alarm_group.is_set || is_set(alarm_group.yfilter)) leaf_name_data.push_back(alarm_group.get_name_leafdata());
    if (alarm_severity.is_set || is_set(alarm_severity.yfilter)) leaf_name_data.push_back(alarm_severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmAlarmMapping::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmAlarmMapping::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmAlarmMapping::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm_group")
    {
        alarm_group = value;
        alarm_group.value_namespace = name_space;
        alarm_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm_severity")
    {
        alarm_severity = value;
        alarm_severity.value_namespace = name_space;
        alarm_severity.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmAlarmMapping::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "alarm_group")
    {
        alarm_group.yfilter = yfilter;
    }
    if(value_path == "alarm_severity")
    {
        alarm_severity.yfilter = yfilter;
    }
}

bool Fm::Agents::FmAlarmMapping::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "alarm_group" || name == "alarm_severity")
        return true;
    return false;
}

Fm::Agents::FmStatistics::FmStatistics()
    :
    detail(this, {"fm_subsystem_id", "fm_fault_type", "fm_fault_tag"})
{

    yang_name = "fm_statistics"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmStatistics::~FmStatistics()
{
}

bool Fm::Agents::FmStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Fm::Agents::FmStatistics::has_operation() const
{
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fm::Agents::FmStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm_statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        auto c = std::make_shared<Fm::Agents::FmStatistics::Detail>();
        c->parent = this;
        detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fm::Agents::FmStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fm::Agents::FmStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fm::Agents::FmStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Fm::Agents::FmStatistics::Detail::Detail()
    :
    fm_subsystem_id{YType::str, "fm_subsystem_id"},
    fm_fault_type{YType::str, "fm_fault_type"},
    fm_fault_tag{YType::str, "fm_fault_tag"},
    threshold_count{YType::uint32, "threshold_count"},
    all_object_occur_count{YType::uint32, "all_object_occur_count"},
    declared_count{YType::uint32, "declared_count"},
    cleared_count{YType::uint32, "cleared_count"},
    info_count{YType::uint32, "info_count"},
    hold_time{YType::uint32, "hold_time"}
{

    yang_name = "detail"; yang_parent_name = "fm_statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Fm::Agents::FmStatistics::Detail::~Detail()
{
}

bool Fm::Agents::FmStatistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    return fm_subsystem_id.is_set
	|| fm_fault_type.is_set
	|| fm_fault_tag.is_set
	|| threshold_count.is_set
	|| all_object_occur_count.is_set
	|| declared_count.is_set
	|| cleared_count.is_set
	|| info_count.is_set
	|| hold_time.is_set;
}

bool Fm::Agents::FmStatistics::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fm_subsystem_id.yfilter)
	|| ydk::is_set(fm_fault_type.yfilter)
	|| ydk::is_set(fm_fault_tag.yfilter)
	|| ydk::is_set(threshold_count.yfilter)
	|| ydk::is_set(all_object_occur_count.yfilter)
	|| ydk::is_set(declared_count.yfilter)
	|| ydk::is_set(cleared_count.yfilter)
	|| ydk::is_set(info_count.yfilter)
	|| ydk::is_set(hold_time.yfilter);
}

std::string Fm::Agents::FmStatistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    ADD_KEY_TOKEN(fm_subsystem_id, "fm_subsystem_id");
    ADD_KEY_TOKEN(fm_fault_type, "fm_fault_type");
    ADD_KEY_TOKEN(fm_fault_tag, "fm_fault_tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fm::Agents::FmStatistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fm_subsystem_id.is_set || is_set(fm_subsystem_id.yfilter)) leaf_name_data.push_back(fm_subsystem_id.get_name_leafdata());
    if (fm_fault_type.is_set || is_set(fm_fault_type.yfilter)) leaf_name_data.push_back(fm_fault_type.get_name_leafdata());
    if (fm_fault_tag.is_set || is_set(fm_fault_tag.yfilter)) leaf_name_data.push_back(fm_fault_tag.get_name_leafdata());
    if (threshold_count.is_set || is_set(threshold_count.yfilter)) leaf_name_data.push_back(threshold_count.get_name_leafdata());
    if (all_object_occur_count.is_set || is_set(all_object_occur_count.yfilter)) leaf_name_data.push_back(all_object_occur_count.get_name_leafdata());
    if (declared_count.is_set || is_set(declared_count.yfilter)) leaf_name_data.push_back(declared_count.get_name_leafdata());
    if (cleared_count.is_set || is_set(cleared_count.yfilter)) leaf_name_data.push_back(cleared_count.get_name_leafdata());
    if (info_count.is_set || is_set(info_count.yfilter)) leaf_name_data.push_back(info_count.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fm::Agents::FmStatistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fm::Agents::FmStatistics::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fm::Agents::FmStatistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id = value;
        fm_subsystem_id.value_namespace = name_space;
        fm_subsystem_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type = value;
        fm_fault_type.value_namespace = name_space;
        fm_fault_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag = value;
        fm_fault_tag.value_namespace = name_space;
        fm_fault_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold_count")
    {
        threshold_count = value;
        threshold_count.value_namespace = name_space;
        threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all_object_occur_count")
    {
        all_object_occur_count = value;
        all_object_occur_count.value_namespace = name_space;
        all_object_occur_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declared_count")
    {
        declared_count = value;
        declared_count.value_namespace = name_space;
        declared_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleared_count")
    {
        cleared_count = value;
        cleared_count.value_namespace = name_space;
        cleared_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "info_count")
    {
        info_count = value;
        info_count.value_namespace = name_space;
        info_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold_time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Fm::Agents::FmStatistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fm_subsystem_id")
    {
        fm_subsystem_id.yfilter = yfilter;
    }
    if(value_path == "fm_fault_type")
    {
        fm_fault_type.yfilter = yfilter;
    }
    if(value_path == "fm_fault_tag")
    {
        fm_fault_tag.yfilter = yfilter;
    }
    if(value_path == "threshold_count")
    {
        threshold_count.yfilter = yfilter;
    }
    if(value_path == "all_object_occur_count")
    {
        all_object_occur_count.yfilter = yfilter;
    }
    if(value_path == "declared_count")
    {
        declared_count.yfilter = yfilter;
    }
    if(value_path == "cleared_count")
    {
        cleared_count.yfilter = yfilter;
    }
    if(value_path == "info_count")
    {
        info_count.yfilter = yfilter;
    }
    if(value_path == "hold_time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool Fm::Agents::FmStatistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm_subsystem_id" || name == "fm_fault_type" || name == "fm_fault_tag" || name == "threshold_count" || name == "all_object_occur_count" || name == "declared_count" || name == "cleared_count" || name == "info_count" || name == "hold_time")
        return true;
    return false;
}

const Enum::YLeaf FmActionT::ISOLATION {0, "ISOLATION"};
const Enum::YLeaf FmActionT::MITIGATION {1, "MITIGATION"};
const Enum::YLeaf FmActionT::RECOVERY {2, "RECOVERY"};
const Enum::YLeaf FmActionT::CORRELATION {3, "CORRELATION"};
const Enum::YLeaf FmActionT::ALARM {4, "ALARM"};
const Enum::YLeaf FmActionT::REPORT {5, "REPORT"};

const Enum::YLeaf FmHistoryStateT::FM_HISTORY_STATE_ACTIVE {0, "FM_HISTORY_STATE_ACTIVE"};
const Enum::YLeaf FmHistoryStateT::FM_HISTORY_STATE_CLEARED {1, "FM_HISTORY_STATE_CLEARED"};
const Enum::YLeaf FmHistoryStateT::FM_HISTORY_STATE_INVALID {2, "FM_HISTORY_STATE_INVALID"};

const Enum::YLeaf FmServiceScopeT::FM_SERVICE_NODE_SCOPE {0, "FM_SERVICE_NODE_SCOPE"};
const Enum::YLeaf FmServiceScopeT::FM_SERVICE_RACK_SCOPE {1, "FM_SERVICE_RACK_SCOPE"};
const Enum::YLeaf FmServiceScopeT::FM_SERVICE_SYSTEM_SCOPE {2, "FM_SERVICE_SYSTEM_SCOPE"};

const Enum::YLeaf FmActionResultT::SUCCESS {0, "SUCCESS"};
const Enum::YLeaf FmActionResultT::FAILURE {1, "FAILURE"};
const Enum::YLeaf FmActionResultT::NO_OP {2, "NO-OP"};

const Enum::YLeaf GenericHaRole::no_ha_role {0, "no-ha-role"};
const Enum::YLeaf GenericHaRole::Active {1, "Active"};
const Enum::YLeaf GenericHaRole::Standby {2, "Standby"};

const Enum::YLeaf FmFaultStateT::SET {0, "SET"};
const Enum::YLeaf FmFaultStateT::CLEAR {1, "CLEAR"};
const Enum::YLeaf FmFaultStateT::INFO {2, "INFO"};
const Enum::YLeaf FmFaultStateT::INVALID {3, "INVALID"};
const Enum::YLeaf FmFaultStateT::PARTIALLY_QUALIFIED {4, "PARTIALLY_QUALIFIED"};
const Enum::YLeaf FmFaultStateT::SOAKING_BEFORE_SET {5, "SOAKING_BEFORE_SET"};
const Enum::YLeaf FmFaultStateT::SOAKING_BEFORE_CLEAR {6, "SOAKING_BEFORE_CLEAR"};
const Enum::YLeaf FmFaultStateT::SUPPRESSED {7, "SUPPRESSED"};
const Enum::YLeaf FmFaultStateT::UPDATE {8, "UPDATE"};

const Enum::YLeaf FmFaultSeverityT::CRITICAL {0, "CRITICAL"};
const Enum::YLeaf FmFaultSeverityT::MAJOR {1, "MAJOR"};
const Enum::YLeaf FmFaultSeverityT::MINOR {2, "MINOR"};
const Enum::YLeaf FmFaultSeverityT::NR {3, "NR"};

const Enum::YLeaf FmRuleEvalResultT::SUCCESS {0, "SUCCESS"};
const Enum::YLeaf FmRuleEvalResultT::FAILURE {1, "FAILURE"};

const Enum::YLeaf FmCorrelationObjQualifierT::QUALIFIER_IGNORED {0, "QUALIFIER_IGNORED"};
const Enum::YLeaf FmCorrelationObjQualifierT::QUALIFIER_RACK {1, "QUALIFIER_RACK"};
const Enum::YLeaf FmCorrelationObjQualifierT::QUALIFIER_SLOT {2, "QUALIFIER_SLOT"};
const Enum::YLeaf FmCorrelationObjQualifierT::QUALIFIER_OBJECT {3, "QUALIFIER_OBJECT"};


}
}

