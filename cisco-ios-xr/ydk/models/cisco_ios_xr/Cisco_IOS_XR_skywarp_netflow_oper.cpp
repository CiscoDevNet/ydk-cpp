
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_skywarp_netflow_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_skywarp_netflow_oper {

NetFlow::NetFlow()
    :
    statistics(std::make_shared<NetFlow::Statistics>())
{
    statistics->parent = this;

    yang_name = "net-flow"; yang_parent_name = "Cisco-IOS-XR-skywarp-netflow-oper";
}

NetFlow::~NetFlow()
{
}

bool NetFlow::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool NetFlow::has_operation() const
{
    return is_set(operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skywarp-netflow-oper:net-flow";

    return path_buffer.str();

}

const EntityPath NetFlow::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<NetFlow::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void NetFlow::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> NetFlow::clone_ptr() const
{
    return std::make_shared<NetFlow>();
}

std::string NetFlow::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NetFlow::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NetFlow::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

NetFlow::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "net-flow";
}

NetFlow::Statistics::~Statistics()
{
}

bool NetFlow::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-skywarp-netflow-oper:net-flow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::Statistics::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Statistic()
    :
    node{YType::str, "node"}
    	,
    producer(std::make_shared<NetFlow::Statistics::Statistic::Producer>())
	,server(std::make_shared<NetFlow::Statistics::Statistic::Server>())
{
    producer->parent = this;

    server->parent = this;

    yang_name = "statistic"; yang_parent_name = "statistics";
}

NetFlow::Statistics::Statistic::~Statistic()
{
}

bool NetFlow::Statistics::Statistic::has_data() const
{
    return node.is_set
	|| (producer !=  nullptr && producer->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool NetFlow::Statistics::Statistic::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (producer !=  nullptr && producer->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string NetFlow::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-skywarp-netflow-oper:net-flow/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "producer")
    {
        if(producer == nullptr)
        {
            producer = std::make_shared<NetFlow::Statistics::Statistic::Producer>();
        }
        return producer;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<NetFlow::Statistics::Statistic::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(producer != nullptr)
    {
        children["producer"] = producer;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void NetFlow::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

NetFlow::Statistics::Statistic::Producer::Producer()
    :
    statistics(std::make_shared<NetFlow::Statistics::Statistic::Producer::Statistics_>())
{
    statistics->parent = this;

    yang_name = "producer"; yang_parent_name = "statistic";
}

NetFlow::Statistics::Statistic::Producer::~Producer()
{
}

bool NetFlow::Statistics::Statistic::Producer::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool NetFlow::Statistics::Statistic::Producer::has_operation() const
{
    return is_set(operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string NetFlow::Statistics::Statistic::Producer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producer";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Producer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Producer' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Producer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<NetFlow::Statistics::Statistic::Producer::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Producer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void NetFlow::Statistics::Statistic::Producer::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Producer::Statistics_::Statistics_()
    :
    drops_no_space{YType::uint64, "drops-no-space"},
    drops_others{YType::uint64, "drops-others"},
    ethernet_pkts{YType::uint64, "ethernet-pkts"},
    flow_packet_counts{YType::uint64, "flow-packet-counts"},
    last_cleared{YType::str, "last-cleared"},
    spp_rx_counts{YType::uint64, "spp-rx-counts"},
    unknown_ingress_flows{YType::uint64, "unknown-ingress-flows"},
    waiting_servers{YType::uint64, "waiting-servers"}
{
    yang_name = "statistics"; yang_parent_name = "producer";
}

NetFlow::Statistics::Statistic::Producer::Statistics_::~Statistics_()
{
}

bool NetFlow::Statistics::Statistic::Producer::Statistics_::has_data() const
{
    return drops_no_space.is_set
	|| drops_others.is_set
	|| ethernet_pkts.is_set
	|| flow_packet_counts.is_set
	|| last_cleared.is_set
	|| spp_rx_counts.is_set
	|| unknown_ingress_flows.is_set
	|| waiting_servers.is_set;
}

bool NetFlow::Statistics::Statistic::Producer::Statistics_::has_operation() const
{
    return is_set(operation)
	|| is_set(drops_no_space.operation)
	|| is_set(drops_others.operation)
	|| is_set(ethernet_pkts.operation)
	|| is_set(flow_packet_counts.operation)
	|| is_set(last_cleared.operation)
	|| is_set(spp_rx_counts.operation)
	|| is_set(unknown_ingress_flows.operation)
	|| is_set(waiting_servers.operation);
}

std::string NetFlow::Statistics::Statistic::Producer::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Producer::Statistics_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics_' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops_no_space.is_set || is_set(drops_no_space.operation)) leaf_name_data.push_back(drops_no_space.get_name_leafdata());
    if (drops_others.is_set || is_set(drops_others.operation)) leaf_name_data.push_back(drops_others.get_name_leafdata());
    if (ethernet_pkts.is_set || is_set(ethernet_pkts.operation)) leaf_name_data.push_back(ethernet_pkts.get_name_leafdata());
    if (flow_packet_counts.is_set || is_set(flow_packet_counts.operation)) leaf_name_data.push_back(flow_packet_counts.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (spp_rx_counts.is_set || is_set(spp_rx_counts.operation)) leaf_name_data.push_back(spp_rx_counts.get_name_leafdata());
    if (unknown_ingress_flows.is_set || is_set(unknown_ingress_flows.operation)) leaf_name_data.push_back(unknown_ingress_flows.get_name_leafdata());
    if (waiting_servers.is_set || is_set(waiting_servers.operation)) leaf_name_data.push_back(waiting_servers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Producer::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Producer::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::Statistics::Statistic::Producer::Statistics_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drops-no-space")
    {
        drops_no_space = value;
    }
    if(value_path == "drops-others")
    {
        drops_others = value;
    }
    if(value_path == "ethernet-pkts")
    {
        ethernet_pkts = value;
    }
    if(value_path == "flow-packet-counts")
    {
        flow_packet_counts = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "spp-rx-counts")
    {
        spp_rx_counts = value;
    }
    if(value_path == "unknown-ingress-flows")
    {
        unknown_ingress_flows = value;
    }
    if(value_path == "waiting-servers")
    {
        waiting_servers = value;
    }
}

NetFlow::Statistics::Statistic::Server::Server()
    :
    flow_exporters(std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters>())
{
    flow_exporters->parent = this;

    yang_name = "server"; yang_parent_name = "statistic";
}

NetFlow::Statistics::Statistic::Server::~Server()
{
}

bool NetFlow::Statistics::Statistic::Server::has_data() const
{
    return (flow_exporters !=  nullptr && flow_exporters->has_data());
}

bool NetFlow::Statistics::Statistic::Server::has_operation() const
{
    return is_set(operation)
	|| (flow_exporters !=  nullptr && flow_exporters->has_operation());
}

std::string NetFlow::Statistics::Statistic::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-exporters")
    {
        if(flow_exporters == nullptr)
        {
            flow_exporters = std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters>();
        }
        return flow_exporters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_exporters != nullptr)
    {
        children["flow-exporters"] = flow_exporters;
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporters()
{
    yang_name = "flow-exporters"; yang_parent_name = "server";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::~FlowExporters()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::has_data() const
{
    for (std::size_t index=0; index<flow_exporter.size(); index++)
    {
        if(flow_exporter[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::has_operation() const
{
    for (std::size_t index=0; index<flow_exporter.size(); index++)
    {
        if(flow_exporter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporters";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowExporters' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Server::FlowExporters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-exporter")
    {
        for(auto const & c : flow_exporter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter>();
        c->parent = this;
        flow_exporter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Server::FlowExporters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_exporter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::FlowExporter()
    :
    exporter_name{YType::str, "exporter-name"}
    	,
    exporter(std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter>())
{
    exporter->parent = this;

    yang_name = "flow-exporter"; yang_parent_name = "flow-exporters";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::~FlowExporter()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::has_data() const
{
    return exporter_name.is_set
	|| (exporter !=  nullptr && exporter->has_data());
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::has_operation() const
{
    return is_set(operation)
	|| is_set(exporter_name.operation)
	|| (exporter !=  nullptr && exporter->has_operation());
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter" <<"[exporter-name='" <<exporter_name <<"']";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowExporter' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.operation)) leaf_name_data.push_back(exporter_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter>();
        }
        return exporter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exporter != nullptr)
    {
        children["exporter"] = exporter;
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
    }
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Exporter()
{
    yang_name = "exporter"; yang_parent_name = "flow-exporter";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::~Exporter()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exporter' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::set_value(const std::string & value_path, std::string value)
{
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Statistic_()
    :
    memory_usage{YType::uint32, "memory-usage"},
    name{YType::str, "name"},
    used_by_flow_monitor{YType::str, "used-by-flow-monitor"}
{
    yang_name = "statistic"; yang_parent_name = "exporter";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::~Statistic_()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::has_data() const
{
    for (std::size_t index=0; index<collector.size(); index++)
    {
        if(collector[index]->has_data())
            return true;
    }
    for (auto const & leaf : used_by_flow_monitor.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return memory_usage.is_set
	|| name.is_set;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::has_operation() const
{
    for (std::size_t index=0; index<collector.size(); index++)
    {
        if(collector[index]->has_operation())
            return true;
    }
    for (auto const & leaf : used_by_flow_monitor.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(memory_usage.operation)
	|| is_set(name.operation)
	|| is_set(used_by_flow_monitor.operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistic_' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.operation)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto used_by_flow_monitor_name_datas = used_by_flow_monitor.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), used_by_flow_monitor_name_datas.begin(), used_by_flow_monitor_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collector")
    {
        for(auto const & c : collector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector>();
        c->parent = this;
        collector.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : collector)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "used-by-flow-monitor")
    {
        used_by_flow_monitor.append(value);
    }
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::Collector()
    :
    bytes_dropped{YType::uint64, "bytes-dropped"},
    bytes_sent{YType::uint64, "bytes-sent"},
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    exporter_state{YType::str, "exporter-state"},
    flow_bytes_dropped{YType::uint64, "flow-bytes-dropped"},
    flow_bytes_sent{YType::uint64, "flow-bytes-sent"},
    flows_dropped{YType::uint64, "flows-dropped"},
    flows_sent{YType::uint64, "flows-sent"},
    last_hour_bytes_sent{YType::uint64, "last-hour-bytes-sent"},
    last_hour_flows_sent{YType::uint64, "last-hour-flows-sent"},
    last_hour_packest_sent{YType::uint64, "last-hour-packest-sent"},
    last_minute_bytes_sent{YType::uint64, "last-minute-bytes-sent"},
    last_minute_flows_sent{YType::uint64, "last-minute-flows-sent"},
    last_minute_packets{YType::uint64, "last-minute-packets"},
    last_second_bytes_sent{YType::uint64, "last-second-bytes-sent"},
    last_second_flows_sent{YType::uint64, "last-second-flows-sent"},
    last_second_packets_sent{YType::uint64, "last-second-packets-sent"},
    option_data_bytes_dropped{YType::uint64, "option-data-bytes-dropped"},
    option_data_bytes_sent{YType::uint64, "option-data-bytes-sent"},
    option_data_dropped{YType::uint64, "option-data-dropped"},
    option_data_sent{YType::uint64, "option-data-sent"},
    option_template_bytes_dropped{YType::uint64, "option-template-bytes-dropped"},
    option_template_bytes_sent{YType::uint64, "option-template-bytes-sent"},
    option_templates_dropped{YType::uint64, "option-templates-dropped"},
    option_templates_sent{YType::uint64, "option-templates-sent"},
    packets_dropped{YType::uint64, "packets-dropped"},
    packets_sent{YType::uint64, "packets-sent"},
    souce_port{YType::uint16, "souce-port"},
    source_address{YType::str, "source-address"},
    template_bytes_dropped{YType::uint64, "template-bytes-dropped"},
    template_bytes_sent{YType::uint64, "template-bytes-sent"},
    templates_dropped{YType::uint64, "templates-dropped"},
    templates_sent{YType::uint64, "templates-sent"},
    transport_protocol{YType::str, "transport-protocol"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "collector"; yang_parent_name = "statistic";
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::~Collector()
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::has_data() const
{
    return bytes_dropped.is_set
	|| bytes_sent.is_set
	|| destination_address.is_set
	|| destination_port.is_set
	|| exporter_state.is_set
	|| flow_bytes_dropped.is_set
	|| flow_bytes_sent.is_set
	|| flows_dropped.is_set
	|| flows_sent.is_set
	|| last_hour_bytes_sent.is_set
	|| last_hour_flows_sent.is_set
	|| last_hour_packest_sent.is_set
	|| last_minute_bytes_sent.is_set
	|| last_minute_flows_sent.is_set
	|| last_minute_packets.is_set
	|| last_second_bytes_sent.is_set
	|| last_second_flows_sent.is_set
	|| last_second_packets_sent.is_set
	|| option_data_bytes_dropped.is_set
	|| option_data_bytes_sent.is_set
	|| option_data_dropped.is_set
	|| option_data_sent.is_set
	|| option_template_bytes_dropped.is_set
	|| option_template_bytes_sent.is_set
	|| option_templates_dropped.is_set
	|| option_templates_sent.is_set
	|| packets_dropped.is_set
	|| packets_sent.is_set
	|| souce_port.is_set
	|| source_address.is_set
	|| template_bytes_dropped.is_set
	|| template_bytes_sent.is_set
	|| templates_dropped.is_set
	|| templates_sent.is_set
	|| transport_protocol.is_set
	|| vrf_name.is_set;
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes_dropped.operation)
	|| is_set(bytes_sent.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(exporter_state.operation)
	|| is_set(flow_bytes_dropped.operation)
	|| is_set(flow_bytes_sent.operation)
	|| is_set(flows_dropped.operation)
	|| is_set(flows_sent.operation)
	|| is_set(last_hour_bytes_sent.operation)
	|| is_set(last_hour_flows_sent.operation)
	|| is_set(last_hour_packest_sent.operation)
	|| is_set(last_minute_bytes_sent.operation)
	|| is_set(last_minute_flows_sent.operation)
	|| is_set(last_minute_packets.operation)
	|| is_set(last_second_bytes_sent.operation)
	|| is_set(last_second_flows_sent.operation)
	|| is_set(last_second_packets_sent.operation)
	|| is_set(option_data_bytes_dropped.operation)
	|| is_set(option_data_bytes_sent.operation)
	|| is_set(option_data_dropped.operation)
	|| is_set(option_data_sent.operation)
	|| is_set(option_template_bytes_dropped.operation)
	|| is_set(option_template_bytes_sent.operation)
	|| is_set(option_templates_dropped.operation)
	|| is_set(option_templates_sent.operation)
	|| is_set(packets_dropped.operation)
	|| is_set(packets_sent.operation)
	|| is_set(souce_port.operation)
	|| is_set(source_address.operation)
	|| is_set(template_bytes_dropped.operation)
	|| is_set(template_bytes_sent.operation)
	|| is_set(templates_dropped.operation)
	|| is_set(templates_sent.operation)
	|| is_set(transport_protocol.operation)
	|| is_set(vrf_name.operation);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector";

    return path_buffer.str();

}

const EntityPath NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Collector' in Cisco_IOS_XR_skywarp_netflow_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_dropped.is_set || is_set(bytes_dropped.operation)) leaf_name_data.push_back(bytes_dropped.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.operation)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (exporter_state.is_set || is_set(exporter_state.operation)) leaf_name_data.push_back(exporter_state.get_name_leafdata());
    if (flow_bytes_dropped.is_set || is_set(flow_bytes_dropped.operation)) leaf_name_data.push_back(flow_bytes_dropped.get_name_leafdata());
    if (flow_bytes_sent.is_set || is_set(flow_bytes_sent.operation)) leaf_name_data.push_back(flow_bytes_sent.get_name_leafdata());
    if (flows_dropped.is_set || is_set(flows_dropped.operation)) leaf_name_data.push_back(flows_dropped.get_name_leafdata());
    if (flows_sent.is_set || is_set(flows_sent.operation)) leaf_name_data.push_back(flows_sent.get_name_leafdata());
    if (last_hour_bytes_sent.is_set || is_set(last_hour_bytes_sent.operation)) leaf_name_data.push_back(last_hour_bytes_sent.get_name_leafdata());
    if (last_hour_flows_sent.is_set || is_set(last_hour_flows_sent.operation)) leaf_name_data.push_back(last_hour_flows_sent.get_name_leafdata());
    if (last_hour_packest_sent.is_set || is_set(last_hour_packest_sent.operation)) leaf_name_data.push_back(last_hour_packest_sent.get_name_leafdata());
    if (last_minute_bytes_sent.is_set || is_set(last_minute_bytes_sent.operation)) leaf_name_data.push_back(last_minute_bytes_sent.get_name_leafdata());
    if (last_minute_flows_sent.is_set || is_set(last_minute_flows_sent.operation)) leaf_name_data.push_back(last_minute_flows_sent.get_name_leafdata());
    if (last_minute_packets.is_set || is_set(last_minute_packets.operation)) leaf_name_data.push_back(last_minute_packets.get_name_leafdata());
    if (last_second_bytes_sent.is_set || is_set(last_second_bytes_sent.operation)) leaf_name_data.push_back(last_second_bytes_sent.get_name_leafdata());
    if (last_second_flows_sent.is_set || is_set(last_second_flows_sent.operation)) leaf_name_data.push_back(last_second_flows_sent.get_name_leafdata());
    if (last_second_packets_sent.is_set || is_set(last_second_packets_sent.operation)) leaf_name_data.push_back(last_second_packets_sent.get_name_leafdata());
    if (option_data_bytes_dropped.is_set || is_set(option_data_bytes_dropped.operation)) leaf_name_data.push_back(option_data_bytes_dropped.get_name_leafdata());
    if (option_data_bytes_sent.is_set || is_set(option_data_bytes_sent.operation)) leaf_name_data.push_back(option_data_bytes_sent.get_name_leafdata());
    if (option_data_dropped.is_set || is_set(option_data_dropped.operation)) leaf_name_data.push_back(option_data_dropped.get_name_leafdata());
    if (option_data_sent.is_set || is_set(option_data_sent.operation)) leaf_name_data.push_back(option_data_sent.get_name_leafdata());
    if (option_template_bytes_dropped.is_set || is_set(option_template_bytes_dropped.operation)) leaf_name_data.push_back(option_template_bytes_dropped.get_name_leafdata());
    if (option_template_bytes_sent.is_set || is_set(option_template_bytes_sent.operation)) leaf_name_data.push_back(option_template_bytes_sent.get_name_leafdata());
    if (option_templates_dropped.is_set || is_set(option_templates_dropped.operation)) leaf_name_data.push_back(option_templates_dropped.get_name_leafdata());
    if (option_templates_sent.is_set || is_set(option_templates_sent.operation)) leaf_name_data.push_back(option_templates_sent.get_name_leafdata());
    if (packets_dropped.is_set || is_set(packets_dropped.operation)) leaf_name_data.push_back(packets_dropped.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (souce_port.is_set || is_set(souce_port.operation)) leaf_name_data.push_back(souce_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (template_bytes_dropped.is_set || is_set(template_bytes_dropped.operation)) leaf_name_data.push_back(template_bytes_dropped.get_name_leafdata());
    if (template_bytes_sent.is_set || is_set(template_bytes_sent.operation)) leaf_name_data.push_back(template_bytes_sent.get_name_leafdata());
    if (templates_dropped.is_set || is_set(templates_dropped.operation)) leaf_name_data.push_back(templates_dropped.get_name_leafdata());
    if (templates_sent.is_set || is_set(templates_sent.operation)) leaf_name_data.push_back(templates_sent.get_name_leafdata());
    if (transport_protocol.is_set || is_set(transport_protocol.operation)) leaf_name_data.push_back(transport_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes-dropped")
    {
        bytes_dropped = value;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "exporter-state")
    {
        exporter_state = value;
    }
    if(value_path == "flow-bytes-dropped")
    {
        flow_bytes_dropped = value;
    }
    if(value_path == "flow-bytes-sent")
    {
        flow_bytes_sent = value;
    }
    if(value_path == "flows-dropped")
    {
        flows_dropped = value;
    }
    if(value_path == "flows-sent")
    {
        flows_sent = value;
    }
    if(value_path == "last-hour-bytes-sent")
    {
        last_hour_bytes_sent = value;
    }
    if(value_path == "last-hour-flows-sent")
    {
        last_hour_flows_sent = value;
    }
    if(value_path == "last-hour-packest-sent")
    {
        last_hour_packest_sent = value;
    }
    if(value_path == "last-minute-bytes-sent")
    {
        last_minute_bytes_sent = value;
    }
    if(value_path == "last-minute-flows-sent")
    {
        last_minute_flows_sent = value;
    }
    if(value_path == "last-minute-packets")
    {
        last_minute_packets = value;
    }
    if(value_path == "last-second-bytes-sent")
    {
        last_second_bytes_sent = value;
    }
    if(value_path == "last-second-flows-sent")
    {
        last_second_flows_sent = value;
    }
    if(value_path == "last-second-packets-sent")
    {
        last_second_packets_sent = value;
    }
    if(value_path == "option-data-bytes-dropped")
    {
        option_data_bytes_dropped = value;
    }
    if(value_path == "option-data-bytes-sent")
    {
        option_data_bytes_sent = value;
    }
    if(value_path == "option-data-dropped")
    {
        option_data_dropped = value;
    }
    if(value_path == "option-data-sent")
    {
        option_data_sent = value;
    }
    if(value_path == "option-template-bytes-dropped")
    {
        option_template_bytes_dropped = value;
    }
    if(value_path == "option-template-bytes-sent")
    {
        option_template_bytes_sent = value;
    }
    if(value_path == "option-templates-dropped")
    {
        option_templates_dropped = value;
    }
    if(value_path == "option-templates-sent")
    {
        option_templates_sent = value;
    }
    if(value_path == "packets-dropped")
    {
        packets_dropped = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "souce-port")
    {
        souce_port = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "template-bytes-dropped")
    {
        template_bytes_dropped = value;
    }
    if(value_path == "template-bytes-sent")
    {
        template_bytes_sent = value;
    }
    if(value_path == "templates-dropped")
    {
        templates_dropped = value;
    }
    if(value_path == "templates-sent")
    {
        templates_sent = value;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}


}
}

