
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_acl_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_acl_oper {

AccessLists::AccessLists()
{

    yang_name = "access-lists"; yang_parent_name = "Cisco-IOS-XE-acl-oper"; is_top_level_class = true; has_list_ancestor = false;
}

AccessLists::~AccessLists()
{
}

bool AccessLists::has_data() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool AccessLists::has_operation() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AccessLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl-oper:access-lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        for(auto const & c : access_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessLists::AccessList>();
        c->parent = this;
        access_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessLists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> AccessLists::clone_ptr() const
{
    return std::make_shared<AccessLists>();
}

std::string AccessLists::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string AccessLists::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function AccessLists::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AccessLists::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool AccessLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

AccessLists::AccessList::AccessList()
    :
    access_control_list_name{YType::str, "access-control-list-name"}
    	,
    access_list_entries(std::make_shared<AccessLists::AccessList::AccessListEntries>())
{
    access_list_entries->parent = this;

    yang_name = "access-list"; yang_parent_name = "access-lists"; is_top_level_class = false; has_list_ancestor = false;
}

AccessLists::AccessList::~AccessList()
{
}

bool AccessLists::AccessList::has_data() const
{
    return access_control_list_name.is_set
	|| (access_list_entries !=  nullptr && access_list_entries->has_data());
}

bool AccessLists::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_control_list_name.yfilter)
	|| (access_list_entries !=  nullptr && access_list_entries->has_operation());
}

std::string AccessLists::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl-oper:access-lists/" << get_segment_path();
    return path_buffer.str();
}

std::string AccessLists::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list" <<"[access-control-list-name='" <<access_control_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessLists::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_control_list_name.is_set || is_set(access_control_list_name.yfilter)) leaf_name_data.push_back(access_control_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessLists::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entries")
    {
        if(access_list_entries == nullptr)
        {
            access_list_entries = std::make_shared<AccessLists::AccessList::AccessListEntries>();
        }
        return access_list_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list_entries != nullptr)
    {
        children["access-list-entries"] = access_list_entries;
    }

    return children;
}

void AccessLists::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-control-list-name")
    {
        access_control_list_name = value;
        access_control_list_name.value_namespace = name_space;
        access_control_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void AccessLists::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-control-list-name")
    {
        access_control_list_name.yfilter = yfilter;
    }
}

bool AccessLists::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-entries" || name == "access-control-list-name")
        return true;
    return false;
}

AccessLists::AccessList::AccessListEntries::AccessListEntries()
{

    yang_name = "access-list-entries"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

AccessLists::AccessList::AccessListEntries::~AccessListEntries()
{
}

bool AccessLists::AccessList::AccessListEntries::has_data() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_data())
            return true;
    }
    return false;
}

bool AccessLists::AccessList::AccessListEntries::has_operation() const
{
    for (std::size_t index=0; index<access_list_entry.size(); index++)
    {
        if(access_list_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AccessLists::AccessList::AccessListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessLists::AccessList::AccessListEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AccessLists::AccessList::AccessListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entry")
    {
        for(auto const & c : access_list_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessLists::AccessList::AccessListEntries::AccessListEntry>();
        c->parent = this;
        access_list_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::AccessList::AccessListEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessLists::AccessList::AccessListEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AccessLists::AccessList::AccessListEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AccessLists::AccessList::AccessListEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-entry")
        return true;
    return false;
}

AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntry()
    :
    rule_name{YType::uint32, "rule-name"}
    	,
    access_list_entries_oper_data(std::make_shared<AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData>())
{
    access_list_entries_oper_data->parent = this;

    yang_name = "access-list-entry"; yang_parent_name = "access-list-entries"; is_top_level_class = false; has_list_ancestor = true;
}

AccessLists::AccessList::AccessListEntries::AccessListEntry::~AccessListEntry()
{
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::has_data() const
{
    return rule_name.is_set
	|| (access_list_entries_oper_data !=  nullptr && access_list_entries_oper_data->has_data());
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule_name.yfilter)
	|| (access_list_entries_oper_data !=  nullptr && access_list_entries_oper_data->has_operation());
}

std::string AccessLists::AccessList::AccessListEntries::AccessListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entry" <<"[rule-name='" <<rule_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessLists::AccessList::AccessListEntries::AccessListEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.yfilter)) leaf_name_data.push_back(rule_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessLists::AccessList::AccessListEntries::AccessListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entries-oper-data")
    {
        if(access_list_entries_oper_data == nullptr)
        {
            access_list_entries_oper_data = std::make_shared<AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData>();
        }
        return access_list_entries_oper_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::AccessList::AccessListEntries::AccessListEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list_entries_oper_data != nullptr)
    {
        children["access-list-entries-oper-data"] = access_list_entries_oper_data;
    }

    return children;
}

void AccessLists::AccessList::AccessListEntries::AccessListEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
        rule_name.value_namespace = name_space;
        rule_name.value_namespace_prefix = name_space_prefix;
    }
}

void AccessLists::AccessList::AccessListEntries::AccessListEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule-name")
    {
        rule_name.yfilter = yfilter;
    }
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-entries-oper-data" || name == "rule-name")
        return true;
    return false;
}

AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::AccessListEntriesOperData()
    :
    match_counter{YType::uint64, "match-counter"}
{

    yang_name = "access-list-entries-oper-data"; yang_parent_name = "access-list-entry"; is_top_level_class = false; has_list_ancestor = true;
}

AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::~AccessListEntriesOperData()
{
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::has_data() const
{
    return match_counter.is_set;
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_counter.yfilter);
}

std::string AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_counter.is_set || is_set(match_counter.yfilter)) leaf_name_data.push_back(match_counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-counter")
    {
        match_counter = value;
        match_counter.value_namespace = name_space;
        match_counter.value_namespace_prefix = name_space_prefix;
    }
}

void AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-counter")
    {
        match_counter.yfilter = yfilter;
    }
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-counter")
        return true;
    return false;
}


}
}

