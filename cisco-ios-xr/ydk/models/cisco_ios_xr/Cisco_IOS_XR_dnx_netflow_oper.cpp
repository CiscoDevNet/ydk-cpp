
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dnx_netflow_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dnx_netflow_oper {

NetFlow::NetFlow()
    :
    statistics(std::make_shared<NetFlow::Statistics>())
{
    statistics->parent = this;

    yang_name = "net-flow"; yang_parent_name = "Cisco-IOS-XR-dnx-netflow-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void NetFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> NetFlow::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NetFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

NetFlow::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string NetFlow::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void NetFlow::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic")
        return true;
    return false;
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

    yang_name = "statistic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (producer !=  nullptr && producer->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string NetFlow::Statistics::Statistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-netflow-oper:net-flow/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string NetFlow::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::Statistics::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool NetFlow::Statistics::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producer" || name == "server" || name == "node")
        return true;
    return false;
}

NetFlow::Statistics::Statistic::Producer::Producer()
    :
    statistics(std::make_shared<NetFlow::Statistics::Statistic::Producer::Statistics_>())
{
    statistics->parent = this;

    yang_name = "producer"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string NetFlow::Statistics::Statistic::Producer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Producer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Producer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::Statistics::Statistic::Producer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::Statistics::Statistic::Producer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

NetFlow::Statistics::Statistic::Producer::Statistics_::Statistics_()
    :
    drops_no_space{YType::uint64, "drops-no-space"},
    drops_others{YType::uint64, "drops-others"},
    ipv4_egress_flows{YType::uint64, "ipv4-egress-flows"},
    ipv4_ingress_flows{YType::uint64, "ipv4-ingress-flows"},
    ipv6_egress_flows{YType::uint64, "ipv6-egress-flows"},
    ipv6_ingress_flows{YType::uint64, "ipv6-ingress-flows"},
    last_cleared{YType::str, "last-cleared"},
    mpls_egress_flows{YType::uint64, "mpls-egress-flows"},
    mpls_ingress_flows{YType::uint64, "mpls-ingress-flows"},
    unknown_egress_flows{YType::uint64, "unknown-egress-flows"},
    unknown_ingress_flows{YType::uint64, "unknown-ingress-flows"},
    waiting_servers{YType::uint64, "waiting-servers"}
{

    yang_name = "statistics"; yang_parent_name = "producer"; is_top_level_class = false; has_list_ancestor = true;
}

NetFlow::Statistics::Statistic::Producer::Statistics_::~Statistics_()
{
}

bool NetFlow::Statistics::Statistic::Producer::Statistics_::has_data() const
{
    return drops_no_space.is_set
	|| drops_others.is_set
	|| ipv4_egress_flows.is_set
	|| ipv4_ingress_flows.is_set
	|| ipv6_egress_flows.is_set
	|| ipv6_ingress_flows.is_set
	|| last_cleared.is_set
	|| mpls_egress_flows.is_set
	|| mpls_ingress_flows.is_set
	|| unknown_egress_flows.is_set
	|| unknown_ingress_flows.is_set
	|| waiting_servers.is_set;
}

bool NetFlow::Statistics::Statistic::Producer::Statistics_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops_no_space.yfilter)
	|| ydk::is_set(drops_others.yfilter)
	|| ydk::is_set(ipv4_egress_flows.yfilter)
	|| ydk::is_set(ipv4_ingress_flows.yfilter)
	|| ydk::is_set(ipv6_egress_flows.yfilter)
	|| ydk::is_set(ipv6_ingress_flows.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(mpls_egress_flows.yfilter)
	|| ydk::is_set(mpls_ingress_flows.yfilter)
	|| ydk::is_set(unknown_egress_flows.yfilter)
	|| ydk::is_set(unknown_ingress_flows.yfilter)
	|| ydk::is_set(waiting_servers.yfilter);
}

