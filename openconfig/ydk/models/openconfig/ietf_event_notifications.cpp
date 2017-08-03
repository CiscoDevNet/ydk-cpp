
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_event_notifications.hpp"

using namespace ydk;

namespace openconfig {
namespace ietf_event_notifications {

SubscriptionErrors::SubscriptionErrors()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-errors")
{
}

SubscriptionErrors::~SubscriptionErrors()
{
}

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

SubscriptionResult::SubscriptionResult()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-result")
{
}

SubscriptionResult::~SubscriptionResult()
{
}

Transport::Transport()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:transport")
{
}

Transport::~Transport()
{
}

SubscriptionStreamStatus::SubscriptionStreamStatus()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-stream-status")
{
}

SubscriptionStreamStatus::~SubscriptionStreamStatus()
{
}

EstablishSubscription::EstablishSubscription()
    :
    input(std::make_shared<EstablishSubscription::Input>())
	,output(std::make_shared<EstablishSubscription::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "establish-subscription"; yang_parent_name = "ietf-event-notifications";
}

EstablishSubscription::~EstablishSubscription()
{
}

bool EstablishSubscription::has_data() const
{
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

const EntityPath EstablishSubscription::get_entity_path(Entity* ancestor) const
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
    return ydk_openconfig_models_path;
}

std::string EstablishSubscription::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function EstablishSubscription::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EstablishSubscription::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool EstablishSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

EstablishSubscription::Input::Input()
    :
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    encoding{YType::identityref, "encoding"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    period{YType::uint32, "ietf-yang-push:period"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    stream{YType::identityref, "stream"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"}
{
    yang_name = "input"; yang_parent_name = "establish-subscription";
}

EstablishSubscription::Input::~Input()
{
}

bool EstablishSubscription::Input::has_data() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return anchor_time.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| no_synch_on_start.is_set
	|| period.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| stream.is_set
	|| subscription_dependency.is_set
	|| subscription_priority.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set;
}

bool EstablishSubscription::Input::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter);
}

std::string EstablishSubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EstablishSubscription::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:establish-subscription/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EstablishSubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EstablishSubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EstablishSubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.append(value);
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
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
}

void EstablishSubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
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

bool EstablishSubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anchor-time" || name == "dampening-period" || name == "dscp" || name == "encoding" || name == "excluded-change" || name == "filter" || name == "filter-ref" || name == "no-synch-on-start" || name == "period" || name == "startTime" || name == "stopTime" || name == "stream" || name == "subscription-dependency" || name == "subscription-priority" || name == "subtree-filter" || name == "xpath-filter")
        return true;
    return false;
}

EstablishSubscription::Output::Output()
    :
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    encoding{YType::identityref, "encoding"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    period{YType::uint32, "ietf-yang-push:period"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    stream{YType::identityref, "stream"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"},
    subscription_id{YType::uint32, "subscription-id"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_result{YType::identityref, "subscription-result"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"}
{
    yang_name = "output"; yang_parent_name = "establish-subscription";
}

EstablishSubscription::Output::~Output()
{
}

bool EstablishSubscription::Output::has_data() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return anchor_time.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| no_synch_on_start.is_set
	|| period.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| stream.is_set
	|| subscription_dependency.is_set
	|| subscription_id.is_set
	|| subscription_priority.is_set
	|| subscription_result.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set;
}

bool EstablishSubscription::Output::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_result.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter);
}

std::string EstablishSubscription::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath EstablishSubscription::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:establish-subscription/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_result.is_set || is_set(subscription_result.yfilter)) leaf_name_data.push_back(subscription_result.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EstablishSubscription::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EstablishSubscription::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EstablishSubscription::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.append(value);
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
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-result")
    {
        subscription_result = value;
        subscription_result.value_namespace = name_space;
        subscription_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
}

void EstablishSubscription::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-result")
    {
        subscription_result.yfilter = yfilter;
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

bool EstablishSubscription::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anchor-time" || name == "dampening-period" || name == "dscp" || name == "encoding" || name == "excluded-change" || name == "filter" || name == "filter-ref" || name == "no-synch-on-start" || name == "period" || name == "startTime" || name == "stopTime" || name == "stream" || name == "subscription-dependency" || name == "subscription-id" || name == "subscription-priority" || name == "subscription-result" || name == "subtree-filter" || name == "xpath-filter")
        return true;
    return false;
}

CreateSubscription::CreateSubscription()
    :
    input(std::make_shared<CreateSubscription::Input>())
{
    input->parent = this;

    yang_name = "create-subscription"; yang_parent_name = "ietf-event-notifications";
}

CreateSubscription::~CreateSubscription()
{
}

bool CreateSubscription::has_data() const
{
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

const EntityPath CreateSubscription::get_entity_path(Entity* ancestor) const
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
    return ydk_openconfig_models_path;
}

std::string CreateSubscription::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function CreateSubscription::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CreateSubscription::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool CreateSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CreateSubscription::Input::Input()
    :
    encoding{YType::identityref, "encoding"},
    filter{YType::str, "filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    stream{YType::identityref, "stream"}
{
    yang_name = "input"; yang_parent_name = "create-subscription";
}

CreateSubscription::Input::~Input()
{
}

bool CreateSubscription::Input::has_data() const
{
    return encoding.is_set
	|| filter.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| stream.is_set;
}

bool CreateSubscription::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(stream.yfilter);
}

std::string CreateSubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath CreateSubscription::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:create-subscription/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CreateSubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateSubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CreateSubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
}

void CreateSubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
}

