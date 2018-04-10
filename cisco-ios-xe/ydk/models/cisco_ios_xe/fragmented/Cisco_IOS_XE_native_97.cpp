
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_97.hpp"
#include "Cisco_IOS_XE_native_98.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"},
    cost_limit{YType::uint32, "cost-limit"},
    hop_limit{YType::uint8, "hop-limit"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation>())
	,segment_routing(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;
    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::has_data() const
{
    return metric.is_set
	|| cost_limit.is_set
	|| hop_limit.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(hop_limit.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "metric" || name == "cost-limit" || name == "hop-limit" || name == "tiebreaker")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    value_{YType::int32, "value"},
    drop{YType::empty, "drop"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return value_.is_set
	|| drop.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "drop")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{

    yang_name = "segment-routing"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::has_data() const
{
    return adjacency.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::Priority()
    :
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::has_data() const
{
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::RecordRoute()
{

    yang_name = "record-route"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::~RecordRoute()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::has_data() const
{
    return false;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Tunnel_::Rbscp::Rbscp()
    :
    ack_split{YType::uint8, "ack-split"},
    delay{YType::empty, "delay"},
    input_drop{YType::uint8, "input-drop"},
    long_drop{YType::empty, "long-drop"},
    report{YType::empty, "report"},
    window_stuff{YType::uint8, "window-stuff"}
{

    yang_name = "rbscp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Rbscp::~Rbscp()
{
}

bool Native::Interface::Tunnel::Tunnel_::Rbscp::has_data() const
{
    return ack_split.is_set
	|| delay.is_set
	|| input_drop.is_set
	|| long_drop.is_set
	|| report.is_set
	|| window_stuff.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Rbscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_split.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(input_drop.yfilter)
	|| ydk::is_set(long_drop.yfilter)
	|| ydk::is_set(report.yfilter)
	|| ydk::is_set(window_stuff.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Rbscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Rbscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_split.is_set || is_set(ack_split.yfilter)) leaf_name_data.push_back(ack_split.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (input_drop.is_set || is_set(input_drop.yfilter)) leaf_name_data.push_back(input_drop.get_name_leafdata());
    if (long_drop.is_set || is_set(long_drop.yfilter)) leaf_name_data.push_back(long_drop.get_name_leafdata());
    if (report.is_set || is_set(report.yfilter)) leaf_name_data.push_back(report.get_name_leafdata());
    if (window_stuff.is_set || is_set(window_stuff.yfilter)) leaf_name_data.push_back(window_stuff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Rbscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Rbscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Rbscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-split")
    {
        ack_split = value;
        ack_split.value_namespace = name_space;
        ack_split.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drop")
    {
        input_drop = value;
        input_drop.value_namespace = name_space;
        input_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-drop")
    {
        long_drop = value;
        long_drop.value_namespace = name_space;
        long_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report")
    {
        report = value;
        report.value_namespace = name_space;
        report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-stuff")
    {
        window_stuff = value;
        window_stuff.value_namespace = name_space;
        window_stuff.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Rbscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-split")
    {
        ack_split.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "input-drop")
    {
        input_drop.yfilter = yfilter;
    }
    if(value_path == "long-drop")
    {
        long_drop.yfilter = yfilter;
    }
    if(value_path == "report")
    {
        report.yfilter = yfilter;
    }
    if(value_path == "window-stuff")
    {
        window_stuff.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Rbscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-split" || name == "delay" || name == "input-drop" || name == "long-drop" || name == "report" || name == "window-stuff")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::SrcPort::SrcPort()
    :
    port_num{YType::uint16, "port-num"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "src-port"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::SrcPort::~SrcPort()
{
}

bool Native::Interface::Tunnel::Tunnel_::SrcPort::has_data() const
{
    return port_num.is_set
	|| dynamic.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::SrcPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::SrcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::SrcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::SrcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::SrcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-num" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Udlr::Udlr()
    :
    address_resolution{YType::empty, "address-resolution"},
    receive_only{YType::str, "receive-only"},
    send_only{YType::str, "send-only"}
{

    yang_name = "udlr"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Udlr::~Udlr()
{
}

bool Native::Interface::Tunnel::Tunnel_::Udlr::has_data() const
{
    return address_resolution.is_set
	|| receive_only.is_set
	|| send_only.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Udlr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_resolution.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Udlr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udlr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Udlr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_resolution.is_set || is_set(address_resolution.yfilter)) leaf_name_data.push_back(address_resolution.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Udlr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Udlr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Udlr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-resolution")
    {
        address_resolution = value;
        address_resolution.value_namespace = name_space;
        address_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Udlr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-resolution")
    {
        address_resolution.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Udlr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-resolution" || name == "receive-only" || name == "send-only")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Vlan::Vlan()
    :
    id1{YType::uint16, "id1"},
    hyphen{YType::empty, "hyphen"},
    id2{YType::uint16, "id2"}
{

    yang_name = "vlan"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Vlan::~Vlan()
{
}

bool Native::Interface::Tunnel::Tunnel_::Vlan::has_data() const
{
    return id1.is_set
	|| hyphen.is_set
	|| id2.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(id2.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (id2.is_set || is_set(id2.yfilter)) leaf_name_data.push_back(id2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id2")
    {
        id2 = value;
        id2.value_namespace = name_space;
        id2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "id2")
    {
        id2.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id1" || name == "hyphen" || name == "id2")
        return true;
    return false;
}

Native::Interface::Tunnel::Crypto::Crypto()
    :
    map(std::make_shared<Native::Interface::Tunnel::Crypto::Map>())
	,ipsec(std::make_shared<Native::Interface::Tunnel::Crypto::Ipsec>())
{
    map->parent = this;
    ipsec->parent = this;

    yang_name = "crypto"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Crypto::~Crypto()
{
}

bool Native::Interface::Tunnel::Crypto::has_data() const
{
    return (map !=  nullptr && map->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Tunnel::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Tunnel::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Tunnel::Crypto::Map>();
        }
        return map;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Tunnel::Crypto::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map != nullptr)
    {
        children["map"] = map;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::Tunnel::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "ipsec")
        return true;
    return false;
}

Native::Interface::Tunnel::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Crypto::Map::~Map()
{
}

bool Native::Interface::Tunnel::Crypto::Map::has_data() const
{
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::Tunnel::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::Tunnel::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::Tunnel::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::Tunnel::Crypto::Ipsec::has_data() const
{
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::Tunnel::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::Tunnel::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Cts()
    :
    sgt{YType::enumeration, "sgt"}
    	,
    manual(nullptr) // presence node
	,role_based(std::make_shared<Native::Interface::Tunnel::Cts::RoleBased>())
{
    role_based->parent = this;

    yang_name = "cts"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::~Cts()
{
}

bool Native::Interface::Tunnel::Cts::has_data() const
{
    return sgt.is_set
	|| (manual !=  nullptr && manual->has_data())
	|| (role_based !=  nullptr && role_based->has_data());
}

bool Native::Interface::Tunnel::Cts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| (manual !=  nullptr && manual->has_operation())
	|| (role_based !=  nullptr && role_based->has_operation());
}

std::string Native::Interface::Tunnel::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::Tunnel::Cts::Manual>();
        }
        return manual;
    }

    if(child_yang_name == "role-based")
    {
        if(role_based == nullptr)
        {
            role_based = std::make_shared<Native::Interface::Tunnel::Cts::RoleBased>();
        }
        return role_based;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    if(role_based != nullptr)
    {
        children["role-based"] = role_based;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual" || name == "role-based" || name == "sgt")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy>())
	,sap(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap>())
	,propagate(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Propagate>())
{
    policy->parent = this;
    sap->parent = this;
    propagate->parent = this;

    yang_name = "manual"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::~Manual()
{
}

bool Native::Interface::Tunnel::Cts::Manual::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (sap !=  nullptr && sap->has_data())
	|| (propagate !=  nullptr && propagate->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (sap !=  nullptr && sap->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap>();
        }
        return sap;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(sap != nullptr)
    {
        children["sap"] = sap;
    }

    if(propagate != nullptr)
    {
        children["propagate"] = propagate;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "sap" || name == "propagate")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy::Static>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Policy::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Policy::Static::Static()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "static"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Policy::Static::~Static()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::Static::has_data() const
{
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Policy::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Policy::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Policy::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Policy::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Sap()
{

    yang_name = "sap"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::has_data() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk>();
        c->parent = this;
        pmk.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pmk)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
    	,
    mode_list(std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::has_data() const
{
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode_list != nullptr)
    {
        children["mode-list"] = mode_list;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
	,no_encap(nullptr) // presence node
{

    yang_name = "mode-list"; yang_parent_name = "pmk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gcm_encrypt != nullptr)
    {
        children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        children["no-encap"] = no_encap;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{

    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{

    yang_name = "gmac"; yang_parent_name = "gcm-encrypt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    return null.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{

    yang_name = "no-encap"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{

    yang_name = "gmac"; yang_parent_name = "no-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    return gcm_encrypt.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_encrypt.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.yfilter)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
        gcm_encrypt.value_namespace = name_space;
        gcm_encrypt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{

    yang_name = "propagate"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::Tunnel::Cts::Manual::Propagate::has_data() const
{
    return sgt.is_set;
}

bool Native::Interface::Tunnel::Cts::Manual::Propagate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::Tunnel::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::Manual::Propagate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Cts::Manual::Propagate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::Manual::Propagate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::Manual::Propagate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::RoleBased::RoleBased()
    :
    sgt_cache{YType::enumeration, "sgt-cache"},
    enforcement{YType::empty, "enforcement"}
    	,
    sgt_map(std::make_shared<Native::Interface::Tunnel::Cts::RoleBased::SgtMap>())
{
    sgt_map->parent = this;

    yang_name = "role-based"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::RoleBased::~RoleBased()
{
}

bool Native::Interface::Tunnel::Cts::RoleBased::has_data() const
{
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enforcement.is_set
	|| (sgt_map !=  nullptr && sgt_map->has_data());
}

bool Native::Interface::Tunnel::Cts::RoleBased::has_operation() const
{
    for (auto const & leaf : sgt_cache.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sgt_cache.yfilter)
	|| ydk::is_set(enforcement.yfilter)
	|| (sgt_map !=  nullptr && sgt_map->has_operation());
}

std::string Native::Interface::Tunnel::Cts::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-based";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforcement.is_set || is_set(enforcement.yfilter)) leaf_name_data.push_back(enforcement.get_name_leafdata());

    auto sgt_cache_name_datas = sgt_cache.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sgt_cache_name_datas.begin(), sgt_cache_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgt-map")
    {
        if(sgt_map == nullptr)
        {
            sgt_map = std::make_shared<Native::Interface::Tunnel::Cts::RoleBased::SgtMap>();
        }
        return sgt_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sgt_map != nullptr)
    {
        children["sgt-map"] = sgt_map;
    }

    return children;
}

void Native::Interface::Tunnel::Cts::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt-cache")
    {
        sgt_cache.append(value);
    }
    if(value_path == "enforcement")
    {
        enforcement = value;
        enforcement.value_namespace = name_space;
        enforcement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt-cache")
    {
        sgt_cache.yfilter = yfilter;
    }
    if(value_path == "enforcement")
    {
        enforcement.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt-map" || name == "sgt-cache" || name == "enforcement")
        return true;
    return false;
}

Native::Interface::Tunnel::Cts::RoleBased::SgtMap::SgtMap()
    :
    security_group{YType::str, "security-group"},
    sgt{YType::uint16, "sgt"}
{

    yang_name = "sgt-map"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Cts::RoleBased::SgtMap::~SgtMap()
{
}

bool Native::Interface::Tunnel::Cts::RoleBased::SgtMap::has_data() const
{
    return security_group.is_set
	|| sgt.is_set;
}

bool Native::Interface::Tunnel::Cts::RoleBased::SgtMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_group.yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgt-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security_group.is_set || is_set(security_group.yfilter)) leaf_name_data.push_back(security_group.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Cts::RoleBased::SgtMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Cts::RoleBased::SgtMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security-group")
    {
        security_group = value;
        security_group.value_namespace = name_space;
        security_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cts::RoleBased::SgtMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security-group")
    {
        security_group.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cts::RoleBased::SgtMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "sgt")
        return true;
    return false;
}

Native::Interface::Tunnel::EtAnalytics::EtAnalytics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "et-analytics"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::EtAnalytics::~EtAnalytics()
{
}

bool Native::Interface::Tunnel::EtAnalytics::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Tunnel::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Tunnel::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Tunnel::Performance::Performance()
    :
    monitor(std::make_shared<Native::Interface::Tunnel::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Performance::~Performance()
{
}

bool Native::Interface::Tunnel::Performance::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::Tunnel::Performance::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::Tunnel::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:performance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Performance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::Tunnel::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Interface::Tunnel::Performance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Performance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Performance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::Tunnel::Performance::Monitor::Monitor()
    :
    context{YType::str, "context"}
{

    yang_name = "monitor"; yang_parent_name = "performance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Performance::Monitor::~Monitor()
{
}

bool Native::Interface::Tunnel::Performance::Monitor::has_data() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Performance::Monitor::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string Native::Interface::Tunnel::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Performance::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Performance::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

void Native::Interface::Tunnel::Performance::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Performance::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Tunnel::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Tunnel::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Tunnel::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::Tunnel::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Tunnel::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::get_children() const
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

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
    	,
    mobility(std::make_shared<Native::Interface::Tunnel::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Lisp::~Lisp()
{
}

bool Native::Interface::Tunnel::Lisp::has_data() const
{
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::Tunnel::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::Tunnel::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mobility != nullptr)
    {
        children["mobility"] = mobility;
    }

    return children;
}

void Native::Interface::Tunnel::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::Mobility()
    :
    dynamic_eid(std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::DynamicEid>())
	,discover(std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Discover>())
	,liveness(std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Liveness>())
{
    dynamic_eid->parent = this;
    discover->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::has_data() const
{
    return (dynamic_eid !=  nullptr && dynamic_eid->has_data())
	|| (discover !=  nullptr && discover->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::Tunnel::Lisp::Mobility::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_operation())
	|| (discover !=  nullptr && discover->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::Tunnel::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-eid")
    {
        if(dynamic_eid == nullptr)
        {
            dynamic_eid = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::DynamicEid>();
        }
        return dynamic_eid;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::Tunnel::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic_eid != nullptr)
    {
        children["dynamic-eid"] = dynamic_eid;
    }

    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(liveness != nullptr)
    {
        children["liveness"] = liveness;
    }

    return children;
}

void Native::Interface::Tunnel::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid" || name == "discover" || name == "liveness")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"},
    nbr_proxy_reply{YType::empty, "nbr-proxy-reply"},
    requests{YType::uint8, "requests"}
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::has_data() const
{
    return dynamic_eid_name.is_set
	|| nbr_proxy_reply.is_set
	|| requests.is_set;
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| ydk::is_set(nbr_proxy_reply.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());
    if (nbr_proxy_reply.is_set || is_set(nbr_proxy_reply.yfilter)) leaf_name_data.push_back(nbr_proxy_reply.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply = value;
        nbr_proxy_reply.value_namespace = name_space;
        nbr_proxy_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid-name" || name == "nbr-proxy-reply" || name == "requests")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::Discover::has_data() const
{
    return arp.is_set;
}

bool Native::Interface::Tunnel::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::Tunnel::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::Tunnel::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::Tunnel::Lisp::Mobility::Liveness::has_data() const
{
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::Tunnel::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::Tunnel::Ntp::Ntp()
    :
    broadcast{YType::empty, "broadcast"}
    	,
    broadcast_option(std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption>())
{
    broadcast_option->parent = this;

    yang_name = "ntp"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ntp::~Ntp()
{
}

bool Native::Interface::Tunnel::Ntp::has_data() const
{
    return broadcast.is_set
	|| (broadcast_option !=  nullptr && broadcast_option->has_data());
}

bool Native::Interface::Tunnel::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (broadcast_option !=  nullptr && broadcast_option->has_operation());
}

std::string Native::Interface::Tunnel::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-option")
    {
        if(broadcast_option == nullptr)
        {
            broadcast_option = std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption>();
        }
        return broadcast_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(broadcast_option != nullptr)
    {
        children["broadcast-option"] = broadcast_option;
    }

    return children;
}

void Native::Interface::Tunnel::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-option" || name == "broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ntp::BroadcastOption::BroadcastOption()
    :
    broadcast(std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast>())
{
    broadcast->parent = this;

    yang_name = "broadcast-option"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ntp::BroadcastOption::~BroadcastOption()
{
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Interface::Tunnel::Ntp::BroadcastOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ntp::BroadcastOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ntp::BroadcastOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ntp::BroadcastOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::Broadcast()
    :
    client{YType::empty, "client"}
{

    yang_name = "broadcast"; yang_parent_name = "broadcast-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::~Broadcast()
{
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::has_data() const
{
    return client.is_set;
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter);
}

std::string Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ntp::BroadcastOption::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Ospfv3()
    :
    dead_interval{YType::uint16, "dead-interval"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost>())
	,database_filter(std::make_shared<Native::Interface::Tunnel::Ospfv3::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,encryption(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption>())
	,manet(std::make_shared<Native::Interface::Tunnel::Ospfv3::Manet>())
	,multi_area(std::make_shared<Native::Interface::Tunnel::Ospfv3::MultiArea>())
	,network(std::make_shared<Native::Interface::Tunnel::Ospfv3::Network>())
	,prefix_suppression(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    encryption->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::~Ospfv3()
{
}

bool Native::Interface::Tunnel::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospfv3:ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-id")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Ospfv3::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ospfv3::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tunnel::Ospfv3::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Tunnel::Ospfv3::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Tunnel::Ospfv3::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Ospfv3::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Tunnel::Ospfv3::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Tunnel::Ospfv3::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : process_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "manet" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "dead-interval" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "priority" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost>())
	,database_filter(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea>())
	,network(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
	,ipv4(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4>())
	,ipv6(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6>())
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "process-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::~ProcessId()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return id.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "ipv4" || name == "ipv6" || name == "id" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::~Cost()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::~Manet()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::~Peering()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"}
{

    yang_name = "multi-area"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::~MultiArea()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::~Neighbor()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Network::~Network()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::~Shutdown()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Ipv4()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost>())
	,database_filter(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea>())
	,network(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ipv4"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::~Ipv4()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{

    yang_name = "area"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::~Area()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::has_data() const
{
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::~Cost()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::~Manet()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::~Peering()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"}
{

    yang_name = "multi-area"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::~MultiArea()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::~Neighbor()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::~Network()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::~Shutdown()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Ipv6()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost>())
	,database_filter(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea>())
	,network(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ipv6"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{

    yang_name = "area"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::~Area()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::has_data() const
{
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::~Cost()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::~Manet()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::~Peering()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"}
{

    yang_name = "multi-area"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::~MultiArea()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::~Network()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::~Shutdown()
{
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
    	,
    md5(std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5>())
	,sha1(std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;
    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::has_data() const
{
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        children["sha1"] = sha1;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "spi")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "sha1"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Ospfv3::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::~Cost()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ospfv3::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Tunnel::Ospfv3::DemandCircuit::has_data() const
{
    return ignore.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Encryption()
    :
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "encryption"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::~Encryption()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::has_data() const
{
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"},
    esp{YType::empty, "esp"}
    	,
    ipsec_3des(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des>())
	,aes_cbc(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc>())
{
    ipsec_3des->parent = this;
    aes_cbc->parent = this;

    yang_name = "ipsec"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::~Ipsec()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::has_data() const
{
    return spi.is_set
	|| esp.is_set
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_data())
	|| (aes_cbc !=  nullptr && aes_cbc->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_operation())
	|| (aes_cbc !=  nullptr && aes_cbc->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec_3des")
    {
        if(ipsec_3des == nullptr)
        {
            ipsec_3des = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des>();
        }
        return ipsec_3des;
    }

    if(child_yang_name == "aes-cbc")
    {
        if(aes_cbc == nullptr)
        {
            aes_cbc = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc>();
        }
        return aes_cbc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipsec_3des != nullptr)
    {
        children["ipsec_3des"] = ipsec_3des;
    }

    if(aes_cbc != nullptr)
    {
        children["aes-cbc"] = aes_cbc;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec_3des" || name == "aes-cbc" || name == "spi" || name == "esp")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::Ipsec3Des()
    :
    key_string(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString>())
{
    key_string->parent = this;

    yang_name = "ipsec_3des"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::~Ipsec3Des()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec_3des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "ipsec_3des"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::~KeyString()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc()
    :
    aes_cbc_128(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>())
	,aes_192(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>())
	,aes_256(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>())
{
    aes_cbc_128->parent = this;
    aes_192->parent = this;
    aes_256->parent = this;

    yang_name = "aes-cbc"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::~AesCbc()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::has_data() const
{
    return (aes_cbc_128 !=  nullptr && aes_cbc_128->has_data())
	|| (aes_192 !=  nullptr && aes_192->has_data())
	|| (aes_256 !=  nullptr && aes_256->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::has_operation() const
{
    return is_set(yfilter)
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_operation())
	|| (aes_192 !=  nullptr && aes_192->has_operation())
	|| (aes_256 !=  nullptr && aes_256->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-cbc-128")
    {
        if(aes_cbc_128 == nullptr)
        {
            aes_cbc_128 = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>();
        }
        return aes_cbc_128;
    }

    if(child_yang_name == "aes-192")
    {
        if(aes_192 == nullptr)
        {
            aes_192 = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>();
        }
        return aes_192;
    }

    if(child_yang_name == "aes-256")
    {
        if(aes_256 == nullptr)
        {
            aes_256 = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>();
        }
        return aes_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aes_cbc_128 != nullptr)
    {
        children["aes-cbc-128"] = aes_cbc_128;
    }

    if(aes_192 != nullptr)
    {
        children["aes-192"] = aes_192;
    }

    if(aes_256 != nullptr)
    {
        children["aes-256"] = aes_256;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc-128" || name == "aes-192" || name == "aes-256")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-cbc-128"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-192"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::Tunnel::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::Tunnel::Cts::Sgt::inline_ {0, "inline"};

const Enum::YLeaf Native::Interface::Tunnel::Cts::RoleBased::SgtCache::egress {0, "egress"};
const Enum::YLeaf Native::Interface::Tunnel::Cts::RoleBased::SgtCache::ingress {1, "ingress"};

const Enum::YLeaf Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Tunnel::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::ProcessId::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Tunnel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_7 {1, "7"};


}
}