std::string NetFlow::Statistics::Statistic::Producer::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Producer::Statistics_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops_no_space.is_set || is_set(drops_no_space.yfilter)) leaf_name_data.push_back(drops_no_space.get_name_leafdata());
    if (drops_others.is_set || is_set(drops_others.yfilter)) leaf_name_data.push_back(drops_others.get_name_leafdata());
    if (ipv4_egress_flows.is_set || is_set(ipv4_egress_flows.yfilter)) leaf_name_data.push_back(ipv4_egress_flows.get_name_leafdata());
    if (ipv4_ingress_flows.is_set || is_set(ipv4_ingress_flows.yfilter)) leaf_name_data.push_back(ipv4_ingress_flows.get_name_leafdata());
    if (ipv6_egress_flows.is_set || is_set(ipv6_egress_flows.yfilter)) leaf_name_data.push_back(ipv6_egress_flows.get_name_leafdata());
    if (ipv6_ingress_flows.is_set || is_set(ipv6_ingress_flows.yfilter)) leaf_name_data.push_back(ipv6_ingress_flows.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (mpls_egress_flows.is_set || is_set(mpls_egress_flows.yfilter)) leaf_name_data.push_back(mpls_egress_flows.get_name_leafdata());
    if (mpls_ingress_flows.is_set || is_set(mpls_ingress_flows.yfilter)) leaf_name_data.push_back(mpls_ingress_flows.get_name_leafdata());
    if (unknown_egress_flows.is_set || is_set(unknown_egress_flows.yfilter)) leaf_name_data.push_back(unknown_egress_flows.get_name_leafdata());
    if (unknown_ingress_flows.is_set || is_set(unknown_ingress_flows.yfilter)) leaf_name_data.push_back(unknown_ingress_flows.get_name_leafdata());
    if (waiting_servers.is_set || is_set(waiting_servers.yfilter)) leaf_name_data.push_back(waiting_servers.get_name_leafdata());

    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Producer::Statistics_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops-no-space")
    {
        drops_no_space = value;
        drops_no_space.value_namespace = name_space;
        drops_no_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drops-others")
    {
        drops_others = value;
        drops_others.value_namespace = name_space;
        drops_others.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-egress-flows")
    {
        ipv4_egress_flows = value;
        ipv4_egress_flows.value_namespace = name_space;
        ipv4_egress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-ingress-flows")
    {
        ipv4_ingress_flows = value;
        ipv4_ingress_flows.value_namespace = name_space;
        ipv4_ingress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-egress-flows")
    {
        ipv6_egress_flows = value;
        ipv6_egress_flows.value_namespace = name_space;
        ipv6_egress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-ingress-flows")
    {
        ipv6_ingress_flows = value;
        ipv6_ingress_flows.value_namespace = name_space;
        ipv6_ingress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-egress-flows")
    {
        mpls_egress_flows = value;
        mpls_egress_flows.value_namespace = name_space;
        mpls_egress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-ingress-flows")
    {
        mpls_ingress_flows = value;
        mpls_ingress_flows.value_namespace = name_space;
        mpls_ingress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-egress-flows")
    {
        unknown_egress_flows = value;
        unknown_egress_flows.value_namespace = name_space;
        unknown_egress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-ingress-flows")
    {
        unknown_ingress_flows = value;
        unknown_ingress_flows.value_namespace = name_space;
        unknown_ingress_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-servers")
    {
        waiting_servers = value;
        waiting_servers.value_namespace = name_space;
        waiting_servers.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::Statistics::Statistic::Producer::Statistics_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops-no-space")
    {
        drops_no_space.yfilter = yfilter;
    }
    if(value_path == "drops-others")
    {
        drops_others.yfilter = yfilter;
    }
    if(value_path == "ipv4-egress-flows")
    {
        ipv4_egress_flows.yfilter = yfilter;
    }
    if(value_path == "ipv4-ingress-flows")
    {
        ipv4_ingress_flows.yfilter = yfilter;
    }
    if(value_path == "ipv6-egress-flows")
    {
        ipv6_egress_flows.yfilter = yfilter;
    }
    if(value_path == "ipv6-ingress-flows")
    {
        ipv6_ingress_flows.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "mpls-egress-flows")
    {
        mpls_egress_flows.yfilter = yfilter;
    }
    if(value_path == "mpls-ingress-flows")
    {
        mpls_ingress_flows.yfilter = yfilter;
    }
    if(value_path == "unknown-egress-flows")
    {
        unknown_egress_flows.yfilter = yfilter;
    }
    if(value_path == "unknown-ingress-flows")
    {
        unknown_ingress_flows.yfilter = yfilter;
    }
    if(value_path == "waiting-servers")
    {
        waiting_servers.yfilter = yfilter;
    }
}

bool NetFlow::Statistics::Statistic::Producer::Statistics_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops-no-space" || name == "drops-others" || name == "ipv4-egress-flows" || name == "ipv4-ingress-flows" || name == "ipv6-egress-flows" || name == "ipv6-ingress-flows" || name == "last-cleared" || name == "mpls-egress-flows" || name == "mpls-ingress-flows" || name == "unknown-egress-flows" || name == "unknown-ingress-flows" || name == "waiting-servers")
        return true;
    return false;
}

NetFlow::Statistics::Statistic::Server::Server()
    :
    flow_exporters(std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters>())
{
    flow_exporters->parent = this;

    yang_name = "server"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (flow_exporters !=  nullptr && flow_exporters->has_operation());
}

std::string NetFlow::Statistics::Statistic::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::Statistics::Statistic::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::Statistics::Statistic::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-exporters")
        return true;
    return false;
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporters()
{

    yang_name = "flow-exporters"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Server::FlowExporters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Server::FlowExporters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-exporter")
        return true;
    return false;
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::FlowExporter()
    :
    exporter_name{YType::str, "exporter-name"}
    	,
    exporter(std::make_shared<NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter>())
{
    exporter->parent = this;

    yang_name = "flow-exporter"; yang_parent_name = "flow-exporters"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(exporter_name.yfilter)
	|| (exporter !=  nullptr && exporter->has_operation());
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-exporter" <<"[exporter-name='" <<exporter_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exporter_name.is_set || is_set(exporter_name.yfilter)) leaf_name_data.push_back(exporter_name.get_name_leafdata());

    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exporter-name")
    {
        exporter_name = value;
        exporter_name.value_namespace = name_space;
        exporter_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exporter-name")
    {
        exporter_name.yfilter = yfilter;
    }
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter" || name == "exporter-name")
        return true;
    return false;
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Exporter()
{

    yang_name = "exporter"; yang_parent_name = "flow-exporter"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic")
        return true;
    return false;
}

NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Statistic_()
    :
    memory_usage{YType::uint32, "memory-usage"},
    name{YType::str, "name"},
    used_by_flow_monitor{YType::str, "used-by-flow-monitor"}
{

    yang_name = "statistic"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(memory_usage.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(used_by_flow_monitor.yfilter);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto used_by_flow_monitor_name_datas = used_by_flow_monitor.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), used_by_flow_monitor_name_datas.begin(), used_by_flow_monitor_name_datas.end());
    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-by-flow-monitor")
    {
        used_by_flow_monitor.append(value);
    }
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "used-by-flow-monitor")
    {
        used_by_flow_monitor.yfilter = yfilter;
    }
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collector" || name == "memory-usage" || name == "name" || name == "used-by-flow-monitor")
        return true;
    return false;
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

    yang_name = "collector"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(bytes_dropped.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(exporter_state.yfilter)
	|| ydk::is_set(flow_bytes_dropped.yfilter)
	|| ydk::is_set(flow_bytes_sent.yfilter)
	|| ydk::is_set(flows_dropped.yfilter)
	|| ydk::is_set(flows_sent.yfilter)
	|| ydk::is_set(last_hour_bytes_sent.yfilter)
	|| ydk::is_set(last_hour_flows_sent.yfilter)
	|| ydk::is_set(last_hour_packest_sent.yfilter)
	|| ydk::is_set(last_minute_bytes_sent.yfilter)
	|| ydk::is_set(last_minute_flows_sent.yfilter)
	|| ydk::is_set(last_minute_packets.yfilter)
	|| ydk::is_set(last_second_bytes_sent.yfilter)
	|| ydk::is_set(last_second_flows_sent.yfilter)
	|| ydk::is_set(last_second_packets_sent.yfilter)
	|| ydk::is_set(option_data_bytes_dropped.yfilter)
	|| ydk::is_set(option_data_bytes_sent.yfilter)
	|| ydk::is_set(option_data_dropped.yfilter)
	|| ydk::is_set(option_data_sent.yfilter)
	|| ydk::is_set(option_template_bytes_dropped.yfilter)
	|| ydk::is_set(option_template_bytes_sent.yfilter)
	|| ydk::is_set(option_templates_dropped.yfilter)
	|| ydk::is_set(option_templates_sent.yfilter)
	|| ydk::is_set(packets_dropped.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(souce_port.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(template_bytes_dropped.yfilter)
	|| ydk::is_set(template_bytes_sent.yfilter)
	|| ydk::is_set(templates_dropped.yfilter)
	|| ydk::is_set(templates_sent.yfilter)
	|| ydk::is_set(transport_protocol.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_dropped.is_set || is_set(bytes_dropped.yfilter)) leaf_name_data.push_back(bytes_dropped.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (exporter_state.is_set || is_set(exporter_state.yfilter)) leaf_name_data.push_back(exporter_state.get_name_leafdata());
    if (flow_bytes_dropped.is_set || is_set(flow_bytes_dropped.yfilter)) leaf_name_data.push_back(flow_bytes_dropped.get_name_leafdata());
    if (flow_bytes_sent.is_set || is_set(flow_bytes_sent.yfilter)) leaf_name_data.push_back(flow_bytes_sent.get_name_leafdata());
    if (flows_dropped.is_set || is_set(flows_dropped.yfilter)) leaf_name_data.push_back(flows_dropped.get_name_leafdata());
    if (flows_sent.is_set || is_set(flows_sent.yfilter)) leaf_name_data.push_back(flows_sent.get_name_leafdata());
    if (last_hour_bytes_sent.is_set || is_set(last_hour_bytes_sent.yfilter)) leaf_name_data.push_back(last_hour_bytes_sent.get_name_leafdata());
    if (last_hour_flows_sent.is_set || is_set(last_hour_flows_sent.yfilter)) leaf_name_data.push_back(last_hour_flows_sent.get_name_leafdata());
    if (last_hour_packest_sent.is_set || is_set(last_hour_packest_sent.yfilter)) leaf_name_data.push_back(last_hour_packest_sent.get_name_leafdata());
    if (last_minute_bytes_sent.is_set || is_set(last_minute_bytes_sent.yfilter)) leaf_name_data.push_back(last_minute_bytes_sent.get_name_leafdata());
    if (last_minute_flows_sent.is_set || is_set(last_minute_flows_sent.yfilter)) leaf_name_data.push_back(last_minute_flows_sent.get_name_leafdata());
    if (last_minute_packets.is_set || is_set(last_minute_packets.yfilter)) leaf_name_data.push_back(last_minute_packets.get_name_leafdata());
    if (last_second_bytes_sent.is_set || is_set(last_second_bytes_sent.yfilter)) leaf_name_data.push_back(last_second_bytes_sent.get_name_leafdata());
    if (last_second_flows_sent.is_set || is_set(last_second_flows_sent.yfilter)) leaf_name_data.push_back(last_second_flows_sent.get_name_leafdata());
    if (last_second_packets_sent.is_set || is_set(last_second_packets_sent.yfilter)) leaf_name_data.push_back(last_second_packets_sent.get_name_leafdata());
    if (option_data_bytes_dropped.is_set || is_set(option_data_bytes_dropped.yfilter)) leaf_name_data.push_back(option_data_bytes_dropped.get_name_leafdata());
    if (option_data_bytes_sent.is_set || is_set(option_data_bytes_sent.yfilter)) leaf_name_data.push_back(option_data_bytes_sent.get_name_leafdata());
    if (option_data_dropped.is_set || is_set(option_data_dropped.yfilter)) leaf_name_data.push_back(option_data_dropped.get_name_leafdata());
    if (option_data_sent.is_set || is_set(option_data_sent.yfilter)) leaf_name_data.push_back(option_data_sent.get_name_leafdata());
    if (option_template_bytes_dropped.is_set || is_set(option_template_bytes_dropped.yfilter)) leaf_name_data.push_back(option_template_bytes_dropped.get_name_leafdata());
    if (option_template_bytes_sent.is_set || is_set(option_template_bytes_sent.yfilter)) leaf_name_data.push_back(option_template_bytes_sent.get_name_leafdata());
    if (option_templates_dropped.is_set || is_set(option_templates_dropped.yfilter)) leaf_name_data.push_back(option_templates_dropped.get_name_leafdata());
    if (option_templates_sent.is_set || is_set(option_templates_sent.yfilter)) leaf_name_data.push_back(option_templates_sent.get_name_leafdata());
    if (packets_dropped.is_set || is_set(packets_dropped.yfilter)) leaf_name_data.push_back(packets_dropped.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (souce_port.is_set || is_set(souce_port.yfilter)) leaf_name_data.push_back(souce_port.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (template_bytes_dropped.is_set || is_set(template_bytes_dropped.yfilter)) leaf_name_data.push_back(template_bytes_dropped.get_name_leafdata());
    if (template_bytes_sent.is_set || is_set(template_bytes_sent.yfilter)) leaf_name_data.push_back(template_bytes_sent.get_name_leafdata());
    if (templates_dropped.is_set || is_set(templates_dropped.yfilter)) leaf_name_data.push_back(templates_dropped.get_name_leafdata());
    if (templates_sent.is_set || is_set(templates_sent.yfilter)) leaf_name_data.push_back(templates_sent.get_name_leafdata());
    if (transport_protocol.is_set || is_set(transport_protocol.yfilter)) leaf_name_data.push_back(transport_protocol.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

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

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes-dropped")
    {
        bytes_dropped = value;
        bytes_dropped.value_namespace = name_space;
        bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporter-state")
    {
        exporter_state = value;
        exporter_state.value_namespace = name_space;
        exporter_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-bytes-dropped")
    {
        flow_bytes_dropped = value;
        flow_bytes_dropped.value_namespace = name_space;
        flow_bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-bytes-sent")
    {
        flow_bytes_sent = value;
        flow_bytes_sent.value_namespace = name_space;
        flow_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flows-dropped")
    {
        flows_dropped = value;
        flows_dropped.value_namespace = name_space;
        flows_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flows-sent")
    {
        flows_sent = value;
        flows_sent.value_namespace = name_space;
        flows_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hour-bytes-sent")
    {
        last_hour_bytes_sent = value;
        last_hour_bytes_sent.value_namespace = name_space;
        last_hour_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hour-flows-sent")
    {
        last_hour_flows_sent = value;
        last_hour_flows_sent.value_namespace = name_space;
        last_hour_flows_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hour-packest-sent")
    {
        last_hour_packest_sent = value;
        last_hour_packest_sent.value_namespace = name_space;
        last_hour_packest_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-minute-bytes-sent")
    {
        last_minute_bytes_sent = value;
        last_minute_bytes_sent.value_namespace = name_space;
        last_minute_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-minute-flows-sent")
    {
        last_minute_flows_sent = value;
        last_minute_flows_sent.value_namespace = name_space;
        last_minute_flows_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-minute-packets")
    {
        last_minute_packets = value;
        last_minute_packets.value_namespace = name_space;
        last_minute_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-second-bytes-sent")
    {
        last_second_bytes_sent = value;
        last_second_bytes_sent.value_namespace = name_space;
        last_second_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-second-flows-sent")
    {
        last_second_flows_sent = value;
        last_second_flows_sent.value_namespace = name_space;
        last_second_flows_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-second-packets-sent")
    {
        last_second_packets_sent = value;
        last_second_packets_sent.value_namespace = name_space;
        last_second_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-data-bytes-dropped")
    {
        option_data_bytes_dropped = value;
        option_data_bytes_dropped.value_namespace = name_space;
        option_data_bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-data-bytes-sent")
    {
        option_data_bytes_sent = value;
        option_data_bytes_sent.value_namespace = name_space;
        option_data_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-data-dropped")
    {
        option_data_dropped = value;
        option_data_dropped.value_namespace = name_space;
        option_data_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-data-sent")
    {
        option_data_sent = value;
        option_data_sent.value_namespace = name_space;
        option_data_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-template-bytes-dropped")
    {
        option_template_bytes_dropped = value;
        option_template_bytes_dropped.value_namespace = name_space;
        option_template_bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-template-bytes-sent")
    {
        option_template_bytes_sent = value;
        option_template_bytes_sent.value_namespace = name_space;
        option_template_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-templates-dropped")
    {
        option_templates_dropped = value;
        option_templates_dropped.value_namespace = name_space;
        option_templates_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-templates-sent")
    {
        option_templates_sent = value;
        option_templates_sent.value_namespace = name_space;
        option_templates_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-dropped")
    {
        packets_dropped = value;
        packets_dropped.value_namespace = name_space;
        packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "souce-port")
    {
        souce_port = value;
        souce_port.value_namespace = name_space;
        souce_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-bytes-dropped")
    {
        template_bytes_dropped = value;
        template_bytes_dropped.value_namespace = name_space;
        template_bytes_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-bytes-sent")
    {
        template_bytes_sent = value;
        template_bytes_sent.value_namespace = name_space;
        template_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templates-dropped")
    {
        templates_dropped = value;
        templates_dropped.value_namespace = name_space;
        templates_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templates-sent")
    {
        templates_sent = value;
        templates_sent.value_namespace = name_space;
        templates_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol = value;
        transport_protocol.value_namespace = name_space;
        transport_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes-dropped")
    {
        bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "exporter-state")
    {
        exporter_state.yfilter = yfilter;
    }
    if(value_path == "flow-bytes-dropped")
    {
        flow_bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "flow-bytes-sent")
    {
        flow_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "flows-dropped")
    {
        flows_dropped.yfilter = yfilter;
    }
    if(value_path == "flows-sent")
    {
        flows_sent.yfilter = yfilter;
    }
    if(value_path == "last-hour-bytes-sent")
    {
        last_hour_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "last-hour-flows-sent")
    {
        last_hour_flows_sent.yfilter = yfilter;
    }
    if(value_path == "last-hour-packest-sent")
    {
        last_hour_packest_sent.yfilter = yfilter;
    }
    if(value_path == "last-minute-bytes-sent")
    {
        last_minute_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "last-minute-flows-sent")
    {
        last_minute_flows_sent.yfilter = yfilter;
    }
    if(value_path == "last-minute-packets")
    {
        last_minute_packets.yfilter = yfilter;
    }
    if(value_path == "last-second-bytes-sent")
    {
        last_second_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "last-second-flows-sent")
    {
        last_second_flows_sent.yfilter = yfilter;
    }
    if(value_path == "last-second-packets-sent")
    {
        last_second_packets_sent.yfilter = yfilter;
    }
    if(value_path == "option-data-bytes-dropped")
    {
        option_data_bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "option-data-bytes-sent")
    {
        option_data_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "option-data-dropped")
    {
        option_data_dropped.yfilter = yfilter;
    }
    if(value_path == "option-data-sent")
    {
        option_data_sent.yfilter = yfilter;
    }
    if(value_path == "option-template-bytes-dropped")
    {
        option_template_bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "option-template-bytes-sent")
    {
        option_template_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "option-templates-dropped")
    {
        option_templates_dropped.yfilter = yfilter;
    }
    if(value_path == "option-templates-sent")
    {
        option_templates_sent.yfilter = yfilter;
    }
    if(value_path == "packets-dropped")
    {
        packets_dropped.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "souce-port")
    {
        souce_port.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "template-bytes-dropped")
    {
        template_bytes_dropped.yfilter = yfilter;
    }
    if(value_path == "template-bytes-sent")
    {
        template_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "templates-dropped")
    {
        templates_dropped.yfilter = yfilter;
    }
    if(value_path == "templates-sent")
    {
        templates_sent.yfilter = yfilter;
    }
    if(value_path == "transport-protocol")
    {
        transport_protocol.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool NetFlow::Statistics::Statistic::Server::FlowExporters::FlowExporter::Exporter::Statistic_::Collector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes-dropped" || name == "bytes-sent" || name == "destination-address" || name == "destination-port" || name == "exporter-state" || name == "flow-bytes-dropped" || name == "flow-bytes-sent" || name == "flows-dropped" || name == "flows-sent" || name == "last-hour-bytes-sent" || name == "last-hour-flows-sent" || name == "last-hour-packest-sent" || name == "last-minute-bytes-sent" || name == "last-minute-flows-sent" || name == "last-minute-packets" || name == "last-second-bytes-sent" || name == "last-second-flows-sent" || name == "last-second-packets-sent" || name == "option-data-bytes-dropped" || name == "option-data-bytes-sent" || name == "option-data-dropped" || name == "option-data-sent" || name == "option-template-bytes-dropped" || name == "option-template-bytes-sent" || name == "option-templates-dropped" || name == "option-templates-sent" || name == "packets-dropped" || name == "packets-sent" || name == "souce-port" || name == "source-address" || name == "template-bytes-dropped" || name == "template-bytes-sent" || name == "templates-dropped" || name == "templates-sent" || name == "transport-protocol" || name == "vrf-name")
        return true;
    return false;
}


}
}