bool CreateSubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encoding" || name == "filter" || name == "startTime" || name == "stopTime" || name == "stream")
        return true;
    return false;
}

ModifySubscription::ModifySubscription()
    :
    input(std::make_shared<ModifySubscription::Input>())
	,output(std::make_shared<ModifySubscription::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "modify-subscription"; yang_parent_name = "ietf-event-notifications";
}

ModifySubscription::~ModifySubscription()
{
}

bool ModifySubscription::has_data() const
{
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

const EntityPath ModifySubscription::get_entity_path(Entity* ancestor) const
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
    return ydk_openconfig_models_path;
}

std::string ModifySubscription::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function ModifySubscription::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ModifySubscription::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool ModifySubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

ModifySubscription::Input::Input()
    :
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    period{YType::uint32, "ietf-yang-push:period"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    subscription_id{YType::uint32, "subscription-id"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"}
{
    yang_name = "input"; yang_parent_name = "modify-subscription";
}

ModifySubscription::Input::~Input()
{
}

bool ModifySubscription::Input::has_data() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return anchor_time.is_set
	|| dampening_period.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| no_synch_on_start.is_set
	|| period.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| subscription_id.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set;
}

bool ModifySubscription::Input::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter);
}

std::string ModifySubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ModifySubscription::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:modify-subscription/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ModifySubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModifySubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ModifySubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.append(value);
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
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
}

void ModifySubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
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

bool ModifySubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anchor-time" || name == "dampening-period" || name == "excluded-change" || name == "filter" || name == "filter-ref" || name == "no-synch-on-start" || name == "period" || name == "startTime" || name == "stopTime" || name == "subscription-id" || name == "subtree-filter" || name == "xpath-filter")
        return true;
    return false;
}

