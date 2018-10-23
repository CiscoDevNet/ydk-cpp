
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_diffserv_target_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_diffserv_target_oper {

Direction::Direction()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper", "Cisco-IOS-XE-diffserv-target-oper", "Cisco-IOS-XE-diffserv-target-oper:direction")
{

}

Direction::~Direction()
{
}

DiffservInterfacesState::DiffservInterfacesState()
    :
    diffserv_interface(this, {"name"})
{

    yang_name = "diffserv-interfaces-state"; yang_parent_name = "Cisco-IOS-XE-diffserv-target-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

DiffservInterfacesState::~DiffservInterfacesState()
{
}

bool DiffservInterfacesState::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffserv_interface.len(); index++)
    {
        if(diffserv_interface[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservInterfacesState::has_operation() const
{
    for (std::size_t index=0; index<diffserv_interface.len(); index++)
    {
        if(diffserv_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DiffservInterfacesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-diffserv-target-oper:diffserv-interfaces-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-interface")
    {
        auto ent_ = std::make_shared<DiffservInterfacesState::DiffservInterface>();
        ent_->parent = this;
        diffserv_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffserv_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DiffservInterfacesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DiffservInterfacesState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::clone_ptr() const
{
    return std::make_shared<DiffservInterfacesState>();
}

std::string DiffservInterfacesState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DiffservInterfacesState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DiffservInterfacesState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DiffservInterfacesState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DiffservInterfacesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-interface")
        return true;
    return false;
}

DiffservInterfacesState::DiffservInterface::DiffservInterface()
    :
    name{YType::str, "name"}
        ,
    diffserv_target_entry(this, {"direction", "policy_name"})
{

    yang_name = "diffserv-interface"; yang_parent_name = "diffserv-interfaces-state"; is_top_level_class = false; has_list_ancestor = false; 
}

DiffservInterfacesState::DiffservInterface::~DiffservInterface()
{
}

bool DiffservInterfacesState::DiffservInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffserv_target_entry.len(); index++)
    {
        if(diffserv_target_entry[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool DiffservInterfacesState::DiffservInterface::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_entry.len(); index++)
    {
        if(diffserv_target_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string DiffservInterfacesState::DiffservInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-diffserv-target-oper:diffserv-interfaces-state/" << get_segment_path();
    return path_buffer.str();
}

std::string DiffservInterfacesState::DiffservInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::DiffservInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::DiffservInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-entry")
    {
        auto ent_ = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry>();
        ent_->parent = this;
        diffserv_target_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::DiffservInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffserv_target_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DiffservInterfacesState::DiffservInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void DiffservInterfacesState::DiffservInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool DiffservInterfacesState::DiffservInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-entry" || name == "name")
        return true;
    return false;
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"}
        ,
    diffserv_target_classifier_statistics(this, {"classifier_entry_name", "parent_path"})
{

    yang_name = "diffserv-target-entry"; yang_parent_name = "diffserv-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::~DiffservTargetEntry()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<diffserv_target_classifier_statistics.len(); index++)
    {
        if(diffserv_target_classifier_statistics[index]->has_data())
            return true;
    }
    return direction.is_set
	|| policy_name.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_statistics.len(); index++)
    {
        if(diffserv_target_classifier_statistics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-entry";
    ADD_KEY_TOKEN(direction, "direction");
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-classifier-statistics")
    {
        auto ent_ = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics>();
        ent_->parent = this;
        diffserv_target_classifier_statistics.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : diffserv_target_classifier_statistics.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diffserv-target-classifier-statistics" || name == "direction" || name == "policy-name")
        return true;
    return false;
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::DiffservTargetClassifierStatistics()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    parent_path{YType::str, "parent-path"}
        ,
    classifier_entry_statistics(std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>())
    , meter_statistics(this, {"meter_id"})
    , queuing_statistics(std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>())
{
    classifier_entry_statistics->parent = this;
    queuing_statistics->parent = this;

    yang_name = "diffserv-target-classifier-statistics"; yang_parent_name = "diffserv-target-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::~DiffservTargetClassifierStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<meter_statistics.len(); index++)
    {
        if(meter_statistics[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| parent_path.is_set
	|| (classifier_entry_statistics !=  nullptr && classifier_entry_statistics->has_data())
	|| (queuing_statistics !=  nullptr && queuing_statistics->has_data());
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_operation() const
{
    for (std::size_t index=0; index<meter_statistics.len(); index++)
    {
        if(meter_statistics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(classifier_entry_name.yfilter)
	|| ydk::is_set(parent_path.yfilter)
	|| (classifier_entry_statistics !=  nullptr && classifier_entry_statistics->has_operation())
	|| (queuing_statistics !=  nullptr && queuing_statistics->has_operation());
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-classifier-statistics";
    ADD_KEY_TOKEN(classifier_entry_name, "classifier-entry-name");
    ADD_KEY_TOKEN(parent_path, "parent-path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.yfilter)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (parent_path.is_set || is_set(parent_path.yfilter)) leaf_name_data.push_back(parent_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-entry-statistics")
    {
        if(classifier_entry_statistics == nullptr)
        {
            classifier_entry_statistics = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>();
        }
        return classifier_entry_statistics;
    }

    if(child_yang_name == "meter-statistics")
    {
        auto ent_ = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics>();
        ent_->parent = this;
        meter_statistics.append(ent_);
        return ent_;
    }

    if(child_yang_name == "queuing-statistics")
    {
        if(queuing_statistics == nullptr)
        {
            queuing_statistics = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>();
        }
        return queuing_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classifier_entry_statistics != nullptr)
    {
        _children["classifier-entry-statistics"] = classifier_entry_statistics;
    }

    count_ = 0;
    for (auto ent_ : meter_statistics.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(queuing_statistics != nullptr)
    {
        _children["queuing-statistics"] = queuing_statistics;
    }

    return _children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
        classifier_entry_name.value_namespace = name_space;
        classifier_entry_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-path")
    {
        parent_path = value;
        parent_path.value_namespace = name_space;
        parent_path.value_namespace_prefix = name_space_prefix;
    }
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name.yfilter = yfilter;
    }
    if(value_path == "parent-path")
    {
        parent_path.yfilter = yfilter;
    }
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier-entry-statistics" || name == "meter-statistics" || name == "queuing-statistics" || name == "classifier-entry-name" || name == "parent-path")
        return true;
    return false;
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::ClassifierEntryStatistics()
    :
    classified_pkts{YType::uint64, "classified-pkts"},
    classified_bytes{YType::uint64, "classified-bytes"},
    classified_rate{YType::uint64, "classified-rate"}
{

    yang_name = "classifier-entry-statistics"; yang_parent_name = "diffserv-target-classifier-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::~ClassifierEntryStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_data() const
{
    if (is_presence_container) return true;
    return classified_pkts.is_set
	|| classified_bytes.is_set
	|| classified_rate.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classified_pkts.yfilter)
	|| ydk::is_set(classified_bytes.yfilter)
	|| ydk::is_set(classified_rate.yfilter);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classified_pkts.is_set || is_set(classified_pkts.yfilter)) leaf_name_data.push_back(classified_pkts.get_name_leafdata());
    if (classified_bytes.is_set || is_set(classified_bytes.yfilter)) leaf_name_data.push_back(classified_bytes.get_name_leafdata());
    if (classified_rate.is_set || is_set(classified_rate.yfilter)) leaf_name_data.push_back(classified_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classified-pkts")
    {
        classified_pkts = value;
        classified_pkts.value_namespace = name_space;
        classified_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-bytes")
    {
        classified_bytes = value;
        classified_bytes.value_namespace = name_space;
        classified_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classified-rate")
    {
        classified_rate = value;
        classified_rate.value_namespace = name_space;
        classified_rate.value_namespace_prefix = name_space_prefix;
    }
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classified-pkts")
    {
        classified_pkts.yfilter = yfilter;
    }
    if(value_path == "classified-bytes")
    {
        classified_bytes.yfilter = yfilter;
    }
    if(value_path == "classified-rate")
    {
        classified_rate.yfilter = yfilter;
    }
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classified-pkts" || name == "classified-bytes" || name == "classified-rate")
        return true;
    return false;
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::MeterStatistics()
    :
    meter_id{YType::uint16, "meter-id"},
    meter_succeed_pkts{YType::uint64, "meter-succeed-pkts"},
    meter_succeed_bytes{YType::uint64, "meter-succeed-bytes"},
    meter_failed_pkts{YType::uint64, "meter-failed-pkts"},
    meter_failed_bytes{YType::uint64, "meter-failed-bytes"}
{

    yang_name = "meter-statistics"; yang_parent_name = "diffserv-target-classifier-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::~MeterStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_data() const
{
    if (is_presence_container) return true;
    return meter_id.is_set
	|| meter_succeed_pkts.is_set
	|| meter_succeed_bytes.is_set
	|| meter_failed_pkts.is_set
	|| meter_failed_bytes.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(meter_id.yfilter)
	|| ydk::is_set(meter_succeed_pkts.yfilter)
	|| ydk::is_set(meter_succeed_bytes.yfilter)
	|| ydk::is_set(meter_failed_pkts.yfilter)
	|| ydk::is_set(meter_failed_bytes.yfilter);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-statistics";
    ADD_KEY_TOKEN(meter_id, "meter-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.yfilter)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (meter_succeed_pkts.is_set || is_set(meter_succeed_pkts.yfilter)) leaf_name_data.push_back(meter_succeed_pkts.get_name_leafdata());
    if (meter_succeed_bytes.is_set || is_set(meter_succeed_bytes.yfilter)) leaf_name_data.push_back(meter_succeed_bytes.get_name_leafdata());
    if (meter_failed_pkts.is_set || is_set(meter_failed_pkts.yfilter)) leaf_name_data.push_back(meter_failed_pkts.get_name_leafdata());
    if (meter_failed_bytes.is_set || is_set(meter_failed_bytes.yfilter)) leaf_name_data.push_back(meter_failed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "meter-id")
    {
        meter_id = value;
        meter_id.value_namespace = name_space;
        meter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts = value;
        meter_succeed_pkts.value_namespace = name_space;
        meter_succeed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes = value;
        meter_succeed_bytes.value_namespace = name_space;
        meter_succeed_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts = value;
        meter_failed_pkts.value_namespace = name_space;
        meter_failed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes = value;
        meter_failed_bytes.value_namespace = name_space;
        meter_failed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "meter-id")
    {
        meter_id.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts.yfilter = yfilter;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes.yfilter = yfilter;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts.yfilter = yfilter;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes.yfilter = yfilter;
    }
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meter-id" || name == "meter-succeed-pkts" || name == "meter-succeed-bytes" || name == "meter-failed-pkts" || name == "meter-failed-bytes")
        return true;
    return false;
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::QueuingStatistics()
    :
    output_pkts{YType::uint64, "output-pkts"},
    output_bytes{YType::uint64, "output-bytes"},
    queue_size_pkts{YType::uint64, "queue-size-pkts"},
    queue_size_bytes{YType::uint64, "queue-size-bytes"},
    drop_pkts{YType::uint64, "drop-pkts"},
    drop_bytes{YType::uint64, "drop-bytes"}
        ,
    wred_stats(std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>())
{
    wred_stats->parent = this;

    yang_name = "queuing-statistics"; yang_parent_name = "diffserv-target-classifier-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::~QueuingStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_data() const
{
    if (is_presence_container) return true;
    return output_pkts.is_set
	|| output_bytes.is_set
	|| queue_size_pkts.is_set
	|| queue_size_bytes.is_set
	|| drop_pkts.is_set
	|| drop_bytes.is_set
	|| (wred_stats !=  nullptr && wred_stats->has_data());
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_pkts.yfilter)
	|| ydk::is_set(output_bytes.yfilter)
	|| ydk::is_set(queue_size_pkts.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(drop_pkts.yfilter)
	|| ydk::is_set(drop_bytes.yfilter)
	|| (wred_stats !=  nullptr && wred_stats->has_operation());
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_pkts.is_set || is_set(output_pkts.yfilter)) leaf_name_data.push_back(output_pkts.get_name_leafdata());
    if (output_bytes.is_set || is_set(output_bytes.yfilter)) leaf_name_data.push_back(output_bytes.get_name_leafdata());
    if (queue_size_pkts.is_set || is_set(queue_size_pkts.yfilter)) leaf_name_data.push_back(queue_size_pkts.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (drop_pkts.is_set || is_set(drop_pkts.yfilter)) leaf_name_data.push_back(drop_pkts.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.yfilter)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-stats")
    {
        if(wred_stats == nullptr)
        {
            wred_stats = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>();
        }
        return wred_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wred_stats != nullptr)
    {
        _children["wred-stats"] = wred_stats;
    }

    return _children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-pkts")
    {
        output_pkts = value;
        output_pkts.value_namespace = name_space;
        output_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bytes")
    {
        output_bytes = value;
        output_bytes.value_namespace = name_space;
        output_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts = value;
        queue_size_pkts.value_namespace = name_space;
        queue_size_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts = value;
        drop_pkts.value_namespace = name_space;
        drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
        drop_bytes.value_namespace = name_space;
        drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-pkts")
    {
        output_pkts.yfilter = yfilter;
    }
    if(value_path == "output-bytes")
    {
        output_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts.yfilter = yfilter;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes.yfilter = yfilter;
    }
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-stats" || name == "output-pkts" || name == "output-bytes" || name == "queue-size-pkts" || name == "queue-size-bytes" || name == "drop-pkts" || name == "drop-bytes")
        return true;
    return false;
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::WredStats()
    :
    early_drop_pkts{YType::uint64, "early-drop-pkts"},
    early_drop_bytes{YType::uint64, "early-drop-bytes"}
{

    yang_name = "wred-stats"; yang_parent_name = "queuing-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::~WredStats()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_data() const
{
    if (is_presence_container) return true;
    return early_drop_pkts.is_set
	|| early_drop_bytes.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(early_drop_pkts.yfilter)
	|| ydk::is_set(early_drop_bytes.yfilter);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (early_drop_pkts.is_set || is_set(early_drop_pkts.yfilter)) leaf_name_data.push_back(early_drop_pkts.get_name_leafdata());
    if (early_drop_bytes.is_set || is_set(early_drop_bytes.yfilter)) leaf_name_data.push_back(early_drop_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts = value;
        early_drop_pkts.value_namespace = name_space;
        early_drop_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes = value;
        early_drop_bytes.value_namespace = name_space;
        early_drop_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts.yfilter = yfilter;
    }
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes.yfilter = yfilter;
    }
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "early-drop-pkts" || name == "early-drop-bytes")
        return true;
    return false;
}

Inbound::Inbound()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper", "Cisco-IOS-XE-diffserv-target-oper", "Cisco-IOS-XE-diffserv-target-oper:inbound")
{

}

Inbound::~Inbound()
{
}

Outbound::Outbound()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XE-diffserv-target-oper", "Cisco-IOS-XE-diffserv-target-oper", "Cisco-IOS-XE-diffserv-target-oper:outbound")
{

}

Outbound::~Outbound()
{
}


}
}

