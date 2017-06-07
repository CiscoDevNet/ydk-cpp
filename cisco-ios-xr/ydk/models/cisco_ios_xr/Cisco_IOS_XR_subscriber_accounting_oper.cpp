
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_accounting_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_accounting_oper {

SubscriberAccounting::SubscriberAccounting()
    :
    nodes(std::make_shared<SubscriberAccounting::Nodes>())
{
    nodes->parent = this;

    yang_name = "subscriber-accounting"; yang_parent_name = "Cisco-IOS-XR-subscriber-accounting-oper";
}

SubscriberAccounting::~SubscriberAccounting()
{
}

bool SubscriberAccounting::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool SubscriberAccounting::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SubscriberAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-oper:subscriber-accounting";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SubscriberAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SubscriberAccounting::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void SubscriberAccounting::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SubscriberAccounting::clone_ptr() const
{
    return std::make_shared<SubscriberAccounting>();
}

std::string SubscriberAccounting::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberAccounting::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberAccounting::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubscriberAccounting::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "subscriber-accounting";
}

SubscriberAccounting::Nodes::~Nodes()
{
}

bool SubscriberAccounting::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberAccounting::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-accounting-oper:subscriber-accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::set_value(const std::string & value_path, std::string value)
{
}

SubscriberAccounting::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    subscriber_accounting_flow_features(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures>())
	,subscriber_accounting_session_features(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures>())
	,subscriber_accounting_summary(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary>())
{
    subscriber_accounting_flow_features->parent = this;

    subscriber_accounting_session_features->parent = this;

    subscriber_accounting_summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

SubscriberAccounting::Nodes::Node::~Node()
{
}

bool SubscriberAccounting::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (subscriber_accounting_flow_features !=  nullptr && subscriber_accounting_flow_features->has_data())
	|| (subscriber_accounting_session_features !=  nullptr && subscriber_accounting_session_features->has_data())
	|| (subscriber_accounting_summary !=  nullptr && subscriber_accounting_summary->has_data());
}

