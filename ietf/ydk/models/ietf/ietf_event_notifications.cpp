
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_event_notifications.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_event_notifications {

Stream::Stream()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:stream")
{

}

Stream::~Stream()
{
}

Encodings::Encodings()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:encodings")
{

}

Encodings::~Encodings()
{
}

Transport::Transport()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:transport")
{

}

Transport::~Transport()
{
}

SubscriptionResult::SubscriptionResult()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-result")
{

}

SubscriptionResult::~SubscriptionResult()
{
}

SubscriptionStreamStatus::SubscriptionStreamStatus()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-stream-status")
{

}

SubscriptionStreamStatus::~SubscriptionStreamStatus()
{
}

SubscriptionErrors::SubscriptionErrors()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-errors")
{

}

SubscriptionErrors::~SubscriptionErrors()
{
}

EstablishSubscription::EstablishSubscription()
    :
    input(std::make_shared<EstablishSubscription::Input>())
    , output(std::make_shared<EstablishSubscription::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "establish-subscription"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

EstablishSubscription::~EstablishSubscription()
{
}

bool EstablishSubscription::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool EstablishSubscription::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string EstablishSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:establish-subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EstablishSubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EstablishSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EstablishSubscription::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<EstablishSubscription::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EstablishSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void EstablishSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EstablishSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EstablishSubscription::clone_ptr() const
{
    return std::make_shared<EstablishSubscription>();
}

std::string EstablishSubscription::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string EstablishSubscription::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function EstablishSubscription::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EstablishSubscription::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool EstablishSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

EstablishSubscription::Input::Input()
    :
    stream{YType::identityref, "stream"},
    encoding{YType::identityref, "encoding"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    period{YType::uint32, "ietf-yang-push:period"},
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"}
{

    yang_name = "input"; yang_parent_name = "establish-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

EstablishSubscription::Input::~Input()
{
}

bool EstablishSubscription::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return stream.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| period.is_set
	|| anchor_time.is_set
	|| no_synch_on_start.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| subscription_priority.is_set
	|| subscription_dependency.is_set;
}

bool EstablishSubscription::Input::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter);
}

std::string EstablishSubscription::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:establish-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string EstablishSubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EstablishSubscription::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> EstablishSubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EstablishSubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EstablishSubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-ref")
    {
        filter_ref = value;
        filter_ref.value_namespace = name_space;
        filter_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:excluded-change")
    {
        excluded_change.append(value);
    }
    if(value_path == "ietf-yang-push:dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
}

void EstablishSubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter.yfilter = yfilter;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
}

bool EstablishSubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream" || name == "encoding" || name == "filter" || name == "filter-ref" || name == "subtree-filter" || name == "xpath-filter" || name == "startTime" || name == "stopTime" || name == "period" || name == "anchor-time" || name == "no-synch-on-start" || name == "dampening-period" || name == "excluded-change" || name == "dscp" || name == "subscription-priority" || name == "subscription-dependency")
        return true;
    return false;
}

EstablishSubscription::Output::Output()
    :
    subscription_result{YType::identityref, "subscription-result"},
    subscription_id{YType::uint32, "subscription-id"},
    stream{YType::identityref, "stream"},
    encoding{YType::identityref, "encoding"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    period{YType::uint32, "ietf-yang-push:period"},
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"}
{

    yang_name = "output"; yang_parent_name = "establish-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

EstablishSubscription::Output::~Output()
{
}

bool EstablishSubscription::Output::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return subscription_result.is_set
	|| subscription_id.is_set
	|| stream.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| period.is_set
	|| anchor_time.is_set
	|| no_synch_on_start.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| subscription_priority.is_set
	|| subscription_dependency.is_set;
}

bool EstablishSubscription::Output::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_result.yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter);
}

