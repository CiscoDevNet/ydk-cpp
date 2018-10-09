
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_freqsync_oper_0.hpp"
#include "Cisco_IOS_XR_freqsync_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_oper {

FrequencySynchronization::FrequencySynchronization()
    :
    global_nodes(std::make_shared<FrequencySynchronization::GlobalNodes>())
    , global_interfaces(std::make_shared<FrequencySynchronization::GlobalInterfaces>())
    , summary(std::make_shared<FrequencySynchronization::Summary>())
    , interface_datas(std::make_shared<FrequencySynchronization::InterfaceDatas>())
    , nodes(std::make_shared<FrequencySynchronization::Nodes>())
{
    global_nodes->parent = this;
    global_interfaces->parent = this;
    summary->parent = this;
    interface_datas->parent = this;
    nodes->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "Cisco-IOS-XR-freqsync-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

FrequencySynchronization::~FrequencySynchronization()
{
}

bool FrequencySynchronization::has_data() const
{
    if (is_presence_container) return true;
    return (global_nodes !=  nullptr && global_nodes->has_data())
	|| (global_interfaces !=  nullptr && global_interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (interface_datas !=  nullptr && interface_datas->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| (global_nodes !=  nullptr && global_nodes->has_operation())
	|| (global_interfaces !=  nullptr && global_interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (interface_datas !=  nullptr && interface_datas->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-nodes")
    {
        if(global_nodes == nullptr)
        {
            global_nodes = std::make_shared<FrequencySynchronization::GlobalNodes>();
        }
        return global_nodes;
    }

    if(child_yang_name == "global-interfaces")
    {
        if(global_interfaces == nullptr)
        {
            global_interfaces = std::make_shared<FrequencySynchronization::GlobalInterfaces>();
        }
        return global_interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<FrequencySynchronization::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interface-datas")
    {
        if(interface_datas == nullptr)
        {
            interface_datas = std::make_shared<FrequencySynchronization::InterfaceDatas>();
        }
        return interface_datas;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<FrequencySynchronization::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_nodes != nullptr)
    {
        children["global-nodes"] = global_nodes;
    }

    if(global_interfaces != nullptr)
    {
        children["global-interfaces"] = global_interfaces;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(interface_datas != nullptr)
    {
        children["interface-datas"] = interface_datas;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FrequencySynchronization::clone_ptr() const
{
    return std::make_shared<FrequencySynchronization>();
}

std::string FrequencySynchronization::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FrequencySynchronization::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FrequencySynchronization::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FrequencySynchronization::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-nodes" || name == "global-interfaces" || name == "summary" || name == "interface-datas" || name == "nodes")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNodes()
    :
    global_node(this, {"node"})
{

    yang_name = "global-nodes"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::GlobalNodes::~GlobalNodes()
{
}

bool FrequencySynchronization::GlobalNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_node.len(); index++)
    {
        if(global_node[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::has_operation() const
{
    for (std::size_t index=0; index<global_node.len(); index++)
    {
        if(global_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-node")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode>();
        c->parent = this;
        global_node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : global_node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::GlobalNode()
    :
    node{YType::str, "node"}
        ,
    clock_interface_selection_back_traces(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces>())
    , clock_interface_selection_forward_traces(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces>())
    , time_of_day_back_trace(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace>())
    , ntp_selection_forward_trace(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace>())
    , ptp_selection_forward_trace(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace>())
{
    clock_interface_selection_back_traces->parent = this;
    clock_interface_selection_forward_traces->parent = this;
    time_of_day_back_trace->parent = this;
    ntp_selection_forward_trace->parent = this;
    ptp_selection_forward_trace->parent = this;

    yang_name = "global-node"; yang_parent_name = "global-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::~GlobalNode()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| (clock_interface_selection_back_traces !=  nullptr && clock_interface_selection_back_traces->has_data())
	|| (clock_interface_selection_forward_traces !=  nullptr && clock_interface_selection_forward_traces->has_data())
	|| (time_of_day_back_trace !=  nullptr && time_of_day_back_trace->has_data())
	|| (ntp_selection_forward_trace !=  nullptr && ntp_selection_forward_trace->has_data())
	|| (ptp_selection_forward_trace !=  nullptr && ptp_selection_forward_trace->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (clock_interface_selection_back_traces !=  nullptr && clock_interface_selection_back_traces->has_operation())
	|| (clock_interface_selection_forward_traces !=  nullptr && clock_interface_selection_forward_traces->has_operation())
	|| (time_of_day_back_trace !=  nullptr && time_of_day_back_trace->has_operation())
	|| (ntp_selection_forward_trace !=  nullptr && ntp_selection_forward_trace->has_operation())
	|| (ptp_selection_forward_trace !=  nullptr && ptp_selection_forward_trace->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/global-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-node";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-interface-selection-back-traces")
    {
        if(clock_interface_selection_back_traces == nullptr)
        {
            clock_interface_selection_back_traces = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces>();
        }
        return clock_interface_selection_back_traces;
    }

    if(child_yang_name == "clock-interface-selection-forward-traces")
    {
        if(clock_interface_selection_forward_traces == nullptr)
        {
            clock_interface_selection_forward_traces = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces>();
        }
        return clock_interface_selection_forward_traces;
    }

    if(child_yang_name == "time-of-day-back-trace")
    {
        if(time_of_day_back_trace == nullptr)
        {
            time_of_day_back_trace = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace>();
        }
        return time_of_day_back_trace;
    }

    if(child_yang_name == "ntp-selection-forward-trace")
    {
        if(ntp_selection_forward_trace == nullptr)
        {
            ntp_selection_forward_trace = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace>();
        }
        return ntp_selection_forward_trace;
    }

    if(child_yang_name == "ptp-selection-forward-trace")
    {
        if(ptp_selection_forward_trace == nullptr)
        {
            ptp_selection_forward_trace = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace>();
        }
        return ptp_selection_forward_trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_interface_selection_back_traces != nullptr)
    {
        children["clock-interface-selection-back-traces"] = clock_interface_selection_back_traces;
    }

    if(clock_interface_selection_forward_traces != nullptr)
    {
        children["clock-interface-selection-forward-traces"] = clock_interface_selection_forward_traces;
    }

    if(time_of_day_back_trace != nullptr)
    {
        children["time-of-day-back-trace"] = time_of_day_back_trace;
    }

    if(ntp_selection_forward_trace != nullptr)
    {
        children["ntp-selection-forward-trace"] = ntp_selection_forward_trace;
    }

    if(ptp_selection_forward_trace != nullptr)
    {
        children["ptp-selection-forward-trace"] = ptp_selection_forward_trace;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-interface-selection-back-traces" || name == "clock-interface-selection-forward-traces" || name == "time-of-day-back-trace" || name == "ntp-selection-forward-trace" || name == "ptp-selection-forward-trace" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTraces()
    :
    clock_interface_selection_back_trace(this, {"clock_type", "id"})
{

    yang_name = "clock-interface-selection-back-traces"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::~ClockInterfaceSelectionBackTraces()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_interface_selection_back_trace.len(); index++)
    {
        if(clock_interface_selection_back_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::has_operation() const
{
    for (std::size_t index=0; index<clock_interface_selection_back_trace.len(); index++)
    {
        if(clock_interface_selection_back_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-back-traces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-interface-selection-back-trace")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace>();
        c->parent = this;
        clock_interface_selection_back_trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clock_interface_selection_back_trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-interface-selection-back-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::ClockInterfaceSelectionBackTrace()
    :
    clock_type{YType::enumeration, "clock-type"},
    id{YType::uint32, "id"}
        ,
    selected_source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource>())
    , selection_point(this, {})
{
    selected_source->parent = this;

    yang_name = "clock-interface-selection-back-trace"; yang_parent_name = "clock-interface-selection-back-traces"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::~ClockInterfaceSelectionBackTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<selection_point.len(); index++)
    {
        if(selection_point[index]->has_data())
            return true;
    }
    return clock_type.is_set
	|| id.is_set
	|| (selected_source !=  nullptr && selected_source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::has_operation() const
{
    for (std::size_t index=0; index<selection_point.len(); index++)
    {
        if(selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (selected_source !=  nullptr && selected_source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-back-trace";
    ADD_KEY_TOKEN(clock_type, "clock-type");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint>();
        c->parent = this;
        selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    count = 0;
    for (auto c : selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-type")
    {
        clock_type = value;
        clock_type.value_namespace = name_space;
        clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-type")
    {
        clock_type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selected-source" || name == "selection-point" || name == "clock-type" || name == "id")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "clock-interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "clock-interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionBackTraces::ClockInterfaceSelectionBackTrace::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTraces()
    :
    clock_interface_selection_forward_trace(this, {"clock_type", "port"})
{

    yang_name = "clock-interface-selection-forward-traces"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::~ClockInterfaceSelectionForwardTraces()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_interface_selection_forward_trace.len(); index++)
    {
        if(clock_interface_selection_forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::has_operation() const
{
    for (std::size_t index=0; index<clock_interface_selection_forward_trace.len(); index++)
    {
        if(clock_interface_selection_forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-forward-traces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-interface-selection-forward-trace")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace>();
        c->parent = this;
        clock_interface_selection_forward_trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clock_interface_selection_forward_trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-interface-selection-forward-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ClockInterfaceSelectionForwardTrace()
    :
    clock_type{YType::enumeration, "clock-type"},
    port{YType::uint32, "port"}
        ,
    forward_trace(this, {})
{

    yang_name = "clock-interface-selection-forward-trace"; yang_parent_name = "clock-interface-selection-forward-traces"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::~ClockInterfaceSelectionForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return clock_type.is_set
	|| port.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-interface-selection-forward-trace";
    ADD_KEY_TOKEN(clock_type, "clock-type");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forward_trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-type")
    {
        clock_type = value;
        clock_type.value_namespace = name_space;
        clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-type")
    {
        clock_type.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace" || name == "clock-type" || name == "port")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "clock-interface-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
        ,
    selection_point(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
    , source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    if (is_presence_container) return true;
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::ClockInterfaceSelectionForwardTraces::ClockInterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::TimeOfDayBackTrace()
    :
    selected_source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource>())
    , selection_point(this, {})
{
    selected_source->parent = this;

    yang_name = "time-of-day-back-trace"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::~TimeOfDayBackTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<selection_point.len(); index++)
    {
        if(selection_point[index]->has_data())
            return true;
    }
    return (selected_source !=  nullptr && selected_source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::has_operation() const
{
    for (std::size_t index=0; index<selection_point.len(); index++)
    {
        if(selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (selected_source !=  nullptr && selected_source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-of-day-back-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint>();
        c->parent = this;
        selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    count = 0;
    for (auto c : selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selected-source" || name == "selection-point")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "time-of-day-back-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectedSource::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "time-of-day-back-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::TimeOfDayBackTrace::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::NtpSelectionForwardTrace()
    :
    forward_trace(this, {})
{

    yang_name = "ntp-selection-forward-trace"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::~NtpSelectionForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp-selection-forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forward_trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "ntp-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
        ,
    selection_point(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
    , source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    if (is_presence_container) return true;
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::NtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::PtpSelectionForwardTrace()
    :
    forward_trace(this, {})
{

    yang_name = "ptp-selection-forward-trace"; yang_parent_name = "global-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::~PtpSelectionForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp-selection-forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forward_trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "ptp-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
        ,
    selection_point(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
    , source(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    if (is_presence_container) return true;
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalNodes::GlobalNode::PtpSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterfaces()
    :
    global_interface(this, {"interface_name"})
{

    yang_name = "global-interfaces"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::GlobalInterfaces::~GlobalInterfaces()
{
}

bool FrequencySynchronization::GlobalInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_interface.len(); index++)
    {
        if(global_interface[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<global_interface.len(); index++)
    {
        if(global_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-interface")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface>();
        c->parent = this;
        global_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : global_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-interface")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::GlobalInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    interface_selection_forward_trace(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace>())
    , interface_selection_back_trace(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace>())
{
    interface_selection_forward_trace->parent = this;
    interface_selection_back_trace->parent = this;

    yang_name = "global-interface"; yang_parent_name = "global-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::~GlobalInterface()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (interface_selection_forward_trace !=  nullptr && interface_selection_forward_trace->has_data())
	|| (interface_selection_back_trace !=  nullptr && interface_selection_back_trace->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (interface_selection_forward_trace !=  nullptr && interface_selection_forward_trace->has_operation())
	|| (interface_selection_back_trace !=  nullptr && interface_selection_back_trace->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/global-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-selection-forward-trace")
    {
        if(interface_selection_forward_trace == nullptr)
        {
            interface_selection_forward_trace = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace>();
        }
        return interface_selection_forward_trace;
    }

    if(child_yang_name == "interface-selection-back-trace")
    {
        if(interface_selection_back_trace == nullptr)
        {
            interface_selection_back_trace = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace>();
        }
        return interface_selection_back_trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_selection_forward_trace != nullptr)
    {
        children["interface-selection-forward-trace"] = interface_selection_forward_trace;
    }

    if(interface_selection_back_trace != nullptr)
    {
        children["interface-selection-back-trace"] = interface_selection_back_trace;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-selection-forward-trace" || name == "interface-selection-back-trace" || name == "interface-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::InterfaceSelectionForwardTrace()
    :
    forward_trace(this, {})
{

    yang_name = "interface-selection-forward-trace"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::~InterfaceSelectionForwardTrace()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::has_operation() const
{
    for (std::size_t index=0; index<forward_trace.len(); index++)
    {
        if(forward_trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-selection-forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace>();
        c->parent = this;
        forward_trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forward_trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTrace()
    :
    forward_trace_node(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>())
{
    forward_trace_node->parent = this;

    yang_name = "forward-trace"; yang_parent_name = "interface-selection-forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::~ForwardTrace()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::has_data() const
{
    if (is_presence_container) return true;
    return (forward_trace_node !=  nullptr && forward_trace_node->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::has_operation() const
{
    return is_set(yfilter)
	|| (forward_trace_node !=  nullptr && forward_trace_node->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-trace-node")
    {
        if(forward_trace_node == nullptr)
        {
            forward_trace_node = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode>();
        }
        return forward_trace_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(forward_trace_node != nullptr)
    {
        children["forward-trace-node"] = forward_trace_node;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-trace-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::ForwardTraceNode()
    :
    node_type{YType::enumeration, "node-type"}
        ,
    selection_point(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>())
    , source(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>())
{
    selection_point->parent = this;
    source->parent = this;

    yang_name = "forward-trace-node"; yang_parent_name = "forward-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::~ForwardTraceNode()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_data() const
{
    if (is_presence_container) return true;
    return node_type.is_set
	|| (selection_point !=  nullptr && selection_point->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-trace-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint>();
        }
        return selection_point;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "source" || name == "node-type")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "forward-trace-node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::~Source()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionForwardTrace::ForwardTrace::ForwardTraceNode::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::InterfaceSelectionBackTrace()
    :
    selected_source(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource>())
    , selection_point(this, {})
{
    selected_source->parent = this;

    yang_name = "interface-selection-back-trace"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::~InterfaceSelectionBackTrace()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<selection_point.len(); index++)
    {
        if(selection_point[index]->has_data())
            return true;
    }
    return (selected_source !=  nullptr && selected_source->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::has_operation() const
{
    for (std::size_t index=0; index<selection_point.len(); index++)
    {
        if(selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (selected_source !=  nullptr && selected_source->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-selection-back-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint>();
        c->parent = this;
        selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    count = 0;
    for (auto c : selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selected-source" || name == "selection-point")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectedSource::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "interface-selection-back-trace"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::GlobalInterfaces::GlobalInterface::InterfaceSelectionBackTrace::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Summary::Summary()
    :
    frequency_summary(this, {})
    , time_of_day_summary(this, {})
{

    yang_name = "summary"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::~Summary()
{
}

bool FrequencySynchronization::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frequency_summary.len(); index++)
    {
        if(frequency_summary[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_of_day_summary.len(); index++)
    {
        if(time_of_day_summary[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Summary::has_operation() const
{
    for (std::size_t index=0; index<frequency_summary.len(); index++)
    {
        if(frequency_summary[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_of_day_summary.len(); index++)
    {
        if(time_of_day_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency-summary")
    {
        auto c = std::make_shared<FrequencySynchronization::Summary::FrequencySummary>();
        c->parent = this;
        frequency_summary.append(c);
        return c;
    }

    if(child_yang_name == "time-of-day-summary")
    {
        auto c = std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary>();
        c->parent = this;
        time_of_day_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : frequency_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : time_of_day_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-summary" || name == "time-of-day-summary")
        return true;
    return false;
}

FrequencySynchronization::Summary::FrequencySummary::FrequencySummary()
    :
    clock_count{YType::uint32, "clock-count"},
    ethernet_count{YType::uint32, "ethernet-count"},
    sonet_count{YType::uint32, "sonet-count"}
        ,
    source(std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source>())
{
    source->parent = this;

    yang_name = "frequency-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::FrequencySummary::~FrequencySummary()
{
}

bool FrequencySynchronization::Summary::FrequencySummary::has_data() const
{
    if (is_presence_container) return true;
    return clock_count.is_set
	|| ethernet_count.is_set
	|| sonet_count.is_set
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::Summary::FrequencySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_count.yfilter)
	|| ydk::is_set(ethernet_count.yfilter)
	|| ydk::is_set(sonet_count.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::Summary::FrequencySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::FrequencySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::FrequencySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_count.is_set || is_set(clock_count.yfilter)) leaf_name_data.push_back(clock_count.get_name_leafdata());
    if (ethernet_count.is_set || is_set(ethernet_count.yfilter)) leaf_name_data.push_back(ethernet_count.get_name_leafdata());
    if (sonet_count.is_set || is_set(sonet_count.yfilter)) leaf_name_data.push_back(sonet_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::FrequencySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::FrequencySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::Summary::FrequencySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-count")
    {
        clock_count = value;
        clock_count.value_namespace = name_space;
        clock_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-count")
    {
        ethernet_count = value;
        ethernet_count.value_namespace = name_space;
        ethernet_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-count")
    {
        sonet_count = value;
        sonet_count.value_namespace = name_space;
        sonet_count.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::FrequencySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-count")
    {
        clock_count.yfilter = yfilter;
    }
    if(value_path == "ethernet-count")
    {
        ethernet_count.yfilter = yfilter;
    }
    if(value_path == "sonet-count")
    {
        sonet_count.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::FrequencySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "clock-count" || name == "ethernet-count" || name == "sonet-count")
        return true;
    return false;
}

FrequencySynchronization::Summary::FrequencySummary::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "frequency-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::FrequencySummary::Source::~Source()
{
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/frequency-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::FrequencySummary::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::FrequencySummary::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::FrequencySummary::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Summary::FrequencySummary::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::FrequencySummary::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/frequency-summary/source/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/frequency-summary/source/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::FrequencySummary::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::TimeOfDaySummary()
    :
    node_count{YType::uint32, "node-count"}
        ,
    source(std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source>())
{
    source->parent = this;

    yang_name = "time-of-day-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::TimeOfDaySummary::~TimeOfDaySummary()
{
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::has_data() const
{
    if (is_presence_container) return true;
    return node_count.is_set
	|| (source !=  nullptr && source->has_data());
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_count.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-of-day-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::TimeOfDaySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_count.is_set || is_set(node_count.yfilter)) leaf_name_data.push_back(node_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::TimeOfDaySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::TimeOfDaySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void FrequencySynchronization::Summary::TimeOfDaySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-count")
    {
        node_count = value;
        node_count.value_namespace = name_space;
        node_count.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::TimeOfDaySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-count")
    {
        node_count.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "node-count")
        return true;
    return false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "time-of-day-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::~Source()
{
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/time-of-day-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::TimeOfDaySummary::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/time-of-day-summary/source/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/summary/time-of-day-summary/source/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Summary::TimeOfDaySummary::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceDatas()
    :
    interface_data(this, {"interface_name"})
{

    yang_name = "interface-datas"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::InterfaceDatas::~InterfaceDatas()
{
}

bool FrequencySynchronization::InterfaceDatas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_data.len(); index++)
    {
        if(interface_data[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::InterfaceDatas::has_operation() const
{
    for (std::size_t index=0; index<interface_data.len(); index++)
    {
        if(interface_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::InterfaceDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-datas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-data")
    {
        auto c = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData>();
        c->parent = this;
        interface_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::InterfaceDatas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::InterfaceDatas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::InterfaceDatas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-data")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::InterfaceData()
    :
    interface_name{YType::str, "interface-name"},
    name{YType::str, "name"},
    state{YType::enumeration, "state"},
    ssm_enabled{YType::boolean, "ssm-enabled"},
    squelched{YType::boolean, "squelched"},
    selection_input{YType::boolean, "selection-input"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    damping_state{YType::enumeration, "damping-state"},
    damping_time{YType::uint32, "damping-time"},
    wait_to_restore_time{YType::uint16, "wait-to-restore-time"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"}
        ,
    source(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::Source>())
    , selected_source(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource>())
    , quality_level_received(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived>())
    , quality_level_damped(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped>())
    , quality_level_effective_input(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput>())
    , quality_level_effective_output(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput>())
    , quality_level_selected_source(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource>())
    , ethernet_peer_information(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation>())
    , esmc_statistics(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics>())
    , spa_selection_point(this, {})
    , node_selection_point(this, {})
{
    source->parent = this;
    selected_source->parent = this;
    quality_level_received->parent = this;
    quality_level_damped->parent = this;
    quality_level_effective_input->parent = this;
    quality_level_effective_output->parent = this;
    quality_level_selected_source->parent = this;
    ethernet_peer_information->parent = this;
    esmc_statistics->parent = this;

    yang_name = "interface-data"; yang_parent_name = "interface-datas"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::~InterfaceData()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| name.is_set
	|| state.is_set
	|| ssm_enabled.is_set
	|| squelched.is_set
	|| selection_input.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| damping_state.is_set
	|| damping_time.is_set
	|| wait_to_restore_time.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| (source !=  nullptr && source->has_data())
	|| (selected_source !=  nullptr && selected_source->has_data())
	|| (quality_level_received !=  nullptr && quality_level_received->has_data())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_data())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_data())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_data())
	|| (ethernet_peer_information !=  nullptr && ethernet_peer_information->has_data())
	|| (esmc_statistics !=  nullptr && esmc_statistics->has_data());
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::has_operation() const
{
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(ssm_enabled.yfilter)
	|| ydk::is_set(squelched.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(damping_state.yfilter)
	|| ydk::is_set(damping_time.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (selected_source !=  nullptr && selected_source->has_operation())
	|| (quality_level_received !=  nullptr && quality_level_received->has_operation())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_operation())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_operation())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_operation())
	|| (ethernet_peer_information !=  nullptr && ethernet_peer_information->has_operation())
	|| (esmc_statistics !=  nullptr && esmc_statistics->has_operation());
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/interface-datas/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (ssm_enabled.is_set || is_set(ssm_enabled.yfilter)) leaf_name_data.push_back(ssm_enabled.get_name_leafdata());
    if (squelched.is_set || is_set(squelched.yfilter)) leaf_name_data.push_back(squelched.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (damping_state.is_set || is_set(damping_state.yfilter)) leaf_name_data.push_back(damping_state.get_name_leafdata());
    if (damping_time.is_set || is_set(damping_time.yfilter)) leaf_name_data.push_back(damping_time.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::Source>();
        }
        return source;
    }

    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "quality-level-received")
    {
        if(quality_level_received == nullptr)
        {
            quality_level_received = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived>();
        }
        return quality_level_received;
    }

    if(child_yang_name == "quality-level-damped")
    {
        if(quality_level_damped == nullptr)
        {
            quality_level_damped = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped>();
        }
        return quality_level_damped;
    }

    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    if(child_yang_name == "quality-level-effective-output")
    {
        if(quality_level_effective_output == nullptr)
        {
            quality_level_effective_output = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput>();
        }
        return quality_level_effective_output;
    }

    if(child_yang_name == "quality-level-selected-source")
    {
        if(quality_level_selected_source == nullptr)
        {
            quality_level_selected_source = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource>();
        }
        return quality_level_selected_source;
    }

    if(child_yang_name == "ethernet-peer-information")
    {
        if(ethernet_peer_information == nullptr)
        {
            ethernet_peer_information = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation>();
        }
        return ethernet_peer_information;
    }

    if(child_yang_name == "esmc-statistics")
    {
        if(esmc_statistics == nullptr)
        {
            esmc_statistics = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics>();
        }
        return esmc_statistics;
    }

    if(child_yang_name == "spa-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint>();
        c->parent = this;
        spa_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "node-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint>();
        c->parent = this;
        node_selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    if(quality_level_received != nullptr)
    {
        children["quality-level-received"] = quality_level_received;
    }

    if(quality_level_damped != nullptr)
    {
        children["quality-level-damped"] = quality_level_damped;
    }

    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    if(quality_level_effective_output != nullptr)
    {
        children["quality-level-effective-output"] = quality_level_effective_output;
    }

    if(quality_level_selected_source != nullptr)
    {
        children["quality-level-selected-source"] = quality_level_selected_source;
    }

    if(ethernet_peer_information != nullptr)
    {
        children["ethernet-peer-information"] = ethernet_peer_information;
    }

    if(esmc_statistics != nullptr)
    {
        children["esmc-statistics"] = esmc_statistics;
    }

    count = 0;
    for (auto c : spa_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : node_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled = value;
        ssm_enabled.value_namespace = name_space;
        ssm_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "squelched")
    {
        squelched = value;
        squelched.value_namespace = name_space;
        squelched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-state")
    {
        damping_state = value;
        damping_state.value_namespace = name_space;
        damping_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-time")
    {
        damping_time = value;
        damping_time.value_namespace = name_space;
        damping_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled.yfilter = yfilter;
    }
    if(value_path == "squelched")
    {
        squelched.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "damping-state")
    {
        damping_state.yfilter = yfilter;
    }
    if(value_path == "damping-time")
    {
        damping_time.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "selected-source" || name == "quality-level-received" || name == "quality-level-damped" || name == "quality-level-effective-input" || name == "quality-level-effective-output" || name == "quality-level-selected-source" || name == "ethernet-peer-information" || name == "esmc-statistics" || name == "spa-selection-point" || name == "node-selection-point" || name == "interface-name" || name == "name" || name == "state" || name == "ssm-enabled" || name == "squelched" || name == "selection-input" || name == "priority" || name == "time-of-day-priority" || name == "damping-state" || name == "damping-time" || name == "wait-to-restore-time" || name == "supports-frequency" || name == "supports-time-of-day")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::Source::~Source()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SelectedSource::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::QualityLevelReceived()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-received"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::~QualityLevelReceived()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelReceived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::QualityLevelDamped()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-damped"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::~QualityLevelDamped()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-damped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelDamped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::QualityLevelEffectiveOutput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-output"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::~QualityLevelEffectiveOutput()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelEffectiveOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::QualityLevelSelectedSource()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-selected-source"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::~QualityLevelSelectedSource()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::QualityLevelSelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::EthernetPeerInformation()
    :
    peer_state{YType::enumeration, "peer-state"},
    peer_up_count{YType::uint16, "peer-up-count"},
    peer_timeout_count{YType::uint16, "peer-timeout-count"}
        ,
    peer_state_time(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime>())
    , last_ssm(std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm>())
{
    peer_state_time->parent = this;
    last_ssm->parent = this;

    yang_name = "ethernet-peer-information"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::~EthernetPeerInformation()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::has_data() const
{
    if (is_presence_container) return true;
    return peer_state.is_set
	|| peer_up_count.is_set
	|| peer_timeout_count.is_set
	|| (peer_state_time !=  nullptr && peer_state_time->has_data())
	|| (last_ssm !=  nullptr && last_ssm->has_data());
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_state.yfilter)
	|| ydk::is_set(peer_up_count.yfilter)
	|| ydk::is_set(peer_timeout_count.yfilter)
	|| (peer_state_time !=  nullptr && peer_state_time->has_operation())
	|| (last_ssm !=  nullptr && last_ssm->has_operation());
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-peer-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_state.is_set || is_set(peer_state.yfilter)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (peer_up_count.is_set || is_set(peer_up_count.yfilter)) leaf_name_data.push_back(peer_up_count.get_name_leafdata());
    if (peer_timeout_count.is_set || is_set(peer_timeout_count.yfilter)) leaf_name_data.push_back(peer_timeout_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-state-time")
    {
        if(peer_state_time == nullptr)
        {
            peer_state_time = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime>();
        }
        return peer_state_time;
    }

    if(child_yang_name == "last-ssm")
    {
        if(last_ssm == nullptr)
        {
            last_ssm = std::make_shared<FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm>();
        }
        return last_ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer_state_time != nullptr)
    {
        children["peer-state-time"] = peer_state_time;
    }

    if(last_ssm != nullptr)
    {
        children["last-ssm"] = last_ssm;
    }

    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-state")
    {
        peer_state = value;
        peer_state.value_namespace = name_space;
        peer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-up-count")
    {
        peer_up_count = value;
        peer_up_count.value_namespace = name_space;
        peer_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-timeout-count")
    {
        peer_timeout_count = value;
        peer_timeout_count.value_namespace = name_space;
        peer_timeout_count.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-state")
    {
        peer_state.yfilter = yfilter;
    }
    if(value_path == "peer-up-count")
    {
        peer_up_count.yfilter = yfilter;
    }
    if(value_path == "peer-timeout-count")
    {
        peer_timeout_count.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-state-time" || name == "last-ssm" || name == "peer-state" || name == "peer-up-count" || name == "peer-timeout-count")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::PeerStateTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "peer-state-time"; yang_parent_name = "ethernet-peer-information"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::~PeerStateTime()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-state-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::PeerStateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::LastSsm()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-ssm"; yang_parent_name = "ethernet-peer-information"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::~LastSsm()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-ssm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EthernetPeerInformation::LastSsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::EsmcStatistics()
    :
    esmc_events_sent{YType::uint16, "esmc-events-sent"},
    esmc_events_received{YType::uint16, "esmc-events-received"},
    esmc_infos_sent{YType::uint32, "esmc-infos-sent"},
    esmc_infos_received{YType::uint32, "esmc-infos-received"},
    esmc_dn_us_sent{YType::uint32, "esmc-dn-us-sent"},
    esmc_dn_us_received{YType::uint32, "esmc-dn-us-received"},
    esmc_malformed_received{YType::uint16, "esmc-malformed-received"},
    esmc_received_error{YType::uint16, "esmc-received-error"}
{

    yang_name = "esmc-statistics"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::~EsmcStatistics()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::has_data() const
{
    if (is_presence_container) return true;
    return esmc_events_sent.is_set
	|| esmc_events_received.is_set
	|| esmc_infos_sent.is_set
	|| esmc_infos_received.is_set
	|| esmc_dn_us_sent.is_set
	|| esmc_dn_us_received.is_set
	|| esmc_malformed_received.is_set
	|| esmc_received_error.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esmc_events_sent.yfilter)
	|| ydk::is_set(esmc_events_received.yfilter)
	|| ydk::is_set(esmc_infos_sent.yfilter)
	|| ydk::is_set(esmc_infos_received.yfilter)
	|| ydk::is_set(esmc_dn_us_sent.yfilter)
	|| ydk::is_set(esmc_dn_us_received.yfilter)
	|| ydk::is_set(esmc_malformed_received.yfilter)
	|| ydk::is_set(esmc_received_error.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esmc-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esmc_events_sent.is_set || is_set(esmc_events_sent.yfilter)) leaf_name_data.push_back(esmc_events_sent.get_name_leafdata());
    if (esmc_events_received.is_set || is_set(esmc_events_received.yfilter)) leaf_name_data.push_back(esmc_events_received.get_name_leafdata());
    if (esmc_infos_sent.is_set || is_set(esmc_infos_sent.yfilter)) leaf_name_data.push_back(esmc_infos_sent.get_name_leafdata());
    if (esmc_infos_received.is_set || is_set(esmc_infos_received.yfilter)) leaf_name_data.push_back(esmc_infos_received.get_name_leafdata());
    if (esmc_dn_us_sent.is_set || is_set(esmc_dn_us_sent.yfilter)) leaf_name_data.push_back(esmc_dn_us_sent.get_name_leafdata());
    if (esmc_dn_us_received.is_set || is_set(esmc_dn_us_received.yfilter)) leaf_name_data.push_back(esmc_dn_us_received.get_name_leafdata());
    if (esmc_malformed_received.is_set || is_set(esmc_malformed_received.yfilter)) leaf_name_data.push_back(esmc_malformed_received.get_name_leafdata());
    if (esmc_received_error.is_set || is_set(esmc_received_error.yfilter)) leaf_name_data.push_back(esmc_received_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esmc-events-sent")
    {
        esmc_events_sent = value;
        esmc_events_sent.value_namespace = name_space;
        esmc_events_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-events-received")
    {
        esmc_events_received = value;
        esmc_events_received.value_namespace = name_space;
        esmc_events_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-infos-sent")
    {
        esmc_infos_sent = value;
        esmc_infos_sent.value_namespace = name_space;
        esmc_infos_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-infos-received")
    {
        esmc_infos_received = value;
        esmc_infos_received.value_namespace = name_space;
        esmc_infos_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-dn-us-sent")
    {
        esmc_dn_us_sent = value;
        esmc_dn_us_sent.value_namespace = name_space;
        esmc_dn_us_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-dn-us-received")
    {
        esmc_dn_us_received = value;
        esmc_dn_us_received.value_namespace = name_space;
        esmc_dn_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-malformed-received")
    {
        esmc_malformed_received = value;
        esmc_malformed_received.value_namespace = name_space;
        esmc_malformed_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esmc-received-error")
    {
        esmc_received_error = value;
        esmc_received_error.value_namespace = name_space;
        esmc_received_error.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esmc-events-sent")
    {
        esmc_events_sent.yfilter = yfilter;
    }
    if(value_path == "esmc-events-received")
    {
        esmc_events_received.yfilter = yfilter;
    }
    if(value_path == "esmc-infos-sent")
    {
        esmc_infos_sent.yfilter = yfilter;
    }
    if(value_path == "esmc-infos-received")
    {
        esmc_infos_received.yfilter = yfilter;
    }
    if(value_path == "esmc-dn-us-sent")
    {
        esmc_dn_us_sent.yfilter = yfilter;
    }
    if(value_path == "esmc-dn-us-received")
    {
        esmc_dn_us_received.yfilter = yfilter;
    }
    if(value_path == "esmc-malformed-received")
    {
        esmc_malformed_received.yfilter = yfilter;
    }
    if(value_path == "esmc-received-error")
    {
        esmc_received_error.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::EsmcStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esmc-events-sent" || name == "esmc-events-received" || name == "esmc-infos-sent" || name == "esmc-infos-received" || name == "esmc-dn-us-sent" || name == "esmc-dn-us-received" || name == "esmc-malformed-received" || name == "esmc-received-error")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::SpaSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "spa-selection-point"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::~SpaSelectionPoint()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::SpaSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::NodeSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "node-selection-point"; yang_parent_name = "interface-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::~NodeSelectionPoint()
{
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::InterfaceDatas::InterfaceData::NodeSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Nodes()
    :
    node(this, {"node"})
{

    yang_name = "nodes"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Nodes::~Nodes()
{
}

bool FrequencySynchronization::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::get_children() const
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

void FrequencySynchronization::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::Node()
    :
    node{YType::str, "node"}
        ,
    ntp_data(std::make_shared<FrequencySynchronization::Nodes::Node::NtpData>())
    , selection_point_datas(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas>())
    , configuration_errors(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors>())
    , ptp_data(std::make_shared<FrequencySynchronization::Nodes::Node::PtpData>())
    , ssm_summary(std::make_shared<FrequencySynchronization::Nodes::Node::SsmSummary>())
    , detailed_clock_datas(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas>())
    , clock_datas(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas>())
    , selection_point_inputs(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs>())
{
    ntp_data->parent = this;
    selection_point_datas->parent = this;
    configuration_errors->parent = this;
    ptp_data->parent = this;
    ssm_summary->parent = this;
    detailed_clock_datas->parent = this;
    clock_datas->parent = this;
    selection_point_inputs->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

FrequencySynchronization::Nodes::Node::~Node()
{
}

bool FrequencySynchronization::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| (ntp_data !=  nullptr && ntp_data->has_data())
	|| (selection_point_datas !=  nullptr && selection_point_datas->has_data())
	|| (configuration_errors !=  nullptr && configuration_errors->has_data())
	|| (ptp_data !=  nullptr && ptp_data->has_data())
	|| (ssm_summary !=  nullptr && ssm_summary->has_data())
	|| (detailed_clock_datas !=  nullptr && detailed_clock_datas->has_data())
	|| (clock_datas !=  nullptr && clock_datas->has_data())
	|| (selection_point_inputs !=  nullptr && selection_point_inputs->has_data());
}

bool FrequencySynchronization::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (ntp_data !=  nullptr && ntp_data->has_operation())
	|| (selection_point_datas !=  nullptr && selection_point_datas->has_operation())
	|| (configuration_errors !=  nullptr && configuration_errors->has_operation())
	|| (ptp_data !=  nullptr && ptp_data->has_operation())
	|| (ssm_summary !=  nullptr && ssm_summary->has_operation())
	|| (detailed_clock_datas !=  nullptr && detailed_clock_datas->has_operation())
	|| (clock_datas !=  nullptr && clock_datas->has_operation())
	|| (selection_point_inputs !=  nullptr && selection_point_inputs->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-oper:frequency-synchronization/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string FrequencySynchronization::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ntp-data")
    {
        if(ntp_data == nullptr)
        {
            ntp_data = std::make_shared<FrequencySynchronization::Nodes::Node::NtpData>();
        }
        return ntp_data;
    }

    if(child_yang_name == "selection-point-datas")
    {
        if(selection_point_datas == nullptr)
        {
            selection_point_datas = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas>();
        }
        return selection_point_datas;
    }

    if(child_yang_name == "configuration-errors")
    {
        if(configuration_errors == nullptr)
        {
            configuration_errors = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors>();
        }
        return configuration_errors;
    }

    if(child_yang_name == "ptp-data")
    {
        if(ptp_data == nullptr)
        {
            ptp_data = std::make_shared<FrequencySynchronization::Nodes::Node::PtpData>();
        }
        return ptp_data;
    }

    if(child_yang_name == "ssm-summary")
    {
        if(ssm_summary == nullptr)
        {
            ssm_summary = std::make_shared<FrequencySynchronization::Nodes::Node::SsmSummary>();
        }
        return ssm_summary;
    }

    if(child_yang_name == "detailed-clock-datas")
    {
        if(detailed_clock_datas == nullptr)
        {
            detailed_clock_datas = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas>();
        }
        return detailed_clock_datas;
    }

    if(child_yang_name == "clock-datas")
    {
        if(clock_datas == nullptr)
        {
            clock_datas = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas>();
        }
        return clock_datas;
    }

    if(child_yang_name == "selection-point-inputs")
    {
        if(selection_point_inputs == nullptr)
        {
            selection_point_inputs = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs>();
        }
        return selection_point_inputs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ntp_data != nullptr)
    {
        children["ntp-data"] = ntp_data;
    }

    if(selection_point_datas != nullptr)
    {
        children["selection-point-datas"] = selection_point_datas;
    }

    if(configuration_errors != nullptr)
    {
        children["configuration-errors"] = configuration_errors;
    }

    if(ptp_data != nullptr)
    {
        children["ptp-data"] = ptp_data;
    }

    if(ssm_summary != nullptr)
    {
        children["ssm-summary"] = ssm_summary;
    }

    if(detailed_clock_datas != nullptr)
    {
        children["detailed-clock-datas"] = detailed_clock_datas;
    }

    if(clock_datas != nullptr)
    {
        children["clock-datas"] = clock_datas;
    }

    if(selection_point_inputs != nullptr)
    {
        children["selection-point-inputs"] = selection_point_inputs;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntp-data" || name == "selection-point-datas" || name == "configuration-errors" || name == "ptp-data" || name == "ssm-summary" || name == "detailed-clock-datas" || name == "clock-datas" || name == "selection-point-inputs" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::NtpData::NtpData()
    :
    state{YType::enumeration, "state"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    frequency_priority{YType::uint8, "frequency-priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"}
        ,
    quality_level_effective_input(std::make_shared<FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput>())
    , spa_selection_point(this, {})
    , node_selection_point(this, {})
{
    quality_level_effective_input->parent = this;

    yang_name = "ntp-data"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::NtpData::~NtpData()
{
}

bool FrequencySynchronization::Nodes::Node::NtpData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_data())
            return true;
    }
    return state.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| frequency_priority.is_set
	|| time_of_day_priority.is_set
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data());
}

bool FrequencySynchronization::Nodes::Node::NtpData::has_operation() const
{
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(frequency_priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::NtpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::NtpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());
    if (frequency_priority.is_set || is_set(frequency_priority.yfilter)) leaf_name_data.push_back(frequency_priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::NtpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    if(child_yang_name == "spa-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint>();
        c->parent = this;
        spa_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "node-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint>();
        c->parent = this;
        node_selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::NtpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    count = 0;
    for (auto c : spa_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : node_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::NtpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority = value;
        frequency_priority.value_namespace = name_space;
        frequency_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::NtpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::NtpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-effective-input" || name == "spa-selection-point" || name == "node-selection-point" || name == "state" || name == "supports-frequency" || name == "supports-time-of-day" || name == "frequency-priority" || name == "time-of-day-priority")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "ntp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::NtpData::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::SpaSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "spa-selection-point"; yang_parent_name = "ntp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::~SpaSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::NtpData::SpaSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::NodeSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "node-selection-point"; yang_parent_name = "ntp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::~NodeSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::NtpData::NodeSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointDatas()
    :
    selection_point_data(this, {"selection_point"})
{

    yang_name = "selection-point-datas"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::~SelectionPointDatas()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<selection_point_data.len(); index++)
    {
        if(selection_point_data[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::has_operation() const
{
    for (std::size_t index=0; index<selection_point_data.len(); index++)
    {
        if(selection_point_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-datas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point-data")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData>();
        c->parent = this;
        selection_point_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : selection_point_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-data")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::SelectionPointData()
    :
    selection_point{YType::uint32, "selection-point"},
    selection_point_type{YType::uint8, "selection-point-type"},
    description{YType::str, "description"},
    inputs{YType::uint32, "inputs"},
    inputs_selected{YType::uint32, "inputs-selected"},
    time_of_day_selection{YType::boolean, "time-of-day-selection"}
        ,
    output(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output>())
    , last_programmed(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed>())
    , last_selection(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection>())
{
    output->parent = this;
    last_programmed->parent = this;
    last_selection->parent = this;

    yang_name = "selection-point-data"; yang_parent_name = "selection-point-datas"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::~SelectionPointData()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_type.is_set
	|| description.is_set
	|| inputs.is_set
	|| inputs_selected.is_set
	|| time_of_day_selection.is_set
	|| (output !=  nullptr && output->has_data())
	|| (last_programmed !=  nullptr && last_programmed->has_data())
	|| (last_selection !=  nullptr && last_selection->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(inputs_selected.yfilter)
	|| ydk::is_set(time_of_day_selection.yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (last_programmed !=  nullptr && last_programmed->has_operation())
	|| (last_selection !=  nullptr && last_selection->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-data";
    ADD_KEY_TOKEN(selection_point, "selection-point");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (inputs_selected.is_set || is_set(inputs_selected.yfilter)) leaf_name_data.push_back(inputs_selected.get_name_leafdata());
    if (time_of_day_selection.is_set || is_set(time_of_day_selection.yfilter)) leaf_name_data.push_back(time_of_day_selection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output>();
        }
        return output;
    }

    if(child_yang_name == "last-programmed")
    {
        if(last_programmed == nullptr)
        {
            last_programmed = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed>();
        }
        return last_programmed;
    }

    if(child_yang_name == "last-selection")
    {
        if(last_selection == nullptr)
        {
            last_selection = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection>();
        }
        return last_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(last_programmed != nullptr)
    {
        children["last-programmed"] = last_programmed;
    }

    if(last_selection != nullptr)
    {
        children["last-selection"] = last_selection;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs-selected")
    {
        inputs_selected = value;
        inputs_selected.value_namespace = name_space;
        inputs_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-selection")
    {
        time_of_day_selection = value;
        time_of_day_selection.value_namespace = name_space;
        time_of_day_selection.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "inputs-selected")
    {
        inputs_selected.yfilter = yfilter;
    }
    if(value_path == "time-of-day-selection")
    {
        time_of_day_selection.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "last-programmed" || name == "last-selection" || name == "selection-point" || name == "selection-point-type" || name == "description" || name == "inputs" || name == "inputs-selected" || name == "time-of-day-selection")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::Output()
    :
    local_clock_ouput{YType::boolean, "local-clock-ouput"},
    local_line_output{YType::boolean, "local-line-output"},
    local_time_of_day_output{YType::boolean, "local-time-of-day-output"}
        ,
    spa_selection_point(this, {})
    , node_selection_point(this, {})
    , chassis_selection_point(this, {})
    , router_selection_point(this, {})
{

    yang_name = "output"; yang_parent_name = "selection-point-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::~Output()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<chassis_selection_point.len(); index++)
    {
        if(chassis_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<router_selection_point.len(); index++)
    {
        if(router_selection_point[index]->has_data())
            return true;
    }
    return local_clock_ouput.is_set
	|| local_line_output.is_set
	|| local_time_of_day_output.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::has_operation() const
{
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<chassis_selection_point.len(); index++)
    {
        if(chassis_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<router_selection_point.len(); index++)
    {
        if(router_selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_clock_ouput.yfilter)
	|| ydk::is_set(local_line_output.yfilter)
	|| ydk::is_set(local_time_of_day_output.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_clock_ouput.is_set || is_set(local_clock_ouput.yfilter)) leaf_name_data.push_back(local_clock_ouput.get_name_leafdata());
    if (local_line_output.is_set || is_set(local_line_output.yfilter)) leaf_name_data.push_back(local_line_output.get_name_leafdata());
    if (local_time_of_day_output.is_set || is_set(local_time_of_day_output.yfilter)) leaf_name_data.push_back(local_time_of_day_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spa-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint>();
        c->parent = this;
        spa_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "node-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint>();
        c->parent = this;
        node_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "chassis-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint>();
        c->parent = this;
        chassis_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "router-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint>();
        c->parent = this;
        router_selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spa_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : node_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : chassis_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : router_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-clock-ouput")
    {
        local_clock_ouput = value;
        local_clock_ouput.value_namespace = name_space;
        local_clock_ouput.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-line-output")
    {
        local_line_output = value;
        local_line_output.value_namespace = name_space;
        local_line_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-time-of-day-output")
    {
        local_time_of_day_output = value;
        local_time_of_day_output.value_namespace = name_space;
        local_time_of_day_output.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-clock-ouput")
    {
        local_clock_ouput.yfilter = yfilter;
    }
    if(value_path == "local-line-output")
    {
        local_line_output.yfilter = yfilter;
    }
    if(value_path == "local-time-of-day-output")
    {
        local_time_of_day_output.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spa-selection-point" || name == "node-selection-point" || name == "chassis-selection-point" || name == "router-selection-point" || name == "local-clock-ouput" || name == "local-line-output" || name == "local-time-of-day-output")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::SpaSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "spa-selection-point"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::~SpaSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::SpaSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::NodeSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "node-selection-point"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::~NodeSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::NodeSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::ChassisSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "chassis-selection-point"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::~ChassisSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::ChassisSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::RouterSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "router-selection-point"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::~RouterSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::Output::RouterSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::LastProgrammed()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-programmed"; yang_parent_name = "selection-point-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::~LastProgrammed()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-programmed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastProgrammed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::LastSelection()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-selection"; yang_parent_name = "selection-point-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::~LastSelection()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointDatas::SelectionPointData::LastSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ConfigurationErrors()
    :
    error_source(this, {})
{

    yang_name = "configuration-errors"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::~ConfigurationErrors()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_source.len(); index++)
    {
        if(error_source[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::has_operation() const
{
    for (std::size_t index=0; index<error_source.len(); index++)
    {
        if(error_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-source")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource>();
        c->parent = this;
        error_source.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : error_source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-source")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::ErrorSource()
    :
    enable_error{YType::boolean, "enable-error"},
    input_min_error{YType::boolean, "input-min-error"},
    input_exact_error{YType::boolean, "input-exact-error"},
    input_max_error{YType::boolean, "input-max-error"},
    ouput_min_error{YType::boolean, "ouput-min-error"},
    output_exact_error{YType::boolean, "output-exact-error"},
    output_max_error{YType::boolean, "output-max-error"},
    input_output_mismatch{YType::boolean, "input-output-mismatch"}
        ,
    source(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source>())
    , input_min_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl>())
    , input_exact_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl>())
    , input_max_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl>())
    , output_min_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl>())
    , output_exact_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl>())
    , output_max_ql(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl>())
{
    source->parent = this;
    input_min_ql->parent = this;
    input_exact_ql->parent = this;
    input_max_ql->parent = this;
    output_min_ql->parent = this;
    output_exact_ql->parent = this;
    output_max_ql->parent = this;

    yang_name = "error-source"; yang_parent_name = "configuration-errors"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::~ErrorSource()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::has_data() const
{
    if (is_presence_container) return true;
    return enable_error.is_set
	|| input_min_error.is_set
	|| input_exact_error.is_set
	|| input_max_error.is_set
	|| ouput_min_error.is_set
	|| output_exact_error.is_set
	|| output_max_error.is_set
	|| input_output_mismatch.is_set
	|| (source !=  nullptr && source->has_data())
	|| (input_min_ql !=  nullptr && input_min_ql->has_data())
	|| (input_exact_ql !=  nullptr && input_exact_ql->has_data())
	|| (input_max_ql !=  nullptr && input_max_ql->has_data())
	|| (output_min_ql !=  nullptr && output_min_ql->has_data())
	|| (output_exact_ql !=  nullptr && output_exact_ql->has_data())
	|| (output_max_ql !=  nullptr && output_max_ql->has_data());
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_error.yfilter)
	|| ydk::is_set(input_min_error.yfilter)
	|| ydk::is_set(input_exact_error.yfilter)
	|| ydk::is_set(input_max_error.yfilter)
	|| ydk::is_set(ouput_min_error.yfilter)
	|| ydk::is_set(output_exact_error.yfilter)
	|| ydk::is_set(output_max_error.yfilter)
	|| ydk::is_set(input_output_mismatch.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (input_min_ql !=  nullptr && input_min_ql->has_operation())
	|| (input_exact_ql !=  nullptr && input_exact_ql->has_operation())
	|| (input_max_ql !=  nullptr && input_max_ql->has_operation())
	|| (output_min_ql !=  nullptr && output_min_ql->has_operation())
	|| (output_exact_ql !=  nullptr && output_exact_ql->has_operation())
	|| (output_max_ql !=  nullptr && output_max_ql->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_error.is_set || is_set(enable_error.yfilter)) leaf_name_data.push_back(enable_error.get_name_leafdata());
    if (input_min_error.is_set || is_set(input_min_error.yfilter)) leaf_name_data.push_back(input_min_error.get_name_leafdata());
    if (input_exact_error.is_set || is_set(input_exact_error.yfilter)) leaf_name_data.push_back(input_exact_error.get_name_leafdata());
    if (input_max_error.is_set || is_set(input_max_error.yfilter)) leaf_name_data.push_back(input_max_error.get_name_leafdata());
    if (ouput_min_error.is_set || is_set(ouput_min_error.yfilter)) leaf_name_data.push_back(ouput_min_error.get_name_leafdata());
    if (output_exact_error.is_set || is_set(output_exact_error.yfilter)) leaf_name_data.push_back(output_exact_error.get_name_leafdata());
    if (output_max_error.is_set || is_set(output_max_error.yfilter)) leaf_name_data.push_back(output_max_error.get_name_leafdata());
    if (input_output_mismatch.is_set || is_set(input_output_mismatch.yfilter)) leaf_name_data.push_back(input_output_mismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source>();
        }
        return source;
    }

    if(child_yang_name == "input-min-ql")
    {
        if(input_min_ql == nullptr)
        {
            input_min_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl>();
        }
        return input_min_ql;
    }

    if(child_yang_name == "input-exact-ql")
    {
        if(input_exact_ql == nullptr)
        {
            input_exact_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl>();
        }
        return input_exact_ql;
    }

    if(child_yang_name == "input-max-ql")
    {
        if(input_max_ql == nullptr)
        {
            input_max_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl>();
        }
        return input_max_ql;
    }

    if(child_yang_name == "output-min-ql")
    {
        if(output_min_ql == nullptr)
        {
            output_min_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl>();
        }
        return output_min_ql;
    }

    if(child_yang_name == "output-exact-ql")
    {
        if(output_exact_ql == nullptr)
        {
            output_exact_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl>();
        }
        return output_exact_ql;
    }

    if(child_yang_name == "output-max-ql")
    {
        if(output_max_ql == nullptr)
        {
            output_max_ql = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl>();
        }
        return output_max_ql;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(input_min_ql != nullptr)
    {
        children["input-min-ql"] = input_min_ql;
    }

    if(input_exact_ql != nullptr)
    {
        children["input-exact-ql"] = input_exact_ql;
    }

    if(input_max_ql != nullptr)
    {
        children["input-max-ql"] = input_max_ql;
    }

    if(output_min_ql != nullptr)
    {
        children["output-min-ql"] = output_min_ql;
    }

    if(output_exact_ql != nullptr)
    {
        children["output-exact-ql"] = output_exact_ql;
    }

    if(output_max_ql != nullptr)
    {
        children["output-max-ql"] = output_max_ql;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-error")
    {
        enable_error = value;
        enable_error.value_namespace = name_space;
        enable_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-min-error")
    {
        input_min_error = value;
        input_min_error.value_namespace = name_space;
        input_min_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-exact-error")
    {
        input_exact_error = value;
        input_exact_error.value_namespace = name_space;
        input_exact_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-max-error")
    {
        input_max_error = value;
        input_max_error.value_namespace = name_space;
        input_max_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ouput-min-error")
    {
        ouput_min_error = value;
        ouput_min_error.value_namespace = name_space;
        ouput_min_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-exact-error")
    {
        output_exact_error = value;
        output_exact_error.value_namespace = name_space;
        output_exact_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-max-error")
    {
        output_max_error = value;
        output_max_error.value_namespace = name_space;
        output_max_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-output-mismatch")
    {
        input_output_mismatch = value;
        input_output_mismatch.value_namespace = name_space;
        input_output_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-error")
    {
        enable_error.yfilter = yfilter;
    }
    if(value_path == "input-min-error")
    {
        input_min_error.yfilter = yfilter;
    }
    if(value_path == "input-exact-error")
    {
        input_exact_error.yfilter = yfilter;
    }
    if(value_path == "input-max-error")
    {
        input_max_error.yfilter = yfilter;
    }
    if(value_path == "ouput-min-error")
    {
        ouput_min_error.yfilter = yfilter;
    }
    if(value_path == "output-exact-error")
    {
        output_exact_error.yfilter = yfilter;
    }
    if(value_path == "output-max-error")
    {
        output_max_error.yfilter = yfilter;
    }
    if(value_path == "input-output-mismatch")
    {
        input_output_mismatch.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "input-min-ql" || name == "input-exact-ql" || name == "input-max-ql" || name == "output-min-ql" || name == "output-exact-ql" || name == "output-max-ql" || name == "enable-error" || name == "input-min-error" || name == "input-exact-error" || name == "input-max-error" || name == "ouput-min-error" || name == "output-exact-error" || name == "output-max-error" || name == "input-output-mismatch")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::~Source()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::InputMinQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "input-min-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::~InputMinQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-min-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMinQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::InputExactQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "input-exact-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::~InputExactQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-exact-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputExactQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::InputMaxQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "input-max-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::~InputMaxQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-max-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::InputMaxQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::OutputMinQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "output-min-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::~OutputMinQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-min-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMinQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::OutputExactQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "output-exact-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::~OutputExactQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-exact-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputExactQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::OutputMaxQl()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "output-max-ql"; yang_parent_name = "error-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::~OutputMaxQl()
{
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-max-ql";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ConfigurationErrors::ErrorSource::OutputMaxQl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::PtpData::PtpData()
    :
    state{YType::enumeration, "state"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    frequency_priority{YType::uint8, "frequency-priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"}
        ,
    quality_level_effective_input(std::make_shared<FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput>())
    , spa_selection_point(this, {})
    , node_selection_point(this, {})
{
    quality_level_effective_input->parent = this;

    yang_name = "ptp-data"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::PtpData::~PtpData()
{
}

bool FrequencySynchronization::Nodes::Node::PtpData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_data())
            return true;
    }
    return state.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| frequency_priority.is_set
	|| time_of_day_priority.is_set
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data());
}

bool FrequencySynchronization::Nodes::Node::PtpData::has_operation() const
{
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(frequency_priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::PtpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::PtpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());
    if (frequency_priority.is_set || is_set(frequency_priority.yfilter)) leaf_name_data.push_back(frequency_priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::PtpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    if(child_yang_name == "spa-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint>();
        c->parent = this;
        spa_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "node-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint>();
        c->parent = this;
        node_selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::PtpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    count = 0;
    for (auto c : spa_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : node_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::PtpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority = value;
        frequency_priority.value_namespace = name_space;
        frequency_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::PtpData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "frequency-priority")
    {
        frequency_priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::PtpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-effective-input" || name == "spa-selection-point" || name == "node-selection-point" || name == "state" || name == "supports-frequency" || name == "supports-time-of-day" || name == "frequency-priority" || name == "time-of-day-priority")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "ptp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::PtpData::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::SpaSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "spa-selection-point"; yang_parent_name = "ptp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::~SpaSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::PtpData::SpaSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::NodeSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "node-selection-point"; yang_parent_name = "ptp-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::~NodeSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::PtpData::NodeSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SsmSummary::SsmSummary()
    :
    ethernet_sources{YType::uint32, "ethernet-sources"},
    ethernet_sources_select{YType::uint32, "ethernet-sources-select"},
    ethernet_sources_enabled{YType::uint32, "ethernet-sources-enabled"},
    sonet_sources{YType::uint32, "sonet-sources"},
    sonet_sources_select{YType::uint32, "sonet-sources-select"},
    sonet_sources_enabled{YType::uint32, "sonet-sources-enabled"},
    events_sent{YType::uint32, "events-sent"},
    events_received{YType::uint32, "events-received"},
    infos_sent{YType::uint32, "infos-sent"},
    infos_received{YType::uint32, "infos-received"},
    dn_us_sent{YType::uint32, "dn-us-sent"},
    dn_us_received{YType::uint32, "dn-us-received"}
{

    yang_name = "ssm-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SsmSummary::~SsmSummary()
{
}

bool FrequencySynchronization::Nodes::Node::SsmSummary::has_data() const
{
    if (is_presence_container) return true;
    return ethernet_sources.is_set
	|| ethernet_sources_select.is_set
	|| ethernet_sources_enabled.is_set
	|| sonet_sources.is_set
	|| sonet_sources_select.is_set
	|| sonet_sources_enabled.is_set
	|| events_sent.is_set
	|| events_received.is_set
	|| infos_sent.is_set
	|| infos_received.is_set
	|| dn_us_sent.is_set
	|| dn_us_received.is_set;
}

bool FrequencySynchronization::Nodes::Node::SsmSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet_sources.yfilter)
	|| ydk::is_set(ethernet_sources_select.yfilter)
	|| ydk::is_set(ethernet_sources_enabled.yfilter)
	|| ydk::is_set(sonet_sources.yfilter)
	|| ydk::is_set(sonet_sources_select.yfilter)
	|| ydk::is_set(sonet_sources_enabled.yfilter)
	|| ydk::is_set(events_sent.yfilter)
	|| ydk::is_set(events_received.yfilter)
	|| ydk::is_set(infos_sent.yfilter)
	|| ydk::is_set(infos_received.yfilter)
	|| ydk::is_set(dn_us_sent.yfilter)
	|| ydk::is_set(dn_us_received.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SsmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SsmSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_sources.is_set || is_set(ethernet_sources.yfilter)) leaf_name_data.push_back(ethernet_sources.get_name_leafdata());
    if (ethernet_sources_select.is_set || is_set(ethernet_sources_select.yfilter)) leaf_name_data.push_back(ethernet_sources_select.get_name_leafdata());
    if (ethernet_sources_enabled.is_set || is_set(ethernet_sources_enabled.yfilter)) leaf_name_data.push_back(ethernet_sources_enabled.get_name_leafdata());
    if (sonet_sources.is_set || is_set(sonet_sources.yfilter)) leaf_name_data.push_back(sonet_sources.get_name_leafdata());
    if (sonet_sources_select.is_set || is_set(sonet_sources_select.yfilter)) leaf_name_data.push_back(sonet_sources_select.get_name_leafdata());
    if (sonet_sources_enabled.is_set || is_set(sonet_sources_enabled.yfilter)) leaf_name_data.push_back(sonet_sources_enabled.get_name_leafdata());
    if (events_sent.is_set || is_set(events_sent.yfilter)) leaf_name_data.push_back(events_sent.get_name_leafdata());
    if (events_received.is_set || is_set(events_received.yfilter)) leaf_name_data.push_back(events_received.get_name_leafdata());
    if (infos_sent.is_set || is_set(infos_sent.yfilter)) leaf_name_data.push_back(infos_sent.get_name_leafdata());
    if (infos_received.is_set || is_set(infos_received.yfilter)) leaf_name_data.push_back(infos_received.get_name_leafdata());
    if (dn_us_sent.is_set || is_set(dn_us_sent.yfilter)) leaf_name_data.push_back(dn_us_sent.get_name_leafdata());
    if (dn_us_received.is_set || is_set(dn_us_received.yfilter)) leaf_name_data.push_back(dn_us_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SsmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SsmSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SsmSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet-sources")
    {
        ethernet_sources = value;
        ethernet_sources.value_namespace = name_space;
        ethernet_sources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-sources-select")
    {
        ethernet_sources_select = value;
        ethernet_sources_select.value_namespace = name_space;
        ethernet_sources_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-sources-enabled")
    {
        ethernet_sources_enabled = value;
        ethernet_sources_enabled.value_namespace = name_space;
        ethernet_sources_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-sources")
    {
        sonet_sources = value;
        sonet_sources.value_namespace = name_space;
        sonet_sources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-sources-select")
    {
        sonet_sources_select = value;
        sonet_sources_select.value_namespace = name_space;
        sonet_sources_select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-sources-enabled")
    {
        sonet_sources_enabled = value;
        sonet_sources_enabled.value_namespace = name_space;
        sonet_sources_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-sent")
    {
        events_sent = value;
        events_sent.value_namespace = name_space;
        events_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-received")
    {
        events_received = value;
        events_received.value_namespace = name_space;
        events_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infos-sent")
    {
        infos_sent = value;
        infos_sent.value_namespace = name_space;
        infos_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infos-received")
    {
        infos_received = value;
        infos_received.value_namespace = name_space;
        infos_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-us-sent")
    {
        dn_us_sent = value;
        dn_us_sent.value_namespace = name_space;
        dn_us_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-us-received")
    {
        dn_us_received = value;
        dn_us_received.value_namespace = name_space;
        dn_us_received.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SsmSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet-sources")
    {
        ethernet_sources.yfilter = yfilter;
    }
    if(value_path == "ethernet-sources-select")
    {
        ethernet_sources_select.yfilter = yfilter;
    }
    if(value_path == "ethernet-sources-enabled")
    {
        ethernet_sources_enabled.yfilter = yfilter;
    }
    if(value_path == "sonet-sources")
    {
        sonet_sources.yfilter = yfilter;
    }
    if(value_path == "sonet-sources-select")
    {
        sonet_sources_select.yfilter = yfilter;
    }
    if(value_path == "sonet-sources-enabled")
    {
        sonet_sources_enabled.yfilter = yfilter;
    }
    if(value_path == "events-sent")
    {
        events_sent.yfilter = yfilter;
    }
    if(value_path == "events-received")
    {
        events_received.yfilter = yfilter;
    }
    if(value_path == "infos-sent")
    {
        infos_sent.yfilter = yfilter;
    }
    if(value_path == "infos-received")
    {
        infos_received.yfilter = yfilter;
    }
    if(value_path == "dn-us-sent")
    {
        dn_us_sent.yfilter = yfilter;
    }
    if(value_path == "dn-us-received")
    {
        dn_us_received.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SsmSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-sources" || name == "ethernet-sources-select" || name == "ethernet-sources-enabled" || name == "sonet-sources" || name == "sonet-sources-select" || name == "sonet-sources-enabled" || name == "events-sent" || name == "events-received" || name == "infos-sent" || name == "infos-received" || name == "dn-us-sent" || name == "dn-us-received")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockDatas()
    :
    detailed_clock_data(this, {"clock_type", "id"})
{

    yang_name = "detailed-clock-datas"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::~DetailedClockDatas()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detailed_clock_data.len(); index++)
    {
        if(detailed_clock_data[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::has_operation() const
{
    for (std::size_t index=0; index<detailed_clock_data.len(); index++)
    {
        if(detailed_clock_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-clock-datas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detailed-clock-data")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData>();
        c->parent = this;
        detailed_clock_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : detailed_clock_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detailed-clock-data")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::DetailedClockData()
    :
    clock_type{YType::enumeration, "clock-type"},
    id{YType::uint32, "id"},
    state{YType::enumeration, "state"},
    down_reason{YType::str, "down-reason"},
    description{YType::str, "description"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    ssm_support{YType::boolean, "ssm-support"},
    ssm_enabled{YType::boolean, "ssm-enabled"},
    loopback{YType::boolean, "loopback"},
    selection_input{YType::boolean, "selection-input"},
    squelched{YType::boolean, "squelched"},
    damping_state{YType::enumeration, "damping-state"},
    damping_time{YType::uint32, "damping-time"},
    input_disabled{YType::boolean, "input-disabled"},
    output_disabled{YType::boolean, "output-disabled"},
    wait_to_restore_time{YType::uint16, "wait-to-restore-time"},
    clock_type_xr{YType::enumeration, "clock-type-xr"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"}
        ,
    source(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source>())
    , selected_source(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource>())
    , quality_level_received(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived>())
    , quality_level_damped(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped>())
    , quality_level_effective_input(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput>())
    , quality_level_effective_output(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput>())
    , quality_level_selected_source(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource>())
    , spa_selection_point(this, {})
    , node_selection_point(this, {})
{
    source->parent = this;
    selected_source->parent = this;
    quality_level_received->parent = this;
    quality_level_damped->parent = this;
    quality_level_effective_input->parent = this;
    quality_level_effective_output->parent = this;
    quality_level_selected_source->parent = this;

    yang_name = "detailed-clock-data"; yang_parent_name = "detailed-clock-datas"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::~DetailedClockData()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_data())
            return true;
    }
    return clock_type.is_set
	|| id.is_set
	|| state.is_set
	|| down_reason.is_set
	|| description.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| ssm_support.is_set
	|| ssm_enabled.is_set
	|| loopback.is_set
	|| selection_input.is_set
	|| squelched.is_set
	|| damping_state.is_set
	|| damping_time.is_set
	|| input_disabled.is_set
	|| output_disabled.is_set
	|| wait_to_restore_time.is_set
	|| clock_type_xr.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| (source !=  nullptr && source->has_data())
	|| (selected_source !=  nullptr && selected_source->has_data())
	|| (quality_level_received !=  nullptr && quality_level_received->has_data())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_data())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_data())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_data());
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::has_operation() const
{
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(down_reason.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(ssm_support.yfilter)
	|| ydk::is_set(ssm_enabled.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(squelched.yfilter)
	|| ydk::is_set(damping_state.yfilter)
	|| ydk::is_set(damping_time.yfilter)
	|| ydk::is_set(input_disabled.yfilter)
	|| ydk::is_set(output_disabled.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(clock_type_xr.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (selected_source !=  nullptr && selected_source->has_operation())
	|| (quality_level_received !=  nullptr && quality_level_received->has_operation())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_operation())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_operation())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-clock-data";
    ADD_KEY_TOKEN(clock_type, "clock-type");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (down_reason.is_set || is_set(down_reason.yfilter)) leaf_name_data.push_back(down_reason.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (ssm_support.is_set || is_set(ssm_support.yfilter)) leaf_name_data.push_back(ssm_support.get_name_leafdata());
    if (ssm_enabled.is_set || is_set(ssm_enabled.yfilter)) leaf_name_data.push_back(ssm_enabled.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (squelched.is_set || is_set(squelched.yfilter)) leaf_name_data.push_back(squelched.get_name_leafdata());
    if (damping_state.is_set || is_set(damping_state.yfilter)) leaf_name_data.push_back(damping_state.get_name_leafdata());
    if (damping_time.is_set || is_set(damping_time.yfilter)) leaf_name_data.push_back(damping_time.get_name_leafdata());
    if (input_disabled.is_set || is_set(input_disabled.yfilter)) leaf_name_data.push_back(input_disabled.get_name_leafdata());
    if (output_disabled.is_set || is_set(output_disabled.yfilter)) leaf_name_data.push_back(output_disabled.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (clock_type_xr.is_set || is_set(clock_type_xr.yfilter)) leaf_name_data.push_back(clock_type_xr.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source>();
        }
        return source;
    }

    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "quality-level-received")
    {
        if(quality_level_received == nullptr)
        {
            quality_level_received = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived>();
        }
        return quality_level_received;
    }

    if(child_yang_name == "quality-level-damped")
    {
        if(quality_level_damped == nullptr)
        {
            quality_level_damped = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped>();
        }
        return quality_level_damped;
    }

    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    if(child_yang_name == "quality-level-effective-output")
    {
        if(quality_level_effective_output == nullptr)
        {
            quality_level_effective_output = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput>();
        }
        return quality_level_effective_output;
    }

    if(child_yang_name == "quality-level-selected-source")
    {
        if(quality_level_selected_source == nullptr)
        {
            quality_level_selected_source = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource>();
        }
        return quality_level_selected_source;
    }

    if(child_yang_name == "spa-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint>();
        c->parent = this;
        spa_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "node-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint>();
        c->parent = this;
        node_selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    if(quality_level_received != nullptr)
    {
        children["quality-level-received"] = quality_level_received;
    }

    if(quality_level_damped != nullptr)
    {
        children["quality-level-damped"] = quality_level_damped;
    }

    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    if(quality_level_effective_output != nullptr)
    {
        children["quality-level-effective-output"] = quality_level_effective_output;
    }

    if(quality_level_selected_source != nullptr)
    {
        children["quality-level-selected-source"] = quality_level_selected_source;
    }

    count = 0;
    for (auto c : spa_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : node_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-type")
    {
        clock_type = value;
        clock_type.value_namespace = name_space;
        clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-reason")
    {
        down_reason = value;
        down_reason.value_namespace = name_space;
        down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-support")
    {
        ssm_support = value;
        ssm_support.value_namespace = name_space;
        ssm_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled = value;
        ssm_enabled.value_namespace = name_space;
        ssm_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "squelched")
    {
        squelched = value;
        squelched.value_namespace = name_space;
        squelched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-state")
    {
        damping_state = value;
        damping_state.value_namespace = name_space;
        damping_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-time")
    {
        damping_time = value;
        damping_time.value_namespace = name_space;
        damping_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-disabled")
    {
        input_disabled = value;
        input_disabled.value_namespace = name_space;
        input_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-disabled")
    {
        output_disabled = value;
        output_disabled.value_namespace = name_space;
        output_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-type-xr")
    {
        clock_type_xr = value;
        clock_type_xr.value_namespace = name_space;
        clock_type_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-type")
    {
        clock_type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "down-reason")
    {
        down_reason.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "ssm-support")
    {
        ssm_support.yfilter = yfilter;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "squelched")
    {
        squelched.yfilter = yfilter;
    }
    if(value_path == "damping-state")
    {
        damping_state.yfilter = yfilter;
    }
    if(value_path == "damping-time")
    {
        damping_time.yfilter = yfilter;
    }
    if(value_path == "input-disabled")
    {
        input_disabled.yfilter = yfilter;
    }
    if(value_path == "output-disabled")
    {
        output_disabled.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "clock-type-xr")
    {
        clock_type_xr.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "selected-source" || name == "quality-level-received" || name == "quality-level-damped" || name == "quality-level-effective-input" || name == "quality-level-effective-output" || name == "quality-level-selected-source" || name == "spa-selection-point" || name == "node-selection-point" || name == "clock-type" || name == "id" || name == "state" || name == "down-reason" || name == "description" || name == "priority" || name == "time-of-day-priority" || name == "ssm-support" || name == "ssm-enabled" || name == "loopback" || name == "selection-input" || name == "squelched" || name == "damping-state" || name == "damping-time" || name == "input-disabled" || name == "output-disabled" || name == "wait-to-restore-time" || name == "clock-type-xr" || name == "supports-frequency" || name == "supports-time-of-day")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::~Source()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SelectedSource::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::QualityLevelReceived()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-received"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::~QualityLevelReceived()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelReceived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::QualityLevelDamped()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-damped"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::~QualityLevelDamped()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-damped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelDamped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::QualityLevelEffectiveOutput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-output"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::~QualityLevelEffectiveOutput()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelEffectiveOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::QualityLevelSelectedSource()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-selected-source"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::~QualityLevelSelectedSource()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::QualityLevelSelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::SpaSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "spa-selection-point"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::~SpaSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::SpaSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::NodeSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "node-selection-point"; yang_parent_name = "detailed-clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::~NodeSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::DetailedClockDatas::DetailedClockData::NodeSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockDatas()
    :
    clock_data(this, {"clock_type", "id"})
{

    yang_name = "clock-datas"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::~ClockDatas()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clock_data.len(); index++)
    {
        if(clock_data[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::has_operation() const
{
    for (std::size_t index=0; index<clock_data.len(); index++)
    {
        if(clock_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-datas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-data")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData>();
        c->parent = this;
        clock_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clock_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::ClockDatas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-data")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::ClockData()
    :
    clock_type{YType::enumeration, "clock-type"},
    id{YType::uint32, "id"},
    state{YType::enumeration, "state"},
    down_reason{YType::str, "down-reason"},
    description{YType::str, "description"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    ssm_support{YType::boolean, "ssm-support"},
    ssm_enabled{YType::boolean, "ssm-enabled"},
    loopback{YType::boolean, "loopback"},
    selection_input{YType::boolean, "selection-input"},
    squelched{YType::boolean, "squelched"},
    damping_state{YType::enumeration, "damping-state"},
    damping_time{YType::uint32, "damping-time"},
    input_disabled{YType::boolean, "input-disabled"},
    output_disabled{YType::boolean, "output-disabled"},
    wait_to_restore_time{YType::uint16, "wait-to-restore-time"},
    clock_type_xr{YType::enumeration, "clock-type-xr"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"}
        ,
    source(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source>())
    , selected_source(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource>())
    , quality_level_received(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived>())
    , quality_level_damped(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped>())
    , quality_level_effective_input(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput>())
    , quality_level_effective_output(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput>())
    , quality_level_selected_source(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource>())
    , spa_selection_point(this, {})
    , node_selection_point(this, {})
{
    source->parent = this;
    selected_source->parent = this;
    quality_level_received->parent = this;
    quality_level_damped->parent = this;
    quality_level_effective_input->parent = this;
    quality_level_effective_output->parent = this;
    quality_level_selected_source->parent = this;

    yang_name = "clock-data"; yang_parent_name = "clock-datas"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::~ClockData()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_data())
            return true;
    }
    return clock_type.is_set
	|| id.is_set
	|| state.is_set
	|| down_reason.is_set
	|| description.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| ssm_support.is_set
	|| ssm_enabled.is_set
	|| loopback.is_set
	|| selection_input.is_set
	|| squelched.is_set
	|| damping_state.is_set
	|| damping_time.is_set
	|| input_disabled.is_set
	|| output_disabled.is_set
	|| wait_to_restore_time.is_set
	|| clock_type_xr.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| (source !=  nullptr && source->has_data())
	|| (selected_source !=  nullptr && selected_source->has_data())
	|| (quality_level_received !=  nullptr && quality_level_received->has_data())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_data())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_data())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_data())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_data());
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::has_operation() const
{
    for (std::size_t index=0; index<spa_selection_point.len(); index++)
    {
        if(spa_selection_point[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_selection_point.len(); index++)
    {
        if(node_selection_point[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(clock_type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(down_reason.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(ssm_support.yfilter)
	|| ydk::is_set(ssm_enabled.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(squelched.yfilter)
	|| ydk::is_set(damping_state.yfilter)
	|| ydk::is_set(damping_time.yfilter)
	|| ydk::is_set(input_disabled.yfilter)
	|| ydk::is_set(output_disabled.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(clock_type_xr.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (selected_source !=  nullptr && selected_source->has_operation())
	|| (quality_level_received !=  nullptr && quality_level_received->has_operation())
	|| (quality_level_damped !=  nullptr && quality_level_damped->has_operation())
	|| (quality_level_effective_input !=  nullptr && quality_level_effective_input->has_operation())
	|| (quality_level_effective_output !=  nullptr && quality_level_effective_output->has_operation())
	|| (quality_level_selected_source !=  nullptr && quality_level_selected_source->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-data";
    ADD_KEY_TOKEN(clock_type, "clock-type");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_type.is_set || is_set(clock_type.yfilter)) leaf_name_data.push_back(clock_type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (down_reason.is_set || is_set(down_reason.yfilter)) leaf_name_data.push_back(down_reason.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (ssm_support.is_set || is_set(ssm_support.yfilter)) leaf_name_data.push_back(ssm_support.get_name_leafdata());
    if (ssm_enabled.is_set || is_set(ssm_enabled.yfilter)) leaf_name_data.push_back(ssm_enabled.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (squelched.is_set || is_set(squelched.yfilter)) leaf_name_data.push_back(squelched.get_name_leafdata());
    if (damping_state.is_set || is_set(damping_state.yfilter)) leaf_name_data.push_back(damping_state.get_name_leafdata());
    if (damping_time.is_set || is_set(damping_time.yfilter)) leaf_name_data.push_back(damping_time.get_name_leafdata());
    if (input_disabled.is_set || is_set(input_disabled.yfilter)) leaf_name_data.push_back(input_disabled.get_name_leafdata());
    if (output_disabled.is_set || is_set(output_disabled.yfilter)) leaf_name_data.push_back(output_disabled.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (clock_type_xr.is_set || is_set(clock_type_xr.yfilter)) leaf_name_data.push_back(clock_type_xr.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source>();
        }
        return source;
    }

    if(child_yang_name == "selected-source")
    {
        if(selected_source == nullptr)
        {
            selected_source = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource>();
        }
        return selected_source;
    }

    if(child_yang_name == "quality-level-received")
    {
        if(quality_level_received == nullptr)
        {
            quality_level_received = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived>();
        }
        return quality_level_received;
    }

    if(child_yang_name == "quality-level-damped")
    {
        if(quality_level_damped == nullptr)
        {
            quality_level_damped = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped>();
        }
        return quality_level_damped;
    }

    if(child_yang_name == "quality-level-effective-input")
    {
        if(quality_level_effective_input == nullptr)
        {
            quality_level_effective_input = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput>();
        }
        return quality_level_effective_input;
    }

    if(child_yang_name == "quality-level-effective-output")
    {
        if(quality_level_effective_output == nullptr)
        {
            quality_level_effective_output = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput>();
        }
        return quality_level_effective_output;
    }

    if(child_yang_name == "quality-level-selected-source")
    {
        if(quality_level_selected_source == nullptr)
        {
            quality_level_selected_source = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource>();
        }
        return quality_level_selected_source;
    }

    if(child_yang_name == "spa-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint>();
        c->parent = this;
        spa_selection_point.append(c);
        return c;
    }

    if(child_yang_name == "node-selection-point")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint>();
        c->parent = this;
        node_selection_point.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(selected_source != nullptr)
    {
        children["selected-source"] = selected_source;
    }

    if(quality_level_received != nullptr)
    {
        children["quality-level-received"] = quality_level_received;
    }

    if(quality_level_damped != nullptr)
    {
        children["quality-level-damped"] = quality_level_damped;
    }

    if(quality_level_effective_input != nullptr)
    {
        children["quality-level-effective-input"] = quality_level_effective_input;
    }

    if(quality_level_effective_output != nullptr)
    {
        children["quality-level-effective-output"] = quality_level_effective_output;
    }

    if(quality_level_selected_source != nullptr)
    {
        children["quality-level-selected-source"] = quality_level_selected_source;
    }

    count = 0;
    for (auto c : spa_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : node_selection_point.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-type")
    {
        clock_type = value;
        clock_type.value_namespace = name_space;
        clock_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-reason")
    {
        down_reason = value;
        down_reason.value_namespace = name_space;
        down_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-support")
    {
        ssm_support = value;
        ssm_support.value_namespace = name_space;
        ssm_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled = value;
        ssm_enabled.value_namespace = name_space;
        ssm_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "squelched")
    {
        squelched = value;
        squelched.value_namespace = name_space;
        squelched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-state")
    {
        damping_state = value;
        damping_state.value_namespace = name_space;
        damping_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damping-time")
    {
        damping_time = value;
        damping_time.value_namespace = name_space;
        damping_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-disabled")
    {
        input_disabled = value;
        input_disabled.value_namespace = name_space;
        input_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-disabled")
    {
        output_disabled = value;
        output_disabled.value_namespace = name_space;
        output_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-type-xr")
    {
        clock_type_xr = value;
        clock_type_xr.value_namespace = name_space;
        clock_type_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-type")
    {
        clock_type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "down-reason")
    {
        down_reason.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "ssm-support")
    {
        ssm_support.yfilter = yfilter;
    }
    if(value_path == "ssm-enabled")
    {
        ssm_enabled.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "squelched")
    {
        squelched.yfilter = yfilter;
    }
    if(value_path == "damping-state")
    {
        damping_state.yfilter = yfilter;
    }
    if(value_path == "damping-time")
    {
        damping_time.yfilter = yfilter;
    }
    if(value_path == "input-disabled")
    {
        input_disabled.yfilter = yfilter;
    }
    if(value_path == "output-disabled")
    {
        output_disabled.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "clock-type-xr")
    {
        clock_type_xr.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "selected-source" || name == "quality-level-received" || name == "quality-level-damped" || name == "quality-level-effective-input" || name == "quality-level-effective-output" || name == "quality-level-selected-source" || name == "spa-selection-point" || name == "node-selection-point" || name == "clock-type" || name == "id" || name == "state" || name == "down-reason" || name == "description" || name == "priority" || name == "time-of-day-priority" || name == "ssm-support" || name == "ssm-enabled" || name == "loopback" || name == "selection-input" || name == "squelched" || name == "damping-state" || name == "damping-time" || name == "input-disabled" || name == "output-disabled" || name == "wait-to-restore-time" || name == "clock-type-xr" || name == "supports-frequency" || name == "supports-time-of-day")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::Source()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::~Source()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::Source::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::SelectedSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "selected-source"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::~SelectedSource()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "selected-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SelectedSource::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::QualityLevelReceived()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-received"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::~QualityLevelReceived()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelReceived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::QualityLevelDamped()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-damped"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::~QualityLevelDamped()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-damped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelDamped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::QualityLevelEffectiveOutput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-output"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::~QualityLevelEffectiveOutput()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::QualityLevelSelectedSource()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-selected-source"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::~QualityLevelSelectedSource()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::SpaSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "spa-selection-point"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::~SpaSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::NodeSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "node-selection-point"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::~NodeSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInputs()
    :
    selection_point_input(this, {})
{

    yang_name = "selection-point-inputs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::~SelectionPointInputs()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<selection_point_input.len(); index++)
    {
        if(selection_point_input[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_operation() const
{
    for (std::size_t index=0; index<selection_point_input.len(); index++)
    {
        if(selection_point_input[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-inputs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point-input")
    {
        auto c = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput>();
        c->parent = this;
        selection_point_input.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : selection_point_input.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-input")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::SelectionPointInput()
    :
    selection_point{YType::uint32, "selection-point"},
    stream_type{YType::enumeration, "stream-type"},
    source_type{YType::enumeration, "source-type"},
    interface{YType::str, "interface"},
    clock_port{YType::uint32, "clock-port"},
    last_node{YType::str, "last-node"},
    last_selection_point{YType::uint32, "last-selection-point"},
    output_id{YType::uint32, "output-id"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    selected{YType::boolean, "selected"},
    output_id_xr{YType::uint8, "output-id-xr"},
    platform_status{YType::enumeration, "platform-status"},
    platform_failed_reason{YType::str, "platform-failed-reason"}
        ,
    input_selection_point(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint>())
    , stream(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream>())
    , original_source(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource>())
    , quality_level(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel>())
{
    input_selection_point->parent = this;
    stream->parent = this;
    original_source->parent = this;
    quality_level->parent = this;

    yang_name = "selection-point-input"; yang_parent_name = "selection-point-inputs"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::~SelectionPointInput()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| stream_type.is_set
	|| source_type.is_set
	|| interface.is_set
	|| clock_port.is_set
	|| last_node.is_set
	|| last_selection_point.is_set
	|| output_id.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| selected.is_set
	|| output_id_xr.is_set
	|| platform_status.is_set
	|| platform_failed_reason.is_set
	|| (input_selection_point !=  nullptr && input_selection_point->has_data())
	|| (stream !=  nullptr && stream->has_data())
	|| (original_source !=  nullptr && original_source->has_data())
	|| (quality_level !=  nullptr && quality_level->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(stream_type.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(clock_port.yfilter)
	|| ydk::is_set(last_node.yfilter)
	|| ydk::is_set(last_selection_point.yfilter)
	|| ydk::is_set(output_id.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(selected.yfilter)
	|| ydk::is_set(output_id_xr.yfilter)
	|| ydk::is_set(platform_status.yfilter)
	|| ydk::is_set(platform_failed_reason.yfilter)
	|| (input_selection_point !=  nullptr && input_selection_point->has_operation())
	|| (stream !=  nullptr && stream->has_operation())
	|| (original_source !=  nullptr && original_source->has_operation())
	|| (quality_level !=  nullptr && quality_level->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (stream_type.is_set || is_set(stream_type.yfilter)) leaf_name_data.push_back(stream_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (clock_port.is_set || is_set(clock_port.yfilter)) leaf_name_data.push_back(clock_port.get_name_leafdata());
    if (last_node.is_set || is_set(last_node.yfilter)) leaf_name_data.push_back(last_node.get_name_leafdata());
    if (last_selection_point.is_set || is_set(last_selection_point.yfilter)) leaf_name_data.push_back(last_selection_point.get_name_leafdata());
    if (output_id.is_set || is_set(output_id.yfilter)) leaf_name_data.push_back(output_id.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (selected.is_set || is_set(selected.yfilter)) leaf_name_data.push_back(selected.get_name_leafdata());
    if (output_id_xr.is_set || is_set(output_id_xr.yfilter)) leaf_name_data.push_back(output_id_xr.get_name_leafdata());
    if (platform_status.is_set || is_set(platform_status.yfilter)) leaf_name_data.push_back(platform_status.get_name_leafdata());
    if (platform_failed_reason.is_set || is_set(platform_failed_reason.yfilter)) leaf_name_data.push_back(platform_failed_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-selection-point")
    {
        if(input_selection_point == nullptr)
        {
            input_selection_point = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint>();
        }
        return input_selection_point;
    }

    if(child_yang_name == "stream")
    {
        if(stream == nullptr)
        {
            stream = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream>();
        }
        return stream;
    }

    if(child_yang_name == "original-source")
    {
        if(original_source == nullptr)
        {
            original_source = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource>();
        }
        return original_source;
    }

    if(child_yang_name == "quality-level")
    {
        if(quality_level == nullptr)
        {
            quality_level = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel>();
        }
        return quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input_selection_point != nullptr)
    {
        children["input-selection-point"] = input_selection_point;
    }

    if(stream != nullptr)
    {
        children["stream"] = stream;
    }

    if(original_source != nullptr)
    {
        children["original-source"] = original_source;
    }

    if(quality_level != nullptr)
    {
        children["quality-level"] = quality_level;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream-type")
    {
        stream_type = value;
        stream_type.value_namespace = name_space;
        stream_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-port")
    {
        clock_port = value;
        clock_port.value_namespace = name_space;
        clock_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-node")
    {
        last_node = value;
        last_node.value_namespace = name_space;
        last_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-selection-point")
    {
        last_selection_point = value;
        last_selection_point.value_namespace = name_space;
        last_selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-id")
    {
        output_id = value;
        output_id.value_namespace = name_space;
        output_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected")
    {
        selected = value;
        selected.value_namespace = name_space;
        selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-id-xr")
    {
        output_id_xr = value;
        output_id_xr.value_namespace = name_space;
        output_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-status")
    {
        platform_status = value;
        platform_status.value_namespace = name_space;
        platform_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-failed-reason")
    {
        platform_failed_reason = value;
        platform_failed_reason.value_namespace = name_space;
        platform_failed_reason.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "stream-type")
    {
        stream_type.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "clock-port")
    {
        clock_port.yfilter = yfilter;
    }
    if(value_path == "last-node")
    {
        last_node.yfilter = yfilter;
    }
    if(value_path == "last-selection-point")
    {
        last_selection_point.yfilter = yfilter;
    }
    if(value_path == "output-id")
    {
        output_id.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "selected")
    {
        selected.yfilter = yfilter;
    }
    if(value_path == "output-id-xr")
    {
        output_id_xr.yfilter = yfilter;
    }
    if(value_path == "platform-status")
    {
        platform_status.yfilter = yfilter;
    }
    if(value_path == "platform-failed-reason")
    {
        platform_failed_reason.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-selection-point" || name == "stream" || name == "original-source" || name == "quality-level" || name == "selection-point" || name == "stream-type" || name == "source-type" || name == "interface" || name == "clock-port" || name == "last-node" || name == "last-selection-point" || name == "output-id" || name == "supports-frequency" || name == "supports-time-of-day" || name == "priority" || name == "time-of-day-priority" || name == "selected" || name == "output-id-xr" || name == "platform-status" || name == "platform-failed-reason")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::InputSelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "input-selection-point"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::~InputSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::Stream()
    :
    stream_input{YType::enumeration, "stream-input"}
        ,
    source_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId>())
    , selection_point_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId>())
{
    source_id->parent = this;
    selection_point_id->parent = this;

    yang_name = "stream"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::~Stream()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_data() const
{
    if (is_presence_container) return true;
    return stream_input.is_set
	|| (source_id !=  nullptr && source_id->has_data())
	|| (selection_point_id !=  nullptr && selection_point_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stream_input.yfilter)
	|| (source_id !=  nullptr && source_id->has_operation())
	|| (selection_point_id !=  nullptr && selection_point_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stream";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stream_input.is_set || is_set(stream_input.yfilter)) leaf_name_data.push_back(stream_input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-id")
    {
        if(source_id == nullptr)
        {
            source_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId>();
        }
        return source_id;
    }

    if(child_yang_name == "selection-point-id")
    {
        if(selection_point_id == nullptr)
        {
            selection_point_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId>();
        }
        return selection_point_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_id != nullptr)
    {
        children["source-id"] = source_id;
    }

    if(selection_point_id != nullptr)
    {
        children["selection-point-id"] = selection_point_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream-input")
    {
        stream_input = value;
        stream_input.value_namespace = name_space;
        stream_input.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream-input")
    {
        stream_input.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-id" || name == "selection-point-id" || name == "stream-input")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::SourceId()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source-id"; yang_parent_name = "stream"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::~SourceId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source-id"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source-id"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPointId()
    :
    output_id{YType::uint8, "output-id"}
        ,
    selection_point(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint>())
{
    selection_point->parent = this;

    yang_name = "selection-point-id"; yang_parent_name = "stream"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::~SelectionPointId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_data() const
{
    if (is_presence_container) return true;
    return output_id.is_set
	|| (selection_point !=  nullptr && selection_point->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_id.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_id.is_set || is_set(output_id.yfilter)) leaf_name_data.push_back(output_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint>();
        }
        return selection_point;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selection_point != nullptr)
    {
        children["selection-point"] = selection_point;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-id")
    {
        output_id = value;
        output_id.value_namespace = name_space;
        output_id.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-id")
    {
        output_id.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "output-id")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "selection-point-id"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::OriginalSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    node{YType::str, "node"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId>())
{
    clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "original-source"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::~OriginalSource()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| node.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clock_id != nullptr)
    {
        children["clock-id"] = clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "node" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "original-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

const Enum::YLeaf FsyncBagDampingState::damping_state_down {0, "damping-state-down"};
const Enum::YLeaf FsyncBagDampingState::damping_state_coming_up {1, "damping-state-coming-up"};
const Enum::YLeaf FsyncBagDampingState::damping_state_up {2, "damping-state-up"};
const Enum::YLeaf FsyncBagDampingState::damping_state_going_down {3, "damping-state-going-down"};

const Enum::YLeaf FsyncBagStreamState::stream_invalid {0, "stream-invalid"};
const Enum::YLeaf FsyncBagStreamState::stream_unqualified {1, "stream-unqualified"};
const Enum::YLeaf FsyncBagStreamState::stream_available {2, "stream-available"};
const Enum::YLeaf FsyncBagStreamState::stream_available_acquiring {3, "stream-available-acquiring"};
const Enum::YLeaf FsyncBagStreamState::stream_locked {4, "stream-locked"};
const Enum::YLeaf FsyncBagStreamState::stream_holdover {5, "stream-holdover"};
const Enum::YLeaf FsyncBagStreamState::stream_freerun {6, "stream-freerun"};
const Enum::YLeaf FsyncBagStreamState::stream_failed {7, "stream-failed"};
const Enum::YLeaf FsyncBagStreamState::stream_unmonitored {8, "stream-unmonitored"};
const Enum::YLeaf FsyncBagStreamState::stream_error {9, "stream-error"};

const Enum::YLeaf FsyncBagEsmcPeerState::peer_down {1808240398, "peer-down"};
const Enum::YLeaf FsyncBagEsmcPeerState::peer_up {1808240399, "peer-up"};
const Enum::YLeaf FsyncBagEsmcPeerState::peer_timed_out {1808240400, "peer-timed-out"};
const Enum::YLeaf FsyncBagEsmcPeerState::peer_unknown {1808240401, "peer-unknown"};

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf FsyncBagStreamInput::invalid_input {0, "invalid-input"};
const Enum::YLeaf FsyncBagStreamInput::source_input {1, "source-input"};
const Enum::YLeaf FsyncBagStreamInput::selection_point_input {2, "selection-point-input"};

const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_invalid {0, "option2-generation2-invalid"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_do_not_use {1, "option2-generation2-do-not-use"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_failed {2, "option2-generation2-failed"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_none {3, "option2-generation2-none"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2prs {30, "option2-generation2prs"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2stu {31, "option2-generation2stu"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum2 {32, "option2-generation2-stratum2"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum3 {33, "option2-generation2-stratum3"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2tnc {34, "option2-generation2tnc"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum3e {35, "option2-generation2-stratum3e"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2smc {36, "option2-generation2smc"};
const Enum::YLeaf FsyncBagQlO2G2Value::option2_generation2_stratum4 {37, "option2-generation2-stratum4"};

const Enum::YLeaf FsyncBagQlOption::no_quality_level_option {0, "no-quality-level-option"};
const Enum::YLeaf FsyncBagQlOption::option1 {1, "option1"};
const Enum::YLeaf FsyncBagQlOption::option2_generation1 {2, "option2-generation1"};
const Enum::YLeaf FsyncBagQlOption::option2_generation2 {3, "option2-generation2"};
const Enum::YLeaf FsyncBagQlOption::invalid_quality_level_option {4, "invalid-quality-level-option"};

const Enum::YLeaf FsyncBagSourceState::source_state_unknown {0, "source-state-unknown"};
const Enum::YLeaf FsyncBagSourceState::source_state_up {1, "source-state-up"};
const Enum::YLeaf FsyncBagSourceState::source_state_down {2, "source-state-down"};
const Enum::YLeaf FsyncBagSourceState::source_state_unavailable {3, "source-state-unavailable"};

const Enum::YLeaf FsyncBagForwardtraceNode::forward_trace_node_selection_point {0, "forward-trace-node-selection-point"};
const Enum::YLeaf FsyncBagForwardtraceNode::forward_trace_node_source {1, "forward-trace-node-source"};

const Enum::YLeaf FsyncStream::local {1, "local"};
const Enum::YLeaf FsyncStream::selection_point {2, "selection-point"};

const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bitst1 {0, "clock-class-bitst1"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bitse1 {1, "clock-class-bitse1"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bits2m {2, "clock-class-bits2m"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bits6m {3, "clock-class-bits6m"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bits64k {4, "clock-class-bits64k"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_dti {5, "clock-class-dti"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_gps {6, "clock-class-gps"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_chassis_sync {7, "clock-class-chassis-sync"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_bitsj1 {8, "clock-class-bitsj1"};
const Enum::YLeaf FsyncBagClockIntfClass::clock_class_unknown {255, "clock-class-unknown"};

const Enum::YLeaf FsyncBagQlO1Value::option1_invalid {0, "option1-invalid"};
const Enum::YLeaf FsyncBagQlO1Value::option1_do_not_use {1, "option1-do-not-use"};
const Enum::YLeaf FsyncBagQlO1Value::option1_failed {2, "option1-failed"};
const Enum::YLeaf FsyncBagQlO1Value::option1_none {3, "option1-none"};
const Enum::YLeaf FsyncBagQlO1Value::option1prc {10, "option1prc"};
const Enum::YLeaf FsyncBagQlO1Value::option1ssu_a {11, "option1ssu-a"};
const Enum::YLeaf FsyncBagQlO1Value::option1ssu_b {12, "option1ssu-b"};
const Enum::YLeaf FsyncBagQlO1Value::option1sec {13, "option1sec"};

const Enum::YLeaf FsyncBagSourceClass::invalid_source {0, "invalid-source"};
const Enum::YLeaf FsyncBagSourceClass::ethernet_interface_source {1, "ethernet-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::sonet_interface_source {2, "sonet-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::clock_interface_source {3, "clock-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::internal_clock_source {4, "internal-clock-source"};
const Enum::YLeaf FsyncBagSourceClass::ptp_source {5, "ptp-source"};
const Enum::YLeaf FsyncBagSourceClass::satellite_access_interface_source {6, "satellite-access-interface-source"};
const Enum::YLeaf FsyncBagSourceClass::ntp_source {7, "ntp-source"};
const Enum::YLeaf FsyncBagSourceClass::gnss_receiver {8, "gnss-receiver"};

const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_invalid {0, "option2-generation1-invalid"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_do_not_use {1, "option2-generation1-do-not-use"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_failed {2, "option2-generation1-failed"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_none {3, "option2-generation1-none"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1prs {20, "option2-generation1prs"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1stu {21, "option2-generation1stu"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_stratum2 {22, "option2-generation1-stratum2"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_stratum3 {23, "option2-generation1-stratum3"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1smc {24, "option2-generation1smc"};
const Enum::YLeaf FsyncBagQlO2G1Value::option2_generation1_stratum4 {25, "option2-generation1-stratum4"};

const Enum::YLeaf FsyncSource::ethernet {1, "ethernet"};
const Enum::YLeaf FsyncSource::sonet {2, "sonet"};
const Enum::YLeaf FsyncSource::clock_ {3, "clock"};
const Enum::YLeaf FsyncSource::internal {4, "internal"};
const Enum::YLeaf FsyncSource::ptp {5, "ptp"};
const Enum::YLeaf FsyncSource::satellite_access {6, "satellite-access"};
const Enum::YLeaf FsyncSource::ntp {7, "ntp"};


}
}

