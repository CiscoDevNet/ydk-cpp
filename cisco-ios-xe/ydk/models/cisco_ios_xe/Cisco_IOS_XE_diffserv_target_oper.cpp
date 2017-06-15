
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_diffserv_target_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_diffserv_target_oper {

DirectionIdentity::DirectionIdentity()
     : Identity("Cisco-IOS-XE-diffserv-target-oper:direction")
{
}

DirectionIdentity::~DirectionIdentity()
{
}

DiffservInterfacesState::DiffservInterfacesState()
{
    yang_name = "diffserv-interfaces-state"; yang_parent_name = "Cisco-IOS-XE-diffserv-target-oper";
}

DiffservInterfacesState::~DiffservInterfacesState()
{
}

bool DiffservInterfacesState::has_data() const
{
    for (std::size_t index=0; index<diffserv_interface_.size(); index++)
    {
        if(diffserv_interface_[index]->has_data())
            return true;
    }
    return false;
}

bool DiffservInterfacesState::has_operation() const
{
    for (std::size_t index=0; index<diffserv_interface_.size(); index++)
    {
        if(diffserv_interface_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DiffservInterfacesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-diffserv-target-oper:diffserv-interfaces-state";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DiffservInterfacesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-interface")
    {
        for(auto const & c : diffserv_interface_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservInterfacesState::DiffservInterface>();
        c->parent = this;
        diffserv_interface_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_interface_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservInterfacesState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DiffservInterfacesState::clone_ptr() const
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

DiffservInterfacesState::DiffservInterface::DiffservInterface()
    :
    name{YType::str, "name"}
{
    yang_name = "diffserv-interface"; yang_parent_name = "diffserv-interfaces-state";
}

DiffservInterfacesState::DiffservInterface::~DiffservInterface()
{
}

bool DiffservInterfacesState::DiffservInterface::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_entry_.size(); index++)
    {
        if(diffserv_target_entry_[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool DiffservInterfacesState::DiffservInterface::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_entry_.size(); index++)
    {
        if(diffserv_target_entry_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string DiffservInterfacesState::DiffservInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::DiffservInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-diffserv-target-oper:diffserv-interfaces-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservInterfacesState::DiffservInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-entry")
    {
        for(auto const & c : diffserv_target_entry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry>();
        c->parent = this;
        diffserv_target_entry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::DiffservInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_target_entry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservInterfacesState::DiffservInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetEntry()
    :
    direction{YType::identityref, "direction"},
    policy_name{YType::str, "policy-name"}
{
    yang_name = "diffserv-target-entry"; yang_parent_name = "diffserv-interface";
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::~DiffservTargetEntry()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::has_data() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_statistics_.size(); index++)
    {
        if(diffserv_target_classifier_statistics_[index]->has_data())
            return true;
    }
    return direction.is_set
	|| policy_name.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::has_operation() const
{
    for (std::size_t index=0; index<diffserv_target_classifier_statistics_.size(); index++)
    {
        if(diffserv_target_classifier_statistics_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(policy_name.operation);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-entry" <<"[direction='" <<direction <<"']" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetEntry' in Cisco_IOS_XE_diffserv_target_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diffserv-target-classifier-statistics")
    {
        for(auto const & c : diffserv_target_classifier_statistics_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics>();
        c->parent = this;
        diffserv_target_classifier_statistics_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : diffserv_target_classifier_statistics_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::DiffservTargetClassifierStatistics()
    :
    classifier_entry_name{YType::str, "classifier-entry-name"},
    parent_path{YType::str, "parent-path"}
    	,
    classifier_entry_statistics_(std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>())
	,queuing_statistics_(std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>())
{
    classifier_entry_statistics_->parent = this;

    queuing_statistics_->parent = this;

    yang_name = "diffserv-target-classifier-statistics"; yang_parent_name = "diffserv-target-entry";
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::~DiffservTargetClassifierStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_data() const
{
    for (std::size_t index=0; index<meter_statistics_.size(); index++)
    {
        if(meter_statistics_[index]->has_data())
            return true;
    }
    return classifier_entry_name.is_set
	|| parent_path.is_set
	|| (classifier_entry_statistics_ !=  nullptr && classifier_entry_statistics_->has_data())
	|| (queuing_statistics_ !=  nullptr && queuing_statistics_->has_data());
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::has_operation() const
{
    for (std::size_t index=0; index<meter_statistics_.size(); index++)
    {
        if(meter_statistics_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(classifier_entry_name.operation)
	|| is_set(parent_path.operation)
	|| (classifier_entry_statistics_ !=  nullptr && classifier_entry_statistics_->has_operation())
	|| (queuing_statistics_ !=  nullptr && queuing_statistics_->has_operation());
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diffserv-target-classifier-statistics" <<"[classifier-entry-name='" <<classifier_entry_name <<"']" <<"[parent-path='" <<parent_path <<"']";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiffservTargetClassifierStatistics' in Cisco_IOS_XE_diffserv_target_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier_entry_name.is_set || is_set(classifier_entry_name.operation)) leaf_name_data.push_back(classifier_entry_name.get_name_leafdata());
    if (parent_path.is_set || is_set(parent_path.operation)) leaf_name_data.push_back(parent_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classifier-entry-statistics")
    {
        if(classifier_entry_statistics_ == nullptr)
        {
            classifier_entry_statistics_ = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics>();
        }
        return classifier_entry_statistics_;
    }

    if(child_yang_name == "meter-statistics")
    {
        for(auto const & c : meter_statistics_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics>();
        c->parent = this;
        meter_statistics_.push_back(c);
        return c;
    }

    if(child_yang_name == "queuing-statistics")
    {
        if(queuing_statistics_ == nullptr)
        {
            queuing_statistics_ = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics>();
        }
        return queuing_statistics_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classifier_entry_statistics_ != nullptr)
    {
        children["classifier-entry-statistics"] = classifier_entry_statistics_;
    }

    for (auto const & c : meter_statistics_)
    {
        children[c->get_segment_path()] = c;
    }

    if(queuing_statistics_ != nullptr)
    {
        children["queuing-statistics"] = queuing_statistics_;
    }

    return children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classifier-entry-name")
    {
        classifier_entry_name = value;
    }
    if(value_path == "parent-path")
    {
        parent_path = value;
    }
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::ClassifierEntryStatistics()
    :
    classified_bytes{YType::uint64, "classified-bytes"},
    classified_pkts{YType::uint64, "classified-pkts"},
    classified_rate{YType::uint64, "classified-rate"}
{
    yang_name = "classifier-entry-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::~ClassifierEntryStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_data() const
{
    return classified_bytes.is_set
	|| classified_pkts.is_set
	|| classified_rate.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(classified_bytes.operation)
	|| is_set(classified_pkts.operation)
	|| is_set(classified_rate.operation);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classifier-entry-statistics";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassifierEntryStatistics' in Cisco_IOS_XE_diffserv_target_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classified_bytes.is_set || is_set(classified_bytes.operation)) leaf_name_data.push_back(classified_bytes.get_name_leafdata());
    if (classified_pkts.is_set || is_set(classified_pkts.operation)) leaf_name_data.push_back(classified_pkts.get_name_leafdata());
    if (classified_rate.is_set || is_set(classified_rate.operation)) leaf_name_data.push_back(classified_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::ClassifierEntryStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classified-bytes")
    {
        classified_bytes = value;
    }
    if(value_path == "classified-pkts")
    {
        classified_pkts = value;
    }
    if(value_path == "classified-rate")
    {
        classified_rate = value;
    }
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::MeterStatistics()
    :
    meter_id{YType::uint16, "meter-id"},
    meter_failed_bytes{YType::uint64, "meter-failed-bytes"},
    meter_failed_pkts{YType::uint64, "meter-failed-pkts"},
    meter_succeed_bytes{YType::uint64, "meter-succeed-bytes"},
    meter_succeed_pkts{YType::uint64, "meter-succeed-pkts"}
{
    yang_name = "meter-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::~MeterStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_data() const
{
    return meter_id.is_set
	|| meter_failed_bytes.is_set
	|| meter_failed_pkts.is_set
	|| meter_succeed_bytes.is_set
	|| meter_succeed_pkts.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(meter_id.operation)
	|| is_set(meter_failed_bytes.operation)
	|| is_set(meter_failed_pkts.operation)
	|| is_set(meter_succeed_bytes.operation)
	|| is_set(meter_succeed_pkts.operation);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meter-statistics" <<"[meter-id='" <<meter_id <<"']";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeterStatistics' in Cisco_IOS_XE_diffserv_target_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (meter_id.is_set || is_set(meter_id.operation)) leaf_name_data.push_back(meter_id.get_name_leafdata());
    if (meter_failed_bytes.is_set || is_set(meter_failed_bytes.operation)) leaf_name_data.push_back(meter_failed_bytes.get_name_leafdata());
    if (meter_failed_pkts.is_set || is_set(meter_failed_pkts.operation)) leaf_name_data.push_back(meter_failed_pkts.get_name_leafdata());
    if (meter_succeed_bytes.is_set || is_set(meter_succeed_bytes.operation)) leaf_name_data.push_back(meter_succeed_bytes.get_name_leafdata());
    if (meter_succeed_pkts.is_set || is_set(meter_succeed_pkts.operation)) leaf_name_data.push_back(meter_succeed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::MeterStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "meter-id")
    {
        meter_id = value;
    }
    if(value_path == "meter-failed-bytes")
    {
        meter_failed_bytes = value;
    }
    if(value_path == "meter-failed-pkts")
    {
        meter_failed_pkts = value;
    }
    if(value_path == "meter-succeed-bytes")
    {
        meter_succeed_bytes = value;
    }
    if(value_path == "meter-succeed-pkts")
    {
        meter_succeed_pkts = value;
    }
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::QueuingStatistics()
    :
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_pkts{YType::uint64, "drop-pkts"},
    output_bytes{YType::uint64, "output-bytes"},
    output_pkts{YType::uint64, "output-pkts"},
    queue_size_bytes{YType::uint64, "queue-size-bytes"},
    queue_size_pkts{YType::uint64, "queue-size-pkts"}
    	,
    wred_stats_(std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>())
{
    wred_stats_->parent = this;

    yang_name = "queuing-statistics"; yang_parent_name = "diffserv-target-classifier-statistics";
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::~QueuingStatistics()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_data() const
{
    return drop_bytes.is_set
	|| drop_pkts.is_set
	|| output_bytes.is_set
	|| output_pkts.is_set
	|| queue_size_bytes.is_set
	|| queue_size_pkts.is_set
	|| (wred_stats_ !=  nullptr && wred_stats_->has_data());
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_pkts.operation)
	|| is_set(output_bytes.operation)
	|| is_set(output_pkts.operation)
	|| is_set(queue_size_bytes.operation)
	|| is_set(queue_size_pkts.operation)
	|| (wred_stats_ !=  nullptr && wred_stats_->has_operation());
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-statistics";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueuingStatistics' in Cisco_IOS_XE_diffserv_target_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_pkts.is_set || is_set(drop_pkts.operation)) leaf_name_data.push_back(drop_pkts.get_name_leafdata());
    if (output_bytes.is_set || is_set(output_bytes.operation)) leaf_name_data.push_back(output_bytes.get_name_leafdata());
    if (output_pkts.is_set || is_set(output_pkts.operation)) leaf_name_data.push_back(output_pkts.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.operation)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_pkts.is_set || is_set(queue_size_pkts.operation)) leaf_name_data.push_back(queue_size_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-stats")
    {
        if(wred_stats_ == nullptr)
        {
            wred_stats_ = std::make_shared<DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats>();
        }
        return wred_stats_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wred_stats_ != nullptr)
    {
        children["wred-stats"] = wred_stats_;
    }

    return children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-pkts")
    {
        drop_pkts = value;
    }
    if(value_path == "output-bytes")
    {
        output_bytes = value;
    }
    if(value_path == "output-pkts")
    {
        output_pkts = value;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
    }
    if(value_path == "queue-size-pkts")
    {
        queue_size_pkts = value;
    }
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::WredStats()
    :
    early_drop_bytes{YType::uint64, "early-drop-bytes"},
    early_drop_pkts{YType::uint64, "early-drop-pkts"}
{
    yang_name = "wred-stats"; yang_parent_name = "queuing-statistics";
}

DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::~WredStats()
{
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_data() const
{
    return early_drop_bytes.is_set
	|| early_drop_pkts.is_set;
}

bool DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::has_operation() const
{
    return is_set(operation)
	|| is_set(early_drop_bytes.operation)
	|| is_set(early_drop_pkts.operation);
}

std::string DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats";

    return path_buffer.str();

}

const EntityPath DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStats' in Cisco_IOS_XE_diffserv_target_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (early_drop_bytes.is_set || is_set(early_drop_bytes.operation)) leaf_name_data.push_back(early_drop_bytes.get_name_leafdata());
    if (early_drop_pkts.is_set || is_set(early_drop_pkts.operation)) leaf_name_data.push_back(early_drop_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiffservInterfacesState::DiffservInterface::DiffservTargetEntry::DiffservTargetClassifierStatistics::QueuingStatistics::WredStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "early-drop-bytes")
    {
        early_drop_bytes = value;
    }
    if(value_path == "early-drop-pkts")
    {
        early_drop_pkts = value;
    }
}

InboundIdentity::InboundIdentity()
     : Identity("Cisco-IOS-XE-diffserv-target-oper:inbound")
{
}

InboundIdentity::~InboundIdentity()
{
}

OutboundIdentity::OutboundIdentity()
     : Identity("Cisco-IOS-XE-diffserv-target-oper:outbound")
{
}

OutboundIdentity::~OutboundIdentity()
{
}


}
}