std::string EstablishSubscription::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:establish-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string EstablishSubscription::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EstablishSubscription::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_result.is_set || is_set(subscription_result.yfilter)) leaf_name_data.push_back(subscription_result.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> EstablishSubscription::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EstablishSubscription::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EstablishSubscription::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-result")
    {
        subscription_result = value;
        subscription_result.value_namespace = name_space;
        subscription_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-ref")
    {
        filter_ref = value;
        filter_ref.value_namespace = name_space;
        filter_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:excluded-change")
    {
        excluded_change.append(value);
    }
    if(value_path == "ietf-yang-push:dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
}

void EstablishSubscription::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-result")
    {
        subscription_result.yfilter = yfilter;
    }
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter.yfilter = yfilter;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
}

bool EstablishSubscription::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-result" || name == "subscription-id" || name == "stream" || name == "encoding" || name == "filter" || name == "filter-ref" || name == "subtree-filter" || name == "xpath-filter" || name == "startTime" || name == "stopTime" || name == "period" || name == "anchor-time" || name == "no-synch-on-start" || name == "dampening-period" || name == "excluded-change" || name == "dscp" || name == "subscription-priority" || name == "subscription-dependency")
        return true;
    return false;
}

CreateSubscription::CreateSubscription()
    :
    input(std::make_shared<CreateSubscription::Input>())
{
    input->parent = this;

    yang_name = "create-subscription"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

CreateSubscription::~CreateSubscription()
{
}

bool CreateSubscription::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CreateSubscription::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CreateSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:create-subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateSubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CreateSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CreateSubscription::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CreateSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CreateSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CreateSubscription::clone_ptr() const
{
    return std::make_shared<CreateSubscription>();
}

std::string CreateSubscription::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CreateSubscription::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CreateSubscription::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CreateSubscription::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool CreateSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CreateSubscription::Input::Input()
    :
    stream{YType::identityref, "stream"},
    encoding{YType::identityref, "encoding"},
    filter{YType::str, "filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"}
{

    yang_name = "input"; yang_parent_name = "create-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

CreateSubscription::Input::~Input()
{
}

bool CreateSubscription::Input::has_data() const
{
    if (is_presence_container) return true;
    return stream.is_set
	|| encoding.is_set
	|| filter.is_set
	|| starttime.is_set
	|| stoptime.is_set;
}

bool CreateSubscription::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter);
}

std::string CreateSubscription::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:create-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string CreateSubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateSubscription::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CreateSubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateSubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CreateSubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
}

void CreateSubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
}

bool CreateSubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream" || name == "encoding" || name == "filter" || name == "startTime" || name == "stopTime")
        return true;
    return false;
}

ModifySubscription::ModifySubscription()
    :
    input(std::make_shared<ModifySubscription::Input>())
    , output(std::make_shared<ModifySubscription::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "modify-subscription"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

ModifySubscription::~ModifySubscription()
{
}

bool ModifySubscription::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ModifySubscription::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ModifySubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:modify-subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ModifySubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ModifySubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ModifySubscription::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ModifySubscription::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModifySubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void ModifySubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ModifySubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ModifySubscription::clone_ptr() const
{
    return std::make_shared<ModifySubscription>();
}

std::string ModifySubscription::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string ModifySubscription::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function ModifySubscription::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ModifySubscription::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool ModifySubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

ModifySubscription::Input::Input()
    :
    subscription_id{YType::uint32, "subscription-id"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    period{YType::uint32, "ietf-yang-push:period"},
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"}
{

    yang_name = "input"; yang_parent_name = "modify-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

ModifySubscription::Input::~Input()
{
}

bool ModifySubscription::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return subscription_id.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| period.is_set
	|| anchor_time.is_set
	|| no_synch_on_start.is_set
	|| dampening_period.is_set;
}

bool ModifySubscription::Input::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(excluded_change.yfilter);
}

std::string ModifySubscription::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:modify-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string ModifySubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ModifySubscription::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ModifySubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModifySubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ModifySubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-ref")
    {
        filter_ref = value;
        filter_ref.value_namespace = name_space;
        filter_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:excluded-change")
    {
        excluded_change.append(value);
    }
}

void ModifySubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter.yfilter = yfilter;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
}

bool ModifySubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-id" || name == "filter" || name == "filter-ref" || name == "subtree-filter" || name == "xpath-filter" || name == "startTime" || name == "stopTime" || name == "period" || name == "anchor-time" || name == "no-synch-on-start" || name == "dampening-period" || name == "excluded-change")
        return true;
    return false;
}