ModifySubscription::Output::Output()
    :
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    encoding{YType::identityref, "encoding"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    period{YType::uint32, "ietf-yang-push:period"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    stream{YType::identityref, "stream"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"},
    subscription_id{YType::uint32, "subscription-id"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_result{YType::identityref, "subscription-result"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"}
{
    yang_name = "output"; yang_parent_name = "modify-subscription";
}

ModifySubscription::Output::~Output()
{
}

bool ModifySubscription::Output::has_data() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return anchor_time.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| no_synch_on_start.is_set
	|| period.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| stream.is_set
	|| subscription_dependency.is_set
	|| subscription_id.is_set
	|| subscription_priority.is_set
	|| subscription_result.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set;
}

bool ModifySubscription::Output::has_operation() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_result.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter);
}

std::string ModifySubscription::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath ModifySubscription::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:modify-subscription/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_result.is_set || is_set(subscription_result.yfilter)) leaf_name_data.push_back(subscription_result.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ModifySubscription::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModifySubscription::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ModifySubscription::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.append(value);
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
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-result")
    {
        subscription_result = value;
        subscription_result.value_namespace = name_space;
        subscription_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
}

void ModifySubscription::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-result")
    {
        subscription_result.yfilter = yfilter;
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

bool ModifySubscription::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anchor-time" || name == "dampening-period" || name == "dscp" || name == "encoding" || name == "excluded-change" || name == "filter" || name == "filter-ref" || name == "no-synch-on-start" || name == "period" || name == "startTime" || name == "stopTime" || name == "stream" || name == "subscription-dependency" || name == "subscription-id" || name == "subscription-priority" || name == "subscription-result" || name == "subtree-filter" || name == "xpath-filter")
        return true;
    return false;
}

DeleteSubscription::DeleteSubscription()
    :
    input(std::make_shared<DeleteSubscription::Input>())
	,output(std::make_shared<DeleteSubscription::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "delete-subscription"; yang_parent_name = "ietf-event-notifications";
}

DeleteSubscription::~DeleteSubscription()
{
}

bool DeleteSubscription::has_data() const
{
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

const EntityPath DeleteSubscription::get_entity_path(Entity* ancestor) const
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
    return ydk_openconfig_models_path;
}

std::string DeleteSubscription::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function DeleteSubscription::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeleteSubscription::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
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
    yang_name = "input"; yang_parent_name = "delete-subscription";
}

DeleteSubscription::Input::~Input()
{
}

bool DeleteSubscription::Input::has_data() const
{
    return subscription_id.is_set;
}

bool DeleteSubscription::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter);
}

std::string DeleteSubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath DeleteSubscription::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:delete-subscription/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DeleteSubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteSubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "output"; yang_parent_name = "delete-subscription";
}

DeleteSubscription::Output::~Output()
{
}

bool DeleteSubscription::Output::has_data() const
{
    return subscription_result.is_set;
}

bool DeleteSubscription::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscription_result.yfilter);
}

std::string DeleteSubscription::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath DeleteSubscription::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:delete-subscription/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_result.is_set || is_set(subscription_result.yfilter)) leaf_name_data.push_back(subscription_result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DeleteSubscription::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteSubscription::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "streams"; yang_parent_name = "ietf-event-notifications";
}

Streams::~Streams()
{
}

bool Streams::has_data() const
{
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

const EntityPath Streams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto stream_name_datas = stream.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), stream_name_datas.begin(), stream_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Streams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Streams::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    return ydk_openconfig_models_path;
}

std::string Streams::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Streams::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Streams::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Streams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream")
        return true;
    return false;
}

Filters::Filters()
{
    yang_name = "filters"; yang_parent_name = "ietf-event-notifications";
}

Filters::~Filters()
{
}

bool Filters::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return false;
}

bool Filters::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
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

const EntityPath Filters::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Filters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Filters::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Filters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
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
    return ydk_openconfig_models_path;
}

std::string Filters::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Filters::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Filters::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
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
    yang_name = "filter"; yang_parent_name = "filters";
}

Filters::Filter::~Filter()
{
}

bool Filters::Filter::has_data() const
{
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

std::string Filters::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter" <<"[filter-id='" <<filter_id <<"']";

    return path_buffer.str();

}

const EntityPath Filters::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:filters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_id.is_set || is_set(filter_id.yfilter)) leaf_name_data.push_back(filter_id.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Filters::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Filters::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath-filter")
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
{
    yang_name = "subscription-config"; yang_parent_name = "ietf-event-notifications";
}

SubscriptionConfig::~SubscriptionConfig()
{
}

bool SubscriptionConfig::has_data() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriptionConfig::has_operation() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
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

const EntityPath SubscriptionConfig::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SubscriptionConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriptionConfig::Subscription>();
        c->parent = this;
        subscription.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriptionConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscription)
    {
        children[c->get_segment_path()] = c;
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
    return ydk_openconfig_models_path;
}

