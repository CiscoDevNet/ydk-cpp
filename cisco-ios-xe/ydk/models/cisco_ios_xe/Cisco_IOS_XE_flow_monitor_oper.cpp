
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_flow_monitor_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_flow_monitor_oper {

FlowMonitors::FlowMonitors()
{

    yang_name = "flow-monitors"; yang_parent_name = "Cisco-IOS-XE-flow-monitor-oper"; is_top_level_class = true; has_list_ancestor = false;
}

FlowMonitors::~FlowMonitors()
{
}

bool FlowMonitors::has_data() const
{
    for (std::size_t index=0; index<flow_monitor.size(); index++)
    {
        if(flow_monitor[index]->has_data())
            return true;
    }
    return false;
}

bool FlowMonitors::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor.size(); index++)
    {
        if(flow_monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowMonitors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow-monitor-oper:flow-monitors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor")
    {
        for(auto const & c : flow_monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FlowMonitors::FlowMonitor>();
        c->parent = this;
        flow_monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FlowMonitors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowMonitors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FlowMonitors::clone_ptr() const
{
    return std::make_shared<FlowMonitors>();
}

std::string FlowMonitors::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string FlowMonitors::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function FlowMonitors::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FlowMonitors::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool FlowMonitors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor")
        return true;
    return false;
}

FlowMonitors::FlowMonitor::FlowMonitor()
    :
    name{YType::str, "name"},
    time_collected{YType::uint64, "time-collected"}
    	,
    flows(std::make_shared<FlowMonitors::FlowMonitor::Flows>())
{
    flows->parent = this;

    yang_name = "flow-monitor"; yang_parent_name = "flow-monitors"; is_top_level_class = false; has_list_ancestor = false;
}

FlowMonitors::FlowMonitor::~FlowMonitor()
{
}

bool FlowMonitors::FlowMonitor::has_data() const
{
    return name.is_set
	|| time_collected.is_set
	|| (flows !=  nullptr && flows->has_data());
}

bool FlowMonitors::FlowMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(time_collected.yfilter)
	|| (flows !=  nullptr && flows->has_operation());
}

std::string FlowMonitors::FlowMonitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow-monitor-oper:flow-monitors/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowMonitors::FlowMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (time_collected.is_set || is_set(time_collected.yfilter)) leaf_name_data.push_back(time_collected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flows")
    {
        if(flows == nullptr)
        {
            flows = std::make_shared<FlowMonitors::FlowMonitor::Flows>();
        }
        return flows;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flows != nullptr)
    {
        children["flows"] = flows;
    }

    return children;
}

void FlowMonitors::FlowMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-collected")
    {
        time_collected = value;
        time_collected.value_namespace = name_space;
        time_collected.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "time-collected")
    {
        time_collected.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flows" || name == "name" || name == "time-collected")
        return true;
    return false;
}

FlowMonitors::FlowMonitor::Flows::Flows()
{

    yang_name = "flows"; yang_parent_name = "flow-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

FlowMonitors::FlowMonitor::Flows::~Flows()
{
}

bool FlowMonitors::FlowMonitor::Flows::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool FlowMonitors::FlowMonitor::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowMonitors::FlowMonitor::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowMonitor::Flows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowMonitor::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FlowMonitors::FlowMonitor::Flows::Flow>();
        c->parent = this;
        flow.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowMonitor::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FlowMonitors::FlowMonitor::Flows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowMonitors::FlowMonitor::Flows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowMonitors::FlowMonitor::Flows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

FlowMonitors::FlowMonitor::Flows::Flow::Flow()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    interface_input{YType::str, "interface-input"},
    is_multicast{YType::str, "is-multicast"},
    vrf_id_input{YType::int64, "vrf-id-input"},
    source_port{YType::int64, "source-port"},
    destination_port{YType::int64, "destination-port"},
    ip_tos{YType::str, "ip-tos"},
    ip_protocol{YType::int64, "ip-protocol"},
    bytes{YType::int64, "bytes"},
    interface_output{YType::str, "interface-output"},
    packets{YType::int64, "packets"}
{

    yang_name = "flow"; yang_parent_name = "flows"; is_top_level_class = false; has_list_ancestor = true;
}

FlowMonitors::FlowMonitor::Flows::Flow::~Flow()
{
}

bool FlowMonitors::FlowMonitor::Flows::Flow::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| interface_input.is_set
	|| is_multicast.is_set
	|| vrf_id_input.is_set
	|| source_port.is_set
	|| destination_port.is_set
	|| ip_tos.is_set
	|| ip_protocol.is_set
	|| bytes.is_set
	|| interface_output.is_set
	|| packets.is_set;
}

bool FlowMonitors::FlowMonitor::Flows::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(interface_input.yfilter)
	|| ydk::is_set(is_multicast.yfilter)
	|| ydk::is_set(vrf_id_input.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_protocol.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(interface_output.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string FlowMonitors::FlowMonitor::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[interface-input='" <<interface_input <<"']" <<"[is-multicast='" <<is_multicast <<"']" <<"[vrf-id-input='" <<vrf_id_input <<"']" <<"[source-port='" <<source_port <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[ip-tos='" <<ip_tos <<"']" <<"[ip-protocol='" <<ip_protocol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowMonitor::Flows::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_input.is_set || is_set(interface_input.yfilter)) leaf_name_data.push_back(interface_input.get_name_leafdata());
    if (is_multicast.is_set || is_set(is_multicast.yfilter)) leaf_name_data.push_back(is_multicast.get_name_leafdata());
    if (vrf_id_input.is_set || is_set(vrf_id_input.yfilter)) leaf_name_data.push_back(vrf_id_input.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_protocol.is_set || is_set(ip_protocol.yfilter)) leaf_name_data.push_back(ip_protocol.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (interface_output.is_set || is_set(interface_output.yfilter)) leaf_name_data.push_back(interface_output.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowMonitor::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowMonitor::Flows::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void FlowMonitors::FlowMonitor::Flows::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-input")
    {
        interface_input = value;
        interface_input.value_namespace = name_space;
        interface_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast")
    {
        is_multicast = value;
        is_multicast.value_namespace = name_space;
        is_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id-input")
    {
        vrf_id_input = value;
        vrf_id_input.value_namespace = name_space;
        vrf_id_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol = value;
        ip_protocol.value_namespace = name_space;
        ip_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-output")
    {
        interface_output = value;
        interface_output.value_namespace = name_space;
        interface_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowMonitor::Flows::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "interface-input")
    {
        interface_input.yfilter = yfilter;
    }
    if(value_path == "is-multicast")
    {
        is_multicast.yfilter = yfilter;
    }
    if(value_path == "vrf-id-input")
    {
        vrf_id_input.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "interface-output")
    {
        interface_output.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowMonitor::Flows::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "interface-input" || name == "is-multicast" || name == "vrf-id-input" || name == "source-port" || name == "destination-port" || name == "ip-tos" || name == "ip-protocol" || name == "bytes" || name == "interface-output" || name == "packets")
        return true;
    return false;
}


}
}