ModifySubscription::Output::Output()
    :
    subscription_result{YType::identityref, "subscription-result"},
    subscription_id{YType::uint32, "subscription-id"},
    stream{YType::identityref, "stream"},
    encoding{YType::identityref, "encoding"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    period{YType::uint32, "ietf-yang-push:period"},
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"}
{

    yang_name = "output"; yang_parent_name = "modify-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

ModifySubscription::Output::~Output()
{
}

bool ModifySubscription::Output::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return subscription_result.is_set
	|| subscription_id.is_set
	|| stream.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| period.is_set
	|| anchor_time.is_set
	|| no_synch_on_start.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| subscription_priority.is_set
	|| subscription_dependency.is_set;
}

bool ModifySubscription::Output::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_result.yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter);
}

std::string ModifySubscription::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:modify-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string ModifySubscription::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ModifySubscription::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_result.is_set || is_set(subscription_result.yfilter)) leaf_name_data.push_back(subscription_result.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ModifySubscription::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModifySubscription::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ModifySubscription::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-result")
    {
        subscription_result = value;
        subscription_result.value_namespace = name_space;
        subscription_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-ref")
    {
        filter_ref = value;
        filter_ref.value_namespace = name_space;
        filter_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:excluded-change")
    {
        excluded_change.append(value);
    }
    if(value_path == "ietf-yang-push:dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
}

void ModifySubscription::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-result")
    {
        subscription_result.yfilter = yfilter;
    }
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter.yfilter = yfilter;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
}

bool ModifySubscription::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-result" || name == "subscription-id" || name == "stream" || name == "encoding" || name == "filter" || name == "filter-ref" || name == "subtree-filter" || name == "xpath-filter" || name == "startTime" || name == "stopTime" || name == "period" || name == "anchor-time" || name == "no-synch-on-start" || name == "dampening-period" || name == "excluded-change" || name == "dscp" || name == "subscription-priority" || name == "subscription-dependency")
        return true;
    return false;
}

DeleteSubscription::DeleteSubscription()
    :
    input(std::make_shared<DeleteSubscription::Input>())
    , output(std::make_shared<DeleteSubscription::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "delete-subscription"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

DeleteSubscription::~DeleteSubscription()
{
}

bool DeleteSubscription::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DeleteSubscription::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DeleteSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:delete-subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteSubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<DeleteSubscription::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DeleteSubscription::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DeleteSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeleteSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DeleteSubscription::clone_ptr() const
{
    return std::make_shared<DeleteSubscription>();
}

std::string DeleteSubscription::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string DeleteSubscription::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function DeleteSubscription::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeleteSubscription::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool DeleteSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

DeleteSubscription::Input::Input()
    :
    subscription_id{YType::uint32, "subscription-id"}
{

    yang_name = "input"; yang_parent_name = "delete-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

DeleteSubscription::Input::~Input()
{
}

bool DeleteSubscription::Input::has_data() const
{
    if (is_presence_container) return true;
    return subscription_id.is_set;
}

bool DeleteSubscription::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter);
}

std::string DeleteSubscription::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:delete-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string DeleteSubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteSubscription::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteSubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteSubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeleteSubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
}

void DeleteSubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
}

bool DeleteSubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-id")
        return true;
    return false;
}

DeleteSubscription::Output::Output()
    :
    subscription_result{YType::identityref, "subscription-result"}
{

    yang_name = "output"; yang_parent_name = "delete-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

DeleteSubscription::Output::~Output()
{
}

bool DeleteSubscription::Output::has_data() const
{
    if (is_presence_container) return true;
    return subscription_result.is_set;
}

bool DeleteSubscription::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_result.yfilter);
}

std::string DeleteSubscription::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:delete-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string DeleteSubscription::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteSubscription::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_result.is_set || is_set(subscription_result.yfilter)) leaf_name_data.push_back(subscription_result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteSubscription::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteSubscription::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeleteSubscription::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-result")
    {
        subscription_result = value;
        subscription_result.value_namespace = name_space;
        subscription_result.value_namespace_prefix = name_space_prefix;
    }
}

void DeleteSubscription::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-result")
    {
        subscription_result.yfilter = yfilter;
    }
}

