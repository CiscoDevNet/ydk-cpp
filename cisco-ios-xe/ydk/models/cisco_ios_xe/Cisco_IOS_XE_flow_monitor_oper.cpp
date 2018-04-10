
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
    for (std::size_t index=0; index<flow_export_statistics.size(); index++)
    {
        if(flow_export_statistics[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flow_cache_statistics.size(); index++)
    {
        if(flow_cache_statistics[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flow_monitor_statistics.size(); index++)
    {
        if(flow_monitor_statistics[index]->has_data())
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
    for (std::size_t index=0; index<flow_export_statistics.size(); index++)
    {
        if(flow_export_statistics[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flow_cache_statistics.size(); index++)
    {
        if(flow_cache_statistics[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flow_monitor_statistics.size(); index++)
    {
        if(flow_monitor_statistics[index]->has_operation())
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
        auto c = std::make_shared<FlowMonitors::FlowMonitor>();
        c->parent = this;
        flow_monitor.push_back(c);
        return c;
    }

    if(child_yang_name == "flow-export-statistics")
    {
        auto c = std::make_shared<FlowMonitors::FlowExportStatistics>();
        c->parent = this;
        flow_export_statistics.push_back(c);
        return c;
    }

    if(child_yang_name == "flow-cache-statistics")
    {
        auto c = std::make_shared<FlowMonitors::FlowCacheStatistics>();
        c->parent = this;
        flow_cache_statistics.push_back(c);
        return c;
    }

    if(child_yang_name == "flow-monitor-statistics")
    {
        auto c = std::make_shared<FlowMonitors::FlowMonitorStatistics>();
        c->parent = this;
        flow_monitor_statistics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flow_monitor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flow_export_statistics)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flow_cache_statistics)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flow_monitor_statistics)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    if(name == "flow-monitor" || name == "flow-export-statistics" || name == "flow-cache-statistics" || name == "flow-monitor-statistics")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : flow)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    interface_output{YType::str, "interface-output"},
    bytes{YType::int64, "bytes"},
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
	|| interface_output.is_set
	|| bytes.is_set
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
	|| ydk::is_set(interface_output.yfilter)
	|| ydk::is_set(bytes.yfilter)
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
    if (interface_output.is_set || is_set(interface_output.yfilter)) leaf_name_data.push_back(interface_output.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
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
    char count=0;
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
    if(value_path == "interface-output")
    {
        interface_output = value;
        interface_output.value_namespace = name_space;
        interface_output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "interface-output")
    {
        interface_output.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowMonitor::Flows::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "interface-input" || name == "is-multicast" || name == "vrf-id-input" || name == "source-port" || name == "destination-port" || name == "ip-tos" || name == "ip-protocol" || name == "interface-output" || name == "bytes" || name == "packets")
        return true;
    return false;
}

FlowMonitors::FlowExportStatistics::FlowExportStatistics()
    :
    name{YType::str, "name"}
    	,
    transport_stats(std::make_shared<FlowMonitors::FlowExportStatistics::TransportStats>())
{
    transport_stats->parent = this;

    yang_name = "flow-export-statistics"; yang_parent_name = "flow-monitors"; is_top_level_class = false; has_list_ancestor = false;
}

FlowMonitors::FlowExportStatistics::~FlowExportStatistics()
{
}

bool FlowMonitors::FlowExportStatistics::has_data() const
{
    for (std::size_t index=0; index<export_client.size(); index++)
    {
        if(export_client[index]->has_data())
            return true;
    }
    return name.is_set
	|| (transport_stats !=  nullptr && transport_stats->has_data());
}

bool FlowMonitors::FlowExportStatistics::has_operation() const
{
    for (std::size_t index=0; index<export_client.size(); index++)
    {
        if(export_client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (transport_stats !=  nullptr && transport_stats->has_operation());
}

std::string FlowMonitors::FlowExportStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow-monitor-oper:flow-monitors/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowMonitors::FlowExportStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export-statistics" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowExportStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowExportStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-stats")
    {
        if(transport_stats == nullptr)
        {
            transport_stats = std::make_shared<FlowMonitors::FlowExportStatistics::TransportStats>();
        }
        return transport_stats;
    }

    if(child_yang_name == "export-client")
    {
        auto c = std::make_shared<FlowMonitors::FlowExportStatistics::ExportClient>();
        c->parent = this;
        export_client.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowExportStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transport_stats != nullptr)
    {
        children["transport-stats"] = transport_stats;
    }

    count = 0;
    for (auto const & c : export_client)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FlowMonitors::FlowExportStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowExportStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowExportStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-stats" || name == "export-client" || name == "name")
        return true;
    return false;
}

FlowMonitors::FlowExportStatistics::TransportStats::TransportStats()
    :
    last_cleared{YType::str, "last-cleared"}
{

    yang_name = "transport-stats"; yang_parent_name = "flow-export-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

FlowMonitors::FlowExportStatistics::TransportStats::~TransportStats()
{
}

bool FlowMonitors::FlowExportStatistics::TransportStats::has_data() const
{
    for (std::size_t index=0; index<flow_exporter_stats.size(); index++)
    {
        if(flow_exporter_stats[index]->has_data())
            return true;
    }
    return last_cleared.is_set;
}

bool FlowMonitors::FlowExportStatistics::TransportStats::has_operation() const
{
    for (std::size_t index=0; index<flow_exporter_stats.size(); index++)
    {
        if(flow_exporter_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string FlowMonitors::FlowExportStatistics::TransportStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowExportStatistics::TransportStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowExportStatistics::TransportStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-exporter-stats")
    {
        auto c = std::make_shared<FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats>();
        c->parent = this;
        flow_exporter_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowExportStatistics::TransportStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flow_exporter_stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FlowMonitors::FlowExportStatistics::TransportStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowExportStatistics::TransportStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowExportStatistics::TransportStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-exporter-stats" || name == "last-cleared")
        return true;
    return false;
}

FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::FlowExporterStats()
    :
    type{YType::enumeration, "type"},
    pkt_counts{YType::uint64, "pkt-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "flow-exporter-stats"; yang_parent_name = "transport-stats"; is_top_level_class = false; has_list_ancestor = true;
}

FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::~FlowExporterStats()
{
}

bool FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::has_data() const
{
    return type.is_set
	|| pkt_counts.is_set
	|| byte_counts.is_set;
}

bool FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pkt_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pkt_counts.is_set || is_set(pkt_counts.yfilter)) leaf_name_data.push_back(pkt_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-counts")
    {
        pkt_counts = value;
        pkt_counts.value_namespace = name_space;
        pkt_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pkt-counts")
    {
        pkt_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowExportStatistics::TransportStats::FlowExporterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "pkt-counts" || name == "byte-counts")
        return true;
    return false;
}

FlowMonitors::FlowExportStatistics::ExportClient::ExportClient()
    :
    name{YType::str, "name"},
    group{YType::str, "group"}
    	,
    protocol_stats(std::make_shared<FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats>())
{
    protocol_stats->parent = this;

    yang_name = "export-client"; yang_parent_name = "flow-export-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

FlowMonitors::FlowExportStatistics::ExportClient::~ExportClient()
{
}

bool FlowMonitors::FlowExportStatistics::ExportClient::has_data() const
{
    return name.is_set
	|| group.is_set
	|| (protocol_stats !=  nullptr && protocol_stats->has_data());
}

bool FlowMonitors::FlowExportStatistics::ExportClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation());
}

std::string FlowMonitors::FlowExportStatistics::ExportClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowExportStatistics::ExportClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowExportStatistics::ExportClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats == nullptr)
        {
            protocol_stats = std::make_shared<FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats>();
        }
        return protocol_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowExportStatistics::ExportClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol_stats != nullptr)
    {
        children["protocol-stats"] = protocol_stats;
    }

    return children;
}

void FlowMonitors::FlowExportStatistics::ExportClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowExportStatistics::ExportClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowExportStatistics::ExportClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-stats" || name == "name" || name == "group")
        return true;
    return false;
}

FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::ProtocolStats()
    :
    bytes_added{YType::uint64, "bytes-added"},
    bytes_sent{YType::uint64, "bytes-sent"},
    bytes_dropped{YType::uint64, "bytes-dropped"},
    records_added{YType::uint64, "records-added"},
    records_sent{YType::uint64, "records-sent"},
    records_dropped{YType::uint64, "records-dropped"}
{

    yang_name = "protocol-stats"; yang_parent_name = "export-client"; is_top_level_class = false; has_list_ancestor = true;
}

FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::~ProtocolStats()
{
}

bool FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::has_data() const
{
    return bytes_added.is_set
	|| bytes_sent.is_set
	|| bytes_dropped.is_set
	|| records_added.is_set
	|| records_sent.is_set
	|| records_dropped.is_set;
}

bool FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes_added.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(bytes_dropped.yfilter)
	|| ydk::is_set(records_added.yfilter)
	|| ydk::is_set(records_sent.yfilter)
	|| ydk::is_set(records_dropped.yfilter);
}

std::string FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_added.is_set || is_set(bytes_added.yfilter)) leaf_name_data.push_back(bytes_added.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (bytes_dropped.is_set || is_set(bytes_dropped.yfilter)) leaf_name_data.push_back(bytes_dropped.get_name_leafdata());
    if (records_added.is_set || is_set(records_added.yfilter)) leaf_name_data.push_back(records_added.get_name_leafdata());
    if (records_sent.is_set || is_set(records_sent.yfilter)) leaf_name_data.push_back(records_sent.get_name_leafdata());
    if (records_dropped.is_set || is_set(records_dropped.yfilter)) leaf_name_data.push_back(records_dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes-added")
    {
        bytes_added = value;
        bytes_added.value_namespace = name_space;
        bytes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-dropped")
    {
        bytes_dropped = value;
        bytes_dropped.value_namespace = name_space;
        bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-added")
    {
        records_added = value;
        records_added.value_namespace = name_space;
        records_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-sent")
    {
        records_sent = value;
        records_sent.value_namespace = name_space;
        records_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "records-dropped")
    {
        records_dropped = value;
        records_dropped.value_namespace = name_space;
        records_dropped.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes-added")
    {
        bytes_added.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-dropped")
    {
        bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "records-added")
    {
        records_added.yfilter = yfilter;
    }
    if(value_path == "records-sent")
    {
        records_sent.yfilter = yfilter;
    }
    if(value_path == "records-dropped")
    {
        records_dropped.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowExportStatistics::ExportClient::ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes-added" || name == "bytes-sent" || name == "bytes-dropped" || name == "records-added" || name == "records-sent" || name == "records-dropped")
        return true;
    return false;
}

FlowMonitors::FlowCacheStatistics::FlowCacheStatistics()
    :
    name{YType::str, "name"},
    cache_size{YType::uint64, "cache-size"},
    current_entries{YType::uint64, "current-entries"},
    high_watermark{YType::uint64, "high-watermark"},
    flows_added{YType::uint64, "flows-added"},
    flows_aged{YType::uint64, "flows-aged"},
    active_flows_timed_out{YType::uint64, "active-flows-timed-out"},
    inactive_flows_timed_out{YType::uint64, "inactive-flows-timed-out"}
{

    yang_name = "flow-cache-statistics"; yang_parent_name = "flow-monitors"; is_top_level_class = false; has_list_ancestor = false;
}

FlowMonitors::FlowCacheStatistics::~FlowCacheStatistics()
{
}

bool FlowMonitors::FlowCacheStatistics::has_data() const
{
    return name.is_set
	|| cache_size.is_set
	|| current_entries.is_set
	|| high_watermark.is_set
	|| flows_added.is_set
	|| flows_aged.is_set
	|| active_flows_timed_out.is_set
	|| inactive_flows_timed_out.is_set;
}

bool FlowMonitors::FlowCacheStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(current_entries.yfilter)
	|| ydk::is_set(high_watermark.yfilter)
	|| ydk::is_set(flows_added.yfilter)
	|| ydk::is_set(flows_aged.yfilter)
	|| ydk::is_set(active_flows_timed_out.yfilter)
	|| ydk::is_set(inactive_flows_timed_out.yfilter);
}

std::string FlowMonitors::FlowCacheStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow-monitor-oper:flow-monitors/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowMonitors::FlowCacheStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-cache-statistics" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowCacheStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (current_entries.is_set || is_set(current_entries.yfilter)) leaf_name_data.push_back(current_entries.get_name_leafdata());
    if (high_watermark.is_set || is_set(high_watermark.yfilter)) leaf_name_data.push_back(high_watermark.get_name_leafdata());
    if (flows_added.is_set || is_set(flows_added.yfilter)) leaf_name_data.push_back(flows_added.get_name_leafdata());
    if (flows_aged.is_set || is_set(flows_aged.yfilter)) leaf_name_data.push_back(flows_aged.get_name_leafdata());
    if (active_flows_timed_out.is_set || is_set(active_flows_timed_out.yfilter)) leaf_name_data.push_back(active_flows_timed_out.get_name_leafdata());
    if (inactive_flows_timed_out.is_set || is_set(inactive_flows_timed_out.yfilter)) leaf_name_data.push_back(inactive_flows_timed_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowCacheStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowCacheStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowMonitors::FlowCacheStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-entries")
    {
        current_entries = value;
        current_entries.value_namespace = name_space;
        current_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-watermark")
    {
        high_watermark = value;
        high_watermark.value_namespace = name_space;
        high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flows-added")
    {
        flows_added = value;
        flows_added.value_namespace = name_space;
        flows_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flows-aged")
    {
        flows_aged = value;
        flows_aged.value_namespace = name_space;
        flows_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-flows-timed-out")
    {
        active_flows_timed_out = value;
        active_flows_timed_out.value_namespace = name_space;
        active_flows_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive-flows-timed-out")
    {
        inactive_flows_timed_out = value;
        inactive_flows_timed_out.value_namespace = name_space;
        inactive_flows_timed_out.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowCacheStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "current-entries")
    {
        current_entries.yfilter = yfilter;
    }
    if(value_path == "high-watermark")
    {
        high_watermark.yfilter = yfilter;
    }
    if(value_path == "flows-added")
    {
        flows_added.yfilter = yfilter;
    }
    if(value_path == "flows-aged")
    {
        flows_aged.yfilter = yfilter;
    }
    if(value_path == "active-flows-timed-out")
    {
        active_flows_timed_out.yfilter = yfilter;
    }
    if(value_path == "inactive-flows-timed-out")
    {
        inactive_flows_timed_out.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowCacheStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "cache-size" || name == "current-entries" || name == "high-watermark" || name == "flows-added" || name == "flows-aged" || name == "active-flows-timed-out" || name == "inactive-flows-timed-out")
        return true;
    return false;
}

FlowMonitors::FlowMonitorStatistics::FlowMonitorStatistics()
    :
    monitor_name{YType::str, "monitor-name"},
    description{YType::str, "description"},
    record_name{YType::str, "record-name"},
    active_flow_exporter{YType::str, "active-flow-exporter"},
    inactive_flow_exporter{YType::str, "inactive-flow-exporter"},
    invalid_packet_counts{YType::uint64, "invalid-packet-counts"},
    transaction_end_ager_enabled{YType::boolean, "transaction-end-ager-enabled"},
    protocol_dist_configured{YType::str, "protocol-dist-configured"},
    size_dist_configured{YType::str, "size-dist-configured"},
    inactive_timer{YType::uint32, "inactive-timer"},
    active_timer{YType::uint32, "active-timer"},
    update_timeout{YType::uint32, "update-timeout"},
    synchronized_timeout{YType::uint32, "synchronized-timeout"},
    export_spread_interval{YType::uint32, "export-spread-interval"},
    immediate_timeout{YType::uint32, "immediate-timeout"}
    	,
    cache_data(std::make_shared<FlowMonitors::FlowMonitorStatistics::CacheData>())
{
    cache_data->parent = this;

    yang_name = "flow-monitor-statistics"; yang_parent_name = "flow-monitors"; is_top_level_class = false; has_list_ancestor = false;
}

FlowMonitors::FlowMonitorStatistics::~FlowMonitorStatistics()
{
}

bool FlowMonitors::FlowMonitorStatistics::has_data() const
{
    for (auto const & leaf : active_flow_exporter.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inactive_flow_exporter.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return monitor_name.is_set
	|| description.is_set
	|| record_name.is_set
	|| invalid_packet_counts.is_set
	|| transaction_end_ager_enabled.is_set
	|| protocol_dist_configured.is_set
	|| size_dist_configured.is_set
	|| inactive_timer.is_set
	|| active_timer.is_set
	|| update_timeout.is_set
	|| synchronized_timeout.is_set
	|| export_spread_interval.is_set
	|| immediate_timeout.is_set
	|| (cache_data !=  nullptr && cache_data->has_data());
}

bool FlowMonitors::FlowMonitorStatistics::has_operation() const
{
    for (auto const & leaf : active_flow_exporter.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : inactive_flow_exporter.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(monitor_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(record_name.yfilter)
	|| ydk::is_set(active_flow_exporter.yfilter)
	|| ydk::is_set(inactive_flow_exporter.yfilter)
	|| ydk::is_set(invalid_packet_counts.yfilter)
	|| ydk::is_set(transaction_end_ager_enabled.yfilter)
	|| ydk::is_set(protocol_dist_configured.yfilter)
	|| ydk::is_set(size_dist_configured.yfilter)
	|| ydk::is_set(inactive_timer.yfilter)
	|| ydk::is_set(active_timer.yfilter)
	|| ydk::is_set(update_timeout.yfilter)
	|| ydk::is_set(synchronized_timeout.yfilter)
	|| ydk::is_set(export_spread_interval.yfilter)
	|| ydk::is_set(immediate_timeout.yfilter)
	|| (cache_data !=  nullptr && cache_data->has_operation());
}

std::string FlowMonitors::FlowMonitorStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow-monitor-oper:flow-monitors/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowMonitors::FlowMonitorStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-statistics" <<"[monitor-name='" <<monitor_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowMonitorStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_name.is_set || is_set(monitor_name.yfilter)) leaf_name_data.push_back(monitor_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (record_name.is_set || is_set(record_name.yfilter)) leaf_name_data.push_back(record_name.get_name_leafdata());
    if (invalid_packet_counts.is_set || is_set(invalid_packet_counts.yfilter)) leaf_name_data.push_back(invalid_packet_counts.get_name_leafdata());
    if (transaction_end_ager_enabled.is_set || is_set(transaction_end_ager_enabled.yfilter)) leaf_name_data.push_back(transaction_end_ager_enabled.get_name_leafdata());
    if (protocol_dist_configured.is_set || is_set(protocol_dist_configured.yfilter)) leaf_name_data.push_back(protocol_dist_configured.get_name_leafdata());
    if (size_dist_configured.is_set || is_set(size_dist_configured.yfilter)) leaf_name_data.push_back(size_dist_configured.get_name_leafdata());
    if (inactive_timer.is_set || is_set(inactive_timer.yfilter)) leaf_name_data.push_back(inactive_timer.get_name_leafdata());
    if (active_timer.is_set || is_set(active_timer.yfilter)) leaf_name_data.push_back(active_timer.get_name_leafdata());
    if (update_timeout.is_set || is_set(update_timeout.yfilter)) leaf_name_data.push_back(update_timeout.get_name_leafdata());
    if (synchronized_timeout.is_set || is_set(synchronized_timeout.yfilter)) leaf_name_data.push_back(synchronized_timeout.get_name_leafdata());
    if (export_spread_interval.is_set || is_set(export_spread_interval.yfilter)) leaf_name_data.push_back(export_spread_interval.get_name_leafdata());
    if (immediate_timeout.is_set || is_set(immediate_timeout.yfilter)) leaf_name_data.push_back(immediate_timeout.get_name_leafdata());

    auto active_flow_exporter_name_datas = active_flow_exporter.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), active_flow_exporter_name_datas.begin(), active_flow_exporter_name_datas.end());
    auto inactive_flow_exporter_name_datas = inactive_flow_exporter.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inactive_flow_exporter_name_datas.begin(), inactive_flow_exporter_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowMonitorStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache-data")
    {
        if(cache_data == nullptr)
        {
            cache_data = std::make_shared<FlowMonitors::FlowMonitorStatistics::CacheData>();
        }
        return cache_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowMonitorStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache_data != nullptr)
    {
        children["cache-data"] = cache_data;
    }

    return children;
}

void FlowMonitors::FlowMonitorStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-name")
    {
        monitor_name = value;
        monitor_name.value_namespace = name_space;
        monitor_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-name")
    {
        record_name = value;
        record_name.value_namespace = name_space;
        record_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-flow-exporter")
    {
        active_flow_exporter.append(value);
    }
    if(value_path == "inactive-flow-exporter")
    {
        inactive_flow_exporter.append(value);
    }
    if(value_path == "invalid-packet-counts")
    {
        invalid_packet_counts = value;
        invalid_packet_counts.value_namespace = name_space;
        invalid_packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-end-ager-enabled")
    {
        transaction_end_ager_enabled = value;
        transaction_end_ager_enabled.value_namespace = name_space;
        transaction_end_ager_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-dist-configured")
    {
        protocol_dist_configured = value;
        protocol_dist_configured.value_namespace = name_space;
        protocol_dist_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size-dist-configured")
    {
        size_dist_configured = value;
        size_dist_configured.value_namespace = name_space;
        size_dist_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive-timer")
    {
        inactive_timer = value;
        inactive_timer.value_namespace = name_space;
        inactive_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-timer")
    {
        active_timer = value;
        active_timer.value_namespace = name_space;
        active_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timeout")
    {
        update_timeout = value;
        update_timeout.value_namespace = name_space;
        update_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized-timeout")
    {
        synchronized_timeout = value;
        synchronized_timeout.value_namespace = name_space;
        synchronized_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-spread-interval")
    {
        export_spread_interval = value;
        export_spread_interval.value_namespace = name_space;
        export_spread_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate-timeout")
    {
        immediate_timeout = value;
        immediate_timeout.value_namespace = name_space;
        immediate_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowMonitorStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-name")
    {
        monitor_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "record-name")
    {
        record_name.yfilter = yfilter;
    }
    if(value_path == "active-flow-exporter")
    {
        active_flow_exporter.yfilter = yfilter;
    }
    if(value_path == "inactive-flow-exporter")
    {
        inactive_flow_exporter.yfilter = yfilter;
    }
    if(value_path == "invalid-packet-counts")
    {
        invalid_packet_counts.yfilter = yfilter;
    }
    if(value_path == "transaction-end-ager-enabled")
    {
        transaction_end_ager_enabled.yfilter = yfilter;
    }
    if(value_path == "protocol-dist-configured")
    {
        protocol_dist_configured.yfilter = yfilter;
    }
    if(value_path == "size-dist-configured")
    {
        size_dist_configured.yfilter = yfilter;
    }
    if(value_path == "inactive-timer")
    {
        inactive_timer.yfilter = yfilter;
    }
    if(value_path == "active-timer")
    {
        active_timer.yfilter = yfilter;
    }
    if(value_path == "update-timeout")
    {
        update_timeout.yfilter = yfilter;
    }
    if(value_path == "synchronized-timeout")
    {
        synchronized_timeout.yfilter = yfilter;
    }
    if(value_path == "export-spread-interval")
    {
        export_spread_interval.yfilter = yfilter;
    }
    if(value_path == "immediate-timeout")
    {
        immediate_timeout.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowMonitorStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-data" || name == "monitor-name" || name == "description" || name == "record-name" || name == "active-flow-exporter" || name == "inactive-flow-exporter" || name == "invalid-packet-counts" || name == "transaction-end-ager-enabled" || name == "protocol-dist-configured" || name == "size-dist-configured" || name == "inactive-timer" || name == "active-timer" || name == "update-timeout" || name == "synchronized-timeout" || name == "export-spread-interval" || name == "immediate-timeout")
        return true;
    return false;
}

FlowMonitors::FlowMonitorStatistics::CacheData::CacheData()
    :
    state{YType::enumeration, "state"},
    type{YType::str, "type"},
    cache_name{YType::str, "cache-name"},
    status{YType::str, "status"},
    num_entries{YType::uint64, "num-entries"},
    num_bytes{YType::uint64, "num-bytes"}
{

    yang_name = "cache-data"; yang_parent_name = "flow-monitor-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

FlowMonitors::FlowMonitorStatistics::CacheData::~CacheData()
{
}

bool FlowMonitors::FlowMonitorStatistics::CacheData::has_data() const
{
    return state.is_set
	|| type.is_set
	|| cache_name.is_set
	|| status.is_set
	|| num_entries.is_set
	|| num_bytes.is_set;
}

bool FlowMonitors::FlowMonitorStatistics::CacheData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cache_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(num_entries.yfilter)
	|| ydk::is_set(num_bytes.yfilter);
}

std::string FlowMonitors::FlowMonitorStatistics::CacheData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowMonitors::FlowMonitorStatistics::CacheData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cache_name.is_set || is_set(cache_name.yfilter)) leaf_name_data.push_back(cache_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (num_entries.is_set || is_set(num_entries.yfilter)) leaf_name_data.push_back(num_entries.get_name_leafdata());
    if (num_bytes.is_set || is_set(num_bytes.yfilter)) leaf_name_data.push_back(num_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowMonitors::FlowMonitorStatistics::CacheData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowMonitorStatistics::CacheData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowMonitors::FlowMonitorStatistics::CacheData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-name")
    {
        cache_name = value;
        cache_name.value_namespace = name_space;
        cache_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-entries")
    {
        num_entries = value;
        num_entries.value_namespace = name_space;
        num_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-bytes")
    {
        num_bytes = value;
        num_bytes.value_namespace = name_space;
        num_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void FlowMonitors::FlowMonitorStatistics::CacheData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cache-name")
    {
        cache_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "num-entries")
    {
        num_entries.yfilter = yfilter;
    }
    if(value_path == "num-bytes")
    {
        num_bytes.yfilter = yfilter;
    }
}

bool FlowMonitors::FlowMonitorStatistics::CacheData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type" || name == "cache-name" || name == "status" || name == "num-entries" || name == "num-bytes")
        return true;
    return false;
}

const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_ok {0, "flow-exporter-ipwrite-stats-ok"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_no_fib {1, "flow-exporter-ipwrite-stats-no-fib"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_fail_event {2, "flow-exporter-ipwrite-stats-fail-event"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_process {3, "flow-exporter-ipwrite-stats-process"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_enqueue_failed {4, "flow-exporter-ipwrite-stats-enqueue-failed"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_ipc_failed {5, "flow-exporter-ipwrite-stats-ipc-failed"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_output_failed {6, "flow-exporter-ipwrite-stats-output-failed"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_mtu_failed {7, "flow-exporter-ipwrite-stats-mtu-failed"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_encapfix_failed {8, "flow-exporter-ipwrite-stats-encapfix-failed"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_cef_off {9, "flow-exporter-ipwrite-stats-cef-off"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_other {10, "flow-exporter-ipwrite-stats-other"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_rate_limit {11, "flow-exporter-ipwrite-stats-rate-limit"};
const Enum::YLeaf FlowExporterIpwriteStatsType::flow_exporter_ipwrite_stats_no_destination {12, "flow-exporter-ipwrite-stats-no-destination"};

const Enum::YLeaf FlowMonitorCacheType::flow_monitor_cache_type_normal {0, "flow-monitor-cache-type-normal"};
const Enum::YLeaf FlowMonitorCacheType::flow_monitor_cache_type_permanent {1, "flow-monitor-cache-type-permanent"};
const Enum::YLeaf FlowMonitorCacheType::flow_monitor_cache_type_synchronized {2, "flow-monitor-cache-type-synchronized"};
const Enum::YLeaf FlowMonitorCacheType::flow_monitor_cache_type_immediate {3, "flow-monitor-cache-type-immediate"};

const Enum::YLeaf FlowMonitorCacheState::flow_monitor_cache_state_being_deleted {0, "flow-monitor-cache-state-being-deleted"};
const Enum::YLeaf FlowMonitorCacheState::flow_monitor_cache_state_being_allocated {1, "flow-monitor-cache-state-being-allocated"};
const Enum::YLeaf FlowMonitorCacheState::flow_monitor_cache_state_not_allocated {2, "flow-monitor-cache-state-not-allocated"};


}
}