bool SubscriberAccounting::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (subscriber_accounting_flow_features !=  nullptr && subscriber_accounting_flow_features->has_operation())
	|| (subscriber_accounting_session_features !=  nullptr && subscriber_accounting_session_features->has_operation())
	|| (subscriber_accounting_summary !=  nullptr && subscriber_accounting_summary->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-accounting-oper:subscriber-accounting/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-accounting-flow-features")
    {
        if(subscriber_accounting_flow_features == nullptr)
        {
            subscriber_accounting_flow_features = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures>();
        }
        return subscriber_accounting_flow_features;
    }

    if(child_yang_name == "subscriber-accounting-session-features")
    {
        if(subscriber_accounting_session_features == nullptr)
        {
            subscriber_accounting_session_features = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures>();
        }
        return subscriber_accounting_session_features;
    }

    if(child_yang_name == "subscriber-accounting-summary")
    {
        if(subscriber_accounting_summary == nullptr)
        {
            subscriber_accounting_summary = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary>();
        }
        return subscriber_accounting_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_accounting_flow_features != nullptr)
    {
        children["subscriber-accounting-flow-features"] = subscriber_accounting_flow_features;
    }

    if(subscriber_accounting_session_features != nullptr)
    {
        children["subscriber-accounting-session-features"] = subscriber_accounting_session_features;
    }

    if(subscriber_accounting_summary != nullptr)
    {
        children["subscriber-accounting-summary"] = subscriber_accounting_summary;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeatures()
{
    yang_name = "subscriber-accounting-session-features"; yang_parent_name = "node";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::~SubscriberAccountingSessionFeatures()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::has_data() const
{
    for (std::size_t index=0; index<subscriber_accounting_session_feature.size(); index++)
    {
        if(subscriber_accounting_session_feature[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::has_operation() const
{
    for (std::size_t index=0; index<subscriber_accounting_session_feature.size(); index++)
    {
        if(subscriber_accounting_session_feature[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-session-features";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAccountingSessionFeatures' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-accounting-session-feature")
    {
        for(auto const & c : subscriber_accounting_session_feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature>();
        c->parent = this;
        subscriber_accounting_session_feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_accounting_session_feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::set_value(const std::string & value_path, std::string value)
{
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SubscriberAccountingSessionFeature()
    :
    sub_label{YType::int32, "sub-label"}
    	,
    session_feature_data(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData>())
{
    session_feature_data->parent = this;

    yang_name = "subscriber-accounting-session-feature"; yang_parent_name = "subscriber-accounting-session-features";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::~SubscriberAccountingSessionFeature()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::has_data() const
{
    return sub_label.is_set
	|| (session_feature_data !=  nullptr && session_feature_data->has_data());
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_label.operation)
	|| (session_feature_data !=  nullptr && session_feature_data->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-session-feature" <<"[sub-label='" <<sub_label <<"']";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAccountingSessionFeature' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_label.is_set || is_set(sub_label.operation)) leaf_name_data.push_back(sub_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-feature-data")
    {
        if(session_feature_data == nullptr)
        {
            session_feature_data = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData>();
        }
        return session_feature_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_feature_data != nullptr)
    {
        children["session-feature-data"] = session_feature_data;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-label")
    {
        sub_label = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::SessionFeatureData()
    :
    idle_timeout_direction{YType::str, "idle-timeout-direction"},
    idle_timeout_threshold{YType::uint32, "idle-timeout-threshold"},
    idle_timeout_value{YType::uint32, "idle-timeout-value"},
    interface_handle{YType::uint32, "interface-handle"},
    session_accounting_aaa_request_failed{YType::uint32, "session-accounting-aaa-request-failed"},
    session_accounting_aaa_trans_pending{YType::uint32, "session-accounting-aaa-trans-pending"},
    session_accounting_enabled_flag{YType::boolean, "session-accounting-enabled-flag"},
    session_accounting_method_list{YType::str, "session-accounting-method-list"},
    session_accounting_periodic_interval{YType::uint32, "session-accounting-periodic-interval"},
    session_accounting_started{YType::boolean, "session-accounting-started"},
    session_disconnected{YType::boolean, "session-disconnected"},
    session_idle_timeout_enabled_flag{YType::boolean, "session-idle-timeout-enabled-flag"},
    session_idle_to_aaa_request_failed{YType::uint32, "session-idle-to-aaa-request-failed"},
    session_idle_to_aaa_trans_pending{YType::uint32, "session-idle-to-aaa-trans-pending"},
    session_is_idle{YType::boolean, "session-is-idle"},
    session_stats_changed_time{YType::uint32, "session-stats-changed-time"},
    session_timeout_enabled_flag{YType::boolean, "session-timeout-enabled-flag"},
    session_timeout_time_remaining{YType::uint32, "session-timeout-time-remaining"},
    session_timeout_value{YType::uint32, "session-timeout-value"},
    session_to_awake_count{YType::uint32, "session-to-awake-count"},
    session_to_idle_count{YType::uint32, "session-to-idle-count"},
    session_total_idle_time{YType::uint32, "session-total-idle-time"},
    unique_subscriber_label{YType::uint32, "unique-subscriber-label"}
{
    yang_name = "session-feature-data"; yang_parent_name = "subscriber-accounting-session-feature";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::~SessionFeatureData()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::has_data() const
{
    for (std::size_t index=0; index<service_accounting_feature.size(); index++)
    {
        if(service_accounting_feature[index]->has_data())
            return true;
    }
    return idle_timeout_direction.is_set
	|| idle_timeout_threshold.is_set
	|| idle_timeout_value.is_set
	|| interface_handle.is_set
	|| session_accounting_aaa_request_failed.is_set
	|| session_accounting_aaa_trans_pending.is_set
	|| session_accounting_enabled_flag.is_set
	|| session_accounting_method_list.is_set
	|| session_accounting_periodic_interval.is_set
	|| session_accounting_started.is_set
	|| session_disconnected.is_set
	|| session_idle_timeout_enabled_flag.is_set
	|| session_idle_to_aaa_request_failed.is_set
	|| session_idle_to_aaa_trans_pending.is_set
	|| session_is_idle.is_set
	|| session_stats_changed_time.is_set
	|| session_timeout_enabled_flag.is_set
	|| session_timeout_time_remaining.is_set
	|| session_timeout_value.is_set
	|| session_to_awake_count.is_set
	|| session_to_idle_count.is_set
	|| session_total_idle_time.is_set
	|| unique_subscriber_label.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::has_operation() const
{
    for (std::size_t index=0; index<service_accounting_feature.size(); index++)
    {
        if(service_accounting_feature[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(idle_timeout_direction.operation)
	|| is_set(idle_timeout_threshold.operation)
	|| is_set(idle_timeout_value.operation)
	|| is_set(interface_handle.operation)
	|| is_set(session_accounting_aaa_request_failed.operation)
	|| is_set(session_accounting_aaa_trans_pending.operation)
	|| is_set(session_accounting_enabled_flag.operation)
	|| is_set(session_accounting_method_list.operation)
	|| is_set(session_accounting_periodic_interval.operation)
	|| is_set(session_accounting_started.operation)
	|| is_set(session_disconnected.operation)
	|| is_set(session_idle_timeout_enabled_flag.operation)
	|| is_set(session_idle_to_aaa_request_failed.operation)
	|| is_set(session_idle_to_aaa_trans_pending.operation)
	|| is_set(session_is_idle.operation)
	|| is_set(session_stats_changed_time.operation)
	|| is_set(session_timeout_enabled_flag.operation)
	|| is_set(session_timeout_time_remaining.operation)
	|| is_set(session_timeout_value.operation)
	|| is_set(session_to_awake_count.operation)
	|| is_set(session_to_idle_count.operation)
	|| is_set(session_total_idle_time.operation)
	|| is_set(unique_subscriber_label.operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-feature-data";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionFeatureData' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_timeout_direction.is_set || is_set(idle_timeout_direction.operation)) leaf_name_data.push_back(idle_timeout_direction.get_name_leafdata());
    if (idle_timeout_threshold.is_set || is_set(idle_timeout_threshold.operation)) leaf_name_data.push_back(idle_timeout_threshold.get_name_leafdata());
    if (idle_timeout_value.is_set || is_set(idle_timeout_value.operation)) leaf_name_data.push_back(idle_timeout_value.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (session_accounting_aaa_request_failed.is_set || is_set(session_accounting_aaa_request_failed.operation)) leaf_name_data.push_back(session_accounting_aaa_request_failed.get_name_leafdata());
    if (session_accounting_aaa_trans_pending.is_set || is_set(session_accounting_aaa_trans_pending.operation)) leaf_name_data.push_back(session_accounting_aaa_trans_pending.get_name_leafdata());
    if (session_accounting_enabled_flag.is_set || is_set(session_accounting_enabled_flag.operation)) leaf_name_data.push_back(session_accounting_enabled_flag.get_name_leafdata());
    if (session_accounting_method_list.is_set || is_set(session_accounting_method_list.operation)) leaf_name_data.push_back(session_accounting_method_list.get_name_leafdata());
    if (session_accounting_periodic_interval.is_set || is_set(session_accounting_periodic_interval.operation)) leaf_name_data.push_back(session_accounting_periodic_interval.get_name_leafdata());
    if (session_accounting_started.is_set || is_set(session_accounting_started.operation)) leaf_name_data.push_back(session_accounting_started.get_name_leafdata());
    if (session_disconnected.is_set || is_set(session_disconnected.operation)) leaf_name_data.push_back(session_disconnected.get_name_leafdata());
    if (session_idle_timeout_enabled_flag.is_set || is_set(session_idle_timeout_enabled_flag.operation)) leaf_name_data.push_back(session_idle_timeout_enabled_flag.get_name_leafdata());
    if (session_idle_to_aaa_request_failed.is_set || is_set(session_idle_to_aaa_request_failed.operation)) leaf_name_data.push_back(session_idle_to_aaa_request_failed.get_name_leafdata());
    if (session_idle_to_aaa_trans_pending.is_set || is_set(session_idle_to_aaa_trans_pending.operation)) leaf_name_data.push_back(session_idle_to_aaa_trans_pending.get_name_leafdata());
    if (session_is_idle.is_set || is_set(session_is_idle.operation)) leaf_name_data.push_back(session_is_idle.get_name_leafdata());
    if (session_stats_changed_time.is_set || is_set(session_stats_changed_time.operation)) leaf_name_data.push_back(session_stats_changed_time.get_name_leafdata());
    if (session_timeout_enabled_flag.is_set || is_set(session_timeout_enabled_flag.operation)) leaf_name_data.push_back(session_timeout_enabled_flag.get_name_leafdata());
    if (session_timeout_time_remaining.is_set || is_set(session_timeout_time_remaining.operation)) leaf_name_data.push_back(session_timeout_time_remaining.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.operation)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());
    if (session_to_awake_count.is_set || is_set(session_to_awake_count.operation)) leaf_name_data.push_back(session_to_awake_count.get_name_leafdata());
    if (session_to_idle_count.is_set || is_set(session_to_idle_count.operation)) leaf_name_data.push_back(session_to_idle_count.get_name_leafdata());
    if (session_total_idle_time.is_set || is_set(session_total_idle_time.operation)) leaf_name_data.push_back(session_total_idle_time.get_name_leafdata());
    if (unique_subscriber_label.is_set || is_set(unique_subscriber_label.operation)) leaf_name_data.push_back(unique_subscriber_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-accounting-feature")
    {
        for(auto const & c : service_accounting_feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature>();
        c->parent = this;
        service_accounting_feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_accounting_feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle-timeout-direction")
    {
        idle_timeout_direction = value;
    }
    if(value_path == "idle-timeout-threshold")
    {
        idle_timeout_threshold = value;
    }
    if(value_path == "idle-timeout-value")
    {
        idle_timeout_value = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "session-accounting-aaa-request-failed")
    {
        session_accounting_aaa_request_failed = value;
    }
    if(value_path == "session-accounting-aaa-trans-pending")
    {
        session_accounting_aaa_trans_pending = value;
    }
    if(value_path == "session-accounting-enabled-flag")
    {
        session_accounting_enabled_flag = value;
    }
    if(value_path == "session-accounting-method-list")
    {
        session_accounting_method_list = value;
    }
    if(value_path == "session-accounting-periodic-interval")
    {
        session_accounting_periodic_interval = value;
    }
    if(value_path == "session-accounting-started")
    {
        session_accounting_started = value;
    }
    if(value_path == "session-disconnected")
    {
        session_disconnected = value;
    }
    if(value_path == "session-idle-timeout-enabled-flag")
    {
        session_idle_timeout_enabled_flag = value;
    }
    if(value_path == "session-idle-to-aaa-request-failed")
    {
        session_idle_to_aaa_request_failed = value;
    }
    if(value_path == "session-idle-to-aaa-trans-pending")
    {
        session_idle_to_aaa_trans_pending = value;
    }
    if(value_path == "session-is-idle")
    {
        session_is_idle = value;
    }
    if(value_path == "session-stats-changed-time")
    {
        session_stats_changed_time = value;
    }
    if(value_path == "session-timeout-enabled-flag")
    {
        session_timeout_enabled_flag = value;
    }
    if(value_path == "session-timeout-time-remaining")
    {
        session_timeout_time_remaining = value;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
    }
    if(value_path == "session-to-awake-count")
    {
        session_to_awake_count = value;
    }
    if(value_path == "session-to-idle-count")
    {
        session_to_idle_count = value;
    }
    if(value_path == "session-total-idle-time")
    {
        session_total_idle_time = value;
    }
    if(value_path == "unique-subscriber-label")
    {
        unique_subscriber_label = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::ServiceAccountingFeature()
    :
    service_accounting_enabled_flag{YType::boolean, "service-accounting-enabled-flag"},
    service_accounting_method_list{YType::str, "service-accounting-method-list"},
    service_accounting_periodic_interval{YType::uint32, "service-accounting-periodic-interval"},
    service_accounting_service_id{YType::uint32, "service-accounting-service-id"},
    session_accounting_aaa_request_failed{YType::uint32, "session-accounting-aaa-request-failed"},
    session_accounting_aaa_trans_pending{YType::uint32, "session-accounting-aaa-trans-pending"},
    session_accounting_started{YType::boolean, "session-accounting-started"}
{
    yang_name = "service-accounting-feature"; yang_parent_name = "session-feature-data";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::~ServiceAccountingFeature()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::has_data() const
{
    return service_accounting_enabled_flag.is_set
	|| service_accounting_method_list.is_set
	|| service_accounting_periodic_interval.is_set
	|| service_accounting_service_id.is_set
	|| session_accounting_aaa_request_failed.is_set
	|| session_accounting_aaa_trans_pending.is_set
	|| session_accounting_started.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::has_operation() const
{
    return is_set(operation)
	|| is_set(service_accounting_enabled_flag.operation)
	|| is_set(service_accounting_method_list.operation)
	|| is_set(service_accounting_periodic_interval.operation)
	|| is_set(service_accounting_service_id.operation)
	|| is_set(session_accounting_aaa_request_failed.operation)
	|| is_set(session_accounting_aaa_trans_pending.operation)
	|| is_set(session_accounting_started.operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting-feature";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceAccountingFeature' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_accounting_enabled_flag.is_set || is_set(service_accounting_enabled_flag.operation)) leaf_name_data.push_back(service_accounting_enabled_flag.get_name_leafdata());
    if (service_accounting_method_list.is_set || is_set(service_accounting_method_list.operation)) leaf_name_data.push_back(service_accounting_method_list.get_name_leafdata());
    if (service_accounting_periodic_interval.is_set || is_set(service_accounting_periodic_interval.operation)) leaf_name_data.push_back(service_accounting_periodic_interval.get_name_leafdata());
    if (service_accounting_service_id.is_set || is_set(service_accounting_service_id.operation)) leaf_name_data.push_back(service_accounting_service_id.get_name_leafdata());
    if (session_accounting_aaa_request_failed.is_set || is_set(session_accounting_aaa_request_failed.operation)) leaf_name_data.push_back(session_accounting_aaa_request_failed.get_name_leafdata());
    if (session_accounting_aaa_trans_pending.is_set || is_set(session_accounting_aaa_trans_pending.operation)) leaf_name_data.push_back(session_accounting_aaa_trans_pending.get_name_leafdata());
    if (session_accounting_started.is_set || is_set(session_accounting_started.operation)) leaf_name_data.push_back(session_accounting_started.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-accounting-enabled-flag")
    {
        service_accounting_enabled_flag = value;
    }
    if(value_path == "service-accounting-method-list")
    {
        service_accounting_method_list = value;
    }
    if(value_path == "service-accounting-periodic-interval")
    {
        service_accounting_periodic_interval = value;
    }
    if(value_path == "service-accounting-service-id")
    {
        service_accounting_service_id = value;
    }
    if(value_path == "session-accounting-aaa-request-failed")
    {
        session_accounting_aaa_request_failed = value;
    }
    if(value_path == "session-accounting-aaa-trans-pending")
    {
        session_accounting_aaa_trans_pending = value;
    }
    if(value_path == "session-accounting-started")
    {
        session_accounting_started = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SubscriberAccountingSummary()
    :
    aaa_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters>())
	,idle_timeout_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters>())
	,session_flow_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters>())
	,session_timeout_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters>())
{
    aaa_counters->parent = this;

    idle_timeout_counters->parent = this;

    session_flow_counters->parent = this;

    session_timeout_counters->parent = this;

    yang_name = "subscriber-accounting-summary"; yang_parent_name = "node";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::~SubscriberAccountingSummary()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::has_data() const
{
    return (aaa_counters !=  nullptr && aaa_counters->has_data())
	|| (idle_timeout_counters !=  nullptr && idle_timeout_counters->has_data())
	|| (session_flow_counters !=  nullptr && session_flow_counters->has_data())
	|| (session_timeout_counters !=  nullptr && session_timeout_counters->has_data());
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::has_operation() const
{
    return is_set(operation)
	|| (aaa_counters !=  nullptr && aaa_counters->has_operation())
	|| (idle_timeout_counters !=  nullptr && idle_timeout_counters->has_operation())
	|| (session_flow_counters !=  nullptr && session_flow_counters->has_operation())
	|| (session_timeout_counters !=  nullptr && session_timeout_counters->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-summary";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAccountingSummary' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-counters")
    {
        if(aaa_counters == nullptr)
        {
            aaa_counters = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters>();
        }
        return aaa_counters;
    }

    if(child_yang_name == "idle-timeout-counters")
    {
        if(idle_timeout_counters == nullptr)
        {
            idle_timeout_counters = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters>();
        }
        return idle_timeout_counters;
    }

    if(child_yang_name == "session-flow-counters")
    {
        if(session_flow_counters == nullptr)
        {
            session_flow_counters = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters>();
        }
        return session_flow_counters;
    }

    if(child_yang_name == "session-timeout-counters")
    {
        if(session_timeout_counters == nullptr)
        {
            session_timeout_counters = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters>();
        }
        return session_timeout_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa_counters != nullptr)
    {
        children["aaa-counters"] = aaa_counters;
    }

    if(idle_timeout_counters != nullptr)
    {
        children["idle-timeout-counters"] = idle_timeout_counters;
    }

    if(session_flow_counters != nullptr)
    {
        children["session-flow-counters"] = session_flow_counters;
    }

    if(session_timeout_counters != nullptr)
    {
        children["session-timeout-counters"] = session_timeout_counters;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::set_value(const std::string & value_path, std::string value)
{
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::AaaCounters()
    :
    accounting_callback{YType::uint32, "accounting-callback"},
    flow_accounting_start{YType::uint32, "flow-accounting-start"},
    flow_accounting_stop{YType::uint32, "flow-accounting-stop"},
    flow_accounting_update{YType::uint32, "flow-accounting-update"},
    flow_disconnect{YType::uint32, "flow-disconnect"},
    flow_start{YType::uint32, "flow-start"},
    idle_timeout{YType::uint32, "idle-timeout"},
    idle_timeout_response_callback{YType::uint32, "idle-timeout-response-callback"},
    owned_resource_start{YType::uint32, "owned-resource-start"},
    prepaid_accounting_start{YType::uint32, "prepaid-accounting-start"},
    prepaid_accounting_stop{YType::uint32, "prepaid-accounting-stop"},
    prepaid_quota_depleted{YType::uint32, "prepaid-quota-depleted"},
    prepaid_reauthorization{YType::uint32, "prepaid-reauthorization"},
    prepaid_start{YType::uint32, "prepaid-start"},
    prepaid_stop{YType::uint32, "prepaid-stop"},
    prepaid_time_threshold_reached{YType::uint32, "prepaid-time-threshold-reached"},
    prepaid_volume_threshold_reached{YType::uint32, "prepaid-volume-threshold-reached"},
    service_accounting_start{YType::uint32, "service-accounting-start"},
    service_accounting_stop{YType::uint32, "service-accounting-stop"},
    service_accounting_update{YType::uint32, "service-accounting-update"},
    service_acct_out_of_sync{YType::uint32, "service-acct-out-of-sync"},
    service_acct_reqs_failed{YType::uint32, "service-acct-reqs-failed"},
    service_acct_trans_pending{YType::uint32, "service-acct-trans-pending"},
    service_idle_to_out_of_sync{YType::uint32, "service-idle-to-out-of-sync"},
    service_idle_to_reqs_failed{YType::uint32, "service-idle-to-reqs-failed"},
    service_idle_to_trans_pending{YType::uint32, "service-idle-to-trans-pending"},
    session_accounting_start{YType::uint32, "session-accounting-start"},
    session_accounting_stop{YType::uint32, "session-accounting-stop"},
    session_accounting_update{YType::uint32, "session-accounting-update"},
    session_acct_out_of_sync{YType::uint32, "session-acct-out-of-sync"},
    session_acct_reqs_failed{YType::uint32, "session-acct-reqs-failed"},
    session_acct_trans_pending{YType::uint32, "session-acct-trans-pending"},
    session_idle_to_out_of_sync{YType::uint32, "session-idle-to-out-of-sync"},
    session_idle_to_reqs_failed{YType::uint32, "session-idle-to-reqs-failed"},
    session_idle_to_trans_pending{YType::uint32, "session-idle-to-trans-pending"}
{
    yang_name = "aaa-counters"; yang_parent_name = "subscriber-accounting-summary";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::~AaaCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::has_data() const
{
    return accounting_callback.is_set
	|| flow_accounting_start.is_set
	|| flow_accounting_stop.is_set
	|| flow_accounting_update.is_set
	|| flow_disconnect.is_set
	|| flow_start.is_set
	|| idle_timeout.is_set
	|| idle_timeout_response_callback.is_set
	|| owned_resource_start.is_set
	|| prepaid_accounting_start.is_set
	|| prepaid_accounting_stop.is_set
	|| prepaid_quota_depleted.is_set
	|| prepaid_reauthorization.is_set
	|| prepaid_start.is_set
	|| prepaid_stop.is_set
	|| prepaid_time_threshold_reached.is_set
	|| prepaid_volume_threshold_reached.is_set
	|| service_accounting_start.is_set
	|| service_accounting_stop.is_set
	|| service_accounting_update.is_set
	|| service_acct_out_of_sync.is_set
	|| service_acct_reqs_failed.is_set
	|| service_acct_trans_pending.is_set
	|| service_idle_to_out_of_sync.is_set
	|| service_idle_to_reqs_failed.is_set
	|| service_idle_to_trans_pending.is_set
	|| session_accounting_start.is_set
	|| session_accounting_stop.is_set
	|| session_accounting_update.is_set
	|| session_acct_out_of_sync.is_set
	|| session_acct_reqs_failed.is_set
	|| session_acct_trans_pending.is_set
	|| session_idle_to_out_of_sync.is_set
	|| session_idle_to_reqs_failed.is_set
	|| session_idle_to_trans_pending.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_callback.operation)
	|| is_set(flow_accounting_start.operation)
	|| is_set(flow_accounting_stop.operation)
	|| is_set(flow_accounting_update.operation)
	|| is_set(flow_disconnect.operation)
	|| is_set(flow_start.operation)
	|| is_set(idle_timeout.operation)
	|| is_set(idle_timeout_response_callback.operation)
	|| is_set(owned_resource_start.operation)
	|| is_set(prepaid_accounting_start.operation)
	|| is_set(prepaid_accounting_stop.operation)
	|| is_set(prepaid_quota_depleted.operation)
	|| is_set(prepaid_reauthorization.operation)
	|| is_set(prepaid_start.operation)
	|| is_set(prepaid_stop.operation)
	|| is_set(prepaid_time_threshold_reached.operation)
	|| is_set(prepaid_volume_threshold_reached.operation)
	|| is_set(service_accounting_start.operation)
	|| is_set(service_accounting_stop.operation)
	|| is_set(service_accounting_update.operation)
	|| is_set(service_acct_out_of_sync.operation)
	|| is_set(service_acct_reqs_failed.operation)
	|| is_set(service_acct_trans_pending.operation)
	|| is_set(service_idle_to_out_of_sync.operation)
	|| is_set(service_idle_to_reqs_failed.operation)
	|| is_set(service_idle_to_trans_pending.operation)
	|| is_set(session_accounting_start.operation)
	|| is_set(session_accounting_stop.operation)
	|| is_set(session_accounting_update.operation)
	|| is_set(session_acct_out_of_sync.operation)
	|| is_set(session_acct_reqs_failed.operation)
	|| is_set(session_acct_trans_pending.operation)
	|| is_set(session_idle_to_out_of_sync.operation)
	|| is_set(session_idle_to_reqs_failed.operation)
	|| is_set(session_idle_to_trans_pending.operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-counters";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AaaCounters' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_callback.is_set || is_set(accounting_callback.operation)) leaf_name_data.push_back(accounting_callback.get_name_leafdata());
    if (flow_accounting_start.is_set || is_set(flow_accounting_start.operation)) leaf_name_data.push_back(flow_accounting_start.get_name_leafdata());
    if (flow_accounting_stop.is_set || is_set(flow_accounting_stop.operation)) leaf_name_data.push_back(flow_accounting_stop.get_name_leafdata());
    if (flow_accounting_update.is_set || is_set(flow_accounting_update.operation)) leaf_name_data.push_back(flow_accounting_update.get_name_leafdata());
    if (flow_disconnect.is_set || is_set(flow_disconnect.operation)) leaf_name_data.push_back(flow_disconnect.get_name_leafdata());
    if (flow_start.is_set || is_set(flow_start.operation)) leaf_name_data.push_back(flow_start.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (idle_timeout_response_callback.is_set || is_set(idle_timeout_response_callback.operation)) leaf_name_data.push_back(idle_timeout_response_callback.get_name_leafdata());
    if (owned_resource_start.is_set || is_set(owned_resource_start.operation)) leaf_name_data.push_back(owned_resource_start.get_name_leafdata());
    if (prepaid_accounting_start.is_set || is_set(prepaid_accounting_start.operation)) leaf_name_data.push_back(prepaid_accounting_start.get_name_leafdata());
    if (prepaid_accounting_stop.is_set || is_set(prepaid_accounting_stop.operation)) leaf_name_data.push_back(prepaid_accounting_stop.get_name_leafdata());
    if (prepaid_quota_depleted.is_set || is_set(prepaid_quota_depleted.operation)) leaf_name_data.push_back(prepaid_quota_depleted.get_name_leafdata());
    if (prepaid_reauthorization.is_set || is_set(prepaid_reauthorization.operation)) leaf_name_data.push_back(prepaid_reauthorization.get_name_leafdata());
    if (prepaid_start.is_set || is_set(prepaid_start.operation)) leaf_name_data.push_back(prepaid_start.get_name_leafdata());
    if (prepaid_stop.is_set || is_set(prepaid_stop.operation)) leaf_name_data.push_back(prepaid_stop.get_name_leafdata());
    if (prepaid_time_threshold_reached.is_set || is_set(prepaid_time_threshold_reached.operation)) leaf_name_data.push_back(prepaid_time_threshold_reached.get_name_leafdata());
    if (prepaid_volume_threshold_reached.is_set || is_set(prepaid_volume_threshold_reached.operation)) leaf_name_data.push_back(prepaid_volume_threshold_reached.get_name_leafdata());
    if (service_accounting_start.is_set || is_set(service_accounting_start.operation)) leaf_name_data.push_back(service_accounting_start.get_name_leafdata());
    if (service_accounting_stop.is_set || is_set(service_accounting_stop.operation)) leaf_name_data.push_back(service_accounting_stop.get_name_leafdata());
    if (service_accounting_update.is_set || is_set(service_accounting_update.operation)) leaf_name_data.push_back(service_accounting_update.get_name_leafdata());
    if (service_acct_out_of_sync.is_set || is_set(service_acct_out_of_sync.operation)) leaf_name_data.push_back(service_acct_out_of_sync.get_name_leafdata());
    if (service_acct_reqs_failed.is_set || is_set(service_acct_reqs_failed.operation)) leaf_name_data.push_back(service_acct_reqs_failed.get_name_leafdata());
    if (service_acct_trans_pending.is_set || is_set(service_acct_trans_pending.operation)) leaf_name_data.push_back(service_acct_trans_pending.get_name_leafdata());
    if (service_idle_to_out_of_sync.is_set || is_set(service_idle_to_out_of_sync.operation)) leaf_name_data.push_back(service_idle_to_out_of_sync.get_name_leafdata());
    if (service_idle_to_reqs_failed.is_set || is_set(service_idle_to_reqs_failed.operation)) leaf_name_data.push_back(service_idle_to_reqs_failed.get_name_leafdata());
    if (service_idle_to_trans_pending.is_set || is_set(service_idle_to_trans_pending.operation)) leaf_name_data.push_back(service_idle_to_trans_pending.get_name_leafdata());
    if (session_accounting_start.is_set || is_set(session_accounting_start.operation)) leaf_name_data.push_back(session_accounting_start.get_name_leafdata());
    if (session_accounting_stop.is_set || is_set(session_accounting_stop.operation)) leaf_name_data.push_back(session_accounting_stop.get_name_leafdata());
    if (session_accounting_update.is_set || is_set(session_accounting_update.operation)) leaf_name_data.push_back(session_accounting_update.get_name_leafdata());
    if (session_acct_out_of_sync.is_set || is_set(session_acct_out_of_sync.operation)) leaf_name_data.push_back(session_acct_out_of_sync.get_name_leafdata());
    if (session_acct_reqs_failed.is_set || is_set(session_acct_reqs_failed.operation)) leaf_name_data.push_back(session_acct_reqs_failed.get_name_leafdata());
    if (session_acct_trans_pending.is_set || is_set(session_acct_trans_pending.operation)) leaf_name_data.push_back(session_acct_trans_pending.get_name_leafdata());
    if (session_idle_to_out_of_sync.is_set || is_set(session_idle_to_out_of_sync.operation)) leaf_name_data.push_back(session_idle_to_out_of_sync.get_name_leafdata());
    if (session_idle_to_reqs_failed.is_set || is_set(session_idle_to_reqs_failed.operation)) leaf_name_data.push_back(session_idle_to_reqs_failed.get_name_leafdata());
    if (session_idle_to_trans_pending.is_set || is_set(session_idle_to_trans_pending.operation)) leaf_name_data.push_back(session_idle_to_trans_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-callback")
    {
        accounting_callback = value;
    }
    if(value_path == "flow-accounting-start")
    {
        flow_accounting_start = value;
    }
    if(value_path == "flow-accounting-stop")
    {
        flow_accounting_stop = value;
    }
    if(value_path == "flow-accounting-update")
    {
        flow_accounting_update = value;
    }
    if(value_path == "flow-disconnect")
    {
        flow_disconnect = value;
    }
    if(value_path == "flow-start")
    {
        flow_start = value;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
    if(value_path == "idle-timeout-response-callback")
    {
        idle_timeout_response_callback = value;
    }
    if(value_path == "owned-resource-start")
    {
        owned_resource_start = value;
    }
    if(value_path == "prepaid-accounting-start")
    {
        prepaid_accounting_start = value;
    }
    if(value_path == "prepaid-accounting-stop")
    {
        prepaid_accounting_stop = value;
    }
    if(value_path == "prepaid-quota-depleted")
    {
        prepaid_quota_depleted = value;
    }
    if(value_path == "prepaid-reauthorization")
    {
        prepaid_reauthorization = value;
    }
    if(value_path == "prepaid-start")
    {
        prepaid_start = value;
    }
    if(value_path == "prepaid-stop")
    {
        prepaid_stop = value;
    }
    if(value_path == "prepaid-time-threshold-reached")
    {
        prepaid_time_threshold_reached = value;
    }
    if(value_path == "prepaid-volume-threshold-reached")
    {
        prepaid_volume_threshold_reached = value;
    }
    if(value_path == "service-accounting-start")
    {
        service_accounting_start = value;
    }
    if(value_path == "service-accounting-stop")
    {
        service_accounting_stop = value;
    }
    if(value_path == "service-accounting-update")
    {
        service_accounting_update = value;
    }
    if(value_path == "service-acct-out-of-sync")
    {
        service_acct_out_of_sync = value;
    }
    if(value_path == "service-acct-reqs-failed")
    {
        service_acct_reqs_failed = value;
    }
    if(value_path == "service-acct-trans-pending")
    {
        service_acct_trans_pending = value;
    }
    if(value_path == "service-idle-to-out-of-sync")
    {
        service_idle_to_out_of_sync = value;
    }
    if(value_path == "service-idle-to-reqs-failed")
    {
        service_idle_to_reqs_failed = value;
    }
    if(value_path == "service-idle-to-trans-pending")
    {
        service_idle_to_trans_pending = value;
    }
    if(value_path == "session-accounting-start")
    {
        session_accounting_start = value;
    }
    if(value_path == "session-accounting-stop")
    {
        session_accounting_stop = value;
    }
    if(value_path == "session-accounting-update")
    {
        session_accounting_update = value;
    }
    if(value_path == "session-acct-out-of-sync")
    {
        session_acct_out_of_sync = value;
    }
    if(value_path == "session-acct-reqs-failed")
    {
        session_acct_reqs_failed = value;
    }
    if(value_path == "session-acct-trans-pending")
    {
        session_acct_trans_pending = value;
    }
    if(value_path == "session-idle-to-out-of-sync")
    {
        session_idle_to_out_of_sync = value;
    }
    if(value_path == "session-idle-to-reqs-failed")
    {
        session_idle_to_reqs_failed = value;
    }
    if(value_path == "session-idle-to-trans-pending")
    {
        session_idle_to_trans_pending = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::IdleTimeoutCounters()
    :
    active_flow_idle_timers{YType::uint32, "active-flow-idle-timers"},
    active_prepaid_idle_timers{YType::uint32, "active-prepaid-idle-timers"},
    active_session_idle_timers{YType::uint32, "active-session-idle-timers"},
    expired_flow_idle_timers{YType::uint32, "expired-flow-idle-timers"},
    expired_prepaid_idle_timers{YType::uint32, "expired-prepaid-idle-timers"},
    idle_sessions{YType::uint32, "idle-sessions"},
    transitions_to_awake{YType::uint32, "transitions-to-awake"},
    transitions_to_idle{YType::uint32, "transitions-to-idle"}
{
    yang_name = "idle-timeout-counters"; yang_parent_name = "subscriber-accounting-summary";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::~IdleTimeoutCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::has_data() const
{
    return active_flow_idle_timers.is_set
	|| active_prepaid_idle_timers.is_set
	|| active_session_idle_timers.is_set
	|| expired_flow_idle_timers.is_set
	|| expired_prepaid_idle_timers.is_set
	|| idle_sessions.is_set
	|| transitions_to_awake.is_set
	|| transitions_to_idle.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(active_flow_idle_timers.operation)
	|| is_set(active_prepaid_idle_timers.operation)
	|| is_set(active_session_idle_timers.operation)
	|| is_set(expired_flow_idle_timers.operation)
	|| is_set(expired_prepaid_idle_timers.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(transitions_to_awake.operation)
	|| is_set(transitions_to_idle.operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-timeout-counters";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleTimeoutCounters' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_flow_idle_timers.is_set || is_set(active_flow_idle_timers.operation)) leaf_name_data.push_back(active_flow_idle_timers.get_name_leafdata());
    if (active_prepaid_idle_timers.is_set || is_set(active_prepaid_idle_timers.operation)) leaf_name_data.push_back(active_prepaid_idle_timers.get_name_leafdata());
    if (active_session_idle_timers.is_set || is_set(active_session_idle_timers.operation)) leaf_name_data.push_back(active_session_idle_timers.get_name_leafdata());
    if (expired_flow_idle_timers.is_set || is_set(expired_flow_idle_timers.operation)) leaf_name_data.push_back(expired_flow_idle_timers.get_name_leafdata());
    if (expired_prepaid_idle_timers.is_set || is_set(expired_prepaid_idle_timers.operation)) leaf_name_data.push_back(expired_prepaid_idle_timers.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (transitions_to_awake.is_set || is_set(transitions_to_awake.operation)) leaf_name_data.push_back(transitions_to_awake.get_name_leafdata());
    if (transitions_to_idle.is_set || is_set(transitions_to_idle.operation)) leaf_name_data.push_back(transitions_to_idle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-flow-idle-timers")
    {
        active_flow_idle_timers = value;
    }
    if(value_path == "active-prepaid-idle-timers")
    {
        active_prepaid_idle_timers = value;
    }
    if(value_path == "active-session-idle-timers")
    {
        active_session_idle_timers = value;
    }
    if(value_path == "expired-flow-idle-timers")
    {
        expired_flow_idle_timers = value;
    }
    if(value_path == "expired-prepaid-idle-timers")
    {
        expired_prepaid_idle_timers = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "transitions-to-awake")
    {
        transitions_to_awake = value;
    }
    if(value_path == "transitions-to-idle")
    {
        transitions_to_idle = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::SessionTimeoutCounters()
    :
    active_session_timers{YType::uint32, "active-session-timers"},
    expired_session_timers{YType::uint32, "expired-session-timers"}
{
    yang_name = "session-timeout-counters"; yang_parent_name = "subscriber-accounting-summary";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::~SessionTimeoutCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::has_data() const
{
    return active_session_timers.is_set
	|| expired_session_timers.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(active_session_timers.operation)
	|| is_set(expired_session_timers.operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout-counters";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionTimeoutCounters' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_session_timers.is_set || is_set(active_session_timers.operation)) leaf_name_data.push_back(active_session_timers.get_name_leafdata());
    if (expired_session_timers.is_set || is_set(expired_session_timers.operation)) leaf_name_data.push_back(expired_session_timers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-session-timers")
    {
        active_session_timers = value;
    }
    if(value_path == "expired-session-timers")
    {
        expired_session_timers = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::SessionFlowCounters()
    :
    active_flows{YType::uint32, "active-flows"},
    active_session_accounting_sessions{YType::uint32, "active-session-accounting-sessions"},
    active_sessions{YType::uint32, "active-sessions"},
    disconnected_sessions{YType::uint32, "disconnected-sessions"},
    quota_received{YType::uint32, "quota-received"}
{
    yang_name = "session-flow-counters"; yang_parent_name = "subscriber-accounting-summary";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::~SessionFlowCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::has_data() const
{
    return active_flows.is_set
	|| active_session_accounting_sessions.is_set
	|| active_sessions.is_set
	|| disconnected_sessions.is_set
	|| quota_received.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(active_flows.operation)
	|| is_set(active_session_accounting_sessions.operation)
	|| is_set(active_sessions.operation)
	|| is_set(disconnected_sessions.operation)
	|| is_set(quota_received.operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-flow-counters";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionFlowCounters' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_flows.is_set || is_set(active_flows.operation)) leaf_name_data.push_back(active_flows.get_name_leafdata());
    if (active_session_accounting_sessions.is_set || is_set(active_session_accounting_sessions.operation)) leaf_name_data.push_back(active_session_accounting_sessions.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (disconnected_sessions.is_set || is_set(disconnected_sessions.operation)) leaf_name_data.push_back(disconnected_sessions.get_name_leafdata());
    if (quota_received.is_set || is_set(quota_received.operation)) leaf_name_data.push_back(quota_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-flows")
    {
        active_flows = value;
    }
    if(value_path == "active-session-accounting-sessions")
    {
        active_session_accounting_sessions = value;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "disconnected-sessions")
    {
        disconnected_sessions = value;
    }
    if(value_path == "quota-received")
    {
        quota_received = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeatures()
{
    yang_name = "subscriber-accounting-flow-features"; yang_parent_name = "node";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::~SubscriberAccountingFlowFeatures()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::has_data() const
{
    for (std::size_t index=0; index<subscriber_accounting_flow_feature.size(); index++)
    {
        if(subscriber_accounting_flow_feature[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::has_operation() const
{
    for (std::size_t index=0; index<subscriber_accounting_flow_feature.size(); index++)
    {
        if(subscriber_accounting_flow_feature[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-flow-features";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAccountingFlowFeatures' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-accounting-flow-feature")
    {
        for(auto const & c : subscriber_accounting_flow_feature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature>();
        c->parent = this;
        subscriber_accounting_flow_feature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_accounting_flow_feature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::set_value(const std::string & value_path, std::string value)
{
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::SubscriberAccountingFlowFeature()
    :
    class_label{YType::int32, "class-label"}
    	,
    flow_feature_data(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData>())
{
    flow_feature_data->parent = this;

    yang_name = "subscriber-accounting-flow-feature"; yang_parent_name = "subscriber-accounting-flow-features";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::~SubscriberAccountingFlowFeature()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::has_data() const
{
    return class_label.is_set
	|| (flow_feature_data !=  nullptr && flow_feature_data->has_data());
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::has_operation() const
{
    return is_set(operation)
	|| is_set(class_label.operation)
	|| (flow_feature_data !=  nullptr && flow_feature_data->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-flow-feature" <<"[class-label='" <<class_label <<"']";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAccountingFlowFeature' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_label.is_set || is_set(class_label.operation)) leaf_name_data.push_back(class_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-feature-data")
    {
        if(flow_feature_data == nullptr)
        {
            flow_feature_data = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData>();
        }
        return flow_feature_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_feature_data != nullptr)
    {
        children["flow-feature-data"] = flow_feature_data;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-label")
    {
        class_label = value;
    }
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::FlowFeatureData()
    :
    flow_accounting_enabled_flag{YType::boolean, "flow-accounting-enabled-flag"},
    flow_accounting_method_list_name{YType::str, "flow-accounting-method-list-name"},
    flow_accounting_periodic_interval{YType::uint32, "flow-accounting-periodic-interval"},
    flow_direction{YType::uint32, "flow-direction"},
    flow_idle_timeout_enabled_flag{YType::boolean, "flow-idle-timeout-enabled-flag"},
    flow_idle_timeout_value{YType::uint32, "flow-idle-timeout-value"},
    prepaid_ccfh{YType::uint32, "prepaid-ccfh"},
    prepaid_cfg{YType::str, "prepaid-cfg"},
    prepaid_charging_rule{YType::str, "prepaid-charging-rule"},
    prepaid_enabled_flag{YType::boolean, "prepaid-enabled-flag"},
    prepaid_final_unit{YType::boolean, "prepaid-final-unit"},
    prepaid_idle_timeout_enabled{YType::boolean, "prepaid-idle-timeout-enabled"},
    prepaid_idle_timeout_value{YType::uint32, "prepaid-idle-timeout-value"},
    prepaid_reauth_timeout_value{YType::uint32, "prepaid-reauth-timeout-value"},
    prepaid_reauth_timer_enabled{YType::boolean, "prepaid-reauth-timer-enabled"},
    prepaid_remaining_qat{YType::uint32, "prepaid-remaining-qat"},
    prepaid_remaining_qit{YType::uint32, "prepaid-remaining-qit"},
    prepaid_remaining_qt{YType::uint32, "prepaid-remaining-qt"},
    prepaid_remaining_qtt{YType::uint32, "prepaid-remaining-qtt"},
    prepaid_remaining_wheel{YType::uint32, "prepaid-remaining-wheel"},
    prepaid_result_code{YType::uint32, "prepaid-result-code"},
    prepaid_tariff_time{YType::uint32, "prepaid-tariff-time"},
    prepaid_tariff_volumeb_quota{YType::uint64, "prepaid-tariff-volumeb-quota"},
    prepaid_tariff_volumei_quota{YType::uint64, "prepaid-tariff-volumei-quota"},
    prepaid_tariff_volumeo_quota{YType::uint64, "prepaid-tariff-volumeo-quota"},
    prepaid_time_quota{YType::uint32, "prepaid-time-quota"},
    prepaid_time_state{YType::str, "prepaid-time-state"},
    prepaid_time_threshold{YType::uint32, "prepaid-time-threshold"},
    prepaid_total_time_quota{YType::uint32, "prepaid-total-time-quota"},
    prepaid_total_volumeb_quota{YType::uint64, "prepaid-total-volumeb-quota"},
    prepaid_total_volumei_quota{YType::uint64, "prepaid-total-volumei-quota"},
    prepaid_total_volumeo_quota{YType::uint64, "prepaid-total-volumeo-quota"},
    prepaid_volume_newb_quota{YType::uint64, "prepaid-volume-newb-quota"},
    prepaid_volume_newi_quota{YType::uint64, "prepaid-volume-newi-quota"},
    prepaid_volume_newo_quota{YType::uint64, "prepaid-volume-newo-quota"},
    prepaid_volume_refb_quota{YType::uint64, "prepaid-volume-refb-quota"},
    prepaid_volume_refi_quota{YType::uint64, "prepaid-volume-refi-quota"},
    prepaid_volume_refo_quota{YType::uint64, "prepaid-volume-refo-quota"},
    prepaid_volume_state{YType::str, "prepaid-volume-state"},
    prepaid_volume_threshold{YType::uint32, "prepaid-volume-threshold"},
    prepaid_volume_usedi_quota{YType::uint64, "prepaid-volume-usedi-quota"},
    prepaid_volume_usedo_quota{YType::uint64, "prepaid-volume-usedo-quota"},
    prepaid_volumeb_quota{YType::uint64, "prepaid-volumeb-quota"},
    prepaid_volumei_quota{YType::uint64, "prepaid-volumei-quota"},
    prepaid_volumeo_quota{YType::uint64, "prepaid-volumeo-quota"},
    unique_class_label{YType::uint32, "unique-class-label"}
{
    yang_name = "flow-feature-data"; yang_parent_name = "subscriber-accounting-flow-feature";
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::~FlowFeatureData()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::has_data() const
{
    return flow_accounting_enabled_flag.is_set
	|| flow_accounting_method_list_name.is_set
	|| flow_accounting_periodic_interval.is_set
	|| flow_direction.is_set
	|| flow_idle_timeout_enabled_flag.is_set
	|| flow_idle_timeout_value.is_set
	|| prepaid_ccfh.is_set
	|| prepaid_cfg.is_set
	|| prepaid_charging_rule.is_set
	|| prepaid_enabled_flag.is_set
	|| prepaid_final_unit.is_set
	|| prepaid_idle_timeout_enabled.is_set
	|| prepaid_idle_timeout_value.is_set
	|| prepaid_reauth_timeout_value.is_set
	|| prepaid_reauth_timer_enabled.is_set
	|| prepaid_remaining_qat.is_set
	|| prepaid_remaining_qit.is_set
	|| prepaid_remaining_qt.is_set
	|| prepaid_remaining_qtt.is_set
	|| prepaid_remaining_wheel.is_set
	|| prepaid_result_code.is_set
	|| prepaid_tariff_time.is_set
	|| prepaid_tariff_volumeb_quota.is_set
	|| prepaid_tariff_volumei_quota.is_set
	|| prepaid_tariff_volumeo_quota.is_set
	|| prepaid_time_quota.is_set
	|| prepaid_time_state.is_set
	|| prepaid_time_threshold.is_set
	|| prepaid_total_time_quota.is_set
	|| prepaid_total_volumeb_quota.is_set
	|| prepaid_total_volumei_quota.is_set
	|| prepaid_total_volumeo_quota.is_set
	|| prepaid_volume_newb_quota.is_set
	|| prepaid_volume_newi_quota.is_set
	|| prepaid_volume_newo_quota.is_set
	|| prepaid_volume_refb_quota.is_set
	|| prepaid_volume_refi_quota.is_set
	|| prepaid_volume_refo_quota.is_set
	|| prepaid_volume_state.is_set
	|| prepaid_volume_threshold.is_set
	|| prepaid_volume_usedi_quota.is_set
	|| prepaid_volume_usedo_quota.is_set
	|| prepaid_volumeb_quota.is_set
	|| prepaid_volumei_quota.is_set
	|| prepaid_volumeo_quota.is_set
	|| unique_class_label.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_accounting_enabled_flag.operation)
	|| is_set(flow_accounting_method_list_name.operation)
	|| is_set(flow_accounting_periodic_interval.operation)
	|| is_set(flow_direction.operation)
	|| is_set(flow_idle_timeout_enabled_flag.operation)
	|| is_set(flow_idle_timeout_value.operation)
	|| is_set(prepaid_ccfh.operation)
	|| is_set(prepaid_cfg.operation)
	|| is_set(prepaid_charging_rule.operation)
	|| is_set(prepaid_enabled_flag.operation)
	|| is_set(prepaid_final_unit.operation)
	|| is_set(prepaid_idle_timeout_enabled.operation)
	|| is_set(prepaid_idle_timeout_value.operation)
	|| is_set(prepaid_reauth_timeout_value.operation)
	|| is_set(prepaid_reauth_timer_enabled.operation)
	|| is_set(prepaid_remaining_qat.operation)
	|| is_set(prepaid_remaining_qit.operation)
	|| is_set(prepaid_remaining_qt.operation)
	|| is_set(prepaid_remaining_qtt.operation)
	|| is_set(prepaid_remaining_wheel.operation)
	|| is_set(prepaid_result_code.operation)
	|| is_set(prepaid_tariff_time.operation)
	|| is_set(prepaid_tariff_volumeb_quota.operation)
	|| is_set(prepaid_tariff_volumei_quota.operation)
	|| is_set(prepaid_tariff_volumeo_quota.operation)
	|| is_set(prepaid_time_quota.operation)
	|| is_set(prepaid_time_state.operation)
	|| is_set(prepaid_time_threshold.operation)
	|| is_set(prepaid_total_time_quota.operation)
	|| is_set(prepaid_total_volumeb_quota.operation)
	|| is_set(prepaid_total_volumei_quota.operation)
	|| is_set(prepaid_total_volumeo_quota.operation)
	|| is_set(prepaid_volume_newb_quota.operation)
	|| is_set(prepaid_volume_newi_quota.operation)
	|| is_set(prepaid_volume_newo_quota.operation)
	|| is_set(prepaid_volume_refb_quota.operation)
	|| is_set(prepaid_volume_refi_quota.operation)
	|| is_set(prepaid_volume_refo_quota.operation)
	|| is_set(prepaid_volume_state.operation)
	|| is_set(prepaid_volume_threshold.operation)
	|| is_set(prepaid_volume_usedi_quota.operation)
	|| is_set(prepaid_volume_usedo_quota.operation)
	|| is_set(prepaid_volumeb_quota.operation)
	|| is_set(prepaid_volumei_quota.operation)
	|| is_set(prepaid_volumeo_quota.operation)
	|| is_set(unique_class_label.operation);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-feature-data";

    return path_buffer.str();

}

const EntityPath SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowFeatureData' in Cisco_IOS_XR_subscriber_accounting_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_accounting_enabled_flag.is_set || is_set(flow_accounting_enabled_flag.operation)) leaf_name_data.push_back(flow_accounting_enabled_flag.get_name_leafdata());
    if (flow_accounting_method_list_name.is_set || is_set(flow_accounting_method_list_name.operation)) leaf_name_data.push_back(flow_accounting_method_list_name.get_name_leafdata());
    if (flow_accounting_periodic_interval.is_set || is_set(flow_accounting_periodic_interval.operation)) leaf_name_data.push_back(flow_accounting_periodic_interval.get_name_leafdata());
    if (flow_direction.is_set || is_set(flow_direction.operation)) leaf_name_data.push_back(flow_direction.get_name_leafdata());
    if (flow_idle_timeout_enabled_flag.is_set || is_set(flow_idle_timeout_enabled_flag.operation)) leaf_name_data.push_back(flow_idle_timeout_enabled_flag.get_name_leafdata());
    if (flow_idle_timeout_value.is_set || is_set(flow_idle_timeout_value.operation)) leaf_name_data.push_back(flow_idle_timeout_value.get_name_leafdata());
    if (prepaid_ccfh.is_set || is_set(prepaid_ccfh.operation)) leaf_name_data.push_back(prepaid_ccfh.get_name_leafdata());
    if (prepaid_cfg.is_set || is_set(prepaid_cfg.operation)) leaf_name_data.push_back(prepaid_cfg.get_name_leafdata());
    if (prepaid_charging_rule.is_set || is_set(prepaid_charging_rule.operation)) leaf_name_data.push_back(prepaid_charging_rule.get_name_leafdata());
    if (prepaid_enabled_flag.is_set || is_set(prepaid_enabled_flag.operation)) leaf_name_data.push_back(prepaid_enabled_flag.get_name_leafdata());
    if (prepaid_final_unit.is_set || is_set(prepaid_final_unit.operation)) leaf_name_data.push_back(prepaid_final_unit.get_name_leafdata());
    if (prepaid_idle_timeout_enabled.is_set || is_set(prepaid_idle_timeout_enabled.operation)) leaf_name_data.push_back(prepaid_idle_timeout_enabled.get_name_leafdata());
    if (prepaid_idle_timeout_value.is_set || is_set(prepaid_idle_timeout_value.operation)) leaf_name_data.push_back(prepaid_idle_timeout_value.get_name_leafdata());
    if (prepaid_reauth_timeout_value.is_set || is_set(prepaid_reauth_timeout_value.operation)) leaf_name_data.push_back(prepaid_reauth_timeout_value.get_name_leafdata());
    if (prepaid_reauth_timer_enabled.is_set || is_set(prepaid_reauth_timer_enabled.operation)) leaf_name_data.push_back(prepaid_reauth_timer_enabled.get_name_leafdata());
    if (prepaid_remaining_qat.is_set || is_set(prepaid_remaining_qat.operation)) leaf_name_data.push_back(prepaid_remaining_qat.get_name_leafdata());
    if (prepaid_remaining_qit.is_set || is_set(prepaid_remaining_qit.operation)) leaf_name_data.push_back(prepaid_remaining_qit.get_name_leafdata());
    if (prepaid_remaining_qt.is_set || is_set(prepaid_remaining_qt.operation)) leaf_name_data.push_back(prepaid_remaining_qt.get_name_leafdata());
    if (prepaid_remaining_qtt.is_set || is_set(prepaid_remaining_qtt.operation)) leaf_name_data.push_back(prepaid_remaining_qtt.get_name_leafdata());
    if (prepaid_remaining_wheel.is_set || is_set(prepaid_remaining_wheel.operation)) leaf_name_data.push_back(prepaid_remaining_wheel.get_name_leafdata());
    if (prepaid_result_code.is_set || is_set(prepaid_result_code.operation)) leaf_name_data.push_back(prepaid_result_code.get_name_leafdata());
    if (prepaid_tariff_time.is_set || is_set(prepaid_tariff_time.operation)) leaf_name_data.push_back(prepaid_tariff_time.get_name_leafdata());
    if (prepaid_tariff_volumeb_quota.is_set || is_set(prepaid_tariff_volumeb_quota.operation)) leaf_name_data.push_back(prepaid_tariff_volumeb_quota.get_name_leafdata());
    if (prepaid_tariff_volumei_quota.is_set || is_set(prepaid_tariff_volumei_quota.operation)) leaf_name_data.push_back(prepaid_tariff_volumei_quota.get_name_leafdata());
    if (prepaid_tariff_volumeo_quota.is_set || is_set(prepaid_tariff_volumeo_quota.operation)) leaf_name_data.push_back(prepaid_tariff_volumeo_quota.get_name_leafdata());
    if (prepaid_time_quota.is_set || is_set(prepaid_time_quota.operation)) leaf_name_data.push_back(prepaid_time_quota.get_name_leafdata());
    if (prepaid_time_state.is_set || is_set(prepaid_time_state.operation)) leaf_name_data.push_back(prepaid_time_state.get_name_leafdata());
    if (prepaid_time_threshold.is_set || is_set(prepaid_time_threshold.operation)) leaf_name_data.push_back(prepaid_time_threshold.get_name_leafdata());
    if (prepaid_total_time_quota.is_set || is_set(prepaid_total_time_quota.operation)) leaf_name_data.push_back(prepaid_total_time_quota.get_name_leafdata());
    if (prepaid_total_volumeb_quota.is_set || is_set(prepaid_total_volumeb_quota.operation)) leaf_name_data.push_back(prepaid_total_volumeb_quota.get_name_leafdata());
    if (prepaid_total_volumei_quota.is_set || is_set(prepaid_total_volumei_quota.operation)) leaf_name_data.push_back(prepaid_total_volumei_quota.get_name_leafdata());
    if (prepaid_total_volumeo_quota.is_set || is_set(prepaid_total_volumeo_quota.operation)) leaf_name_data.push_back(prepaid_total_volumeo_quota.get_name_leafdata());
    if (prepaid_volume_newb_quota.is_set || is_set(prepaid_volume_newb_quota.operation)) leaf_name_data.push_back(prepaid_volume_newb_quota.get_name_leafdata());
    if (prepaid_volume_newi_quota.is_set || is_set(prepaid_volume_newi_quota.operation)) leaf_name_data.push_back(prepaid_volume_newi_quota.get_name_leafdata());
    if (prepaid_volume_newo_quota.is_set || is_set(prepaid_volume_newo_quota.operation)) leaf_name_data.push_back(prepaid_volume_newo_quota.get_name_leafdata());
    if (prepaid_volume_refb_quota.is_set || is_set(prepaid_volume_refb_quota.operation)) leaf_name_data.push_back(prepaid_volume_refb_quota.get_name_leafdata());
    if (prepaid_volume_refi_quota.is_set || is_set(prepaid_volume_refi_quota.operation)) leaf_name_data.push_back(prepaid_volume_refi_quota.get_name_leafdata());
    if (prepaid_volume_refo_quota.is_set || is_set(prepaid_volume_refo_quota.operation)) leaf_name_data.push_back(prepaid_volume_refo_quota.get_name_leafdata());
    if (prepaid_volume_state.is_set || is_set(prepaid_volume_state.operation)) leaf_name_data.push_back(prepaid_volume_state.get_name_leafdata());
    if (prepaid_volume_threshold.is_set || is_set(prepaid_volume_threshold.operation)) leaf_name_data.push_back(prepaid_volume_threshold.get_name_leafdata());
    if (prepaid_volume_usedi_quota.is_set || is_set(prepaid_volume_usedi_quota.operation)) leaf_name_data.push_back(prepaid_volume_usedi_quota.get_name_leafdata());
    if (prepaid_volume_usedo_quota.is_set || is_set(prepaid_volume_usedo_quota.operation)) leaf_name_data.push_back(prepaid_volume_usedo_quota.get_name_leafdata());
    if (prepaid_volumeb_quota.is_set || is_set(prepaid_volumeb_quota.operation)) leaf_name_data.push_back(prepaid_volumeb_quota.get_name_leafdata());
    if (prepaid_volumei_quota.is_set || is_set(prepaid_volumei_quota.operation)) leaf_name_data.push_back(prepaid_volumei_quota.get_name_leafdata());
    if (prepaid_volumeo_quota.is_set || is_set(prepaid_volumeo_quota.operation)) leaf_name_data.push_back(prepaid_volumeo_quota.get_name_leafdata());
    if (unique_class_label.is_set || is_set(unique_class_label.operation)) leaf_name_data.push_back(unique_class_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-accounting-enabled-flag")
    {
        flow_accounting_enabled_flag = value;
    }
    if(value_path == "flow-accounting-method-list-name")
    {
        flow_accounting_method_list_name = value;
    }
    if(value_path == "flow-accounting-periodic-interval")
    {
        flow_accounting_periodic_interval = value;
    }
    if(value_path == "flow-direction")
    {
        flow_direction = value;
    }
    if(value_path == "flow-idle-timeout-enabled-flag")
    {
        flow_idle_timeout_enabled_flag = value;
    }
    if(value_path == "flow-idle-timeout-value")
    {
        flow_idle_timeout_value = value;
    }
    if(value_path == "prepaid-ccfh")
    {
        prepaid_ccfh = value;
    }
    if(value_path == "prepaid-cfg")
    {
        prepaid_cfg = value;
    }
    if(value_path == "prepaid-charging-rule")
    {
        prepaid_charging_rule = value;
    }
    if(value_path == "prepaid-enabled-flag")
    {
        prepaid_enabled_flag = value;
    }
    if(value_path == "prepaid-final-unit")
    {
        prepaid_final_unit = value;
    }
    if(value_path == "prepaid-idle-timeout-enabled")
    {
        prepaid_idle_timeout_enabled = value;
    }
    if(value_path == "prepaid-idle-timeout-value")
    {
        prepaid_idle_timeout_value = value;
    }
    if(value_path == "prepaid-reauth-timeout-value")
    {
        prepaid_reauth_timeout_value = value;
    }
    if(value_path == "prepaid-reauth-timer-enabled")
    {
        prepaid_reauth_timer_enabled = value;
    }
    if(value_path == "prepaid-remaining-qat")
    {
        prepaid_remaining_qat = value;
    }
    if(value_path == "prepaid-remaining-qit")
    {
        prepaid_remaining_qit = value;
    }
    if(value_path == "prepaid-remaining-qt")
    {
        prepaid_remaining_qt = value;
    }
    if(value_path == "prepaid-remaining-qtt")
    {
        prepaid_remaining_qtt = value;
    }
    if(value_path == "prepaid-remaining-wheel")
    {
        prepaid_remaining_wheel = value;
    }
    if(value_path == "prepaid-result-code")
    {
        prepaid_result_code = value;
    }
    if(value_path == "prepaid-tariff-time")
    {
        prepaid_tariff_time = value;
    }
    if(value_path == "prepaid-tariff-volumeb-quota")
    {
        prepaid_tariff_volumeb_quota = value;
    }
    if(value_path == "prepaid-tariff-volumei-quota")
    {
        prepaid_tariff_volumei_quota = value;
    }
    if(value_path == "prepaid-tariff-volumeo-quota")
    {
        prepaid_tariff_volumeo_quota = value;
    }
    if(value_path == "prepaid-time-quota")
    {
        prepaid_time_quota = value;
    }
    if(value_path == "prepaid-time-state")
    {
        prepaid_time_state = value;
    }
    if(value_path == "prepaid-time-threshold")
    {
        prepaid_time_threshold = value;
    }
    if(value_path == "prepaid-total-time-quota")
    {
        prepaid_total_time_quota = value;
    }
    if(value_path == "prepaid-total-volumeb-quota")
    {
        prepaid_total_volumeb_quota = value;
    }
    if(value_path == "prepaid-total-volumei-quota")
    {
        prepaid_total_volumei_quota = value;
    }
    if(value_path == "prepaid-total-volumeo-quota")
    {
        prepaid_total_volumeo_quota = value;
    }
    if(value_path == "prepaid-volume-newb-quota")
    {
        prepaid_volume_newb_quota = value;
    }
    if(value_path == "prepaid-volume-newi-quota")
    {
        prepaid_volume_newi_quota = value;
    }
    if(value_path == "prepaid-volume-newo-quota")
    {
        prepaid_volume_newo_quota = value;
    }
    if(value_path == "prepaid-volume-refb-quota")
    {
        prepaid_volume_refb_quota = value;
    }
    if(value_path == "prepaid-volume-refi-quota")
    {
        prepaid_volume_refi_quota = value;
    }
    if(value_path == "prepaid-volume-refo-quota")
    {
        prepaid_volume_refo_quota = value;
    }
    if(value_path == "prepaid-volume-state")
    {
        prepaid_volume_state = value;
    }
    if(value_path == "prepaid-volume-threshold")
    {
        prepaid_volume_threshold = value;
    }
    if(value_path == "prepaid-volume-usedi-quota")
    {
        prepaid_volume_usedi_quota = value;
    }
    if(value_path == "prepaid-volume-usedo-quota")
    {
        prepaid_volume_usedo_quota = value;
    }
    if(value_path == "prepaid-volumeb-quota")
    {
        prepaid_volumeb_quota = value;
    }
    if(value_path == "prepaid-volumei-quota")
    {
        prepaid_volumei_quota = value;
    }
    if(value_path == "prepaid-volumeo-quota")
    {
        prepaid_volumeo_quota = value;
    }
    if(value_path == "unique-class-label")
    {
        unique_class_label = value;
    }
}


}
}