bool DeleteSubscription::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription-result")
        return true;
    return false;
}

Streams::Streams()
    :
    stream{YType::identityref, "stream"}
{

    yang_name = "streams"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

Streams::~Streams()
{
}

bool Streams::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : stream.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Streams::has_operation() const
{
    for (auto const & leaf : stream.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(stream.yfilter);
}

std::string Streams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:streams";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Streams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto stream_name_datas = stream.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), stream_name_datas.begin(), stream_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Streams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Streams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Streams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream")
    {
        Identity identity{name_space, name_space_prefix, value};
        stream.append(identity);
    }
}

void Streams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Streams::clone_ptr() const
{
    return std::make_shared<Streams>();
}

std::string Streams::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Streams::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Streams::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Streams::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Streams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream")
        return true;
    return false;
}

Filters::Filters()
    :
    filter(this, {"filter_id"})
{

    yang_name = "filters"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

Filters::~Filters()
{
}

bool Filters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter.len(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return false;
}

bool Filters::has_operation() const
{
    for (std::size_t index=0; index<filter.len(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Filters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Filters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Filters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        auto c = std::make_shared<Filters::Filter>();
        c->parent = this;
        filter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Filters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : filter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Filters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Filters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Filters::clone_ptr() const
{
    return std::make_shared<Filters>();
}

std::string Filters::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Filters::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Filters::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Filters::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Filters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Filters::Filter::Filter()
    :
    filter_id{YType::uint32, "filter-id"},
    filter{YType::str, "filter"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"}
{

    yang_name = "filter"; yang_parent_name = "filters"; is_top_level_class = false; has_list_ancestor = false; 
}

Filters::Filter::~Filter()
{
}

bool Filters::Filter::has_data() const
{
    if (is_presence_container) return true;
    return filter_id.is_set
	|| filter.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set;
}

bool Filters::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_id.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter);
}

std::string Filters::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:filters/" << get_segment_path();
    return path_buffer.str();
}

std::string Filters::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    ADD_KEY_TOKEN(filter_id, "filter-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Filters::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_id.is_set || is_set(filter_id.yfilter)) leaf_name_data.push_back(filter_id.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Filters::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Filters::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Filters::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-id")
    {
        filter_id = value;
        filter_id.value_namespace = name_space;
        filter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
}

void Filters::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-id")
    {
        filter_id.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter.yfilter = yfilter;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter.yfilter = yfilter;
    }
}

bool Filters::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-id" || name == "filter" || name == "subtree-filter" || name == "xpath-filter")
        return true;
    return false;
}

