
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_acl_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_acl_oper {

AccessLists::AccessLists()
{
    yang_name = "access-lists"; yang_parent_name = "Cisco-IOS-XE-acl-oper";
}

AccessLists::~AccessLists()
{
}

bool AccessLists::has_data() const
{
    for (std::size_t index=0; index<access_list_.size(); index++)
    {
        if(access_list_[index]->has_data())
            return true;
    }
    return false;
}

bool AccessLists::has_operation() const
{
    for (std::size_t index=0; index<access_list_.size(); index++)
    {
        if(access_list_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AccessLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl-oper:access-lists";

    return path_buffer.str();

}

const EntityPath AccessLists::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AccessLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        for(auto const & c : access_list_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessLists::AccessList>();
        c->parent = this;
        access_list_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessLists::set_value(const std::string & value_path, std::string value)
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

AccessLists::AccessList::AccessList()
    :
    access_control_list_name{YType::str, "access-control-list-name"}
    	,
    access_list_entries_(std::make_shared<AccessLists::AccessList::AccessListEntries>())
{
    access_list_entries_->parent = this;

    yang_name = "access-list"; yang_parent_name = "access-lists";
}

AccessLists::AccessList::~AccessList()
{
}

bool AccessLists::AccessList::has_data() const
{
    return access_control_list_name.is_set
	|| (access_list_entries_ !=  nullptr && access_list_entries_->has_data());
}

bool AccessLists::AccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(access_control_list_name.operation)
	|| (access_list_entries_ !=  nullptr && access_list_entries_->has_operation());
}

std::string AccessLists::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list" <<"[access-control-list-name='" <<access_control_list_name <<"']";

    return path_buffer.str();

}

const EntityPath AccessLists::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-acl-oper:access-lists/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_control_list_name.is_set || is_set(access_control_list_name.operation)) leaf_name_data.push_back(access_control_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AccessLists::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entries")
    {
        if(access_list_entries_ == nullptr)
        {
            access_list_entries_ = std::make_shared<AccessLists::AccessList::AccessListEntries>();
        }
        return access_list_entries_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list_entries_ != nullptr)
    {
        children["access-list-entries"] = access_list_entries_;
    }

    return children;
}

void AccessLists::AccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-control-list-name")
    {
        access_control_list_name = value;
    }
}

AccessLists::AccessList::AccessListEntries::AccessListEntries()
{
    yang_name = "access-list-entries"; yang_parent_name = "access-list";
}

AccessLists::AccessList::AccessListEntries::~AccessListEntries()
{
}

bool AccessLists::AccessList::AccessListEntries::has_data() const
{
    for (std::size_t index=0; index<access_list_entry_.size(); index++)
    {
        if(access_list_entry_[index]->has_data())
            return true;
    }
    return false;
}

bool AccessLists::AccessList::AccessListEntries::has_operation() const
{
    for (std::size_t index=0; index<access_list_entry_.size(); index++)
    {
        if(access_list_entry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AccessLists::AccessList::AccessListEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries";

    return path_buffer.str();

}

const EntityPath AccessLists::AccessList::AccessListEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListEntries' in Cisco_IOS_XE_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AccessLists::AccessList::AccessListEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entry")
    {
        for(auto const & c : access_list_entry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AccessLists::AccessList::AccessListEntries::AccessListEntry>();
        c->parent = this;
        access_list_entry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::AccessList::AccessListEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_entry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AccessLists::AccessList::AccessListEntries::set_value(const std::string & value_path, std::string value)
{
}

AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntry()
    :
    rule_name{YType::uint32, "rule-name"}
    	,
    access_list_entries_oper_data_(std::make_shared<AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData>())
{
    access_list_entries_oper_data_->parent = this;

    yang_name = "access-list-entry"; yang_parent_name = "access-list-entries";
}

AccessLists::AccessList::AccessListEntries::AccessListEntry::~AccessListEntry()
{
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::has_data() const
{
    return rule_name.is_set
	|| (access_list_entries_oper_data_ !=  nullptr && access_list_entries_oper_data_->has_data());
}

bool AccessLists::AccessList::AccessListEntries::AccessListEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(rule_name.operation)
	|| (access_list_entries_oper_data_ !=  nullptr && access_list_entries_oper_data_->has_operation());
}

std::string AccessLists::AccessList::AccessListEntries::AccessListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entry" <<"[rule-name='" <<rule_name <<"']";

    return path_buffer.str();

}

const EntityPath AccessLists::AccessList::AccessListEntries::AccessListEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListEntry' in Cisco_IOS_XE_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule_name.is_set || is_set(rule_name.operation)) leaf_name_data.push_back(rule_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AccessLists::AccessList::AccessListEntries::AccessListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-entries-oper-data")
    {
        if(access_list_entries_oper_data_ == nullptr)
        {
            access_list_entries_oper_data_ = std::make_shared<AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData>();
        }
        return access_list_entries_oper_data_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AccessLists::AccessList::AccessListEntries::AccessListEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list_entries_oper_data_ != nullptr)
    {
        children["access-list-entries-oper-data"] = access_list_entries_oper_data_;
    }

    return children;
}

void AccessLists::AccessList::AccessListEntries::AccessListEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rule-name")
    {
        rule_name = value;
    }
}

AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::AccessListEntriesOperData()
    :
    match_counter{YType::uint64, "match-counter"}
{
    yang_name = "access-list-entries-oper-data"; yang_parent_name = "access-list-entry";
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
    return is_set(operation)
	|| is_set(match_counter.operation);
}

std::string AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-entries-oper-data";

    return path_buffer.str();

}

const EntityPath AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListEntriesOperData' in Cisco_IOS_XE_acl_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_counter.is_set || is_set(match_counter.operation)) leaf_name_data.push_back(match_counter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void AccessLists::AccessList::AccessListEntries::AccessListEntry::AccessListEntriesOperData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-counter")
    {
        match_counter = value;
    }
}


}
}

