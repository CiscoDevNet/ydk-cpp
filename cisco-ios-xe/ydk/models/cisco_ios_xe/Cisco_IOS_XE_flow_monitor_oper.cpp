
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_flow_monitor_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_flow_monitor_oper {

FlowMonitors::FlowMonitors()
{
    yang_name = "flow-monitors"; yang_parent_name = "Cisco-IOS-XE-flow-monitor-oper";
}

FlowMonitors::~FlowMonitors()
{
}

bool FlowMonitors::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_.size(); index++)
    {
        if(flow_monitor_[index]->has_data())
            return true;
    }
    return false;
}

bool FlowMonitors::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_.size(); index++)
    {
        if(flow_monitor_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FlowMonitors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow-monitor-oper:flow-monitors";

    return path_buffer.str();

}

const EntityPath FlowMonitors::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> FlowMonitors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor")
    {
        for(auto const & c : flow_monitor_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FlowMonitors::FlowMonitor>();
        c->parent = this;
        flow_monitor_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FlowMonitors::set_value(const std::string & value_path, std::string value)
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

FlowMonitors::FlowMonitor::FlowMonitor()
    :
    name{YType::str, "name"},
    time_collected{YType::uint64, "time-collected"}
    	,
    flows_(std::make_shared<FlowMonitors::FlowMonitor::Flows>())
{
    flows_->parent = this;

    yang_name = "flow-monitor"; yang_parent_name = "flow-monitors";
}

FlowMonitors::FlowMonitor::~FlowMonitor()
{
}

bool FlowMonitors::FlowMonitor::has_data() const
{
    return name.is_set
	|| time_collected.is_set
	|| (flows_ !=  nullptr && flows_->has_data());
}

bool FlowMonitors::FlowMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(time_collected.operation)
	|| (flows_ !=  nullptr && flows_->has_operation());
}

std::string FlowMonitors::FlowMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath FlowMonitors::FlowMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-flow-monitor-oper:flow-monitors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (time_collected.is_set || is_set(time_collected.operation)) leaf_name_data.push_back(time_collected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FlowMonitors::FlowMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flows")
    {
        if(flows_ == nullptr)
        {
            flows_ = std::make_shared<FlowMonitors::FlowMonitor::Flows>();
        }
        return flows_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flows_ != nullptr)
    {
        children["flows"] = flows_;
    }

    return children;
}

void FlowMonitors::FlowMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "time-collected")
    {
        time_collected = value;
    }
}

FlowMonitors::FlowMonitor::Flows::Flows()
{
    yang_name = "flows"; yang_parent_name = "flow-monitor";
}

FlowMonitors::FlowMonitor::Flows::~Flows()
{
}

bool FlowMonitors::FlowMonitor::Flows::has_data() const
{
    for (std::size_t index=0; index<flow_.size(); index++)
    {
        if(flow_[index]->has_data())
            return true;
    }
    return false;
}

bool FlowMonitors::FlowMonitor::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow_.size(); index++)
    {
        if(flow_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FlowMonitors::FlowMonitor::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";

    return path_buffer.str();

}

const EntityPath FlowMonitors::FlowMonitor::Flows::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flows' in Cisco_IOS_XE_flow_monitor_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FlowMonitors::FlowMonitor::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        for(auto const & c : flow_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<FlowMonitors::FlowMonitor::Flows::Flow>();
        c->parent = this;
        flow_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowMonitors::FlowMonitor::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void FlowMonitors::FlowMonitor::Flows::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "flow"; yang_parent_name = "flows";
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
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_input.operation)
	|| is_set(is_multicast.operation)
	|| is_set(vrf_id_input.operation)
	|| is_set(source_port.operation)
	|| is_set(destination_port.operation)
	|| is_set(ip_tos.operation)
	|| is_set(ip_protocol.operation)
	|| is_set(bytes.operation)
	|| is_set(interface_output.operation)
	|| is_set(packets.operation);
}

std::string FlowMonitors::FlowMonitor::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[interface-input='" <<interface_input <<"']" <<"[is-multicast='" <<is_multicast <<"']" <<"[vrf-id-input='" <<vrf_id_input <<"']" <<"[source-port='" <<source_port <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[ip-tos='" <<ip_tos <<"']" <<"[ip-protocol='" <<ip_protocol <<"']";

    return path_buffer.str();

}

const EntityPath FlowMonitors::FlowMonitor::Flows::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_flow_monitor_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_input.is_set || is_set(interface_input.operation)) leaf_name_data.push_back(interface_input.get_name_leafdata());
    if (is_multicast.is_set || is_set(is_multicast.operation)) leaf_name_data.push_back(is_multicast.get_name_leafdata());
    if (vrf_id_input.is_set || is_set(vrf_id_input.operation)) leaf_name_data.push_back(vrf_id_input.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_protocol.is_set || is_set(ip_protocol.operation)) leaf_name_data.push_back(ip_protocol.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (interface_output.is_set || is_set(interface_output.operation)) leaf_name_data.push_back(interface_output.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void FlowMonitors::FlowMonitor::Flows::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-input")
    {
        interface_input = value;
    }
    if(value_path == "is-multicast")
    {
        is_multicast = value;
    }
    if(value_path == "vrf-id-input")
    {
        vrf_id_input = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "ip-protocol")
    {
        ip_protocol = value;
    }
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "interface-output")
    {
        interface_output = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}


}
}