std::string SubscriptionConfig::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function SubscriptionConfig::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriptionConfig::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
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
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    encoding{YType::identityref, "encoding"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    period{YType::uint32, "ietf-yang-push:period"},
    source_address{YType::str, "source-address"},
    source_interface{YType::str, "source-interface"},
    source_vrf{YType::uint32, "source-vrf"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    stream{YType::identityref, "stream"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"}
    	,
    receivers(std::make_shared<SubscriptionConfig::Subscription::Receivers>())
{
    receivers->parent = this;

    yang_name = "subscription"; yang_parent_name = "subscription-config";
}

SubscriptionConfig::Subscription::~Subscription()
{
}

bool SubscriptionConfig::Subscription::has_data() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return subscription_id.is_set
	|| anchor_time.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| no_synch_on_start.is_set
	|| period.is_set
	|| source_address.is_set
	|| source_interface.is_set
	|| source_vrf.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| stream.is_set
	|| subscription_dependency.is_set
	|| subscription_priority.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
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
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_vrf.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| (receivers !=  nullptr && receivers->has_operation());
}

std::string SubscriptionConfig::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription" <<"[subscription-id='" <<subscription_id <<"']";

    return path_buffer.str();

}

const EntityPath SubscriptionConfig::Subscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:subscription-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_vrf.is_set || is_set(source_vrf.yfilter)) leaf_name_data.push_back(source_vrf.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(value_path == "anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.append(value);
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
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriptionConfig::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-vrf")
    {
        source_vrf.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
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

bool SubscriptionConfig::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receivers" || name == "subscription-id" || name == "anchor-time" || name == "dampening-period" || name == "dscp" || name == "encoding" || name == "excluded-change" || name == "filter" || name == "filter-ref" || name == "no-synch-on-start" || name == "period" || name == "source-address" || name == "source-interface" || name == "source-vrf" || name == "startTime" || name == "stopTime" || name == "stream" || name == "subscription-dependency" || name == "subscription-priority" || name == "subtree-filter" || name == "xpath-filter")
        return true;
    return false;
}

SubscriptionConfig::Subscription::Receivers::Receivers()
{
    yang_name = "receivers"; yang_parent_name = "subscription";
}

SubscriptionConfig::Subscription::Receivers::~Receivers()
{
}

bool SubscriptionConfig::Subscription::Receivers::has_data() const
{
    for (std::size_t index=0; index<receiver.size(); index++)
    {
        if(receiver[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriptionConfig::Subscription::Receivers::has_operation() const
{
    for (std::size_t index=0; index<receiver.size(); index++)
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

const EntityPath SubscriptionConfig::Subscription::Receivers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receivers' in ietf_event_notifications cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriptionConfig::Subscription::Receivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        for(auto const & c : receiver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SubscriptionConfig::Subscription::Receivers::Receiver>();
        c->parent = this;
        receiver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriptionConfig::Subscription::Receivers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : receiver)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "receiver"; yang_parent_name = "receivers";
}

SubscriptionConfig::Subscription::Receivers::Receiver::~Receiver()
{
}

bool SubscriptionConfig::Subscription::Receivers::Receiver::has_data() const
{
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
    path_buffer << "receiver" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath SubscriptionConfig::Subscription::Receivers::Receiver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receiver' in ietf_event_notifications cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriptionConfig::Subscription::Receivers::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriptionConfig::Subscription::Receivers::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "subscriptions"; yang_parent_name = "ietf-event-notifications";
}

Subscriptions::~Subscriptions()
{
}

bool Subscriptions::has_data() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriptions::has_operation() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
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

const EntityPath Subscriptions::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Subscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriptions::Subscription>();
        c->parent = this;
        subscription.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscription)
    {
        children[c->get_segment_path()] = c;
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
    return ydk_openconfig_models_path;
}

std::string Subscriptions::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Subscriptions::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Subscriptions::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
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
    anchor_time{YType::str, "ietf-yang-push:anchor-time"},
    configured_subscription{YType::empty, "configured-subscription"},
    dampening_period{YType::uint32, "ietf-yang-push:dampening-period"},
    dscp{YType::uint8, "ietf-yang-push:dscp"},
    encoding{YType::identityref, "encoding"},
    excluded_change{YType::enumeration, "ietf-yang-push:excluded-change"},
    filter{YType::str, "filter"},
    filter_ref{YType::str, "filter-ref"},
    no_synch_on_start{YType::empty, "ietf-yang-push:no-synch-on-start"},
    period{YType::uint32, "ietf-yang-push:period"},
    source_address{YType::str, "source-address"},
    source_interface{YType::str, "source-interface"},
    source_vrf{YType::uint32, "source-vrf"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"},
    stream{YType::identityref, "stream"},
    subscription_dependency{YType::str, "ietf-yang-push:subscription-dependency"},
    subscription_priority{YType::uint8, "ietf-yang-push:subscription-priority"},
    subscription_status{YType::identityref, "subscription-status"},
    subtree_filter{YType::str, "ietf-yang-push:subtree-filter"},
    xpath_filter{YType::str, "ietf-yang-push:xpath-filter"}
    	,
    receivers(std::make_shared<Subscriptions::Subscription::Receivers>())
{
    receivers->parent = this;

    yang_name = "subscription"; yang_parent_name = "subscriptions";
}

Subscriptions::Subscription::~Subscription()
{
}

bool Subscriptions::Subscription::has_data() const
{
    for (auto const & leaf : excluded_change.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return subscription_id.is_set
	|| anchor_time.is_set
	|| configured_subscription.is_set
	|| dampening_period.is_set
	|| dscp.is_set
	|| encoding.is_set
	|| filter.is_set
	|| filter_ref.is_set
	|| no_synch_on_start.is_set
	|| period.is_set
	|| source_address.is_set
	|| source_interface.is_set
	|| source_vrf.is_set
	|| starttime.is_set
	|| stoptime.is_set
	|| stream.is_set
	|| subscription_dependency.is_set
	|| subscription_priority.is_set
	|| subscription_status.is_set
	|| subtree_filter.is_set
	|| xpath_filter.is_set
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
	|| ydk::is_set(anchor_time.yfilter)
	|| ydk::is_set(configured_subscription.yfilter)
	|| ydk::is_set(dampening_period.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(excluded_change.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(filter_ref.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_vrf.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(subscription_dependency.yfilter)
	|| ydk::is_set(subscription_priority.yfilter)
	|| ydk::is_set(subscription_status.yfilter)
	|| ydk::is_set(subtree_filter.yfilter)
	|| ydk::is_set(xpath_filter.yfilter)
	|| (receivers !=  nullptr && receivers->has_operation());
}

std::string Subscriptions::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription" <<"[subscription-id='" <<subscription_id <<"']";

    return path_buffer.str();

}

const EntityPath Subscriptions::Subscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-event-notifications:subscriptions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (anchor_time.is_set || is_set(anchor_time.yfilter)) leaf_name_data.push_back(anchor_time.get_name_leafdata());
    if (configured_subscription.is_set || is_set(configured_subscription.yfilter)) leaf_name_data.push_back(configured_subscription.get_name_leafdata());
    if (dampening_period.is_set || is_set(dampening_period.yfilter)) leaf_name_data.push_back(dampening_period.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (filter_ref.is_set || is_set(filter_ref.yfilter)) leaf_name_data.push_back(filter_ref.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_vrf.is_set || is_set(source_vrf.yfilter)) leaf_name_data.push_back(source_vrf.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (subscription_dependency.is_set || is_set(subscription_dependency.yfilter)) leaf_name_data.push_back(subscription_dependency.get_name_leafdata());
    if (subscription_priority.is_set || is_set(subscription_priority.yfilter)) leaf_name_data.push_back(subscription_priority.get_name_leafdata());
    if (subscription_status.is_set || is_set(subscription_status.yfilter)) leaf_name_data.push_back(subscription_status.get_name_leafdata());
    if (subtree_filter.is_set || is_set(subtree_filter.yfilter)) leaf_name_data.push_back(subtree_filter.get_name_leafdata());
    if (xpath_filter.is_set || is_set(xpath_filter.yfilter)) leaf_name_data.push_back(xpath_filter.get_name_leafdata());

    auto excluded_change_name_datas = excluded_change.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), excluded_change_name_datas.begin(), excluded_change_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(value_path == "anchor-time")
    {
        anchor_time = value;
        anchor_time.value_namespace = name_space;
        anchor_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-subscription")
    {
        configured_subscription = value;
        configured_subscription.value_namespace = name_space;
        configured_subscription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-period")
    {
        dampening_period = value;
        dampening_period.value_namespace = name_space;
        dampening_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.append(value);
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
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency = value;
        subscription_dependency.value_namespace = name_space;
        subscription_dependency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority = value;
        subscription_priority.value_namespace = name_space;
        subscription_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscription-status")
    {
        subscription_status = value;
        subscription_status.value_namespace = name_space;
        subscription_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subtree-filter")
    {
        subtree_filter = value;
        subtree_filter.value_namespace = name_space;
        subtree_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath-filter")
    {
        xpath_filter = value;
        xpath_filter.value_namespace = name_space;
        xpath_filter.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriptions::Subscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "anchor-time")
    {
        anchor_time.yfilter = yfilter;
    }
    if(value_path == "configured-subscription")
    {
        configured_subscription.yfilter = yfilter;
    }
    if(value_path == "dampening-period")
    {
        dampening_period.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "excluded-change")
    {
        excluded_change.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "filter-ref")
    {
        filter_ref.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-vrf")
    {
        source_vrf.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "subscription-dependency")
    {
        subscription_dependency.yfilter = yfilter;
    }
    if(value_path == "subscription-priority")
    {
        subscription_priority.yfilter = yfilter;
    }
    if(value_path == "subscription-status")
    {
        subscription_status.yfilter = yfilter;
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

bool Subscriptions::Subscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receivers" || name == "subscription-id" || name == "anchor-time" || name == "configured-subscription" || name == "dampening-period" || name == "dscp" || name == "encoding" || name == "excluded-change" || name == "filter" || name == "filter-ref" || name == "no-synch-on-start" || name == "period" || name == "source-address" || name == "source-interface" || name == "source-vrf" || name == "startTime" || name == "stopTime" || name == "stream" || name == "subscription-dependency" || name == "subscription-priority" || name == "subscription-status" || name == "subtree-filter" || name == "xpath-filter")
        return true;
    return false;
}

Subscriptions::Subscription::Receivers::Receivers()
{
    yang_name = "receivers"; yang_parent_name = "subscription";
}

Subscriptions::Subscription::Receivers::~Receivers()
{
}

bool Subscriptions::Subscription::Receivers::has_data() const
{
    for (std::size_t index=0; index<receiver.size(); index++)
    {
        if(receiver[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriptions::Subscription::Receivers::has_operation() const
{
    for (std::size_t index=0; index<receiver.size(); index++)
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

const EntityPath Subscriptions::Subscription::Receivers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receivers' in ietf_event_notifications cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriptions::Subscription::Receivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receiver")
    {
        for(auto const & c : receiver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriptions::Subscription::Receivers::Receiver>();
        c->parent = this;
        receiver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriptions::Subscription::Receivers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : receiver)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "receiver"; yang_parent_name = "receivers";
}

Subscriptions::Subscription::Receivers::Receiver::~Receiver()
{
}

bool Subscriptions::Subscription::Receivers::Receiver::has_data() const
{
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
    path_buffer << "receiver" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Subscriptions::Subscription::Receivers::Receiver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receiver' in ietf_event_notifications cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriptions::Subscription::Receivers::Receiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriptions::Subscription::Receivers::Receiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

Other::Other()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:other")
{
}

Other::~Other()
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

Active::Active()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:active")
{
}

Active::~Active()
{
}

Error::Error()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error")
{
}

Error::~Error()
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

Netconf::Netconf()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:NETCONF")
{
}

Netconf::~Netconf()
{
}

ErrorConfiguredSubscription::ErrorConfiguredSubscription()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-configured-subscription")
{
}

ErrorConfiguredSubscription::~ErrorConfiguredSubscription()
{
}

Ok::Ok()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:ok")
{
}

Ok::~Ok()
{
}

ErrorInsufficientResources::ErrorInsufficientResources()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-insufficient-resources")
{
}

ErrorInsufficientResources::~ErrorInsufficientResources()
{
}

InternalError::InternalError()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:internal-error")
{
}

InternalError::~InternalError()
{
}

NoResources::NoResources()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:no-resources")
{
}

NoResources::~NoResources()
{
}

SubscriptionDeleted::SubscriptionDeleted()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:subscription-deleted")
{
}

SubscriptionDeleted::~SubscriptionDeleted()
{
}

EncodeXml::EncodeXml()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:encode-xml")
{
}

EncodeXml::~EncodeXml()
{
}

Inactive::Inactive()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:inactive")
{
}

Inactive::~Inactive()
{
}

ErrorOther::ErrorOther()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-event-notifications", "ietf-event-notifications", "ietf-event-notifications:error-other")
{
}

ErrorOther::~ErrorOther()
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

const Enum::YLeaf PushSource::interface_originated {0, "interface-originated"};
const Enum::YLeaf PushSource::address_originated {1, "address-originated"};


}
}

