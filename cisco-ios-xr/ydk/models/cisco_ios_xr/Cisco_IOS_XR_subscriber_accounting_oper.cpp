
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_accounting_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_accounting_oper {

SubscriberAccounting::SubscriberAccounting()
    :
    nodes(std::make_shared<SubscriberAccounting::Nodes>())
{
    nodes->parent = this;

    yang_name = "subscriber-accounting"; yang_parent_name = "Cisco-IOS-XR-subscriber-accounting-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberAccounting::~SubscriberAccounting()
{
}

bool SubscriberAccounting::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool SubscriberAccounting::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SubscriberAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-oper:subscriber-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void SubscriberAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberAccounting::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> SubscriberAccounting::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Nodes()
    :
    node(this, {"node_id"})
{

    yang_name = "nodes"; yang_parent_name = "subscriber-accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberAccounting::Nodes::~Nodes()
{
}

bool SubscriberAccounting::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberAccounting::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-oper:subscriber-accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberAccounting::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberAccounting::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberAccounting::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    subscriber_accounting_session_features(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures>())
    , subscriber_accounting_summary(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary>())
    , subscriber_accounting_flow_features(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures>())
{
    subscriber_accounting_session_features->parent = this;
    subscriber_accounting_summary->parent = this;
    subscriber_accounting_flow_features->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberAccounting::Nodes::Node::~Node()
{
}

bool SubscriberAccounting::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (subscriber_accounting_session_features !=  nullptr && subscriber_accounting_session_features->has_data())
	|| (subscriber_accounting_summary !=  nullptr && subscriber_accounting_summary->has_data())
	|| (subscriber_accounting_flow_features !=  nullptr && subscriber_accounting_flow_features->has_data());
}

bool SubscriberAccounting::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (subscriber_accounting_session_features !=  nullptr && subscriber_accounting_session_features->has_operation())
	|| (subscriber_accounting_summary !=  nullptr && subscriber_accounting_summary->has_operation())
	|| (subscriber_accounting_flow_features !=  nullptr && subscriber_accounting_flow_features->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-oper:subscriber-accounting/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberAccounting::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "subscriber-accounting-flow-features")
    {
        if(subscriber_accounting_flow_features == nullptr)
        {
            subscriber_accounting_flow_features = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures>();
        }
        return subscriber_accounting_flow_features;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(subscriber_accounting_session_features != nullptr)
    {
        children["subscriber-accounting-session-features"] = subscriber_accounting_session_features;
    }

    if(subscriber_accounting_summary != nullptr)
    {
        children["subscriber-accounting-summary"] = subscriber_accounting_summary;
    }

    if(subscriber_accounting_flow_features != nullptr)
    {
        children["subscriber-accounting-flow-features"] = subscriber_accounting_flow_features;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-accounting-session-features" || name == "subscriber-accounting-summary" || name == "subscriber-accounting-flow-features" || name == "node-id")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeatures()
    :
    subscriber_accounting_session_feature(this, {"sub_label"})
{

    yang_name = "subscriber-accounting-session-features"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::~SubscriberAccountingSessionFeatures()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_accounting_session_feature.len(); index++)
    {
        if(subscriber_accounting_session_feature[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::has_operation() const
{
    for (std::size_t index=0; index<subscriber_accounting_session_feature.len(); index++)
    {
        if(subscriber_accounting_session_feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-session-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-accounting-session-feature")
    {
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature>();
        c->parent = this;
        subscriber_accounting_session_feature.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : subscriber_accounting_session_feature.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-accounting-session-feature")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SubscriberAccountingSessionFeature()
    :
    sub_label{YType::uint32, "sub-label"}
        ,
    session_feature_data(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData>())
{
    session_feature_data->parent = this;

    yang_name = "subscriber-accounting-session-feature"; yang_parent_name = "subscriber-accounting-session-features"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::~SubscriberAccountingSessionFeature()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::has_data() const
{
    if (is_presence_container) return true;
    return sub_label.is_set
	|| (session_feature_data !=  nullptr && session_feature_data->has_data());
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_label.yfilter)
	|| (session_feature_data !=  nullptr && session_feature_data->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-session-feature";
    ADD_KEY_TOKEN(sub_label, "sub-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_label.is_set || is_set(sub_label.yfilter)) leaf_name_data.push_back(sub_label.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(session_feature_data != nullptr)
    {
        children["session-feature-data"] = session_feature_data;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-label")
    {
        sub_label = value;
        sub_label.value_namespace = name_space;
        sub_label.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-label")
    {
        sub_label.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-feature-data" || name == "sub-label")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::SessionFeatureData()
    :
    unique_subscriber_label{YType::uint32, "unique-subscriber-label"},
    interface_handle{YType::uint32, "interface-handle"},
    session_disconnected{YType::boolean, "session-disconnected"},
    session_accounting_enabled_flag{YType::boolean, "session-accounting-enabled-flag"},
    session_accounting_method_list{YType::str, "session-accounting-method-list"},
    session_accounting_periodic_interval{YType::uint32, "session-accounting-periodic-interval"},
    session_accounting_aaa_trans_pending{YType::uint32, "session-accounting-aaa-trans-pending"},
    session_accounting_aaa_request_failed{YType::uint32, "session-accounting-aaa-request-failed"},
    session_accounting_started{YType::boolean, "session-accounting-started"},
    session_idle_timeout_enabled_flag{YType::boolean, "session-idle-timeout-enabled-flag"},
    idle_timeout_value{YType::uint32, "idle-timeout-value"},
    idle_timeout_threshold{YType::uint32, "idle-timeout-threshold"},
    idle_timeout_direction{YType::str, "idle-timeout-direction"},
    session_is_idle{YType::boolean, "session-is-idle"},
    session_stats_changed_time{YType::uint32, "session-stats-changed-time"},
    session_total_idle_time{YType::uint32, "session-total-idle-time"},
    session_to_idle_count{YType::uint32, "session-to-idle-count"},
    session_to_awake_count{YType::uint32, "session-to-awake-count"},
    session_idle_to_aaa_trans_pending{YType::uint32, "session-idle-to-aaa-trans-pending"},
    session_idle_to_aaa_request_failed{YType::uint32, "session-idle-to-aaa-request-failed"},
    session_timeout_enabled_flag{YType::boolean, "session-timeout-enabled-flag"},
    session_timeout_value{YType::uint32, "session-timeout-value"},
    session_timeout_time_remaining{YType::uint32, "session-timeout-time-remaining"}
        ,
    service_accounting_feature(this, {})
{

    yang_name = "session-feature-data"; yang_parent_name = "subscriber-accounting-session-feature"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::~SessionFeatureData()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_accounting_feature.len(); index++)
    {
        if(service_accounting_feature[index]->has_data())
            return true;
    }
    return unique_subscriber_label.is_set
	|| interface_handle.is_set
	|| session_disconnected.is_set
	|| session_accounting_enabled_flag.is_set
	|| session_accounting_method_list.is_set
	|| session_accounting_periodic_interval.is_set
	|| session_accounting_aaa_trans_pending.is_set
	|| session_accounting_aaa_request_failed.is_set
	|| session_accounting_started.is_set
	|| session_idle_timeout_enabled_flag.is_set
	|| idle_timeout_value.is_set
	|| idle_timeout_threshold.is_set
	|| idle_timeout_direction.is_set
	|| session_is_idle.is_set
	|| session_stats_changed_time.is_set
	|| session_total_idle_time.is_set
	|| session_to_idle_count.is_set
	|| session_to_awake_count.is_set
	|| session_idle_to_aaa_trans_pending.is_set
	|| session_idle_to_aaa_request_failed.is_set
	|| session_timeout_enabled_flag.is_set
	|| session_timeout_value.is_set
	|| session_timeout_time_remaining.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::has_operation() const
{
    for (std::size_t index=0; index<service_accounting_feature.len(); index++)
    {
        if(service_accounting_feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unique_subscriber_label.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(session_disconnected.yfilter)
	|| ydk::is_set(session_accounting_enabled_flag.yfilter)
	|| ydk::is_set(session_accounting_method_list.yfilter)
	|| ydk::is_set(session_accounting_periodic_interval.yfilter)
	|| ydk::is_set(session_accounting_aaa_trans_pending.yfilter)
	|| ydk::is_set(session_accounting_aaa_request_failed.yfilter)
	|| ydk::is_set(session_accounting_started.yfilter)
	|| ydk::is_set(session_idle_timeout_enabled_flag.yfilter)
	|| ydk::is_set(idle_timeout_value.yfilter)
	|| ydk::is_set(idle_timeout_threshold.yfilter)
	|| ydk::is_set(idle_timeout_direction.yfilter)
	|| ydk::is_set(session_is_idle.yfilter)
	|| ydk::is_set(session_stats_changed_time.yfilter)
	|| ydk::is_set(session_total_idle_time.yfilter)
	|| ydk::is_set(session_to_idle_count.yfilter)
	|| ydk::is_set(session_to_awake_count.yfilter)
	|| ydk::is_set(session_idle_to_aaa_trans_pending.yfilter)
	|| ydk::is_set(session_idle_to_aaa_request_failed.yfilter)
	|| ydk::is_set(session_timeout_enabled_flag.yfilter)
	|| ydk::is_set(session_timeout_value.yfilter)
	|| ydk::is_set(session_timeout_time_remaining.yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-feature-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unique_subscriber_label.is_set || is_set(unique_subscriber_label.yfilter)) leaf_name_data.push_back(unique_subscriber_label.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (session_disconnected.is_set || is_set(session_disconnected.yfilter)) leaf_name_data.push_back(session_disconnected.get_name_leafdata());
    if (session_accounting_enabled_flag.is_set || is_set(session_accounting_enabled_flag.yfilter)) leaf_name_data.push_back(session_accounting_enabled_flag.get_name_leafdata());
    if (session_accounting_method_list.is_set || is_set(session_accounting_method_list.yfilter)) leaf_name_data.push_back(session_accounting_method_list.get_name_leafdata());
    if (session_accounting_periodic_interval.is_set || is_set(session_accounting_periodic_interval.yfilter)) leaf_name_data.push_back(session_accounting_periodic_interval.get_name_leafdata());
    if (session_accounting_aaa_trans_pending.is_set || is_set(session_accounting_aaa_trans_pending.yfilter)) leaf_name_data.push_back(session_accounting_aaa_trans_pending.get_name_leafdata());
    if (session_accounting_aaa_request_failed.is_set || is_set(session_accounting_aaa_request_failed.yfilter)) leaf_name_data.push_back(session_accounting_aaa_request_failed.get_name_leafdata());
    if (session_accounting_started.is_set || is_set(session_accounting_started.yfilter)) leaf_name_data.push_back(session_accounting_started.get_name_leafdata());
    if (session_idle_timeout_enabled_flag.is_set || is_set(session_idle_timeout_enabled_flag.yfilter)) leaf_name_data.push_back(session_idle_timeout_enabled_flag.get_name_leafdata());
    if (idle_timeout_value.is_set || is_set(idle_timeout_value.yfilter)) leaf_name_data.push_back(idle_timeout_value.get_name_leafdata());
    if (idle_timeout_threshold.is_set || is_set(idle_timeout_threshold.yfilter)) leaf_name_data.push_back(idle_timeout_threshold.get_name_leafdata());
    if (idle_timeout_direction.is_set || is_set(idle_timeout_direction.yfilter)) leaf_name_data.push_back(idle_timeout_direction.get_name_leafdata());
    if (session_is_idle.is_set || is_set(session_is_idle.yfilter)) leaf_name_data.push_back(session_is_idle.get_name_leafdata());
    if (session_stats_changed_time.is_set || is_set(session_stats_changed_time.yfilter)) leaf_name_data.push_back(session_stats_changed_time.get_name_leafdata());
    if (session_total_idle_time.is_set || is_set(session_total_idle_time.yfilter)) leaf_name_data.push_back(session_total_idle_time.get_name_leafdata());
    if (session_to_idle_count.is_set || is_set(session_to_idle_count.yfilter)) leaf_name_data.push_back(session_to_idle_count.get_name_leafdata());
    if (session_to_awake_count.is_set || is_set(session_to_awake_count.yfilter)) leaf_name_data.push_back(session_to_awake_count.get_name_leafdata());
    if (session_idle_to_aaa_trans_pending.is_set || is_set(session_idle_to_aaa_trans_pending.yfilter)) leaf_name_data.push_back(session_idle_to_aaa_trans_pending.get_name_leafdata());
    if (session_idle_to_aaa_request_failed.is_set || is_set(session_idle_to_aaa_request_failed.yfilter)) leaf_name_data.push_back(session_idle_to_aaa_request_failed.get_name_leafdata());
    if (session_timeout_enabled_flag.is_set || is_set(session_timeout_enabled_flag.yfilter)) leaf_name_data.push_back(session_timeout_enabled_flag.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());
    if (session_timeout_time_remaining.is_set || is_set(session_timeout_time_remaining.yfilter)) leaf_name_data.push_back(session_timeout_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-accounting-feature")
    {
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature>();
        c->parent = this;
        service_accounting_feature.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : service_accounting_feature.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unique-subscriber-label")
    {
        unique_subscriber_label = value;
        unique_subscriber_label.value_namespace = name_space;
        unique_subscriber_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-disconnected")
    {
        session_disconnected = value;
        session_disconnected.value_namespace = name_space;
        session_disconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-enabled-flag")
    {
        session_accounting_enabled_flag = value;
        session_accounting_enabled_flag.value_namespace = name_space;
        session_accounting_enabled_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-method-list")
    {
        session_accounting_method_list = value;
        session_accounting_method_list.value_namespace = name_space;
        session_accounting_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-periodic-interval")
    {
        session_accounting_periodic_interval = value;
        session_accounting_periodic_interval.value_namespace = name_space;
        session_accounting_periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-aaa-trans-pending")
    {
        session_accounting_aaa_trans_pending = value;
        session_accounting_aaa_trans_pending.value_namespace = name_space;
        session_accounting_aaa_trans_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-aaa-request-failed")
    {
        session_accounting_aaa_request_failed = value;
        session_accounting_aaa_request_failed.value_namespace = name_space;
        session_accounting_aaa_request_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-started")
    {
        session_accounting_started = value;
        session_accounting_started.value_namespace = name_space;
        session_accounting_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-idle-timeout-enabled-flag")
    {
        session_idle_timeout_enabled_flag = value;
        session_idle_timeout_enabled_flag.value_namespace = name_space;
        session_idle_timeout_enabled_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout-value")
    {
        idle_timeout_value = value;
        idle_timeout_value.value_namespace = name_space;
        idle_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout-threshold")
    {
        idle_timeout_threshold = value;
        idle_timeout_threshold.value_namespace = name_space;
        idle_timeout_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout-direction")
    {
        idle_timeout_direction = value;
        idle_timeout_direction.value_namespace = name_space;
        idle_timeout_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-is-idle")
    {
        session_is_idle = value;
        session_is_idle.value_namespace = name_space;
        session_is_idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-stats-changed-time")
    {
        session_stats_changed_time = value;
        session_stats_changed_time.value_namespace = name_space;
        session_stats_changed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-total-idle-time")
    {
        session_total_idle_time = value;
        session_total_idle_time.value_namespace = name_space;
        session_total_idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-to-idle-count")
    {
        session_to_idle_count = value;
        session_to_idle_count.value_namespace = name_space;
        session_to_idle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-to-awake-count")
    {
        session_to_awake_count = value;
        session_to_awake_count.value_namespace = name_space;
        session_to_awake_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-idle-to-aaa-trans-pending")
    {
        session_idle_to_aaa_trans_pending = value;
        session_idle_to_aaa_trans_pending.value_namespace = name_space;
        session_idle_to_aaa_trans_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-idle-to-aaa-request-failed")
    {
        session_idle_to_aaa_request_failed = value;
        session_idle_to_aaa_request_failed.value_namespace = name_space;
        session_idle_to_aaa_request_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-enabled-flag")
    {
        session_timeout_enabled_flag = value;
        session_timeout_enabled_flag.value_namespace = name_space;
        session_timeout_enabled_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-time-remaining")
    {
        session_timeout_time_remaining = value;
        session_timeout_time_remaining.value_namespace = name_space;
        session_timeout_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unique-subscriber-label")
    {
        unique_subscriber_label.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "session-disconnected")
    {
        session_disconnected.yfilter = yfilter;
    }
    if(value_path == "session-accounting-enabled-flag")
    {
        session_accounting_enabled_flag.yfilter = yfilter;
    }
    if(value_path == "session-accounting-method-list")
    {
        session_accounting_method_list.yfilter = yfilter;
    }
    if(value_path == "session-accounting-periodic-interval")
    {
        session_accounting_periodic_interval.yfilter = yfilter;
    }
    if(value_path == "session-accounting-aaa-trans-pending")
    {
        session_accounting_aaa_trans_pending.yfilter = yfilter;
    }
    if(value_path == "session-accounting-aaa-request-failed")
    {
        session_accounting_aaa_request_failed.yfilter = yfilter;
    }
    if(value_path == "session-accounting-started")
    {
        session_accounting_started.yfilter = yfilter;
    }
    if(value_path == "session-idle-timeout-enabled-flag")
    {
        session_idle_timeout_enabled_flag.yfilter = yfilter;
    }
    if(value_path == "idle-timeout-value")
    {
        idle_timeout_value.yfilter = yfilter;
    }
    if(value_path == "idle-timeout-threshold")
    {
        idle_timeout_threshold.yfilter = yfilter;
    }
    if(value_path == "idle-timeout-direction")
    {
        idle_timeout_direction.yfilter = yfilter;
    }
    if(value_path == "session-is-idle")
    {
        session_is_idle.yfilter = yfilter;
    }
    if(value_path == "session-stats-changed-time")
    {
        session_stats_changed_time.yfilter = yfilter;
    }
    if(value_path == "session-total-idle-time")
    {
        session_total_idle_time.yfilter = yfilter;
    }
    if(value_path == "session-to-idle-count")
    {
        session_to_idle_count.yfilter = yfilter;
    }
    if(value_path == "session-to-awake-count")
    {
        session_to_awake_count.yfilter = yfilter;
    }
    if(value_path == "session-idle-to-aaa-trans-pending")
    {
        session_idle_to_aaa_trans_pending.yfilter = yfilter;
    }
    if(value_path == "session-idle-to-aaa-request-failed")
    {
        session_idle_to_aaa_request_failed.yfilter = yfilter;
    }
    if(value_path == "session-timeout-enabled-flag")
    {
        session_timeout_enabled_flag.yfilter = yfilter;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
    if(value_path == "session-timeout-time-remaining")
    {
        session_timeout_time_remaining.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-accounting-feature" || name == "unique-subscriber-label" || name == "interface-handle" || name == "session-disconnected" || name == "session-accounting-enabled-flag" || name == "session-accounting-method-list" || name == "session-accounting-periodic-interval" || name == "session-accounting-aaa-trans-pending" || name == "session-accounting-aaa-request-failed" || name == "session-accounting-started" || name == "session-idle-timeout-enabled-flag" || name == "idle-timeout-value" || name == "idle-timeout-threshold" || name == "idle-timeout-direction" || name == "session-is-idle" || name == "session-stats-changed-time" || name == "session-total-idle-time" || name == "session-to-idle-count" || name == "session-to-awake-count" || name == "session-idle-to-aaa-trans-pending" || name == "session-idle-to-aaa-request-failed" || name == "session-timeout-enabled-flag" || name == "session-timeout-value" || name == "session-timeout-time-remaining")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::ServiceAccountingFeature()
    :
    service_accounting_enabled_flag{YType::boolean, "service-accounting-enabled-flag"},
    service_accounting_service_id{YType::uint32, "service-accounting-service-id"},
    service_accounting_method_list{YType::str, "service-accounting-method-list"},
    service_accounting_periodic_interval{YType::uint32, "service-accounting-periodic-interval"},
    session_accounting_aaa_trans_pending{YType::uint32, "session-accounting-aaa-trans-pending"},
    session_accounting_aaa_request_failed{YType::uint32, "session-accounting-aaa-request-failed"},
    session_accounting_started{YType::boolean, "session-accounting-started"}
{

    yang_name = "service-accounting-feature"; yang_parent_name = "session-feature-data"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::~ServiceAccountingFeature()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::has_data() const
{
    if (is_presence_container) return true;
    return service_accounting_enabled_flag.is_set
	|| service_accounting_service_id.is_set
	|| service_accounting_method_list.is_set
	|| service_accounting_periodic_interval.is_set
	|| session_accounting_aaa_trans_pending.is_set
	|| session_accounting_aaa_request_failed.is_set
	|| session_accounting_started.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_accounting_enabled_flag.yfilter)
	|| ydk::is_set(service_accounting_service_id.yfilter)
	|| ydk::is_set(service_accounting_method_list.yfilter)
	|| ydk::is_set(service_accounting_periodic_interval.yfilter)
	|| ydk::is_set(session_accounting_aaa_trans_pending.yfilter)
	|| ydk::is_set(session_accounting_aaa_request_failed.yfilter)
	|| ydk::is_set(session_accounting_started.yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting-feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_accounting_enabled_flag.is_set || is_set(service_accounting_enabled_flag.yfilter)) leaf_name_data.push_back(service_accounting_enabled_flag.get_name_leafdata());
    if (service_accounting_service_id.is_set || is_set(service_accounting_service_id.yfilter)) leaf_name_data.push_back(service_accounting_service_id.get_name_leafdata());
    if (service_accounting_method_list.is_set || is_set(service_accounting_method_list.yfilter)) leaf_name_data.push_back(service_accounting_method_list.get_name_leafdata());
    if (service_accounting_periodic_interval.is_set || is_set(service_accounting_periodic_interval.yfilter)) leaf_name_data.push_back(service_accounting_periodic_interval.get_name_leafdata());
    if (session_accounting_aaa_trans_pending.is_set || is_set(session_accounting_aaa_trans_pending.yfilter)) leaf_name_data.push_back(session_accounting_aaa_trans_pending.get_name_leafdata());
    if (session_accounting_aaa_request_failed.is_set || is_set(session_accounting_aaa_request_failed.yfilter)) leaf_name_data.push_back(session_accounting_aaa_request_failed.get_name_leafdata());
    if (session_accounting_started.is_set || is_set(session_accounting_started.yfilter)) leaf_name_data.push_back(session_accounting_started.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-accounting-enabled-flag")
    {
        service_accounting_enabled_flag = value;
        service_accounting_enabled_flag.value_namespace = name_space;
        service_accounting_enabled_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-accounting-service-id")
    {
        service_accounting_service_id = value;
        service_accounting_service_id.value_namespace = name_space;
        service_accounting_service_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-accounting-method-list")
    {
        service_accounting_method_list = value;
        service_accounting_method_list.value_namespace = name_space;
        service_accounting_method_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-accounting-periodic-interval")
    {
        service_accounting_periodic_interval = value;
        service_accounting_periodic_interval.value_namespace = name_space;
        service_accounting_periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-aaa-trans-pending")
    {
        session_accounting_aaa_trans_pending = value;
        session_accounting_aaa_trans_pending.value_namespace = name_space;
        session_accounting_aaa_trans_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-aaa-request-failed")
    {
        session_accounting_aaa_request_failed = value;
        session_accounting_aaa_request_failed.value_namespace = name_space;
        session_accounting_aaa_request_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-started")
    {
        session_accounting_started = value;
        session_accounting_started.value_namespace = name_space;
        session_accounting_started.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-accounting-enabled-flag")
    {
        service_accounting_enabled_flag.yfilter = yfilter;
    }
    if(value_path == "service-accounting-service-id")
    {
        service_accounting_service_id.yfilter = yfilter;
    }
    if(value_path == "service-accounting-method-list")
    {
        service_accounting_method_list.yfilter = yfilter;
    }
    if(value_path == "service-accounting-periodic-interval")
    {
        service_accounting_periodic_interval.yfilter = yfilter;
    }
    if(value_path == "session-accounting-aaa-trans-pending")
    {
        session_accounting_aaa_trans_pending.yfilter = yfilter;
    }
    if(value_path == "session-accounting-aaa-request-failed")
    {
        session_accounting_aaa_request_failed.yfilter = yfilter;
    }
    if(value_path == "session-accounting-started")
    {
        session_accounting_started.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSessionFeatures::SubscriberAccountingSessionFeature::SessionFeatureData::ServiceAccountingFeature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-accounting-enabled-flag" || name == "service-accounting-service-id" || name == "service-accounting-method-list" || name == "service-accounting-periodic-interval" || name == "session-accounting-aaa-trans-pending" || name == "session-accounting-aaa-request-failed" || name == "session-accounting-started")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SubscriberAccountingSummary()
    :
    aaa_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters>())
    , idle_timeout_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters>())
    , session_timeout_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters>())
    , session_flow_counters(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters>())
{
    aaa_counters->parent = this;
    idle_timeout_counters->parent = this;
    session_timeout_counters->parent = this;
    session_flow_counters->parent = this;

    yang_name = "subscriber-accounting-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::~SubscriberAccountingSummary()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::has_data() const
{
    if (is_presence_container) return true;
    return (aaa_counters !=  nullptr && aaa_counters->has_data())
	|| (idle_timeout_counters !=  nullptr && idle_timeout_counters->has_data())
	|| (session_timeout_counters !=  nullptr && session_timeout_counters->has_data())
	|| (session_flow_counters !=  nullptr && session_flow_counters->has_data());
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::has_operation() const
{
    return is_set(yfilter)
	|| (aaa_counters !=  nullptr && aaa_counters->has_operation())
	|| (idle_timeout_counters !=  nullptr && idle_timeout_counters->has_operation())
	|| (session_timeout_counters !=  nullptr && session_timeout_counters->has_operation())
	|| (session_flow_counters !=  nullptr && session_flow_counters->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

    if(child_yang_name == "session-timeout-counters")
    {
        if(session_timeout_counters == nullptr)
        {
            session_timeout_counters = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters>();
        }
        return session_timeout_counters;
    }

    if(child_yang_name == "session-flow-counters")
    {
        if(session_flow_counters == nullptr)
        {
            session_flow_counters = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters>();
        }
        return session_flow_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aaa_counters != nullptr)
    {
        children["aaa-counters"] = aaa_counters;
    }

    if(idle_timeout_counters != nullptr)
    {
        children["idle-timeout-counters"] = idle_timeout_counters;
    }

    if(session_timeout_counters != nullptr)
    {
        children["session-timeout-counters"] = session_timeout_counters;
    }

    if(session_flow_counters != nullptr)
    {
        children["session-flow-counters"] = session_flow_counters;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-counters" || name == "idle-timeout-counters" || name == "session-timeout-counters" || name == "session-flow-counters")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::AaaCounters()
    :
    flow_start{YType::uint32, "flow-start"},
    flow_disconnect{YType::uint32, "flow-disconnect"},
    session_accounting_start{YType::uint32, "session-accounting-start"},
    session_accounting_stop{YType::uint32, "session-accounting-stop"},
    session_accounting_update{YType::uint32, "session-accounting-update"},
    service_accounting_start{YType::uint32, "service-accounting-start"},
    service_accounting_stop{YType::uint32, "service-accounting-stop"},
    service_accounting_update{YType::uint32, "service-accounting-update"},
    flow_accounting_start{YType::uint32, "flow-accounting-start"},
    flow_accounting_stop{YType::uint32, "flow-accounting-stop"},
    flow_accounting_update{YType::uint32, "flow-accounting-update"},
    accounting_callback{YType::uint32, "accounting-callback"},
    session_acct_trans_pending{YType::uint32, "session-acct-trans-pending"},
    session_acct_reqs_failed{YType::uint32, "session-acct-reqs-failed"},
    session_acct_out_of_sync{YType::uint32, "session-acct-out-of-sync"},
    session_idle_to_trans_pending{YType::uint32, "session-idle-to-trans-pending"},
    session_idle_to_reqs_failed{YType::uint32, "session-idle-to-reqs-failed"},
    session_idle_to_out_of_sync{YType::uint32, "session-idle-to-out-of-sync"},
    service_acct_trans_pending{YType::uint32, "service-acct-trans-pending"},
    service_acct_reqs_failed{YType::uint32, "service-acct-reqs-failed"},
    service_acct_out_of_sync{YType::uint32, "service-acct-out-of-sync"},
    service_idle_to_trans_pending{YType::uint32, "service-idle-to-trans-pending"},
    service_idle_to_reqs_failed{YType::uint32, "service-idle-to-reqs-failed"},
    service_idle_to_out_of_sync{YType::uint32, "service-idle-to-out-of-sync"},
    prepaid_start{YType::uint32, "prepaid-start"},
    prepaid_stop{YType::uint32, "prepaid-stop"},
    prepaid_accounting_start{YType::uint32, "prepaid-accounting-start"},
    prepaid_accounting_stop{YType::uint32, "prepaid-accounting-stop"},
    prepaid_volume_threshold_reached{YType::uint32, "prepaid-volume-threshold-reached"},
    prepaid_time_threshold_reached{YType::uint32, "prepaid-time-threshold-reached"},
    prepaid_quota_depleted{YType::uint32, "prepaid-quota-depleted"},
    prepaid_reauthorization{YType::uint32, "prepaid-reauthorization"},
    idle_timeout{YType::uint32, "idle-timeout"},
    idle_timeout_response_callback{YType::uint32, "idle-timeout-response-callback"},
    owned_resource_start{YType::uint32, "owned-resource-start"}
{

    yang_name = "aaa-counters"; yang_parent_name = "subscriber-accounting-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::~AaaCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::has_data() const
{
    if (is_presence_container) return true;
    return flow_start.is_set
	|| flow_disconnect.is_set
	|| session_accounting_start.is_set
	|| session_accounting_stop.is_set
	|| session_accounting_update.is_set
	|| service_accounting_start.is_set
	|| service_accounting_stop.is_set
	|| service_accounting_update.is_set
	|| flow_accounting_start.is_set
	|| flow_accounting_stop.is_set
	|| flow_accounting_update.is_set
	|| accounting_callback.is_set
	|| session_acct_trans_pending.is_set
	|| session_acct_reqs_failed.is_set
	|| session_acct_out_of_sync.is_set
	|| session_idle_to_trans_pending.is_set
	|| session_idle_to_reqs_failed.is_set
	|| session_idle_to_out_of_sync.is_set
	|| service_acct_trans_pending.is_set
	|| service_acct_reqs_failed.is_set
	|| service_acct_out_of_sync.is_set
	|| service_idle_to_trans_pending.is_set
	|| service_idle_to_reqs_failed.is_set
	|| service_idle_to_out_of_sync.is_set
	|| prepaid_start.is_set
	|| prepaid_stop.is_set
	|| prepaid_accounting_start.is_set
	|| prepaid_accounting_stop.is_set
	|| prepaid_volume_threshold_reached.is_set
	|| prepaid_time_threshold_reached.is_set
	|| prepaid_quota_depleted.is_set
	|| prepaid_reauthorization.is_set
	|| idle_timeout.is_set
	|| idle_timeout_response_callback.is_set
	|| owned_resource_start.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_start.yfilter)
	|| ydk::is_set(flow_disconnect.yfilter)
	|| ydk::is_set(session_accounting_start.yfilter)
	|| ydk::is_set(session_accounting_stop.yfilter)
	|| ydk::is_set(session_accounting_update.yfilter)
	|| ydk::is_set(service_accounting_start.yfilter)
	|| ydk::is_set(service_accounting_stop.yfilter)
	|| ydk::is_set(service_accounting_update.yfilter)
	|| ydk::is_set(flow_accounting_start.yfilter)
	|| ydk::is_set(flow_accounting_stop.yfilter)
	|| ydk::is_set(flow_accounting_update.yfilter)
	|| ydk::is_set(accounting_callback.yfilter)
	|| ydk::is_set(session_acct_trans_pending.yfilter)
	|| ydk::is_set(session_acct_reqs_failed.yfilter)
	|| ydk::is_set(session_acct_out_of_sync.yfilter)
	|| ydk::is_set(session_idle_to_trans_pending.yfilter)
	|| ydk::is_set(session_idle_to_reqs_failed.yfilter)
	|| ydk::is_set(session_idle_to_out_of_sync.yfilter)
	|| ydk::is_set(service_acct_trans_pending.yfilter)
	|| ydk::is_set(service_acct_reqs_failed.yfilter)
	|| ydk::is_set(service_acct_out_of_sync.yfilter)
	|| ydk::is_set(service_idle_to_trans_pending.yfilter)
	|| ydk::is_set(service_idle_to_reqs_failed.yfilter)
	|| ydk::is_set(service_idle_to_out_of_sync.yfilter)
	|| ydk::is_set(prepaid_start.yfilter)
	|| ydk::is_set(prepaid_stop.yfilter)
	|| ydk::is_set(prepaid_accounting_start.yfilter)
	|| ydk::is_set(prepaid_accounting_stop.yfilter)
	|| ydk::is_set(prepaid_volume_threshold_reached.yfilter)
	|| ydk::is_set(prepaid_time_threshold_reached.yfilter)
	|| ydk::is_set(prepaid_quota_depleted.yfilter)
	|| ydk::is_set(prepaid_reauthorization.yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| ydk::is_set(idle_timeout_response_callback.yfilter)
	|| ydk::is_set(owned_resource_start.yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_start.is_set || is_set(flow_start.yfilter)) leaf_name_data.push_back(flow_start.get_name_leafdata());
    if (flow_disconnect.is_set || is_set(flow_disconnect.yfilter)) leaf_name_data.push_back(flow_disconnect.get_name_leafdata());
    if (session_accounting_start.is_set || is_set(session_accounting_start.yfilter)) leaf_name_data.push_back(session_accounting_start.get_name_leafdata());
    if (session_accounting_stop.is_set || is_set(session_accounting_stop.yfilter)) leaf_name_data.push_back(session_accounting_stop.get_name_leafdata());
    if (session_accounting_update.is_set || is_set(session_accounting_update.yfilter)) leaf_name_data.push_back(session_accounting_update.get_name_leafdata());
    if (service_accounting_start.is_set || is_set(service_accounting_start.yfilter)) leaf_name_data.push_back(service_accounting_start.get_name_leafdata());
    if (service_accounting_stop.is_set || is_set(service_accounting_stop.yfilter)) leaf_name_data.push_back(service_accounting_stop.get_name_leafdata());
    if (service_accounting_update.is_set || is_set(service_accounting_update.yfilter)) leaf_name_data.push_back(service_accounting_update.get_name_leafdata());
    if (flow_accounting_start.is_set || is_set(flow_accounting_start.yfilter)) leaf_name_data.push_back(flow_accounting_start.get_name_leafdata());
    if (flow_accounting_stop.is_set || is_set(flow_accounting_stop.yfilter)) leaf_name_data.push_back(flow_accounting_stop.get_name_leafdata());
    if (flow_accounting_update.is_set || is_set(flow_accounting_update.yfilter)) leaf_name_data.push_back(flow_accounting_update.get_name_leafdata());
    if (accounting_callback.is_set || is_set(accounting_callback.yfilter)) leaf_name_data.push_back(accounting_callback.get_name_leafdata());
    if (session_acct_trans_pending.is_set || is_set(session_acct_trans_pending.yfilter)) leaf_name_data.push_back(session_acct_trans_pending.get_name_leafdata());
    if (session_acct_reqs_failed.is_set || is_set(session_acct_reqs_failed.yfilter)) leaf_name_data.push_back(session_acct_reqs_failed.get_name_leafdata());
    if (session_acct_out_of_sync.is_set || is_set(session_acct_out_of_sync.yfilter)) leaf_name_data.push_back(session_acct_out_of_sync.get_name_leafdata());
    if (session_idle_to_trans_pending.is_set || is_set(session_idle_to_trans_pending.yfilter)) leaf_name_data.push_back(session_idle_to_trans_pending.get_name_leafdata());
    if (session_idle_to_reqs_failed.is_set || is_set(session_idle_to_reqs_failed.yfilter)) leaf_name_data.push_back(session_idle_to_reqs_failed.get_name_leafdata());
    if (session_idle_to_out_of_sync.is_set || is_set(session_idle_to_out_of_sync.yfilter)) leaf_name_data.push_back(session_idle_to_out_of_sync.get_name_leafdata());
    if (service_acct_trans_pending.is_set || is_set(service_acct_trans_pending.yfilter)) leaf_name_data.push_back(service_acct_trans_pending.get_name_leafdata());
    if (service_acct_reqs_failed.is_set || is_set(service_acct_reqs_failed.yfilter)) leaf_name_data.push_back(service_acct_reqs_failed.get_name_leafdata());
    if (service_acct_out_of_sync.is_set || is_set(service_acct_out_of_sync.yfilter)) leaf_name_data.push_back(service_acct_out_of_sync.get_name_leafdata());
    if (service_idle_to_trans_pending.is_set || is_set(service_idle_to_trans_pending.yfilter)) leaf_name_data.push_back(service_idle_to_trans_pending.get_name_leafdata());
    if (service_idle_to_reqs_failed.is_set || is_set(service_idle_to_reqs_failed.yfilter)) leaf_name_data.push_back(service_idle_to_reqs_failed.get_name_leafdata());
    if (service_idle_to_out_of_sync.is_set || is_set(service_idle_to_out_of_sync.yfilter)) leaf_name_data.push_back(service_idle_to_out_of_sync.get_name_leafdata());
    if (prepaid_start.is_set || is_set(prepaid_start.yfilter)) leaf_name_data.push_back(prepaid_start.get_name_leafdata());
    if (prepaid_stop.is_set || is_set(prepaid_stop.yfilter)) leaf_name_data.push_back(prepaid_stop.get_name_leafdata());
    if (prepaid_accounting_start.is_set || is_set(prepaid_accounting_start.yfilter)) leaf_name_data.push_back(prepaid_accounting_start.get_name_leafdata());
    if (prepaid_accounting_stop.is_set || is_set(prepaid_accounting_stop.yfilter)) leaf_name_data.push_back(prepaid_accounting_stop.get_name_leafdata());
    if (prepaid_volume_threshold_reached.is_set || is_set(prepaid_volume_threshold_reached.yfilter)) leaf_name_data.push_back(prepaid_volume_threshold_reached.get_name_leafdata());
    if (prepaid_time_threshold_reached.is_set || is_set(prepaid_time_threshold_reached.yfilter)) leaf_name_data.push_back(prepaid_time_threshold_reached.get_name_leafdata());
    if (prepaid_quota_depleted.is_set || is_set(prepaid_quota_depleted.yfilter)) leaf_name_data.push_back(prepaid_quota_depleted.get_name_leafdata());
    if (prepaid_reauthorization.is_set || is_set(prepaid_reauthorization.yfilter)) leaf_name_data.push_back(prepaid_reauthorization.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (idle_timeout_response_callback.is_set || is_set(idle_timeout_response_callback.yfilter)) leaf_name_data.push_back(idle_timeout_response_callback.get_name_leafdata());
    if (owned_resource_start.is_set || is_set(owned_resource_start.yfilter)) leaf_name_data.push_back(owned_resource_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-start")
    {
        flow_start = value;
        flow_start.value_namespace = name_space;
        flow_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-disconnect")
    {
        flow_disconnect = value;
        flow_disconnect.value_namespace = name_space;
        flow_disconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-start")
    {
        session_accounting_start = value;
        session_accounting_start.value_namespace = name_space;
        session_accounting_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-stop")
    {
        session_accounting_stop = value;
        session_accounting_stop.value_namespace = name_space;
        session_accounting_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-accounting-update")
    {
        session_accounting_update = value;
        session_accounting_update.value_namespace = name_space;
        session_accounting_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-accounting-start")
    {
        service_accounting_start = value;
        service_accounting_start.value_namespace = name_space;
        service_accounting_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-accounting-stop")
    {
        service_accounting_stop = value;
        service_accounting_stop.value_namespace = name_space;
        service_accounting_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-accounting-update")
    {
        service_accounting_update = value;
        service_accounting_update.value_namespace = name_space;
        service_accounting_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-accounting-start")
    {
        flow_accounting_start = value;
        flow_accounting_start.value_namespace = name_space;
        flow_accounting_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-accounting-stop")
    {
        flow_accounting_stop = value;
        flow_accounting_stop.value_namespace = name_space;
        flow_accounting_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-accounting-update")
    {
        flow_accounting_update = value;
        flow_accounting_update.value_namespace = name_space;
        flow_accounting_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-callback")
    {
        accounting_callback = value;
        accounting_callback.value_namespace = name_space;
        accounting_callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-acct-trans-pending")
    {
        session_acct_trans_pending = value;
        session_acct_trans_pending.value_namespace = name_space;
        session_acct_trans_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-acct-reqs-failed")
    {
        session_acct_reqs_failed = value;
        session_acct_reqs_failed.value_namespace = name_space;
        session_acct_reqs_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-acct-out-of-sync")
    {
        session_acct_out_of_sync = value;
        session_acct_out_of_sync.value_namespace = name_space;
        session_acct_out_of_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-idle-to-trans-pending")
    {
        session_idle_to_trans_pending = value;
        session_idle_to_trans_pending.value_namespace = name_space;
        session_idle_to_trans_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-idle-to-reqs-failed")
    {
        session_idle_to_reqs_failed = value;
        session_idle_to_reqs_failed.value_namespace = name_space;
        session_idle_to_reqs_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-idle-to-out-of-sync")
    {
        session_idle_to_out_of_sync = value;
        session_idle_to_out_of_sync.value_namespace = name_space;
        session_idle_to_out_of_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-acct-trans-pending")
    {
        service_acct_trans_pending = value;
        service_acct_trans_pending.value_namespace = name_space;
        service_acct_trans_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-acct-reqs-failed")
    {
        service_acct_reqs_failed = value;
        service_acct_reqs_failed.value_namespace = name_space;
        service_acct_reqs_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-acct-out-of-sync")
    {
        service_acct_out_of_sync = value;
        service_acct_out_of_sync.value_namespace = name_space;
        service_acct_out_of_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-idle-to-trans-pending")
    {
        service_idle_to_trans_pending = value;
        service_idle_to_trans_pending.value_namespace = name_space;
        service_idle_to_trans_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-idle-to-reqs-failed")
    {
        service_idle_to_reqs_failed = value;
        service_idle_to_reqs_failed.value_namespace = name_space;
        service_idle_to_reqs_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-idle-to-out-of-sync")
    {
        service_idle_to_out_of_sync = value;
        service_idle_to_out_of_sync.value_namespace = name_space;
        service_idle_to_out_of_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-start")
    {
        prepaid_start = value;
        prepaid_start.value_namespace = name_space;
        prepaid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-stop")
    {
        prepaid_stop = value;
        prepaid_stop.value_namespace = name_space;
        prepaid_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-accounting-start")
    {
        prepaid_accounting_start = value;
        prepaid_accounting_start.value_namespace = name_space;
        prepaid_accounting_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-accounting-stop")
    {
        prepaid_accounting_stop = value;
        prepaid_accounting_stop.value_namespace = name_space;
        prepaid_accounting_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-threshold-reached")
    {
        prepaid_volume_threshold_reached = value;
        prepaid_volume_threshold_reached.value_namespace = name_space;
        prepaid_volume_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-time-threshold-reached")
    {
        prepaid_time_threshold_reached = value;
        prepaid_time_threshold_reached.value_namespace = name_space;
        prepaid_time_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-quota-depleted")
    {
        prepaid_quota_depleted = value;
        prepaid_quota_depleted.value_namespace = name_space;
        prepaid_quota_depleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-reauthorization")
    {
        prepaid_reauthorization = value;
        prepaid_reauthorization.value_namespace = name_space;
        prepaid_reauthorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout-response-callback")
    {
        idle_timeout_response_callback = value;
        idle_timeout_response_callback.value_namespace = name_space;
        idle_timeout_response_callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owned-resource-start")
    {
        owned_resource_start = value;
        owned_resource_start.value_namespace = name_space;
        owned_resource_start.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-start")
    {
        flow_start.yfilter = yfilter;
    }
    if(value_path == "flow-disconnect")
    {
        flow_disconnect.yfilter = yfilter;
    }
    if(value_path == "session-accounting-start")
    {
        session_accounting_start.yfilter = yfilter;
    }
    if(value_path == "session-accounting-stop")
    {
        session_accounting_stop.yfilter = yfilter;
    }
    if(value_path == "session-accounting-update")
    {
        session_accounting_update.yfilter = yfilter;
    }
    if(value_path == "service-accounting-start")
    {
        service_accounting_start.yfilter = yfilter;
    }
    if(value_path == "service-accounting-stop")
    {
        service_accounting_stop.yfilter = yfilter;
    }
    if(value_path == "service-accounting-update")
    {
        service_accounting_update.yfilter = yfilter;
    }
    if(value_path == "flow-accounting-start")
    {
        flow_accounting_start.yfilter = yfilter;
    }
    if(value_path == "flow-accounting-stop")
    {
        flow_accounting_stop.yfilter = yfilter;
    }
    if(value_path == "flow-accounting-update")
    {
        flow_accounting_update.yfilter = yfilter;
    }
    if(value_path == "accounting-callback")
    {
        accounting_callback.yfilter = yfilter;
    }
    if(value_path == "session-acct-trans-pending")
    {
        session_acct_trans_pending.yfilter = yfilter;
    }
    if(value_path == "session-acct-reqs-failed")
    {
        session_acct_reqs_failed.yfilter = yfilter;
    }
    if(value_path == "session-acct-out-of-sync")
    {
        session_acct_out_of_sync.yfilter = yfilter;
    }
    if(value_path == "session-idle-to-trans-pending")
    {
        session_idle_to_trans_pending.yfilter = yfilter;
    }
    if(value_path == "session-idle-to-reqs-failed")
    {
        session_idle_to_reqs_failed.yfilter = yfilter;
    }
    if(value_path == "session-idle-to-out-of-sync")
    {
        session_idle_to_out_of_sync.yfilter = yfilter;
    }
    if(value_path == "service-acct-trans-pending")
    {
        service_acct_trans_pending.yfilter = yfilter;
    }
    if(value_path == "service-acct-reqs-failed")
    {
        service_acct_reqs_failed.yfilter = yfilter;
    }
    if(value_path == "service-acct-out-of-sync")
    {
        service_acct_out_of_sync.yfilter = yfilter;
    }
    if(value_path == "service-idle-to-trans-pending")
    {
        service_idle_to_trans_pending.yfilter = yfilter;
    }
    if(value_path == "service-idle-to-reqs-failed")
    {
        service_idle_to_reqs_failed.yfilter = yfilter;
    }
    if(value_path == "service-idle-to-out-of-sync")
    {
        service_idle_to_out_of_sync.yfilter = yfilter;
    }
    if(value_path == "prepaid-start")
    {
        prepaid_start.yfilter = yfilter;
    }
    if(value_path == "prepaid-stop")
    {
        prepaid_stop.yfilter = yfilter;
    }
    if(value_path == "prepaid-accounting-start")
    {
        prepaid_accounting_start.yfilter = yfilter;
    }
    if(value_path == "prepaid-accounting-stop")
    {
        prepaid_accounting_stop.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-threshold-reached")
    {
        prepaid_volume_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "prepaid-time-threshold-reached")
    {
        prepaid_time_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "prepaid-quota-depleted")
    {
        prepaid_quota_depleted.yfilter = yfilter;
    }
    if(value_path == "prepaid-reauthorization")
    {
        prepaid_reauthorization.yfilter = yfilter;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
    if(value_path == "idle-timeout-response-callback")
    {
        idle_timeout_response_callback.yfilter = yfilter;
    }
    if(value_path == "owned-resource-start")
    {
        owned_resource_start.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::AaaCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-start" || name == "flow-disconnect" || name == "session-accounting-start" || name == "session-accounting-stop" || name == "session-accounting-update" || name == "service-accounting-start" || name == "service-accounting-stop" || name == "service-accounting-update" || name == "flow-accounting-start" || name == "flow-accounting-stop" || name == "flow-accounting-update" || name == "accounting-callback" || name == "session-acct-trans-pending" || name == "session-acct-reqs-failed" || name == "session-acct-out-of-sync" || name == "session-idle-to-trans-pending" || name == "session-idle-to-reqs-failed" || name == "session-idle-to-out-of-sync" || name == "service-acct-trans-pending" || name == "service-acct-reqs-failed" || name == "service-acct-out-of-sync" || name == "service-idle-to-trans-pending" || name == "service-idle-to-reqs-failed" || name == "service-idle-to-out-of-sync" || name == "prepaid-start" || name == "prepaid-stop" || name == "prepaid-accounting-start" || name == "prepaid-accounting-stop" || name == "prepaid-volume-threshold-reached" || name == "prepaid-time-threshold-reached" || name == "prepaid-quota-depleted" || name == "prepaid-reauthorization" || name == "idle-timeout" || name == "idle-timeout-response-callback" || name == "owned-resource-start")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::IdleTimeoutCounters()
    :
    active_session_idle_timers{YType::uint32, "active-session-idle-timers"},
    idle_sessions{YType::uint32, "idle-sessions"},
    transitions_to_idle{YType::uint32, "transitions-to-idle"},
    transitions_to_awake{YType::uint32, "transitions-to-awake"},
    active_flow_idle_timers{YType::uint32, "active-flow-idle-timers"},
    expired_flow_idle_timers{YType::uint32, "expired-flow-idle-timers"},
    active_prepaid_idle_timers{YType::uint32, "active-prepaid-idle-timers"},
    expired_prepaid_idle_timers{YType::uint32, "expired-prepaid-idle-timers"}
{

    yang_name = "idle-timeout-counters"; yang_parent_name = "subscriber-accounting-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::~IdleTimeoutCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::has_data() const
{
    if (is_presence_container) return true;
    return active_session_idle_timers.is_set
	|| idle_sessions.is_set
	|| transitions_to_idle.is_set
	|| transitions_to_awake.is_set
	|| active_flow_idle_timers.is_set
	|| expired_flow_idle_timers.is_set
	|| active_prepaid_idle_timers.is_set
	|| expired_prepaid_idle_timers.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_session_idle_timers.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(transitions_to_idle.yfilter)
	|| ydk::is_set(transitions_to_awake.yfilter)
	|| ydk::is_set(active_flow_idle_timers.yfilter)
	|| ydk::is_set(expired_flow_idle_timers.yfilter)
	|| ydk::is_set(active_prepaid_idle_timers.yfilter)
	|| ydk::is_set(expired_prepaid_idle_timers.yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-timeout-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_session_idle_timers.is_set || is_set(active_session_idle_timers.yfilter)) leaf_name_data.push_back(active_session_idle_timers.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (transitions_to_idle.is_set || is_set(transitions_to_idle.yfilter)) leaf_name_data.push_back(transitions_to_idle.get_name_leafdata());
    if (transitions_to_awake.is_set || is_set(transitions_to_awake.yfilter)) leaf_name_data.push_back(transitions_to_awake.get_name_leafdata());
    if (active_flow_idle_timers.is_set || is_set(active_flow_idle_timers.yfilter)) leaf_name_data.push_back(active_flow_idle_timers.get_name_leafdata());
    if (expired_flow_idle_timers.is_set || is_set(expired_flow_idle_timers.yfilter)) leaf_name_data.push_back(expired_flow_idle_timers.get_name_leafdata());
    if (active_prepaid_idle_timers.is_set || is_set(active_prepaid_idle_timers.yfilter)) leaf_name_data.push_back(active_prepaid_idle_timers.get_name_leafdata());
    if (expired_prepaid_idle_timers.is_set || is_set(expired_prepaid_idle_timers.yfilter)) leaf_name_data.push_back(expired_prepaid_idle_timers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-session-idle-timers")
    {
        active_session_idle_timers = value;
        active_session_idle_timers.value_namespace = name_space;
        active_session_idle_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions-to-idle")
    {
        transitions_to_idle = value;
        transitions_to_idle.value_namespace = name_space;
        transitions_to_idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions-to-awake")
    {
        transitions_to_awake = value;
        transitions_to_awake.value_namespace = name_space;
        transitions_to_awake.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-flow-idle-timers")
    {
        active_flow_idle_timers = value;
        active_flow_idle_timers.value_namespace = name_space;
        active_flow_idle_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-flow-idle-timers")
    {
        expired_flow_idle_timers = value;
        expired_flow_idle_timers.value_namespace = name_space;
        expired_flow_idle_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-prepaid-idle-timers")
    {
        active_prepaid_idle_timers = value;
        active_prepaid_idle_timers.value_namespace = name_space;
        active_prepaid_idle_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-prepaid-idle-timers")
    {
        expired_prepaid_idle_timers = value;
        expired_prepaid_idle_timers.value_namespace = name_space;
        expired_prepaid_idle_timers.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-session-idle-timers")
    {
        active_session_idle_timers.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "transitions-to-idle")
    {
        transitions_to_idle.yfilter = yfilter;
    }
    if(value_path == "transitions-to-awake")
    {
        transitions_to_awake.yfilter = yfilter;
    }
    if(value_path == "active-flow-idle-timers")
    {
        active_flow_idle_timers.yfilter = yfilter;
    }
    if(value_path == "expired-flow-idle-timers")
    {
        expired_flow_idle_timers.yfilter = yfilter;
    }
    if(value_path == "active-prepaid-idle-timers")
    {
        active_prepaid_idle_timers.yfilter = yfilter;
    }
    if(value_path == "expired-prepaid-idle-timers")
    {
        expired_prepaid_idle_timers.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::IdleTimeoutCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-session-idle-timers" || name == "idle-sessions" || name == "transitions-to-idle" || name == "transitions-to-awake" || name == "active-flow-idle-timers" || name == "expired-flow-idle-timers" || name == "active-prepaid-idle-timers" || name == "expired-prepaid-idle-timers")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::SessionTimeoutCounters()
    :
    active_session_timers{YType::uint32, "active-session-timers"},
    expired_session_timers{YType::uint32, "expired-session-timers"}
{

    yang_name = "session-timeout-counters"; yang_parent_name = "subscriber-accounting-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::~SessionTimeoutCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::has_data() const
{
    if (is_presence_container) return true;
    return active_session_timers.is_set
	|| expired_session_timers.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_session_timers.yfilter)
	|| ydk::is_set(expired_session_timers.yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_session_timers.is_set || is_set(active_session_timers.yfilter)) leaf_name_data.push_back(active_session_timers.get_name_leafdata());
    if (expired_session_timers.is_set || is_set(expired_session_timers.yfilter)) leaf_name_data.push_back(expired_session_timers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-session-timers")
    {
        active_session_timers = value;
        active_session_timers.value_namespace = name_space;
        active_session_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-session-timers")
    {
        expired_session_timers = value;
        expired_session_timers.value_namespace = name_space;
        expired_session_timers.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-session-timers")
    {
        active_session_timers.yfilter = yfilter;
    }
    if(value_path == "expired-session-timers")
    {
        expired_session_timers.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionTimeoutCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-session-timers" || name == "expired-session-timers")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::SessionFlowCounters()
    :
    active_sessions{YType::uint32, "active-sessions"},
    disconnected_sessions{YType::uint32, "disconnected-sessions"},
    active_session_accounting_sessions{YType::uint32, "active-session-accounting-sessions"},
    active_flows{YType::uint32, "active-flows"},
    quota_received{YType::uint32, "quota-received"}
{

    yang_name = "session-flow-counters"; yang_parent_name = "subscriber-accounting-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::~SessionFlowCounters()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::has_data() const
{
    if (is_presence_container) return true;
    return active_sessions.is_set
	|| disconnected_sessions.is_set
	|| active_session_accounting_sessions.is_set
	|| active_flows.is_set
	|| quota_received.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(disconnected_sessions.yfilter)
	|| ydk::is_set(active_session_accounting_sessions.yfilter)
	|| ydk::is_set(active_flows.yfilter)
	|| ydk::is_set(quota_received.yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-flow-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (disconnected_sessions.is_set || is_set(disconnected_sessions.yfilter)) leaf_name_data.push_back(disconnected_sessions.get_name_leafdata());
    if (active_session_accounting_sessions.is_set || is_set(active_session_accounting_sessions.yfilter)) leaf_name_data.push_back(active_session_accounting_sessions.get_name_leafdata());
    if (active_flows.is_set || is_set(active_flows.yfilter)) leaf_name_data.push_back(active_flows.get_name_leafdata());
    if (quota_received.is_set || is_set(quota_received.yfilter)) leaf_name_data.push_back(quota_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnected-sessions")
    {
        disconnected_sessions = value;
        disconnected_sessions.value_namespace = name_space;
        disconnected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-session-accounting-sessions")
    {
        active_session_accounting_sessions = value;
        active_session_accounting_sessions.value_namespace = name_space;
        active_session_accounting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-flows")
    {
        active_flows = value;
        active_flows.value_namespace = name_space;
        active_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quota-received")
    {
        quota_received = value;
        quota_received.value_namespace = name_space;
        quota_received.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnected-sessions")
    {
        disconnected_sessions.yfilter = yfilter;
    }
    if(value_path == "active-session-accounting-sessions")
    {
        active_session_accounting_sessions.yfilter = yfilter;
    }
    if(value_path == "active-flows")
    {
        active_flows.yfilter = yfilter;
    }
    if(value_path == "quota-received")
    {
        quota_received.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingSummary::SessionFlowCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sessions" || name == "disconnected-sessions" || name == "active-session-accounting-sessions" || name == "active-flows" || name == "quota-received")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeatures()
    :
    subscriber_accounting_flow_feature(this, {"class_label"})
{

    yang_name = "subscriber-accounting-flow-features"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::~SubscriberAccountingFlowFeatures()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_accounting_flow_feature.len(); index++)
    {
        if(subscriber_accounting_flow_feature[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::has_operation() const
{
    for (std::size_t index=0; index<subscriber_accounting_flow_feature.len(); index++)
    {
        if(subscriber_accounting_flow_feature[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-flow-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-accounting-flow-feature")
    {
        auto c = std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature>();
        c->parent = this;
        subscriber_accounting_flow_feature.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : subscriber_accounting_flow_feature.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-accounting-flow-feature")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::SubscriberAccountingFlowFeature()
    :
    class_label{YType::uint32, "class-label"}
        ,
    flow_feature_data(std::make_shared<SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData>())
{
    flow_feature_data->parent = this;

    yang_name = "subscriber-accounting-flow-feature"; yang_parent_name = "subscriber-accounting-flow-features"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::~SubscriberAccountingFlowFeature()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::has_data() const
{
    if (is_presence_container) return true;
    return class_label.is_set
	|| (flow_feature_data !=  nullptr && flow_feature_data->has_data());
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_label.yfilter)
	|| (flow_feature_data !=  nullptr && flow_feature_data->has_operation());
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-accounting-flow-feature";
    ADD_KEY_TOKEN(class_label, "class-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_label.is_set || is_set(class_label.yfilter)) leaf_name_data.push_back(class_label.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(flow_feature_data != nullptr)
    {
        children["flow-feature-data"] = flow_feature_data;
    }

    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-label")
    {
        class_label = value;
        class_label.value_namespace = name_space;
        class_label.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-label")
    {
        class_label.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-feature-data" || name == "class-label")
        return true;
    return false;
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::FlowFeatureData()
    :
    flow_accounting_enabled_flag{YType::boolean, "flow-accounting-enabled-flag"},
    flow_idle_timeout_enabled_flag{YType::boolean, "flow-idle-timeout-enabled-flag"},
    prepaid_enabled_flag{YType::boolean, "prepaid-enabled-flag"},
    prepaid_reauth_timer_enabled{YType::boolean, "prepaid-reauth-timer-enabled"},
    prepaid_idle_timeout_enabled{YType::boolean, "prepaid-idle-timeout-enabled"},
    prepaid_final_unit{YType::boolean, "prepaid-final-unit"},
    unique_class_label{YType::uint32, "unique-class-label"},
    flow_direction{YType::uint32, "flow-direction"},
    flow_accounting_periodic_interval{YType::uint32, "flow-accounting-periodic-interval"},
    flow_idle_timeout_value{YType::uint32, "flow-idle-timeout-value"},
    prepaid_time_quota{YType::uint32, "prepaid-time-quota"},
    prepaid_time_threshold{YType::uint32, "prepaid-time-threshold"},
    prepaid_total_time_quota{YType::uint32, "prepaid-total-time-quota"},
    prepaid_volume_threshold{YType::uint32, "prepaid-volume-threshold"},
    prepaid_remaining_qt{YType::uint32, "prepaid-remaining-qt"},
    prepaid_remaining_qat{YType::uint32, "prepaid-remaining-qat"},
    prepaid_remaining_qit{YType::uint32, "prepaid-remaining-qit"},
    prepaid_remaining_qtt{YType::uint32, "prepaid-remaining-qtt"},
    prepaid_remaining_wheel{YType::uint32, "prepaid-remaining-wheel"},
    prepaid_tariff_time{YType::uint32, "prepaid-tariff-time"},
    prepaid_idle_timeout_value{YType::uint32, "prepaid-idle-timeout-value"},
    prepaid_reauth_timeout_value{YType::uint32, "prepaid-reauth-timeout-value"},
    prepaid_ccfh{YType::uint32, "prepaid-ccfh"},
    prepaid_result_code{YType::uint32, "prepaid-result-code"},
    prepaid_volumei_quota{YType::uint64, "prepaid-volumei-quota"},
    prepaid_volumeo_quota{YType::uint64, "prepaid-volumeo-quota"},
    prepaid_volumeb_quota{YType::uint64, "prepaid-volumeb-quota"},
    prepaid_total_volumei_quota{YType::uint64, "prepaid-total-volumei-quota"},
    prepaid_total_volumeo_quota{YType::uint64, "prepaid-total-volumeo-quota"},
    prepaid_total_volumeb_quota{YType::uint64, "prepaid-total-volumeb-quota"},
    prepaid_volume_usedi_quota{YType::uint64, "prepaid-volume-usedi-quota"},
    prepaid_volume_usedo_quota{YType::uint64, "prepaid-volume-usedo-quota"},
    prepaid_volume_refi_quota{YType::uint64, "prepaid-volume-refi-quota"},
    prepaid_volume_refo_quota{YType::uint64, "prepaid-volume-refo-quota"},
    prepaid_volume_refb_quota{YType::uint64, "prepaid-volume-refb-quota"},
    prepaid_volume_agg_refi_quota{YType::uint64, "prepaid-volume-agg-refi-quota"},
    prepaid_volume_agg_refo_quota{YType::uint64, "prepaid-volume-agg-refo-quota"},
    prepaid_volume_agg_refb_quota{YType::uint64, "prepaid-volume-agg-refb-quota"},
    prepaid_volume_newi_quota{YType::uint64, "prepaid-volume-newi-quota"},
    prepaid_volume_newo_quota{YType::uint64, "prepaid-volume-newo-quota"},
    prepaid_volume_newb_quota{YType::uint64, "prepaid-volume-newb-quota"},
    prepaid_tariff_volumei_quota{YType::uint64, "prepaid-tariff-volumei-quota"},
    prepaid_tariff_volumeo_quota{YType::uint64, "prepaid-tariff-volumeo-quota"},
    prepaid_tariff_volumeb_quota{YType::uint64, "prepaid-tariff-volumeb-quota"},
    flow_accounting_method_list_name{YType::str, "flow-accounting-method-list-name"},
    prepaid_cfg{YType::str, "prepaid-cfg"},
    prepaid_time_state{YType::str, "prepaid-time-state"},
    prepaid_volume_state{YType::str, "prepaid-volume-state"},
    prepaid_charging_rule{YType::str, "prepaid-charging-rule"}
{

    yang_name = "flow-feature-data"; yang_parent_name = "subscriber-accounting-flow-feature"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::~FlowFeatureData()
{
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::has_data() const
{
    if (is_presence_container) return true;
    return flow_accounting_enabled_flag.is_set
	|| flow_idle_timeout_enabled_flag.is_set
	|| prepaid_enabled_flag.is_set
	|| prepaid_reauth_timer_enabled.is_set
	|| prepaid_idle_timeout_enabled.is_set
	|| prepaid_final_unit.is_set
	|| unique_class_label.is_set
	|| flow_direction.is_set
	|| flow_accounting_periodic_interval.is_set
	|| flow_idle_timeout_value.is_set
	|| prepaid_time_quota.is_set
	|| prepaid_time_threshold.is_set
	|| prepaid_total_time_quota.is_set
	|| prepaid_volume_threshold.is_set
	|| prepaid_remaining_qt.is_set
	|| prepaid_remaining_qat.is_set
	|| prepaid_remaining_qit.is_set
	|| prepaid_remaining_qtt.is_set
	|| prepaid_remaining_wheel.is_set
	|| prepaid_tariff_time.is_set
	|| prepaid_idle_timeout_value.is_set
	|| prepaid_reauth_timeout_value.is_set
	|| prepaid_ccfh.is_set
	|| prepaid_result_code.is_set
	|| prepaid_volumei_quota.is_set
	|| prepaid_volumeo_quota.is_set
	|| prepaid_volumeb_quota.is_set
	|| prepaid_total_volumei_quota.is_set
	|| prepaid_total_volumeo_quota.is_set
	|| prepaid_total_volumeb_quota.is_set
	|| prepaid_volume_usedi_quota.is_set
	|| prepaid_volume_usedo_quota.is_set
	|| prepaid_volume_refi_quota.is_set
	|| prepaid_volume_refo_quota.is_set
	|| prepaid_volume_refb_quota.is_set
	|| prepaid_volume_agg_refi_quota.is_set
	|| prepaid_volume_agg_refo_quota.is_set
	|| prepaid_volume_agg_refb_quota.is_set
	|| prepaid_volume_newi_quota.is_set
	|| prepaid_volume_newo_quota.is_set
	|| prepaid_volume_newb_quota.is_set
	|| prepaid_tariff_volumei_quota.is_set
	|| prepaid_tariff_volumeo_quota.is_set
	|| prepaid_tariff_volumeb_quota.is_set
	|| flow_accounting_method_list_name.is_set
	|| prepaid_cfg.is_set
	|| prepaid_time_state.is_set
	|| prepaid_volume_state.is_set
	|| prepaid_charging_rule.is_set;
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_accounting_enabled_flag.yfilter)
	|| ydk::is_set(flow_idle_timeout_enabled_flag.yfilter)
	|| ydk::is_set(prepaid_enabled_flag.yfilter)
	|| ydk::is_set(prepaid_reauth_timer_enabled.yfilter)
	|| ydk::is_set(prepaid_idle_timeout_enabled.yfilter)
	|| ydk::is_set(prepaid_final_unit.yfilter)
	|| ydk::is_set(unique_class_label.yfilter)
	|| ydk::is_set(flow_direction.yfilter)
	|| ydk::is_set(flow_accounting_periodic_interval.yfilter)
	|| ydk::is_set(flow_idle_timeout_value.yfilter)
	|| ydk::is_set(prepaid_time_quota.yfilter)
	|| ydk::is_set(prepaid_time_threshold.yfilter)
	|| ydk::is_set(prepaid_total_time_quota.yfilter)
	|| ydk::is_set(prepaid_volume_threshold.yfilter)
	|| ydk::is_set(prepaid_remaining_qt.yfilter)
	|| ydk::is_set(prepaid_remaining_qat.yfilter)
	|| ydk::is_set(prepaid_remaining_qit.yfilter)
	|| ydk::is_set(prepaid_remaining_qtt.yfilter)
	|| ydk::is_set(prepaid_remaining_wheel.yfilter)
	|| ydk::is_set(prepaid_tariff_time.yfilter)
	|| ydk::is_set(prepaid_idle_timeout_value.yfilter)
	|| ydk::is_set(prepaid_reauth_timeout_value.yfilter)
	|| ydk::is_set(prepaid_ccfh.yfilter)
	|| ydk::is_set(prepaid_result_code.yfilter)
	|| ydk::is_set(prepaid_volumei_quota.yfilter)
	|| ydk::is_set(prepaid_volumeo_quota.yfilter)
	|| ydk::is_set(prepaid_volumeb_quota.yfilter)
	|| ydk::is_set(prepaid_total_volumei_quota.yfilter)
	|| ydk::is_set(prepaid_total_volumeo_quota.yfilter)
	|| ydk::is_set(prepaid_total_volumeb_quota.yfilter)
	|| ydk::is_set(prepaid_volume_usedi_quota.yfilter)
	|| ydk::is_set(prepaid_volume_usedo_quota.yfilter)
	|| ydk::is_set(prepaid_volume_refi_quota.yfilter)
	|| ydk::is_set(prepaid_volume_refo_quota.yfilter)
	|| ydk::is_set(prepaid_volume_refb_quota.yfilter)
	|| ydk::is_set(prepaid_volume_agg_refi_quota.yfilter)
	|| ydk::is_set(prepaid_volume_agg_refo_quota.yfilter)
	|| ydk::is_set(prepaid_volume_agg_refb_quota.yfilter)
	|| ydk::is_set(prepaid_volume_newi_quota.yfilter)
	|| ydk::is_set(prepaid_volume_newo_quota.yfilter)
	|| ydk::is_set(prepaid_volume_newb_quota.yfilter)
	|| ydk::is_set(prepaid_tariff_volumei_quota.yfilter)
	|| ydk::is_set(prepaid_tariff_volumeo_quota.yfilter)
	|| ydk::is_set(prepaid_tariff_volumeb_quota.yfilter)
	|| ydk::is_set(flow_accounting_method_list_name.yfilter)
	|| ydk::is_set(prepaid_cfg.yfilter)
	|| ydk::is_set(prepaid_time_state.yfilter)
	|| ydk::is_set(prepaid_volume_state.yfilter)
	|| ydk::is_set(prepaid_charging_rule.yfilter);
}

std::string SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-feature-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_accounting_enabled_flag.is_set || is_set(flow_accounting_enabled_flag.yfilter)) leaf_name_data.push_back(flow_accounting_enabled_flag.get_name_leafdata());
    if (flow_idle_timeout_enabled_flag.is_set || is_set(flow_idle_timeout_enabled_flag.yfilter)) leaf_name_data.push_back(flow_idle_timeout_enabled_flag.get_name_leafdata());
    if (prepaid_enabled_flag.is_set || is_set(prepaid_enabled_flag.yfilter)) leaf_name_data.push_back(prepaid_enabled_flag.get_name_leafdata());
    if (prepaid_reauth_timer_enabled.is_set || is_set(prepaid_reauth_timer_enabled.yfilter)) leaf_name_data.push_back(prepaid_reauth_timer_enabled.get_name_leafdata());
    if (prepaid_idle_timeout_enabled.is_set || is_set(prepaid_idle_timeout_enabled.yfilter)) leaf_name_data.push_back(prepaid_idle_timeout_enabled.get_name_leafdata());
    if (prepaid_final_unit.is_set || is_set(prepaid_final_unit.yfilter)) leaf_name_data.push_back(prepaid_final_unit.get_name_leafdata());
    if (unique_class_label.is_set || is_set(unique_class_label.yfilter)) leaf_name_data.push_back(unique_class_label.get_name_leafdata());
    if (flow_direction.is_set || is_set(flow_direction.yfilter)) leaf_name_data.push_back(flow_direction.get_name_leafdata());
    if (flow_accounting_periodic_interval.is_set || is_set(flow_accounting_periodic_interval.yfilter)) leaf_name_data.push_back(flow_accounting_periodic_interval.get_name_leafdata());
    if (flow_idle_timeout_value.is_set || is_set(flow_idle_timeout_value.yfilter)) leaf_name_data.push_back(flow_idle_timeout_value.get_name_leafdata());
    if (prepaid_time_quota.is_set || is_set(prepaid_time_quota.yfilter)) leaf_name_data.push_back(prepaid_time_quota.get_name_leafdata());
    if (prepaid_time_threshold.is_set || is_set(prepaid_time_threshold.yfilter)) leaf_name_data.push_back(prepaid_time_threshold.get_name_leafdata());
    if (prepaid_total_time_quota.is_set || is_set(prepaid_total_time_quota.yfilter)) leaf_name_data.push_back(prepaid_total_time_quota.get_name_leafdata());
    if (prepaid_volume_threshold.is_set || is_set(prepaid_volume_threshold.yfilter)) leaf_name_data.push_back(prepaid_volume_threshold.get_name_leafdata());
    if (prepaid_remaining_qt.is_set || is_set(prepaid_remaining_qt.yfilter)) leaf_name_data.push_back(prepaid_remaining_qt.get_name_leafdata());
    if (prepaid_remaining_qat.is_set || is_set(prepaid_remaining_qat.yfilter)) leaf_name_data.push_back(prepaid_remaining_qat.get_name_leafdata());
    if (prepaid_remaining_qit.is_set || is_set(prepaid_remaining_qit.yfilter)) leaf_name_data.push_back(prepaid_remaining_qit.get_name_leafdata());
    if (prepaid_remaining_qtt.is_set || is_set(prepaid_remaining_qtt.yfilter)) leaf_name_data.push_back(prepaid_remaining_qtt.get_name_leafdata());
    if (prepaid_remaining_wheel.is_set || is_set(prepaid_remaining_wheel.yfilter)) leaf_name_data.push_back(prepaid_remaining_wheel.get_name_leafdata());
    if (prepaid_tariff_time.is_set || is_set(prepaid_tariff_time.yfilter)) leaf_name_data.push_back(prepaid_tariff_time.get_name_leafdata());
    if (prepaid_idle_timeout_value.is_set || is_set(prepaid_idle_timeout_value.yfilter)) leaf_name_data.push_back(prepaid_idle_timeout_value.get_name_leafdata());
    if (prepaid_reauth_timeout_value.is_set || is_set(prepaid_reauth_timeout_value.yfilter)) leaf_name_data.push_back(prepaid_reauth_timeout_value.get_name_leafdata());
    if (prepaid_ccfh.is_set || is_set(prepaid_ccfh.yfilter)) leaf_name_data.push_back(prepaid_ccfh.get_name_leafdata());
    if (prepaid_result_code.is_set || is_set(prepaid_result_code.yfilter)) leaf_name_data.push_back(prepaid_result_code.get_name_leafdata());
    if (prepaid_volumei_quota.is_set || is_set(prepaid_volumei_quota.yfilter)) leaf_name_data.push_back(prepaid_volumei_quota.get_name_leafdata());
    if (prepaid_volumeo_quota.is_set || is_set(prepaid_volumeo_quota.yfilter)) leaf_name_data.push_back(prepaid_volumeo_quota.get_name_leafdata());
    if (prepaid_volumeb_quota.is_set || is_set(prepaid_volumeb_quota.yfilter)) leaf_name_data.push_back(prepaid_volumeb_quota.get_name_leafdata());
    if (prepaid_total_volumei_quota.is_set || is_set(prepaid_total_volumei_quota.yfilter)) leaf_name_data.push_back(prepaid_total_volumei_quota.get_name_leafdata());
    if (prepaid_total_volumeo_quota.is_set || is_set(prepaid_total_volumeo_quota.yfilter)) leaf_name_data.push_back(prepaid_total_volumeo_quota.get_name_leafdata());
    if (prepaid_total_volumeb_quota.is_set || is_set(prepaid_total_volumeb_quota.yfilter)) leaf_name_data.push_back(prepaid_total_volumeb_quota.get_name_leafdata());
    if (prepaid_volume_usedi_quota.is_set || is_set(prepaid_volume_usedi_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_usedi_quota.get_name_leafdata());
    if (prepaid_volume_usedo_quota.is_set || is_set(prepaid_volume_usedo_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_usedo_quota.get_name_leafdata());
    if (prepaid_volume_refi_quota.is_set || is_set(prepaid_volume_refi_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_refi_quota.get_name_leafdata());
    if (prepaid_volume_refo_quota.is_set || is_set(prepaid_volume_refo_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_refo_quota.get_name_leafdata());
    if (prepaid_volume_refb_quota.is_set || is_set(prepaid_volume_refb_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_refb_quota.get_name_leafdata());
    if (prepaid_volume_agg_refi_quota.is_set || is_set(prepaid_volume_agg_refi_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_agg_refi_quota.get_name_leafdata());
    if (prepaid_volume_agg_refo_quota.is_set || is_set(prepaid_volume_agg_refo_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_agg_refo_quota.get_name_leafdata());
    if (prepaid_volume_agg_refb_quota.is_set || is_set(prepaid_volume_agg_refb_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_agg_refb_quota.get_name_leafdata());
    if (prepaid_volume_newi_quota.is_set || is_set(prepaid_volume_newi_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_newi_quota.get_name_leafdata());
    if (prepaid_volume_newo_quota.is_set || is_set(prepaid_volume_newo_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_newo_quota.get_name_leafdata());
    if (prepaid_volume_newb_quota.is_set || is_set(prepaid_volume_newb_quota.yfilter)) leaf_name_data.push_back(prepaid_volume_newb_quota.get_name_leafdata());
    if (prepaid_tariff_volumei_quota.is_set || is_set(prepaid_tariff_volumei_quota.yfilter)) leaf_name_data.push_back(prepaid_tariff_volumei_quota.get_name_leafdata());
    if (prepaid_tariff_volumeo_quota.is_set || is_set(prepaid_tariff_volumeo_quota.yfilter)) leaf_name_data.push_back(prepaid_tariff_volumeo_quota.get_name_leafdata());
    if (prepaid_tariff_volumeb_quota.is_set || is_set(prepaid_tariff_volumeb_quota.yfilter)) leaf_name_data.push_back(prepaid_tariff_volumeb_quota.get_name_leafdata());
    if (flow_accounting_method_list_name.is_set || is_set(flow_accounting_method_list_name.yfilter)) leaf_name_data.push_back(flow_accounting_method_list_name.get_name_leafdata());
    if (prepaid_cfg.is_set || is_set(prepaid_cfg.yfilter)) leaf_name_data.push_back(prepaid_cfg.get_name_leafdata());
    if (prepaid_time_state.is_set || is_set(prepaid_time_state.yfilter)) leaf_name_data.push_back(prepaid_time_state.get_name_leafdata());
    if (prepaid_volume_state.is_set || is_set(prepaid_volume_state.yfilter)) leaf_name_data.push_back(prepaid_volume_state.get_name_leafdata());
    if (prepaid_charging_rule.is_set || is_set(prepaid_charging_rule.yfilter)) leaf_name_data.push_back(prepaid_charging_rule.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-accounting-enabled-flag")
    {
        flow_accounting_enabled_flag = value;
        flow_accounting_enabled_flag.value_namespace = name_space;
        flow_accounting_enabled_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-idle-timeout-enabled-flag")
    {
        flow_idle_timeout_enabled_flag = value;
        flow_idle_timeout_enabled_flag.value_namespace = name_space;
        flow_idle_timeout_enabled_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-enabled-flag")
    {
        prepaid_enabled_flag = value;
        prepaid_enabled_flag.value_namespace = name_space;
        prepaid_enabled_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-reauth-timer-enabled")
    {
        prepaid_reauth_timer_enabled = value;
        prepaid_reauth_timer_enabled.value_namespace = name_space;
        prepaid_reauth_timer_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-idle-timeout-enabled")
    {
        prepaid_idle_timeout_enabled = value;
        prepaid_idle_timeout_enabled.value_namespace = name_space;
        prepaid_idle_timeout_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-final-unit")
    {
        prepaid_final_unit = value;
        prepaid_final_unit.value_namespace = name_space;
        prepaid_final_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-class-label")
    {
        unique_class_label = value;
        unique_class_label.value_namespace = name_space;
        unique_class_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-direction")
    {
        flow_direction = value;
        flow_direction.value_namespace = name_space;
        flow_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-accounting-periodic-interval")
    {
        flow_accounting_periodic_interval = value;
        flow_accounting_periodic_interval.value_namespace = name_space;
        flow_accounting_periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-idle-timeout-value")
    {
        flow_idle_timeout_value = value;
        flow_idle_timeout_value.value_namespace = name_space;
        flow_idle_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-time-quota")
    {
        prepaid_time_quota = value;
        prepaid_time_quota.value_namespace = name_space;
        prepaid_time_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-time-threshold")
    {
        prepaid_time_threshold = value;
        prepaid_time_threshold.value_namespace = name_space;
        prepaid_time_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-total-time-quota")
    {
        prepaid_total_time_quota = value;
        prepaid_total_time_quota.value_namespace = name_space;
        prepaid_total_time_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-threshold")
    {
        prepaid_volume_threshold = value;
        prepaid_volume_threshold.value_namespace = name_space;
        prepaid_volume_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-remaining-qt")
    {
        prepaid_remaining_qt = value;
        prepaid_remaining_qt.value_namespace = name_space;
        prepaid_remaining_qt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-remaining-qat")
    {
        prepaid_remaining_qat = value;
        prepaid_remaining_qat.value_namespace = name_space;
        prepaid_remaining_qat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-remaining-qit")
    {
        prepaid_remaining_qit = value;
        prepaid_remaining_qit.value_namespace = name_space;
        prepaid_remaining_qit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-remaining-qtt")
    {
        prepaid_remaining_qtt = value;
        prepaid_remaining_qtt.value_namespace = name_space;
        prepaid_remaining_qtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-remaining-wheel")
    {
        prepaid_remaining_wheel = value;
        prepaid_remaining_wheel.value_namespace = name_space;
        prepaid_remaining_wheel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-tariff-time")
    {
        prepaid_tariff_time = value;
        prepaid_tariff_time.value_namespace = name_space;
        prepaid_tariff_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-idle-timeout-value")
    {
        prepaid_idle_timeout_value = value;
        prepaid_idle_timeout_value.value_namespace = name_space;
        prepaid_idle_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-reauth-timeout-value")
    {
        prepaid_reauth_timeout_value = value;
        prepaid_reauth_timeout_value.value_namespace = name_space;
        prepaid_reauth_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-ccfh")
    {
        prepaid_ccfh = value;
        prepaid_ccfh.value_namespace = name_space;
        prepaid_ccfh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-result-code")
    {
        prepaid_result_code = value;
        prepaid_result_code.value_namespace = name_space;
        prepaid_result_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volumei-quota")
    {
        prepaid_volumei_quota = value;
        prepaid_volumei_quota.value_namespace = name_space;
        prepaid_volumei_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volumeo-quota")
    {
        prepaid_volumeo_quota = value;
        prepaid_volumeo_quota.value_namespace = name_space;
        prepaid_volumeo_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volumeb-quota")
    {
        prepaid_volumeb_quota = value;
        prepaid_volumeb_quota.value_namespace = name_space;
        prepaid_volumeb_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-total-volumei-quota")
    {
        prepaid_total_volumei_quota = value;
        prepaid_total_volumei_quota.value_namespace = name_space;
        prepaid_total_volumei_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-total-volumeo-quota")
    {
        prepaid_total_volumeo_quota = value;
        prepaid_total_volumeo_quota.value_namespace = name_space;
        prepaid_total_volumeo_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-total-volumeb-quota")
    {
        prepaid_total_volumeb_quota = value;
        prepaid_total_volumeb_quota.value_namespace = name_space;
        prepaid_total_volumeb_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-usedi-quota")
    {
        prepaid_volume_usedi_quota = value;
        prepaid_volume_usedi_quota.value_namespace = name_space;
        prepaid_volume_usedi_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-usedo-quota")
    {
        prepaid_volume_usedo_quota = value;
        prepaid_volume_usedo_quota.value_namespace = name_space;
        prepaid_volume_usedo_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-refi-quota")
    {
        prepaid_volume_refi_quota = value;
        prepaid_volume_refi_quota.value_namespace = name_space;
        prepaid_volume_refi_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-refo-quota")
    {
        prepaid_volume_refo_quota = value;
        prepaid_volume_refo_quota.value_namespace = name_space;
        prepaid_volume_refo_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-refb-quota")
    {
        prepaid_volume_refb_quota = value;
        prepaid_volume_refb_quota.value_namespace = name_space;
        prepaid_volume_refb_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-agg-refi-quota")
    {
        prepaid_volume_agg_refi_quota = value;
        prepaid_volume_agg_refi_quota.value_namespace = name_space;
        prepaid_volume_agg_refi_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-agg-refo-quota")
    {
        prepaid_volume_agg_refo_quota = value;
        prepaid_volume_agg_refo_quota.value_namespace = name_space;
        prepaid_volume_agg_refo_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-agg-refb-quota")
    {
        prepaid_volume_agg_refb_quota = value;
        prepaid_volume_agg_refb_quota.value_namespace = name_space;
        prepaid_volume_agg_refb_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-newi-quota")
    {
        prepaid_volume_newi_quota = value;
        prepaid_volume_newi_quota.value_namespace = name_space;
        prepaid_volume_newi_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-newo-quota")
    {
        prepaid_volume_newo_quota = value;
        prepaid_volume_newo_quota.value_namespace = name_space;
        prepaid_volume_newo_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-newb-quota")
    {
        prepaid_volume_newb_quota = value;
        prepaid_volume_newb_quota.value_namespace = name_space;
        prepaid_volume_newb_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-tariff-volumei-quota")
    {
        prepaid_tariff_volumei_quota = value;
        prepaid_tariff_volumei_quota.value_namespace = name_space;
        prepaid_tariff_volumei_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-tariff-volumeo-quota")
    {
        prepaid_tariff_volumeo_quota = value;
        prepaid_tariff_volumeo_quota.value_namespace = name_space;
        prepaid_tariff_volumeo_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-tariff-volumeb-quota")
    {
        prepaid_tariff_volumeb_quota = value;
        prepaid_tariff_volumeb_quota.value_namespace = name_space;
        prepaid_tariff_volumeb_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-accounting-method-list-name")
    {
        flow_accounting_method_list_name = value;
        flow_accounting_method_list_name.value_namespace = name_space;
        flow_accounting_method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-cfg")
    {
        prepaid_cfg = value;
        prepaid_cfg.value_namespace = name_space;
        prepaid_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-time-state")
    {
        prepaid_time_state = value;
        prepaid_time_state.value_namespace = name_space;
        prepaid_time_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-volume-state")
    {
        prepaid_volume_state = value;
        prepaid_volume_state.value_namespace = name_space;
        prepaid_volume_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-charging-rule")
    {
        prepaid_charging_rule = value;
        prepaid_charging_rule.value_namespace = name_space;
        prepaid_charging_rule.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-accounting-enabled-flag")
    {
        flow_accounting_enabled_flag.yfilter = yfilter;
    }
    if(value_path == "flow-idle-timeout-enabled-flag")
    {
        flow_idle_timeout_enabled_flag.yfilter = yfilter;
    }
    if(value_path == "prepaid-enabled-flag")
    {
        prepaid_enabled_flag.yfilter = yfilter;
    }
    if(value_path == "prepaid-reauth-timer-enabled")
    {
        prepaid_reauth_timer_enabled.yfilter = yfilter;
    }
    if(value_path == "prepaid-idle-timeout-enabled")
    {
        prepaid_idle_timeout_enabled.yfilter = yfilter;
    }
    if(value_path == "prepaid-final-unit")
    {
        prepaid_final_unit.yfilter = yfilter;
    }
    if(value_path == "unique-class-label")
    {
        unique_class_label.yfilter = yfilter;
    }
    if(value_path == "flow-direction")
    {
        flow_direction.yfilter = yfilter;
    }
    if(value_path == "flow-accounting-periodic-interval")
    {
        flow_accounting_periodic_interval.yfilter = yfilter;
    }
    if(value_path == "flow-idle-timeout-value")
    {
        flow_idle_timeout_value.yfilter = yfilter;
    }
    if(value_path == "prepaid-time-quota")
    {
        prepaid_time_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-time-threshold")
    {
        prepaid_time_threshold.yfilter = yfilter;
    }
    if(value_path == "prepaid-total-time-quota")
    {
        prepaid_total_time_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-threshold")
    {
        prepaid_volume_threshold.yfilter = yfilter;
    }
    if(value_path == "prepaid-remaining-qt")
    {
        prepaid_remaining_qt.yfilter = yfilter;
    }
    if(value_path == "prepaid-remaining-qat")
    {
        prepaid_remaining_qat.yfilter = yfilter;
    }
    if(value_path == "prepaid-remaining-qit")
    {
        prepaid_remaining_qit.yfilter = yfilter;
    }
    if(value_path == "prepaid-remaining-qtt")
    {
        prepaid_remaining_qtt.yfilter = yfilter;
    }
    if(value_path == "prepaid-remaining-wheel")
    {
        prepaid_remaining_wheel.yfilter = yfilter;
    }
    if(value_path == "prepaid-tariff-time")
    {
        prepaid_tariff_time.yfilter = yfilter;
    }
    if(value_path == "prepaid-idle-timeout-value")
    {
        prepaid_idle_timeout_value.yfilter = yfilter;
    }
    if(value_path == "prepaid-reauth-timeout-value")
    {
        prepaid_reauth_timeout_value.yfilter = yfilter;
    }
    if(value_path == "prepaid-ccfh")
    {
        prepaid_ccfh.yfilter = yfilter;
    }
    if(value_path == "prepaid-result-code")
    {
        prepaid_result_code.yfilter = yfilter;
    }
    if(value_path == "prepaid-volumei-quota")
    {
        prepaid_volumei_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volumeo-quota")
    {
        prepaid_volumeo_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volumeb-quota")
    {
        prepaid_volumeb_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-total-volumei-quota")
    {
        prepaid_total_volumei_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-total-volumeo-quota")
    {
        prepaid_total_volumeo_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-total-volumeb-quota")
    {
        prepaid_total_volumeb_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-usedi-quota")
    {
        prepaid_volume_usedi_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-usedo-quota")
    {
        prepaid_volume_usedo_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-refi-quota")
    {
        prepaid_volume_refi_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-refo-quota")
    {
        prepaid_volume_refo_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-refb-quota")
    {
        prepaid_volume_refb_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-agg-refi-quota")
    {
        prepaid_volume_agg_refi_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-agg-refo-quota")
    {
        prepaid_volume_agg_refo_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-agg-refb-quota")
    {
        prepaid_volume_agg_refb_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-newi-quota")
    {
        prepaid_volume_newi_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-newo-quota")
    {
        prepaid_volume_newo_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-newb-quota")
    {
        prepaid_volume_newb_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-tariff-volumei-quota")
    {
        prepaid_tariff_volumei_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-tariff-volumeo-quota")
    {
        prepaid_tariff_volumeo_quota.yfilter = yfilter;
    }
    if(value_path == "prepaid-tariff-volumeb-quota")
    {
        prepaid_tariff_volumeb_quota.yfilter = yfilter;
    }
    if(value_path == "flow-accounting-method-list-name")
    {
        flow_accounting_method_list_name.yfilter = yfilter;
    }
    if(value_path == "prepaid-cfg")
    {
        prepaid_cfg.yfilter = yfilter;
    }
    if(value_path == "prepaid-time-state")
    {
        prepaid_time_state.yfilter = yfilter;
    }
    if(value_path == "prepaid-volume-state")
    {
        prepaid_volume_state.yfilter = yfilter;
    }
    if(value_path == "prepaid-charging-rule")
    {
        prepaid_charging_rule.yfilter = yfilter;
    }
}

bool SubscriberAccounting::Nodes::Node::SubscriberAccountingFlowFeatures::SubscriberAccountingFlowFeature::FlowFeatureData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-accounting-enabled-flag" || name == "flow-idle-timeout-enabled-flag" || name == "prepaid-enabled-flag" || name == "prepaid-reauth-timer-enabled" || name == "prepaid-idle-timeout-enabled" || name == "prepaid-final-unit" || name == "unique-class-label" || name == "flow-direction" || name == "flow-accounting-periodic-interval" || name == "flow-idle-timeout-value" || name == "prepaid-time-quota" || name == "prepaid-time-threshold" || name == "prepaid-total-time-quota" || name == "prepaid-volume-threshold" || name == "prepaid-remaining-qt" || name == "prepaid-remaining-qat" || name == "prepaid-remaining-qit" || name == "prepaid-remaining-qtt" || name == "prepaid-remaining-wheel" || name == "prepaid-tariff-time" || name == "prepaid-idle-timeout-value" || name == "prepaid-reauth-timeout-value" || name == "prepaid-ccfh" || name == "prepaid-result-code" || name == "prepaid-volumei-quota" || name == "prepaid-volumeo-quota" || name == "prepaid-volumeb-quota" || name == "prepaid-total-volumei-quota" || name == "prepaid-total-volumeo-quota" || name == "prepaid-total-volumeb-quota" || name == "prepaid-volume-usedi-quota" || name == "prepaid-volume-usedo-quota" || name == "prepaid-volume-refi-quota" || name == "prepaid-volume-refo-quota" || name == "prepaid-volume-refb-quota" || name == "prepaid-volume-agg-refi-quota" || name == "prepaid-volume-agg-refo-quota" || name == "prepaid-volume-agg-refb-quota" || name == "prepaid-volume-newi-quota" || name == "prepaid-volume-newo-quota" || name == "prepaid-volume-newb-quota" || name == "prepaid-tariff-volumei-quota" || name == "prepaid-tariff-volumeo-quota" || name == "prepaid-tariff-volumeb-quota" || name == "flow-accounting-method-list-name" || name == "prepaid-cfg" || name == "prepaid-time-state" || name == "prepaid-volume-state" || name == "prepaid-charging-rule")
        return true;
    return false;
}


}
}