SubscriptionConfig::SubscriptionConfig()
    :
    subscription(this, {"subscription_id"})
{

    yang_name = "subscription-config"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriptionConfig::~SubscriptionConfig()
{
}

bool SubscriptionConfig::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriptionConfig::has_operation() const
{
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriptionConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:subscription-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriptionConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriptionConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        auto c = std::make_shared<SubscriptionConfig::Subscription>();
        c->parent = this;
        subscription.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriptionConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : subscription.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriptionConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriptionConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SubscriptionConfig::clone_ptr() const
{
    return std::make_shared<SubscriptionConfig>();
}

std::string SubscriptionConfig::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string SubscriptionConfig::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function SubscriptionConfig::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriptionConfig::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool SubscriptionConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

SubscriptionConfig::Subscription::Subscription()
    :
    subscription_id{YType::uint32, "subscription-id"},
    stream{YType::identityref, "stream"},
    encoding{YType::identityref, "encoding"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    source_interface{YType::str, "source-interface"},
    source_vrf{YType::uint32, "source-vrf"},
    source_address{YType::str, "source-address"},
    period{YType::uint32, "ietf-yang-push:period"},
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"}
        ,
    receivers(std::make_shared<SubscriptionConfig::Subscription::Receivers>())
{
    receivers->parent = this;

    yang_name = "subscription"; yang_parent_name = "subscription-config"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriptionConfig::Subscription::~Subscription()
{
}

bool SubscriptionConfig::Subscription::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return subscription_id.is_set
	|| stream.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| source_interface.is_set
	|| source_vrf.is_set
	|| source_address.is_set
	|| period.is_set
	|| anchor_time.is_set
	|| no_synch_on_start.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| subscription_priority.is_set
	|| subscription_dependency.is_set
	|| (receivers !=  nullptr && receivers->has_data());
}

bool SubscriptionConfig::Subscription::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_vrf.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter)
	|| (receivers !=  nullptr && receivers->has_operation());
}

std::string SubscriptionConfig::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:subscription-config/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriptionConfig::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    ADD_KEY_TOKEN(subscription_id, "subscription-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriptionConfig::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_vrf.is_set || is_set(source_vrf.yfilter)) leaf_name_data.push_back(source_vrf.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriptionConfig::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receivers")
    {
        if(receivers == nullptr)
        {
            receivers = std::make_shared<SubscriptionConfig::Subscription::Receivers>();
        }
        return receivers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriptionConfig::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(receivers != nullptr)
    {
        children["receivers"] = receivers;
    }

    return children;
}

void SubscriptionConfig::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-ref")
    {
        filter_ref = value;
        filter_ref.value_namespace = name_space;
        filter_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vrf")
    {
        source_vrf = value;
        source_vrf.value_namespace = name_space;
        source_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:excluded-change")
    {
        excluded_change.append(value);
    }
    if(value_path == "ietf-yang-push:dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriptionConfig::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter.yfilter = yfilter;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-vrf")
    {
        source_vrf.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
}

bool SubscriptionConfig::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receivers" || name == "subscription-id" || name == "stream" || name == "encoding" || name == "filter" || name == "filter-ref" || name == "subtree-filter" || name == "xpath-filter" || name == "startTime" || name == "stopTime" || name == "source-interface" || name == "source-vrf" || name == "source-address" || name == "period" || name == "anchor-time" || name == "no-synch-on-start" || name == "dampening-period" || name == "excluded-change" || name == "dscp" || name == "subscription-priority" || name == "subscription-dependency")
        return true;
    return false;
}

SubscriptionConfig::Subscription::Receivers::Receivers()
    :
    receiver(this, {"address"})
{

    yang_name = "receivers"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriptionConfig::Subscription::Receivers::~Receivers()
{
}

bool SubscriptionConfig::Subscription::Receivers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<receiver.len(); index++)
    {
        if(receiver[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriptionConfig::Subscription::Receivers::has_operation() const
{
    for (std::size_t index=0; index<receiver.len(); index++)
    {
        if(receiver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriptionConfig::Subscription::Receivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receivers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriptionConfig::Subscription::Receivers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriptionConfig::Subscription::Receivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        auto c = std::make_shared<SubscriptionConfig::Subscription::Receivers::Receiver>();
        c->parent = this;
        receiver.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriptionConfig::Subscription::Receivers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : receiver.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SubscriptionConfig::Subscription::Receivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriptionConfig::Subscription::Receivers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriptionConfig::Subscription::Receivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receiver")
        return true;
    return false;
}

SubscriptionConfig::Subscription::Receivers::Receiver::Receiver()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    protocol{YType::identityref, "protocol"}
{

    yang_name = "receiver"; yang_parent_name = "receivers"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriptionConfig::Subscription::Receivers::Receiver::~Receiver()
{
}

bool SubscriptionConfig::Subscription::Receivers::Receiver::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set
	|| protocol.is_set;
}

bool SubscriptionConfig::Subscription::Receivers::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string SubscriptionConfig::Subscription::Receivers::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriptionConfig::Subscription::Receivers::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriptionConfig::Subscription::Receivers::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriptionConfig::Subscription::Receivers::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriptionConfig::Subscription::Receivers::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriptionConfig::Subscription::Receivers::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool SubscriptionConfig::Subscription::Receivers::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "protocol")
        return true;
    return false;
}

Subscriptions::Subscriptions()
    :
    subscription(this, {"subscription_id"})
{

    yang_name = "subscriptions"; yang_parent_name = "ietf-event-notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

Subscriptions::~Subscriptions()
{
}

bool Subscriptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriptions::has_operation() const
{
    for (std::size_t index=0; index<subscription.len(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:subscriptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        auto c = std::make_shared<Subscriptions::Subscription>();
        c->parent = this;
        subscription.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : subscription.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Subscriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Subscriptions::clone_ptr() const
{
    return std::make_shared<Subscriptions>();
}

std::string Subscriptions::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string Subscriptions::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Subscriptions::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Subscriptions::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool Subscriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscription")
        return true;
    return false;
}

Subscriptions::Subscription::Subscription()
    :
    subscription_id{YType::uint32, "subscription-id"},
    configured_subscription{YType::empty, "configured-subscription"},
    subscription_status{YType::identityref, "subscription-status"},
    stream{YType::identityref, "stream"},
    encoding{YType::identityref, "encoding"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    source_interface{YType::str, "source-interface"},
    source_vrf{YType::uint32, "source-vrf"},
    source_address{YType::str, "source-address"},
    period{YType::uint32, "ietf-yang-push:period"},
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"}
        ,
    receivers(std::make_shared<Subscriptions::Subscription::Receivers>())
{
    receivers->parent = this;

    yang_name = "subscription"; yang_parent_name = "subscriptions"; is_top_level_class = false; has_list_ancestor = false; 
}

Subscriptions::Subscription::~Subscription()
{
}

bool Subscriptions::Subscription::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return subscription_id.is_set
	|| configured_subscription.is_set
	|| subscription_status.is_set
	|| stream.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| source_interface.is_set
	|| source_vrf.is_set
	|| source_address.is_set
	|| period.is_set
	|| anchor_time.is_set
	|| no_synch_on_start.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| subscription_priority.is_set
	|| subscription_dependency.is_set
	|| (receivers !=  nullptr && receivers->has_data());
}

bool Subscriptions::Subscription::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(configured_subscription.yfilter)
	|| ydk::is_set(subscription_status.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_vrf.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter)
	|| (receivers !=  nullptr && receivers->has_operation());
}

std::string Subscriptions::Subscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-event-notifications:subscriptions/" << get_segment_path();
    return path_buffer.str();
}

std::string Subscriptions::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription";
    ADD_KEY_TOKEN(subscription_id, "subscription-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriptions::Subscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (configured_subscription.is_set || is_set(configured_subscription.yfilter)) leaf_name_data.push_back(configured_subscription.get_name_leafdata());
    if (subscription_status.is_set || is_set(subscription_status.yfilter)) leaf_name_data.push_back(subscription_status.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_vrf.is_set || is_set(source_vrf.yfilter)) leaf_name_data.push_back(source_vrf.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriptions::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receivers")
    {
        if(receivers == nullptr)
        {
            receivers = std::make_shared<Subscriptions::Subscription::Receivers>();
        }
        return receivers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriptions::Subscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(receivers != nullptr)
    {
        children["receivers"] = receivers;
    }

    return children;
}

void Subscriptions::Subscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-subscription")
    {
        configured_subscription = value;
        configured_subscription.value_namespace = name_space;
        configured_subscription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-status")
    {
        subscription_status = value;
        subscription_status.value_namespace = name_space;
        subscription_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-ref")
    {
        filter_ref = value;
        filter_ref.value_namespace = name_space;
        filter_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vrf")
    {
        source_vrf = value;
        source_vrf.value_namespace = name_space;
        source_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:excluded-change")
    {
        excluded_change.append(value);
    }
    if(value_path == "ietf-yang-push:dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf-yang-push:subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriptions::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "configured-subscription")
    {
        configured_subscription.yfilter = yfilter;
    }
    if(value_path == "subscription-status")
    {
        subscription_status.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter.yfilter = yfilter;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-vrf")
    {
        source_vrf.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
}

bool Subscriptions::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receivers" || name == "subscription-id" || name == "configured-subscription" || name == "subscription-status" || name == "stream" || name == "encoding" || name == "filter" || name == "filter-ref" || name == "subtree-filter" || name == "xpath-filter" || name == "startTime" || name == "stopTime" || name == "source-interface" || name == "source-vrf" || name == "source-address" || name == "period" || name == "anchor-time" || name == "no-synch-on-start" || name == "dampening-period" || name == "excluded-change" || name == "dscp" || name == "subscription-priority" || name == "subscription-dependency")
        return true;
    return false;
}

Subscriptions::Subscription::Receivers::Receivers()
    :
    receiver(this, {"address"})
{

    yang_name = "receivers"; yang_parent_name = "subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriptions::Subscription::Receivers::~Receivers()
{
}

bool Subscriptions::Subscription::Receivers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<receiver.len(); index++)
    {
        if(receiver[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriptions::Subscription::Receivers::has_operation() const
{
    for (std::size_t index=0; index<receiver.len(); index++)
    {
        if(receiver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriptions::Subscription::Receivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receivers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriptions::Subscription::Receivers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriptions::Subscription::Receivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        auto c = std::make_shared<Subscriptions::Subscription::Receivers::Receiver>();
        c->parent = this;
        receiver.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriptions::Subscription::Receivers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : receiver.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Subscriptions::Subscription::Receivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriptions::Subscription::Receivers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriptions::Subscription::Receivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receiver")
        return true;
    return false;
}

Subscriptions::Subscription::Receivers::Receiver::Receiver()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    protocol{YType::identityref, "protocol"}
{

    yang_name = "receiver"; yang_parent_name = "receivers"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriptions::Subscription::Receivers::Receiver::~Receiver()
{
}

bool Subscriptions::Subscription::Receivers::Receiver::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set
	|| protocol.is_set;
}

bool Subscriptions::Subscription::Receivers::Receiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Subscriptions::Subscription::Receivers::Receiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriptions::Subscription::Receivers::Receiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriptions::Subscription::Receivers::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriptions::Subscription::Receivers::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Subscriptions::Subscription::Receivers::Receiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriptions::Subscription::Receivers::Receiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Subscriptions::Subscription::Receivers::Receiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "protocol")
        return true;
    return false;
}

NoResources::NoResources()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:no-resources")
{

}

NoResources::~NoResources()
{
}

Inactive::Inactive()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:inactive")
{

}

Inactive::~Inactive()
{
}

Suspended::Suspended()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:suspended")
{

}

Suspended::~Suspended()
{
}

EncodeJson::EncodeJson()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:encode-json")
{

}

EncodeJson::~EncodeJson()
{
}

InternalError::InternalError()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:internal-error")
{

}

InternalError::~InternalError()
{
}

Other::Other()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:other")
{

}

Other::~Other()
{
}

InError::InError()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:in-error")
{

}

InError::~InError()
{
}

Netconf::Netconf()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:netconf")
{

}

Netconf::~Netconf()
{
}

Error::Error()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error")
{

}

Error::~Error()
{
}

Active::Active()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:active")
{

}

Active::~Active()
{
}

NETCONF::NETCONF()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:NETCONF")
{

}

NETCONF::~NETCONF()
{
}

Ok::Ok()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:ok")
{

}

Ok::~Ok()
{
}

EncodeXml::EncodeXml()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:encode-xml")
{

}

EncodeXml::~EncodeXml()
{
}

SubscriptionDeleted::SubscriptionDeleted()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-deleted")
{

}

SubscriptionDeleted::~SubscriptionDeleted()
{
}

ErrorNoSuchOption::ErrorNoSuchOption()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-no-such-option")
{

}

ErrorNoSuchOption::~ErrorNoSuchOption()
{
}

ErrorNoSuchSubscription::ErrorNoSuchSubscription()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-no-such-subscription")
{

}

ErrorNoSuchSubscription::~ErrorNoSuchSubscription()
{
}

ErrorOther::ErrorOther()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-other")
{

}

ErrorOther::~ErrorOther()
{
}

ErrorInsufficientResources::ErrorInsufficientResources()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-insufficient-resources")
{

}

ErrorInsufficientResources::~ErrorInsufficientResources()
{
}

ErrorConfiguredSubscription::ErrorConfiguredSubscription()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-configured-subscription")
{

}

ErrorConfiguredSubscription::~ErrorConfiguredSubscription()
{
}

const Enum::YLeaf PushSource::interface_originated {0, "interface-originated"};
const Enum::YLeaf PushSource::address_originated {1, "address-originated"};


}
}

