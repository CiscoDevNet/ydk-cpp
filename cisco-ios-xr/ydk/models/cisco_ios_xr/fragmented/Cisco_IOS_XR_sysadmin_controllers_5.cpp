
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_5.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {

Controller::Switch::Oper::Fdb::Statistics::Statistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "statistics"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    counter_info(std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo>())
    , core_id(this, {"core"})
{
    counter_info->parent = this;

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::Statistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_id.len(); index++)
    {
        if(core_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (counter_info !=  nullptr && counter_info->has_data());
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<core_id.len(); index++)
    {
        if(core_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (counter_info !=  nullptr && counter_info->has_operation());
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter-info")
    {
        if(counter_info == nullptr)
        {
            counter_info = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo>();
        }
        return counter_info;
    }

    if(child_yang_name == "core-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::Statistics::Location::CoreId>();
        c->parent = this;
        core_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter_info != nullptr)
    {
        children["counter-info"] = counter_info;
    }

    count = 0;
    for (auto c : core_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-info" || name == "core-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::CounterInfo()
    :
    fdb_shadow_entries{YType::uint32, "fdb-shadow-entries"},
    fdb_max_shadow_entries{YType::uint32, "fdb-max-shadow-entries"},
    fdb_max_hash_chain{YType::uint32, "fdb-max-hash-chain"},
    fdb_entries_added{YType::uint32, "fdb-entries-added"},
    fdb_entries_deleted{YType::uint32, "fdb-entries-deleted"},
    fdb_entries_updated{YType::uint32, "fdb-entries-updated"},
    fdb_flushes{YType::uint32, "fdb-flushes"},
    fdb_address_updates{YType::uint32, "fdb-address-updates"},
    fdb_new_addresses{YType::uint32, "fdb-new-addresses"},
    fdb_aged_updates{YType::uint32, "fdb-aged-updates"},
    fdb_transplant_updates{YType::uint32, "fdb-transplant-updates"},
    fdb_forwarding_updates{YType::uint32, "fdb-forwarding-updates"},
    fdb_address_insert_errors{YType::uint32, "fdb-address-insert-errors"},
    fdb_address_update_errors{YType::uint32, "fdb-address-update-errors"},
    fdb_memory_errors{YType::uint32, "fdb-memory-errors"},
    fdb_allocation_errors{YType::uint32, "fdb-allocation-errors"},
    fdb_address_updates_queued{YType::uint32, "fdb-address-updates-queued"},
    fdb_address_queue_full{YType::enumeration, "fdb-address-queue-full"},
    fdb_forwarding_updates_queued{YType::uint32, "fdb-forwarding-updates-queued"},
    fdb_forwarding_queue_full{YType::enumeration, "fdb-forwarding-queue-full"}
{

    yang_name = "counter-info"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::~CounterInfo()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_data() const
{
    if (is_presence_container) return true;
    return fdb_shadow_entries.is_set
	|| fdb_max_shadow_entries.is_set
	|| fdb_max_hash_chain.is_set
	|| fdb_entries_added.is_set
	|| fdb_entries_deleted.is_set
	|| fdb_entries_updated.is_set
	|| fdb_flushes.is_set
	|| fdb_address_updates.is_set
	|| fdb_new_addresses.is_set
	|| fdb_aged_updates.is_set
	|| fdb_transplant_updates.is_set
	|| fdb_forwarding_updates.is_set
	|| fdb_address_insert_errors.is_set
	|| fdb_address_update_errors.is_set
	|| fdb_memory_errors.is_set
	|| fdb_allocation_errors.is_set
	|| fdb_address_updates_queued.is_set
	|| fdb_address_queue_full.is_set
	|| fdb_forwarding_updates_queued.is_set
	|| fdb_forwarding_queue_full.is_set;
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fdb_shadow_entries.yfilter)
	|| ydk::is_set(fdb_max_shadow_entries.yfilter)
	|| ydk::is_set(fdb_max_hash_chain.yfilter)
	|| ydk::is_set(fdb_entries_added.yfilter)
	|| ydk::is_set(fdb_entries_deleted.yfilter)
	|| ydk::is_set(fdb_entries_updated.yfilter)
	|| ydk::is_set(fdb_flushes.yfilter)
	|| ydk::is_set(fdb_address_updates.yfilter)
	|| ydk::is_set(fdb_new_addresses.yfilter)
	|| ydk::is_set(fdb_aged_updates.yfilter)
	|| ydk::is_set(fdb_transplant_updates.yfilter)
	|| ydk::is_set(fdb_forwarding_updates.yfilter)
	|| ydk::is_set(fdb_address_insert_errors.yfilter)
	|| ydk::is_set(fdb_address_update_errors.yfilter)
	|| ydk::is_set(fdb_memory_errors.yfilter)
	|| ydk::is_set(fdb_allocation_errors.yfilter)
	|| ydk::is_set(fdb_address_updates_queued.yfilter)
	|| ydk::is_set(fdb_address_queue_full.yfilter)
	|| ydk::is_set(fdb_forwarding_updates_queued.yfilter)
	|| ydk::is_set(fdb_forwarding_queue_full.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_shadow_entries.is_set || is_set(fdb_shadow_entries.yfilter)) leaf_name_data.push_back(fdb_shadow_entries.get_name_leafdata());
    if (fdb_max_shadow_entries.is_set || is_set(fdb_max_shadow_entries.yfilter)) leaf_name_data.push_back(fdb_max_shadow_entries.get_name_leafdata());
    if (fdb_max_hash_chain.is_set || is_set(fdb_max_hash_chain.yfilter)) leaf_name_data.push_back(fdb_max_hash_chain.get_name_leafdata());
    if (fdb_entries_added.is_set || is_set(fdb_entries_added.yfilter)) leaf_name_data.push_back(fdb_entries_added.get_name_leafdata());
    if (fdb_entries_deleted.is_set || is_set(fdb_entries_deleted.yfilter)) leaf_name_data.push_back(fdb_entries_deleted.get_name_leafdata());
    if (fdb_entries_updated.is_set || is_set(fdb_entries_updated.yfilter)) leaf_name_data.push_back(fdb_entries_updated.get_name_leafdata());
    if (fdb_flushes.is_set || is_set(fdb_flushes.yfilter)) leaf_name_data.push_back(fdb_flushes.get_name_leafdata());
    if (fdb_address_updates.is_set || is_set(fdb_address_updates.yfilter)) leaf_name_data.push_back(fdb_address_updates.get_name_leafdata());
    if (fdb_new_addresses.is_set || is_set(fdb_new_addresses.yfilter)) leaf_name_data.push_back(fdb_new_addresses.get_name_leafdata());
    if (fdb_aged_updates.is_set || is_set(fdb_aged_updates.yfilter)) leaf_name_data.push_back(fdb_aged_updates.get_name_leafdata());
    if (fdb_transplant_updates.is_set || is_set(fdb_transplant_updates.yfilter)) leaf_name_data.push_back(fdb_transplant_updates.get_name_leafdata());
    if (fdb_forwarding_updates.is_set || is_set(fdb_forwarding_updates.yfilter)) leaf_name_data.push_back(fdb_forwarding_updates.get_name_leafdata());
    if (fdb_address_insert_errors.is_set || is_set(fdb_address_insert_errors.yfilter)) leaf_name_data.push_back(fdb_address_insert_errors.get_name_leafdata());
    if (fdb_address_update_errors.is_set || is_set(fdb_address_update_errors.yfilter)) leaf_name_data.push_back(fdb_address_update_errors.get_name_leafdata());
    if (fdb_memory_errors.is_set || is_set(fdb_memory_errors.yfilter)) leaf_name_data.push_back(fdb_memory_errors.get_name_leafdata());
    if (fdb_allocation_errors.is_set || is_set(fdb_allocation_errors.yfilter)) leaf_name_data.push_back(fdb_allocation_errors.get_name_leafdata());
    if (fdb_address_updates_queued.is_set || is_set(fdb_address_updates_queued.yfilter)) leaf_name_data.push_back(fdb_address_updates_queued.get_name_leafdata());
    if (fdb_address_queue_full.is_set || is_set(fdb_address_queue_full.yfilter)) leaf_name_data.push_back(fdb_address_queue_full.get_name_leafdata());
    if (fdb_forwarding_updates_queued.is_set || is_set(fdb_forwarding_updates_queued.yfilter)) leaf_name_data.push_back(fdb_forwarding_updates_queued.get_name_leafdata());
    if (fdb_forwarding_queue_full.is_set || is_set(fdb_forwarding_queue_full.yfilter)) leaf_name_data.push_back(fdb_forwarding_queue_full.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-shadow-entries")
    {
        fdb_shadow_entries = value;
        fdb_shadow_entries.value_namespace = name_space;
        fdb_shadow_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-max-shadow-entries")
    {
        fdb_max_shadow_entries = value;
        fdb_max_shadow_entries.value_namespace = name_space;
        fdb_max_shadow_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-max-hash-chain")
    {
        fdb_max_hash_chain = value;
        fdb_max_hash_chain.value_namespace = name_space;
        fdb_max_hash_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-added")
    {
        fdb_entries_added = value;
        fdb_entries_added.value_namespace = name_space;
        fdb_entries_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-deleted")
    {
        fdb_entries_deleted = value;
        fdb_entries_deleted.value_namespace = name_space;
        fdb_entries_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-entries-updated")
    {
        fdb_entries_updated = value;
        fdb_entries_updated.value_namespace = name_space;
        fdb_entries_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-flushes")
    {
        fdb_flushes = value;
        fdb_flushes.value_namespace = name_space;
        fdb_flushes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-updates")
    {
        fdb_address_updates = value;
        fdb_address_updates.value_namespace = name_space;
        fdb_address_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-new-addresses")
    {
        fdb_new_addresses = value;
        fdb_new_addresses.value_namespace = name_space;
        fdb_new_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-aged-updates")
    {
        fdb_aged_updates = value;
        fdb_aged_updates.value_namespace = name_space;
        fdb_aged_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-transplant-updates")
    {
        fdb_transplant_updates = value;
        fdb_transplant_updates.value_namespace = name_space;
        fdb_transplant_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-updates")
    {
        fdb_forwarding_updates = value;
        fdb_forwarding_updates.value_namespace = name_space;
        fdb_forwarding_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-insert-errors")
    {
        fdb_address_insert_errors = value;
        fdb_address_insert_errors.value_namespace = name_space;
        fdb_address_insert_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-update-errors")
    {
        fdb_address_update_errors = value;
        fdb_address_update_errors.value_namespace = name_space;
        fdb_address_update_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-memory-errors")
    {
        fdb_memory_errors = value;
        fdb_memory_errors.value_namespace = name_space;
        fdb_memory_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-allocation-errors")
    {
        fdb_allocation_errors = value;
        fdb_allocation_errors.value_namespace = name_space;
        fdb_allocation_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-updates-queued")
    {
        fdb_address_updates_queued = value;
        fdb_address_updates_queued.value_namespace = name_space;
        fdb_address_updates_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-address-queue-full")
    {
        fdb_address_queue_full = value;
        fdb_address_queue_full.value_namespace = name_space;
        fdb_address_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-updates-queued")
    {
        fdb_forwarding_updates_queued = value;
        fdb_forwarding_updates_queued.value_namespace = name_space;
        fdb_forwarding_updates_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-forwarding-queue-full")
    {
        fdb_forwarding_queue_full = value;
        fdb_forwarding_queue_full.value_namespace = name_space;
        fdb_forwarding_queue_full.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-shadow-entries")
    {
        fdb_shadow_entries.yfilter = yfilter;
    }
    if(value_path == "fdb-max-shadow-entries")
    {
        fdb_max_shadow_entries.yfilter = yfilter;
    }
    if(value_path == "fdb-max-hash-chain")
    {
        fdb_max_hash_chain.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-added")
    {
        fdb_entries_added.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-deleted")
    {
        fdb_entries_deleted.yfilter = yfilter;
    }
    if(value_path == "fdb-entries-updated")
    {
        fdb_entries_updated.yfilter = yfilter;
    }
    if(value_path == "fdb-flushes")
    {
        fdb_flushes.yfilter = yfilter;
    }
    if(value_path == "fdb-address-updates")
    {
        fdb_address_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-new-addresses")
    {
        fdb_new_addresses.yfilter = yfilter;
    }
    if(value_path == "fdb-aged-updates")
    {
        fdb_aged_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-transplant-updates")
    {
        fdb_transplant_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-updates")
    {
        fdb_forwarding_updates.yfilter = yfilter;
    }
    if(value_path == "fdb-address-insert-errors")
    {
        fdb_address_insert_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-address-update-errors")
    {
        fdb_address_update_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-memory-errors")
    {
        fdb_memory_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-allocation-errors")
    {
        fdb_allocation_errors.yfilter = yfilter;
    }
    if(value_path == "fdb-address-updates-queued")
    {
        fdb_address_updates_queued.yfilter = yfilter;
    }
    if(value_path == "fdb-address-queue-full")
    {
        fdb_address_queue_full.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-updates-queued")
    {
        fdb_forwarding_updates_queued.yfilter = yfilter;
    }
    if(value_path == "fdb-forwarding-queue-full")
    {
        fdb_forwarding_queue_full.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CounterInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-shadow-entries" || name == "fdb-max-shadow-entries" || name == "fdb-max-hash-chain" || name == "fdb-entries-added" || name == "fdb-entries-deleted" || name == "fdb-entries-updated" || name == "fdb-flushes" || name == "fdb-address-updates" || name == "fdb-new-addresses" || name == "fdb-aged-updates" || name == "fdb-transplant-updates" || name == "fdb-forwarding-updates" || name == "fdb-address-insert-errors" || name == "fdb-address-update-errors" || name == "fdb-memory-errors" || name == "fdb-allocation-errors" || name == "fdb-address-updates-queued" || name == "fdb-address-queue-full" || name == "fdb-forwarding-updates-queued" || name == "fdb-forwarding-queue-full")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::CoreId()
    :
    core{YType::int32, "core"},
    core_entries{YType::uint32, "core-entries"},
    core_static_entries{YType::uint32, "core-static-entries"}
{

    yang_name = "core-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::~CoreId()
{
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_data() const
{
    if (is_presence_container) return true;
    return core.is_set
	|| core_entries.is_set
	|| core_static_entries.is_set;
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(core_entries.yfilter)
	|| ydk::is_set(core_static_entries.yfilter);
}

std::string Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-id";
    ADD_KEY_TOKEN(core, "core");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (core_entries.is_set || is_set(core_entries.yfilter)) leaf_name_data.push_back(core_entries.get_name_leafdata());
    if (core_static_entries.is_set || is_set(core_static_entries.yfilter)) leaf_name_data.push_back(core_static_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-entries")
    {
        core_entries = value;
        core_entries.value_namespace = name_space;
        core_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-static-entries")
    {
        core_static_entries = value;
        core_static_entries.value_namespace = name_space;
        core_static_entries.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "core-entries")
    {
        core_entries.yfilter = yfilter;
    }
    if(value_path == "core-static-entries")
    {
        core_static_entries.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::Statistics::Location::CoreId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "core-entries" || name == "core-static-entries")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::SwitchFdbCommon()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "switch-fdb-common"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::~SwitchFdbCommon()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-fdb-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    num_entries{YType::uint32, "num-entries"},
    has_trunk_entry{YType::uint8, "has-trunk-entry"},
    trunk_entry_message{YType::str, "trunk-entry-message"}
        ,
    fdb_block(std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock>())
{
    fdb_block->parent = this;

    yang_name = "location"; yang_parent_name = "switch-fdb-common"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::~Location()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| num_entries.is_set
	|| has_trunk_entry.is_set
	|| trunk_entry_message.is_set
	|| (fdb_block !=  nullptr && fdb_block->has_data());
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(has_trunk_entry.yfilter)
	|| ydk::is_set(trunk_entry_message.yfilter)
	|| (fdb_block !=  nullptr && fdb_block->has_operation());
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/fdb/switch-fdb-common/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (has_trunk_entry.is_set || is_set(has_trunk_entry.yfilter)) leaf_name_data.push_back(has_trunk_entry.get_name_leafdata());
    if (trunk_entry_message.is_set || is_set(trunk_entry_message.yfilter)) leaf_name_data.push_back(trunk_entry_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-block")
    {
        if(fdb_block == nullptr)
        {
            fdb_block = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock>();
        }
        return fdb_block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb_block != nullptr)
    {
        children["fdb-block"] = fdb_block;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry = value;
        has_trunk_entry.value_namespace = name_space;
        has_trunk_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message = value;
        trunk_entry_message.value_namespace = name_space;
        trunk_entry_message.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "has-trunk-entry")
    {
        has_trunk_entry.yfilter = yfilter;
    }
    if(value_path == "trunk-entry-message")
    {
        trunk_entry_message.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-block" || name == "rack" || name == "card" || name == "switch-id" || name == "num-entries" || name == "has-trunk-entry" || name == "trunk-entry-message")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbBlock()
    :
    fdb_entry(this, {"fdb_index"})
{

    yang_name = "fdb-block"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::~FdbBlock()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_operation() const
{
    for (std::size_t index=0; index<fdb_entry.len(); index++)
    {
        if(fdb_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb-entry")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry>();
        c->parent = this;
        fdb_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fdb_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-entry")
        return true;
    return false;
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::FdbEntry()
    :
    fdb_index{YType::uint32, "fdb-index"},
    fdb_mac_addr{YType::str, "fdb-mac-addr"},
    fdb_vlan{YType::uint16, "fdb-vlan"},
    fdb_vlan_hex{YType::str, "fdb-vlan-hex"},
    fdb_port{YType::int32, "fdb-port"},
    fdb_trap_entry{YType::enumeration, "fdb-trap-entry"},
    fdb_static_entry{YType::enumeration, "fdb-static-entry"},
    fdb_synced_cores{YType::uint8, "fdb-synced-cores"}
{

    yang_name = "fdb-entry"; yang_parent_name = "fdb-block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::~FdbEntry()
{
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fdb_index.is_set
	|| fdb_mac_addr.is_set
	|| fdb_vlan.is_set
	|| fdb_vlan_hex.is_set
	|| fdb_port.is_set
	|| fdb_trap_entry.is_set
	|| fdb_static_entry.is_set;
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_operation() const
{
    for (auto const & leaf : fdb_synced_cores.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fdb_index.yfilter)
	|| ydk::is_set(fdb_mac_addr.yfilter)
	|| ydk::is_set(fdb_vlan.yfilter)
	|| ydk::is_set(fdb_vlan_hex.yfilter)
	|| ydk::is_set(fdb_port.yfilter)
	|| ydk::is_set(fdb_trap_entry.yfilter)
	|| ydk::is_set(fdb_static_entry.yfilter)
	|| ydk::is_set(fdb_synced_cores.yfilter);
}

std::string Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb-entry";
    ADD_KEY_TOKEN(fdb_index, "fdb-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fdb_index.is_set || is_set(fdb_index.yfilter)) leaf_name_data.push_back(fdb_index.get_name_leafdata());
    if (fdb_mac_addr.is_set || is_set(fdb_mac_addr.yfilter)) leaf_name_data.push_back(fdb_mac_addr.get_name_leafdata());
    if (fdb_vlan.is_set || is_set(fdb_vlan.yfilter)) leaf_name_data.push_back(fdb_vlan.get_name_leafdata());
    if (fdb_vlan_hex.is_set || is_set(fdb_vlan_hex.yfilter)) leaf_name_data.push_back(fdb_vlan_hex.get_name_leafdata());
    if (fdb_port.is_set || is_set(fdb_port.yfilter)) leaf_name_data.push_back(fdb_port.get_name_leafdata());
    if (fdb_trap_entry.is_set || is_set(fdb_trap_entry.yfilter)) leaf_name_data.push_back(fdb_trap_entry.get_name_leafdata());
    if (fdb_static_entry.is_set || is_set(fdb_static_entry.yfilter)) leaf_name_data.push_back(fdb_static_entry.get_name_leafdata());

    auto fdb_synced_cores_name_datas = fdb_synced_cores.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fdb_synced_cores_name_datas.begin(), fdb_synced_cores_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fdb-index")
    {
        fdb_index = value;
        fdb_index.value_namespace = name_space;
        fdb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr = value;
        fdb_mac_addr.value_namespace = name_space;
        fdb_mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan = value;
        fdb_vlan.value_namespace = name_space;
        fdb_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex = value;
        fdb_vlan_hex.value_namespace = name_space;
        fdb_vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-port")
    {
        fdb_port = value;
        fdb_port.value_namespace = name_space;
        fdb_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry = value;
        fdb_trap_entry.value_namespace = name_space;
        fdb_trap_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry = value;
        fdb_static_entry.value_namespace = name_space;
        fdb_static_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.append(value);
    }
}

void Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fdb-index")
    {
        fdb_index.yfilter = yfilter;
    }
    if(value_path == "fdb-mac-addr")
    {
        fdb_mac_addr.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan")
    {
        fdb_vlan.yfilter = yfilter;
    }
    if(value_path == "fdb-vlan-hex")
    {
        fdb_vlan_hex.yfilter = yfilter;
    }
    if(value_path == "fdb-port")
    {
        fdb_port.yfilter = yfilter;
    }
    if(value_path == "fdb-trap-entry")
    {
        fdb_trap_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-static-entry")
    {
        fdb_static_entry.yfilter = yfilter;
    }
    if(value_path == "fdb-synced-cores")
    {
        fdb_synced_cores.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Fdb::SwitchFdbCommon::Location::FdbBlock::FdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb-index" || name == "fdb-mac-addr" || name == "fdb-vlan" || name == "fdb-vlan-hex" || name == "fdb-port" || name == "fdb-trap-entry" || name == "fdb-static-entry" || name == "fdb-synced-cores")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Vlan()
    :
    rules(std::make_shared<Controller::Switch::Oper::Vlan::Rules>())
    , information(std::make_shared<Controller::Switch::Oper::Vlan::Information>())
    , vlan_detail(std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail>())
    , membership(std::make_shared<Controller::Switch::Oper::Vlan::Membership>())
{
    rules->parent = this;
    information->parent = this;
    vlan_detail->parent = this;
    membership->parent = this;

    yang_name = "vlan"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::~Vlan()
{
}

bool Controller::Switch::Oper::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (rules !=  nullptr && rules->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (vlan_detail !=  nullptr && vlan_detail->has_data())
	|| (membership !=  nullptr && membership->has_data());
}

bool Controller::Switch::Oper::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (rules !=  nullptr && rules->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (vlan_detail !=  nullptr && vlan_detail->has_operation())
	|| (membership !=  nullptr && membership->has_operation());
}

std::string Controller::Switch::Oper::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Controller::Switch::Oper::Vlan::Rules>();
        }
        return rules;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Controller::Switch::Oper::Vlan::Information>();
        }
        return information;
    }

    if(child_yang_name == "vlan-detail")
    {
        if(vlan_detail == nullptr)
        {
            vlan_detail = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail>();
        }
        return vlan_detail;
    }

    if(child_yang_name == "membership")
    {
        if(membership == nullptr)
        {
            membership = std::make_shared<Controller::Switch::Oper::Vlan::Membership>();
        }
        return membership;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(vlan_detail != nullptr)
    {
        children["vlan-detail"] = vlan_detail;
    }

    if(membership != nullptr)
    {
        children["membership"] = membership;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "information" || name == "vlan-detail" || name == "membership")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Rules()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "rules"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Rules::~Rules()
{
}

bool Controller::Switch::Oper::Vlan::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Rules::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Rules::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Rules::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Rules::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    vlan_id(this, {"vlan"})
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId>();
        c->parent = this;
        vlan_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"}
        ,
    rule_id(this, {})
{

    yang_name = "vlan-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_id.len(); index++)
    {
        if(rule_id[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::has_operation() const
{
    for (std::size_t index=0; index<rule_id.len(); index++)
    {
        if(rule_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId>();
        c->parent = this;
        rule_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-id" || name == "vlan")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::RuleId()
    :
    direction{YType::enumeration, "direction"},
    match_table{YType::enumeration, "match-table"},
    match_type{YType::enumeration, "match-type"},
    match_vlan_id{YType::uint16, "match-vlan-id"},
    action{YType::enumeration, "action"},
    action_vlan_id{YType::uint16, "action-vlan-id"}
{

    yang_name = "rule-id"; yang_parent_name = "vlan-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::~RuleId()
{
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| match_table.is_set
	|| match_type.is_set
	|| match_vlan_id.is_set
	|| action.is_set
	|| action_vlan_id.is_set;
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(match_table.yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| ydk::is_set(match_vlan_id.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(action_vlan_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (match_table.is_set || is_set(match_table.yfilter)) leaf_name_data.push_back(match_table.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (match_vlan_id.is_set || is_set(match_vlan_id.yfilter)) leaf_name_data.push_back(match_vlan_id.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (action_vlan_id.is_set || is_set(action_vlan_id.yfilter)) leaf_name_data.push_back(action_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-table")
    {
        match_table = value;
        match_table.value_namespace = name_space;
        match_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id = value;
        match_vlan_id.value_namespace = name_space;
        match_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id = value;
        action_vlan_id.value_namespace = name_space;
        action_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "match-table")
    {
        match_table.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Rules::Location::PortIter::VlanId::RuleId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "match-table" || name == "match-type" || name == "match-vlan-id" || name == "action" || name == "action-vlan-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Information()
    :
    location(this, {"rack", "card", "switch_id"})
    , summary(std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary>())
{
    summary->parent = this;

    yang_name = "information"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::~Information()
{
}

bool Controller::Switch::Oper::Vlan::Information::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (summary !=  nullptr && summary->has_data());
}

bool Controller::Switch::Oper::Vlan::Information::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Controller::Switch::Oper::Vlan::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "summary")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    sdr_id(this, {"sdr"})
{

    yang_name = "location"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location::SdrId>();
        c->parent = this;
        sdr_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
        ,
    vlan_id(this, {"vlan"})
{

    yang_name = "sdr-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId>();
        c->parent = this;
        vlan_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Location::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    vlan_use{YType::str, "vlan-use"}
{

    yang_name = "vlan-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| vlan_hex.is_set
	|| vlan_use.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(vlan_use.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());
    if (vlan_use.is_set || is_set(vlan_use.yfilter)) leaf_name_data.push_back(vlan_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-use")
    {
        vlan_use = value;
        vlan_use.value_namespace = name_space;
        vlan_use.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "vlan-use")
    {
        vlan_use.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Location::SdrId::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "vlan-use")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::Summary()
    :
    sdr_id(this, {"sdr"})
{

    yang_name = "summary"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::Summary::~Summary()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary::SdrId>();
        c->parent = this;
        sdr_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Information::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
        ,
    vlan_id(this, {"vlan"})
{

    yang_name = "sdr-id"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/information/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId>();
        c->parent = this;
        vlan_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    vlan_use{YType::str, "vlan-use"}
{

    yang_name = "vlan-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| vlan_hex.is_set
	|| vlan_use.is_set;
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(vlan_use.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());
    if (vlan_use.is_set || is_set(vlan_use.yfilter)) leaf_name_data.push_back(vlan_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-use")
    {
        vlan_use = value;
        vlan_use.value_namespace = name_space;
        vlan_use.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "vlan-use")
    {
        vlan_use.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Information::Summary::SdrId::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "vlan-use")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanDetail()
    :
    vlan_id(this, {"vlan"})
{

    yang_name = "vlan-detail"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::VlanDetail::~VlanDetail()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId>();
        c->parent = this;
        vlan_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::VlanDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"}
        ,
    rules(std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules>())
{
    rules->parent = this;

    yang_name = "vlan-id"; yang_parent_name = "vlan-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| (rules !=  nullptr && rules->has_data());
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (rules !=  nullptr && rules->has_operation());
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/vlan-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rules")
    {
        if(rules == nullptr)
        {
            rules = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules>();
        }
        return rules;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rules != nullptr)
    {
        children["rules"] = rules;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rules" || name == "vlan")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Rules()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "rules"; yang_parent_name = "vlan-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::~Rules()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "rules"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    rule_id(this, {})
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_id.len(); index++)
    {
        if(rule_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<rule_id.len(); index++)
    {
        if(rule_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId>();
        c->parent = this;
        rule_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::RuleId()
    :
    direction{YType::enumeration, "direction"},
    match_table{YType::enumeration, "match-table"},
    match_type{YType::enumeration, "match-type"},
    match_vlan_id{YType::uint16, "match-vlan-id"},
    action{YType::enumeration, "action"},
    action_vlan_id{YType::uint16, "action-vlan-id"}
{

    yang_name = "rule-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::~RuleId()
{
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| match_table.is_set
	|| match_type.is_set
	|| match_vlan_id.is_set
	|| action.is_set
	|| action_vlan_id.is_set;
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(match_table.yfilter)
	|| ydk::is_set(match_type.yfilter)
	|| ydk::is_set(match_vlan_id.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(action_vlan_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (match_table.is_set || is_set(match_table.yfilter)) leaf_name_data.push_back(match_table.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());
    if (match_vlan_id.is_set || is_set(match_vlan_id.yfilter)) leaf_name_data.push_back(match_vlan_id.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (action_vlan_id.is_set || is_set(action_vlan_id.yfilter)) leaf_name_data.push_back(action_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-table")
    {
        match_table = value;
        match_table.value_namespace = name_space;
        match_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id = value;
        match_vlan_id.value_namespace = name_space;
        match_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id = value;
        action_vlan_id.value_namespace = name_space;
        action_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "match-table")
    {
        match_table.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
    if(value_path == "match-vlan-id")
    {
        match_vlan_id.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "action-vlan-id")
    {
        action_vlan_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::VlanDetail::VlanId::Rules::Location::PortIter::RuleId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "match-table" || name == "match-type" || name == "match-vlan-id" || name == "action" || name == "action-vlan-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Membership()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "membership"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Membership::~Membership()
{
}

bool Controller::Switch::Oper::Vlan::Membership::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Vlan::Membership::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Membership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "membership";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Membership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Membership::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Membership::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Membership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Vlan::Membership::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Vlan::Membership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    vlan_id(this, {"vlan"})
{

    yang_name = "location"; yang_parent_name = "membership"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Vlan::Membership::Location::~Location()
{
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_operation() const
{
    for (std::size_t index=0; index<vlan_id.len(); index++)
    {
        if(vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/vlan/membership/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Membership::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Vlan::Membership::Location::VlanId>();
        c->parent = this;
        vlan_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Membership::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Vlan::Membership::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Vlan::Membership::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Membership::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Vlan::Membership::Location::VlanId::VlanId()
    :
    vlan{YType::uint16, "vlan"},
    vlan_hex{YType::str, "vlan-hex"},
    port{YType::uint8, "port"}
{

    yang_name = "vlan-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Vlan::Membership::Location::VlanId::~VlanId()
{
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vlan.is_set
	|| vlan_hex.is_set;
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(vlan_hex.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vlan_hex.is_set || is_set(vlan_hex.yfilter)) leaf_name_data.push_back(vlan_hex.get_name_leafdata());

    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Vlan::Membership::Location::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Vlan::Membership::Location::VlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex = value;
        vlan_hex.value_namespace = name_space;
        vlan_hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Controller::Switch::Oper::Vlan::Membership::Location::VlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "vlan-hex")
    {
        vlan_hex.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Vlan::Membership::Location::VlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "vlan-hex" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Sdr()
    :
    port_statistics(std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics>())
    , global_statistics(std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics>())
    , policers(std::make_shared<Controller::Switch::Oper::Sdr::Policers>())
    , sdr_detail(std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail>())
{
    port_statistics->parent = this;
    global_statistics->parent = this;
    policers->parent = this;
    sdr_detail->parent = this;

    yang_name = "sdr"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::~Sdr()
{
}

bool Controller::Switch::Oper::Sdr::has_data() const
{
    if (is_presence_container) return true;
    return (port_statistics !=  nullptr && port_statistics->has_data())
	|| (global_statistics !=  nullptr && global_statistics->has_data())
	|| (policers !=  nullptr && policers->has_data())
	|| (sdr_detail !=  nullptr && sdr_detail->has_data());
}

bool Controller::Switch::Oper::Sdr::has_operation() const
{
    return is_set(yfilter)
	|| (port_statistics !=  nullptr && port_statistics->has_operation())
	|| (global_statistics !=  nullptr && global_statistics->has_operation())
	|| (policers !=  nullptr && policers->has_operation())
	|| (sdr_detail !=  nullptr && sdr_detail->has_operation());
}

std::string Controller::Switch::Oper::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-statistics")
    {
        if(port_statistics == nullptr)
        {
            port_statistics = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics>();
        }
        return port_statistics;
    }

    if(child_yang_name == "global-statistics")
    {
        if(global_statistics == nullptr)
        {
            global_statistics = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics>();
        }
        return global_statistics;
    }

    if(child_yang_name == "policers")
    {
        if(policers == nullptr)
        {
            policers = std::make_shared<Controller::Switch::Oper::Sdr::Policers>();
        }
        return policers;
    }

    if(child_yang_name == "sdr-detail")
    {
        if(sdr_detail == nullptr)
        {
            sdr_detail = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail>();
        }
        return sdr_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_statistics != nullptr)
    {
        children["port-statistics"] = port_statistics;
    }

    if(global_statistics != nullptr)
    {
        children["global-statistics"] = global_statistics;
    }

    if(policers != nullptr)
    {
        children["policers"] = policers;
    }

    if(sdr_detail != nullptr)
    {
        children["sdr-detail"] = sdr_detail;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-statistics" || name == "global-statistics" || name == "policers" || name == "sdr-detail")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::PortStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "port-statistics"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::PortStatistics::~PortStatistics()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::PortStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "port-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/port-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    sdr_id(this, {"sdr"})
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId>();
        c->parent = this;
        sdr_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
        ,
    traffic_type_id(this, {"traffic_type"})
{

    yang_name = "sdr-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_type_id.len(); index++)
    {
        if(traffic_type_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::has_operation() const
{
    for (std::size_t index=0; index<traffic_type_id.len(); index++)
    {
        if(traffic_type_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-type-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId>();
        c->parent = this;
        traffic_type_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : traffic_type_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-type-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::TrafficTypeId()
    :
    traffic_type{YType::enumeration, "traffic-type"}
        ,
    direction_id(this, {"direction"})
{

    yang_name = "traffic-type-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::~TrafficTypeId()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<direction_id.len(); index++)
    {
        if(direction_id[index]->has_data())
            return true;
    }
    return traffic_type.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::has_operation() const
{
    for (std::size_t index=0; index<direction_id.len(); index++)
    {
        if(direction_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(traffic_type.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-type-id";
    ADD_KEY_TOKEN(traffic_type, "traffic-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_type.is_set || is_set(traffic_type.yfilter)) leaf_name_data.push_back(traffic_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direction-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId>();
        c->parent = this;
        direction_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : direction_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-type")
    {
        traffic_type = value;
        traffic_type.value_namespace = name_space;
        traffic_type.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-type")
    {
        traffic_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction-id" || name == "traffic-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::DirectionId()
    :
    direction{YType::enumeration, "direction"},
    green_packets{YType::uint64, "green-packets"},
    yellow_packets{YType::uint64, "yellow-packets"},
    red_packets{YType::uint64, "red-packets"}
{

    yang_name = "direction-id"; yang_parent_name = "traffic-type-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::~DirectionId()
{
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| green_packets.is_set
	|| yellow_packets.is_set
	|| red_packets.is_set;
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(green_packets.yfilter)
	|| ydk::is_set(yellow_packets.yfilter)
	|| ydk::is_set(red_packets.yfilter);
}

std::string Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-id";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (green_packets.is_set || is_set(green_packets.yfilter)) leaf_name_data.push_back(green_packets.get_name_leafdata());
    if (yellow_packets.is_set || is_set(yellow_packets.yfilter)) leaf_name_data.push_back(yellow_packets.get_name_leafdata());
    if (red_packets.is_set || is_set(red_packets.yfilter)) leaf_name_data.push_back(red_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "green-packets")
    {
        green_packets = value;
        green_packets.value_namespace = name_space;
        green_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets = value;
        yellow_packets.value_namespace = name_space;
        yellow_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-packets")
    {
        red_packets = value;
        red_packets.value_namespace = name_space;
        red_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "green-packets")
    {
        green_packets.yfilter = yfilter;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets.yfilter = yfilter;
    }
    if(value_path == "red-packets")
    {
        red_packets.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::PortStatistics::Location::PortIter::SdrId::TrafficTypeId::DirectionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "green-packets" || name == "yellow-packets" || name == "red-packets")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::GlobalStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "global-statistics"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::GlobalStatistics::~GlobalStatistics()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    sdr_id(this, {"sdr"})
{

    yang_name = "location"; yang_parent_name = "global-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/global-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId>();
        c->parent = this;
        sdr_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"}
        ,
    traffic_type_id(this, {"traffic_type"})
{

    yang_name = "sdr-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_type_id.len(); index++)
    {
        if(traffic_type_id[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::has_operation() const
{
    for (std::size_t index=0; index<traffic_type_id.len(); index++)
    {
        if(traffic_type_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-type-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId>();
        c->parent = this;
        traffic_type_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : traffic_type_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-type-id" || name == "sdr" || name == "esd-sdr-name")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficTypeId()
    :
    traffic_type{YType::enumeration, "traffic-type"}
        ,
    traffic_class_id(this, {"tc"})
{

    yang_name = "traffic-type-id"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::~TrafficTypeId()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_class_id.len(); index++)
    {
        if(traffic_class_id[index]->has_data())
            return true;
    }
    return traffic_type.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::has_operation() const
{
    for (std::size_t index=0; index<traffic_class_id.len(); index++)
    {
        if(traffic_class_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(traffic_type.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-type-id";
    ADD_KEY_TOKEN(traffic_type, "traffic-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_type.is_set || is_set(traffic_type.yfilter)) leaf_name_data.push_back(traffic_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-class-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId>();
        c->parent = this;
        traffic_class_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : traffic_class_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-type")
    {
        traffic_type = value;
        traffic_type.value_namespace = name_space;
        traffic_type.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-type")
    {
        traffic_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class-id" || name == "traffic-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::TrafficClassId()
    :
    tc{YType::int8, "tc"},
    green_packets{YType::uint64, "green-packets"},
    yellow_packets{YType::uint64, "yellow-packets"},
    red_packets{YType::uint64, "red-packets"}
{

    yang_name = "traffic-class-id"; yang_parent_name = "traffic-type-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::~TrafficClassId()
{
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::has_data() const
{
    if (is_presence_container) return true;
    return tc.is_set
	|| green_packets.is_set
	|| yellow_packets.is_set
	|| red_packets.is_set;
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tc.yfilter)
	|| ydk::is_set(green_packets.yfilter)
	|| ydk::is_set(yellow_packets.yfilter)
	|| ydk::is_set(red_packets.yfilter);
}

std::string Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class-id";
    ADD_KEY_TOKEN(tc, "tc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tc.is_set || is_set(tc.yfilter)) leaf_name_data.push_back(tc.get_name_leafdata());
    if (green_packets.is_set || is_set(green_packets.yfilter)) leaf_name_data.push_back(green_packets.get_name_leafdata());
    if (yellow_packets.is_set || is_set(yellow_packets.yfilter)) leaf_name_data.push_back(yellow_packets.get_name_leafdata());
    if (red_packets.is_set || is_set(red_packets.yfilter)) leaf_name_data.push_back(red_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tc")
    {
        tc = value;
        tc.value_namespace = name_space;
        tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "green-packets")
    {
        green_packets = value;
        green_packets.value_namespace = name_space;
        green_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets = value;
        yellow_packets.value_namespace = name_space;
        yellow_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-packets")
    {
        red_packets = value;
        red_packets.value_namespace = name_space;
        red_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tc")
    {
        tc.yfilter = yfilter;
    }
    if(value_path == "green-packets")
    {
        green_packets.yfilter = yfilter;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets.yfilter = yfilter;
    }
    if(value_path == "red-packets")
    {
        red_packets.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::GlobalStatistics::Location::SdrId::TrafficTypeId::TrafficClassId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tc" || name == "green-packets" || name == "yellow-packets" || name == "red-packets")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Policers()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "policers"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::Policers::~Policers()
{
}

bool Controller::Switch::Oper::Sdr::Policers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::Policers::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::Policers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::Policers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::Policers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    esd_policer_status(std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus>())
    , sdr_id(this, {"sdr"})
{
    esd_policer_status->parent = this;

    yang_name = "location"; yang_parent_name = "policers"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::Policers::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (esd_policer_status !=  nullptr && esd_policer_status->has_data());
}

bool Controller::Switch::Oper::Sdr::Policers::Location::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (esd_policer_status !=  nullptr && esd_policer_status->has_operation());
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/policers/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esd-policer-status")
    {
        if(esd_policer_status == nullptr)
        {
            esd_policer_status = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus>();
        }
        return esd_policer_status;
    }

    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::SdrId>();
        c->parent = this;
        sdr_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esd_policer_status != nullptr)
    {
        children["esd-policer-status"] = esd_policer_status;
    }

    count = 0;
    for (auto c : sdr_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::Policers::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::Policers::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-policer-status" || name == "sdr-id" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::EsdPolicerStatus()
    :
    indent_group(std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup>())
{
    indent_group->parent = this;

    yang_name = "esd-policer-status"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::~EsdPolicerStatus()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::has_data() const
{
    if (is_presence_container) return true;
    return (indent_group !=  nullptr && indent_group->has_data());
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::has_operation() const
{
    return is_set(yfilter)
	|| (indent_group !=  nullptr && indent_group->has_operation());
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-policer-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "indent-group")
    {
        if(indent_group == nullptr)
        {
            indent_group = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup>();
        }
        return indent_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(indent_group != nullptr)
    {
        children["indent-group"] = indent_group;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "indent-group")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::IndentGroup()
    :
    esd_port_policing_enabled{YType::enumeration, "esd-port-policing-enabled"},
    esd_port_committed_burst_size{YType::uint32, "esd-port-committed-burst-size"},
    esd_port_peak_burst_size{YType::uint32, "esd-port-peak-burst-size"},
    esd_port_policer_mru{YType::uint32, "esd-port-policer-mru"},
    esd_global_policing_enabled{YType::enumeration, "esd-global-policing-enabled"},
    esd_global_committed_burst_size{YType::uint32, "esd-global-committed-burst-size"},
    esd_global_peak_burst_size{YType::uint32, "esd-global-peak-burst-size"},
    esd_global_policer_mru{YType::uint32, "esd-global-policer-mru"}
{

    yang_name = "indent-group"; yang_parent_name = "esd-policer-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::~IndentGroup()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::has_data() const
{
    if (is_presence_container) return true;
    return esd_port_policing_enabled.is_set
	|| esd_port_committed_burst_size.is_set
	|| esd_port_peak_burst_size.is_set
	|| esd_port_policer_mru.is_set
	|| esd_global_policing_enabled.is_set
	|| esd_global_committed_burst_size.is_set
	|| esd_global_peak_burst_size.is_set
	|| esd_global_policer_mru.is_set;
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_port_policing_enabled.yfilter)
	|| ydk::is_set(esd_port_committed_burst_size.yfilter)
	|| ydk::is_set(esd_port_peak_burst_size.yfilter)
	|| ydk::is_set(esd_port_policer_mru.yfilter)
	|| ydk::is_set(esd_global_policing_enabled.yfilter)
	|| ydk::is_set(esd_global_committed_burst_size.yfilter)
	|| ydk::is_set(esd_global_peak_burst_size.yfilter)
	|| ydk::is_set(esd_global_policer_mru.yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indent-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_port_policing_enabled.is_set || is_set(esd_port_policing_enabled.yfilter)) leaf_name_data.push_back(esd_port_policing_enabled.get_name_leafdata());
    if (esd_port_committed_burst_size.is_set || is_set(esd_port_committed_burst_size.yfilter)) leaf_name_data.push_back(esd_port_committed_burst_size.get_name_leafdata());
    if (esd_port_peak_burst_size.is_set || is_set(esd_port_peak_burst_size.yfilter)) leaf_name_data.push_back(esd_port_peak_burst_size.get_name_leafdata());
    if (esd_port_policer_mru.is_set || is_set(esd_port_policer_mru.yfilter)) leaf_name_data.push_back(esd_port_policer_mru.get_name_leafdata());
    if (esd_global_policing_enabled.is_set || is_set(esd_global_policing_enabled.yfilter)) leaf_name_data.push_back(esd_global_policing_enabled.get_name_leafdata());
    if (esd_global_committed_burst_size.is_set || is_set(esd_global_committed_burst_size.yfilter)) leaf_name_data.push_back(esd_global_committed_burst_size.get_name_leafdata());
    if (esd_global_peak_burst_size.is_set || is_set(esd_global_peak_burst_size.yfilter)) leaf_name_data.push_back(esd_global_peak_burst_size.get_name_leafdata());
    if (esd_global_policer_mru.is_set || is_set(esd_global_policer_mru.yfilter)) leaf_name_data.push_back(esd_global_policer_mru.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-port-policing-enabled")
    {
        esd_port_policing_enabled = value;
        esd_port_policing_enabled.value_namespace = name_space;
        esd_port_policing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-port-committed-burst-size")
    {
        esd_port_committed_burst_size = value;
        esd_port_committed_burst_size.value_namespace = name_space;
        esd_port_committed_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-port-peak-burst-size")
    {
        esd_port_peak_burst_size = value;
        esd_port_peak_burst_size.value_namespace = name_space;
        esd_port_peak_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-port-policer-mru")
    {
        esd_port_policer_mru = value;
        esd_port_policer_mru.value_namespace = name_space;
        esd_port_policer_mru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-policing-enabled")
    {
        esd_global_policing_enabled = value;
        esd_global_policing_enabled.value_namespace = name_space;
        esd_global_policing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-committed-burst-size")
    {
        esd_global_committed_burst_size = value;
        esd_global_committed_burst_size.value_namespace = name_space;
        esd_global_committed_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-peak-burst-size")
    {
        esd_global_peak_burst_size = value;
        esd_global_peak_burst_size.value_namespace = name_space;
        esd_global_peak_burst_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-global-policer-mru")
    {
        esd_global_policer_mru = value;
        esd_global_policer_mru.value_namespace = name_space;
        esd_global_policer_mru.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-port-policing-enabled")
    {
        esd_port_policing_enabled.yfilter = yfilter;
    }
    if(value_path == "esd-port-committed-burst-size")
    {
        esd_port_committed_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-port-peak-burst-size")
    {
        esd_port_peak_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-port-policer-mru")
    {
        esd_port_policer_mru.yfilter = yfilter;
    }
    if(value_path == "esd-global-policing-enabled")
    {
        esd_global_policing_enabled.yfilter = yfilter;
    }
    if(value_path == "esd-global-committed-burst-size")
    {
        esd_global_committed_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-global-peak-burst-size")
    {
        esd_global_peak_burst_size.yfilter = yfilter;
    }
    if(value_path == "esd-global-policer-mru")
    {
        esd_global_policer_mru.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::Policers::Location::EsdPolicerStatus::IndentGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-port-policing-enabled" || name == "esd-port-committed-burst-size" || name == "esd-port-peak-burst-size" || name == "esd-port-policer-mru" || name == "esd-global-policing-enabled" || name == "esd-global-committed-burst-size" || name == "esd-global-peak-burst-size" || name == "esd-global-policer-mru")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"},
    esd_sdr_name{YType::str, "esd-sdr-name"},
    esd_sdr_cir{YType::uint8, "esd-sdr-cir"},
    esd_sdr_pir{YType::uint8, "esd-sdr-pir"}
        ,
    esd_sdr_cos_type_iter(this, {"esd_sdr_cos_type"})
{

    yang_name = "sdr-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<esd_sdr_cos_type_iter.len(); index++)
    {
        if(esd_sdr_cos_type_iter[index]->has_data())
            return true;
    }
    return sdr.is_set
	|| esd_sdr_name.is_set
	|| esd_sdr_cir.is_set
	|| esd_sdr_pir.is_set;
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::has_operation() const
{
    for (std::size_t index=0; index<esd_sdr_cos_type_iter.len(); index++)
    {
        if(esd_sdr_cos_type_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| ydk::is_set(esd_sdr_name.yfilter)
	|| ydk::is_set(esd_sdr_cir.yfilter)
	|| ydk::is_set(esd_sdr_pir.yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());
    if (esd_sdr_name.is_set || is_set(esd_sdr_name.yfilter)) leaf_name_data.push_back(esd_sdr_name.get_name_leafdata());
    if (esd_sdr_cir.is_set || is_set(esd_sdr_cir.yfilter)) leaf_name_data.push_back(esd_sdr_cir.get_name_leafdata());
    if (esd_sdr_pir.is_set || is_set(esd_sdr_pir.yfilter)) leaf_name_data.push_back(esd_sdr_pir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esd-sdr-cos-type-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter>();
        c->parent = this;
        esd_sdr_cos_type_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : esd_sdr_cos_type_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name = value;
        esd_sdr_name.value_namespace = name_space;
        esd_sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cir")
    {
        esd_sdr_cir = value;
        esd_sdr_cir.value_namespace = name_space;
        esd_sdr_cir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-pir")
    {
        esd_sdr_pir = value;
        esd_sdr_pir.value_namespace = name_space;
        esd_sdr_pir.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-name")
    {
        esd_sdr_name.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cir")
    {
        esd_sdr_cir.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-pir")
    {
        esd_sdr_pir.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-sdr-cos-type-iter" || name == "sdr" || name == "esd-sdr-name" || name == "esd-sdr-cir" || name == "esd-sdr-pir")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::EsdSdrCosTypeIter()
    :
    esd_sdr_cos_type{YType::enumeration, "esd-sdr-cos-type"},
    esd_sdr_cos_0{YType::uint8, "esd-sdr-cos-0"},
    esd_sdr_cos_1{YType::uint8, "esd-sdr-cos-1"},
    esd_sdr_cos_2{YType::uint8, "esd-sdr-cos-2"},
    esd_sdr_cos_3{YType::uint8, "esd-sdr-cos-3"},
    esd_sdr_cos_4{YType::uint8, "esd-sdr-cos-4"},
    esd_sdr_cos_5{YType::uint8, "esd-sdr-cos-5"},
    esd_sdr_cos_6{YType::uint8, "esd-sdr-cos-6"},
    esd_sdr_cos_7{YType::uint8, "esd-sdr-cos-7"}
{

    yang_name = "esd-sdr-cos-type-iter"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::~EsdSdrCosTypeIter()
{
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::has_data() const
{
    if (is_presence_container) return true;
    return esd_sdr_cos_type.is_set
	|| esd_sdr_cos_0.is_set
	|| esd_sdr_cos_1.is_set
	|| esd_sdr_cos_2.is_set
	|| esd_sdr_cos_3.is_set
	|| esd_sdr_cos_4.is_set
	|| esd_sdr_cos_5.is_set
	|| esd_sdr_cos_6.is_set
	|| esd_sdr_cos_7.is_set;
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_sdr_cos_type.yfilter)
	|| ydk::is_set(esd_sdr_cos_0.yfilter)
	|| ydk::is_set(esd_sdr_cos_1.yfilter)
	|| ydk::is_set(esd_sdr_cos_2.yfilter)
	|| ydk::is_set(esd_sdr_cos_3.yfilter)
	|| ydk::is_set(esd_sdr_cos_4.yfilter)
	|| ydk::is_set(esd_sdr_cos_5.yfilter)
	|| ydk::is_set(esd_sdr_cos_6.yfilter)
	|| ydk::is_set(esd_sdr_cos_7.yfilter);
}

std::string Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-sdr-cos-type-iter";
    ADD_KEY_TOKEN(esd_sdr_cos_type, "esd-sdr-cos-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_sdr_cos_type.is_set || is_set(esd_sdr_cos_type.yfilter)) leaf_name_data.push_back(esd_sdr_cos_type.get_name_leafdata());
    if (esd_sdr_cos_0.is_set || is_set(esd_sdr_cos_0.yfilter)) leaf_name_data.push_back(esd_sdr_cos_0.get_name_leafdata());
    if (esd_sdr_cos_1.is_set || is_set(esd_sdr_cos_1.yfilter)) leaf_name_data.push_back(esd_sdr_cos_1.get_name_leafdata());
    if (esd_sdr_cos_2.is_set || is_set(esd_sdr_cos_2.yfilter)) leaf_name_data.push_back(esd_sdr_cos_2.get_name_leafdata());
    if (esd_sdr_cos_3.is_set || is_set(esd_sdr_cos_3.yfilter)) leaf_name_data.push_back(esd_sdr_cos_3.get_name_leafdata());
    if (esd_sdr_cos_4.is_set || is_set(esd_sdr_cos_4.yfilter)) leaf_name_data.push_back(esd_sdr_cos_4.get_name_leafdata());
    if (esd_sdr_cos_5.is_set || is_set(esd_sdr_cos_5.yfilter)) leaf_name_data.push_back(esd_sdr_cos_5.get_name_leafdata());
    if (esd_sdr_cos_6.is_set || is_set(esd_sdr_cos_6.yfilter)) leaf_name_data.push_back(esd_sdr_cos_6.get_name_leafdata());
    if (esd_sdr_cos_7.is_set || is_set(esd_sdr_cos_7.yfilter)) leaf_name_data.push_back(esd_sdr_cos_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-sdr-cos-type")
    {
        esd_sdr_cos_type = value;
        esd_sdr_cos_type.value_namespace = name_space;
        esd_sdr_cos_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-0")
    {
        esd_sdr_cos_0 = value;
        esd_sdr_cos_0.value_namespace = name_space;
        esd_sdr_cos_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-1")
    {
        esd_sdr_cos_1 = value;
        esd_sdr_cos_1.value_namespace = name_space;
        esd_sdr_cos_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-2")
    {
        esd_sdr_cos_2 = value;
        esd_sdr_cos_2.value_namespace = name_space;
        esd_sdr_cos_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-3")
    {
        esd_sdr_cos_3 = value;
        esd_sdr_cos_3.value_namespace = name_space;
        esd_sdr_cos_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-4")
    {
        esd_sdr_cos_4 = value;
        esd_sdr_cos_4.value_namespace = name_space;
        esd_sdr_cos_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-5")
    {
        esd_sdr_cos_5 = value;
        esd_sdr_cos_5.value_namespace = name_space;
        esd_sdr_cos_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-6")
    {
        esd_sdr_cos_6 = value;
        esd_sdr_cos_6.value_namespace = name_space;
        esd_sdr_cos_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-sdr-cos-7")
    {
        esd_sdr_cos_7 = value;
        esd_sdr_cos_7.value_namespace = name_space;
        esd_sdr_cos_7.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-sdr-cos-type")
    {
        esd_sdr_cos_type.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-0")
    {
        esd_sdr_cos_0.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-1")
    {
        esd_sdr_cos_1.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-2")
    {
        esd_sdr_cos_2.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-3")
    {
        esd_sdr_cos_3.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-4")
    {
        esd_sdr_cos_4.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-5")
    {
        esd_sdr_cos_5.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-6")
    {
        esd_sdr_cos_6.yfilter = yfilter;
    }
    if(value_path == "esd-sdr-cos-7")
    {
        esd_sdr_cos_7.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::Policers::Location::SdrId::EsdSdrCosTypeIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-sdr-cos-type" || name == "esd-sdr-cos-0" || name == "esd-sdr-cos-1" || name == "esd-sdr-cos-2" || name == "esd-sdr-cos-3" || name == "esd-sdr-cos-4" || name == "esd-sdr-cos-5" || name == "esd-sdr-cos-6" || name == "esd-sdr-cos-7")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrDetail()
    :
    sdr_id(this, {"sdr"})
{

    yang_name = "sdr-detail"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::SdrDetail::~SdrDetail()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::has_operation() const
{
    for (std::size_t index=0; index<sdr_id.len(); index++)
    {
        if(sdr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId>();
        c->parent = this;
        sdr_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::SdrDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::SdrId()
    :
    sdr{YType::uint8, "sdr"}
        ,
    port_statistics(std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics>())
{
    port_statistics->parent = this;

    yang_name = "sdr-id"; yang_parent_name = "sdr-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::~SdrId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::has_data() const
{
    if (is_presence_container) return true;
    return sdr.is_set
	|| (port_statistics !=  nullptr && port_statistics->has_data());
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr.yfilter)
	|| (port_statistics !=  nullptr && port_statistics->has_operation());
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sdr/sdr-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-id";
    ADD_KEY_TOKEN(sdr, "sdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr.is_set || is_set(sdr.yfilter)) leaf_name_data.push_back(sdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-statistics")
    {
        if(port_statistics == nullptr)
        {
            port_statistics = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics>();
        }
        return port_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port_statistics != nullptr)
    {
        children["port-statistics"] = port_statistics;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr")
    {
        sdr = value;
        sdr.value_namespace = name_space;
        sdr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr")
    {
        sdr.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-statistics" || name == "sdr")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::PortStatistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "port-statistics"; yang_parent_name = "sdr-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::~PortStatistics()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "port-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    traffic_type_id(this, {"traffic_type"})
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_type_id.len(); index++)
    {
        if(traffic_type_id[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::has_operation() const
{
    for (std::size_t index=0; index<traffic_type_id.len(); index++)
    {
        if(traffic_type_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-type-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId>();
        c->parent = this;
        traffic_type_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : traffic_type_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-type-id" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::TrafficTypeId()
    :
    traffic_type{YType::enumeration, "traffic-type"}
        ,
    direction_id(this, {"direction"})
{

    yang_name = "traffic-type-id"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::~TrafficTypeId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<direction_id.len(); index++)
    {
        if(direction_id[index]->has_data())
            return true;
    }
    return traffic_type.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::has_operation() const
{
    for (std::size_t index=0; index<direction_id.len(); index++)
    {
        if(direction_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(traffic_type.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-type-id";
    ADD_KEY_TOKEN(traffic_type, "traffic-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_type.is_set || is_set(traffic_type.yfilter)) leaf_name_data.push_back(traffic_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direction-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId>();
        c->parent = this;
        direction_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : direction_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-type")
    {
        traffic_type = value;
        traffic_type.value_namespace = name_space;
        traffic_type.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-type")
    {
        traffic_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction-id" || name == "traffic-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::DirectionId()
    :
    direction{YType::enumeration, "direction"}
        ,
    traffic_class_id(this, {"tc"})
{

    yang_name = "direction-id"; yang_parent_name = "traffic-type-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::~DirectionId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<traffic_class_id.len(); index++)
    {
        if(traffic_class_id[index]->has_data())
            return true;
    }
    return direction.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::has_operation() const
{
    for (std::size_t index=0; index<traffic_class_id.len(); index++)
    {
        if(traffic_class_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-id";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-class-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId>();
        c->parent = this;
        traffic_class_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : traffic_class_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class-id" || name == "direction")
        return true;
    return false;
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::TrafficClassId()
    :
    tc{YType::int8, "tc"},
    green_packets{YType::uint64, "green-packets"},
    yellow_packets{YType::uint64, "yellow-packets"},
    red_packets{YType::uint64, "red-packets"}
{

    yang_name = "traffic-class-id"; yang_parent_name = "direction-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::~TrafficClassId()
{
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::has_data() const
{
    if (is_presence_container) return true;
    return tc.is_set
	|| green_packets.is_set
	|| yellow_packets.is_set
	|| red_packets.is_set;
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tc.yfilter)
	|| ydk::is_set(green_packets.yfilter)
	|| ydk::is_set(yellow_packets.yfilter)
	|| ydk::is_set(red_packets.yfilter);
}

std::string Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class-id";
    ADD_KEY_TOKEN(tc, "tc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tc.is_set || is_set(tc.yfilter)) leaf_name_data.push_back(tc.get_name_leafdata());
    if (green_packets.is_set || is_set(green_packets.yfilter)) leaf_name_data.push_back(green_packets.get_name_leafdata());
    if (yellow_packets.is_set || is_set(yellow_packets.yfilter)) leaf_name_data.push_back(yellow_packets.get_name_leafdata());
    if (red_packets.is_set || is_set(red_packets.yfilter)) leaf_name_data.push_back(red_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tc")
    {
        tc = value;
        tc.value_namespace = name_space;
        tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "green-packets")
    {
        green_packets = value;
        green_packets.value_namespace = name_space;
        green_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets = value;
        yellow_packets.value_namespace = name_space;
        yellow_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "red-packets")
    {
        red_packets = value;
        red_packets.value_namespace = name_space;
        red_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tc")
    {
        tc.yfilter = yfilter;
    }
    if(value_path == "green-packets")
    {
        green_packets.yfilter = yfilter;
    }
    if(value_path == "yellow-packets")
    {
        yellow_packets.yfilter = yfilter;
    }
    if(value_path == "red-packets")
    {
        red_packets.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sdr::SdrDetail::SdrId::PortStatistics::Location::PortIter::TrafficTypeId::DirectionId::TrafficClassId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tc" || name == "green-packets" || name == "yellow-packets" || name == "red-packets")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Sfp()
    :
    summary(std::make_shared<Controller::Switch::Oper::Sfp::Summary>())
    , detail(std::make_shared<Controller::Switch::Oper::Sfp::Detail>())
{
    summary->parent = this;
    detail->parent = this;

    yang_name = "sfp"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sfp::~Sfp()
{
}

bool Controller::Switch::Oper::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Switch::Oper::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Switch::Oper::Sfp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Switch::Oper::Sfp::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Switch::Oper::Sfp::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Summary::Summary()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "summary"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sfp::Summary::~Summary()
{
}

bool Controller::Switch::Oper::Sfp::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sfp::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sfp::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sfp/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sfp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sfp::Summary::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Summary::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    sfp_port_iter(this, {"sfp_port"})
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sfp::Summary::Location::~Location()
{
}

bool Controller::Switch::Oper::Sfp::Summary::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sfp_port_iter.len(); index++)
    {
        if(sfp_port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sfp::Summary::Location::has_operation() const
{
    for (std::size_t index=0; index<sfp_port_iter.len(); index++)
    {
        if(sfp_port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Summary::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sfp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sfp::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp-port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter>();
        c->parent = this;
        sfp_port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sfp_port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::SfpPortIter()
    :
    sfp_port{YType::int32, "sfp-port"},
    sfp_inserted{YType::enumeration, "sfp-inserted"},
    sfp_controller{YType::enumeration, "sfp-controller"},
    sfp_type{YType::enumeration, "sfp-type"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "sfp-port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::~SfpPortIter()
{
}

bool Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::has_data() const
{
    if (is_presence_container) return true;
    return sfp_port.is_set
	|| sfp_inserted.is_set
	|| sfp_controller.is_set
	|| sfp_type.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sfp_port.yfilter)
	|| ydk::is_set(sfp_inserted.yfilter)
	|| ydk::is_set(sfp_controller.yfilter)
	|| ydk::is_set(sfp_type.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-port-iter";
    ADD_KEY_TOKEN(sfp_port, "sfp-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sfp_port.is_set || is_set(sfp_port.yfilter)) leaf_name_data.push_back(sfp_port.get_name_leafdata());
    if (sfp_inserted.is_set || is_set(sfp_inserted.yfilter)) leaf_name_data.push_back(sfp_inserted.get_name_leafdata());
    if (sfp_controller.is_set || is_set(sfp_controller.yfilter)) leaf_name_data.push_back(sfp_controller.get_name_leafdata());
    if (sfp_type.is_set || is_set(sfp_type.yfilter)) leaf_name_data.push_back(sfp_type.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sfp-port")
    {
        sfp_port = value;
        sfp_port.value_namespace = name_space;
        sfp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-inserted")
    {
        sfp_inserted = value;
        sfp_inserted.value_namespace = name_space;
        sfp_inserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-controller")
    {
        sfp_controller = value;
        sfp_controller.value_namespace = name_space;
        sfp_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-type")
    {
        sfp_type = value;
        sfp_type.value_namespace = name_space;
        sfp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sfp-port")
    {
        sfp_port.yfilter = yfilter;
    }
    if(value_path == "sfp-inserted")
    {
        sfp_inserted.yfilter = yfilter;
    }
    if(value_path == "sfp-controller")
    {
        sfp_controller.yfilter = yfilter;
    }
    if(value_path == "sfp-type")
    {
        sfp_type.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Summary::Location::SfpPortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-port" || name == "sfp-inserted" || name == "sfp-controller" || name == "sfp-type" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Detail()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "detail"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sfp::Detail::~Detail()
{
}

bool Controller::Switch::Oper::Sfp::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Sfp::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sfp/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sfp::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    sfp_port_iter(this, {"sfp_port"})
{

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Sfp::Detail::Location::~Location()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sfp_port_iter.len(); index++)
    {
        if(sfp_port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::has_operation() const
{
    for (std::size_t index=0; index<sfp_port_iter.len(); index++)
    {
        if(sfp_port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/sfp/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp-port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter>();
        c->parent = this;
        sfp_port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sfp_port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpPortIter()
    :
    sfp_port{YType::int32, "sfp-port"},
    sfp_inserted{YType::enumeration, "sfp-inserted"},
    sfp_type{YType::enumeration, "sfp-type"}
        ,
    sfp_details(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails>())
    , qsfp_details(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails>())
{
    sfp_details->parent = this;
    qsfp_details->parent = this;

    yang_name = "sfp-port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::~SfpPortIter()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::has_data() const
{
    if (is_presence_container) return true;
    return sfp_port.is_set
	|| sfp_inserted.is_set
	|| sfp_type.is_set
	|| (sfp_details !=  nullptr && sfp_details->has_data())
	|| (qsfp_details !=  nullptr && qsfp_details->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sfp_port.yfilter)
	|| ydk::is_set(sfp_inserted.yfilter)
	|| ydk::is_set(sfp_type.yfilter)
	|| (sfp_details !=  nullptr && sfp_details->has_operation())
	|| (qsfp_details !=  nullptr && qsfp_details->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-port-iter";
    ADD_KEY_TOKEN(sfp_port, "sfp-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sfp_port.is_set || is_set(sfp_port.yfilter)) leaf_name_data.push_back(sfp_port.get_name_leafdata());
    if (sfp_inserted.is_set || is_set(sfp_inserted.yfilter)) leaf_name_data.push_back(sfp_inserted.get_name_leafdata());
    if (sfp_type.is_set || is_set(sfp_type.yfilter)) leaf_name_data.push_back(sfp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp-details")
    {
        if(sfp_details == nullptr)
        {
            sfp_details = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails>();
        }
        return sfp_details;
    }

    if(child_yang_name == "qsfp-details")
    {
        if(qsfp_details == nullptr)
        {
            qsfp_details = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails>();
        }
        return qsfp_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp_details != nullptr)
    {
        children["sfp-details"] = sfp_details;
    }

    if(qsfp_details != nullptr)
    {
        children["qsfp-details"] = qsfp_details;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sfp-port")
    {
        sfp_port = value;
        sfp_port.value_namespace = name_space;
        sfp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-inserted")
    {
        sfp_inserted = value;
        sfp_inserted.value_namespace = name_space;
        sfp_inserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-type")
    {
        sfp_type = value;
        sfp_type.value_namespace = name_space;
        sfp_type.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sfp-port")
    {
        sfp_port.yfilter = yfilter;
    }
    if(value_path == "sfp-inserted")
    {
        sfp_inserted.yfilter = yfilter;
    }
    if(value_path == "sfp-type")
    {
        sfp_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-details" || name == "qsfp-details" || name == "sfp-port" || name == "sfp-inserted" || name == "sfp-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDetails()
    :
    sfp_port_detail(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail>())
    , sfp_msa_data(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData>())
    , sfp_diag_analog_info(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo>())
    , sfp_diag_data1(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1>())
    , sfp_diag_user_info(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo>())
    , sfp_diag_data2(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2>())
{
    sfp_port_detail->parent = this;
    sfp_msa_data->parent = this;
    sfp_diag_analog_info->parent = this;
    sfp_diag_data1->parent = this;
    sfp_diag_user_info->parent = this;
    sfp_diag_data2->parent = this;

    yang_name = "sfp-details"; yang_parent_name = "sfp-port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::~SfpDetails()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::has_data() const
{
    if (is_presence_container) return true;
    return (sfp_port_detail !=  nullptr && sfp_port_detail->has_data())
	|| (sfp_msa_data !=  nullptr && sfp_msa_data->has_data())
	|| (sfp_diag_analog_info !=  nullptr && sfp_diag_analog_info->has_data())
	|| (sfp_diag_data1 !=  nullptr && sfp_diag_data1->has_data())
	|| (sfp_diag_user_info !=  nullptr && sfp_diag_user_info->has_data())
	|| (sfp_diag_data2 !=  nullptr && sfp_diag_data2->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::has_operation() const
{
    return is_set(yfilter)
	|| (sfp_port_detail !=  nullptr && sfp_port_detail->has_operation())
	|| (sfp_msa_data !=  nullptr && sfp_msa_data->has_operation())
	|| (sfp_diag_analog_info !=  nullptr && sfp_diag_analog_info->has_operation())
	|| (sfp_diag_data1 !=  nullptr && sfp_diag_data1->has_operation())
	|| (sfp_diag_user_info !=  nullptr && sfp_diag_user_info->has_operation())
	|| (sfp_diag_data2 !=  nullptr && sfp_diag_data2->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp-port-detail")
    {
        if(sfp_port_detail == nullptr)
        {
            sfp_port_detail = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail>();
        }
        return sfp_port_detail;
    }

    if(child_yang_name == "sfp-msa-data")
    {
        if(sfp_msa_data == nullptr)
        {
            sfp_msa_data = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData>();
        }
        return sfp_msa_data;
    }

    if(child_yang_name == "sfp-diag-analog-info")
    {
        if(sfp_diag_analog_info == nullptr)
        {
            sfp_diag_analog_info = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo>();
        }
        return sfp_diag_analog_info;
    }

    if(child_yang_name == "sfp-diag-data1")
    {
        if(sfp_diag_data1 == nullptr)
        {
            sfp_diag_data1 = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1>();
        }
        return sfp_diag_data1;
    }

    if(child_yang_name == "sfp-diag-user-info")
    {
        if(sfp_diag_user_info == nullptr)
        {
            sfp_diag_user_info = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo>();
        }
        return sfp_diag_user_info;
    }

    if(child_yang_name == "sfp-diag-data2")
    {
        if(sfp_diag_data2 == nullptr)
        {
            sfp_diag_data2 = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2>();
        }
        return sfp_diag_data2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp_port_detail != nullptr)
    {
        children["sfp-port-detail"] = sfp_port_detail;
    }

    if(sfp_msa_data != nullptr)
    {
        children["sfp-msa-data"] = sfp_msa_data;
    }

    if(sfp_diag_analog_info != nullptr)
    {
        children["sfp-diag-analog-info"] = sfp_diag_analog_info;
    }

    if(sfp_diag_data1 != nullptr)
    {
        children["sfp-diag-data1"] = sfp_diag_data1;
    }

    if(sfp_diag_user_info != nullptr)
    {
        children["sfp-diag-user-info"] = sfp_diag_user_info;
    }

    if(sfp_diag_data2 != nullptr)
    {
        children["sfp-diag-data2"] = sfp_diag_data2;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-port-detail" || name == "sfp-msa-data" || name == "sfp-diag-analog-info" || name == "sfp-diag-data1" || name == "sfp-diag-user-info" || name == "sfp-diag-data2")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::SfpPortDetail()
    :
    sfp_tranceiver_type{YType::enumeration, "sfp-tranceiver-type"},
    sfp_tranceiver_code{YType::enumeration, "sfp-tranceiver-code"},
    sfp_encoding{YType::enumeration, "sfp-encoding"},
    sfp_bit_rate{YType::uint32, "sfp-bit-rate"},
    sfp_link_reach_9u_fiber_km{YType::uint32, "sfp-link-reach-9u-fiber_KM"},
    sfp_link_reach_9u_fiber_m{YType::uint32, "sfp-link-reach-9u-fiber_M"},
    sfp_link_reach_50u_fiber_m{YType::uint32, "sfp-link-reach-50u-fiber_M"},
    sfp_link_reach_62_5u_fiber_m{YType::uint32, "sfp-link-reach-62_5u-fiber_M"},
    sfp_link_reach_copper_m{YType::uint32, "sfp-link-reach-copper_M"},
    sfp_vendor_name{YType::str, "sfp-vendor-name"},
    sfp_vendor_oui{YType::str, "sfp-vendor-oui"},
    sfp_vendor_part_num{YType::str, "sfp-vendor-part-num"},
    sfp_laser_wavelength{YType::uint32, "sfp-laser-wavelength"},
    sfp_options{YType::bits, "sfp-options"},
    sfp_vendor_serial_num{YType::str, "sfp-vendor-serial-num"},
    sfp_data_code{YType::str, "sfp-data-code"},
    sfp_diag_monitoring{YType::bits, "sfp-diag-monitoring"},
    sfp_enhanced_options{YType::bits, "sfp-enhanced-options"}
{

    yang_name = "sfp-port-detail"; yang_parent_name = "sfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::~SfpPortDetail()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::has_data() const
{
    if (is_presence_container) return true;
    return sfp_tranceiver_type.is_set
	|| sfp_tranceiver_code.is_set
	|| sfp_encoding.is_set
	|| sfp_bit_rate.is_set
	|| sfp_link_reach_9u_fiber_km.is_set
	|| sfp_link_reach_9u_fiber_m.is_set
	|| sfp_link_reach_50u_fiber_m.is_set
	|| sfp_link_reach_62_5u_fiber_m.is_set
	|| sfp_link_reach_copper_m.is_set
	|| sfp_vendor_name.is_set
	|| sfp_vendor_oui.is_set
	|| sfp_vendor_part_num.is_set
	|| sfp_laser_wavelength.is_set
	|| sfp_options.is_set
	|| sfp_vendor_serial_num.is_set
	|| sfp_data_code.is_set
	|| sfp_diag_monitoring.is_set
	|| sfp_enhanced_options.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sfp_tranceiver_type.yfilter)
	|| ydk::is_set(sfp_tranceiver_code.yfilter)
	|| ydk::is_set(sfp_encoding.yfilter)
	|| ydk::is_set(sfp_bit_rate.yfilter)
	|| ydk::is_set(sfp_link_reach_9u_fiber_km.yfilter)
	|| ydk::is_set(sfp_link_reach_9u_fiber_m.yfilter)
	|| ydk::is_set(sfp_link_reach_50u_fiber_m.yfilter)
	|| ydk::is_set(sfp_link_reach_62_5u_fiber_m.yfilter)
	|| ydk::is_set(sfp_link_reach_copper_m.yfilter)
	|| ydk::is_set(sfp_vendor_name.yfilter)
	|| ydk::is_set(sfp_vendor_oui.yfilter)
	|| ydk::is_set(sfp_vendor_part_num.yfilter)
	|| ydk::is_set(sfp_laser_wavelength.yfilter)
	|| ydk::is_set(sfp_options.yfilter)
	|| ydk::is_set(sfp_vendor_serial_num.yfilter)
	|| ydk::is_set(sfp_data_code.yfilter)
	|| ydk::is_set(sfp_diag_monitoring.yfilter)
	|| ydk::is_set(sfp_enhanced_options.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-port-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sfp_tranceiver_type.is_set || is_set(sfp_tranceiver_type.yfilter)) leaf_name_data.push_back(sfp_tranceiver_type.get_name_leafdata());
    if (sfp_tranceiver_code.is_set || is_set(sfp_tranceiver_code.yfilter)) leaf_name_data.push_back(sfp_tranceiver_code.get_name_leafdata());
    if (sfp_encoding.is_set || is_set(sfp_encoding.yfilter)) leaf_name_data.push_back(sfp_encoding.get_name_leafdata());
    if (sfp_bit_rate.is_set || is_set(sfp_bit_rate.yfilter)) leaf_name_data.push_back(sfp_bit_rate.get_name_leafdata());
    if (sfp_link_reach_9u_fiber_km.is_set || is_set(sfp_link_reach_9u_fiber_km.yfilter)) leaf_name_data.push_back(sfp_link_reach_9u_fiber_km.get_name_leafdata());
    if (sfp_link_reach_9u_fiber_m.is_set || is_set(sfp_link_reach_9u_fiber_m.yfilter)) leaf_name_data.push_back(sfp_link_reach_9u_fiber_m.get_name_leafdata());
    if (sfp_link_reach_50u_fiber_m.is_set || is_set(sfp_link_reach_50u_fiber_m.yfilter)) leaf_name_data.push_back(sfp_link_reach_50u_fiber_m.get_name_leafdata());
    if (sfp_link_reach_62_5u_fiber_m.is_set || is_set(sfp_link_reach_62_5u_fiber_m.yfilter)) leaf_name_data.push_back(sfp_link_reach_62_5u_fiber_m.get_name_leafdata());
    if (sfp_link_reach_copper_m.is_set || is_set(sfp_link_reach_copper_m.yfilter)) leaf_name_data.push_back(sfp_link_reach_copper_m.get_name_leafdata());
    if (sfp_vendor_name.is_set || is_set(sfp_vendor_name.yfilter)) leaf_name_data.push_back(sfp_vendor_name.get_name_leafdata());
    if (sfp_vendor_oui.is_set || is_set(sfp_vendor_oui.yfilter)) leaf_name_data.push_back(sfp_vendor_oui.get_name_leafdata());
    if (sfp_vendor_part_num.is_set || is_set(sfp_vendor_part_num.yfilter)) leaf_name_data.push_back(sfp_vendor_part_num.get_name_leafdata());
    if (sfp_laser_wavelength.is_set || is_set(sfp_laser_wavelength.yfilter)) leaf_name_data.push_back(sfp_laser_wavelength.get_name_leafdata());
    if (sfp_options.is_set || is_set(sfp_options.yfilter)) leaf_name_data.push_back(sfp_options.get_name_leafdata());
    if (sfp_vendor_serial_num.is_set || is_set(sfp_vendor_serial_num.yfilter)) leaf_name_data.push_back(sfp_vendor_serial_num.get_name_leafdata());
    if (sfp_data_code.is_set || is_set(sfp_data_code.yfilter)) leaf_name_data.push_back(sfp_data_code.get_name_leafdata());
    if (sfp_diag_monitoring.is_set || is_set(sfp_diag_monitoring.yfilter)) leaf_name_data.push_back(sfp_diag_monitoring.get_name_leafdata());
    if (sfp_enhanced_options.is_set || is_set(sfp_enhanced_options.yfilter)) leaf_name_data.push_back(sfp_enhanced_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sfp-tranceiver-type")
    {
        sfp_tranceiver_type = value;
        sfp_tranceiver_type.value_namespace = name_space;
        sfp_tranceiver_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-tranceiver-code")
    {
        sfp_tranceiver_code = value;
        sfp_tranceiver_code.value_namespace = name_space;
        sfp_tranceiver_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-encoding")
    {
        sfp_encoding = value;
        sfp_encoding.value_namespace = name_space;
        sfp_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-bit-rate")
    {
        sfp_bit_rate = value;
        sfp_bit_rate.value_namespace = name_space;
        sfp_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-link-reach-9u-fiber_KM")
    {
        sfp_link_reach_9u_fiber_km = value;
        sfp_link_reach_9u_fiber_km.value_namespace = name_space;
        sfp_link_reach_9u_fiber_km.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-link-reach-9u-fiber_M")
    {
        sfp_link_reach_9u_fiber_m = value;
        sfp_link_reach_9u_fiber_m.value_namespace = name_space;
        sfp_link_reach_9u_fiber_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-link-reach-50u-fiber_M")
    {
        sfp_link_reach_50u_fiber_m = value;
        sfp_link_reach_50u_fiber_m.value_namespace = name_space;
        sfp_link_reach_50u_fiber_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-link-reach-62_5u-fiber_M")
    {
        sfp_link_reach_62_5u_fiber_m = value;
        sfp_link_reach_62_5u_fiber_m.value_namespace = name_space;
        sfp_link_reach_62_5u_fiber_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-link-reach-copper_M")
    {
        sfp_link_reach_copper_m = value;
        sfp_link_reach_copper_m.value_namespace = name_space;
        sfp_link_reach_copper_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-vendor-name")
    {
        sfp_vendor_name = value;
        sfp_vendor_name.value_namespace = name_space;
        sfp_vendor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-vendor-oui")
    {
        sfp_vendor_oui = value;
        sfp_vendor_oui.value_namespace = name_space;
        sfp_vendor_oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-vendor-part-num")
    {
        sfp_vendor_part_num = value;
        sfp_vendor_part_num.value_namespace = name_space;
        sfp_vendor_part_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-laser-wavelength")
    {
        sfp_laser_wavelength = value;
        sfp_laser_wavelength.value_namespace = name_space;
        sfp_laser_wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-options")
    {
        sfp_options[value] = true;
    }
    if(value_path == "sfp-vendor-serial-num")
    {
        sfp_vendor_serial_num = value;
        sfp_vendor_serial_num.value_namespace = name_space;
        sfp_vendor_serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-data-code")
    {
        sfp_data_code = value;
        sfp_data_code.value_namespace = name_space;
        sfp_data_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-monitoring")
    {
        sfp_diag_monitoring[value] = true;
    }
    if(value_path == "sfp-enhanced-options")
    {
        sfp_enhanced_options[value] = true;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sfp-tranceiver-type")
    {
        sfp_tranceiver_type.yfilter = yfilter;
    }
    if(value_path == "sfp-tranceiver-code")
    {
        sfp_tranceiver_code.yfilter = yfilter;
    }
    if(value_path == "sfp-encoding")
    {
        sfp_encoding.yfilter = yfilter;
    }
    if(value_path == "sfp-bit-rate")
    {
        sfp_bit_rate.yfilter = yfilter;
    }
    if(value_path == "sfp-link-reach-9u-fiber_KM")
    {
        sfp_link_reach_9u_fiber_km.yfilter = yfilter;
    }
    if(value_path == "sfp-link-reach-9u-fiber_M")
    {
        sfp_link_reach_9u_fiber_m.yfilter = yfilter;
    }
    if(value_path == "sfp-link-reach-50u-fiber_M")
    {
        sfp_link_reach_50u_fiber_m.yfilter = yfilter;
    }
    if(value_path == "sfp-link-reach-62_5u-fiber_M")
    {
        sfp_link_reach_62_5u_fiber_m.yfilter = yfilter;
    }
    if(value_path == "sfp-link-reach-copper_M")
    {
        sfp_link_reach_copper_m.yfilter = yfilter;
    }
    if(value_path == "sfp-vendor-name")
    {
        sfp_vendor_name.yfilter = yfilter;
    }
    if(value_path == "sfp-vendor-oui")
    {
        sfp_vendor_oui.yfilter = yfilter;
    }
    if(value_path == "sfp-vendor-part-num")
    {
        sfp_vendor_part_num.yfilter = yfilter;
    }
    if(value_path == "sfp-laser-wavelength")
    {
        sfp_laser_wavelength.yfilter = yfilter;
    }
    if(value_path == "sfp-options")
    {
        sfp_options.yfilter = yfilter;
    }
    if(value_path == "sfp-vendor-serial-num")
    {
        sfp_vendor_serial_num.yfilter = yfilter;
    }
    if(value_path == "sfp-data-code")
    {
        sfp_data_code.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-monitoring")
    {
        sfp_diag_monitoring.yfilter = yfilter;
    }
    if(value_path == "sfp-enhanced-options")
    {
        sfp_enhanced_options.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpPortDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-tranceiver-type" || name == "sfp-tranceiver-code" || name == "sfp-encoding" || name == "sfp-bit-rate" || name == "sfp-link-reach-9u-fiber_KM" || name == "sfp-link-reach-9u-fiber_M" || name == "sfp-link-reach-50u-fiber_M" || name == "sfp-link-reach-62_5u-fiber_M" || name == "sfp-link-reach-copper_M" || name == "sfp-vendor-name" || name == "sfp-vendor-oui" || name == "sfp-vendor-part-num" || name == "sfp-laser-wavelength" || name == "sfp-options" || name == "sfp-vendor-serial-num" || name == "sfp-data-code" || name == "sfp-diag-monitoring" || name == "sfp-enhanced-options")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::SfpMsaData()
    :
    sfp_msa_0x00{YType::str, "sfp-msa-0x00"},
    sfp_msa_0x10{YType::str, "sfp-msa-0x10"},
    sfp_msa_0x20{YType::str, "sfp-msa-0x20"},
    sfp_msa_0x30{YType::str, "sfp-msa-0x30"},
    sfp_msa_0x40{YType::str, "sfp-msa-0x40"},
    sfp_msa_0x50{YType::str, "sfp-msa-0x50"}
{

    yang_name = "sfp-msa-data"; yang_parent_name = "sfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::~SfpMsaData()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::has_data() const
{
    if (is_presence_container) return true;
    return sfp_msa_0x00.is_set
	|| sfp_msa_0x10.is_set
	|| sfp_msa_0x20.is_set
	|| sfp_msa_0x30.is_set
	|| sfp_msa_0x40.is_set
	|| sfp_msa_0x50.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sfp_msa_0x00.yfilter)
	|| ydk::is_set(sfp_msa_0x10.yfilter)
	|| ydk::is_set(sfp_msa_0x20.yfilter)
	|| ydk::is_set(sfp_msa_0x30.yfilter)
	|| ydk::is_set(sfp_msa_0x40.yfilter)
	|| ydk::is_set(sfp_msa_0x50.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-msa-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sfp_msa_0x00.is_set || is_set(sfp_msa_0x00.yfilter)) leaf_name_data.push_back(sfp_msa_0x00.get_name_leafdata());
    if (sfp_msa_0x10.is_set || is_set(sfp_msa_0x10.yfilter)) leaf_name_data.push_back(sfp_msa_0x10.get_name_leafdata());
    if (sfp_msa_0x20.is_set || is_set(sfp_msa_0x20.yfilter)) leaf_name_data.push_back(sfp_msa_0x20.get_name_leafdata());
    if (sfp_msa_0x30.is_set || is_set(sfp_msa_0x30.yfilter)) leaf_name_data.push_back(sfp_msa_0x30.get_name_leafdata());
    if (sfp_msa_0x40.is_set || is_set(sfp_msa_0x40.yfilter)) leaf_name_data.push_back(sfp_msa_0x40.get_name_leafdata());
    if (sfp_msa_0x50.is_set || is_set(sfp_msa_0x50.yfilter)) leaf_name_data.push_back(sfp_msa_0x50.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sfp-msa-0x00")
    {
        sfp_msa_0x00 = value;
        sfp_msa_0x00.value_namespace = name_space;
        sfp_msa_0x00.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-msa-0x10")
    {
        sfp_msa_0x10 = value;
        sfp_msa_0x10.value_namespace = name_space;
        sfp_msa_0x10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-msa-0x20")
    {
        sfp_msa_0x20 = value;
        sfp_msa_0x20.value_namespace = name_space;
        sfp_msa_0x20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-msa-0x30")
    {
        sfp_msa_0x30 = value;
        sfp_msa_0x30.value_namespace = name_space;
        sfp_msa_0x30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-msa-0x40")
    {
        sfp_msa_0x40 = value;
        sfp_msa_0x40.value_namespace = name_space;
        sfp_msa_0x40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-msa-0x50")
    {
        sfp_msa_0x50 = value;
        sfp_msa_0x50.value_namespace = name_space;
        sfp_msa_0x50.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sfp-msa-0x00")
    {
        sfp_msa_0x00.yfilter = yfilter;
    }
    if(value_path == "sfp-msa-0x10")
    {
        sfp_msa_0x10.yfilter = yfilter;
    }
    if(value_path == "sfp-msa-0x20")
    {
        sfp_msa_0x20.yfilter = yfilter;
    }
    if(value_path == "sfp-msa-0x30")
    {
        sfp_msa_0x30.yfilter = yfilter;
    }
    if(value_path == "sfp-msa-0x40")
    {
        sfp_msa_0x40.yfilter = yfilter;
    }
    if(value_path == "sfp-msa-0x50")
    {
        sfp_msa_0x50.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpMsaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-msa-0x00" || name == "sfp-msa-0x10" || name == "sfp-msa-0x20" || name == "sfp-msa-0x30" || name == "sfp-msa-0x40" || name == "sfp-msa-0x50")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::SfpDiagAnalogInfo()
    :
    thresholds(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds>())
    , real_time_data(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData>())
{
    thresholds->parent = this;
    real_time_data->parent = this;

    yang_name = "sfp-diag-analog-info"; yang_parent_name = "sfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::~SfpDiagAnalogInfo()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::has_data() const
{
    if (is_presence_container) return true;
    return (thresholds !=  nullptr && thresholds->has_data())
	|| (real_time_data !=  nullptr && real_time_data->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::has_operation() const
{
    return is_set(yfilter)
	|| (thresholds !=  nullptr && thresholds->has_operation())
	|| (real_time_data !=  nullptr && real_time_data->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-diag-analog-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds>();
        }
        return thresholds;
    }

    if(child_yang_name == "Real-Time-Data")
    {
        if(real_time_data == nullptr)
        {
            real_time_data = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData>();
        }
        return real_time_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(thresholds != nullptr)
    {
        children["Thresholds"] = thresholds;
    }

    if(real_time_data != nullptr)
    {
        children["Real-Time-Data"] = real_time_data;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Thresholds" || name == "Real-Time-Data")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Thresholds()
    :
    temperature(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature>())
    , voltage(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage>())
    , bias(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias>())
    , tx_power(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower>())
    , rx_power(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower>())
{
    temperature->parent = this;
    voltage->parent = this;
    bias->parent = this;
    tx_power->parent = this;
    rx_power->parent = this;

    yang_name = "Thresholds"; yang_parent_name = "sfp-diag-analog-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::~Thresholds()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::has_data() const
{
    if (is_presence_container) return true;
    return (temperature !=  nullptr && temperature->has_data())
	|| (voltage !=  nullptr && voltage->has_data())
	|| (bias !=  nullptr && bias->has_data())
	|| (tx_power !=  nullptr && tx_power->has_data())
	|| (rx_power !=  nullptr && rx_power->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::has_operation() const
{
    return is_set(yfilter)
	|| (temperature !=  nullptr && temperature->has_operation())
	|| (voltage !=  nullptr && voltage->has_operation())
	|| (bias !=  nullptr && bias->has_operation())
	|| (tx_power !=  nullptr && tx_power->has_operation())
	|| (rx_power !=  nullptr && rx_power->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Temperature")
    {
        if(temperature == nullptr)
        {
            temperature = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature>();
        }
        return temperature;
    }

    if(child_yang_name == "Voltage")
    {
        if(voltage == nullptr)
        {
            voltage = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage>();
        }
        return voltage;
    }

    if(child_yang_name == "Bias")
    {
        if(bias == nullptr)
        {
            bias = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias>();
        }
        return bias;
    }

    if(child_yang_name == "Tx-Power")
    {
        if(tx_power == nullptr)
        {
            tx_power = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower>();
        }
        return tx_power;
    }

    if(child_yang_name == "Rx-Power")
    {
        if(rx_power == nullptr)
        {
            rx_power = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower>();
        }
        return rx_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(temperature != nullptr)
    {
        children["Temperature"] = temperature;
    }

    if(voltage != nullptr)
    {
        children["Voltage"] = voltage;
    }

    if(bias != nullptr)
    {
        children["Bias"] = bias;
    }

    if(tx_power != nullptr)
    {
        children["Tx-Power"] = tx_power;
    }

    if(rx_power != nullptr)
    {
        children["Rx-Power"] = rx_power;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Temperature" || name == "Voltage" || name == "Bias" || name == "Tx-Power" || name == "Rx-Power")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::Temperature()
    :
    temp_alarm_high{YType::str, "temp-alarm-high"},
    temp_warning_high{YType::str, "temp-warning-high"},
    temp_warning_low{YType::str, "temp-warning-low"},
    temp_alarm_low{YType::str, "temp-alarm-low"}
{

    yang_name = "Temperature"; yang_parent_name = "Thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::~Temperature()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::has_data() const
{
    if (is_presence_container) return true;
    return temp_alarm_high.is_set
	|| temp_warning_high.is_set
	|| temp_warning_low.is_set
	|| temp_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(temp_alarm_high.yfilter)
	|| ydk::is_set(temp_warning_high.yfilter)
	|| ydk::is_set(temp_warning_low.yfilter)
	|| ydk::is_set(temp_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Temperature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (temp_alarm_high.is_set || is_set(temp_alarm_high.yfilter)) leaf_name_data.push_back(temp_alarm_high.get_name_leafdata());
    if (temp_warning_high.is_set || is_set(temp_warning_high.yfilter)) leaf_name_data.push_back(temp_warning_high.get_name_leafdata());
    if (temp_warning_low.is_set || is_set(temp_warning_low.yfilter)) leaf_name_data.push_back(temp_warning_low.get_name_leafdata());
    if (temp_alarm_low.is_set || is_set(temp_alarm_low.yfilter)) leaf_name_data.push_back(temp_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "temp-alarm-high")
    {
        temp_alarm_high = value;
        temp_alarm_high.value_namespace = name_space;
        temp_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-warning-high")
    {
        temp_warning_high = value;
        temp_warning_high.value_namespace = name_space;
        temp_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-warning-low")
    {
        temp_warning_low = value;
        temp_warning_low.value_namespace = name_space;
        temp_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "temp-alarm-low")
    {
        temp_alarm_low = value;
        temp_alarm_low.value_namespace = name_space;
        temp_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "temp-alarm-high")
    {
        temp_alarm_high.yfilter = yfilter;
    }
    if(value_path == "temp-warning-high")
    {
        temp_warning_high.yfilter = yfilter;
    }
    if(value_path == "temp-warning-low")
    {
        temp_warning_low.yfilter = yfilter;
    }
    if(value_path == "temp-alarm-low")
    {
        temp_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Temperature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "temp-alarm-high" || name == "temp-warning-high" || name == "temp-warning-low" || name == "temp-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::Voltage()
    :
    volt_alarm_high{YType::str, "volt-alarm-high"},
    volt_warning_high{YType::str, "volt-warning-high"},
    volt_warning_low{YType::str, "volt-warning-low"},
    volt_alarm_low{YType::str, "volt-alarm-low"}
{

    yang_name = "Voltage"; yang_parent_name = "Thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::~Voltage()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::has_data() const
{
    if (is_presence_container) return true;
    return volt_alarm_high.is_set
	|| volt_warning_high.is_set
	|| volt_warning_low.is_set
	|| volt_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(volt_alarm_high.yfilter)
	|| ydk::is_set(volt_warning_high.yfilter)
	|| ydk::is_set(volt_warning_low.yfilter)
	|| ydk::is_set(volt_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Voltage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (volt_alarm_high.is_set || is_set(volt_alarm_high.yfilter)) leaf_name_data.push_back(volt_alarm_high.get_name_leafdata());
    if (volt_warning_high.is_set || is_set(volt_warning_high.yfilter)) leaf_name_data.push_back(volt_warning_high.get_name_leafdata());
    if (volt_warning_low.is_set || is_set(volt_warning_low.yfilter)) leaf_name_data.push_back(volt_warning_low.get_name_leafdata());
    if (volt_alarm_low.is_set || is_set(volt_alarm_low.yfilter)) leaf_name_data.push_back(volt_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "volt-alarm-high")
    {
        volt_alarm_high = value;
        volt_alarm_high.value_namespace = name_space;
        volt_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt-warning-high")
    {
        volt_warning_high = value;
        volt_warning_high.value_namespace = name_space;
        volt_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt-warning-low")
    {
        volt_warning_low = value;
        volt_warning_low.value_namespace = name_space;
        volt_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt-alarm-low")
    {
        volt_alarm_low = value;
        volt_alarm_low.value_namespace = name_space;
        volt_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "volt-alarm-high")
    {
        volt_alarm_high.yfilter = yfilter;
    }
    if(value_path == "volt-warning-high")
    {
        volt_warning_high.yfilter = yfilter;
    }
    if(value_path == "volt-warning-low")
    {
        volt_warning_low.yfilter = yfilter;
    }
    if(value_path == "volt-alarm-low")
    {
        volt_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Voltage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "volt-alarm-high" || name == "volt-warning-high" || name == "volt-warning-low" || name == "volt-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::Bias()
    :
    bias_alarm_high{YType::str, "bias-alarm-high"},
    bias_warning_high{YType::str, "bias-warning-high"},
    bias_warning_low{YType::str, "bias-warning-low"},
    bias_alarm_low{YType::str, "bias-alarm-low"}
{

    yang_name = "Bias"; yang_parent_name = "Thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::~Bias()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::has_data() const
{
    if (is_presence_container) return true;
    return bias_alarm_high.is_set
	|| bias_warning_high.is_set
	|| bias_warning_low.is_set
	|| bias_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bias_alarm_high.yfilter)
	|| ydk::is_set(bias_warning_high.yfilter)
	|| ydk::is_set(bias_warning_low.yfilter)
	|| ydk::is_set(bias_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bias_alarm_high.is_set || is_set(bias_alarm_high.yfilter)) leaf_name_data.push_back(bias_alarm_high.get_name_leafdata());
    if (bias_warning_high.is_set || is_set(bias_warning_high.yfilter)) leaf_name_data.push_back(bias_warning_high.get_name_leafdata());
    if (bias_warning_low.is_set || is_set(bias_warning_low.yfilter)) leaf_name_data.push_back(bias_warning_low.get_name_leafdata());
    if (bias_alarm_low.is_set || is_set(bias_alarm_low.yfilter)) leaf_name_data.push_back(bias_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bias-alarm-high")
    {
        bias_alarm_high = value;
        bias_alarm_high.value_namespace = name_space;
        bias_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bias-warning-high")
    {
        bias_warning_high = value;
        bias_warning_high.value_namespace = name_space;
        bias_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bias-warning-low")
    {
        bias_warning_low = value;
        bias_warning_low.value_namespace = name_space;
        bias_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bias-alarm-low")
    {
        bias_alarm_low = value;
        bias_alarm_low.value_namespace = name_space;
        bias_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bias-alarm-high")
    {
        bias_alarm_high.yfilter = yfilter;
    }
    if(value_path == "bias-warning-high")
    {
        bias_warning_high.yfilter = yfilter;
    }
    if(value_path == "bias-warning-low")
    {
        bias_warning_low.yfilter = yfilter;
    }
    if(value_path == "bias-alarm-low")
    {
        bias_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::Bias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bias-alarm-high" || name == "bias-warning-high" || name == "bias-warning-low" || name == "bias-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::TxPower()
    :
    tx_power_alarm_high{YType::str, "tx-power-alarm-high"},
    tx_power_warning_high{YType::str, "tx-power-warning-high"},
    tx_power_warning_low{YType::str, "tx-power-warning-low"},
    tx_power_alarm_low{YType::str, "tx-power-alarm-low"}
{

    yang_name = "Tx-Power"; yang_parent_name = "Thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::~TxPower()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::has_data() const
{
    if (is_presence_container) return true;
    return tx_power_alarm_high.is_set
	|| tx_power_warning_high.is_set
	|| tx_power_warning_low.is_set
	|| tx_power_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_power_alarm_high.yfilter)
	|| ydk::is_set(tx_power_warning_high.yfilter)
	|| ydk::is_set(tx_power_warning_low.yfilter)
	|| ydk::is_set(tx_power_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tx-Power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_power_alarm_high.is_set || is_set(tx_power_alarm_high.yfilter)) leaf_name_data.push_back(tx_power_alarm_high.get_name_leafdata());
    if (tx_power_warning_high.is_set || is_set(tx_power_warning_high.yfilter)) leaf_name_data.push_back(tx_power_warning_high.get_name_leafdata());
    if (tx_power_warning_low.is_set || is_set(tx_power_warning_low.yfilter)) leaf_name_data.push_back(tx_power_warning_low.get_name_leafdata());
    if (tx_power_alarm_low.is_set || is_set(tx_power_alarm_low.yfilter)) leaf_name_data.push_back(tx_power_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-power-alarm-high")
    {
        tx_power_alarm_high = value;
        tx_power_alarm_high.value_namespace = name_space;
        tx_power_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-power-warning-high")
    {
        tx_power_warning_high = value;
        tx_power_warning_high.value_namespace = name_space;
        tx_power_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-power-warning-low")
    {
        tx_power_warning_low = value;
        tx_power_warning_low.value_namespace = name_space;
        tx_power_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-power-alarm-low")
    {
        tx_power_alarm_low = value;
        tx_power_alarm_low.value_namespace = name_space;
        tx_power_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-power-alarm-high")
    {
        tx_power_alarm_high.yfilter = yfilter;
    }
    if(value_path == "tx-power-warning-high")
    {
        tx_power_warning_high.yfilter = yfilter;
    }
    if(value_path == "tx-power-warning-low")
    {
        tx_power_warning_low.yfilter = yfilter;
    }
    if(value_path == "tx-power-alarm-low")
    {
        tx_power_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::TxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-power-alarm-high" || name == "tx-power-warning-high" || name == "tx-power-warning-low" || name == "tx-power-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::RxPower()
    :
    rx_power_alarm_high{YType::str, "rx-power-alarm-high"},
    rx_power_warning_high{YType::str, "rx-power-warning-high"},
    rx_power_warning_low{YType::str, "rx-power-warning-low"},
    rx_power_alarm_low{YType::str, "rx-power-alarm-low"}
{

    yang_name = "Rx-Power"; yang_parent_name = "Thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::~RxPower()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::has_data() const
{
    if (is_presence_container) return true;
    return rx_power_alarm_high.is_set
	|| rx_power_warning_high.is_set
	|| rx_power_warning_low.is_set
	|| rx_power_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_power_alarm_high.yfilter)
	|| ydk::is_set(rx_power_warning_high.yfilter)
	|| ydk::is_set(rx_power_warning_low.yfilter)
	|| ydk::is_set(rx_power_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rx-Power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_power_alarm_high.is_set || is_set(rx_power_alarm_high.yfilter)) leaf_name_data.push_back(rx_power_alarm_high.get_name_leafdata());
    if (rx_power_warning_high.is_set || is_set(rx_power_warning_high.yfilter)) leaf_name_data.push_back(rx_power_warning_high.get_name_leafdata());
    if (rx_power_warning_low.is_set || is_set(rx_power_warning_low.yfilter)) leaf_name_data.push_back(rx_power_warning_low.get_name_leafdata());
    if (rx_power_alarm_low.is_set || is_set(rx_power_alarm_low.yfilter)) leaf_name_data.push_back(rx_power_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-power-alarm-high")
    {
        rx_power_alarm_high = value;
        rx_power_alarm_high.value_namespace = name_space;
        rx_power_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-power-warning-high")
    {
        rx_power_warning_high = value;
        rx_power_warning_high.value_namespace = name_space;
        rx_power_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-power-warning-low")
    {
        rx_power_warning_low = value;
        rx_power_warning_low.value_namespace = name_space;
        rx_power_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-power-alarm-low")
    {
        rx_power_alarm_low = value;
        rx_power_alarm_low.value_namespace = name_space;
        rx_power_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-power-alarm-high")
    {
        rx_power_alarm_high.yfilter = yfilter;
    }
    if(value_path == "rx-power-warning-high")
    {
        rx_power_warning_high.yfilter = yfilter;
    }
    if(value_path == "rx-power-warning-low")
    {
        rx_power_warning_low.yfilter = yfilter;
    }
    if(value_path == "rx-power-alarm-low")
    {
        rx_power_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::Thresholds::RxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-power-alarm-high" || name == "rx-power-warning-high" || name == "rx-power-warning-low" || name == "rx-power-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::RealTimeData()
    :
    current(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current>())
{
    current->parent = this;

    yang_name = "Real-Time-Data"; yang_parent_name = "sfp-diag-analog-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::~RealTimeData()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::has_data() const
{
    if (is_presence_container) return true;
    return (current !=  nullptr && current->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::has_operation() const
{
    return is_set(yfilter)
	|| (current !=  nullptr && current->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Real-Time-Data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Current")
    {
        if(current == nullptr)
        {
            current = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current>();
        }
        return current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current != nullptr)
    {
        children["Current"] = current;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Current")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::Current()
    :
    cur_temperature{YType::str, "cur-temperature"},
    cur_voltage{YType::str, "cur-voltage"},
    cur_bias{YType::str, "cur-bias"},
    cur_tx_power{YType::str, "cur-tx-power"},
    cur_rx_power{YType::str, "cur-rx-power"},
    optional_status_control{YType::bits, "optional-status-control"}
{

    yang_name = "Current"; yang_parent_name = "Real-Time-Data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::~Current()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::has_data() const
{
    if (is_presence_container) return true;
    return cur_temperature.is_set
	|| cur_voltage.is_set
	|| cur_bias.is_set
	|| cur_tx_power.is_set
	|| cur_rx_power.is_set
	|| optional_status_control.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cur_temperature.yfilter)
	|| ydk::is_set(cur_voltage.yfilter)
	|| ydk::is_set(cur_bias.yfilter)
	|| ydk::is_set(cur_tx_power.yfilter)
	|| ydk::is_set(cur_rx_power.yfilter)
	|| ydk::is_set(optional_status_control.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cur_temperature.is_set || is_set(cur_temperature.yfilter)) leaf_name_data.push_back(cur_temperature.get_name_leafdata());
    if (cur_voltage.is_set || is_set(cur_voltage.yfilter)) leaf_name_data.push_back(cur_voltage.get_name_leafdata());
    if (cur_bias.is_set || is_set(cur_bias.yfilter)) leaf_name_data.push_back(cur_bias.get_name_leafdata());
    if (cur_tx_power.is_set || is_set(cur_tx_power.yfilter)) leaf_name_data.push_back(cur_tx_power.get_name_leafdata());
    if (cur_rx_power.is_set || is_set(cur_rx_power.yfilter)) leaf_name_data.push_back(cur_rx_power.get_name_leafdata());
    if (optional_status_control.is_set || is_set(optional_status_control.yfilter)) leaf_name_data.push_back(optional_status_control.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cur-temperature")
    {
        cur_temperature = value;
        cur_temperature.value_namespace = name_space;
        cur_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-voltage")
    {
        cur_voltage = value;
        cur_voltage.value_namespace = name_space;
        cur_voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-bias")
    {
        cur_bias = value;
        cur_bias.value_namespace = name_space;
        cur_bias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-tx-power")
    {
        cur_tx_power = value;
        cur_tx_power.value_namespace = name_space;
        cur_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cur-rx-power")
    {
        cur_rx_power = value;
        cur_rx_power.value_namespace = name_space;
        cur_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optional-status-control")
    {
        optional_status_control[value] = true;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cur-temperature")
    {
        cur_temperature.yfilter = yfilter;
    }
    if(value_path == "cur-voltage")
    {
        cur_voltage.yfilter = yfilter;
    }
    if(value_path == "cur-bias")
    {
        cur_bias.yfilter = yfilter;
    }
    if(value_path == "cur-tx-power")
    {
        cur_tx_power.yfilter = yfilter;
    }
    if(value_path == "cur-rx-power")
    {
        cur_rx_power.yfilter = yfilter;
    }
    if(value_path == "optional-status-control")
    {
        optional_status_control.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagAnalogInfo::RealTimeData::Current::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cur-temperature" || name == "cur-voltage" || name == "cur-bias" || name == "cur-tx-power" || name == "cur-rx-power" || name == "optional-status-control")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::SfpDiagData1()
    :
    optical_sfp_diag(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag>())
{
    optical_sfp_diag->parent = this;

    yang_name = "sfp-diag-data1"; yang_parent_name = "sfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::~SfpDiagData1()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::has_data() const
{
    if (is_presence_container) return true;
    return (optical_sfp_diag !=  nullptr && optical_sfp_diag->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::has_operation() const
{
    return is_set(yfilter)
	|| (optical_sfp_diag !=  nullptr && optical_sfp_diag->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-diag-data1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-sfp-diag")
    {
        if(optical_sfp_diag == nullptr)
        {
            optical_sfp_diag = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag>();
        }
        return optical_sfp_diag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optical_sfp_diag != nullptr)
    {
        children["optical-sfp-diag"] = optical_sfp_diag;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-sfp-diag")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::OpticalSfpDiag()
    :
    sfp_diag_0x00{YType::str, "sfp-diag-0x00"},
    sfp_diag_0x10{YType::str, "sfp-diag-0x10"},
    sfp_diag_0x20{YType::str, "sfp-diag-0x20"},
    sfp_diag_0x30{YType::str, "sfp-diag-0x30"},
    sfp_diag_0x40{YType::str, "sfp-diag-0x40"},
    sfp_diag_0x50{YType::str, "sfp-diag-0x50"},
    sfp_diag_0x60{YType::str, "sfp-diag-0x60"},
    sfp_diag_0x70{YType::str, "sfp-diag-0x70"}
{

    yang_name = "optical-sfp-diag"; yang_parent_name = "sfp-diag-data1"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::~OpticalSfpDiag()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::has_data() const
{
    if (is_presence_container) return true;
    return sfp_diag_0x00.is_set
	|| sfp_diag_0x10.is_set
	|| sfp_diag_0x20.is_set
	|| sfp_diag_0x30.is_set
	|| sfp_diag_0x40.is_set
	|| sfp_diag_0x50.is_set
	|| sfp_diag_0x60.is_set
	|| sfp_diag_0x70.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sfp_diag_0x00.yfilter)
	|| ydk::is_set(sfp_diag_0x10.yfilter)
	|| ydk::is_set(sfp_diag_0x20.yfilter)
	|| ydk::is_set(sfp_diag_0x30.yfilter)
	|| ydk::is_set(sfp_diag_0x40.yfilter)
	|| ydk::is_set(sfp_diag_0x50.yfilter)
	|| ydk::is_set(sfp_diag_0x60.yfilter)
	|| ydk::is_set(sfp_diag_0x70.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-sfp-diag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sfp_diag_0x00.is_set || is_set(sfp_diag_0x00.yfilter)) leaf_name_data.push_back(sfp_diag_0x00.get_name_leafdata());
    if (sfp_diag_0x10.is_set || is_set(sfp_diag_0x10.yfilter)) leaf_name_data.push_back(sfp_diag_0x10.get_name_leafdata());
    if (sfp_diag_0x20.is_set || is_set(sfp_diag_0x20.yfilter)) leaf_name_data.push_back(sfp_diag_0x20.get_name_leafdata());
    if (sfp_diag_0x30.is_set || is_set(sfp_diag_0x30.yfilter)) leaf_name_data.push_back(sfp_diag_0x30.get_name_leafdata());
    if (sfp_diag_0x40.is_set || is_set(sfp_diag_0x40.yfilter)) leaf_name_data.push_back(sfp_diag_0x40.get_name_leafdata());
    if (sfp_diag_0x50.is_set || is_set(sfp_diag_0x50.yfilter)) leaf_name_data.push_back(sfp_diag_0x50.get_name_leafdata());
    if (sfp_diag_0x60.is_set || is_set(sfp_diag_0x60.yfilter)) leaf_name_data.push_back(sfp_diag_0x60.get_name_leafdata());
    if (sfp_diag_0x70.is_set || is_set(sfp_diag_0x70.yfilter)) leaf_name_data.push_back(sfp_diag_0x70.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sfp-diag-0x00")
    {
        sfp_diag_0x00 = value;
        sfp_diag_0x00.value_namespace = name_space;
        sfp_diag_0x00.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x10")
    {
        sfp_diag_0x10 = value;
        sfp_diag_0x10.value_namespace = name_space;
        sfp_diag_0x10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x20")
    {
        sfp_diag_0x20 = value;
        sfp_diag_0x20.value_namespace = name_space;
        sfp_diag_0x20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x30")
    {
        sfp_diag_0x30 = value;
        sfp_diag_0x30.value_namespace = name_space;
        sfp_diag_0x30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x40")
    {
        sfp_diag_0x40 = value;
        sfp_diag_0x40.value_namespace = name_space;
        sfp_diag_0x40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x50")
    {
        sfp_diag_0x50 = value;
        sfp_diag_0x50.value_namespace = name_space;
        sfp_diag_0x50.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x60")
    {
        sfp_diag_0x60 = value;
        sfp_diag_0x60.value_namespace = name_space;
        sfp_diag_0x60.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x70")
    {
        sfp_diag_0x70 = value;
        sfp_diag_0x70.value_namespace = name_space;
        sfp_diag_0x70.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sfp-diag-0x00")
    {
        sfp_diag_0x00.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x10")
    {
        sfp_diag_0x10.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x20")
    {
        sfp_diag_0x20.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x30")
    {
        sfp_diag_0x30.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x40")
    {
        sfp_diag_0x40.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x50")
    {
        sfp_diag_0x50.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x60")
    {
        sfp_diag_0x60.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x70")
    {
        sfp_diag_0x70.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData1::OpticalSfpDiag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-diag-0x00" || name == "sfp-diag-0x10" || name == "sfp-diag-0x20" || name == "sfp-diag-0x30" || name == "sfp-diag-0x40" || name == "sfp-diag-0x50" || name == "sfp-diag-0x60" || name == "sfp-diag-0x70")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::SfpDiagUserInfo()
    :
    cisco_data(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData>())
{
    cisco_data->parent = this;

    yang_name = "sfp-diag-user-info"; yang_parent_name = "sfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::~SfpDiagUserInfo()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::has_data() const
{
    if (is_presence_container) return true;
    return (cisco_data !=  nullptr && cisco_data->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_data !=  nullptr && cisco_data->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-diag-user-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-data")
    {
        if(cisco_data == nullptr)
        {
            cisco_data = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData>();
        }
        return cisco_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cisco_data != nullptr)
    {
        children["cisco-data"] = cisco_data;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-data")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::CiscoData()
    :
    cisco_clei_code{YType::str, "cisco-clei-code"},
    cisco_part_number{YType::str, "cisco-part-number"},
    cisco_min_temperature{YType::int8, "cisco-min-temperature"},
    cisco_max_temperature{YType::int8, "cisco-max-temperature"},
    cisco_product_id{YType::str, "cisco-product-id"}
{

    yang_name = "cisco-data"; yang_parent_name = "sfp-diag-user-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::~CiscoData()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::has_data() const
{
    if (is_presence_container) return true;
    return cisco_clei_code.is_set
	|| cisco_part_number.is_set
	|| cisco_min_temperature.is_set
	|| cisco_max_temperature.is_set
	|| cisco_product_id.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_clei_code.yfilter)
	|| ydk::is_set(cisco_part_number.yfilter)
	|| ydk::is_set(cisco_min_temperature.yfilter)
	|| ydk::is_set(cisco_max_temperature.yfilter)
	|| ydk::is_set(cisco_product_id.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_clei_code.is_set || is_set(cisco_clei_code.yfilter)) leaf_name_data.push_back(cisco_clei_code.get_name_leafdata());
    if (cisco_part_number.is_set || is_set(cisco_part_number.yfilter)) leaf_name_data.push_back(cisco_part_number.get_name_leafdata());
    if (cisco_min_temperature.is_set || is_set(cisco_min_temperature.yfilter)) leaf_name_data.push_back(cisco_min_temperature.get_name_leafdata());
    if (cisco_max_temperature.is_set || is_set(cisco_max_temperature.yfilter)) leaf_name_data.push_back(cisco_max_temperature.get_name_leafdata());
    if (cisco_product_id.is_set || is_set(cisco_product_id.yfilter)) leaf_name_data.push_back(cisco_product_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-clei-code")
    {
        cisco_clei_code = value;
        cisco_clei_code.value_namespace = name_space;
        cisco_clei_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-part-number")
    {
        cisco_part_number = value;
        cisco_part_number.value_namespace = name_space;
        cisco_part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-min-temperature")
    {
        cisco_min_temperature = value;
        cisco_min_temperature.value_namespace = name_space;
        cisco_min_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-max-temperature")
    {
        cisco_max_temperature = value;
        cisco_max_temperature.value_namespace = name_space;
        cisco_max_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-product-id")
    {
        cisco_product_id = value;
        cisco_product_id.value_namespace = name_space;
        cisco_product_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-clei-code")
    {
        cisco_clei_code.yfilter = yfilter;
    }
    if(value_path == "cisco-part-number")
    {
        cisco_part_number.yfilter = yfilter;
    }
    if(value_path == "cisco-min-temperature")
    {
        cisco_min_temperature.yfilter = yfilter;
    }
    if(value_path == "cisco-max-temperature")
    {
        cisco_max_temperature.yfilter = yfilter;
    }
    if(value_path == "cisco-product-id")
    {
        cisco_product_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagUserInfo::CiscoData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-clei-code" || name == "cisco-part-number" || name == "cisco-min-temperature" || name == "cisco-max-temperature" || name == "cisco-product-id")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::SfpDiagData2()
    :
    optical_sfp_diag(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag>())
{
    optical_sfp_diag->parent = this;

    yang_name = "sfp-diag-data2"; yang_parent_name = "sfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::~SfpDiagData2()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::has_data() const
{
    if (is_presence_container) return true;
    return (optical_sfp_diag !=  nullptr && optical_sfp_diag->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::has_operation() const
{
    return is_set(yfilter)
	|| (optical_sfp_diag !=  nullptr && optical_sfp_diag->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-diag-data2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optical-sfp-diag")
    {
        if(optical_sfp_diag == nullptr)
        {
            optical_sfp_diag = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag>();
        }
        return optical_sfp_diag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optical_sfp_diag != nullptr)
    {
        children["optical-sfp-diag"] = optical_sfp_diag;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optical-sfp-diag")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::OpticalSfpDiag()
    :
    sfp_diag_0x80{YType::str, "sfp-diag-0x80"},
    sfp_diag_0x90{YType::str, "sfp-diag-0x90"},
    sfp_diag_0xa0{YType::str, "sfp-diag-0xA0"},
    sfp_diag_0xb0{YType::str, "sfp-diag-0xB0"},
    sfp_diag_0xc0{YType::str, "sfp-diag-0xC0"},
    sfp_diag_0xd0{YType::str, "sfp-diag-0xD0"},
    sfp_diag_0xe0{YType::str, "sfp-diag-0xE0"},
    sfp_diag_0xf0{YType::str, "sfp-diag-0xF0"}
{

    yang_name = "optical-sfp-diag"; yang_parent_name = "sfp-diag-data2"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::~OpticalSfpDiag()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::has_data() const
{
    if (is_presence_container) return true;
    return sfp_diag_0x80.is_set
	|| sfp_diag_0x90.is_set
	|| sfp_diag_0xa0.is_set
	|| sfp_diag_0xb0.is_set
	|| sfp_diag_0xc0.is_set
	|| sfp_diag_0xd0.is_set
	|| sfp_diag_0xe0.is_set
	|| sfp_diag_0xf0.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sfp_diag_0x80.yfilter)
	|| ydk::is_set(sfp_diag_0x90.yfilter)
	|| ydk::is_set(sfp_diag_0xa0.yfilter)
	|| ydk::is_set(sfp_diag_0xb0.yfilter)
	|| ydk::is_set(sfp_diag_0xc0.yfilter)
	|| ydk::is_set(sfp_diag_0xd0.yfilter)
	|| ydk::is_set(sfp_diag_0xe0.yfilter)
	|| ydk::is_set(sfp_diag_0xf0.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optical-sfp-diag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sfp_diag_0x80.is_set || is_set(sfp_diag_0x80.yfilter)) leaf_name_data.push_back(sfp_diag_0x80.get_name_leafdata());
    if (sfp_diag_0x90.is_set || is_set(sfp_diag_0x90.yfilter)) leaf_name_data.push_back(sfp_diag_0x90.get_name_leafdata());
    if (sfp_diag_0xa0.is_set || is_set(sfp_diag_0xa0.yfilter)) leaf_name_data.push_back(sfp_diag_0xa0.get_name_leafdata());
    if (sfp_diag_0xb0.is_set || is_set(sfp_diag_0xb0.yfilter)) leaf_name_data.push_back(sfp_diag_0xb0.get_name_leafdata());
    if (sfp_diag_0xc0.is_set || is_set(sfp_diag_0xc0.yfilter)) leaf_name_data.push_back(sfp_diag_0xc0.get_name_leafdata());
    if (sfp_diag_0xd0.is_set || is_set(sfp_diag_0xd0.yfilter)) leaf_name_data.push_back(sfp_diag_0xd0.get_name_leafdata());
    if (sfp_diag_0xe0.is_set || is_set(sfp_diag_0xe0.yfilter)) leaf_name_data.push_back(sfp_diag_0xe0.get_name_leafdata());
    if (sfp_diag_0xf0.is_set || is_set(sfp_diag_0xf0.yfilter)) leaf_name_data.push_back(sfp_diag_0xf0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sfp-diag-0x80")
    {
        sfp_diag_0x80 = value;
        sfp_diag_0x80.value_namespace = name_space;
        sfp_diag_0x80.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0x90")
    {
        sfp_diag_0x90 = value;
        sfp_diag_0x90.value_namespace = name_space;
        sfp_diag_0x90.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0xA0")
    {
        sfp_diag_0xa0 = value;
        sfp_diag_0xa0.value_namespace = name_space;
        sfp_diag_0xa0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0xB0")
    {
        sfp_diag_0xb0 = value;
        sfp_diag_0xb0.value_namespace = name_space;
        sfp_diag_0xb0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0xC0")
    {
        sfp_diag_0xc0 = value;
        sfp_diag_0xc0.value_namespace = name_space;
        sfp_diag_0xc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0xD0")
    {
        sfp_diag_0xd0 = value;
        sfp_diag_0xd0.value_namespace = name_space;
        sfp_diag_0xd0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0xE0")
    {
        sfp_diag_0xe0 = value;
        sfp_diag_0xe0.value_namespace = name_space;
        sfp_diag_0xe0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-diag-0xF0")
    {
        sfp_diag_0xf0 = value;
        sfp_diag_0xf0.value_namespace = name_space;
        sfp_diag_0xf0.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sfp-diag-0x80")
    {
        sfp_diag_0x80.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0x90")
    {
        sfp_diag_0x90.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0xA0")
    {
        sfp_diag_0xa0.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0xB0")
    {
        sfp_diag_0xb0.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0xC0")
    {
        sfp_diag_0xc0.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0xD0")
    {
        sfp_diag_0xd0.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0xE0")
    {
        sfp_diag_0xe0.yfilter = yfilter;
    }
    if(value_path == "sfp-diag-0xF0")
    {
        sfp_diag_0xf0.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::SfpDetails::SfpDiagData2::OpticalSfpDiag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp-diag-0x80" || name == "sfp-diag-0x90" || name == "sfp-diag-0xA0" || name == "sfp-diag-0xB0" || name == "sfp-diag-0xC0" || name == "sfp-diag-0xD0" || name == "sfp-diag-0xE0" || name == "sfp-diag-0xF0")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpDetails()
    :
    qsfp_page_a0_data(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data>())
    , qsfp_page_a0_0_data(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data>())
    , qsfp_page_a0_3_data(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data>())
{
    qsfp_page_a0_data->parent = this;
    qsfp_page_a0_0_data->parent = this;
    qsfp_page_a0_3_data->parent = this;

    yang_name = "qsfp-details"; yang_parent_name = "sfp-port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::~QsfpDetails()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::has_data() const
{
    if (is_presence_container) return true;
    return (qsfp_page_a0_data !=  nullptr && qsfp_page_a0_data->has_data())
	|| (qsfp_page_a0_0_data !=  nullptr && qsfp_page_a0_0_data->has_data())
	|| (qsfp_page_a0_3_data !=  nullptr && qsfp_page_a0_3_data->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::has_operation() const
{
    return is_set(yfilter)
	|| (qsfp_page_a0_data !=  nullptr && qsfp_page_a0_data->has_operation())
	|| (qsfp_page_a0_0_data !=  nullptr && qsfp_page_a0_0_data->has_operation())
	|| (qsfp_page_a0_3_data !=  nullptr && qsfp_page_a0_3_data->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsfp_page_A0_data")
    {
        if(qsfp_page_a0_data == nullptr)
        {
            qsfp_page_a0_data = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data>();
        }
        return qsfp_page_a0_data;
    }

    if(child_yang_name == "qsfp_page_A0_0_data")
    {
        if(qsfp_page_a0_0_data == nullptr)
        {
            qsfp_page_a0_0_data = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data>();
        }
        return qsfp_page_a0_0_data;
    }

    if(child_yang_name == "qsfp_page_A0_3_data")
    {
        if(qsfp_page_a0_3_data == nullptr)
        {
            qsfp_page_a0_3_data = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data>();
        }
        return qsfp_page_a0_3_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qsfp_page_a0_data != nullptr)
    {
        children["qsfp_page_A0_data"] = qsfp_page_a0_data;
    }

    if(qsfp_page_a0_0_data != nullptr)
    {
        children["qsfp_page_A0_0_data"] = qsfp_page_a0_0_data;
    }

    if(qsfp_page_a0_3_data != nullptr)
    {
        children["qsfp_page_A0_3_data"] = qsfp_page_a0_3_data;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp_page_A0_data" || name == "qsfp_page_A0_0_data" || name == "qsfp_page_A0_3_data")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpPageA0Data()
    :
    qsfp_real_time_data(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData>())
    , qsfp_real_time_status_flags(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags>())
{
    qsfp_real_time_data->parent = this;
    qsfp_real_time_status_flags->parent = this;

    yang_name = "qsfp_page_A0_data"; yang_parent_name = "qsfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::~QsfpPageA0Data()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::has_data() const
{
    if (is_presence_container) return true;
    return (qsfp_real_time_data !=  nullptr && qsfp_real_time_data->has_data())
	|| (qsfp_real_time_status_flags !=  nullptr && qsfp_real_time_status_flags->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::has_operation() const
{
    return is_set(yfilter)
	|| (qsfp_real_time_data !=  nullptr && qsfp_real_time_data->has_operation())
	|| (qsfp_real_time_status_flags !=  nullptr && qsfp_real_time_status_flags->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp_page_A0_data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsfp-real-time-data")
    {
        if(qsfp_real_time_data == nullptr)
        {
            qsfp_real_time_data = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData>();
        }
        return qsfp_real_time_data;
    }

    if(child_yang_name == "qsfp-real-time-status-flags")
    {
        if(qsfp_real_time_status_flags == nullptr)
        {
            qsfp_real_time_status_flags = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags>();
        }
        return qsfp_real_time_status_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qsfp_real_time_data != nullptr)
    {
        children["qsfp-real-time-data"] = qsfp_real_time_data;
    }

    if(qsfp_real_time_status_flags != nullptr)
    {
        children["qsfp-real-time-status-flags"] = qsfp_real_time_status_flags;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-real-time-data" || name == "qsfp-real-time-status-flags")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRealTimeData()
    :
    qsfp_temp_volt(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt>())
    , qsfp_tx_channel_bias(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias>())
    , qsfp_tx_output_power(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower>())
    , qsfp_rx_input_power(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower>())
{
    qsfp_temp_volt->parent = this;
    qsfp_tx_channel_bias->parent = this;
    qsfp_tx_output_power->parent = this;
    qsfp_rx_input_power->parent = this;

    yang_name = "qsfp-real-time-data"; yang_parent_name = "qsfp_page_A0_data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::~QsfpRealTimeData()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::has_data() const
{
    if (is_presence_container) return true;
    return (qsfp_temp_volt !=  nullptr && qsfp_temp_volt->has_data())
	|| (qsfp_tx_channel_bias !=  nullptr && qsfp_tx_channel_bias->has_data())
	|| (qsfp_tx_output_power !=  nullptr && qsfp_tx_output_power->has_data())
	|| (qsfp_rx_input_power !=  nullptr && qsfp_rx_input_power->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::has_operation() const
{
    return is_set(yfilter)
	|| (qsfp_temp_volt !=  nullptr && qsfp_temp_volt->has_operation())
	|| (qsfp_tx_channel_bias !=  nullptr && qsfp_tx_channel_bias->has_operation())
	|| (qsfp_tx_output_power !=  nullptr && qsfp_tx_output_power->has_operation())
	|| (qsfp_rx_input_power !=  nullptr && qsfp_rx_input_power->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-real-time-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsfp-temp-volt")
    {
        if(qsfp_temp_volt == nullptr)
        {
            qsfp_temp_volt = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt>();
        }
        return qsfp_temp_volt;
    }

    if(child_yang_name == "qsfp-tx-channel-bias")
    {
        if(qsfp_tx_channel_bias == nullptr)
        {
            qsfp_tx_channel_bias = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias>();
        }
        return qsfp_tx_channel_bias;
    }

    if(child_yang_name == "qsfp-tx-output-power")
    {
        if(qsfp_tx_output_power == nullptr)
        {
            qsfp_tx_output_power = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower>();
        }
        return qsfp_tx_output_power;
    }

    if(child_yang_name == "qsfp-rx-input-power")
    {
        if(qsfp_rx_input_power == nullptr)
        {
            qsfp_rx_input_power = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower>();
        }
        return qsfp_rx_input_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qsfp_temp_volt != nullptr)
    {
        children["qsfp-temp-volt"] = qsfp_temp_volt;
    }

    if(qsfp_tx_channel_bias != nullptr)
    {
        children["qsfp-tx-channel-bias"] = qsfp_tx_channel_bias;
    }

    if(qsfp_tx_output_power != nullptr)
    {
        children["qsfp-tx-output-power"] = qsfp_tx_output_power;
    }

    if(qsfp_rx_input_power != nullptr)
    {
        children["qsfp-rx-input-power"] = qsfp_rx_input_power;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-temp-volt" || name == "qsfp-tx-channel-bias" || name == "qsfp-tx-output-power" || name == "qsfp-rx-input-power")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::QsfpTempVolt()
    :
    module_monitor_temperature{YType::str, "module-monitor-temperature"},
    module_monitor_voltage{YType::str, "module-monitor-voltage"}
{

    yang_name = "qsfp-temp-volt"; yang_parent_name = "qsfp-real-time-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::~QsfpTempVolt()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::has_data() const
{
    if (is_presence_container) return true;
    return module_monitor_temperature.is_set
	|| module_monitor_voltage.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_monitor_temperature.yfilter)
	|| ydk::is_set(module_monitor_voltage.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-temp-volt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_monitor_temperature.is_set || is_set(module_monitor_temperature.yfilter)) leaf_name_data.push_back(module_monitor_temperature.get_name_leafdata());
    if (module_monitor_voltage.is_set || is_set(module_monitor_voltage.yfilter)) leaf_name_data.push_back(module_monitor_voltage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-monitor-temperature")
    {
        module_monitor_temperature = value;
        module_monitor_temperature.value_namespace = name_space;
        module_monitor_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module-monitor-voltage")
    {
        module_monitor_voltage = value;
        module_monitor_voltage.value_namespace = name_space;
        module_monitor_voltage.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-monitor-temperature")
    {
        module_monitor_temperature.yfilter = yfilter;
    }
    if(value_path == "module-monitor-voltage")
    {
        module_monitor_voltage.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTempVolt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module-monitor-temperature" || name == "module-monitor-voltage")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::QsfpTxChannelBias()
    :
    channel_monitor_tx1_bias{YType::str, "channel-monitor-Tx1-Bias"},
    channel_monitor_tx2_bias{YType::str, "channel-monitor-Tx2-Bias"},
    channel_monitor_tx3_bias{YType::str, "channel-monitor-Tx3-Bias"},
    channel_monitor_tx4_bias{YType::str, "channel-monitor-Tx4-Bias"}
{

    yang_name = "qsfp-tx-channel-bias"; yang_parent_name = "qsfp-real-time-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::~QsfpTxChannelBias()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::has_data() const
{
    if (is_presence_container) return true;
    return channel_monitor_tx1_bias.is_set
	|| channel_monitor_tx2_bias.is_set
	|| channel_monitor_tx3_bias.is_set
	|| channel_monitor_tx4_bias.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_monitor_tx1_bias.yfilter)
	|| ydk::is_set(channel_monitor_tx2_bias.yfilter)
	|| ydk::is_set(channel_monitor_tx3_bias.yfilter)
	|| ydk::is_set(channel_monitor_tx4_bias.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-tx-channel-bias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_monitor_tx1_bias.is_set || is_set(channel_monitor_tx1_bias.yfilter)) leaf_name_data.push_back(channel_monitor_tx1_bias.get_name_leafdata());
    if (channel_monitor_tx2_bias.is_set || is_set(channel_monitor_tx2_bias.yfilter)) leaf_name_data.push_back(channel_monitor_tx2_bias.get_name_leafdata());
    if (channel_monitor_tx3_bias.is_set || is_set(channel_monitor_tx3_bias.yfilter)) leaf_name_data.push_back(channel_monitor_tx3_bias.get_name_leafdata());
    if (channel_monitor_tx4_bias.is_set || is_set(channel_monitor_tx4_bias.yfilter)) leaf_name_data.push_back(channel_monitor_tx4_bias.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-monitor-Tx1-Bias")
    {
        channel_monitor_tx1_bias = value;
        channel_monitor_tx1_bias.value_namespace = name_space;
        channel_monitor_tx1_bias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Tx2-Bias")
    {
        channel_monitor_tx2_bias = value;
        channel_monitor_tx2_bias.value_namespace = name_space;
        channel_monitor_tx2_bias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Tx3-Bias")
    {
        channel_monitor_tx3_bias = value;
        channel_monitor_tx3_bias.value_namespace = name_space;
        channel_monitor_tx3_bias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Tx4-Bias")
    {
        channel_monitor_tx4_bias = value;
        channel_monitor_tx4_bias.value_namespace = name_space;
        channel_monitor_tx4_bias.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-monitor-Tx1-Bias")
    {
        channel_monitor_tx1_bias.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Tx2-Bias")
    {
        channel_monitor_tx2_bias.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Tx3-Bias")
    {
        channel_monitor_tx3_bias.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Tx4-Bias")
    {
        channel_monitor_tx4_bias.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxChannelBias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-monitor-Tx1-Bias" || name == "channel-monitor-Tx2-Bias" || name == "channel-monitor-Tx3-Bias" || name == "channel-monitor-Tx4-Bias")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::QsfpTxOutputPower()
    :
    channel_monitor_tx1_power{YType::str, "channel-monitor-Tx1-Power"},
    channel_monitor_tx2_power{YType::str, "channel-monitor-Tx2-Power"},
    channel_monitor_tx3_power{YType::str, "channel-monitor-Tx3-Power"},
    channel_monitor_tx4_power{YType::str, "channel-monitor-Tx4-Power"}
{

    yang_name = "qsfp-tx-output-power"; yang_parent_name = "qsfp-real-time-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::~QsfpTxOutputPower()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::has_data() const
{
    if (is_presence_container) return true;
    return channel_monitor_tx1_power.is_set
	|| channel_monitor_tx2_power.is_set
	|| channel_monitor_tx3_power.is_set
	|| channel_monitor_tx4_power.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_monitor_tx1_power.yfilter)
	|| ydk::is_set(channel_monitor_tx2_power.yfilter)
	|| ydk::is_set(channel_monitor_tx3_power.yfilter)
	|| ydk::is_set(channel_monitor_tx4_power.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-tx-output-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_monitor_tx1_power.is_set || is_set(channel_monitor_tx1_power.yfilter)) leaf_name_data.push_back(channel_monitor_tx1_power.get_name_leafdata());
    if (channel_monitor_tx2_power.is_set || is_set(channel_monitor_tx2_power.yfilter)) leaf_name_data.push_back(channel_monitor_tx2_power.get_name_leafdata());
    if (channel_monitor_tx3_power.is_set || is_set(channel_monitor_tx3_power.yfilter)) leaf_name_data.push_back(channel_monitor_tx3_power.get_name_leafdata());
    if (channel_monitor_tx4_power.is_set || is_set(channel_monitor_tx4_power.yfilter)) leaf_name_data.push_back(channel_monitor_tx4_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-monitor-Tx1-Power")
    {
        channel_monitor_tx1_power = value;
        channel_monitor_tx1_power.value_namespace = name_space;
        channel_monitor_tx1_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Tx2-Power")
    {
        channel_monitor_tx2_power = value;
        channel_monitor_tx2_power.value_namespace = name_space;
        channel_monitor_tx2_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Tx3-Power")
    {
        channel_monitor_tx3_power = value;
        channel_monitor_tx3_power.value_namespace = name_space;
        channel_monitor_tx3_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Tx4-Power")
    {
        channel_monitor_tx4_power = value;
        channel_monitor_tx4_power.value_namespace = name_space;
        channel_monitor_tx4_power.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-monitor-Tx1-Power")
    {
        channel_monitor_tx1_power.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Tx2-Power")
    {
        channel_monitor_tx2_power.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Tx3-Power")
    {
        channel_monitor_tx3_power.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Tx4-Power")
    {
        channel_monitor_tx4_power.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpTxOutputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-monitor-Tx1-Power" || name == "channel-monitor-Tx2-Power" || name == "channel-monitor-Tx3-Power" || name == "channel-monitor-Tx4-Power")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::QsfpRxInputPower()
    :
    channel_monitor_rx1_power{YType::str, "channel-monitor-Rx1-Power"},
    channel_monitor_rx2_power{YType::str, "channel-monitor-Rx2-Power"},
    channel_monitor_rx3_power{YType::str, "channel-monitor-Rx3-Power"},
    channel_monitor_rx4_power{YType::str, "channel-monitor-Rx4-Power"}
{

    yang_name = "qsfp-rx-input-power"; yang_parent_name = "qsfp-real-time-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::~QsfpRxInputPower()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::has_data() const
{
    if (is_presence_container) return true;
    return channel_monitor_rx1_power.is_set
	|| channel_monitor_rx2_power.is_set
	|| channel_monitor_rx3_power.is_set
	|| channel_monitor_rx4_power.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_monitor_rx1_power.yfilter)
	|| ydk::is_set(channel_monitor_rx2_power.yfilter)
	|| ydk::is_set(channel_monitor_rx3_power.yfilter)
	|| ydk::is_set(channel_monitor_rx4_power.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-rx-input-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_monitor_rx1_power.is_set || is_set(channel_monitor_rx1_power.yfilter)) leaf_name_data.push_back(channel_monitor_rx1_power.get_name_leafdata());
    if (channel_monitor_rx2_power.is_set || is_set(channel_monitor_rx2_power.yfilter)) leaf_name_data.push_back(channel_monitor_rx2_power.get_name_leafdata());
    if (channel_monitor_rx3_power.is_set || is_set(channel_monitor_rx3_power.yfilter)) leaf_name_data.push_back(channel_monitor_rx3_power.get_name_leafdata());
    if (channel_monitor_rx4_power.is_set || is_set(channel_monitor_rx4_power.yfilter)) leaf_name_data.push_back(channel_monitor_rx4_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-monitor-Rx1-Power")
    {
        channel_monitor_rx1_power = value;
        channel_monitor_rx1_power.value_namespace = name_space;
        channel_monitor_rx1_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Rx2-Power")
    {
        channel_monitor_rx2_power = value;
        channel_monitor_rx2_power.value_namespace = name_space;
        channel_monitor_rx2_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Rx3-Power")
    {
        channel_monitor_rx3_power = value;
        channel_monitor_rx3_power.value_namespace = name_space;
        channel_monitor_rx3_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-monitor-Rx4-Power")
    {
        channel_monitor_rx4_power = value;
        channel_monitor_rx4_power.value_namespace = name_space;
        channel_monitor_rx4_power.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-monitor-Rx1-Power")
    {
        channel_monitor_rx1_power.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Rx2-Power")
    {
        channel_monitor_rx2_power.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Rx3-Power")
    {
        channel_monitor_rx3_power.yfilter = yfilter;
    }
    if(value_path == "channel-monitor-Rx4-Power")
    {
        channel_monitor_rx4_power.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeData::QsfpRxInputPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-monitor-Rx1-Power" || name == "channel-monitor-Rx2-Power" || name == "channel-monitor-Rx3-Power" || name == "channel-monitor-Rx4-Power")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatusFlags()
    :
    qsfp_real_time_status(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus>())
    , qsfp_real_time_interrupt_flags(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags>())
{
    qsfp_real_time_status->parent = this;
    qsfp_real_time_interrupt_flags->parent = this;

    yang_name = "qsfp-real-time-status-flags"; yang_parent_name = "qsfp_page_A0_data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::~QsfpRealTimeStatusFlags()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::has_data() const
{
    if (is_presence_container) return true;
    return (qsfp_real_time_status !=  nullptr && qsfp_real_time_status->has_data())
	|| (qsfp_real_time_interrupt_flags !=  nullptr && qsfp_real_time_interrupt_flags->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::has_operation() const
{
    return is_set(yfilter)
	|| (qsfp_real_time_status !=  nullptr && qsfp_real_time_status->has_operation())
	|| (qsfp_real_time_interrupt_flags !=  nullptr && qsfp_real_time_interrupt_flags->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-real-time-status-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsfp-real-time-status")
    {
        if(qsfp_real_time_status == nullptr)
        {
            qsfp_real_time_status = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus>();
        }
        return qsfp_real_time_status;
    }

    if(child_yang_name == "qsfp-real-time-interrupt-flags")
    {
        if(qsfp_real_time_interrupt_flags == nullptr)
        {
            qsfp_real_time_interrupt_flags = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags>();
        }
        return qsfp_real_time_interrupt_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qsfp_real_time_status != nullptr)
    {
        children["qsfp-real-time-status"] = qsfp_real_time_status;
    }

    if(qsfp_real_time_interrupt_flags != nullptr)
    {
        children["qsfp-real-time-interrupt-flags"] = qsfp_real_time_interrupt_flags;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-real-time-status" || name == "qsfp-real-time-interrupt-flags")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::QsfpRealTimeStatus()
    :
    qsfp_page_select{YType::str, "qsfp-page-select"},
    qsfp_status{YType::bits, "qsfp-status"}
{

    yang_name = "qsfp-real-time-status"; yang_parent_name = "qsfp-real-time-status-flags"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::~QsfpRealTimeStatus()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_page_select.is_set
	|| qsfp_status.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_page_select.yfilter)
	|| ydk::is_set(qsfp_status.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-real-time-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_page_select.is_set || is_set(qsfp_page_select.yfilter)) leaf_name_data.push_back(qsfp_page_select.get_name_leafdata());
    if (qsfp_status.is_set || is_set(qsfp_status.yfilter)) leaf_name_data.push_back(qsfp_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-page-select")
    {
        qsfp_page_select = value;
        qsfp_page_select.value_namespace = name_space;
        qsfp_page_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-status")
    {
        qsfp_status[value] = true;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-page-select")
    {
        qsfp_page_select.yfilter = yfilter;
    }
    if(value_path == "qsfp-status")
    {
        qsfp_status.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-page-select" || name == "qsfp-status")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::QsfpRealTimeInterruptFlags()
    :
    qsfp_int_flags_los_indicator{YType::bits, "qsfp-int-flags-LOS-Indicator"},
    qsfp_int_flags_fault_indicator{YType::bits, "qsfp-int-flags-Fault-Indicator"},
    qsfp_int_flags_temperature_indicator{YType::bits, "qsfp-int-flags-Temperature-Indicator"},
    qsfp_int_flags_supply_voltage_indicator{YType::bits, "qsfp-int-flags-Supply-Voltage-Indicator"},
    qsfp_int_flags_rx_power_indicator{YType::bits, "qsfp-int-flags-Rx-Power-Indicator"},
    qsfp_int_flags_tx_bias_indicator{YType::bits, "qsfp-int-flags-Tx-Bias-Indicator"}
{

    yang_name = "qsfp-real-time-interrupt-flags"; yang_parent_name = "qsfp-real-time-status-flags"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::~QsfpRealTimeInterruptFlags()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_int_flags_los_indicator.is_set
	|| qsfp_int_flags_fault_indicator.is_set
	|| qsfp_int_flags_temperature_indicator.is_set
	|| qsfp_int_flags_supply_voltage_indicator.is_set
	|| qsfp_int_flags_rx_power_indicator.is_set
	|| qsfp_int_flags_tx_bias_indicator.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_int_flags_los_indicator.yfilter)
	|| ydk::is_set(qsfp_int_flags_fault_indicator.yfilter)
	|| ydk::is_set(qsfp_int_flags_temperature_indicator.yfilter)
	|| ydk::is_set(qsfp_int_flags_supply_voltage_indicator.yfilter)
	|| ydk::is_set(qsfp_int_flags_rx_power_indicator.yfilter)
	|| ydk::is_set(qsfp_int_flags_tx_bias_indicator.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-real-time-interrupt-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_int_flags_los_indicator.is_set || is_set(qsfp_int_flags_los_indicator.yfilter)) leaf_name_data.push_back(qsfp_int_flags_los_indicator.get_name_leafdata());
    if (qsfp_int_flags_fault_indicator.is_set || is_set(qsfp_int_flags_fault_indicator.yfilter)) leaf_name_data.push_back(qsfp_int_flags_fault_indicator.get_name_leafdata());
    if (qsfp_int_flags_temperature_indicator.is_set || is_set(qsfp_int_flags_temperature_indicator.yfilter)) leaf_name_data.push_back(qsfp_int_flags_temperature_indicator.get_name_leafdata());
    if (qsfp_int_flags_supply_voltage_indicator.is_set || is_set(qsfp_int_flags_supply_voltage_indicator.yfilter)) leaf_name_data.push_back(qsfp_int_flags_supply_voltage_indicator.get_name_leafdata());
    if (qsfp_int_flags_rx_power_indicator.is_set || is_set(qsfp_int_flags_rx_power_indicator.yfilter)) leaf_name_data.push_back(qsfp_int_flags_rx_power_indicator.get_name_leafdata());
    if (qsfp_int_flags_tx_bias_indicator.is_set || is_set(qsfp_int_flags_tx_bias_indicator.yfilter)) leaf_name_data.push_back(qsfp_int_flags_tx_bias_indicator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-int-flags-LOS-Indicator")
    {
        qsfp_int_flags_los_indicator[value] = true;
    }
    if(value_path == "qsfp-int-flags-Fault-Indicator")
    {
        qsfp_int_flags_fault_indicator[value] = true;
    }
    if(value_path == "qsfp-int-flags-Temperature-Indicator")
    {
        qsfp_int_flags_temperature_indicator[value] = true;
    }
    if(value_path == "qsfp-int-flags-Supply-Voltage-Indicator")
    {
        qsfp_int_flags_supply_voltage_indicator[value] = true;
    }
    if(value_path == "qsfp-int-flags-Rx-Power-Indicator")
    {
        qsfp_int_flags_rx_power_indicator[value] = true;
    }
    if(value_path == "qsfp-int-flags-Tx-Bias-Indicator")
    {
        qsfp_int_flags_tx_bias_indicator[value] = true;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-int-flags-LOS-Indicator")
    {
        qsfp_int_flags_los_indicator.yfilter = yfilter;
    }
    if(value_path == "qsfp-int-flags-Fault-Indicator")
    {
        qsfp_int_flags_fault_indicator.yfilter = yfilter;
    }
    if(value_path == "qsfp-int-flags-Temperature-Indicator")
    {
        qsfp_int_flags_temperature_indicator.yfilter = yfilter;
    }
    if(value_path == "qsfp-int-flags-Supply-Voltage-Indicator")
    {
        qsfp_int_flags_supply_voltage_indicator.yfilter = yfilter;
    }
    if(value_path == "qsfp-int-flags-Rx-Power-Indicator")
    {
        qsfp_int_flags_rx_power_indicator.yfilter = yfilter;
    }
    if(value_path == "qsfp-int-flags-Tx-Bias-Indicator")
    {
        qsfp_int_flags_tx_bias_indicator.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA0Data::QsfpRealTimeStatusFlags::QsfpRealTimeInterruptFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-int-flags-LOS-Indicator" || name == "qsfp-int-flags-Fault-Indicator" || name == "qsfp-int-flags-Temperature-Indicator" || name == "qsfp-int-flags-Supply-Voltage-Indicator" || name == "qsfp-int-flags-Rx-Power-Indicator" || name == "qsfp-int-flags-Tx-Bias-Indicator")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::QsfpPageA00Data()
    :
    qsfp_identifier{YType::enumeration, "qsfp-identifier"},
    qsfp_transceiver{YType::enumeration, "qsfp-transceiver"},
    qsfp_extended_transceiver{YType::str, "qsfp-extended-transceiver"},
    qsfp_encoding{YType::enumeration, "qsfp-encoding"},
    qsfp_bit_rate{YType::uint32, "qsfp-bit-rate"},
    qsfp_link_length_standard_sm_fiber_km{YType::uint32, "qsfp-link-length-standard-SM-fiber_KM"},
    qsfp_link_length_om3_50u_fiber_m{YType::uint32, "qsfp-link-length-OM3-50u-fiber_M"},
    qsfp_link_length_om2_50u_fiber_m{YType::uint32, "qsfp-link-length-OM2-50u-fiber_M"},
    qsfp_link_length_om1_62_5u_fiber_m{YType::uint32, "qsfp-link-length-OM1-62_5u-fiber_M"},
    qsfp_link_length_copper_cable_assembly_fiber_m{YType::uint32, "qsfp-link-length-Copper-Cable-Assembly-fiber_M"},
    qsfp_device_tech{YType::str, "qsfp-device-tech"},
    qsfp_vendor_name{YType::str, "qsfp-vendor-name"},
    qsfp_vendor_oui{YType::str, "qsfp-vendor-oui"},
    qsfp_vendor_part_num{YType::str, "qsfp-vendor-part-num"},
    qsfp_laser_wavelength{YType::uint32, "qsfp-laser-wavelength"},
    qsfp_wavelength_tolerance{YType::uint32, "qsfp-wavelength_tolerance"},
    qsfp_max_case_temperature{YType::str, "qsfp-max-case-temperature"},
    qsfp_option_value_rx_amplitude{YType::bits, "qsfp-option-value-Rx-amplitude"},
    qsfp_option_values_indicator{YType::bits, "qsfp-option-values-Indicator"},
    qsfp_vendor_serial_num{YType::str, "qsfp-vendor-serial-num"},
    qsfp_date_code{YType::str, "qsfp-date-code"},
    qsfp_diag_monitoring_type{YType::bits, "qsfp-diag-monitoring-type"}
{

    yang_name = "qsfp_page_A0_0_data"; yang_parent_name = "qsfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::~QsfpPageA00Data()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_identifier.is_set
	|| qsfp_transceiver.is_set
	|| qsfp_extended_transceiver.is_set
	|| qsfp_encoding.is_set
	|| qsfp_bit_rate.is_set
	|| qsfp_link_length_standard_sm_fiber_km.is_set
	|| qsfp_link_length_om3_50u_fiber_m.is_set
	|| qsfp_link_length_om2_50u_fiber_m.is_set
	|| qsfp_link_length_om1_62_5u_fiber_m.is_set
	|| qsfp_link_length_copper_cable_assembly_fiber_m.is_set
	|| qsfp_device_tech.is_set
	|| qsfp_vendor_name.is_set
	|| qsfp_vendor_oui.is_set
	|| qsfp_vendor_part_num.is_set
	|| qsfp_laser_wavelength.is_set
	|| qsfp_wavelength_tolerance.is_set
	|| qsfp_max_case_temperature.is_set
	|| qsfp_option_value_rx_amplitude.is_set
	|| qsfp_option_values_indicator.is_set
	|| qsfp_vendor_serial_num.is_set
	|| qsfp_date_code.is_set
	|| qsfp_diag_monitoring_type.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_identifier.yfilter)
	|| ydk::is_set(qsfp_transceiver.yfilter)
	|| ydk::is_set(qsfp_extended_transceiver.yfilter)
	|| ydk::is_set(qsfp_encoding.yfilter)
	|| ydk::is_set(qsfp_bit_rate.yfilter)
	|| ydk::is_set(qsfp_link_length_standard_sm_fiber_km.yfilter)
	|| ydk::is_set(qsfp_link_length_om3_50u_fiber_m.yfilter)
	|| ydk::is_set(qsfp_link_length_om2_50u_fiber_m.yfilter)
	|| ydk::is_set(qsfp_link_length_om1_62_5u_fiber_m.yfilter)
	|| ydk::is_set(qsfp_link_length_copper_cable_assembly_fiber_m.yfilter)
	|| ydk::is_set(qsfp_device_tech.yfilter)
	|| ydk::is_set(qsfp_vendor_name.yfilter)
	|| ydk::is_set(qsfp_vendor_oui.yfilter)
	|| ydk::is_set(qsfp_vendor_part_num.yfilter)
	|| ydk::is_set(qsfp_laser_wavelength.yfilter)
	|| ydk::is_set(qsfp_wavelength_tolerance.yfilter)
	|| ydk::is_set(qsfp_max_case_temperature.yfilter)
	|| ydk::is_set(qsfp_option_value_rx_amplitude.yfilter)
	|| ydk::is_set(qsfp_option_values_indicator.yfilter)
	|| ydk::is_set(qsfp_vendor_serial_num.yfilter)
	|| ydk::is_set(qsfp_date_code.yfilter)
	|| ydk::is_set(qsfp_diag_monitoring_type.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp_page_A0_0_data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_identifier.is_set || is_set(qsfp_identifier.yfilter)) leaf_name_data.push_back(qsfp_identifier.get_name_leafdata());
    if (qsfp_transceiver.is_set || is_set(qsfp_transceiver.yfilter)) leaf_name_data.push_back(qsfp_transceiver.get_name_leafdata());
    if (qsfp_extended_transceiver.is_set || is_set(qsfp_extended_transceiver.yfilter)) leaf_name_data.push_back(qsfp_extended_transceiver.get_name_leafdata());
    if (qsfp_encoding.is_set || is_set(qsfp_encoding.yfilter)) leaf_name_data.push_back(qsfp_encoding.get_name_leafdata());
    if (qsfp_bit_rate.is_set || is_set(qsfp_bit_rate.yfilter)) leaf_name_data.push_back(qsfp_bit_rate.get_name_leafdata());
    if (qsfp_link_length_standard_sm_fiber_km.is_set || is_set(qsfp_link_length_standard_sm_fiber_km.yfilter)) leaf_name_data.push_back(qsfp_link_length_standard_sm_fiber_km.get_name_leafdata());
    if (qsfp_link_length_om3_50u_fiber_m.is_set || is_set(qsfp_link_length_om3_50u_fiber_m.yfilter)) leaf_name_data.push_back(qsfp_link_length_om3_50u_fiber_m.get_name_leafdata());
    if (qsfp_link_length_om2_50u_fiber_m.is_set || is_set(qsfp_link_length_om2_50u_fiber_m.yfilter)) leaf_name_data.push_back(qsfp_link_length_om2_50u_fiber_m.get_name_leafdata());
    if (qsfp_link_length_om1_62_5u_fiber_m.is_set || is_set(qsfp_link_length_om1_62_5u_fiber_m.yfilter)) leaf_name_data.push_back(qsfp_link_length_om1_62_5u_fiber_m.get_name_leafdata());
    if (qsfp_link_length_copper_cable_assembly_fiber_m.is_set || is_set(qsfp_link_length_copper_cable_assembly_fiber_m.yfilter)) leaf_name_data.push_back(qsfp_link_length_copper_cable_assembly_fiber_m.get_name_leafdata());
    if (qsfp_device_tech.is_set || is_set(qsfp_device_tech.yfilter)) leaf_name_data.push_back(qsfp_device_tech.get_name_leafdata());
    if (qsfp_vendor_name.is_set || is_set(qsfp_vendor_name.yfilter)) leaf_name_data.push_back(qsfp_vendor_name.get_name_leafdata());
    if (qsfp_vendor_oui.is_set || is_set(qsfp_vendor_oui.yfilter)) leaf_name_data.push_back(qsfp_vendor_oui.get_name_leafdata());
    if (qsfp_vendor_part_num.is_set || is_set(qsfp_vendor_part_num.yfilter)) leaf_name_data.push_back(qsfp_vendor_part_num.get_name_leafdata());
    if (qsfp_laser_wavelength.is_set || is_set(qsfp_laser_wavelength.yfilter)) leaf_name_data.push_back(qsfp_laser_wavelength.get_name_leafdata());
    if (qsfp_wavelength_tolerance.is_set || is_set(qsfp_wavelength_tolerance.yfilter)) leaf_name_data.push_back(qsfp_wavelength_tolerance.get_name_leafdata());
    if (qsfp_max_case_temperature.is_set || is_set(qsfp_max_case_temperature.yfilter)) leaf_name_data.push_back(qsfp_max_case_temperature.get_name_leafdata());
    if (qsfp_option_value_rx_amplitude.is_set || is_set(qsfp_option_value_rx_amplitude.yfilter)) leaf_name_data.push_back(qsfp_option_value_rx_amplitude.get_name_leafdata());
    if (qsfp_option_values_indicator.is_set || is_set(qsfp_option_values_indicator.yfilter)) leaf_name_data.push_back(qsfp_option_values_indicator.get_name_leafdata());
    if (qsfp_vendor_serial_num.is_set || is_set(qsfp_vendor_serial_num.yfilter)) leaf_name_data.push_back(qsfp_vendor_serial_num.get_name_leafdata());
    if (qsfp_date_code.is_set || is_set(qsfp_date_code.yfilter)) leaf_name_data.push_back(qsfp_date_code.get_name_leafdata());
    if (qsfp_diag_monitoring_type.is_set || is_set(qsfp_diag_monitoring_type.yfilter)) leaf_name_data.push_back(qsfp_diag_monitoring_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-identifier")
    {
        qsfp_identifier = value;
        qsfp_identifier.value_namespace = name_space;
        qsfp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-transceiver")
    {
        qsfp_transceiver = value;
        qsfp_transceiver.value_namespace = name_space;
        qsfp_transceiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-extended-transceiver")
    {
        qsfp_extended_transceiver = value;
        qsfp_extended_transceiver.value_namespace = name_space;
        qsfp_extended_transceiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-encoding")
    {
        qsfp_encoding = value;
        qsfp_encoding.value_namespace = name_space;
        qsfp_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-bit-rate")
    {
        qsfp_bit_rate = value;
        qsfp_bit_rate.value_namespace = name_space;
        qsfp_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-link-length-standard-SM-fiber_KM")
    {
        qsfp_link_length_standard_sm_fiber_km = value;
        qsfp_link_length_standard_sm_fiber_km.value_namespace = name_space;
        qsfp_link_length_standard_sm_fiber_km.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-link-length-OM3-50u-fiber_M")
    {
        qsfp_link_length_om3_50u_fiber_m = value;
        qsfp_link_length_om3_50u_fiber_m.value_namespace = name_space;
        qsfp_link_length_om3_50u_fiber_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-link-length-OM2-50u-fiber_M")
    {
        qsfp_link_length_om2_50u_fiber_m = value;
        qsfp_link_length_om2_50u_fiber_m.value_namespace = name_space;
        qsfp_link_length_om2_50u_fiber_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-link-length-OM1-62_5u-fiber_M")
    {
        qsfp_link_length_om1_62_5u_fiber_m = value;
        qsfp_link_length_om1_62_5u_fiber_m.value_namespace = name_space;
        qsfp_link_length_om1_62_5u_fiber_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-link-length-Copper-Cable-Assembly-fiber_M")
    {
        qsfp_link_length_copper_cable_assembly_fiber_m = value;
        qsfp_link_length_copper_cable_assembly_fiber_m.value_namespace = name_space;
        qsfp_link_length_copper_cable_assembly_fiber_m.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-device-tech")
    {
        qsfp_device_tech = value;
        qsfp_device_tech.value_namespace = name_space;
        qsfp_device_tech.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-vendor-name")
    {
        qsfp_vendor_name = value;
        qsfp_vendor_name.value_namespace = name_space;
        qsfp_vendor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-vendor-oui")
    {
        qsfp_vendor_oui = value;
        qsfp_vendor_oui.value_namespace = name_space;
        qsfp_vendor_oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-vendor-part-num")
    {
        qsfp_vendor_part_num = value;
        qsfp_vendor_part_num.value_namespace = name_space;
        qsfp_vendor_part_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-laser-wavelength")
    {
        qsfp_laser_wavelength = value;
        qsfp_laser_wavelength.value_namespace = name_space;
        qsfp_laser_wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-wavelength_tolerance")
    {
        qsfp_wavelength_tolerance = value;
        qsfp_wavelength_tolerance.value_namespace = name_space;
        qsfp_wavelength_tolerance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-max-case-temperature")
    {
        qsfp_max_case_temperature = value;
        qsfp_max_case_temperature.value_namespace = name_space;
        qsfp_max_case_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-option-value-Rx-amplitude")
    {
        qsfp_option_value_rx_amplitude[value] = true;
    }
    if(value_path == "qsfp-option-values-Indicator")
    {
        qsfp_option_values_indicator[value] = true;
    }
    if(value_path == "qsfp-vendor-serial-num")
    {
        qsfp_vendor_serial_num = value;
        qsfp_vendor_serial_num.value_namespace = name_space;
        qsfp_vendor_serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-date-code")
    {
        qsfp_date_code = value;
        qsfp_date_code.value_namespace = name_space;
        qsfp_date_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-diag-monitoring-type")
    {
        qsfp_diag_monitoring_type[value] = true;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-identifier")
    {
        qsfp_identifier.yfilter = yfilter;
    }
    if(value_path == "qsfp-transceiver")
    {
        qsfp_transceiver.yfilter = yfilter;
    }
    if(value_path == "qsfp-extended-transceiver")
    {
        qsfp_extended_transceiver.yfilter = yfilter;
    }
    if(value_path == "qsfp-encoding")
    {
        qsfp_encoding.yfilter = yfilter;
    }
    if(value_path == "qsfp-bit-rate")
    {
        qsfp_bit_rate.yfilter = yfilter;
    }
    if(value_path == "qsfp-link-length-standard-SM-fiber_KM")
    {
        qsfp_link_length_standard_sm_fiber_km.yfilter = yfilter;
    }
    if(value_path == "qsfp-link-length-OM3-50u-fiber_M")
    {
        qsfp_link_length_om3_50u_fiber_m.yfilter = yfilter;
    }
    if(value_path == "qsfp-link-length-OM2-50u-fiber_M")
    {
        qsfp_link_length_om2_50u_fiber_m.yfilter = yfilter;
    }
    if(value_path == "qsfp-link-length-OM1-62_5u-fiber_M")
    {
        qsfp_link_length_om1_62_5u_fiber_m.yfilter = yfilter;
    }
    if(value_path == "qsfp-link-length-Copper-Cable-Assembly-fiber_M")
    {
        qsfp_link_length_copper_cable_assembly_fiber_m.yfilter = yfilter;
    }
    if(value_path == "qsfp-device-tech")
    {
        qsfp_device_tech.yfilter = yfilter;
    }
    if(value_path == "qsfp-vendor-name")
    {
        qsfp_vendor_name.yfilter = yfilter;
    }
    if(value_path == "qsfp-vendor-oui")
    {
        qsfp_vendor_oui.yfilter = yfilter;
    }
    if(value_path == "qsfp-vendor-part-num")
    {
        qsfp_vendor_part_num.yfilter = yfilter;
    }
    if(value_path == "qsfp-laser-wavelength")
    {
        qsfp_laser_wavelength.yfilter = yfilter;
    }
    if(value_path == "qsfp-wavelength_tolerance")
    {
        qsfp_wavelength_tolerance.yfilter = yfilter;
    }
    if(value_path == "qsfp-max-case-temperature")
    {
        qsfp_max_case_temperature.yfilter = yfilter;
    }
    if(value_path == "qsfp-option-value-Rx-amplitude")
    {
        qsfp_option_value_rx_amplitude.yfilter = yfilter;
    }
    if(value_path == "qsfp-option-values-Indicator")
    {
        qsfp_option_values_indicator.yfilter = yfilter;
    }
    if(value_path == "qsfp-vendor-serial-num")
    {
        qsfp_vendor_serial_num.yfilter = yfilter;
    }
    if(value_path == "qsfp-date-code")
    {
        qsfp_date_code.yfilter = yfilter;
    }
    if(value_path == "qsfp-diag-monitoring-type")
    {
        qsfp_diag_monitoring_type.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA00Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-identifier" || name == "qsfp-transceiver" || name == "qsfp-extended-transceiver" || name == "qsfp-encoding" || name == "qsfp-bit-rate" || name == "qsfp-link-length-standard-SM-fiber_KM" || name == "qsfp-link-length-OM3-50u-fiber_M" || name == "qsfp-link-length-OM2-50u-fiber_M" || name == "qsfp-link-length-OM1-62_5u-fiber_M" || name == "qsfp-link-length-Copper-Cable-Assembly-fiber_M" || name == "qsfp-device-tech" || name == "qsfp-vendor-name" || name == "qsfp-vendor-oui" || name == "qsfp-vendor-part-num" || name == "qsfp-laser-wavelength" || name == "qsfp-wavelength_tolerance" || name == "qsfp-max-case-temperature" || name == "qsfp-option-value-Rx-amplitude" || name == "qsfp-option-values-Indicator" || name == "qsfp-vendor-serial-num" || name == "qsfp-date-code" || name == "qsfp-diag-monitoring-type")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpPageA03Data()
    :
    qsfp_temperature(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature>())
    , qsfp_voltage(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage>())
    , qsfp_tx_bias(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias>())
    , qsfp_tx_power(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower>())
    , qsfp_rx_power(std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower>())
{
    qsfp_temperature->parent = this;
    qsfp_voltage->parent = this;
    qsfp_tx_bias->parent = this;
    qsfp_tx_power->parent = this;
    qsfp_rx_power->parent = this;

    yang_name = "qsfp_page_A0_3_data"; yang_parent_name = "qsfp-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::~QsfpPageA03Data()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::has_data() const
{
    if (is_presence_container) return true;
    return (qsfp_temperature !=  nullptr && qsfp_temperature->has_data())
	|| (qsfp_voltage !=  nullptr && qsfp_voltage->has_data())
	|| (qsfp_tx_bias !=  nullptr && qsfp_tx_bias->has_data())
	|| (qsfp_tx_power !=  nullptr && qsfp_tx_power->has_data())
	|| (qsfp_rx_power !=  nullptr && qsfp_rx_power->has_data());
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::has_operation() const
{
    return is_set(yfilter)
	|| (qsfp_temperature !=  nullptr && qsfp_temperature->has_operation())
	|| (qsfp_voltage !=  nullptr && qsfp_voltage->has_operation())
	|| (qsfp_tx_bias !=  nullptr && qsfp_tx_bias->has_operation())
	|| (qsfp_tx_power !=  nullptr && qsfp_tx_power->has_operation())
	|| (qsfp_rx_power !=  nullptr && qsfp_rx_power->has_operation());
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp_page_A0_3_data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsfp-temperature")
    {
        if(qsfp_temperature == nullptr)
        {
            qsfp_temperature = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature>();
        }
        return qsfp_temperature;
    }

    if(child_yang_name == "qsfp-voltage")
    {
        if(qsfp_voltage == nullptr)
        {
            qsfp_voltage = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage>();
        }
        return qsfp_voltage;
    }

    if(child_yang_name == "qsfp-tx-bias")
    {
        if(qsfp_tx_bias == nullptr)
        {
            qsfp_tx_bias = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias>();
        }
        return qsfp_tx_bias;
    }

    if(child_yang_name == "qsfp-tx-power")
    {
        if(qsfp_tx_power == nullptr)
        {
            qsfp_tx_power = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower>();
        }
        return qsfp_tx_power;
    }

    if(child_yang_name == "qsfp-rx-power")
    {
        if(qsfp_rx_power == nullptr)
        {
            qsfp_rx_power = std::make_shared<Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower>();
        }
        return qsfp_rx_power;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qsfp_temperature != nullptr)
    {
        children["qsfp-temperature"] = qsfp_temperature;
    }

    if(qsfp_voltage != nullptr)
    {
        children["qsfp-voltage"] = qsfp_voltage;
    }

    if(qsfp_tx_bias != nullptr)
    {
        children["qsfp-tx-bias"] = qsfp_tx_bias;
    }

    if(qsfp_tx_power != nullptr)
    {
        children["qsfp-tx-power"] = qsfp_tx_power;
    }

    if(qsfp_rx_power != nullptr)
    {
        children["qsfp-rx-power"] = qsfp_rx_power;
    }

    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-temperature" || name == "qsfp-voltage" || name == "qsfp-tx-bias" || name == "qsfp-tx-power" || name == "qsfp-rx-power")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::QsfpTemperature()
    :
    qsfp_temp_alarm_high{YType::str, "qsfp-temp-alarm-high"},
    qsfp_temp_warning_high{YType::str, "qsfp-temp-warning-high"},
    qsfp_temp_warning_low{YType::str, "qsfp-temp-warning-low"},
    qsfp_temp_alarm_low{YType::str, "qsfp-temp-alarm-low"}
{

    yang_name = "qsfp-temperature"; yang_parent_name = "qsfp_page_A0_3_data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::~QsfpTemperature()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_temp_alarm_high.is_set
	|| qsfp_temp_warning_high.is_set
	|| qsfp_temp_warning_low.is_set
	|| qsfp_temp_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_temp_alarm_high.yfilter)
	|| ydk::is_set(qsfp_temp_warning_high.yfilter)
	|| ydk::is_set(qsfp_temp_warning_low.yfilter)
	|| ydk::is_set(qsfp_temp_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-temperature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_temp_alarm_high.is_set || is_set(qsfp_temp_alarm_high.yfilter)) leaf_name_data.push_back(qsfp_temp_alarm_high.get_name_leafdata());
    if (qsfp_temp_warning_high.is_set || is_set(qsfp_temp_warning_high.yfilter)) leaf_name_data.push_back(qsfp_temp_warning_high.get_name_leafdata());
    if (qsfp_temp_warning_low.is_set || is_set(qsfp_temp_warning_low.yfilter)) leaf_name_data.push_back(qsfp_temp_warning_low.get_name_leafdata());
    if (qsfp_temp_alarm_low.is_set || is_set(qsfp_temp_alarm_low.yfilter)) leaf_name_data.push_back(qsfp_temp_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-temp-alarm-high")
    {
        qsfp_temp_alarm_high = value;
        qsfp_temp_alarm_high.value_namespace = name_space;
        qsfp_temp_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-temp-warning-high")
    {
        qsfp_temp_warning_high = value;
        qsfp_temp_warning_high.value_namespace = name_space;
        qsfp_temp_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-temp-warning-low")
    {
        qsfp_temp_warning_low = value;
        qsfp_temp_warning_low.value_namespace = name_space;
        qsfp_temp_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-temp-alarm-low")
    {
        qsfp_temp_alarm_low = value;
        qsfp_temp_alarm_low.value_namespace = name_space;
        qsfp_temp_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-temp-alarm-high")
    {
        qsfp_temp_alarm_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-temp-warning-high")
    {
        qsfp_temp_warning_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-temp-warning-low")
    {
        qsfp_temp_warning_low.yfilter = yfilter;
    }
    if(value_path == "qsfp-temp-alarm-low")
    {
        qsfp_temp_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTemperature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-temp-alarm-high" || name == "qsfp-temp-warning-high" || name == "qsfp-temp-warning-low" || name == "qsfp-temp-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::QsfpVoltage()
    :
    qsfp_volt_alarm_high{YType::str, "qsfp-volt-alarm-high"},
    qsfp_volt_warning_high{YType::str, "qsfp-volt-warning-high"},
    qsfp_volt_warning_low{YType::str, "qsfp-volt-warning-low"},
    qsfp_volt_alarm_low{YType::str, "qsfp-volt-alarm-low"}
{

    yang_name = "qsfp-voltage"; yang_parent_name = "qsfp_page_A0_3_data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::~QsfpVoltage()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_volt_alarm_high.is_set
	|| qsfp_volt_warning_high.is_set
	|| qsfp_volt_warning_low.is_set
	|| qsfp_volt_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_volt_alarm_high.yfilter)
	|| ydk::is_set(qsfp_volt_warning_high.yfilter)
	|| ydk::is_set(qsfp_volt_warning_low.yfilter)
	|| ydk::is_set(qsfp_volt_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-voltage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_volt_alarm_high.is_set || is_set(qsfp_volt_alarm_high.yfilter)) leaf_name_data.push_back(qsfp_volt_alarm_high.get_name_leafdata());
    if (qsfp_volt_warning_high.is_set || is_set(qsfp_volt_warning_high.yfilter)) leaf_name_data.push_back(qsfp_volt_warning_high.get_name_leafdata());
    if (qsfp_volt_warning_low.is_set || is_set(qsfp_volt_warning_low.yfilter)) leaf_name_data.push_back(qsfp_volt_warning_low.get_name_leafdata());
    if (qsfp_volt_alarm_low.is_set || is_set(qsfp_volt_alarm_low.yfilter)) leaf_name_data.push_back(qsfp_volt_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-volt-alarm-high")
    {
        qsfp_volt_alarm_high = value;
        qsfp_volt_alarm_high.value_namespace = name_space;
        qsfp_volt_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-volt-warning-high")
    {
        qsfp_volt_warning_high = value;
        qsfp_volt_warning_high.value_namespace = name_space;
        qsfp_volt_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-volt-warning-low")
    {
        qsfp_volt_warning_low = value;
        qsfp_volt_warning_low.value_namespace = name_space;
        qsfp_volt_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-volt-alarm-low")
    {
        qsfp_volt_alarm_low = value;
        qsfp_volt_alarm_low.value_namespace = name_space;
        qsfp_volt_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-volt-alarm-high")
    {
        qsfp_volt_alarm_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-volt-warning-high")
    {
        qsfp_volt_warning_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-volt-warning-low")
    {
        qsfp_volt_warning_low.yfilter = yfilter;
    }
    if(value_path == "qsfp-volt-alarm-low")
    {
        qsfp_volt_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpVoltage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-volt-alarm-high" || name == "qsfp-volt-warning-high" || name == "qsfp-volt-warning-low" || name == "qsfp-volt-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::QsfpTxBias()
    :
    qsfp_tx_bias_alarm_high{YType::str, "qsfp-tx-bias-alarm-high"},
    qsfp_tx_bias_warning_high{YType::str, "qsfp-tx-bias-warning-high"},
    qsfp_tx_bias_warning_low{YType::str, "qsfp-tx-bias-warning-low"},
    qsfp_tx_bias_alarm_low{YType::str, "qsfp-tx-bias-alarm-low"}
{

    yang_name = "qsfp-tx-bias"; yang_parent_name = "qsfp_page_A0_3_data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::~QsfpTxBias()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_tx_bias_alarm_high.is_set
	|| qsfp_tx_bias_warning_high.is_set
	|| qsfp_tx_bias_warning_low.is_set
	|| qsfp_tx_bias_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_tx_bias_alarm_high.yfilter)
	|| ydk::is_set(qsfp_tx_bias_warning_high.yfilter)
	|| ydk::is_set(qsfp_tx_bias_warning_low.yfilter)
	|| ydk::is_set(qsfp_tx_bias_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-tx-bias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_tx_bias_alarm_high.is_set || is_set(qsfp_tx_bias_alarm_high.yfilter)) leaf_name_data.push_back(qsfp_tx_bias_alarm_high.get_name_leafdata());
    if (qsfp_tx_bias_warning_high.is_set || is_set(qsfp_tx_bias_warning_high.yfilter)) leaf_name_data.push_back(qsfp_tx_bias_warning_high.get_name_leafdata());
    if (qsfp_tx_bias_warning_low.is_set || is_set(qsfp_tx_bias_warning_low.yfilter)) leaf_name_data.push_back(qsfp_tx_bias_warning_low.get_name_leafdata());
    if (qsfp_tx_bias_alarm_low.is_set || is_set(qsfp_tx_bias_alarm_low.yfilter)) leaf_name_data.push_back(qsfp_tx_bias_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-tx-bias-alarm-high")
    {
        qsfp_tx_bias_alarm_high = value;
        qsfp_tx_bias_alarm_high.value_namespace = name_space;
        qsfp_tx_bias_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-tx-bias-warning-high")
    {
        qsfp_tx_bias_warning_high = value;
        qsfp_tx_bias_warning_high.value_namespace = name_space;
        qsfp_tx_bias_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-tx-bias-warning-low")
    {
        qsfp_tx_bias_warning_low = value;
        qsfp_tx_bias_warning_low.value_namespace = name_space;
        qsfp_tx_bias_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-tx-bias-alarm-low")
    {
        qsfp_tx_bias_alarm_low = value;
        qsfp_tx_bias_alarm_low.value_namespace = name_space;
        qsfp_tx_bias_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-tx-bias-alarm-high")
    {
        qsfp_tx_bias_alarm_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-tx-bias-warning-high")
    {
        qsfp_tx_bias_warning_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-tx-bias-warning-low")
    {
        qsfp_tx_bias_warning_low.yfilter = yfilter;
    }
    if(value_path == "qsfp-tx-bias-alarm-low")
    {
        qsfp_tx_bias_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxBias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-tx-bias-alarm-high" || name == "qsfp-tx-bias-warning-high" || name == "qsfp-tx-bias-warning-low" || name == "qsfp-tx-bias-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::QsfpTxPower()
    :
    qsfp_tx_power_alarm_high{YType::str, "qsfp-tx-power-alarm-high"},
    qsfp_tx_power_warning_high{YType::str, "qsfp-tx-power-warning-high"},
    qsfp_tx_power_warning_low{YType::str, "qsfp-tx-power-warning-low"},
    qsfp_tx_power_alarm_low{YType::str, "qsfp-tx-power-alarm-low"}
{

    yang_name = "qsfp-tx-power"; yang_parent_name = "qsfp_page_A0_3_data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::~QsfpTxPower()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_tx_power_alarm_high.is_set
	|| qsfp_tx_power_warning_high.is_set
	|| qsfp_tx_power_warning_low.is_set
	|| qsfp_tx_power_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_tx_power_alarm_high.yfilter)
	|| ydk::is_set(qsfp_tx_power_warning_high.yfilter)
	|| ydk::is_set(qsfp_tx_power_warning_low.yfilter)
	|| ydk::is_set(qsfp_tx_power_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-tx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_tx_power_alarm_high.is_set || is_set(qsfp_tx_power_alarm_high.yfilter)) leaf_name_data.push_back(qsfp_tx_power_alarm_high.get_name_leafdata());
    if (qsfp_tx_power_warning_high.is_set || is_set(qsfp_tx_power_warning_high.yfilter)) leaf_name_data.push_back(qsfp_tx_power_warning_high.get_name_leafdata());
    if (qsfp_tx_power_warning_low.is_set || is_set(qsfp_tx_power_warning_low.yfilter)) leaf_name_data.push_back(qsfp_tx_power_warning_low.get_name_leafdata());
    if (qsfp_tx_power_alarm_low.is_set || is_set(qsfp_tx_power_alarm_low.yfilter)) leaf_name_data.push_back(qsfp_tx_power_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-tx-power-alarm-high")
    {
        qsfp_tx_power_alarm_high = value;
        qsfp_tx_power_alarm_high.value_namespace = name_space;
        qsfp_tx_power_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-tx-power-warning-high")
    {
        qsfp_tx_power_warning_high = value;
        qsfp_tx_power_warning_high.value_namespace = name_space;
        qsfp_tx_power_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-tx-power-warning-low")
    {
        qsfp_tx_power_warning_low = value;
        qsfp_tx_power_warning_low.value_namespace = name_space;
        qsfp_tx_power_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-tx-power-alarm-low")
    {
        qsfp_tx_power_alarm_low = value;
        qsfp_tx_power_alarm_low.value_namespace = name_space;
        qsfp_tx_power_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-tx-power-alarm-high")
    {
        qsfp_tx_power_alarm_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-tx-power-warning-high")
    {
        qsfp_tx_power_warning_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-tx-power-warning-low")
    {
        qsfp_tx_power_warning_low.yfilter = yfilter;
    }
    if(value_path == "qsfp-tx-power-alarm-low")
    {
        qsfp_tx_power_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpTxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-tx-power-alarm-high" || name == "qsfp-tx-power-warning-high" || name == "qsfp-tx-power-warning-low" || name == "qsfp-tx-power-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::QsfpRxPower()
    :
    qsfp_rx_power_alarm_high{YType::str, "qsfp-rx-power-alarm-high"},
    qsfp_rx_power_warning_high{YType::str, "qsfp-rx-power-warning-high"},
    qsfp_rx_power_warning_low{YType::str, "qsfp-rx-power-warning-low"},
    qsfp_rx_power_alarm_low{YType::str, "qsfp-rx-power-alarm-low"}
{

    yang_name = "qsfp-rx-power"; yang_parent_name = "qsfp_page_A0_3_data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::~QsfpRxPower()
{
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::has_data() const
{
    if (is_presence_container) return true;
    return qsfp_rx_power_alarm_high.is_set
	|| qsfp_rx_power_warning_high.is_set
	|| qsfp_rx_power_warning_low.is_set
	|| qsfp_rx_power_alarm_low.is_set;
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qsfp_rx_power_alarm_high.yfilter)
	|| ydk::is_set(qsfp_rx_power_warning_high.yfilter)
	|| ydk::is_set(qsfp_rx_power_warning_low.yfilter)
	|| ydk::is_set(qsfp_rx_power_alarm_low.yfilter);
}

std::string Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsfp-rx-power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qsfp_rx_power_alarm_high.is_set || is_set(qsfp_rx_power_alarm_high.yfilter)) leaf_name_data.push_back(qsfp_rx_power_alarm_high.get_name_leafdata());
    if (qsfp_rx_power_warning_high.is_set || is_set(qsfp_rx_power_warning_high.yfilter)) leaf_name_data.push_back(qsfp_rx_power_warning_high.get_name_leafdata());
    if (qsfp_rx_power_warning_low.is_set || is_set(qsfp_rx_power_warning_low.yfilter)) leaf_name_data.push_back(qsfp_rx_power_warning_low.get_name_leafdata());
    if (qsfp_rx_power_alarm_low.is_set || is_set(qsfp_rx_power_alarm_low.yfilter)) leaf_name_data.push_back(qsfp_rx_power_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qsfp-rx-power-alarm-high")
    {
        qsfp_rx_power_alarm_high = value;
        qsfp_rx_power_alarm_high.value_namespace = name_space;
        qsfp_rx_power_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-rx-power-warning-high")
    {
        qsfp_rx_power_warning_high = value;
        qsfp_rx_power_warning_high.value_namespace = name_space;
        qsfp_rx_power_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-rx-power-warning-low")
    {
        qsfp_rx_power_warning_low = value;
        qsfp_rx_power_warning_low.value_namespace = name_space;
        qsfp_rx_power_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qsfp-rx-power-alarm-low")
    {
        qsfp_rx_power_alarm_low = value;
        qsfp_rx_power_alarm_low.value_namespace = name_space;
        qsfp_rx_power_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qsfp-rx-power-alarm-high")
    {
        qsfp_rx_power_alarm_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-rx-power-warning-high")
    {
        qsfp_rx_power_warning_high.yfilter = yfilter;
    }
    if(value_path == "qsfp-rx-power-warning-low")
    {
        qsfp_rx_power_warning_low.yfilter = yfilter;
    }
    if(value_path == "qsfp-rx-power-alarm-low")
    {
        qsfp_rx_power_alarm_low.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Sfp::Detail::Location::SfpPortIter::QsfpDetails::QsfpPageA03Data::QsfpRxPower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsfp-rx-power-alarm-high" || name == "qsfp-rx-power-warning-high" || name == "qsfp-rx-power-warning-low" || name == "qsfp-rx-power-alarm-low")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Mlap()
    :
    reachable(std::make_shared<Controller::Switch::Oper::Mlap::Reachable>())
    , detail(std::make_shared<Controller::Switch::Oper::Mlap::Detail>())
    , statistics(std::make_shared<Controller::Switch::Oper::Mlap::Statistics>())
    , summary_data(std::make_shared<Controller::Switch::Oper::Mlap::SummaryData>())
    , debug(std::make_shared<Controller::Switch::Oper::Mlap::Debug>())
    , trace(this, {"buffer"})
{
    reachable->parent = this;
    detail->parent = this;
    statistics->parent = this;
    summary_data->parent = this;
    debug->parent = this;

    yang_name = "mlap"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::~Mlap()
{
}

bool Controller::Switch::Oper::Mlap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return (reachable !=  nullptr && reachable->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary_data !=  nullptr && summary_data->has_data())
	|| (debug !=  nullptr && debug->has_data());
}

bool Controller::Switch::Oper::Mlap::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (reachable !=  nullptr && reachable->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary_data !=  nullptr && summary_data->has_operation())
	|| (debug !=  nullptr && debug->has_operation());
}

std::string Controller::Switch::Oper::Mlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachable")
    {
        if(reachable == nullptr)
        {
            reachable = std::make_shared<Controller::Switch::Oper::Mlap::Reachable>();
        }
        return reachable;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Switch::Oper::Mlap::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Switch::Oper::Mlap::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary-data")
    {
        if(summary_data == nullptr)
        {
            summary_data = std::make_shared<Controller::Switch::Oper::Mlap::SummaryData>();
        }
        return summary_data;
    }

    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Controller::Switch::Oper::Mlap::Debug>();
        }
        return debug;
    }

    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Trace>();
        c->parent = this;
        trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reachable != nullptr)
    {
        children["reachable"] = reachable;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary_data != nullptr)
    {
        children["summary-data"] = summary_data;
    }

    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    count = 0;
    for (auto c : trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "detail" || name == "statistics" || name == "summary-data" || name == "debug" || name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Reachable::Reachable()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "reachable"; yang_parent_name = "mlap"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Reachable::~Reachable()
{
}

bool Controller::Switch::Oper::Mlap::Reachable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mlap::Reachable::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mlap::Reachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Reachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Reachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Reachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Reachable::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Reachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Reachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::Reachable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::Reachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Reachable::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "reachable"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Reachable::Location::~Location()
{
}

bool Controller::Switch::Oper::Mlap::Reachable::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Mlap::Reachable::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Reachable::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/reachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Reachable::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Reachable::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Reachable::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Reachable::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Reachable::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Reachable::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Reachable::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Detail()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "detail"; yang_parent_name = "mlap"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Detail::~Detail()
{
}

bool Controller::Switch::Oper::Mlap::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mlap::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mlap::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Detail::Location::~Location()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::Mlap::Detail::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"}
        ,
    gen_data(std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData>())
    , mlap_internal_details(std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails>())
    , mlap_external_details(std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails>())
{
    gen_data->parent = this;
    mlap_internal_details->parent = this;
    mlap_external_details->parent = this;

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (gen_data !=  nullptr && gen_data->has_data())
	|| (mlap_internal_details !=  nullptr && mlap_internal_details->has_data())
	|| (mlap_external_details !=  nullptr && mlap_external_details->has_data());
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (gen_data !=  nullptr && gen_data->has_operation())
	|| (mlap_internal_details !=  nullptr && mlap_internal_details->has_operation())
	|| (mlap_external_details !=  nullptr && mlap_external_details->has_operation());
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gen-data")
    {
        if(gen_data == nullptr)
        {
            gen_data = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData>();
        }
        return gen_data;
    }

    if(child_yang_name == "mlap-internal-details")
    {
        if(mlap_internal_details == nullptr)
        {
            mlap_internal_details = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails>();
        }
        return mlap_internal_details;
    }

    if(child_yang_name == "mlap-external-details")
    {
        if(mlap_external_details == nullptr)
        {
            mlap_external_details = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails>();
        }
        return mlap_external_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gen_data != nullptr)
    {
        children["gen-data"] = gen_data;
    }

    if(mlap_internal_details != nullptr)
    {
        children["mlap-internal-details"] = mlap_internal_details;
    }

    if(mlap_external_details != nullptr)
    {
        children["mlap-external-details"] = mlap_external_details;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gen-data" || name == "mlap-internal-details" || name == "mlap-external-details" || name == "port")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::GenData()
    :
    serial_num{YType::str, "serial-num"},
    connects_to{YType::str, "connects-to"},
    phys_state{YType::enumeration, "phys-state"},
    admin_state{YType::enumeration, "admin-state"},
    protocol_state{YType::enumeration, "protocol-state"},
    forwarding{YType::enumeration, "forwarding"},
    mlap_protocol{YType::enumeration, "mlap-protocol"},
    protocol_pkt_sent{YType::uint64, "protocol-pkt-sent"},
    protocol_pkt_recv{YType::uint64, "protocol-pkt-recv"},
    protocol_set_color_pkts_sent{YType::uint64, "protocol-set-color-pkts-sent"},
    protocol_set_color_pkts_recv{YType::uint64, "protocol-set-color-pkts-recv"},
    protocol_send_error{YType::uint64, "protocol-send-error"},
    protocol_recv_error{YType::uint64, "protocol-recv-error"},
    protocol_state_changes{YType::uint32, "protocol-state-changes"}
{

    yang_name = "gen-data"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::~GenData()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::has_data() const
{
    if (is_presence_container) return true;
    return serial_num.is_set
	|| connects_to.is_set
	|| phys_state.is_set
	|| admin_state.is_set
	|| protocol_state.is_set
	|| forwarding.is_set
	|| mlap_protocol.is_set
	|| protocol_pkt_sent.is_set
	|| protocol_pkt_recv.is_set
	|| protocol_set_color_pkts_sent.is_set
	|| protocol_set_color_pkts_recv.is_set
	|| protocol_send_error.is_set
	|| protocol_recv_error.is_set
	|| protocol_state_changes.is_set;
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_num.yfilter)
	|| ydk::is_set(connects_to.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(protocol_state.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mlap_protocol.yfilter)
	|| ydk::is_set(protocol_pkt_sent.yfilter)
	|| ydk::is_set(protocol_pkt_recv.yfilter)
	|| ydk::is_set(protocol_set_color_pkts_sent.yfilter)
	|| ydk::is_set(protocol_set_color_pkts_recv.yfilter)
	|| ydk::is_set(protocol_send_error.yfilter)
	|| ydk::is_set(protocol_recv_error.yfilter)
	|| ydk::is_set(protocol_state_changes.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gen-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.yfilter)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mlap_protocol.is_set || is_set(mlap_protocol.yfilter)) leaf_name_data.push_back(mlap_protocol.get_name_leafdata());
    if (protocol_pkt_sent.is_set || is_set(protocol_pkt_sent.yfilter)) leaf_name_data.push_back(protocol_pkt_sent.get_name_leafdata());
    if (protocol_pkt_recv.is_set || is_set(protocol_pkt_recv.yfilter)) leaf_name_data.push_back(protocol_pkt_recv.get_name_leafdata());
    if (protocol_set_color_pkts_sent.is_set || is_set(protocol_set_color_pkts_sent.yfilter)) leaf_name_data.push_back(protocol_set_color_pkts_sent.get_name_leafdata());
    if (protocol_set_color_pkts_recv.is_set || is_set(protocol_set_color_pkts_recv.yfilter)) leaf_name_data.push_back(protocol_set_color_pkts_recv.get_name_leafdata());
    if (protocol_send_error.is_set || is_set(protocol_send_error.yfilter)) leaf_name_data.push_back(protocol_send_error.get_name_leafdata());
    if (protocol_recv_error.is_set || is_set(protocol_recv_error.yfilter)) leaf_name_data.push_back(protocol_recv_error.get_name_leafdata());
    if (protocol_state_changes.is_set || is_set(protocol_state_changes.yfilter)) leaf_name_data.push_back(protocol_state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
        protocol_state.value_namespace = name_space;
        protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-protocol")
    {
        mlap_protocol = value;
        mlap_protocol.value_namespace = name_space;
        mlap_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-pkt-sent")
    {
        protocol_pkt_sent = value;
        protocol_pkt_sent.value_namespace = name_space;
        protocol_pkt_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-pkt-recv")
    {
        protocol_pkt_recv = value;
        protocol_pkt_recv.value_namespace = name_space;
        protocol_pkt_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-set-color-pkts-sent")
    {
        protocol_set_color_pkts_sent = value;
        protocol_set_color_pkts_sent.value_namespace = name_space;
        protocol_set_color_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-set-color-pkts-recv")
    {
        protocol_set_color_pkts_recv = value;
        protocol_set_color_pkts_recv.value_namespace = name_space;
        protocol_set_color_pkts_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-send-error")
    {
        protocol_send_error = value;
        protocol_send_error.value_namespace = name_space;
        protocol_send_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-recv-error")
    {
        protocol_recv_error = value;
        protocol_recv_error.value_namespace = name_space;
        protocol_recv_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state-changes")
    {
        protocol_state_changes = value;
        protocol_state_changes.value_namespace = name_space;
        protocol_state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "protocol-state")
    {
        protocol_state.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mlap-protocol")
    {
        mlap_protocol.yfilter = yfilter;
    }
    if(value_path == "protocol-pkt-sent")
    {
        protocol_pkt_sent.yfilter = yfilter;
    }
    if(value_path == "protocol-pkt-recv")
    {
        protocol_pkt_recv.yfilter = yfilter;
    }
    if(value_path == "protocol-set-color-pkts-sent")
    {
        protocol_set_color_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "protocol-set-color-pkts-recv")
    {
        protocol_set_color_pkts_recv.yfilter = yfilter;
    }
    if(value_path == "protocol-send-error")
    {
        protocol_send_error.yfilter = yfilter;
    }
    if(value_path == "protocol-recv-error")
    {
        protocol_recv_error.yfilter = yfilter;
    }
    if(value_path == "protocol-state-changes")
    {
        protocol_state_changes.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::GenData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial-num" || name == "connects-to" || name == "phys-state" || name == "admin-state" || name == "protocol-state" || name == "forwarding" || name == "mlap-protocol" || name == "protocol-pkt-sent" || name == "protocol-pkt-recv" || name == "protocol-set-color-pkts-sent" || name == "protocol-set-color-pkts-recv" || name == "protocol-send-error" || name == "protocol-recv-error" || name == "protocol-state-changes")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::MlapInternalDetails()
    :
    info(std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info>())
{
    info->parent = this;

    yang_name = "mlap-internal-details"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::~MlapInternalDetails()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data());
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation());
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap-internal-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(info != nullptr)
    {
        children["info"] = info;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::Info()
    :
    port_owner{YType::enumeration, "port-owner"},
    current_active_owner{YType::enumeration, "current-active-owner"},
    mlap_peer_flags{YType::bits, "mlap-peer-flags"},
    mlap_peer_idle_count{YType::uint32, "mlap-peer-idle-count"},
    my_connection_active_mask{YType::uint64, "my-connection-active-mask"},
    peer_connection_active_mask{YType::uint64, "peer-connection-active-mask"},
    endpoint_card_type{YType::enumeration, "endpoint-card-type"},
    endpoint_mac_address{YType::str, "endpoint-mac-address"}
{

    yang_name = "info"; yang_parent_name = "mlap-internal-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::~Info()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::has_data() const
{
    if (is_presence_container) return true;
    return port_owner.is_set
	|| current_active_owner.is_set
	|| mlap_peer_flags.is_set
	|| mlap_peer_idle_count.is_set
	|| my_connection_active_mask.is_set
	|| peer_connection_active_mask.is_set
	|| endpoint_card_type.is_set
	|| endpoint_mac_address.is_set;
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_owner.yfilter)
	|| ydk::is_set(current_active_owner.yfilter)
	|| ydk::is_set(mlap_peer_flags.yfilter)
	|| ydk::is_set(mlap_peer_idle_count.yfilter)
	|| ydk::is_set(my_connection_active_mask.yfilter)
	|| ydk::is_set(peer_connection_active_mask.yfilter)
	|| ydk::is_set(endpoint_card_type.yfilter)
	|| ydk::is_set(endpoint_mac_address.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_owner.is_set || is_set(port_owner.yfilter)) leaf_name_data.push_back(port_owner.get_name_leafdata());
    if (current_active_owner.is_set || is_set(current_active_owner.yfilter)) leaf_name_data.push_back(current_active_owner.get_name_leafdata());
    if (mlap_peer_flags.is_set || is_set(mlap_peer_flags.yfilter)) leaf_name_data.push_back(mlap_peer_flags.get_name_leafdata());
    if (mlap_peer_idle_count.is_set || is_set(mlap_peer_idle_count.yfilter)) leaf_name_data.push_back(mlap_peer_idle_count.get_name_leafdata());
    if (my_connection_active_mask.is_set || is_set(my_connection_active_mask.yfilter)) leaf_name_data.push_back(my_connection_active_mask.get_name_leafdata());
    if (peer_connection_active_mask.is_set || is_set(peer_connection_active_mask.yfilter)) leaf_name_data.push_back(peer_connection_active_mask.get_name_leafdata());
    if (endpoint_card_type.is_set || is_set(endpoint_card_type.yfilter)) leaf_name_data.push_back(endpoint_card_type.get_name_leafdata());
    if (endpoint_mac_address.is_set || is_set(endpoint_mac_address.yfilter)) leaf_name_data.push_back(endpoint_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-owner")
    {
        port_owner = value;
        port_owner.value_namespace = name_space;
        port_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-active-owner")
    {
        current_active_owner = value;
        current_active_owner.value_namespace = name_space;
        current_active_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-peer-flags")
    {
        mlap_peer_flags[value] = true;
    }
    if(value_path == "mlap-peer-idle-count")
    {
        mlap_peer_idle_count = value;
        mlap_peer_idle_count.value_namespace = name_space;
        mlap_peer_idle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-connection-active-mask")
    {
        my_connection_active_mask = value;
        my_connection_active_mask.value_namespace = name_space;
        my_connection_active_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-connection-active-mask")
    {
        peer_connection_active_mask = value;
        peer_connection_active_mask.value_namespace = name_space;
        peer_connection_active_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-card-type")
    {
        endpoint_card_type = value;
        endpoint_card_type.value_namespace = name_space;
        endpoint_card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-mac-address")
    {
        endpoint_mac_address = value;
        endpoint_mac_address.value_namespace = name_space;
        endpoint_mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-owner")
    {
        port_owner.yfilter = yfilter;
    }
    if(value_path == "current-active-owner")
    {
        current_active_owner.yfilter = yfilter;
    }
    if(value_path == "mlap-peer-flags")
    {
        mlap_peer_flags.yfilter = yfilter;
    }
    if(value_path == "mlap-peer-idle-count")
    {
        mlap_peer_idle_count.yfilter = yfilter;
    }
    if(value_path == "my-connection-active-mask")
    {
        my_connection_active_mask.yfilter = yfilter;
    }
    if(value_path == "peer-connection-active-mask")
    {
        peer_connection_active_mask.yfilter = yfilter;
    }
    if(value_path == "endpoint-card-type")
    {
        endpoint_card_type.yfilter = yfilter;
    }
    if(value_path == "endpoint-mac-address")
    {
        endpoint_mac_address.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapInternalDetails::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-owner" || name == "current-active-owner" || name == "mlap-peer-flags" || name == "mlap-peer-idle-count" || name == "my-connection-active-mask" || name == "peer-connection-active-mask" || name == "endpoint-card-type" || name == "endpoint-mac-address")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::MlapExternalDetails()
    :
    local_state_information(std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation>())
    , peer_state_information(std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation>())
    , peer_other_link_state_information(std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation>())
{
    local_state_information->parent = this;
    peer_state_information->parent = this;
    peer_other_link_state_information->parent = this;

    yang_name = "mlap-external-details"; yang_parent_name = "port-iter"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::~MlapExternalDetails()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::has_data() const
{
    if (is_presence_container) return true;
    return (local_state_information !=  nullptr && local_state_information->has_data())
	|| (peer_state_information !=  nullptr && peer_state_information->has_data())
	|| (peer_other_link_state_information !=  nullptr && peer_other_link_state_information->has_data());
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::has_operation() const
{
    return is_set(yfilter)
	|| (local_state_information !=  nullptr && local_state_information->has_operation())
	|| (peer_state_information !=  nullptr && peer_state_information->has_operation())
	|| (peer_other_link_state_information !=  nullptr && peer_other_link_state_information->has_operation());
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap-external-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-state-information")
    {
        if(local_state_information == nullptr)
        {
            local_state_information = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation>();
        }
        return local_state_information;
    }

    if(child_yang_name == "peer-state-information")
    {
        if(peer_state_information == nullptr)
        {
            peer_state_information = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation>();
        }
        return peer_state_information;
    }

    if(child_yang_name == "peer-other-link-state-information")
    {
        if(peer_other_link_state_information == nullptr)
        {
            peer_other_link_state_information = std::make_shared<Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation>();
        }
        return peer_other_link_state_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_state_information != nullptr)
    {
        children["local-state-information"] = local_state_information;
    }

    if(peer_state_information != nullptr)
    {
        children["peer-state-information"] = peer_state_information;
    }

    if(peer_other_link_state_information != nullptr)
    {
        children["peer-other-link-state-information"] = peer_other_link_state_information;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-state-information" || name == "peer-state-information" || name == "peer-other-link-state-information")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::LocalStateInformation()
    :
    valid{YType::boolean, "valid"},
    chassis_type{YType::enumeration, "chassis-type"},
    endpoint_type{YType::enumeration, "endpoint-type"},
    endpoint_slot_number{YType::uint32, "endpoint-slot-number"},
    endpoint_switch_number{YType::uint32, "endpoint-switch-number"},
    endpoint_switch_port_number{YType::uint32, "endpoint-switch-port-number"},
    endpoint_chassis_serial_number{YType::str, "endpoint-chassis-serial-number"},
    mlap_state{YType::enumeration, "mlap-state"},
    inter_fcc_sw_port{YType::boolean, "inter-fcc_sw-port"},
    fcc_sw_indirectly_reachable{YType::boolean, "fcc_sw-indirectly-reachable"}
{

    yang_name = "local-state-information"; yang_parent_name = "mlap-external-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::~LocalStateInformation()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| chassis_type.is_set
	|| endpoint_type.is_set
	|| endpoint_slot_number.is_set
	|| endpoint_switch_number.is_set
	|| endpoint_switch_port_number.is_set
	|| endpoint_chassis_serial_number.is_set
	|| mlap_state.is_set
	|| inter_fcc_sw_port.is_set
	|| fcc_sw_indirectly_reachable.is_set;
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(chassis_type.yfilter)
	|| ydk::is_set(endpoint_type.yfilter)
	|| ydk::is_set(endpoint_slot_number.yfilter)
	|| ydk::is_set(endpoint_switch_number.yfilter)
	|| ydk::is_set(endpoint_switch_port_number.yfilter)
	|| ydk::is_set(endpoint_chassis_serial_number.yfilter)
	|| ydk::is_set(mlap_state.yfilter)
	|| ydk::is_set(inter_fcc_sw_port.yfilter)
	|| ydk::is_set(fcc_sw_indirectly_reachable.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-state-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (chassis_type.is_set || is_set(chassis_type.yfilter)) leaf_name_data.push_back(chassis_type.get_name_leafdata());
    if (endpoint_type.is_set || is_set(endpoint_type.yfilter)) leaf_name_data.push_back(endpoint_type.get_name_leafdata());
    if (endpoint_slot_number.is_set || is_set(endpoint_slot_number.yfilter)) leaf_name_data.push_back(endpoint_slot_number.get_name_leafdata());
    if (endpoint_switch_number.is_set || is_set(endpoint_switch_number.yfilter)) leaf_name_data.push_back(endpoint_switch_number.get_name_leafdata());
    if (endpoint_switch_port_number.is_set || is_set(endpoint_switch_port_number.yfilter)) leaf_name_data.push_back(endpoint_switch_port_number.get_name_leafdata());
    if (endpoint_chassis_serial_number.is_set || is_set(endpoint_chassis_serial_number.yfilter)) leaf_name_data.push_back(endpoint_chassis_serial_number.get_name_leafdata());
    if (mlap_state.is_set || is_set(mlap_state.yfilter)) leaf_name_data.push_back(mlap_state.get_name_leafdata());
    if (inter_fcc_sw_port.is_set || is_set(inter_fcc_sw_port.yfilter)) leaf_name_data.push_back(inter_fcc_sw_port.get_name_leafdata());
    if (fcc_sw_indirectly_reachable.is_set || is_set(fcc_sw_indirectly_reachable.yfilter)) leaf_name_data.push_back(fcc_sw_indirectly_reachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-type")
    {
        chassis_type = value;
        chassis_type.value_namespace = name_space;
        chassis_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-type")
    {
        endpoint_type = value;
        endpoint_type.value_namespace = name_space;
        endpoint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-slot-number")
    {
        endpoint_slot_number = value;
        endpoint_slot_number.value_namespace = name_space;
        endpoint_slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-switch-number")
    {
        endpoint_switch_number = value;
        endpoint_switch_number.value_namespace = name_space;
        endpoint_switch_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-switch-port-number")
    {
        endpoint_switch_port_number = value;
        endpoint_switch_port_number.value_namespace = name_space;
        endpoint_switch_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-chassis-serial-number")
    {
        endpoint_chassis_serial_number = value;
        endpoint_chassis_serial_number.value_namespace = name_space;
        endpoint_chassis_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-state")
    {
        mlap_state = value;
        mlap_state.value_namespace = name_space;
        mlap_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-fcc_sw-port")
    {
        inter_fcc_sw_port = value;
        inter_fcc_sw_port.value_namespace = name_space;
        inter_fcc_sw_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcc_sw-indirectly-reachable")
    {
        fcc_sw_indirectly_reachable = value;
        fcc_sw_indirectly_reachable.value_namespace = name_space;
        fcc_sw_indirectly_reachable.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "chassis-type")
    {
        chassis_type.yfilter = yfilter;
    }
    if(value_path == "endpoint-type")
    {
        endpoint_type.yfilter = yfilter;
    }
    if(value_path == "endpoint-slot-number")
    {
        endpoint_slot_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-switch-number")
    {
        endpoint_switch_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-switch-port-number")
    {
        endpoint_switch_port_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-chassis-serial-number")
    {
        endpoint_chassis_serial_number.yfilter = yfilter;
    }
    if(value_path == "mlap-state")
    {
        mlap_state.yfilter = yfilter;
    }
    if(value_path == "inter-fcc_sw-port")
    {
        inter_fcc_sw_port.yfilter = yfilter;
    }
    if(value_path == "fcc_sw-indirectly-reachable")
    {
        fcc_sw_indirectly_reachable.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::LocalStateInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "chassis-type" || name == "endpoint-type" || name == "endpoint-slot-number" || name == "endpoint-switch-number" || name == "endpoint-switch-port-number" || name == "endpoint-chassis-serial-number" || name == "mlap-state" || name == "inter-fcc_sw-port" || name == "fcc_sw-indirectly-reachable")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::PeerStateInformation()
    :
    valid{YType::boolean, "valid"},
    chassis_type{YType::enumeration, "chassis-type"},
    endpoint_type{YType::enumeration, "endpoint-type"},
    endpoint_slot_number{YType::uint32, "endpoint-slot-number"},
    endpoint_switch_number{YType::uint32, "endpoint-switch-number"},
    endpoint_switch_port_number{YType::uint32, "endpoint-switch-port-number"},
    endpoint_chassis_serial_number{YType::str, "endpoint-chassis-serial-number"},
    mlap_state{YType::enumeration, "mlap-state"},
    inter_fcc_sw_port{YType::boolean, "inter-fcc_sw-port"},
    fcc_sw_indirectly_reachable{YType::boolean, "fcc_sw-indirectly-reachable"}
{

    yang_name = "peer-state-information"; yang_parent_name = "mlap-external-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::~PeerStateInformation()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| chassis_type.is_set
	|| endpoint_type.is_set
	|| endpoint_slot_number.is_set
	|| endpoint_switch_number.is_set
	|| endpoint_switch_port_number.is_set
	|| endpoint_chassis_serial_number.is_set
	|| mlap_state.is_set
	|| inter_fcc_sw_port.is_set
	|| fcc_sw_indirectly_reachable.is_set;
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(chassis_type.yfilter)
	|| ydk::is_set(endpoint_type.yfilter)
	|| ydk::is_set(endpoint_slot_number.yfilter)
	|| ydk::is_set(endpoint_switch_number.yfilter)
	|| ydk::is_set(endpoint_switch_port_number.yfilter)
	|| ydk::is_set(endpoint_chassis_serial_number.yfilter)
	|| ydk::is_set(mlap_state.yfilter)
	|| ydk::is_set(inter_fcc_sw_port.yfilter)
	|| ydk::is_set(fcc_sw_indirectly_reachable.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-state-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (chassis_type.is_set || is_set(chassis_type.yfilter)) leaf_name_data.push_back(chassis_type.get_name_leafdata());
    if (endpoint_type.is_set || is_set(endpoint_type.yfilter)) leaf_name_data.push_back(endpoint_type.get_name_leafdata());
    if (endpoint_slot_number.is_set || is_set(endpoint_slot_number.yfilter)) leaf_name_data.push_back(endpoint_slot_number.get_name_leafdata());
    if (endpoint_switch_number.is_set || is_set(endpoint_switch_number.yfilter)) leaf_name_data.push_back(endpoint_switch_number.get_name_leafdata());
    if (endpoint_switch_port_number.is_set || is_set(endpoint_switch_port_number.yfilter)) leaf_name_data.push_back(endpoint_switch_port_number.get_name_leafdata());
    if (endpoint_chassis_serial_number.is_set || is_set(endpoint_chassis_serial_number.yfilter)) leaf_name_data.push_back(endpoint_chassis_serial_number.get_name_leafdata());
    if (mlap_state.is_set || is_set(mlap_state.yfilter)) leaf_name_data.push_back(mlap_state.get_name_leafdata());
    if (inter_fcc_sw_port.is_set || is_set(inter_fcc_sw_port.yfilter)) leaf_name_data.push_back(inter_fcc_sw_port.get_name_leafdata());
    if (fcc_sw_indirectly_reachable.is_set || is_set(fcc_sw_indirectly_reachable.yfilter)) leaf_name_data.push_back(fcc_sw_indirectly_reachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-type")
    {
        chassis_type = value;
        chassis_type.value_namespace = name_space;
        chassis_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-type")
    {
        endpoint_type = value;
        endpoint_type.value_namespace = name_space;
        endpoint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-slot-number")
    {
        endpoint_slot_number = value;
        endpoint_slot_number.value_namespace = name_space;
        endpoint_slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-switch-number")
    {
        endpoint_switch_number = value;
        endpoint_switch_number.value_namespace = name_space;
        endpoint_switch_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-switch-port-number")
    {
        endpoint_switch_port_number = value;
        endpoint_switch_port_number.value_namespace = name_space;
        endpoint_switch_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-chassis-serial-number")
    {
        endpoint_chassis_serial_number = value;
        endpoint_chassis_serial_number.value_namespace = name_space;
        endpoint_chassis_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-state")
    {
        mlap_state = value;
        mlap_state.value_namespace = name_space;
        mlap_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-fcc_sw-port")
    {
        inter_fcc_sw_port = value;
        inter_fcc_sw_port.value_namespace = name_space;
        inter_fcc_sw_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcc_sw-indirectly-reachable")
    {
        fcc_sw_indirectly_reachable = value;
        fcc_sw_indirectly_reachable.value_namespace = name_space;
        fcc_sw_indirectly_reachable.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "chassis-type")
    {
        chassis_type.yfilter = yfilter;
    }
    if(value_path == "endpoint-type")
    {
        endpoint_type.yfilter = yfilter;
    }
    if(value_path == "endpoint-slot-number")
    {
        endpoint_slot_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-switch-number")
    {
        endpoint_switch_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-switch-port-number")
    {
        endpoint_switch_port_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-chassis-serial-number")
    {
        endpoint_chassis_serial_number.yfilter = yfilter;
    }
    if(value_path == "mlap-state")
    {
        mlap_state.yfilter = yfilter;
    }
    if(value_path == "inter-fcc_sw-port")
    {
        inter_fcc_sw_port.yfilter = yfilter;
    }
    if(value_path == "fcc_sw-indirectly-reachable")
    {
        fcc_sw_indirectly_reachable.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerStateInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "chassis-type" || name == "endpoint-type" || name == "endpoint-slot-number" || name == "endpoint-switch-number" || name == "endpoint-switch-port-number" || name == "endpoint-chassis-serial-number" || name == "mlap-state" || name == "inter-fcc_sw-port" || name == "fcc_sw-indirectly-reachable")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::PeerOtherLinkStateInformation()
    :
    valid{YType::boolean, "valid"},
    chassis_type{YType::enumeration, "chassis-type"},
    endpoint_type{YType::enumeration, "endpoint-type"},
    endpoint_slot_number{YType::uint32, "endpoint-slot-number"},
    endpoint_switch_number{YType::uint32, "endpoint-switch-number"},
    endpoint_switch_port_number{YType::uint32, "endpoint-switch-port-number"},
    endpoint_chassis_serial_number{YType::str, "endpoint-chassis-serial-number"},
    mlap_state{YType::enumeration, "mlap-state"},
    inter_fcc_sw_port{YType::boolean, "inter-fcc_sw-port"},
    fcc_sw_indirectly_reachable{YType::boolean, "fcc_sw-indirectly-reachable"}
{

    yang_name = "peer-other-link-state-information"; yang_parent_name = "mlap-external-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::~PeerOtherLinkStateInformation()
{
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::has_data() const
{
    if (is_presence_container) return true;
    return valid.is_set
	|| chassis_type.is_set
	|| endpoint_type.is_set
	|| endpoint_slot_number.is_set
	|| endpoint_switch_number.is_set
	|| endpoint_switch_port_number.is_set
	|| endpoint_chassis_serial_number.is_set
	|| mlap_state.is_set
	|| inter_fcc_sw_port.is_set
	|| fcc_sw_indirectly_reachable.is_set;
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(chassis_type.yfilter)
	|| ydk::is_set(endpoint_type.yfilter)
	|| ydk::is_set(endpoint_slot_number.yfilter)
	|| ydk::is_set(endpoint_switch_number.yfilter)
	|| ydk::is_set(endpoint_switch_port_number.yfilter)
	|| ydk::is_set(endpoint_chassis_serial_number.yfilter)
	|| ydk::is_set(mlap_state.yfilter)
	|| ydk::is_set(inter_fcc_sw_port.yfilter)
	|| ydk::is_set(fcc_sw_indirectly_reachable.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-other-link-state-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (chassis_type.is_set || is_set(chassis_type.yfilter)) leaf_name_data.push_back(chassis_type.get_name_leafdata());
    if (endpoint_type.is_set || is_set(endpoint_type.yfilter)) leaf_name_data.push_back(endpoint_type.get_name_leafdata());
    if (endpoint_slot_number.is_set || is_set(endpoint_slot_number.yfilter)) leaf_name_data.push_back(endpoint_slot_number.get_name_leafdata());
    if (endpoint_switch_number.is_set || is_set(endpoint_switch_number.yfilter)) leaf_name_data.push_back(endpoint_switch_number.get_name_leafdata());
    if (endpoint_switch_port_number.is_set || is_set(endpoint_switch_port_number.yfilter)) leaf_name_data.push_back(endpoint_switch_port_number.get_name_leafdata());
    if (endpoint_chassis_serial_number.is_set || is_set(endpoint_chassis_serial_number.yfilter)) leaf_name_data.push_back(endpoint_chassis_serial_number.get_name_leafdata());
    if (mlap_state.is_set || is_set(mlap_state.yfilter)) leaf_name_data.push_back(mlap_state.get_name_leafdata());
    if (inter_fcc_sw_port.is_set || is_set(inter_fcc_sw_port.yfilter)) leaf_name_data.push_back(inter_fcc_sw_port.get_name_leafdata());
    if (fcc_sw_indirectly_reachable.is_set || is_set(fcc_sw_indirectly_reachable.yfilter)) leaf_name_data.push_back(fcc_sw_indirectly_reachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-type")
    {
        chassis_type = value;
        chassis_type.value_namespace = name_space;
        chassis_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-type")
    {
        endpoint_type = value;
        endpoint_type.value_namespace = name_space;
        endpoint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-slot-number")
    {
        endpoint_slot_number = value;
        endpoint_slot_number.value_namespace = name_space;
        endpoint_slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-switch-number")
    {
        endpoint_switch_number = value;
        endpoint_switch_number.value_namespace = name_space;
        endpoint_switch_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-switch-port-number")
    {
        endpoint_switch_port_number = value;
        endpoint_switch_port_number.value_namespace = name_space;
        endpoint_switch_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endpoint-chassis-serial-number")
    {
        endpoint_chassis_serial_number = value;
        endpoint_chassis_serial_number.value_namespace = name_space;
        endpoint_chassis_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-state")
    {
        mlap_state = value;
        mlap_state.value_namespace = name_space;
        mlap_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-fcc_sw-port")
    {
        inter_fcc_sw_port = value;
        inter_fcc_sw_port.value_namespace = name_space;
        inter_fcc_sw_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcc_sw-indirectly-reachable")
    {
        fcc_sw_indirectly_reachable = value;
        fcc_sw_indirectly_reachable.value_namespace = name_space;
        fcc_sw_indirectly_reachable.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "chassis-type")
    {
        chassis_type.yfilter = yfilter;
    }
    if(value_path == "endpoint-type")
    {
        endpoint_type.yfilter = yfilter;
    }
    if(value_path == "endpoint-slot-number")
    {
        endpoint_slot_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-switch-number")
    {
        endpoint_switch_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-switch-port-number")
    {
        endpoint_switch_port_number.yfilter = yfilter;
    }
    if(value_path == "endpoint-chassis-serial-number")
    {
        endpoint_chassis_serial_number.yfilter = yfilter;
    }
    if(value_path == "mlap-state")
    {
        mlap_state.yfilter = yfilter;
    }
    if(value_path == "inter-fcc_sw-port")
    {
        inter_fcc_sw_port.yfilter = yfilter;
    }
    if(value_path == "fcc_sw-indirectly-reachable")
    {
        fcc_sw_indirectly_reachable.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Detail::Location::PortIter::MlapExternalDetails::PeerOtherLinkStateInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "chassis-type" || name == "endpoint-type" || name == "endpoint-slot-number" || name == "endpoint-switch-number" || name == "endpoint-switch-port-number" || name == "endpoint-chassis-serial-number" || name == "mlap-state" || name == "inter-fcc_sw-port" || name == "fcc_sw-indirectly-reachable")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Statistics::Statistics()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "statistics"; yang_parent_name = "mlap"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Statistics::~Statistics()
{
}

bool Controller::Switch::Oper::Mlap::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mlap::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mlap::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Statistics::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Statistics::Location::~Location()
{
}

bool Controller::Switch::Oper::Mlap::Statistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Mlap::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Statistics::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    protocol_state{YType::enumeration, "protocol-state"},
    protocol_state_changes{YType::uint32, "protocol-state-changes"},
    protocol_pkt_sent{YType::uint64, "protocol-pkt-sent"},
    protocol_pkt_recv{YType::uint64, "protocol-pkt-recv"},
    protocol_set_color_pkts_sent{YType::uint64, "protocol-set-color-pkts-sent"},
    protocol_set_color_pkts_recv{YType::uint64, "protocol-set-color-pkts-recv"},
    protocol_send_error{YType::uint64, "protocol-send-error"},
    protocol_recv_error{YType::uint64, "protocol-recv-error"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| protocol_state.is_set
	|| protocol_state_changes.is_set
	|| protocol_pkt_sent.is_set
	|| protocol_pkt_recv.is_set
	|| protocol_set_color_pkts_sent.is_set
	|| protocol_set_color_pkts_recv.is_set
	|| protocol_send_error.is_set
	|| protocol_recv_error.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(protocol_state.yfilter)
	|| ydk::is_set(protocol_state_changes.yfilter)
	|| ydk::is_set(protocol_pkt_sent.yfilter)
	|| ydk::is_set(protocol_pkt_recv.yfilter)
	|| ydk::is_set(protocol_set_color_pkts_sent.yfilter)
	|| ydk::is_set(protocol_set_color_pkts_recv.yfilter)
	|| ydk::is_set(protocol_send_error.yfilter)
	|| ydk::is_set(protocol_recv_error.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.yfilter)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (protocol_state_changes.is_set || is_set(protocol_state_changes.yfilter)) leaf_name_data.push_back(protocol_state_changes.get_name_leafdata());
    if (protocol_pkt_sent.is_set || is_set(protocol_pkt_sent.yfilter)) leaf_name_data.push_back(protocol_pkt_sent.get_name_leafdata());
    if (protocol_pkt_recv.is_set || is_set(protocol_pkt_recv.yfilter)) leaf_name_data.push_back(protocol_pkt_recv.get_name_leafdata());
    if (protocol_set_color_pkts_sent.is_set || is_set(protocol_set_color_pkts_sent.yfilter)) leaf_name_data.push_back(protocol_set_color_pkts_sent.get_name_leafdata());
    if (protocol_set_color_pkts_recv.is_set || is_set(protocol_set_color_pkts_recv.yfilter)) leaf_name_data.push_back(protocol_set_color_pkts_recv.get_name_leafdata());
    if (protocol_send_error.is_set || is_set(protocol_send_error.yfilter)) leaf_name_data.push_back(protocol_send_error.get_name_leafdata());
    if (protocol_recv_error.is_set || is_set(protocol_recv_error.yfilter)) leaf_name_data.push_back(protocol_recv_error.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
        protocol_state.value_namespace = name_space;
        protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state-changes")
    {
        protocol_state_changes = value;
        protocol_state_changes.value_namespace = name_space;
        protocol_state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-pkt-sent")
    {
        protocol_pkt_sent = value;
        protocol_pkt_sent.value_namespace = name_space;
        protocol_pkt_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-pkt-recv")
    {
        protocol_pkt_recv = value;
        protocol_pkt_recv.value_namespace = name_space;
        protocol_pkt_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-set-color-pkts-sent")
    {
        protocol_set_color_pkts_sent = value;
        protocol_set_color_pkts_sent.value_namespace = name_space;
        protocol_set_color_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-set-color-pkts-recv")
    {
        protocol_set_color_pkts_recv = value;
        protocol_set_color_pkts_recv.value_namespace = name_space;
        protocol_set_color_pkts_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-send-error")
    {
        protocol_send_error = value;
        protocol_send_error.value_namespace = name_space;
        protocol_send_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-recv-error")
    {
        protocol_recv_error = value;
        protocol_recv_error.value_namespace = name_space;
        protocol_recv_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "protocol-state")
    {
        protocol_state.yfilter = yfilter;
    }
    if(value_path == "protocol-state-changes")
    {
        protocol_state_changes.yfilter = yfilter;
    }
    if(value_path == "protocol-pkt-sent")
    {
        protocol_pkt_sent.yfilter = yfilter;
    }
    if(value_path == "protocol-pkt-recv")
    {
        protocol_pkt_recv.yfilter = yfilter;
    }
    if(value_path == "protocol-set-color-pkts-sent")
    {
        protocol_set_color_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "protocol-set-color-pkts-recv")
    {
        protocol_set_color_pkts_recv.yfilter = yfilter;
    }
    if(value_path == "protocol-send-error")
    {
        protocol_send_error.yfilter = yfilter;
    }
    if(value_path == "protocol-recv-error")
    {
        protocol_recv_error.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Statistics::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "protocol-state" || name == "protocol-state-changes" || name == "protocol-pkt-sent" || name == "protocol-pkt-recv" || name == "protocol-set-color-pkts-sent" || name == "protocol-set-color-pkts-recv" || name == "protocol-send-error" || name == "protocol-recv-error" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::SummaryData::SummaryData()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "summary-data"; yang_parent_name = "mlap"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::SummaryData::~SummaryData()
{
}

bool Controller::Switch::Oper::Mlap::SummaryData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mlap::SummaryData::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mlap::SummaryData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::SummaryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::SummaryData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::SummaryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::SummaryData::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::SummaryData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::SummaryData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::SummaryData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::SummaryData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::SummaryData::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"},
    serial_num{YType::str, "serial-num"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "summary-data"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::SummaryData::Location::~Location()
{
}

bool Controller::Switch::Oper::Mlap::SummaryData::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| serial_num.is_set;
}

bool Controller::Switch::Oper::Mlap::SummaryData::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| ydk::is_set(serial_num.yfilter);
}

std::string Controller::Switch::Oper::Mlap::SummaryData::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/summary-data/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::SummaryData::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::SummaryData::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());
    if (serial_num.is_set || is_set(serial_num.yfilter)) leaf_name_data.push_back(serial_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::SummaryData::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::SummaryData::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::SummaryData::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-num")
    {
        serial_num = value;
        serial_num.value_namespace = name_space;
        serial_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::SummaryData::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
    if(value_path == "serial-num")
    {
        serial_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::SummaryData::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id" || name == "serial-num")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::PortIter()
    :
    port{YType::int32, "port"},
    phys_state{YType::enumeration, "phys-state"},
    admin_state{YType::enumeration, "admin-state"},
    protocol_state{YType::enumeration, "protocol-state"},
    forwarding{YType::enumeration, "forwarding"},
    mlap_protocol{YType::enumeration, "mlap-protocol"},
    connects_to{YType::str, "connects-to"}
{

    yang_name = "port-iter"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::~PortIter()
{
}

bool Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| phys_state.is_set
	|| admin_state.is_set
	|| protocol_state.is_set
	|| forwarding.is_set
	|| mlap_protocol.is_set
	|| connects_to.is_set;
}

bool Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(phys_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(protocol_state.yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(mlap_protocol.yfilter)
	|| ydk::is_set(connects_to.yfilter);
}

std::string Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-iter";
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (phys_state.is_set || is_set(phys_state.yfilter)) leaf_name_data.push_back(phys_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (protocol_state.is_set || is_set(protocol_state.yfilter)) leaf_name_data.push_back(protocol_state.get_name_leafdata());
    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (mlap_protocol.is_set || is_set(mlap_protocol.yfilter)) leaf_name_data.push_back(mlap_protocol.get_name_leafdata());
    if (connects_to.is_set || is_set(connects_to.yfilter)) leaf_name_data.push_back(connects_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phys-state")
    {
        phys_state = value;
        phys_state.value_namespace = name_space;
        phys_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-state")
    {
        protocol_state = value;
        protocol_state.value_namespace = name_space;
        protocol_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-protocol")
    {
        mlap_protocol = value;
        mlap_protocol.value_namespace = name_space;
        mlap_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects-to")
    {
        connects_to = value;
        connects_to.value_namespace = name_space;
        connects_to.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "phys-state")
    {
        phys_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "protocol-state")
    {
        protocol_state.yfilter = yfilter;
    }
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "mlap-protocol")
    {
        mlap_protocol.yfilter = yfilter;
    }
    if(value_path == "connects-to")
    {
        connects_to.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::SummaryData::Location::PortIter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "phys-state" || name == "admin-state" || name == "protocol-state" || name == "forwarding" || name == "mlap-protocol" || name == "connects-to")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Debug::Debug()
    :
    counters(std::make_shared<Controller::Switch::Oper::Mlap::Debug::Counters>())
{
    counters->parent = this;

    yang_name = "debug"; yang_parent_name = "mlap"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Debug::~Debug()
{
}

bool Controller::Switch::Oper::Mlap::Debug::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::Mlap::Debug::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::Mlap::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::Mlap::Debug::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Debug::Counters::Counters()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "counters"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Debug::Counters::~Counters()
{
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Mlap::Debug::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Debug::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Debug::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Debug::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Debug::Counters::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Debug::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Debug::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Mlap::Debug::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Debug::Counters::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    counters(std::make_shared<Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_>())
{
    counters->parent = this;

    yang_name = "location"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Debug::Counters::Location::~Location()
{
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::Mlap::Debug::Counters::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/debug/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Debug::Counters::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Debug::Counters::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Debug::Counters::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Debug::Counters::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Debug::Counters::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Debug::Counters::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::Counters_()
    :
    eval_all_links_called{YType::uint64, "eval-all-links-called"},
    timer_event_queued{YType::uint64, "timer-event-queued"},
    rx_packet_event_queued{YType::uint64, "rx-packet-event-queued"},
    eval_all_links_queued{YType::uint64, "eval-all-links-queued"},
    link_status_queued{YType::uint64, "link-status-queued"},
    admin_status_queued{YType::uint64, "admin-status-queued"},
    fwd_status_queued{YType::uint64, "fwd-status-queued"},
    current_fifo_depth{YType::uint64, "current-fifo-depth"},
    max_fifo_depth{YType::uint64, "max-fifo-depth"},
    vlan_color_changes{YType::uint32, "vlan-color-changes"},
    current_mlap_timeout_ms_interval{YType::uint32, "current-mlap-timeout-ms-interval"},
    aging_debug_enabled{YType::boolean, "aging-debug-enabled"},
    trace_verbosity{YType::enumeration, "trace-verbosity"}
{

    yang_name = "counters"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::~Counters_()
{
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::has_data() const
{
    if (is_presence_container) return true;
    return eval_all_links_called.is_set
	|| timer_event_queued.is_set
	|| rx_packet_event_queued.is_set
	|| eval_all_links_queued.is_set
	|| link_status_queued.is_set
	|| admin_status_queued.is_set
	|| fwd_status_queued.is_set
	|| current_fifo_depth.is_set
	|| max_fifo_depth.is_set
	|| vlan_color_changes.is_set
	|| current_mlap_timeout_ms_interval.is_set
	|| aging_debug_enabled.is_set
	|| trace_verbosity.is_set;
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eval_all_links_called.yfilter)
	|| ydk::is_set(timer_event_queued.yfilter)
	|| ydk::is_set(rx_packet_event_queued.yfilter)
	|| ydk::is_set(eval_all_links_queued.yfilter)
	|| ydk::is_set(link_status_queued.yfilter)
	|| ydk::is_set(admin_status_queued.yfilter)
	|| ydk::is_set(fwd_status_queued.yfilter)
	|| ydk::is_set(current_fifo_depth.yfilter)
	|| ydk::is_set(max_fifo_depth.yfilter)
	|| ydk::is_set(vlan_color_changes.yfilter)
	|| ydk::is_set(current_mlap_timeout_ms_interval.yfilter)
	|| ydk::is_set(aging_debug_enabled.yfilter)
	|| ydk::is_set(trace_verbosity.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eval_all_links_called.is_set || is_set(eval_all_links_called.yfilter)) leaf_name_data.push_back(eval_all_links_called.get_name_leafdata());
    if (timer_event_queued.is_set || is_set(timer_event_queued.yfilter)) leaf_name_data.push_back(timer_event_queued.get_name_leafdata());
    if (rx_packet_event_queued.is_set || is_set(rx_packet_event_queued.yfilter)) leaf_name_data.push_back(rx_packet_event_queued.get_name_leafdata());
    if (eval_all_links_queued.is_set || is_set(eval_all_links_queued.yfilter)) leaf_name_data.push_back(eval_all_links_queued.get_name_leafdata());
    if (link_status_queued.is_set || is_set(link_status_queued.yfilter)) leaf_name_data.push_back(link_status_queued.get_name_leafdata());
    if (admin_status_queued.is_set || is_set(admin_status_queued.yfilter)) leaf_name_data.push_back(admin_status_queued.get_name_leafdata());
    if (fwd_status_queued.is_set || is_set(fwd_status_queued.yfilter)) leaf_name_data.push_back(fwd_status_queued.get_name_leafdata());
    if (current_fifo_depth.is_set || is_set(current_fifo_depth.yfilter)) leaf_name_data.push_back(current_fifo_depth.get_name_leafdata());
    if (max_fifo_depth.is_set || is_set(max_fifo_depth.yfilter)) leaf_name_data.push_back(max_fifo_depth.get_name_leafdata());
    if (vlan_color_changes.is_set || is_set(vlan_color_changes.yfilter)) leaf_name_data.push_back(vlan_color_changes.get_name_leafdata());
    if (current_mlap_timeout_ms_interval.is_set || is_set(current_mlap_timeout_ms_interval.yfilter)) leaf_name_data.push_back(current_mlap_timeout_ms_interval.get_name_leafdata());
    if (aging_debug_enabled.is_set || is_set(aging_debug_enabled.yfilter)) leaf_name_data.push_back(aging_debug_enabled.get_name_leafdata());
    if (trace_verbosity.is_set || is_set(trace_verbosity.yfilter)) leaf_name_data.push_back(trace_verbosity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eval-all-links-called")
    {
        eval_all_links_called = value;
        eval_all_links_called.value_namespace = name_space;
        eval_all_links_called.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-event-queued")
    {
        timer_event_queued = value;
        timer_event_queued.value_namespace = name_space;
        timer_event_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packet-event-queued")
    {
        rx_packet_event_queued = value;
        rx_packet_event_queued.value_namespace = name_space;
        rx_packet_event_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eval-all-links-queued")
    {
        eval_all_links_queued = value;
        eval_all_links_queued.value_namespace = name_space;
        eval_all_links_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status-queued")
    {
        link_status_queued = value;
        link_status_queued.value_namespace = name_space;
        link_status_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status-queued")
    {
        admin_status_queued = value;
        admin_status_queued.value_namespace = name_space;
        admin_status_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-status-queued")
    {
        fwd_status_queued = value;
        fwd_status_queued.value_namespace = name_space;
        fwd_status_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-fifo-depth")
    {
        current_fifo_depth = value;
        current_fifo_depth.value_namespace = name_space;
        current_fifo_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-fifo-depth")
    {
        max_fifo_depth = value;
        max_fifo_depth.value_namespace = name_space;
        max_fifo_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-color-changes")
    {
        vlan_color_changes = value;
        vlan_color_changes.value_namespace = name_space;
        vlan_color_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-mlap-timeout-ms-interval")
    {
        current_mlap_timeout_ms_interval = value;
        current_mlap_timeout_ms_interval.value_namespace = name_space;
        current_mlap_timeout_ms_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aging-debug-enabled")
    {
        aging_debug_enabled = value;
        aging_debug_enabled.value_namespace = name_space;
        aging_debug_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trace-verbosity")
    {
        trace_verbosity = value;
        trace_verbosity.value_namespace = name_space;
        trace_verbosity.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eval-all-links-called")
    {
        eval_all_links_called.yfilter = yfilter;
    }
    if(value_path == "timer-event-queued")
    {
        timer_event_queued.yfilter = yfilter;
    }
    if(value_path == "rx-packet-event-queued")
    {
        rx_packet_event_queued.yfilter = yfilter;
    }
    if(value_path == "eval-all-links-queued")
    {
        eval_all_links_queued.yfilter = yfilter;
    }
    if(value_path == "link-status-queued")
    {
        link_status_queued.yfilter = yfilter;
    }
    if(value_path == "admin-status-queued")
    {
        admin_status_queued.yfilter = yfilter;
    }
    if(value_path == "fwd-status-queued")
    {
        fwd_status_queued.yfilter = yfilter;
    }
    if(value_path == "current-fifo-depth")
    {
        current_fifo_depth.yfilter = yfilter;
    }
    if(value_path == "max-fifo-depth")
    {
        max_fifo_depth.yfilter = yfilter;
    }
    if(value_path == "vlan-color-changes")
    {
        vlan_color_changes.yfilter = yfilter;
    }
    if(value_path == "current-mlap-timeout-ms-interval")
    {
        current_mlap_timeout_ms_interval.yfilter = yfilter;
    }
    if(value_path == "aging-debug-enabled")
    {
        aging_debug_enabled.yfilter = yfilter;
    }
    if(value_path == "trace-verbosity")
    {
        trace_verbosity.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Debug::Counters::Location::Counters_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eval-all-links-called" || name == "timer-event-queued" || name == "rx-packet-event-queued" || name == "eval-all-links-queued" || name == "link-status-queued" || name == "admin-status-queued" || name == "fwd-status-queued" || name == "current-fifo-depth" || name == "max-fifo-depth" || name == "vlan-color-changes" || name == "current-mlap-timeout-ms-interval" || name == "aging-debug-enabled" || name == "trace-verbosity")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "mlap"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Mlap::Trace::~Trace()
{
}

bool Controller::Switch::Oper::Mlap::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::Mlap::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mlap/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Mlap::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Trace::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::Mlap::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::Mlap::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : all_options.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace_blocks.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Mlap::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::SwitchDebugCont()
    :
    debug(std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug>())
{
    debug->parent = this;

    yang_name = "switch-debug-cont"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::SwitchDebugCont::~SwitchDebugCont()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::has_data() const
{
    if (is_presence_container) return true;
    return (debug !=  nullptr && debug->has_data());
}

bool Controller::Switch::Oper::SwitchDebugCont::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation());
}

std::string Controller::Switch::Oper::SwitchDebugCont::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-debug-cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug>();
        }
        return debug;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::SwitchDebugCont::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::SwitchDebugCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Debug()
    :
    counters(std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters>())
{
    counters->parent = this;

    yang_name = "debug"; yang_parent_name = "switch-debug-cont"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::SwitchDebugCont::Debug::~Debug()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::has_data() const
{
    if (is_presence_container) return true;
    return (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/switch-debug-cont/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Counters()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "counters"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::~Counters()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/switch-debug-cont/debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    counters(std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_>())
{
    counters->parent = this;

    yang_name = "location"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::~Location()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/switch-debug-cont/debug/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::Counters_()
    :
    phy_polling_enabled{YType::boolean, "phy-polling-enabled"},
    tx_thread_wdog_cnt{YType::uint64, "tx-thread-wdog-cnt"},
    rx_thread_wdog_cnt{YType::uint64, "rx-thread-wdog-cnt"},
    task_lock_longest_wait_time{YType::uint64, "task-lock-longest-wait-time"},
    task_lock_longest_wait_event{YType::uint32, "task-lock-longest-wait-event"},
    task_lock_longest_held_time{YType::uint64, "task-lock-longest-held-time"},
    task_lock_longest_held_event{YType::uint32, "task-lock-longest-held-event"},
    task_unlock_longest_wait_time{YType::uint64, "task-unlock-longest-wait-time"},
    task_unlock_longest_wait_event{YType::uint32, "task-unlock-longest-wait-event"},
    dma_max_rx_dequeued_per_int{YType::uint64, "dma-max-rx-dequeued-per-int"},
    dma_rx_packets_dequeued{YType::uint64, "dma-rx-packets-dequeued"},
    dma_rx_packet_dequeue_errors{YType::uint64, "dma-rx-packet-dequeue-errors"},
    dma_tx_packets_queued{YType::uint64, "dma-tx-packets-queued"},
    dma_tx_packets_completed{YType::uint64, "dma-tx-packets-completed"},
    dma_tx_packet_no_msg_errors{YType::uint64, "dma-tx-packet-no-msg-errors"},
    dma_tx_packet_msg_too_big_errors{YType::uint64, "dma-tx-packet-msg-too-big-errors"},
    dma_tx_packet_no_buffer_errors{YType::uint64, "dma-tx-packet-no-buffer-errors"},
    dma_tx_packet_queue_errors{YType::uint64, "dma-tx-packet-queue-errors"},
    dma_tx_packet_completion_errors{YType::uint64, "dma-tx-packet-completion-errors"},
    dma_max_tx_freed_per_int{YType::uint64, "dma-max-tx-freed-per-int"},
    dma_tx_buf_alloc_count{YType::uint64, "dma-tx-buf-alloc-count"},
    dma_tx_buf_free_count{YType::uint64, "dma-tx-buf-free-count"}
        ,
    switch_core(this, {"core"})
{

    yang_name = "counters"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::~Counters_()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<switch_core.len(); index++)
    {
        if(switch_core[index]->has_data())
            return true;
    }
    return phy_polling_enabled.is_set
	|| tx_thread_wdog_cnt.is_set
	|| rx_thread_wdog_cnt.is_set
	|| task_lock_longest_wait_time.is_set
	|| task_lock_longest_wait_event.is_set
	|| task_lock_longest_held_time.is_set
	|| task_lock_longest_held_event.is_set
	|| task_unlock_longest_wait_time.is_set
	|| task_unlock_longest_wait_event.is_set
	|| dma_max_rx_dequeued_per_int.is_set
	|| dma_rx_packets_dequeued.is_set
	|| dma_rx_packet_dequeue_errors.is_set
	|| dma_tx_packets_queued.is_set
	|| dma_tx_packets_completed.is_set
	|| dma_tx_packet_no_msg_errors.is_set
	|| dma_tx_packet_msg_too_big_errors.is_set
	|| dma_tx_packet_no_buffer_errors.is_set
	|| dma_tx_packet_queue_errors.is_set
	|| dma_tx_packet_completion_errors.is_set
	|| dma_max_tx_freed_per_int.is_set
	|| dma_tx_buf_alloc_count.is_set
	|| dma_tx_buf_free_count.is_set;
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::has_operation() const
{
    for (std::size_t index=0; index<switch_core.len(); index++)
    {
        if(switch_core[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(phy_polling_enabled.yfilter)
	|| ydk::is_set(tx_thread_wdog_cnt.yfilter)
	|| ydk::is_set(rx_thread_wdog_cnt.yfilter)
	|| ydk::is_set(task_lock_longest_wait_time.yfilter)
	|| ydk::is_set(task_lock_longest_wait_event.yfilter)
	|| ydk::is_set(task_lock_longest_held_time.yfilter)
	|| ydk::is_set(task_lock_longest_held_event.yfilter)
	|| ydk::is_set(task_unlock_longest_wait_time.yfilter)
	|| ydk::is_set(task_unlock_longest_wait_event.yfilter)
	|| ydk::is_set(dma_max_rx_dequeued_per_int.yfilter)
	|| ydk::is_set(dma_rx_packets_dequeued.yfilter)
	|| ydk::is_set(dma_rx_packet_dequeue_errors.yfilter)
	|| ydk::is_set(dma_tx_packets_queued.yfilter)
	|| ydk::is_set(dma_tx_packets_completed.yfilter)
	|| ydk::is_set(dma_tx_packet_no_msg_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_msg_too_big_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_no_buffer_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_queue_errors.yfilter)
	|| ydk::is_set(dma_tx_packet_completion_errors.yfilter)
	|| ydk::is_set(dma_max_tx_freed_per_int.yfilter)
	|| ydk::is_set(dma_tx_buf_alloc_count.yfilter)
	|| ydk::is_set(dma_tx_buf_free_count.yfilter);
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phy_polling_enabled.is_set || is_set(phy_polling_enabled.yfilter)) leaf_name_data.push_back(phy_polling_enabled.get_name_leafdata());
    if (tx_thread_wdog_cnt.is_set || is_set(tx_thread_wdog_cnt.yfilter)) leaf_name_data.push_back(tx_thread_wdog_cnt.get_name_leafdata());
    if (rx_thread_wdog_cnt.is_set || is_set(rx_thread_wdog_cnt.yfilter)) leaf_name_data.push_back(rx_thread_wdog_cnt.get_name_leafdata());
    if (task_lock_longest_wait_time.is_set || is_set(task_lock_longest_wait_time.yfilter)) leaf_name_data.push_back(task_lock_longest_wait_time.get_name_leafdata());
    if (task_lock_longest_wait_event.is_set || is_set(task_lock_longest_wait_event.yfilter)) leaf_name_data.push_back(task_lock_longest_wait_event.get_name_leafdata());
    if (task_lock_longest_held_time.is_set || is_set(task_lock_longest_held_time.yfilter)) leaf_name_data.push_back(task_lock_longest_held_time.get_name_leafdata());
    if (task_lock_longest_held_event.is_set || is_set(task_lock_longest_held_event.yfilter)) leaf_name_data.push_back(task_lock_longest_held_event.get_name_leafdata());
    if (task_unlock_longest_wait_time.is_set || is_set(task_unlock_longest_wait_time.yfilter)) leaf_name_data.push_back(task_unlock_longest_wait_time.get_name_leafdata());
    if (task_unlock_longest_wait_event.is_set || is_set(task_unlock_longest_wait_event.yfilter)) leaf_name_data.push_back(task_unlock_longest_wait_event.get_name_leafdata());
    if (dma_max_rx_dequeued_per_int.is_set || is_set(dma_max_rx_dequeued_per_int.yfilter)) leaf_name_data.push_back(dma_max_rx_dequeued_per_int.get_name_leafdata());
    if (dma_rx_packets_dequeued.is_set || is_set(dma_rx_packets_dequeued.yfilter)) leaf_name_data.push_back(dma_rx_packets_dequeued.get_name_leafdata());
    if (dma_rx_packet_dequeue_errors.is_set || is_set(dma_rx_packet_dequeue_errors.yfilter)) leaf_name_data.push_back(dma_rx_packet_dequeue_errors.get_name_leafdata());
    if (dma_tx_packets_queued.is_set || is_set(dma_tx_packets_queued.yfilter)) leaf_name_data.push_back(dma_tx_packets_queued.get_name_leafdata());
    if (dma_tx_packets_completed.is_set || is_set(dma_tx_packets_completed.yfilter)) leaf_name_data.push_back(dma_tx_packets_completed.get_name_leafdata());
    if (dma_tx_packet_no_msg_errors.is_set || is_set(dma_tx_packet_no_msg_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_no_msg_errors.get_name_leafdata());
    if (dma_tx_packet_msg_too_big_errors.is_set || is_set(dma_tx_packet_msg_too_big_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_msg_too_big_errors.get_name_leafdata());
    if (dma_tx_packet_no_buffer_errors.is_set || is_set(dma_tx_packet_no_buffer_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_no_buffer_errors.get_name_leafdata());
    if (dma_tx_packet_queue_errors.is_set || is_set(dma_tx_packet_queue_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_queue_errors.get_name_leafdata());
    if (dma_tx_packet_completion_errors.is_set || is_set(dma_tx_packet_completion_errors.yfilter)) leaf_name_data.push_back(dma_tx_packet_completion_errors.get_name_leafdata());
    if (dma_max_tx_freed_per_int.is_set || is_set(dma_max_tx_freed_per_int.yfilter)) leaf_name_data.push_back(dma_max_tx_freed_per_int.get_name_leafdata());
    if (dma_tx_buf_alloc_count.is_set || is_set(dma_tx_buf_alloc_count.yfilter)) leaf_name_data.push_back(dma_tx_buf_alloc_count.get_name_leafdata());
    if (dma_tx_buf_free_count.is_set || is_set(dma_tx_buf_free_count.yfilter)) leaf_name_data.push_back(dma_tx_buf_free_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-core")
    {
        auto c = std::make_shared<Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore>();
        c->parent = this;
        switch_core.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : switch_core.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phy-polling-enabled")
    {
        phy_polling_enabled = value;
        phy_polling_enabled.value_namespace = name_space;
        phy_polling_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-thread-wdog-cnt")
    {
        tx_thread_wdog_cnt = value;
        tx_thread_wdog_cnt.value_namespace = name_space;
        tx_thread_wdog_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-thread-wdog-cnt")
    {
        rx_thread_wdog_cnt = value;
        rx_thread_wdog_cnt.value_namespace = name_space;
        rx_thread_wdog_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-wait-time")
    {
        task_lock_longest_wait_time = value;
        task_lock_longest_wait_time.value_namespace = name_space;
        task_lock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-wait-event")
    {
        task_lock_longest_wait_event = value;
        task_lock_longest_wait_event.value_namespace = name_space;
        task_lock_longest_wait_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-held-time")
    {
        task_lock_longest_held_time = value;
        task_lock_longest_held_time.value_namespace = name_space;
        task_lock_longest_held_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-lock-longest-held-event")
    {
        task_lock_longest_held_event = value;
        task_lock_longest_held_event.value_namespace = name_space;
        task_lock_longest_held_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-unlock-longest-wait-time")
    {
        task_unlock_longest_wait_time = value;
        task_unlock_longest_wait_time.value_namespace = name_space;
        task_unlock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "task-unlock-longest-wait-event")
    {
        task_unlock_longest_wait_event = value;
        task_unlock_longest_wait_event.value_namespace = name_space;
        task_unlock_longest_wait_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-max-rx-dequeued-per-int")
    {
        dma_max_rx_dequeued_per_int = value;
        dma_max_rx_dequeued_per_int.value_namespace = name_space;
        dma_max_rx_dequeued_per_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-rx-packets-dequeued")
    {
        dma_rx_packets_dequeued = value;
        dma_rx_packets_dequeued.value_namespace = name_space;
        dma_rx_packets_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-rx-packet-dequeue-errors")
    {
        dma_rx_packet_dequeue_errors = value;
        dma_rx_packet_dequeue_errors.value_namespace = name_space;
        dma_rx_packet_dequeue_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packets-queued")
    {
        dma_tx_packets_queued = value;
        dma_tx_packets_queued.value_namespace = name_space;
        dma_tx_packets_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packets-completed")
    {
        dma_tx_packets_completed = value;
        dma_tx_packets_completed.value_namespace = name_space;
        dma_tx_packets_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-no-msg-errors")
    {
        dma_tx_packet_no_msg_errors = value;
        dma_tx_packet_no_msg_errors.value_namespace = name_space;
        dma_tx_packet_no_msg_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-msg-too-big-errors")
    {
        dma_tx_packet_msg_too_big_errors = value;
        dma_tx_packet_msg_too_big_errors.value_namespace = name_space;
        dma_tx_packet_msg_too_big_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-no-buffer-errors")
    {
        dma_tx_packet_no_buffer_errors = value;
        dma_tx_packet_no_buffer_errors.value_namespace = name_space;
        dma_tx_packet_no_buffer_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-queue-errors")
    {
        dma_tx_packet_queue_errors = value;
        dma_tx_packet_queue_errors.value_namespace = name_space;
        dma_tx_packet_queue_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-packet-completion-errors")
    {
        dma_tx_packet_completion_errors = value;
        dma_tx_packet_completion_errors.value_namespace = name_space;
        dma_tx_packet_completion_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-max-tx-freed-per-int")
    {
        dma_max_tx_freed_per_int = value;
        dma_max_tx_freed_per_int.value_namespace = name_space;
        dma_max_tx_freed_per_int.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-buf-alloc-count")
    {
        dma_tx_buf_alloc_count = value;
        dma_tx_buf_alloc_count.value_namespace = name_space;
        dma_tx_buf_alloc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dma-tx-buf-free-count")
    {
        dma_tx_buf_free_count = value;
        dma_tx_buf_free_count.value_namespace = name_space;
        dma_tx_buf_free_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phy-polling-enabled")
    {
        phy_polling_enabled.yfilter = yfilter;
    }
    if(value_path == "tx-thread-wdog-cnt")
    {
        tx_thread_wdog_cnt.yfilter = yfilter;
    }
    if(value_path == "rx-thread-wdog-cnt")
    {
        rx_thread_wdog_cnt.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-wait-time")
    {
        task_lock_longest_wait_time.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-wait-event")
    {
        task_lock_longest_wait_event.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-held-time")
    {
        task_lock_longest_held_time.yfilter = yfilter;
    }
    if(value_path == "task-lock-longest-held-event")
    {
        task_lock_longest_held_event.yfilter = yfilter;
    }
    if(value_path == "task-unlock-longest-wait-time")
    {
        task_unlock_longest_wait_time.yfilter = yfilter;
    }
    if(value_path == "task-unlock-longest-wait-event")
    {
        task_unlock_longest_wait_event.yfilter = yfilter;
    }
    if(value_path == "dma-max-rx-dequeued-per-int")
    {
        dma_max_rx_dequeued_per_int.yfilter = yfilter;
    }
    if(value_path == "dma-rx-packets-dequeued")
    {
        dma_rx_packets_dequeued.yfilter = yfilter;
    }
    if(value_path == "dma-rx-packet-dequeue-errors")
    {
        dma_rx_packet_dequeue_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packets-queued")
    {
        dma_tx_packets_queued.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packets-completed")
    {
        dma_tx_packets_completed.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-no-msg-errors")
    {
        dma_tx_packet_no_msg_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-msg-too-big-errors")
    {
        dma_tx_packet_msg_too_big_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-no-buffer-errors")
    {
        dma_tx_packet_no_buffer_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-queue-errors")
    {
        dma_tx_packet_queue_errors.yfilter = yfilter;
    }
    if(value_path == "dma-tx-packet-completion-errors")
    {
        dma_tx_packet_completion_errors.yfilter = yfilter;
    }
    if(value_path == "dma-max-tx-freed-per-int")
    {
        dma_max_tx_freed_per_int.yfilter = yfilter;
    }
    if(value_path == "dma-tx-buf-alloc-count")
    {
        dma_tx_buf_alloc_count.yfilter = yfilter;
    }
    if(value_path == "dma-tx-buf-free-count")
    {
        dma_tx_buf_free_count.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-core" || name == "phy-polling-enabled" || name == "tx-thread-wdog-cnt" || name == "rx-thread-wdog-cnt" || name == "task-lock-longest-wait-time" || name == "task-lock-longest-wait-event" || name == "task-lock-longest-held-time" || name == "task-lock-longest-held-event" || name == "task-unlock-longest-wait-time" || name == "task-unlock-longest-wait-event" || name == "dma-max-rx-dequeued-per-int" || name == "dma-rx-packets-dequeued" || name == "dma-rx-packet-dequeue-errors" || name == "dma-tx-packets-queued" || name == "dma-tx-packets-completed" || name == "dma-tx-packet-no-msg-errors" || name == "dma-tx-packet-msg-too-big-errors" || name == "dma-tx-packet-no-buffer-errors" || name == "dma-tx-packet-queue-errors" || name == "dma-tx-packet-completion-errors" || name == "dma-max-tx-freed-per-int" || name == "dma-tx-buf-alloc-count" || name == "dma-tx-buf-free-count")
        return true;
    return false;
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::SwitchCore()
    :
    core{YType::uint8, "core"},
    msi_count{YType::uint64, "msi-count"},
    aer_count{YType::uint64, "aer-count"},
    hp_count{YType::uint64, "hp-count"},
    wdog_count{YType::uint64, "wdog-count"},
    core_task_lock_longest_wait_time{YType::uint64, "core-task-lock-longest-wait-time"},
    core_task_lock_longest_held_time{YType::uint64, "core-task-lock-longest-held-time"},
    core_task_unlock_longest_wait_time{YType::uint64, "core-task-unlock-longest-wait-time"}
{

    yang_name = "switch-core"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::~SwitchCore()
{
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::has_data() const
{
    if (is_presence_container) return true;
    return core.is_set
	|| msi_count.is_set
	|| aer_count.is_set
	|| hp_count.is_set
	|| wdog_count.is_set
	|| core_task_lock_longest_wait_time.is_set
	|| core_task_lock_longest_held_time.is_set
	|| core_task_unlock_longest_wait_time.is_set;
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(core.yfilter)
	|| ydk::is_set(msi_count.yfilter)
	|| ydk::is_set(aer_count.yfilter)
	|| ydk::is_set(hp_count.yfilter)
	|| ydk::is_set(wdog_count.yfilter)
	|| ydk::is_set(core_task_lock_longest_wait_time.yfilter)
	|| ydk::is_set(core_task_lock_longest_held_time.yfilter)
	|| ydk::is_set(core_task_unlock_longest_wait_time.yfilter);
}

std::string Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-core";
    ADD_KEY_TOKEN(core, "core");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core.is_set || is_set(core.yfilter)) leaf_name_data.push_back(core.get_name_leafdata());
    if (msi_count.is_set || is_set(msi_count.yfilter)) leaf_name_data.push_back(msi_count.get_name_leafdata());
    if (aer_count.is_set || is_set(aer_count.yfilter)) leaf_name_data.push_back(aer_count.get_name_leafdata());
    if (hp_count.is_set || is_set(hp_count.yfilter)) leaf_name_data.push_back(hp_count.get_name_leafdata());
    if (wdog_count.is_set || is_set(wdog_count.yfilter)) leaf_name_data.push_back(wdog_count.get_name_leafdata());
    if (core_task_lock_longest_wait_time.is_set || is_set(core_task_lock_longest_wait_time.yfilter)) leaf_name_data.push_back(core_task_lock_longest_wait_time.get_name_leafdata());
    if (core_task_lock_longest_held_time.is_set || is_set(core_task_lock_longest_held_time.yfilter)) leaf_name_data.push_back(core_task_lock_longest_held_time.get_name_leafdata());
    if (core_task_unlock_longest_wait_time.is_set || is_set(core_task_unlock_longest_wait_time.yfilter)) leaf_name_data.push_back(core_task_unlock_longest_wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "core")
    {
        core = value;
        core.value_namespace = name_space;
        core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msi-count")
    {
        msi_count = value;
        msi_count.value_namespace = name_space;
        msi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aer-count")
    {
        aer_count = value;
        aer_count.value_namespace = name_space;
        aer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hp-count")
    {
        hp_count = value;
        hp_count.value_namespace = name_space;
        hp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wdog-count")
    {
        wdog_count = value;
        wdog_count.value_namespace = name_space;
        wdog_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-task-lock-longest-wait-time")
    {
        core_task_lock_longest_wait_time = value;
        core_task_lock_longest_wait_time.value_namespace = name_space;
        core_task_lock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-task-lock-longest-held-time")
    {
        core_task_lock_longest_held_time = value;
        core_task_lock_longest_held_time.value_namespace = name_space;
        core_task_lock_longest_held_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-task-unlock-longest-wait-time")
    {
        core_task_unlock_longest_wait_time = value;
        core_task_unlock_longest_wait_time.value_namespace = name_space;
        core_task_unlock_longest_wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "core")
    {
        core.yfilter = yfilter;
    }
    if(value_path == "msi-count")
    {
        msi_count.yfilter = yfilter;
    }
    if(value_path == "aer-count")
    {
        aer_count.yfilter = yfilter;
    }
    if(value_path == "hp-count")
    {
        hp_count.yfilter = yfilter;
    }
    if(value_path == "wdog-count")
    {
        wdog_count.yfilter = yfilter;
    }
    if(value_path == "core-task-lock-longest-wait-time")
    {
        core_task_lock_longest_wait_time.yfilter = yfilter;
    }
    if(value_path == "core-task-lock-longest-held-time")
    {
        core_task_lock_longest_held_time.yfilter = yfilter;
    }
    if(value_path == "core-task-unlock-longest-wait-time")
    {
        core_task_unlock_longest_wait_time.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::SwitchDebugCont::Debug::Counters::Location::Counters_::SwitchCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core" || name == "msi-count" || name == "aer-count" || name == "hp-count" || name == "wdog-count" || name == "core-task-lock-longest-wait-time" || name == "core-task-lock-longest-held-time" || name == "core-task-unlock-longest-wait-time")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Esd()
    :
    instance(this, {"process_name"})
{

    yang_name = "esd"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Esd::~Esd()
{
}

bool Controller::Switch::Oper::Esd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::Esd::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::Esd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Esd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance>();
        c->parent = this;
        instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::Esd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::Esd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Instance()
    :
    process_name{YType::str, "process_name"}
        ,
    trace(this, {"buffer"})
{

    yang_name = "instance"; yang_parent_name = "esd"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::Esd::Instance::~Instance()
{
}

bool Controller::Switch::Oper::Esd::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return process_name.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/esd/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::Esd::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(process_name, "process_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace>();
        c->parent = this;
        trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process_name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process_name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "process_name")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Esd::Instance::Trace::~Trace()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : all_options.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace_blocks.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::MgmtAgent()
    :
    esdma(std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>())
    , connections(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>())
{
    esdma->parent = this;
    connections->parent = this;

    yang_name = "mgmt-agent"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::~MgmtAgent()
{
}

bool Controller::Switch::Oper::MgmtAgent::has_data() const
{
    if (is_presence_container) return true;
    return (esdma !=  nullptr && esdma->has_data())
	|| (connections !=  nullptr && connections->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::has_operation() const
{
    return is_set(yfilter)
	|| (esdma !=  nullptr && esdma->has_operation())
	|| (connections !=  nullptr && connections->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma")
    {
        if(esdma == nullptr)
        {
            esdma = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma>();
        }
        return esdma;
    }

    if(child_yang_name == "connections")
    {
        if(connections == nullptr)
        {
            connections = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections>();
        }
        return connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esdma != nullptr)
    {
        children["esdma"] = esdma;
    }

    if(connections != nullptr)
    {
        children["connections"] = connections;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma" || name == "connections")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Esdma()
    :
    trace(this, {"buffer"})
{

    yang_name = "esdma"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::~Esdma()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace>();
        c->parent = this;
        trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::MgmtAgent::Esdma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "esdma"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::~Trace()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/esdma/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::~Location()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : all_options.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace_blocks.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::Connections()
    :
    sdr_nm_num_clients{YType::uint32, "sdr-nm-num-clients"},
    esd_client_num_clients{YType::uint32, "esd-client-num-clients"},
    mlap_client_num_clients{YType::uint32, "mlap-client-num-clients"}
        ,
    esdma_info(std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>())
    , sdr_nm_client_id(this, {})
    , esd_client_id(this, {})
    , mlap_client_id(this, {})
{
    esdma_info->parent = this;

    yang_name = "connections"; yang_parent_name = "mgmt-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::~Connections()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_nm_client_id.len(); index++)
    {
        if(sdr_nm_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.len(); index++)
    {
        if(esd_client_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.len(); index++)
    {
        if(mlap_client_id[index]->has_data())
            return true;
    }
    return sdr_nm_num_clients.is_set
	|| esd_client_num_clients.is_set
	|| mlap_client_num_clients.is_set
	|| (esdma_info !=  nullptr && esdma_info->has_data());
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_operation() const
{
    for (std::size_t index=0; index<sdr_nm_client_id.len(); index++)
    {
        if(sdr_nm_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<esd_client_id.len(); index++)
    {
        if(esd_client_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlap_client_id.len(); index++)
    {
        if(mlap_client_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_num_clients.yfilter)
	|| ydk::is_set(esd_client_num_clients.yfilter)
	|| ydk::is_set(mlap_client_num_clients.yfilter)
	|| (esdma_info !=  nullptr && esdma_info->has_operation());
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_num_clients.is_set || is_set(sdr_nm_num_clients.yfilter)) leaf_name_data.push_back(sdr_nm_num_clients.get_name_leafdata());
    if (esd_client_num_clients.is_set || is_set(esd_client_num_clients.yfilter)) leaf_name_data.push_back(esd_client_num_clients.get_name_leafdata());
    if (mlap_client_num_clients.is_set || is_set(mlap_client_num_clients.yfilter)) leaf_name_data.push_back(mlap_client_num_clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "esdma-info")
    {
        if(esdma_info == nullptr)
        {
            esdma_info = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo>();
        }
        return esdma_info;
    }

    if(child_yang_name == "sdr-nm-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId>();
        c->parent = this;
        sdr_nm_client_id.append(c);
        return c;
    }

    if(child_yang_name == "esd-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId>();
        c->parent = this;
        esd_client_id.append(c);
        return c;
    }

    if(child_yang_name == "mlap-client-id")
    {
        auto c = std::make_shared<Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId>();
        c->parent = this;
        mlap_client_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(esdma_info != nullptr)
    {
        children["esdma-info"] = esdma_info;
    }

    count = 0;
    for (auto c : sdr_nm_client_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : esd_client_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mlap_client_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients = value;
        sdr_nm_num_clients.value_namespace = name_space;
        sdr_nm_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients = value;
        esd_client_num_clients.value_namespace = name_space;
        esd_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients = value;
        mlap_client_num_clients.value_namespace = name_space;
        mlap_client_num_clients.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-num-clients")
    {
        sdr_nm_num_clients.yfilter = yfilter;
    }
    if(value_path == "esd-client-num-clients")
    {
        esd_client_num_clients.yfilter = yfilter;
    }
    if(value_path == "mlap-client-num-clients")
    {
        mlap_client_num_clients.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esdma-info" || name == "sdr-nm-client-id" || name == "esd-client-id" || name == "mlap-client-id" || name == "sdr-nm-num-clients" || name == "esd-client-num-clients" || name == "mlap-client-num-clients")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::EsdmaInfo()
    :
    active_esdma_address{YType::str, "active-esdma-address"}
{

    yang_name = "esdma-info"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::~EsdmaInfo()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_data() const
{
    if (is_presence_container) return true;
    return active_esdma_address.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_esdma_address.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esdma-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_esdma_address.is_set || is_set(active_esdma_address.yfilter)) leaf_name_data.push_back(active_esdma_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address = value;
        active_esdma_address.value_namespace = name_space;
        active_esdma_address.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-esdma-address")
    {
        active_esdma_address.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-esdma-address")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::SdrNmClientId()
    :
    sdr_nm_ip_address{YType::str, "sdr-nm-ip-address"},
    sdr_nm_port_num{YType::uint16, "sdr-nm-port-num"}
{

    yang_name = "sdr-nm-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::~SdrNmClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_data() const
{
    if (is_presence_container) return true;
    return sdr_nm_ip_address.is_set
	|| sdr_nm_port_num.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sdr_nm_ip_address.yfilter)
	|| ydk::is_set(sdr_nm_port_num.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-nm-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_nm_ip_address.is_set || is_set(sdr_nm_ip_address.yfilter)) leaf_name_data.push_back(sdr_nm_ip_address.get_name_leafdata());
    if (sdr_nm_port_num.is_set || is_set(sdr_nm_port_num.yfilter)) leaf_name_data.push_back(sdr_nm_port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address = value;
        sdr_nm_ip_address.value_namespace = name_space;
        sdr_nm_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num = value;
        sdr_nm_port_num.value_namespace = name_space;
        sdr_nm_port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr-nm-ip-address")
    {
        sdr_nm_ip_address.yfilter = yfilter;
    }
    if(value_path == "sdr-nm-port-num")
    {
        sdr_nm_port_num.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-nm-ip-address" || name == "sdr-nm-port-num")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::EsdClientId()
    :
    esd_client_ip_address{YType::str, "esd-client-ip-address"},
    esd_client_port_num{YType::uint16, "esd-client-port-num"},
    esd_client_location{YType::str, "esd-client-location"},
    esd_client_switch_info_cached{YType::enumeration, "esd-client-switch-info-cached"},
    esd_client_sdr_info_cached{YType::enumeration, "esd-client-sdr-info-cached"}
{

    yang_name = "esd-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::~EsdClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_data() const
{
    if (is_presence_container) return true;
    return esd_client_ip_address.is_set
	|| esd_client_port_num.is_set
	|| esd_client_location.is_set
	|| esd_client_switch_info_cached.is_set
	|| esd_client_sdr_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esd_client_ip_address.yfilter)
	|| ydk::is_set(esd_client_port_num.yfilter)
	|| ydk::is_set(esd_client_location.yfilter)
	|| ydk::is_set(esd_client_switch_info_cached.yfilter)
	|| ydk::is_set(esd_client_sdr_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esd-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esd_client_ip_address.is_set || is_set(esd_client_ip_address.yfilter)) leaf_name_data.push_back(esd_client_ip_address.get_name_leafdata());
    if (esd_client_port_num.is_set || is_set(esd_client_port_num.yfilter)) leaf_name_data.push_back(esd_client_port_num.get_name_leafdata());
    if (esd_client_location.is_set || is_set(esd_client_location.yfilter)) leaf_name_data.push_back(esd_client_location.get_name_leafdata());
    if (esd_client_switch_info_cached.is_set || is_set(esd_client_switch_info_cached.yfilter)) leaf_name_data.push_back(esd_client_switch_info_cached.get_name_leafdata());
    if (esd_client_sdr_info_cached.is_set || is_set(esd_client_sdr_info_cached.yfilter)) leaf_name_data.push_back(esd_client_sdr_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address = value;
        esd_client_ip_address.value_namespace = name_space;
        esd_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num = value;
        esd_client_port_num.value_namespace = name_space;
        esd_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location = value;
        esd_client_location.value_namespace = name_space;
        esd_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached = value;
        esd_client_switch_info_cached.value_namespace = name_space;
        esd_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached = value;
        esd_client_sdr_info_cached.value_namespace = name_space;
        esd_client_sdr_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esd-client-ip-address")
    {
        esd_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "esd-client-port-num")
    {
        esd_client_port_num.yfilter = yfilter;
    }
    if(value_path == "esd-client-location")
    {
        esd_client_location.yfilter = yfilter;
    }
    if(value_path == "esd-client-switch-info-cached")
    {
        esd_client_switch_info_cached.yfilter = yfilter;
    }
    if(value_path == "esd-client-sdr-info-cached")
    {
        esd_client_sdr_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esd-client-ip-address" || name == "esd-client-port-num" || name == "esd-client-location" || name == "esd-client-switch-info-cached" || name == "esd-client-sdr-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::MlapClientId()
    :
    mlap_client_ip_address{YType::str, "mlap-client-ip-address"},
    mlap_client_port_num{YType::uint16, "mlap-client-port-num"},
    mlap_client_location{YType::str, "mlap-client-location"},
    mlap_client_switch_info_cached{YType::enumeration, "mlap-client-switch-info-cached"}
{

    yang_name = "mlap-client-id"; yang_parent_name = "connections"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::~MlapClientId()
{
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_data() const
{
    if (is_presence_container) return true;
    return mlap_client_ip_address.is_set
	|| mlap_client_port_num.is_set
	|| mlap_client_location.is_set
	|| mlap_client_switch_info_cached.is_set;
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mlap_client_ip_address.yfilter)
	|| ydk::is_set(mlap_client_port_num.yfilter)
	|| ydk::is_set(mlap_client_location.yfilter)
	|| ydk::is_set(mlap_client_switch_info_cached.yfilter);
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/mgmt-agent/connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap-client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mlap_client_ip_address.is_set || is_set(mlap_client_ip_address.yfilter)) leaf_name_data.push_back(mlap_client_ip_address.get_name_leafdata());
    if (mlap_client_port_num.is_set || is_set(mlap_client_port_num.yfilter)) leaf_name_data.push_back(mlap_client_port_num.get_name_leafdata());
    if (mlap_client_location.is_set || is_set(mlap_client_location.yfilter)) leaf_name_data.push_back(mlap_client_location.get_name_leafdata());
    if (mlap_client_switch_info_cached.is_set || is_set(mlap_client_switch_info_cached.yfilter)) leaf_name_data.push_back(mlap_client_switch_info_cached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address = value;
        mlap_client_ip_address.value_namespace = name_space;
        mlap_client_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num = value;
        mlap_client_port_num.value_namespace = name_space;
        mlap_client_port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location = value;
        mlap_client_location.value_namespace = name_space;
        mlap_client_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached = value;
        mlap_client_switch_info_cached.value_namespace = name_space;
        mlap_client_switch_info_cached.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mlap-client-ip-address")
    {
        mlap_client_ip_address.yfilter = yfilter;
    }
    if(value_path == "mlap-client-port-num")
    {
        mlap_client_port_num.yfilter = yfilter;
    }
    if(value_path == "mlap-client-location")
    {
        mlap_client_location.yfilter = yfilter;
    }
    if(value_path == "mlap-client-switch-info-cached")
    {
        mlap_client_switch_info_cached.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlap-client-ip-address" || name == "mlap-client-port-num" || name == "mlap-client-location" || name == "mlap-client-switch-info-cached")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::PortState()
    :
    location(this, {"rack", "card", "switch_id"})
{

    yang_name = "port-state"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::PortState::~PortState()
{
}

bool Controller::Switch::Oper::PortState::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Switch::Oper::PortState::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Switch::Oper::PortState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Controller::Switch::Oper::PortState::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::PortState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Switch::Oper::PortState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Switch::Oper::PortState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::Switch::Oper::PortState::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
        ,
    port_iter(this, {"port"})
{

    yang_name = "location"; yang_parent_name = "port-state"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Switch::Oper::PortState::Location::~Location()
{
}

bool Controller::Switch::Oper::PortState::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_data())
            return true;
    }
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Controller::Switch::Oper::PortState::Location::has_operation() const
{
    for (std::size_t index=0; index<port_iter.len(); index++)
    {
        if(port_iter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Controller::Switch::Oper::PortState::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers:controller/switch/oper/port-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Switch::Oper::PortState::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(rack, "rack");
    ADD_KEY_TOKEN(card, "card");
    ADD_KEY_TOKEN(switch_id, "switch-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Switch::Oper::PortState::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Controller::Switch::Oper::PortState::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-iter")
    {
        auto c = std::make_shared<Controller::Switch::Oper::PortState::Location::PortIter>();
        c->parent = this;
        port_iter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Controller::Switch::Oper::PortState::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_iter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Controller::Switch::Oper::PortState::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Switch::Oper::PortState::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Controller::Switch::Oper::PortState::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-iter" || name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}


}
}

