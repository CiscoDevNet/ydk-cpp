
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_perf_meas_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_perf_meas_oper {

PerformanceMeasurement::PerformanceMeasurement()
    :
    nodes(std::make_shared<PerformanceMeasurement::Nodes>())
{
    nodes->parent = this;

    yang_name = "performance-measurement"; yang_parent_name = "Cisco-IOS-XR-perf-meas-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PerformanceMeasurement::~PerformanceMeasurement()
{
}

bool PerformanceMeasurement::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool PerformanceMeasurement::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerformanceMeasurement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-oper:performance-measurement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerformanceMeasurement::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerformanceMeasurement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PerformanceMeasurement::clone_ptr() const
{
    return std::make_shared<PerformanceMeasurement>();
}

std::string PerformanceMeasurement::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerformanceMeasurement::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerformanceMeasurement::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PerformanceMeasurement::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PerformanceMeasurement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Nodes()
    :
    node(this, {"node"})
{

    yang_name = "nodes"; yang_parent_name = "performance-measurement"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::Nodes::~Nodes()
{
}

bool PerformanceMeasurement::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-oper:performance-measurement/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::get_children() const
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

void PerformanceMeasurement::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Node()
    :
    node{YType::str, "node"}
        ,
    summary(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary>())
    , interfaces(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces>())
{
    summary->parent = this;
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::Nodes::Node::~Node()
{
}

bool PerformanceMeasurement::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| (summary !=  nullptr && summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool PerformanceMeasurement::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-oper:performance-measurement/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "interfaces" || name == "node")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::Summary()
    :
    total_interfaces{YType::uint32, "total-interfaces"}
        ,
    delay_summary(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary>())
{
    delay_summary->parent = this;

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::~Summary()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::has_data() const
{
    if (is_presence_container) return true;
    return total_interfaces.is_set
	|| (delay_summary !=  nullptr && delay_summary->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| (delay_summary !=  nullptr && delay_summary->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-summary")
    {
        if(delay_summary == nullptr)
        {
            delay_summary = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary>();
        }
        return delay_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delay_summary != nullptr)
    {
        children["delay-summary"] = delay_summary;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-summary" || name == "total-interfaces")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelaySummary()
    :
    interface_delay_summary(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary>())
    , delay_global_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters>())
{
    interface_delay_summary->parent = this;
    delay_global_counters->parent = this;

    yang_name = "delay-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::~DelaySummary()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::has_data() const
{
    if (is_presence_container) return true;
    return (interface_delay_summary !=  nullptr && interface_delay_summary->has_data())
	|| (delay_global_counters !=  nullptr && delay_global_counters->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::has_operation() const
{
    return is_set(yfilter)
	|| (interface_delay_summary !=  nullptr && interface_delay_summary->has_operation())
	|| (delay_global_counters !=  nullptr && delay_global_counters->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-delay-summary")
    {
        if(interface_delay_summary == nullptr)
        {
            interface_delay_summary = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary>();
        }
        return interface_delay_summary;
    }

    if(child_yang_name == "delay-global-counters")
    {
        if(delay_global_counters == nullptr)
        {
            delay_global_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters>();
        }
        return delay_global_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_delay_summary != nullptr)
    {
        children["interface-delay-summary"] = interface_delay_summary;
    }

    if(delay_global_counters != nullptr)
    {
        children["delay-global-counters"] = delay_global_counters;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-delay-summary" || name == "delay-global-counters")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::InterfaceDelaySummary()
    :
    total_delay_sessions{YType::uint32, "total-delay-sessions"}
        ,
    delay_profile(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile>())
    , delay_transport_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters>())
{
    delay_profile->parent = this;
    delay_transport_counters->parent = this;

    yang_name = "interface-delay-summary"; yang_parent_name = "delay-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::~InterfaceDelaySummary()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::has_data() const
{
    if (is_presence_container) return true;
    return total_delay_sessions.is_set
	|| (delay_profile !=  nullptr && delay_profile->has_data())
	|| (delay_transport_counters !=  nullptr && delay_transport_counters->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_delay_sessions.yfilter)
	|| (delay_profile !=  nullptr && delay_profile->has_operation())
	|| (delay_transport_counters !=  nullptr && delay_transport_counters->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-delay-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_delay_sessions.is_set || is_set(total_delay_sessions.yfilter)) leaf_name_data.push_back(total_delay_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-profile")
    {
        if(delay_profile == nullptr)
        {
            delay_profile = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile>();
        }
        return delay_profile;
    }

    if(child_yang_name == "delay-transport-counters")
    {
        if(delay_transport_counters == nullptr)
        {
            delay_transport_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters>();
        }
        return delay_transport_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delay_profile != nullptr)
    {
        children["delay-profile"] = delay_profile;
    }

    if(delay_transport_counters != nullptr)
    {
        children["delay-transport-counters"] = delay_transport_counters;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-delay-sessions")
    {
        total_delay_sessions = value;
        total_delay_sessions.value_namespace = name_space;
        total_delay_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-delay-sessions")
    {
        total_delay_sessions.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-profile" || name == "delay-transport-counters" || name == "total-delay-sessions")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::DelayProfile()
    :
    probe_interval{YType::uint32, "probe-interval"},
    burst_interval{YType::uint32, "burst-interval"},
    burst_count{YType::uint32, "burst-count"},
    delay_measurement_mode{YType::enumeration, "delay-measurement-mode"},
    periodic_advertisement_enabled{YType::boolean, "periodic-advertisement-enabled"},
    periodic_advertisement_interval{YType::uint32, "periodic-advertisement-interval"},
    effective_periodic_advertisement_interval{YType::uint32, "effective-periodic-advertisement-interval"},
    periodic_advertisement_threshold{YType::uint32, "periodic-advertisement-threshold"},
    periodic_advertisement_minimum_change{YType::uint32, "periodic-advertisement-minimum-change"},
    accelerated_advertisement_threshold{YType::uint32, "accelerated-advertisement-threshold"},
    accelerated_advertisement_minimum_change{YType::uint32, "accelerated-advertisement-minimum-change"},
    accelerated_advertisement_enabled{YType::boolean, "accelerated-advertisement-enabled"}
{

    yang_name = "delay-profile"; yang_parent_name = "interface-delay-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::~DelayProfile()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::has_data() const
{
    if (is_presence_container) return true;
    return probe_interval.is_set
	|| burst_interval.is_set
	|| burst_count.is_set
	|| delay_measurement_mode.is_set
	|| periodic_advertisement_enabled.is_set
	|| periodic_advertisement_interval.is_set
	|| effective_periodic_advertisement_interval.is_set
	|| periodic_advertisement_threshold.is_set
	|| periodic_advertisement_minimum_change.is_set
	|| accelerated_advertisement_threshold.is_set
	|| accelerated_advertisement_minimum_change.is_set
	|| accelerated_advertisement_enabled.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_interval.yfilter)
	|| ydk::is_set(burst_interval.yfilter)
	|| ydk::is_set(burst_count.yfilter)
	|| ydk::is_set(delay_measurement_mode.yfilter)
	|| ydk::is_set(periodic_advertisement_enabled.yfilter)
	|| ydk::is_set(periodic_advertisement_interval.yfilter)
	|| ydk::is_set(effective_periodic_advertisement_interval.yfilter)
	|| ydk::is_set(periodic_advertisement_threshold.yfilter)
	|| ydk::is_set(periodic_advertisement_minimum_change.yfilter)
	|| ydk::is_set(accelerated_advertisement_threshold.yfilter)
	|| ydk::is_set(accelerated_advertisement_minimum_change.yfilter)
	|| ydk::is_set(accelerated_advertisement_enabled.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_interval.is_set || is_set(probe_interval.yfilter)) leaf_name_data.push_back(probe_interval.get_name_leafdata());
    if (burst_interval.is_set || is_set(burst_interval.yfilter)) leaf_name_data.push_back(burst_interval.get_name_leafdata());
    if (burst_count.is_set || is_set(burst_count.yfilter)) leaf_name_data.push_back(burst_count.get_name_leafdata());
    if (delay_measurement_mode.is_set || is_set(delay_measurement_mode.yfilter)) leaf_name_data.push_back(delay_measurement_mode.get_name_leafdata());
    if (periodic_advertisement_enabled.is_set || is_set(periodic_advertisement_enabled.yfilter)) leaf_name_data.push_back(periodic_advertisement_enabled.get_name_leafdata());
    if (periodic_advertisement_interval.is_set || is_set(periodic_advertisement_interval.yfilter)) leaf_name_data.push_back(periodic_advertisement_interval.get_name_leafdata());
    if (effective_periodic_advertisement_interval.is_set || is_set(effective_periodic_advertisement_interval.yfilter)) leaf_name_data.push_back(effective_periodic_advertisement_interval.get_name_leafdata());
    if (periodic_advertisement_threshold.is_set || is_set(periodic_advertisement_threshold.yfilter)) leaf_name_data.push_back(periodic_advertisement_threshold.get_name_leafdata());
    if (periodic_advertisement_minimum_change.is_set || is_set(periodic_advertisement_minimum_change.yfilter)) leaf_name_data.push_back(periodic_advertisement_minimum_change.get_name_leafdata());
    if (accelerated_advertisement_threshold.is_set || is_set(accelerated_advertisement_threshold.yfilter)) leaf_name_data.push_back(accelerated_advertisement_threshold.get_name_leafdata());
    if (accelerated_advertisement_minimum_change.is_set || is_set(accelerated_advertisement_minimum_change.yfilter)) leaf_name_data.push_back(accelerated_advertisement_minimum_change.get_name_leafdata());
    if (accelerated_advertisement_enabled.is_set || is_set(accelerated_advertisement_enabled.yfilter)) leaf_name_data.push_back(accelerated_advertisement_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-interval")
    {
        probe_interval = value;
        probe_interval.value_namespace = name_space;
        probe_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-interval")
    {
        burst_interval = value;
        burst_interval.value_namespace = name_space;
        burst_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-count")
    {
        burst_count = value;
        burst_count.value_namespace = name_space;
        burst_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-measurement-mode")
    {
        delay_measurement_mode = value;
        delay_measurement_mode.value_namespace = name_space;
        delay_measurement_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-advertisement-enabled")
    {
        periodic_advertisement_enabled = value;
        periodic_advertisement_enabled.value_namespace = name_space;
        periodic_advertisement_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-advertisement-interval")
    {
        periodic_advertisement_interval = value;
        periodic_advertisement_interval.value_namespace = name_space;
        periodic_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-periodic-advertisement-interval")
    {
        effective_periodic_advertisement_interval = value;
        effective_periodic_advertisement_interval.value_namespace = name_space;
        effective_periodic_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-advertisement-threshold")
    {
        periodic_advertisement_threshold = value;
        periodic_advertisement_threshold.value_namespace = name_space;
        periodic_advertisement_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-advertisement-minimum-change")
    {
        periodic_advertisement_minimum_change = value;
        periodic_advertisement_minimum_change.value_namespace = name_space;
        periodic_advertisement_minimum_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accelerated-advertisement-threshold")
    {
        accelerated_advertisement_threshold = value;
        accelerated_advertisement_threshold.value_namespace = name_space;
        accelerated_advertisement_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accelerated-advertisement-minimum-change")
    {
        accelerated_advertisement_minimum_change = value;
        accelerated_advertisement_minimum_change.value_namespace = name_space;
        accelerated_advertisement_minimum_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accelerated-advertisement-enabled")
    {
        accelerated_advertisement_enabled = value;
        accelerated_advertisement_enabled.value_namespace = name_space;
        accelerated_advertisement_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-interval")
    {
        probe_interval.yfilter = yfilter;
    }
    if(value_path == "burst-interval")
    {
        burst_interval.yfilter = yfilter;
    }
    if(value_path == "burst-count")
    {
        burst_count.yfilter = yfilter;
    }
    if(value_path == "delay-measurement-mode")
    {
        delay_measurement_mode.yfilter = yfilter;
    }
    if(value_path == "periodic-advertisement-enabled")
    {
        periodic_advertisement_enabled.yfilter = yfilter;
    }
    if(value_path == "periodic-advertisement-interval")
    {
        periodic_advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "effective-periodic-advertisement-interval")
    {
        effective_periodic_advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "periodic-advertisement-threshold")
    {
        periodic_advertisement_threshold.yfilter = yfilter;
    }
    if(value_path == "periodic-advertisement-minimum-change")
    {
        periodic_advertisement_minimum_change.yfilter = yfilter;
    }
    if(value_path == "accelerated-advertisement-threshold")
    {
        accelerated_advertisement_threshold.yfilter = yfilter;
    }
    if(value_path == "accelerated-advertisement-minimum-change")
    {
        accelerated_advertisement_minimum_change.yfilter = yfilter;
    }
    if(value_path == "accelerated-advertisement-enabled")
    {
        accelerated_advertisement_enabled.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-interval" || name == "burst-interval" || name == "burst-count" || name == "delay-measurement-mode" || name == "periodic-advertisement-enabled" || name == "periodic-advertisement-interval" || name == "effective-periodic-advertisement-interval" || name == "periodic-advertisement-threshold" || name == "periodic-advertisement-minimum-change" || name == "accelerated-advertisement-threshold" || name == "accelerated-advertisement-minimum-change" || name == "accelerated-advertisement-enabled")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::DelayTransportCounters()
    :
    generic_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters>())
    , exclusive_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters>())
{
    generic_counters->parent = this;
    exclusive_counters->parent = this;

    yang_name = "delay-transport-counters"; yang_parent_name = "interface-delay-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::~DelayTransportCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::has_data() const
{
    if (is_presence_container) return true;
    return (generic_counters !=  nullptr && generic_counters->has_data())
	|| (exclusive_counters !=  nullptr && exclusive_counters->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::has_operation() const
{
    return is_set(yfilter)
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (exclusive_counters !=  nullptr && exclusive_counters->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-transport-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "exclusive-counters")
    {
        if(exclusive_counters == nullptr)
        {
            exclusive_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters>();
        }
        return exclusive_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(exclusive_counters != nullptr)
    {
        children["exclusive-counters"] = exclusive_counters;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counters" || name == "exclusive-counters")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::GenericCounters()
    :
    query_packets_sent{YType::uint64, "query-packets-sent"},
    query_packet_sent_errors{YType::uint64, "query-packet-sent-errors"},
    query_packet_sent_error_no_ip_address{YType::uint64, "query-packet-sent-error-no-ip-address"},
    query_packets_received{YType::uint64, "query-packets-received"},
    received_packet_error_negative_delay{YType::uint64, "received-packet-error-negative-delay"},
    received_packet_error_delay_exceeds_threshold{YType::uint64, "received-packet-error-delay-exceeds-threshold"},
    received_packet_error_missing_tx_timestamp{YType::uint64, "received-packet-error-missing-tx-timestamp"},
    received_packet_error_missing_rx_timestamp{YType::uint64, "received-packet-error-missing-rx-timestamp"},
    received_packet_error_probe_full{YType::uint64, "received-packet-error-probe-full"},
    received_packet_error_probe_not_started{YType::uint64, "received-packet-error-probe-not-started"},
    received_packet_control_code_error{YType::uint64, "received-packet-control-code-error"},
    received_packet_control_code_notification{YType::uint64, "received-packet-control-code-notification"},
    probes_started{YType::uint64, "probes-started"},
    probes_complete{YType::uint64, "probes-complete"},
    probes_incomplete{YType::uint64, "probes-incomplete"},
    advertisement{YType::uint64, "advertisement"}
{

    yang_name = "generic-counters"; yang_parent_name = "delay-transport-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::~GenericCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::has_data() const
{
    if (is_presence_container) return true;
    return query_packets_sent.is_set
	|| query_packet_sent_errors.is_set
	|| query_packet_sent_error_no_ip_address.is_set
	|| query_packets_received.is_set
	|| received_packet_error_negative_delay.is_set
	|| received_packet_error_delay_exceeds_threshold.is_set
	|| received_packet_error_missing_tx_timestamp.is_set
	|| received_packet_error_missing_rx_timestamp.is_set
	|| received_packet_error_probe_full.is_set
	|| received_packet_error_probe_not_started.is_set
	|| received_packet_control_code_error.is_set
	|| received_packet_control_code_notification.is_set
	|| probes_started.is_set
	|| probes_complete.is_set
	|| probes_incomplete.is_set
	|| advertisement.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_packets_sent.yfilter)
	|| ydk::is_set(query_packet_sent_errors.yfilter)
	|| ydk::is_set(query_packet_sent_error_no_ip_address.yfilter)
	|| ydk::is_set(query_packets_received.yfilter)
	|| ydk::is_set(received_packet_error_negative_delay.yfilter)
	|| ydk::is_set(received_packet_error_delay_exceeds_threshold.yfilter)
	|| ydk::is_set(received_packet_error_missing_tx_timestamp.yfilter)
	|| ydk::is_set(received_packet_error_missing_rx_timestamp.yfilter)
	|| ydk::is_set(received_packet_error_probe_full.yfilter)
	|| ydk::is_set(received_packet_error_probe_not_started.yfilter)
	|| ydk::is_set(received_packet_control_code_error.yfilter)
	|| ydk::is_set(received_packet_control_code_notification.yfilter)
	|| ydk::is_set(probes_started.yfilter)
	|| ydk::is_set(probes_complete.yfilter)
	|| ydk::is_set(probes_incomplete.yfilter)
	|| ydk::is_set(advertisement.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_packets_sent.is_set || is_set(query_packets_sent.yfilter)) leaf_name_data.push_back(query_packets_sent.get_name_leafdata());
    if (query_packet_sent_errors.is_set || is_set(query_packet_sent_errors.yfilter)) leaf_name_data.push_back(query_packet_sent_errors.get_name_leafdata());
    if (query_packet_sent_error_no_ip_address.is_set || is_set(query_packet_sent_error_no_ip_address.yfilter)) leaf_name_data.push_back(query_packet_sent_error_no_ip_address.get_name_leafdata());
    if (query_packets_received.is_set || is_set(query_packets_received.yfilter)) leaf_name_data.push_back(query_packets_received.get_name_leafdata());
    if (received_packet_error_negative_delay.is_set || is_set(received_packet_error_negative_delay.yfilter)) leaf_name_data.push_back(received_packet_error_negative_delay.get_name_leafdata());
    if (received_packet_error_delay_exceeds_threshold.is_set || is_set(received_packet_error_delay_exceeds_threshold.yfilter)) leaf_name_data.push_back(received_packet_error_delay_exceeds_threshold.get_name_leafdata());
    if (received_packet_error_missing_tx_timestamp.is_set || is_set(received_packet_error_missing_tx_timestamp.yfilter)) leaf_name_data.push_back(received_packet_error_missing_tx_timestamp.get_name_leafdata());
    if (received_packet_error_missing_rx_timestamp.is_set || is_set(received_packet_error_missing_rx_timestamp.yfilter)) leaf_name_data.push_back(received_packet_error_missing_rx_timestamp.get_name_leafdata());
    if (received_packet_error_probe_full.is_set || is_set(received_packet_error_probe_full.yfilter)) leaf_name_data.push_back(received_packet_error_probe_full.get_name_leafdata());
    if (received_packet_error_probe_not_started.is_set || is_set(received_packet_error_probe_not_started.yfilter)) leaf_name_data.push_back(received_packet_error_probe_not_started.get_name_leafdata());
    if (received_packet_control_code_error.is_set || is_set(received_packet_control_code_error.yfilter)) leaf_name_data.push_back(received_packet_control_code_error.get_name_leafdata());
    if (received_packet_control_code_notification.is_set || is_set(received_packet_control_code_notification.yfilter)) leaf_name_data.push_back(received_packet_control_code_notification.get_name_leafdata());
    if (probes_started.is_set || is_set(probes_started.yfilter)) leaf_name_data.push_back(probes_started.get_name_leafdata());
    if (probes_complete.is_set || is_set(probes_complete.yfilter)) leaf_name_data.push_back(probes_complete.get_name_leafdata());
    if (probes_incomplete.is_set || is_set(probes_incomplete.yfilter)) leaf_name_data.push_back(probes_incomplete.get_name_leafdata());
    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-packets-sent")
    {
        query_packets_sent = value;
        query_packets_sent.value_namespace = name_space;
        query_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-sent-errors")
    {
        query_packet_sent_errors = value;
        query_packet_sent_errors.value_namespace = name_space;
        query_packet_sent_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-sent-error-no-ip-address")
    {
        query_packet_sent_error_no_ip_address = value;
        query_packet_sent_error_no_ip_address.value_namespace = name_space;
        query_packet_sent_error_no_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packets-received")
    {
        query_packets_received = value;
        query_packets_received.value_namespace = name_space;
        query_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-negative-delay")
    {
        received_packet_error_negative_delay = value;
        received_packet_error_negative_delay.value_namespace = name_space;
        received_packet_error_negative_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-delay-exceeds-threshold")
    {
        received_packet_error_delay_exceeds_threshold = value;
        received_packet_error_delay_exceeds_threshold.value_namespace = name_space;
        received_packet_error_delay_exceeds_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-missing-tx-timestamp")
    {
        received_packet_error_missing_tx_timestamp = value;
        received_packet_error_missing_tx_timestamp.value_namespace = name_space;
        received_packet_error_missing_tx_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-missing-rx-timestamp")
    {
        received_packet_error_missing_rx_timestamp = value;
        received_packet_error_missing_rx_timestamp.value_namespace = name_space;
        received_packet_error_missing_rx_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-probe-full")
    {
        received_packet_error_probe_full = value;
        received_packet_error_probe_full.value_namespace = name_space;
        received_packet_error_probe_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-probe-not-started")
    {
        received_packet_error_probe_not_started = value;
        received_packet_error_probe_not_started.value_namespace = name_space;
        received_packet_error_probe_not_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-control-code-error")
    {
        received_packet_control_code_error = value;
        received_packet_control_code_error.value_namespace = name_space;
        received_packet_control_code_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-control-code-notification")
    {
        received_packet_control_code_notification = value;
        received_packet_control_code_notification.value_namespace = name_space;
        received_packet_control_code_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probes-started")
    {
        probes_started = value;
        probes_started.value_namespace = name_space;
        probes_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probes-complete")
    {
        probes_complete = value;
        probes_complete.value_namespace = name_space;
        probes_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probes-incomplete")
    {
        probes_incomplete = value;
        probes_incomplete.value_namespace = name_space;
        probes_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement")
    {
        advertisement = value;
        advertisement.value_namespace = name_space;
        advertisement.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-packets-sent")
    {
        query_packets_sent.yfilter = yfilter;
    }
    if(value_path == "query-packet-sent-errors")
    {
        query_packet_sent_errors.yfilter = yfilter;
    }
    if(value_path == "query-packet-sent-error-no-ip-address")
    {
        query_packet_sent_error_no_ip_address.yfilter = yfilter;
    }
    if(value_path == "query-packets-received")
    {
        query_packets_received.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-negative-delay")
    {
        received_packet_error_negative_delay.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-delay-exceeds-threshold")
    {
        received_packet_error_delay_exceeds_threshold.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-missing-tx-timestamp")
    {
        received_packet_error_missing_tx_timestamp.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-missing-rx-timestamp")
    {
        received_packet_error_missing_rx_timestamp.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-probe-full")
    {
        received_packet_error_probe_full.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-probe-not-started")
    {
        received_packet_error_probe_not_started.yfilter = yfilter;
    }
    if(value_path == "received-packet-control-code-error")
    {
        received_packet_control_code_error.yfilter = yfilter;
    }
    if(value_path == "received-packet-control-code-notification")
    {
        received_packet_control_code_notification.yfilter = yfilter;
    }
    if(value_path == "probes-started")
    {
        probes_started.yfilter = yfilter;
    }
    if(value_path == "probes-complete")
    {
        probes_complete.yfilter = yfilter;
    }
    if(value_path == "probes-incomplete")
    {
        probes_incomplete.yfilter = yfilter;
    }
    if(value_path == "advertisement")
    {
        advertisement.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::GenericCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-packets-sent" || name == "query-packet-sent-errors" || name == "query-packet-sent-error-no-ip-address" || name == "query-packets-received" || name == "received-packet-error-negative-delay" || name == "received-packet-error-delay-exceeds-threshold" || name == "received-packet-error-missing-tx-timestamp" || name == "received-packet-error-missing-rx-timestamp" || name == "received-packet-error-probe-full" || name == "received-packet-error-probe-not-started" || name == "received-packet-control-code-error" || name == "received-packet-control-code-notification" || name == "probes-started" || name == "probes-complete" || name == "probes-incomplete" || name == "advertisement")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::ExclusiveCounters()
    :
    type{YType::enumeration, "type"}
        ,
    interface_exclusive_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters>())
{
    interface_exclusive_counters->parent = this;

    yang_name = "exclusive-counters"; yang_parent_name = "delay-transport-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::~ExclusiveCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (interface_exclusive_counters !=  nullptr && interface_exclusive_counters->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (interface_exclusive_counters !=  nullptr && interface_exclusive_counters->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclusive-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-exclusive-counters")
    {
        if(interface_exclusive_counters == nullptr)
        {
            interface_exclusive_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters>();
        }
        return interface_exclusive_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_exclusive_counters != nullptr)
    {
        children["interface-exclusive-counters"] = interface_exclusive_counters;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-exclusive-counters" || name == "type")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::InterfaceExclusiveCounters()
    :
    query_packet_sent_error_interface_down{YType::uint64, "query-packet-sent-error-interface-down"},
    query_packet_sent_error_no_mpls_caps{YType::uint64, "query-packet-sent-error-no-mpls-caps"}
{

    yang_name = "interface-exclusive-counters"; yang_parent_name = "exclusive-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::~InterfaceExclusiveCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::has_data() const
{
    if (is_presence_container) return true;
    return query_packet_sent_error_interface_down.is_set
	|| query_packet_sent_error_no_mpls_caps.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_packet_sent_error_interface_down.yfilter)
	|| ydk::is_set(query_packet_sent_error_no_mpls_caps.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-exclusive-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_packet_sent_error_interface_down.is_set || is_set(query_packet_sent_error_interface_down.yfilter)) leaf_name_data.push_back(query_packet_sent_error_interface_down.get_name_leafdata());
    if (query_packet_sent_error_no_mpls_caps.is_set || is_set(query_packet_sent_error_no_mpls_caps.yfilter)) leaf_name_data.push_back(query_packet_sent_error_no_mpls_caps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-packet-sent-error-interface-down")
    {
        query_packet_sent_error_interface_down = value;
        query_packet_sent_error_interface_down.value_namespace = name_space;
        query_packet_sent_error_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-sent-error-no-mpls-caps")
    {
        query_packet_sent_error_no_mpls_caps = value;
        query_packet_sent_error_no_mpls_caps.value_namespace = name_space;
        query_packet_sent_error_no_mpls_caps.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-packet-sent-error-interface-down")
    {
        query_packet_sent_error_interface_down.yfilter = yfilter;
    }
    if(value_path == "query-packet-sent-error-no-mpls-caps")
    {
        query_packet_sent_error_no_mpls_caps.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::InterfaceDelaySummary::DelayTransportCounters::ExclusiveCounters::InterfaceExclusiveCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-packet-sent-error-interface-down" || name == "query-packet-sent-error-no-mpls-caps")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::DelayGlobalCounters()
    :
    query_packets_sent{YType::uint64, "query-packets-sent"},
    query_packets_received{YType::uint64, "query-packets-received"},
    received_packet_error_invalid_session_id{YType::uint64, "received-packet-error-invalid-session-id"},
    received_packet_error_no_session{YType::uint64, "received-packet-error-no-session"}
{

    yang_name = "delay-global-counters"; yang_parent_name = "delay-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::~DelayGlobalCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::has_data() const
{
    if (is_presence_container) return true;
    return query_packets_sent.is_set
	|| query_packets_received.is_set
	|| received_packet_error_invalid_session_id.is_set
	|| received_packet_error_no_session.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_packets_sent.yfilter)
	|| ydk::is_set(query_packets_received.yfilter)
	|| ydk::is_set(received_packet_error_invalid_session_id.yfilter)
	|| ydk::is_set(received_packet_error_no_session.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-global-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_packets_sent.is_set || is_set(query_packets_sent.yfilter)) leaf_name_data.push_back(query_packets_sent.get_name_leafdata());
    if (query_packets_received.is_set || is_set(query_packets_received.yfilter)) leaf_name_data.push_back(query_packets_received.get_name_leafdata());
    if (received_packet_error_invalid_session_id.is_set || is_set(received_packet_error_invalid_session_id.yfilter)) leaf_name_data.push_back(received_packet_error_invalid_session_id.get_name_leafdata());
    if (received_packet_error_no_session.is_set || is_set(received_packet_error_no_session.yfilter)) leaf_name_data.push_back(received_packet_error_no_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-packets-sent")
    {
        query_packets_sent = value;
        query_packets_sent.value_namespace = name_space;
        query_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packets-received")
    {
        query_packets_received = value;
        query_packets_received.value_namespace = name_space;
        query_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-invalid-session-id")
    {
        received_packet_error_invalid_session_id = value;
        received_packet_error_invalid_session_id.value_namespace = name_space;
        received_packet_error_invalid_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-no-session")
    {
        received_packet_error_no_session = value;
        received_packet_error_no_session.value_namespace = name_space;
        received_packet_error_no_session.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-packets-sent")
    {
        query_packets_sent.yfilter = yfilter;
    }
    if(value_path == "query-packets-received")
    {
        query_packets_received.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-invalid-session-id")
    {
        received_packet_error_invalid_session_id.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-no-session")
    {
        received_packet_error_no_session.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Summary::DelaySummary::DelayGlobalCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-packets-sent" || name == "query-packets-received" || name == "received-packet-error-invalid-session-id" || name == "received-packet-error-no-session")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::Interfaces()
    :
    interface_details(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails>())
    , interface_delay(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay>())
{
    interface_details->parent = this;
    interface_delay->parent = this;

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    return (interface_details !=  nullptr && interface_details->has_data())
	|| (interface_delay !=  nullptr && interface_delay->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (interface_details !=  nullptr && interface_details->has_operation())
	|| (interface_delay !=  nullptr && interface_delay->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-details")
    {
        if(interface_details == nullptr)
        {
            interface_details = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails>();
        }
        return interface_details;
    }

    if(child_yang_name == "interface-delay")
    {
        if(interface_delay == nullptr)
        {
            interface_delay = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay>();
        }
        return interface_delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_details != nullptr)
    {
        children["interface-details"] = interface_details;
    }

    if(interface_delay != nullptr)
    {
        children["interface-delay"] = interface_delay;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-details" || name == "interface-delay")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetails()
    :
    interface_detail(this, {"interface_name"})
{

    yang_name = "interface-details"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::~InterfaceDetails()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detail")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail>();
        c->parent = this;
        interface_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detail")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::InterfaceDetail()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_state{YType::boolean, "interface-state"},
    source_address{YType::str, "source-address"},
    source_v6_address{YType::str, "source-v6-address"},
    source_mac_address{YType::str, "source-mac-address"},
    primary_vlan_tag{YType::uint16, "primary-vlan-tag"},
    secondary_vlan_tag{YType::uint16, "secondary-vlan-tag"}
        ,
    delay_measurement_session(this, {})
{

    yang_name = "interface-detail"; yang_parent_name = "interface-details"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::~InterfaceDetail()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<delay_measurement_session.len(); index++)
    {
        if(delay_measurement_session[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_handle.is_set
	|| interface_state.is_set
	|| source_address.is_set
	|| source_v6_address.is_set
	|| source_mac_address.is_set
	|| primary_vlan_tag.is_set
	|| secondary_vlan_tag.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::has_operation() const
{
    for (std::size_t index=0; index<delay_measurement_session.len(); index++)
    {
        if(delay_measurement_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_v6_address.yfilter)
	|| ydk::is_set(source_mac_address.yfilter)
	|| ydk::is_set(primary_vlan_tag.yfilter)
	|| ydk::is_set(secondary_vlan_tag.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_v6_address.is_set || is_set(source_v6_address.yfilter)) leaf_name_data.push_back(source_v6_address.get_name_leafdata());
    if (source_mac_address.is_set || is_set(source_mac_address.yfilter)) leaf_name_data.push_back(source_mac_address.get_name_leafdata());
    if (primary_vlan_tag.is_set || is_set(primary_vlan_tag.yfilter)) leaf_name_data.push_back(primary_vlan_tag.get_name_leafdata());
    if (secondary_vlan_tag.is_set || is_set(secondary_vlan_tag.yfilter)) leaf_name_data.push_back(secondary_vlan_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-measurement-session")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession>();
        c->parent = this;
        delay_measurement_session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : delay_measurement_session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-v6-address")
    {
        source_v6_address = value;
        source_v6_address.value_namespace = name_space;
        source_v6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-address")
    {
        source_mac_address = value;
        source_mac_address.value_namespace = name_space;
        source_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-vlan-tag")
    {
        primary_vlan_tag = value;
        primary_vlan_tag.value_namespace = name_space;
        primary_vlan_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-vlan-tag")
    {
        secondary_vlan_tag = value;
        secondary_vlan_tag.value_namespace = name_space;
        secondary_vlan_tag.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-v6-address")
    {
        source_v6_address.yfilter = yfilter;
    }
    if(value_path == "source-mac-address")
    {
        source_mac_address.yfilter = yfilter;
    }
    if(value_path == "primary-vlan-tag")
    {
        primary_vlan_tag.yfilter = yfilter;
    }
    if(value_path == "secondary-vlan-tag")
    {
        secondary_vlan_tag.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-measurement-session" || name == "interface-name" || name == "interface-name-xr" || name == "interface-handle" || name == "interface-state" || name == "source-address" || name == "source-v6-address" || name == "source-mac-address" || name == "primary-vlan-tag" || name == "secondary-vlan-tag")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::DelayMeasurementSession()
    :
    session_id{YType::uint32, "session-id"},
    transport_type{YType::enumeration, "transport-type"},
    measurement_type{YType::enumeration, "measurement-type"},
    periodic_advertisement_interval_in_sec{YType::uint32, "periodic-advertisement-interval-in-sec"}
        ,
    current_probe(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe>())
    , session_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters>())
    , last_advertisement_information(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation>())
    , next_advertisement_information(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation>())
    , last_notification_control_code(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode>())
    , last_error_control_code(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode>())
    , probe_history(this, {})
{
    current_probe->parent = this;
    session_counters->parent = this;
    last_advertisement_information->parent = this;
    next_advertisement_information->parent = this;
    last_notification_control_code->parent = this;
    last_error_control_code->parent = this;

    yang_name = "delay-measurement-session"; yang_parent_name = "interface-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::~DelayMeasurementSession()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<probe_history.len(); index++)
    {
        if(probe_history[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| transport_type.is_set
	|| measurement_type.is_set
	|| periodic_advertisement_interval_in_sec.is_set
	|| (current_probe !=  nullptr && current_probe->has_data())
	|| (session_counters !=  nullptr && session_counters->has_data())
	|| (last_advertisement_information !=  nullptr && last_advertisement_information->has_data())
	|| (next_advertisement_information !=  nullptr && next_advertisement_information->has_data())
	|| (last_notification_control_code !=  nullptr && last_notification_control_code->has_data())
	|| (last_error_control_code !=  nullptr && last_error_control_code->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::has_operation() const
{
    for (std::size_t index=0; index<probe_history.len(); index++)
    {
        if(probe_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(transport_type.yfilter)
	|| ydk::is_set(measurement_type.yfilter)
	|| ydk::is_set(periodic_advertisement_interval_in_sec.yfilter)
	|| (current_probe !=  nullptr && current_probe->has_operation())
	|| (session_counters !=  nullptr && session_counters->has_operation())
	|| (last_advertisement_information !=  nullptr && last_advertisement_information->has_operation())
	|| (next_advertisement_information !=  nullptr && next_advertisement_information->has_operation())
	|| (last_notification_control_code !=  nullptr && last_notification_control_code->has_operation())
	|| (last_error_control_code !=  nullptr && last_error_control_code->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-measurement-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (transport_type.is_set || is_set(transport_type.yfilter)) leaf_name_data.push_back(transport_type.get_name_leafdata());
    if (measurement_type.is_set || is_set(measurement_type.yfilter)) leaf_name_data.push_back(measurement_type.get_name_leafdata());
    if (periodic_advertisement_interval_in_sec.is_set || is_set(periodic_advertisement_interval_in_sec.yfilter)) leaf_name_data.push_back(periodic_advertisement_interval_in_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-probe")
    {
        if(current_probe == nullptr)
        {
            current_probe = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe>();
        }
        return current_probe;
    }

    if(child_yang_name == "session-counters")
    {
        if(session_counters == nullptr)
        {
            session_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters>();
        }
        return session_counters;
    }

    if(child_yang_name == "last-advertisement-information")
    {
        if(last_advertisement_information == nullptr)
        {
            last_advertisement_information = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation>();
        }
        return last_advertisement_information;
    }

    if(child_yang_name == "next-advertisement-information")
    {
        if(next_advertisement_information == nullptr)
        {
            next_advertisement_information = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation>();
        }
        return next_advertisement_information;
    }

    if(child_yang_name == "last-notification-control-code")
    {
        if(last_notification_control_code == nullptr)
        {
            last_notification_control_code = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode>();
        }
        return last_notification_control_code;
    }

    if(child_yang_name == "last-error-control-code")
    {
        if(last_error_control_code == nullptr)
        {
            last_error_control_code = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode>();
        }
        return last_error_control_code;
    }

    if(child_yang_name == "probe-history")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory>();
        c->parent = this;
        probe_history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_probe != nullptr)
    {
        children["current-probe"] = current_probe;
    }

    if(session_counters != nullptr)
    {
        children["session-counters"] = session_counters;
    }

    if(last_advertisement_information != nullptr)
    {
        children["last-advertisement-information"] = last_advertisement_information;
    }

    if(next_advertisement_information != nullptr)
    {
        children["next-advertisement-information"] = next_advertisement_information;
    }

    if(last_notification_control_code != nullptr)
    {
        children["last-notification-control-code"] = last_notification_control_code;
    }

    if(last_error_control_code != nullptr)
    {
        children["last-error-control-code"] = last_error_control_code;
    }

    count = 0;
    for (auto c : probe_history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-type")
    {
        transport_type = value;
        transport_type.value_namespace = name_space;
        transport_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "measurement-type")
    {
        measurement_type = value;
        measurement_type.value_namespace = name_space;
        measurement_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-advertisement-interval-in-sec")
    {
        periodic_advertisement_interval_in_sec = value;
        periodic_advertisement_interval_in_sec.value_namespace = name_space;
        periodic_advertisement_interval_in_sec.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "transport-type")
    {
        transport_type.yfilter = yfilter;
    }
    if(value_path == "measurement-type")
    {
        measurement_type.yfilter = yfilter;
    }
    if(value_path == "periodic-advertisement-interval-in-sec")
    {
        periodic_advertisement_interval_in_sec.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-probe" || name == "session-counters" || name == "last-advertisement-information" || name == "next-advertisement-information" || name == "last-notification-control-code" || name == "last-error-control-code" || name == "probe-history" || name == "session-id" || name == "transport-type" || name == "measurement-type" || name == "periodic-advertisement-interval-in-sec")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::CurrentProbe()
    :
    probe_start_time_stamp{YType::uint64, "probe-start-time-stamp"},
    next_probe_start_time_remaining_in_millisec{YType::uint32, "next-probe-start-time-remaining-in-millisec"},
    next_packet_sent_time_remaining_in_millisec{YType::uint32, "next-packet-sent-time-remaining-in-millisec"},
    number_of_packets_sent{YType::uint32, "number-of-packets-sent"},
    number_of_packets_received{YType::uint32, "number-of-packets-received"},
    probe_not_running_reason{YType::enumeration, "probe-not-running-reason"}
        ,
    probe_results(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults>())
{
    probe_results->parent = this;

    yang_name = "current-probe"; yang_parent_name = "delay-measurement-session"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::~CurrentProbe()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::has_data() const
{
    if (is_presence_container) return true;
    return probe_start_time_stamp.is_set
	|| next_probe_start_time_remaining_in_millisec.is_set
	|| next_packet_sent_time_remaining_in_millisec.is_set
	|| number_of_packets_sent.is_set
	|| number_of_packets_received.is_set
	|| probe_not_running_reason.is_set
	|| (probe_results !=  nullptr && probe_results->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_start_time_stamp.yfilter)
	|| ydk::is_set(next_probe_start_time_remaining_in_millisec.yfilter)
	|| ydk::is_set(next_packet_sent_time_remaining_in_millisec.yfilter)
	|| ydk::is_set(number_of_packets_sent.yfilter)
	|| ydk::is_set(number_of_packets_received.yfilter)
	|| ydk::is_set(probe_not_running_reason.yfilter)
	|| (probe_results !=  nullptr && probe_results->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_start_time_stamp.is_set || is_set(probe_start_time_stamp.yfilter)) leaf_name_data.push_back(probe_start_time_stamp.get_name_leafdata());
    if (next_probe_start_time_remaining_in_millisec.is_set || is_set(next_probe_start_time_remaining_in_millisec.yfilter)) leaf_name_data.push_back(next_probe_start_time_remaining_in_millisec.get_name_leafdata());
    if (next_packet_sent_time_remaining_in_millisec.is_set || is_set(next_packet_sent_time_remaining_in_millisec.yfilter)) leaf_name_data.push_back(next_packet_sent_time_remaining_in_millisec.get_name_leafdata());
    if (number_of_packets_sent.is_set || is_set(number_of_packets_sent.yfilter)) leaf_name_data.push_back(number_of_packets_sent.get_name_leafdata());
    if (number_of_packets_received.is_set || is_set(number_of_packets_received.yfilter)) leaf_name_data.push_back(number_of_packets_received.get_name_leafdata());
    if (probe_not_running_reason.is_set || is_set(probe_not_running_reason.yfilter)) leaf_name_data.push_back(probe_not_running_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-results")
    {
        if(probe_results == nullptr)
        {
            probe_results = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults>();
        }
        return probe_results;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(probe_results != nullptr)
    {
        children["probe-results"] = probe_results;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-start-time-stamp")
    {
        probe_start_time_stamp = value;
        probe_start_time_stamp.value_namespace = name_space;
        probe_start_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-probe-start-time-remaining-in-millisec")
    {
        next_probe_start_time_remaining_in_millisec = value;
        next_probe_start_time_remaining_in_millisec.value_namespace = name_space;
        next_probe_start_time_remaining_in_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-packet-sent-time-remaining-in-millisec")
    {
        next_packet_sent_time_remaining_in_millisec = value;
        next_packet_sent_time_remaining_in_millisec.value_namespace = name_space;
        next_packet_sent_time_remaining_in_millisec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-packets-sent")
    {
        number_of_packets_sent = value;
        number_of_packets_sent.value_namespace = name_space;
        number_of_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-packets-received")
    {
        number_of_packets_received = value;
        number_of_packets_received.value_namespace = name_space;
        number_of_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-not-running-reason")
    {
        probe_not_running_reason = value;
        probe_not_running_reason.value_namespace = name_space;
        probe_not_running_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-start-time-stamp")
    {
        probe_start_time_stamp.yfilter = yfilter;
    }
    if(value_path == "next-probe-start-time-remaining-in-millisec")
    {
        next_probe_start_time_remaining_in_millisec.yfilter = yfilter;
    }
    if(value_path == "next-packet-sent-time-remaining-in-millisec")
    {
        next_packet_sent_time_remaining_in_millisec.yfilter = yfilter;
    }
    if(value_path == "number-of-packets-sent")
    {
        number_of_packets_sent.yfilter = yfilter;
    }
    if(value_path == "number-of-packets-received")
    {
        number_of_packets_received.yfilter = yfilter;
    }
    if(value_path == "probe-not-running-reason")
    {
        probe_not_running_reason.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-results" || name == "probe-start-time-stamp" || name == "next-probe-start-time-remaining-in-millisec" || name == "next-packet-sent-time-remaining-in-millisec" || name == "number-of-packets-sent" || name == "number-of-packets-received" || name == "probe-not-running-reason")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::ProbeResults()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "probe-results"; yang_parent_name = "current-probe"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::~ProbeResults()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-results";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::CurrentProbe::ProbeResults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::SessionCounters()
    :
    generic_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters>())
    , exclusive_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters>())
{
    generic_counters->parent = this;
    exclusive_counters->parent = this;

    yang_name = "session-counters"; yang_parent_name = "delay-measurement-session"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::~SessionCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::has_data() const
{
    if (is_presence_container) return true;
    return (generic_counters !=  nullptr && generic_counters->has_data())
	|| (exclusive_counters !=  nullptr && exclusive_counters->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::has_operation() const
{
    return is_set(yfilter)
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (exclusive_counters !=  nullptr && exclusive_counters->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "exclusive-counters")
    {
        if(exclusive_counters == nullptr)
        {
            exclusive_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters>();
        }
        return exclusive_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(exclusive_counters != nullptr)
    {
        children["exclusive-counters"] = exclusive_counters;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counters" || name == "exclusive-counters")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::GenericCounters()
    :
    query_packets_sent{YType::uint64, "query-packets-sent"},
    query_packet_sent_errors{YType::uint64, "query-packet-sent-errors"},
    query_packet_sent_error_no_ip_address{YType::uint64, "query-packet-sent-error-no-ip-address"},
    query_packets_received{YType::uint64, "query-packets-received"},
    received_packet_error_negative_delay{YType::uint64, "received-packet-error-negative-delay"},
    received_packet_error_delay_exceeds_threshold{YType::uint64, "received-packet-error-delay-exceeds-threshold"},
    received_packet_error_missing_tx_timestamp{YType::uint64, "received-packet-error-missing-tx-timestamp"},
    received_packet_error_missing_rx_timestamp{YType::uint64, "received-packet-error-missing-rx-timestamp"},
    received_packet_error_probe_full{YType::uint64, "received-packet-error-probe-full"},
    received_packet_error_probe_not_started{YType::uint64, "received-packet-error-probe-not-started"},
    received_packet_control_code_error{YType::uint64, "received-packet-control-code-error"},
    received_packet_control_code_notification{YType::uint64, "received-packet-control-code-notification"},
    probes_started{YType::uint64, "probes-started"},
    probes_complete{YType::uint64, "probes-complete"},
    probes_incomplete{YType::uint64, "probes-incomplete"},
    advertisement{YType::uint64, "advertisement"}
{

    yang_name = "generic-counters"; yang_parent_name = "session-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::~GenericCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::has_data() const
{
    if (is_presence_container) return true;
    return query_packets_sent.is_set
	|| query_packet_sent_errors.is_set
	|| query_packet_sent_error_no_ip_address.is_set
	|| query_packets_received.is_set
	|| received_packet_error_negative_delay.is_set
	|| received_packet_error_delay_exceeds_threshold.is_set
	|| received_packet_error_missing_tx_timestamp.is_set
	|| received_packet_error_missing_rx_timestamp.is_set
	|| received_packet_error_probe_full.is_set
	|| received_packet_error_probe_not_started.is_set
	|| received_packet_control_code_error.is_set
	|| received_packet_control_code_notification.is_set
	|| probes_started.is_set
	|| probes_complete.is_set
	|| probes_incomplete.is_set
	|| advertisement.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_packets_sent.yfilter)
	|| ydk::is_set(query_packet_sent_errors.yfilter)
	|| ydk::is_set(query_packet_sent_error_no_ip_address.yfilter)
	|| ydk::is_set(query_packets_received.yfilter)
	|| ydk::is_set(received_packet_error_negative_delay.yfilter)
	|| ydk::is_set(received_packet_error_delay_exceeds_threshold.yfilter)
	|| ydk::is_set(received_packet_error_missing_tx_timestamp.yfilter)
	|| ydk::is_set(received_packet_error_missing_rx_timestamp.yfilter)
	|| ydk::is_set(received_packet_error_probe_full.yfilter)
	|| ydk::is_set(received_packet_error_probe_not_started.yfilter)
	|| ydk::is_set(received_packet_control_code_error.yfilter)
	|| ydk::is_set(received_packet_control_code_notification.yfilter)
	|| ydk::is_set(probes_started.yfilter)
	|| ydk::is_set(probes_complete.yfilter)
	|| ydk::is_set(probes_incomplete.yfilter)
	|| ydk::is_set(advertisement.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_packets_sent.is_set || is_set(query_packets_sent.yfilter)) leaf_name_data.push_back(query_packets_sent.get_name_leafdata());
    if (query_packet_sent_errors.is_set || is_set(query_packet_sent_errors.yfilter)) leaf_name_data.push_back(query_packet_sent_errors.get_name_leafdata());
    if (query_packet_sent_error_no_ip_address.is_set || is_set(query_packet_sent_error_no_ip_address.yfilter)) leaf_name_data.push_back(query_packet_sent_error_no_ip_address.get_name_leafdata());
    if (query_packets_received.is_set || is_set(query_packets_received.yfilter)) leaf_name_data.push_back(query_packets_received.get_name_leafdata());
    if (received_packet_error_negative_delay.is_set || is_set(received_packet_error_negative_delay.yfilter)) leaf_name_data.push_back(received_packet_error_negative_delay.get_name_leafdata());
    if (received_packet_error_delay_exceeds_threshold.is_set || is_set(received_packet_error_delay_exceeds_threshold.yfilter)) leaf_name_data.push_back(received_packet_error_delay_exceeds_threshold.get_name_leafdata());
    if (received_packet_error_missing_tx_timestamp.is_set || is_set(received_packet_error_missing_tx_timestamp.yfilter)) leaf_name_data.push_back(received_packet_error_missing_tx_timestamp.get_name_leafdata());
    if (received_packet_error_missing_rx_timestamp.is_set || is_set(received_packet_error_missing_rx_timestamp.yfilter)) leaf_name_data.push_back(received_packet_error_missing_rx_timestamp.get_name_leafdata());
    if (received_packet_error_probe_full.is_set || is_set(received_packet_error_probe_full.yfilter)) leaf_name_data.push_back(received_packet_error_probe_full.get_name_leafdata());
    if (received_packet_error_probe_not_started.is_set || is_set(received_packet_error_probe_not_started.yfilter)) leaf_name_data.push_back(received_packet_error_probe_not_started.get_name_leafdata());
    if (received_packet_control_code_error.is_set || is_set(received_packet_control_code_error.yfilter)) leaf_name_data.push_back(received_packet_control_code_error.get_name_leafdata());
    if (received_packet_control_code_notification.is_set || is_set(received_packet_control_code_notification.yfilter)) leaf_name_data.push_back(received_packet_control_code_notification.get_name_leafdata());
    if (probes_started.is_set || is_set(probes_started.yfilter)) leaf_name_data.push_back(probes_started.get_name_leafdata());
    if (probes_complete.is_set || is_set(probes_complete.yfilter)) leaf_name_data.push_back(probes_complete.get_name_leafdata());
    if (probes_incomplete.is_set || is_set(probes_incomplete.yfilter)) leaf_name_data.push_back(probes_incomplete.get_name_leafdata());
    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-packets-sent")
    {
        query_packets_sent = value;
        query_packets_sent.value_namespace = name_space;
        query_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-sent-errors")
    {
        query_packet_sent_errors = value;
        query_packet_sent_errors.value_namespace = name_space;
        query_packet_sent_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-sent-error-no-ip-address")
    {
        query_packet_sent_error_no_ip_address = value;
        query_packet_sent_error_no_ip_address.value_namespace = name_space;
        query_packet_sent_error_no_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packets-received")
    {
        query_packets_received = value;
        query_packets_received.value_namespace = name_space;
        query_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-negative-delay")
    {
        received_packet_error_negative_delay = value;
        received_packet_error_negative_delay.value_namespace = name_space;
        received_packet_error_negative_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-delay-exceeds-threshold")
    {
        received_packet_error_delay_exceeds_threshold = value;
        received_packet_error_delay_exceeds_threshold.value_namespace = name_space;
        received_packet_error_delay_exceeds_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-missing-tx-timestamp")
    {
        received_packet_error_missing_tx_timestamp = value;
        received_packet_error_missing_tx_timestamp.value_namespace = name_space;
        received_packet_error_missing_tx_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-missing-rx-timestamp")
    {
        received_packet_error_missing_rx_timestamp = value;
        received_packet_error_missing_rx_timestamp.value_namespace = name_space;
        received_packet_error_missing_rx_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-probe-full")
    {
        received_packet_error_probe_full = value;
        received_packet_error_probe_full.value_namespace = name_space;
        received_packet_error_probe_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-probe-not-started")
    {
        received_packet_error_probe_not_started = value;
        received_packet_error_probe_not_started.value_namespace = name_space;
        received_packet_error_probe_not_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-control-code-error")
    {
        received_packet_control_code_error = value;
        received_packet_control_code_error.value_namespace = name_space;
        received_packet_control_code_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-control-code-notification")
    {
        received_packet_control_code_notification = value;
        received_packet_control_code_notification.value_namespace = name_space;
        received_packet_control_code_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probes-started")
    {
        probes_started = value;
        probes_started.value_namespace = name_space;
        probes_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probes-complete")
    {
        probes_complete = value;
        probes_complete.value_namespace = name_space;
        probes_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probes-incomplete")
    {
        probes_incomplete = value;
        probes_incomplete.value_namespace = name_space;
        probes_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement")
    {
        advertisement = value;
        advertisement.value_namespace = name_space;
        advertisement.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-packets-sent")
    {
        query_packets_sent.yfilter = yfilter;
    }
    if(value_path == "query-packet-sent-errors")
    {
        query_packet_sent_errors.yfilter = yfilter;
    }
    if(value_path == "query-packet-sent-error-no-ip-address")
    {
        query_packet_sent_error_no_ip_address.yfilter = yfilter;
    }
    if(value_path == "query-packets-received")
    {
        query_packets_received.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-negative-delay")
    {
        received_packet_error_negative_delay.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-delay-exceeds-threshold")
    {
        received_packet_error_delay_exceeds_threshold.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-missing-tx-timestamp")
    {
        received_packet_error_missing_tx_timestamp.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-missing-rx-timestamp")
    {
        received_packet_error_missing_rx_timestamp.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-probe-full")
    {
        received_packet_error_probe_full.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-probe-not-started")
    {
        received_packet_error_probe_not_started.yfilter = yfilter;
    }
    if(value_path == "received-packet-control-code-error")
    {
        received_packet_control_code_error.yfilter = yfilter;
    }
    if(value_path == "received-packet-control-code-notification")
    {
        received_packet_control_code_notification.yfilter = yfilter;
    }
    if(value_path == "probes-started")
    {
        probes_started.yfilter = yfilter;
    }
    if(value_path == "probes-complete")
    {
        probes_complete.yfilter = yfilter;
    }
    if(value_path == "probes-incomplete")
    {
        probes_incomplete.yfilter = yfilter;
    }
    if(value_path == "advertisement")
    {
        advertisement.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::GenericCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-packets-sent" || name == "query-packet-sent-errors" || name == "query-packet-sent-error-no-ip-address" || name == "query-packets-received" || name == "received-packet-error-negative-delay" || name == "received-packet-error-delay-exceeds-threshold" || name == "received-packet-error-missing-tx-timestamp" || name == "received-packet-error-missing-rx-timestamp" || name == "received-packet-error-probe-full" || name == "received-packet-error-probe-not-started" || name == "received-packet-control-code-error" || name == "received-packet-control-code-notification" || name == "probes-started" || name == "probes-complete" || name == "probes-incomplete" || name == "advertisement")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::ExclusiveCounters()
    :
    type{YType::enumeration, "type"}
        ,
    interface_exclusive_counters(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters>())
{
    interface_exclusive_counters->parent = this;

    yang_name = "exclusive-counters"; yang_parent_name = "session-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::~ExclusiveCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (interface_exclusive_counters !=  nullptr && interface_exclusive_counters->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (interface_exclusive_counters !=  nullptr && interface_exclusive_counters->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclusive-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-exclusive-counters")
    {
        if(interface_exclusive_counters == nullptr)
        {
            interface_exclusive_counters = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters>();
        }
        return interface_exclusive_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_exclusive_counters != nullptr)
    {
        children["interface-exclusive-counters"] = interface_exclusive_counters;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-exclusive-counters" || name == "type")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::InterfaceExclusiveCounters()
    :
    query_packet_sent_error_interface_down{YType::uint64, "query-packet-sent-error-interface-down"},
    query_packet_sent_error_no_mpls_caps{YType::uint64, "query-packet-sent-error-no-mpls-caps"}
{

    yang_name = "interface-exclusive-counters"; yang_parent_name = "exclusive-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::~InterfaceExclusiveCounters()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::has_data() const
{
    if (is_presence_container) return true;
    return query_packet_sent_error_interface_down.is_set
	|| query_packet_sent_error_no_mpls_caps.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_packet_sent_error_interface_down.yfilter)
	|| ydk::is_set(query_packet_sent_error_no_mpls_caps.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-exclusive-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_packet_sent_error_interface_down.is_set || is_set(query_packet_sent_error_interface_down.yfilter)) leaf_name_data.push_back(query_packet_sent_error_interface_down.get_name_leafdata());
    if (query_packet_sent_error_no_mpls_caps.is_set || is_set(query_packet_sent_error_no_mpls_caps.yfilter)) leaf_name_data.push_back(query_packet_sent_error_no_mpls_caps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-packet-sent-error-interface-down")
    {
        query_packet_sent_error_interface_down = value;
        query_packet_sent_error_interface_down.value_namespace = name_space;
        query_packet_sent_error_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-sent-error-no-mpls-caps")
    {
        query_packet_sent_error_no_mpls_caps = value;
        query_packet_sent_error_no_mpls_caps.value_namespace = name_space;
        query_packet_sent_error_no_mpls_caps.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-packet-sent-error-interface-down")
    {
        query_packet_sent_error_interface_down.yfilter = yfilter;
    }
    if(value_path == "query-packet-sent-error-no-mpls-caps")
    {
        query_packet_sent_error_no_mpls_caps.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::SessionCounters::ExclusiveCounters::InterfaceExclusiveCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-packet-sent-error-interface-down" || name == "query-packet-sent-error-no-mpls-caps")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::LastAdvertisementInformation()
    :
    time_of_advertisement{YType::uint64, "time-of-advertisement"},
    advertisement_reason{YType::enumeration, "advertisement-reason"}
        ,
    advertised_values(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues>())
{
    advertised_values->parent = this;

    yang_name = "last-advertisement-information"; yang_parent_name = "delay-measurement-session"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::~LastAdvertisementInformation()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::has_data() const
{
    if (is_presence_container) return true;
    return time_of_advertisement.is_set
	|| advertisement_reason.is_set
	|| (advertised_values !=  nullptr && advertised_values->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_of_advertisement.yfilter)
	|| ydk::is_set(advertisement_reason.yfilter)
	|| (advertised_values !=  nullptr && advertised_values->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-advertisement-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_of_advertisement.is_set || is_set(time_of_advertisement.yfilter)) leaf_name_data.push_back(time_of_advertisement.get_name_leafdata());
    if (advertisement_reason.is_set || is_set(advertisement_reason.yfilter)) leaf_name_data.push_back(advertisement_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-values")
    {
        if(advertised_values == nullptr)
        {
            advertised_values = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues>();
        }
        return advertised_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(advertised_values != nullptr)
    {
        children["advertised-values"] = advertised_values;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-of-advertisement")
    {
        time_of_advertisement = value;
        time_of_advertisement.value_namespace = name_space;
        time_of_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-reason")
    {
        advertisement_reason = value;
        advertisement_reason.value_namespace = name_space;
        advertisement_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-of-advertisement")
    {
        time_of_advertisement.yfilter = yfilter;
    }
    if(value_path == "advertisement-reason")
    {
        advertisement_reason.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-values" || name == "time-of-advertisement" || name == "advertisement-reason")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::AdvertisedValues()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "advertised-values"; yang_parent_name = "last-advertisement-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::~AdvertisedValues()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastAdvertisementInformation::AdvertisedValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::NextAdvertisementInformation()
    :
    advertisement_interval_probes_remaining{YType::uint32, "advertisement-interval-probes-remaining"},
    rolling_average{YType::uint32, "rolling-average"}
        ,
    advertisement_interval_values(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues>())
{
    advertisement_interval_values->parent = this;

    yang_name = "next-advertisement-information"; yang_parent_name = "delay-measurement-session"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::~NextAdvertisementInformation()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::has_data() const
{
    if (is_presence_container) return true;
    return advertisement_interval_probes_remaining.is_set
	|| rolling_average.is_set
	|| (advertisement_interval_values !=  nullptr && advertisement_interval_values->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement_interval_probes_remaining.yfilter)
	|| ydk::is_set(rolling_average.yfilter)
	|| (advertisement_interval_values !=  nullptr && advertisement_interval_values->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-advertisement-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement_interval_probes_remaining.is_set || is_set(advertisement_interval_probes_remaining.yfilter)) leaf_name_data.push_back(advertisement_interval_probes_remaining.get_name_leafdata());
    if (rolling_average.is_set || is_set(rolling_average.yfilter)) leaf_name_data.push_back(rolling_average.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement-interval-values")
    {
        if(advertisement_interval_values == nullptr)
        {
            advertisement_interval_values = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues>();
        }
        return advertisement_interval_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(advertisement_interval_values != nullptr)
    {
        children["advertisement-interval-values"] = advertisement_interval_values;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement-interval-probes-remaining")
    {
        advertisement_interval_probes_remaining = value;
        advertisement_interval_probes_remaining.value_namespace = name_space;
        advertisement_interval_probes_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rolling-average")
    {
        rolling_average = value;
        rolling_average.value_namespace = name_space;
        rolling_average.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement-interval-probes-remaining")
    {
        advertisement_interval_probes_remaining.yfilter = yfilter;
    }
    if(value_path == "rolling-average")
    {
        rolling_average.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-interval-values" || name == "advertisement-interval-probes-remaining" || name == "rolling-average")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::AdvertisementIntervalValues()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "advertisement-interval-values"; yang_parent_name = "next-advertisement-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::~AdvertisementIntervalValues()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::NextAdvertisementInformation::AdvertisementIntervalValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::LastNotificationControlCode()
    :
    control_code{YType::uint8, "control-code"},
    timestamp{YType::uint64, "timestamp"}
{

    yang_name = "last-notification-control-code"; yang_parent_name = "delay-measurement-session"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::~LastNotificationControlCode()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::has_data() const
{
    if (is_presence_container) return true;
    return control_code.is_set
	|| timestamp.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_code.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-control-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_code.is_set || is_set(control_code.yfilter)) leaf_name_data.push_back(control_code.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-code")
    {
        control_code = value;
        control_code.value_namespace = name_space;
        control_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-code")
    {
        control_code.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastNotificationControlCode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-code" || name == "timestamp")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::LastErrorControlCode()
    :
    control_code{YType::uint8, "control-code"},
    timestamp{YType::uint64, "timestamp"}
{

    yang_name = "last-error-control-code"; yang_parent_name = "delay-measurement-session"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::~LastErrorControlCode()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::has_data() const
{
    if (is_presence_container) return true;
    return control_code.is_set
	|| timestamp.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_code.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-control-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_code.is_set || is_set(control_code.yfilter)) leaf_name_data.push_back(control_code.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-code")
    {
        control_code = value;
        control_code.value_namespace = name_space;
        control_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-code")
    {
        control_code.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::LastErrorControlCode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-code" || name == "timestamp")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::ProbeHistory()
    :
    measurement_value{YType::uint64, "measurement-value"},
    query_timestamp{YType::uint64, "query-timestamp"}
{

    yang_name = "probe-history"; yang_parent_name = "delay-measurement-session"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::~ProbeHistory()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::has_data() const
{
    if (is_presence_container) return true;
    return measurement_value.is_set
	|| query_timestamp.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(measurement_value.yfilter)
	|| ydk::is_set(query_timestamp.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (measurement_value.is_set || is_set(measurement_value.yfilter)) leaf_name_data.push_back(measurement_value.get_name_leafdata());
    if (query_timestamp.is_set || is_set(query_timestamp.yfilter)) leaf_name_data.push_back(query_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "measurement-value")
    {
        measurement_value = value;
        measurement_value.value_namespace = name_space;
        measurement_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timestamp")
    {
        query_timestamp = value;
        query_timestamp.value_namespace = name_space;
        query_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "measurement-value")
    {
        measurement_value.yfilter = yfilter;
    }
    if(value_path == "query-timestamp")
    {
        query_timestamp.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDetails::InterfaceDetail::DelayMeasurementSession::ProbeHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "measurement-value" || name == "query-timestamp")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceDelay()
    :
    interface_last_aggregations(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations>())
    , interface_probe_histories(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories>())
    , interface_aggregated_histories(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories>())
    , interface_last_probes(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes>())
    , interface_last_advertisements(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements>())
{
    interface_last_aggregations->parent = this;
    interface_probe_histories->parent = this;
    interface_aggregated_histories->parent = this;
    interface_last_probes->parent = this;
    interface_last_advertisements->parent = this;

    yang_name = "interface-delay"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::~InterfaceDelay()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::has_data() const
{
    if (is_presence_container) return true;
    return (interface_last_aggregations !=  nullptr && interface_last_aggregations->has_data())
	|| (interface_probe_histories !=  nullptr && interface_probe_histories->has_data())
	|| (interface_aggregated_histories !=  nullptr && interface_aggregated_histories->has_data())
	|| (interface_last_probes !=  nullptr && interface_last_probes->has_data())
	|| (interface_last_advertisements !=  nullptr && interface_last_advertisements->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::has_operation() const
{
    return is_set(yfilter)
	|| (interface_last_aggregations !=  nullptr && interface_last_aggregations->has_operation())
	|| (interface_probe_histories !=  nullptr && interface_probe_histories->has_operation())
	|| (interface_aggregated_histories !=  nullptr && interface_aggregated_histories->has_operation())
	|| (interface_last_probes !=  nullptr && interface_last_probes->has_operation())
	|| (interface_last_advertisements !=  nullptr && interface_last_advertisements->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-last-aggregations")
    {
        if(interface_last_aggregations == nullptr)
        {
            interface_last_aggregations = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations>();
        }
        return interface_last_aggregations;
    }

    if(child_yang_name == "interface-probe-histories")
    {
        if(interface_probe_histories == nullptr)
        {
            interface_probe_histories = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories>();
        }
        return interface_probe_histories;
    }

    if(child_yang_name == "interface-aggregated-histories")
    {
        if(interface_aggregated_histories == nullptr)
        {
            interface_aggregated_histories = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories>();
        }
        return interface_aggregated_histories;
    }

    if(child_yang_name == "interface-last-probes")
    {
        if(interface_last_probes == nullptr)
        {
            interface_last_probes = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes>();
        }
        return interface_last_probes;
    }

    if(child_yang_name == "interface-last-advertisements")
    {
        if(interface_last_advertisements == nullptr)
        {
            interface_last_advertisements = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements>();
        }
        return interface_last_advertisements;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_last_aggregations != nullptr)
    {
        children["interface-last-aggregations"] = interface_last_aggregations;
    }

    if(interface_probe_histories != nullptr)
    {
        children["interface-probe-histories"] = interface_probe_histories;
    }

    if(interface_aggregated_histories != nullptr)
    {
        children["interface-aggregated-histories"] = interface_aggregated_histories;
    }

    if(interface_last_probes != nullptr)
    {
        children["interface-last-probes"] = interface_last_probes;
    }

    if(interface_last_advertisements != nullptr)
    {
        children["interface-last-advertisements"] = interface_last_advertisements;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-last-aggregations" || name == "interface-probe-histories" || name == "interface-aggregated-histories" || name == "interface-last-probes" || name == "interface-last-advertisements")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregations()
    :
    interface_last_aggregation(this, {"interface_name"})
{

    yang_name = "interface-last-aggregations"; yang_parent_name = "interface-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::~InterfaceLastAggregations()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_last_aggregation.len(); index++)
    {
        if(interface_last_aggregation[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::has_operation() const
{
    for (std::size_t index=0; index<interface_last_aggregation.len(); index++)
    {
        if(interface_last_aggregation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-last-aggregations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-last-aggregation")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation>();
        c->parent = this;
        interface_last_aggregation.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_last_aggregation.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-last-aggregation")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::InterfaceLastAggregation()
    :
    interface_name{YType::str, "interface-name"}
        ,
    last_aggregation(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation>())
{
    last_aggregation->parent = this;

    yang_name = "interface-last-aggregation"; yang_parent_name = "interface-last-aggregations"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::~InterfaceLastAggregation()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (last_aggregation !=  nullptr && last_aggregation->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (last_aggregation !=  nullptr && last_aggregation->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-last-aggregation";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-aggregation")
    {
        if(last_aggregation == nullptr)
        {
            last_aggregation = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation>();
        }
        return last_aggregation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_aggregation != nullptr)
    {
        children["last-aggregation"] = last_aggregation;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-aggregation" || name == "interface-name")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::LastAggregation()
    :
    aggregation_timestamp{YType::uint64, "aggregation-timestamp"},
    aggregation_action{YType::enumeration, "aggregation-action"}
        ,
    aggregated_probe_values(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues>())
{
    aggregated_probe_values->parent = this;

    yang_name = "last-aggregation"; yang_parent_name = "interface-last-aggregation"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::~LastAggregation()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::has_data() const
{
    if (is_presence_container) return true;
    return aggregation_timestamp.is_set
	|| aggregation_action.is_set
	|| (aggregated_probe_values !=  nullptr && aggregated_probe_values->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregation_timestamp.yfilter)
	|| ydk::is_set(aggregation_action.yfilter)
	|| (aggregated_probe_values !=  nullptr && aggregated_probe_values->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-aggregation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregation_timestamp.is_set || is_set(aggregation_timestamp.yfilter)) leaf_name_data.push_back(aggregation_timestamp.get_name_leafdata());
    if (aggregation_action.is_set || is_set(aggregation_action.yfilter)) leaf_name_data.push_back(aggregation_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregated-probe-values")
    {
        if(aggregated_probe_values == nullptr)
        {
            aggregated_probe_values = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues>();
        }
        return aggregated_probe_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aggregated_probe_values != nullptr)
    {
        children["aggregated-probe-values"] = aggregated_probe_values;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregation-timestamp")
    {
        aggregation_timestamp = value;
        aggregation_timestamp.value_namespace = name_space;
        aggregation_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregation-action")
    {
        aggregation_action = value;
        aggregation_action.value_namespace = name_space;
        aggregation_action.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregation-timestamp")
    {
        aggregation_timestamp.yfilter = yfilter;
    }
    if(value_path == "aggregation-action")
    {
        aggregation_action.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregated-probe-values" || name == "aggregation-timestamp" || name == "aggregation-action")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::AggregatedProbeValues()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "aggregated-probe-values"; yang_parent_name = "last-aggregation"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::~AggregatedProbeValues()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated-probe-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAggregations::InterfaceLastAggregation::LastAggregation::AggregatedProbeValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistories()
    :
    interface_probe_history(this, {"interface_name"})
{

    yang_name = "interface-probe-histories"; yang_parent_name = "interface-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::~InterfaceProbeHistories()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_probe_history.len(); index++)
    {
        if(interface_probe_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::has_operation() const
{
    for (std::size_t index=0; index<interface_probe_history.len(); index++)
    {
        if(interface_probe_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-probe-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-probe-history")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory>();
        c->parent = this;
        interface_probe_history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_probe_history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-probe-history")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::InterfaceProbeHistory()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_handle{YType::uint32, "interface-handle"}
        ,
    history(this, {})
{

    yang_name = "interface-probe-history"; yang_parent_name = "interface-probe-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::~InterfaceProbeHistory()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_handle.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-probe-history";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History>();
        c->parent = this;
        history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "interface-name" || name == "interface-name-xr" || name == "interface-handle")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::History()
    :
    probe_start_timestamp{YType::uint64, "probe-start-timestamp"},
    packets_sent{YType::uint32, "packets-sent"},
    packets_received{YType::uint32, "packets-received"}
        ,
    probe_values(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues>())
{
    probe_values->parent = this;

    yang_name = "history"; yang_parent_name = "interface-probe-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::~History()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::has_data() const
{
    if (is_presence_container) return true;
    return probe_start_timestamp.is_set
	|| packets_sent.is_set
	|| packets_received.is_set
	|| (probe_values !=  nullptr && probe_values->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_start_timestamp.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| (probe_values !=  nullptr && probe_values->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_start_timestamp.is_set || is_set(probe_start_timestamp.yfilter)) leaf_name_data.push_back(probe_start_timestamp.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-values")
    {
        if(probe_values == nullptr)
        {
            probe_values = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues>();
        }
        return probe_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(probe_values != nullptr)
    {
        children["probe-values"] = probe_values;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-start-timestamp")
    {
        probe_start_timestamp = value;
        probe_start_timestamp.value_namespace = name_space;
        probe_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-start-timestamp")
    {
        probe_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-values" || name == "probe-start-timestamp" || name == "packets-sent" || name == "packets-received")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::ProbeValues()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "probe-values"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::~ProbeValues()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceProbeHistories::InterfaceProbeHistory::History::ProbeValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistories()
    :
    interface_aggregated_history(this, {"interface_name"})
{

    yang_name = "interface-aggregated-histories"; yang_parent_name = "interface-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::~InterfaceAggregatedHistories()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_aggregated_history.len(); index++)
    {
        if(interface_aggregated_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::has_operation() const
{
    for (std::size_t index=0; index<interface_aggregated_history.len(); index++)
    {
        if(interface_aggregated_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-aggregated-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-aggregated-history")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory>();
        c->parent = this;
        interface_aggregated_history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_aggregated_history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-aggregated-history")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::InterfaceAggregatedHistory()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_handle{YType::uint32, "interface-handle"}
        ,
    history(this, {})
{

    yang_name = "interface-aggregated-history"; yang_parent_name = "interface-aggregated-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::~InterfaceAggregatedHistory()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_handle.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-aggregated-history";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History>();
        c->parent = this;
        history.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : history.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "interface-name" || name == "interface-name-xr" || name == "interface-handle")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::History()
    :
    aggregation_timestamp{YType::uint64, "aggregation-timestamp"},
    aggregation_action{YType::enumeration, "aggregation-action"}
        ,
    aggregated_probe_values(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues>())
{
    aggregated_probe_values->parent = this;

    yang_name = "history"; yang_parent_name = "interface-aggregated-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::~History()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::has_data() const
{
    if (is_presence_container) return true;
    return aggregation_timestamp.is_set
	|| aggregation_action.is_set
	|| (aggregated_probe_values !=  nullptr && aggregated_probe_values->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregation_timestamp.yfilter)
	|| ydk::is_set(aggregation_action.yfilter)
	|| (aggregated_probe_values !=  nullptr && aggregated_probe_values->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregation_timestamp.is_set || is_set(aggregation_timestamp.yfilter)) leaf_name_data.push_back(aggregation_timestamp.get_name_leafdata());
    if (aggregation_action.is_set || is_set(aggregation_action.yfilter)) leaf_name_data.push_back(aggregation_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregated-probe-values")
    {
        if(aggregated_probe_values == nullptr)
        {
            aggregated_probe_values = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues>();
        }
        return aggregated_probe_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aggregated_probe_values != nullptr)
    {
        children["aggregated-probe-values"] = aggregated_probe_values;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregation-timestamp")
    {
        aggregation_timestamp = value;
        aggregation_timestamp.value_namespace = name_space;
        aggregation_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregation-action")
    {
        aggregation_action = value;
        aggregation_action.value_namespace = name_space;
        aggregation_action.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregation-timestamp")
    {
        aggregation_timestamp.yfilter = yfilter;
    }
    if(value_path == "aggregation-action")
    {
        aggregation_action.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregated-probe-values" || name == "aggregation-timestamp" || name == "aggregation-action")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::AggregatedProbeValues()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "aggregated-probe-values"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::~AggregatedProbeValues()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregated-probe-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceAggregatedHistories::InterfaceAggregatedHistory::History::AggregatedProbeValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbes()
    :
    interface_last_probe(this, {"interface_name"})
{

    yang_name = "interface-last-probes"; yang_parent_name = "interface-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::~InterfaceLastProbes()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_last_probe.len(); index++)
    {
        if(interface_last_probe[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::has_operation() const
{
    for (std::size_t index=0; index<interface_last_probe.len(); index++)
    {
        if(interface_last_probe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-last-probes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-last-probe")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe>();
        c->parent = this;
        interface_last_probe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_last_probe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-last-probe")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::InterfaceLastProbe()
    :
    interface_name{YType::str, "interface-name"}
        ,
    last_probe(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe>())
{
    last_probe->parent = this;

    yang_name = "interface-last-probe"; yang_parent_name = "interface-last-probes"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::~InterfaceLastProbe()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (last_probe !=  nullptr && last_probe->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (last_probe !=  nullptr && last_probe->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-last-probe";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-probe")
    {
        if(last_probe == nullptr)
        {
            last_probe = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe>();
        }
        return last_probe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_probe != nullptr)
    {
        children["last-probe"] = last_probe;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-probe" || name == "interface-name")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::LastProbe()
    :
    probe_start_timestamp{YType::uint64, "probe-start-timestamp"},
    packets_sent{YType::uint32, "packets-sent"},
    packets_received{YType::uint32, "packets-received"}
        ,
    probe_values(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues>())
{
    probe_values->parent = this;

    yang_name = "last-probe"; yang_parent_name = "interface-last-probe"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::~LastProbe()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::has_data() const
{
    if (is_presence_container) return true;
    return probe_start_timestamp.is_set
	|| packets_sent.is_set
	|| packets_received.is_set
	|| (probe_values !=  nullptr && probe_values->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_start_timestamp.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| (probe_values !=  nullptr && probe_values->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_start_timestamp.is_set || is_set(probe_start_timestamp.yfilter)) leaf_name_data.push_back(probe_start_timestamp.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-values")
    {
        if(probe_values == nullptr)
        {
            probe_values = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues>();
        }
        return probe_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(probe_values != nullptr)
    {
        children["probe-values"] = probe_values;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-start-timestamp")
    {
        probe_start_timestamp = value;
        probe_start_timestamp.value_namespace = name_space;
        probe_start_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-start-timestamp")
    {
        probe_start_timestamp.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-values" || name == "probe-start-timestamp" || name == "packets-sent" || name == "packets-received")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::ProbeValues()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "probe-values"; yang_parent_name = "last-probe"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::~ProbeValues()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastProbes::InterfaceLastProbe::LastProbe::ProbeValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisements()
    :
    interface_last_advertisement(this, {"interface_name"})
{

    yang_name = "interface-last-advertisements"; yang_parent_name = "interface-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::~InterfaceLastAdvertisements()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_last_advertisement.len(); index++)
    {
        if(interface_last_advertisement[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::has_operation() const
{
    for (std::size_t index=0; index<interface_last_advertisement.len(); index++)
    {
        if(interface_last_advertisement[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-last-advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-last-advertisement")
    {
        auto c = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement>();
        c->parent = this;
        interface_last_advertisement.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_last_advertisement.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-last-advertisement")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::InterfaceLastAdvertisement()
    :
    interface_name{YType::str, "interface-name"}
        ,
    last_advertisement(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement>())
{
    last_advertisement->parent = this;

    yang_name = "interface-last-advertisement"; yang_parent_name = "interface-last-advertisements"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::~InterfaceLastAdvertisement()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (last_advertisement !=  nullptr && last_advertisement->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (last_advertisement !=  nullptr && last_advertisement->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-last-advertisement";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-advertisement")
    {
        if(last_advertisement == nullptr)
        {
            last_advertisement = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement>();
        }
        return last_advertisement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_advertisement != nullptr)
    {
        children["last-advertisement"] = last_advertisement;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-advertisement" || name == "interface-name")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::LastAdvertisement()
    :
    time_of_advertisement{YType::uint64, "time-of-advertisement"},
    advertisement_reason{YType::enumeration, "advertisement-reason"}
        ,
    advertised_values(std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues>())
{
    advertised_values->parent = this;

    yang_name = "last-advertisement"; yang_parent_name = "interface-last-advertisement"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::~LastAdvertisement()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::has_data() const
{
    if (is_presence_container) return true;
    return time_of_advertisement.is_set
	|| advertisement_reason.is_set
	|| (advertised_values !=  nullptr && advertised_values->has_data());
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_of_advertisement.yfilter)
	|| ydk::is_set(advertisement_reason.yfilter)
	|| (advertised_values !=  nullptr && advertised_values->has_operation());
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_of_advertisement.is_set || is_set(time_of_advertisement.yfilter)) leaf_name_data.push_back(time_of_advertisement.get_name_leafdata());
    if (advertisement_reason.is_set || is_set(advertisement_reason.yfilter)) leaf_name_data.push_back(advertisement_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-values")
    {
        if(advertised_values == nullptr)
        {
            advertised_values = std::make_shared<PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues>();
        }
        return advertised_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(advertised_values != nullptr)
    {
        children["advertised-values"] = advertised_values;
    }

    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-of-advertisement")
    {
        time_of_advertisement = value;
        time_of_advertisement.value_namespace = name_space;
        time_of_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-reason")
    {
        advertisement_reason = value;
        advertisement_reason.value_namespace = name_space;
        advertisement_reason.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-of-advertisement")
    {
        time_of_advertisement.yfilter = yfilter;
    }
    if(value_path == "advertisement-reason")
    {
        advertisement_reason.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-values" || name == "time-of-advertisement" || name == "advertisement-reason")
        return true;
    return false;
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::AdvertisedValues()
    :
    average{YType::uint32, "average"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    variance{YType::uint32, "variance"}
{

    yang_name = "advertised-values"; yang_parent_name = "last-advertisement"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::~AdvertisedValues()
{
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::has_data() const
{
    if (is_presence_container) return true;
    return average.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| variance.is_set;
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Nodes::Node::Interfaces::InterfaceDelay::InterfaceLastAdvertisements::InterfaceLastAdvertisement::LastAdvertisement::AdvertisedValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "minimum" || name == "maximum" || name == "variance")
        return true;
    return false;
}

PerformanceMeasurementResponder::PerformanceMeasurementResponder()
    :
    nodes(std::make_shared<PerformanceMeasurementResponder::Nodes>())
{
    nodes->parent = this;

    yang_name = "performance-measurement-responder"; yang_parent_name = "Cisco-IOS-XR-perf-meas-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PerformanceMeasurementResponder::~PerformanceMeasurementResponder()
{
}

bool PerformanceMeasurementResponder::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool PerformanceMeasurementResponder::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerformanceMeasurementResponder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-oper:performance-measurement-responder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerformanceMeasurementResponder::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerformanceMeasurementResponder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurementResponder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PerformanceMeasurementResponder::clone_ptr() const
{
    return std::make_shared<PerformanceMeasurementResponder>();
}

std::string PerformanceMeasurementResponder::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerformanceMeasurementResponder::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerformanceMeasurementResponder::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PerformanceMeasurementResponder::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PerformanceMeasurementResponder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PerformanceMeasurementResponder::Nodes::Nodes()
    :
    node(this, {"node"})
{

    yang_name = "nodes"; yang_parent_name = "performance-measurement-responder"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurementResponder::Nodes::~Nodes()
{
}

bool PerformanceMeasurementResponder::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurementResponder::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurementResponder::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-oper:performance-measurement-responder/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurementResponder::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PerformanceMeasurementResponder::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::Nodes::get_children() const
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

void PerformanceMeasurementResponder::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurementResponder::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurementResponder::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PerformanceMeasurementResponder::Nodes::Node::Node()
    :
    node{YType::str, "node"}
        ,
    summary(std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Summary>())
    , interfaces(std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Interfaces>())
{
    summary->parent = this;
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurementResponder::Nodes::Node::~Node()
{
}

bool PerformanceMeasurementResponder::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| (summary !=  nullptr && summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool PerformanceMeasurementResponder::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerformanceMeasurementResponder::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-oper:performance-measurement-responder/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurementResponder::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerformanceMeasurementResponder::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurementResponder::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool PerformanceMeasurementResponder::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "interfaces" || name == "node")
        return true;
    return false;
}

PerformanceMeasurementResponder::Nodes::Node::Summary::Summary()
    :
    total_interfaces{YType::uint32, "total-interfaces"},
    packet_rate{YType::uint32, "packet-rate"},
    packet_rate_high_water_mark{YType::uint32, "packet-rate-high-water-mark"}
        ,
    responder_counters(std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters>())
{
    responder_counters->parent = this;

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurementResponder::Nodes::Node::Summary::~Summary()
{
}

bool PerformanceMeasurementResponder::Nodes::Node::Summary::has_data() const
{
    if (is_presence_container) return true;
    return total_interfaces.is_set
	|| packet_rate.is_set
	|| packet_rate_high_water_mark.is_set
	|| (responder_counters !=  nullptr && responder_counters->has_data());
}

bool PerformanceMeasurementResponder::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_interfaces.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(packet_rate_high_water_mark.yfilter)
	|| (responder_counters !=  nullptr && responder_counters->has_operation());
}

std::string PerformanceMeasurementResponder::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_interfaces.is_set || is_set(total_interfaces.yfilter)) leaf_name_data.push_back(total_interfaces.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (packet_rate_high_water_mark.is_set || is_set(packet_rate_high_water_mark.yfilter)) leaf_name_data.push_back(packet_rate_high_water_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "responder-counters")
    {
        if(responder_counters == nullptr)
        {
            responder_counters = std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters>();
        }
        return responder_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(responder_counters != nullptr)
    {
        children["responder-counters"] = responder_counters;
    }

    return children;
}

void PerformanceMeasurementResponder::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-interfaces")
    {
        total_interfaces = value;
        total_interfaces.value_namespace = name_space;
        total_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate-high-water-mark")
    {
        packet_rate_high_water_mark = value;
        packet_rate_high_water_mark.value_namespace = name_space;
        packet_rate_high_water_mark.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurementResponder::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-interfaces")
    {
        total_interfaces.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "packet-rate-high-water-mark")
    {
        packet_rate_high_water_mark.yfilter = yfilter;
    }
}

bool PerformanceMeasurementResponder::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "responder-counters" || name == "total-interfaces" || name == "packet-rate" || name == "packet-rate-high-water-mark")
        return true;
    return false;
}

PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::ResponderCounters()
    :
    reply_packet_sent{YType::uint64, "reply-packet-sent"},
    reply_packet_sent_error{YType::uint64, "reply-packet-sent-error"},
    query_packet_received{YType::uint64, "query-packet-received"},
    received_packet_error_urotlv_not_present{YType::uint64, "received-packet-error-urotlv-not-present"},
    received_packet_error_invalid_source_port_number{YType::uint64, "received-packet-error-invalid-source-port-number"},
    received_packet_error_no_source_address{YType::uint64, "received-packet-error-no-source-address"},
    received_packet_error_no_return_path{YType::uint64, "received-packet-error-no-return-path"},
    received_packet_error_invalid_querier_control_code{YType::uint64, "received-packet-error-invalid-querier-control-code"},
    received_packet_error_unsupported_timestamp_format{YType::uint64, "received-packet-error-unsupported-timestamp-format"},
    received_packet_error_timestamp_not_available{YType::uint64, "received-packet-error-timestamp-not-available"},
    received_packet_error_unsupported_mandatory_tlv{YType::uint64, "received-packet-error-unsupported-mandatory-tlv"},
    received_packet_error_invalid_packet{YType::uint64, "received-packet-error-invalid-packet"}
{

    yang_name = "responder-counters"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::~ResponderCounters()
{
}

bool PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::has_data() const
{
    if (is_presence_container) return true;
    return reply_packet_sent.is_set
	|| reply_packet_sent_error.is_set
	|| query_packet_received.is_set
	|| received_packet_error_urotlv_not_present.is_set
	|| received_packet_error_invalid_source_port_number.is_set
	|| received_packet_error_no_source_address.is_set
	|| received_packet_error_no_return_path.is_set
	|| received_packet_error_invalid_querier_control_code.is_set
	|| received_packet_error_unsupported_timestamp_format.is_set
	|| received_packet_error_timestamp_not_available.is_set
	|| received_packet_error_unsupported_mandatory_tlv.is_set
	|| received_packet_error_invalid_packet.is_set;
}

bool PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reply_packet_sent.yfilter)
	|| ydk::is_set(reply_packet_sent_error.yfilter)
	|| ydk::is_set(query_packet_received.yfilter)
	|| ydk::is_set(received_packet_error_urotlv_not_present.yfilter)
	|| ydk::is_set(received_packet_error_invalid_source_port_number.yfilter)
	|| ydk::is_set(received_packet_error_no_source_address.yfilter)
	|| ydk::is_set(received_packet_error_no_return_path.yfilter)
	|| ydk::is_set(received_packet_error_invalid_querier_control_code.yfilter)
	|| ydk::is_set(received_packet_error_unsupported_timestamp_format.yfilter)
	|| ydk::is_set(received_packet_error_timestamp_not_available.yfilter)
	|| ydk::is_set(received_packet_error_unsupported_mandatory_tlv.yfilter)
	|| ydk::is_set(received_packet_error_invalid_packet.yfilter);
}

std::string PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_packet_sent.is_set || is_set(reply_packet_sent.yfilter)) leaf_name_data.push_back(reply_packet_sent.get_name_leafdata());
    if (reply_packet_sent_error.is_set || is_set(reply_packet_sent_error.yfilter)) leaf_name_data.push_back(reply_packet_sent_error.get_name_leafdata());
    if (query_packet_received.is_set || is_set(query_packet_received.yfilter)) leaf_name_data.push_back(query_packet_received.get_name_leafdata());
    if (received_packet_error_urotlv_not_present.is_set || is_set(received_packet_error_urotlv_not_present.yfilter)) leaf_name_data.push_back(received_packet_error_urotlv_not_present.get_name_leafdata());
    if (received_packet_error_invalid_source_port_number.is_set || is_set(received_packet_error_invalid_source_port_number.yfilter)) leaf_name_data.push_back(received_packet_error_invalid_source_port_number.get_name_leafdata());
    if (received_packet_error_no_source_address.is_set || is_set(received_packet_error_no_source_address.yfilter)) leaf_name_data.push_back(received_packet_error_no_source_address.get_name_leafdata());
    if (received_packet_error_no_return_path.is_set || is_set(received_packet_error_no_return_path.yfilter)) leaf_name_data.push_back(received_packet_error_no_return_path.get_name_leafdata());
    if (received_packet_error_invalid_querier_control_code.is_set || is_set(received_packet_error_invalid_querier_control_code.yfilter)) leaf_name_data.push_back(received_packet_error_invalid_querier_control_code.get_name_leafdata());
    if (received_packet_error_unsupported_timestamp_format.is_set || is_set(received_packet_error_unsupported_timestamp_format.yfilter)) leaf_name_data.push_back(received_packet_error_unsupported_timestamp_format.get_name_leafdata());
    if (received_packet_error_timestamp_not_available.is_set || is_set(received_packet_error_timestamp_not_available.yfilter)) leaf_name_data.push_back(received_packet_error_timestamp_not_available.get_name_leafdata());
    if (received_packet_error_unsupported_mandatory_tlv.is_set || is_set(received_packet_error_unsupported_mandatory_tlv.yfilter)) leaf_name_data.push_back(received_packet_error_unsupported_mandatory_tlv.get_name_leafdata());
    if (received_packet_error_invalid_packet.is_set || is_set(received_packet_error_invalid_packet.yfilter)) leaf_name_data.push_back(received_packet_error_invalid_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reply-packet-sent")
    {
        reply_packet_sent = value;
        reply_packet_sent.value_namespace = name_space;
        reply_packet_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-packet-sent-error")
    {
        reply_packet_sent_error = value;
        reply_packet_sent_error.value_namespace = name_space;
        reply_packet_sent_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-received")
    {
        query_packet_received = value;
        query_packet_received.value_namespace = name_space;
        query_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-urotlv-not-present")
    {
        received_packet_error_urotlv_not_present = value;
        received_packet_error_urotlv_not_present.value_namespace = name_space;
        received_packet_error_urotlv_not_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-invalid-source-port-number")
    {
        received_packet_error_invalid_source_port_number = value;
        received_packet_error_invalid_source_port_number.value_namespace = name_space;
        received_packet_error_invalid_source_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-no-source-address")
    {
        received_packet_error_no_source_address = value;
        received_packet_error_no_source_address.value_namespace = name_space;
        received_packet_error_no_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-no-return-path")
    {
        received_packet_error_no_return_path = value;
        received_packet_error_no_return_path.value_namespace = name_space;
        received_packet_error_no_return_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-invalid-querier-control-code")
    {
        received_packet_error_invalid_querier_control_code = value;
        received_packet_error_invalid_querier_control_code.value_namespace = name_space;
        received_packet_error_invalid_querier_control_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-unsupported-timestamp-format")
    {
        received_packet_error_unsupported_timestamp_format = value;
        received_packet_error_unsupported_timestamp_format.value_namespace = name_space;
        received_packet_error_unsupported_timestamp_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-timestamp-not-available")
    {
        received_packet_error_timestamp_not_available = value;
        received_packet_error_timestamp_not_available.value_namespace = name_space;
        received_packet_error_timestamp_not_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-unsupported-mandatory-tlv")
    {
        received_packet_error_unsupported_mandatory_tlv = value;
        received_packet_error_unsupported_mandatory_tlv.value_namespace = name_space;
        received_packet_error_unsupported_mandatory_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-invalid-packet")
    {
        received_packet_error_invalid_packet = value;
        received_packet_error_invalid_packet.value_namespace = name_space;
        received_packet_error_invalid_packet.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reply-packet-sent")
    {
        reply_packet_sent.yfilter = yfilter;
    }
    if(value_path == "reply-packet-sent-error")
    {
        reply_packet_sent_error.yfilter = yfilter;
    }
    if(value_path == "query-packet-received")
    {
        query_packet_received.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-urotlv-not-present")
    {
        received_packet_error_urotlv_not_present.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-invalid-source-port-number")
    {
        received_packet_error_invalid_source_port_number.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-no-source-address")
    {
        received_packet_error_no_source_address.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-no-return-path")
    {
        received_packet_error_no_return_path.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-invalid-querier-control-code")
    {
        received_packet_error_invalid_querier_control_code.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-unsupported-timestamp-format")
    {
        received_packet_error_unsupported_timestamp_format.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-timestamp-not-available")
    {
        received_packet_error_timestamp_not_available.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-unsupported-mandatory-tlv")
    {
        received_packet_error_unsupported_mandatory_tlv.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-invalid-packet")
    {
        received_packet_error_invalid_packet.yfilter = yfilter;
    }
}

bool PerformanceMeasurementResponder::Nodes::Node::Summary::ResponderCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reply-packet-sent" || name == "reply-packet-sent-error" || name == "query-packet-received" || name == "received-packet-error-urotlv-not-present" || name == "received-packet-error-invalid-source-port-number" || name == "received-packet-error-no-source-address" || name == "received-packet-error-no-return-path" || name == "received-packet-error-invalid-querier-control-code" || name == "received-packet-error-unsupported-timestamp-format" || name == "received-packet-error-timestamp-not-available" || name == "received-packet-error-unsupported-mandatory-tlv" || name == "received-packet-error-invalid-packet")
        return true;
    return false;
}

PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurementResponder::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurementResponder::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceMeasurementResponder::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurementResponder::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_handle{YType::uint32, "interface-handle"},
    source_address{YType::str, "source-address"},
    source_v6_address{YType::str, "source-v6-address"},
    packet_rate{YType::uint32, "packet-rate"},
    packet_rate_high_water_mark{YType::uint32, "packet-rate-high-water-mark"},
    cleanup_time_remaining{YType::uint32, "cleanup-time-remaining"}
        ,
    interface_counters(std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters>())
{
    interface_counters->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_handle.is_set
	|| source_address.is_set
	|| source_v6_address.is_set
	|| packet_rate.is_set
	|| packet_rate_high_water_mark.is_set
	|| cleanup_time_remaining.is_set
	|| (interface_counters !=  nullptr && interface_counters->has_data());
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_v6_address.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(packet_rate_high_water_mark.yfilter)
	|| ydk::is_set(cleanup_time_remaining.yfilter)
	|| (interface_counters !=  nullptr && interface_counters->has_operation());
}

std::string PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_v6_address.is_set || is_set(source_v6_address.yfilter)) leaf_name_data.push_back(source_v6_address.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (packet_rate_high_water_mark.is_set || is_set(packet_rate_high_water_mark.yfilter)) leaf_name_data.push_back(packet_rate_high_water_mark.get_name_leafdata());
    if (cleanup_time_remaining.is_set || is_set(cleanup_time_remaining.yfilter)) leaf_name_data.push_back(cleanup_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counters")
    {
        if(interface_counters == nullptr)
        {
            interface_counters = std::make_shared<PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters>();
        }
        return interface_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_counters != nullptr)
    {
        children["interface-counters"] = interface_counters;
    }

    return children;
}

void PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-v6-address")
    {
        source_v6_address = value;
        source_v6_address.value_namespace = name_space;
        source_v6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate-high-water-mark")
    {
        packet_rate_high_water_mark = value;
        packet_rate_high_water_mark.value_namespace = name_space;
        packet_rate_high_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-time-remaining")
    {
        cleanup_time_remaining = value;
        cleanup_time_remaining.value_namespace = name_space;
        cleanup_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-v6-address")
    {
        source_v6_address.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "packet-rate-high-water-mark")
    {
        packet_rate_high_water_mark.yfilter = yfilter;
    }
    if(value_path == "cleanup-time-remaining")
    {
        cleanup_time_remaining.yfilter = yfilter;
    }
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counters" || name == "interface-name" || name == "interface-name-xr" || name == "interface-handle" || name == "source-address" || name == "source-v6-address" || name == "packet-rate" || name == "packet-rate-high-water-mark" || name == "cleanup-time-remaining")
        return true;
    return false;
}

PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::InterfaceCounters()
    :
    reply_packet_sent{YType::uint64, "reply-packet-sent"},
    reply_packet_sent_error{YType::uint64, "reply-packet-sent-error"},
    query_packet_received{YType::uint64, "query-packet-received"},
    received_packet_error_urotlv_not_present{YType::uint64, "received-packet-error-urotlv-not-present"},
    received_packet_error_invalid_source_port_number{YType::uint64, "received-packet-error-invalid-source-port-number"},
    received_packet_error_no_source_address{YType::uint64, "received-packet-error-no-source-address"},
    received_packet_error_no_return_path{YType::uint64, "received-packet-error-no-return-path"},
    received_packet_error_invalid_querier_control_code{YType::uint64, "received-packet-error-invalid-querier-control-code"},
    received_packet_error_unsupported_timestamp_format{YType::uint64, "received-packet-error-unsupported-timestamp-format"},
    received_packet_error_timestamp_not_available{YType::uint64, "received-packet-error-timestamp-not-available"},
    received_packet_error_unsupported_mandatory_tlv{YType::uint64, "received-packet-error-unsupported-mandatory-tlv"},
    received_packet_error_invalid_packet{YType::uint64, "received-packet-error-invalid-packet"}
{

    yang_name = "interface-counters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::~InterfaceCounters()
{
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::has_data() const
{
    if (is_presence_container) return true;
    return reply_packet_sent.is_set
	|| reply_packet_sent_error.is_set
	|| query_packet_received.is_set
	|| received_packet_error_urotlv_not_present.is_set
	|| received_packet_error_invalid_source_port_number.is_set
	|| received_packet_error_no_source_address.is_set
	|| received_packet_error_no_return_path.is_set
	|| received_packet_error_invalid_querier_control_code.is_set
	|| received_packet_error_unsupported_timestamp_format.is_set
	|| received_packet_error_timestamp_not_available.is_set
	|| received_packet_error_unsupported_mandatory_tlv.is_set
	|| received_packet_error_invalid_packet.is_set;
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reply_packet_sent.yfilter)
	|| ydk::is_set(reply_packet_sent_error.yfilter)
	|| ydk::is_set(query_packet_received.yfilter)
	|| ydk::is_set(received_packet_error_urotlv_not_present.yfilter)
	|| ydk::is_set(received_packet_error_invalid_source_port_number.yfilter)
	|| ydk::is_set(received_packet_error_no_source_address.yfilter)
	|| ydk::is_set(received_packet_error_no_return_path.yfilter)
	|| ydk::is_set(received_packet_error_invalid_querier_control_code.yfilter)
	|| ydk::is_set(received_packet_error_unsupported_timestamp_format.yfilter)
	|| ydk::is_set(received_packet_error_timestamp_not_available.yfilter)
	|| ydk::is_set(received_packet_error_unsupported_mandatory_tlv.yfilter)
	|| ydk::is_set(received_packet_error_invalid_packet.yfilter);
}

std::string PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_packet_sent.is_set || is_set(reply_packet_sent.yfilter)) leaf_name_data.push_back(reply_packet_sent.get_name_leafdata());
    if (reply_packet_sent_error.is_set || is_set(reply_packet_sent_error.yfilter)) leaf_name_data.push_back(reply_packet_sent_error.get_name_leafdata());
    if (query_packet_received.is_set || is_set(query_packet_received.yfilter)) leaf_name_data.push_back(query_packet_received.get_name_leafdata());
    if (received_packet_error_urotlv_not_present.is_set || is_set(received_packet_error_urotlv_not_present.yfilter)) leaf_name_data.push_back(received_packet_error_urotlv_not_present.get_name_leafdata());
    if (received_packet_error_invalid_source_port_number.is_set || is_set(received_packet_error_invalid_source_port_number.yfilter)) leaf_name_data.push_back(received_packet_error_invalid_source_port_number.get_name_leafdata());
    if (received_packet_error_no_source_address.is_set || is_set(received_packet_error_no_source_address.yfilter)) leaf_name_data.push_back(received_packet_error_no_source_address.get_name_leafdata());
    if (received_packet_error_no_return_path.is_set || is_set(received_packet_error_no_return_path.yfilter)) leaf_name_data.push_back(received_packet_error_no_return_path.get_name_leafdata());
    if (received_packet_error_invalid_querier_control_code.is_set || is_set(received_packet_error_invalid_querier_control_code.yfilter)) leaf_name_data.push_back(received_packet_error_invalid_querier_control_code.get_name_leafdata());
    if (received_packet_error_unsupported_timestamp_format.is_set || is_set(received_packet_error_unsupported_timestamp_format.yfilter)) leaf_name_data.push_back(received_packet_error_unsupported_timestamp_format.get_name_leafdata());
    if (received_packet_error_timestamp_not_available.is_set || is_set(received_packet_error_timestamp_not_available.yfilter)) leaf_name_data.push_back(received_packet_error_timestamp_not_available.get_name_leafdata());
    if (received_packet_error_unsupported_mandatory_tlv.is_set || is_set(received_packet_error_unsupported_mandatory_tlv.yfilter)) leaf_name_data.push_back(received_packet_error_unsupported_mandatory_tlv.get_name_leafdata());
    if (received_packet_error_invalid_packet.is_set || is_set(received_packet_error_invalid_packet.yfilter)) leaf_name_data.push_back(received_packet_error_invalid_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reply-packet-sent")
    {
        reply_packet_sent = value;
        reply_packet_sent.value_namespace = name_space;
        reply_packet_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-packet-sent-error")
    {
        reply_packet_sent_error = value;
        reply_packet_sent_error.value_namespace = name_space;
        reply_packet_sent_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-packet-received")
    {
        query_packet_received = value;
        query_packet_received.value_namespace = name_space;
        query_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-urotlv-not-present")
    {
        received_packet_error_urotlv_not_present = value;
        received_packet_error_urotlv_not_present.value_namespace = name_space;
        received_packet_error_urotlv_not_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-invalid-source-port-number")
    {
        received_packet_error_invalid_source_port_number = value;
        received_packet_error_invalid_source_port_number.value_namespace = name_space;
        received_packet_error_invalid_source_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-no-source-address")
    {
        received_packet_error_no_source_address = value;
        received_packet_error_no_source_address.value_namespace = name_space;
        received_packet_error_no_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-no-return-path")
    {
        received_packet_error_no_return_path = value;
        received_packet_error_no_return_path.value_namespace = name_space;
        received_packet_error_no_return_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-invalid-querier-control-code")
    {
        received_packet_error_invalid_querier_control_code = value;
        received_packet_error_invalid_querier_control_code.value_namespace = name_space;
        received_packet_error_invalid_querier_control_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-unsupported-timestamp-format")
    {
        received_packet_error_unsupported_timestamp_format = value;
        received_packet_error_unsupported_timestamp_format.value_namespace = name_space;
        received_packet_error_unsupported_timestamp_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-timestamp-not-available")
    {
        received_packet_error_timestamp_not_available = value;
        received_packet_error_timestamp_not_available.value_namespace = name_space;
        received_packet_error_timestamp_not_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-unsupported-mandatory-tlv")
    {
        received_packet_error_unsupported_mandatory_tlv = value;
        received_packet_error_unsupported_mandatory_tlv.value_namespace = name_space;
        received_packet_error_unsupported_mandatory_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-packet-error-invalid-packet")
    {
        received_packet_error_invalid_packet = value;
        received_packet_error_invalid_packet.value_namespace = name_space;
        received_packet_error_invalid_packet.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reply-packet-sent")
    {
        reply_packet_sent.yfilter = yfilter;
    }
    if(value_path == "reply-packet-sent-error")
    {
        reply_packet_sent_error.yfilter = yfilter;
    }
    if(value_path == "query-packet-received")
    {
        query_packet_received.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-urotlv-not-present")
    {
        received_packet_error_urotlv_not_present.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-invalid-source-port-number")
    {
        received_packet_error_invalid_source_port_number.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-no-source-address")
    {
        received_packet_error_no_source_address.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-no-return-path")
    {
        received_packet_error_no_return_path.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-invalid-querier-control-code")
    {
        received_packet_error_invalid_querier_control_code.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-unsupported-timestamp-format")
    {
        received_packet_error_unsupported_timestamp_format.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-timestamp-not-available")
    {
        received_packet_error_timestamp_not_available.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-unsupported-mandatory-tlv")
    {
        received_packet_error_unsupported_mandatory_tlv.yfilter = yfilter;
    }
    if(value_path == "received-packet-error-invalid-packet")
    {
        received_packet_error_invalid_packet.yfilter = yfilter;
    }
}

bool PerformanceMeasurementResponder::Nodes::Node::Interfaces::Interface::InterfaceCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reply-packet-sent" || name == "reply-packet-sent-error" || name == "query-packet-received" || name == "received-packet-error-urotlv-not-present" || name == "received-packet-error-invalid-source-port-number" || name == "received-packet-error-no-source-address" || name == "received-packet-error-no-return-path" || name == "received-packet-error-invalid-querier-control-code" || name == "received-packet-error-unsupported-timestamp-format" || name == "received-packet-error-timestamp-not-available" || name == "received-packet-error-unsupported-mandatory-tlv" || name == "received-packet-error-invalid-packet")
        return true;
    return false;
}

const Enum::YLeaf PmMeasurement::delay_measurement_type {0, "delay-measurement-type"};

const Enum::YLeaf PmAdvertReason::periodic_timer_expired_no_advertisements {0, "periodic-timer-expired-no-advertisements"};
const Enum::YLeaf PmAdvertReason::periodic_advertisement_threshold_average {1, "periodic-advertisement-threshold-average"};
const Enum::YLeaf PmAdvertReason::periodic_advertisement_threshold_minimum {2, "periodic-advertisement-threshold-minimum"};
const Enum::YLeaf PmAdvertReason::periodic_advertisement_threshold_maximum {3, "periodic-advertisement-threshold-maximum"};
const Enum::YLeaf PmAdvertReason::periodic_advertisement_threshold_variance {4, "periodic-advertisement-threshold-variance"};
const Enum::YLeaf PmAdvertReason::accelerated_advertisement_threshold_minimum {5, "accelerated-advertisement-threshold-minimum"};
const Enum::YLeaf PmAdvertReason::accelerated_advertisement_upper_bound_minimum {6, "accelerated-advertisement-upper-bound-minimum"};
const Enum::YLeaf PmAdvertReason::advertisement_enabled {7, "advertisement-enabled"};
const Enum::YLeaf PmAdvertReason::advertisement_disabled {8, "advertisement-disabled"};
const Enum::YLeaf PmAdvertReason::session_unconfigured {9, "session-unconfigured"};
const Enum::YLeaf PmAdvertReason::clear_cli_command {10, "clear-cli-command"};
const Enum::YLeaf PmAdvertReason::advertise_delay_config {11, "advertise-delay-config"};
const Enum::YLeaf PmAdvertReason::advertise_delay_unconfig {12, "advertise-delay-unconfig"};
const Enum::YLeaf PmAdvertReason::received_control_code_error {13, "received-control-code-error"};

const Enum::YLeaf PmProbeNotRunningReason::probe_is_running {0, "probe-is-running"};
const Enum::YLeaf PmProbeNotRunningReason::platform_not_supported {1, "platform-not-supported"};
const Enum::YLeaf PmProbeNotRunningReason::nonv1_active_node {2, "nonv1-active-node"};
const Enum::YLeaf PmProbeNotRunningReason::control_code_error {3, "control-code-error"};
const Enum::YLeaf PmProbeNotRunningReason::interface_admin_down {4, "interface-admin-down"};
const Enum::YLeaf PmProbeNotRunningReason::interface_down {5, "interface-down"};
const Enum::YLeaf PmProbeNotRunningReason::mpls_capability_not_present {6, "mpls-capability-not-present"};
const Enum::YLeaf PmProbeNotRunningReason::interface_not_present {7, "interface-not-present"};
const Enum::YLeaf PmProbeNotRunningReason::ip_address_not_configured {8, "ip-address-not-configured"};

const Enum::YLeaf PmDelayMode::delay_mode_one_way {0, "delay-mode-one-way"};
const Enum::YLeaf PmDelayMode::delay_mode_two_way {1, "delay-mode-two-way"};

const Enum::YLeaf PmTransport::interface_transport_type {0, "interface-transport-type"};
const Enum::YLeaf PmTransport::rsvpte_transport_type {1, "rsvpte-transport-type"};
const Enum::YLeaf PmTransport::sr_policy_transport_type {2, "sr-policy-transport-type"};


}
}

